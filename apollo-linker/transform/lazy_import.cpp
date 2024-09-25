#include "lazy_import.hpp"
#include "../utility/llvm.hpp"
#include <xstd/random.hpp>

#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

// Converts invocations of DLL imported calls into lazy import stubs.
//
void linker::transform::lazy_import( collection& col )
{
	// Skip if the collection does not need imports.
	//
	if ( col.imports.empty() )
		return;

	// Enumerate every LLVM object:
	//
	for ( auto& obj : col.working_set )
	{
		auto& mod = obj->llvm;
		if ( !mod ) continue;

		// Skip if it has no imports.
		//
		bool has_import = false;
		for ( auto&& [name, attr] : obj->lto.symbols() )
			if ( ( attr & LTO_SYMBOL_DEFINITION_MASK ) == LTO_SYMBOL_DEFINITION_UNDEFINED && ( has_import = col.imports.contains( name ) ) )
				break;
		if ( !has_import ) continue;

		// Add a reference to the decryption helper.
		// - uint64_t __crt_*_single( uint64_t intptr, uint64_t key) 
		//
		LLVMTypeRef enc_fn_p[] = { LLVMInt64Type(), LLVMInt64Type() };
		LLVMTypeRef enc_fn_t = LLVMFunctionType(LLVMInt64Type(), enc_fn_p, 2, 0);

		auto ref_p_dec_enc = [ & ]( const char* name )
		{
			LLVMValueRef fn = LLVMGetNamedFunction( mod, name );
			if ( fn ) return fn;

			fn = LLVMAddFunction( mod, name, enc_fn_t );
			LLVMSetVisibility( fn, LLVMVisibility::LLVMDefaultVisibility );
			LLVMSetLinkage( fn, LLVMExternalLinkage );
			return fn;
		};
		LLVMValueRef dec_single_ptr = ref_p_dec_enc( "__crt_decrypt_single" );
		LLVMValueRef enc_single_ptr = ref_p_dec_enc( "__crt_encrypt_single" );

		// Add a reference to the resolver.
		//
		LLVMValueRef resolver = LLVMGetNamedFunction( mod, "__crt_resolve_import" );
		LLVMTypeRef resolver_params[] = { LLVMInt32Type(), LLVMInt32Type() };
		LLVMTypeRef resolver_type = LLVMFunctionType( LLVMInt64Type(), resolver_params, 2, 0 );
		if ( !resolver )
		{
			resolver = LLVMAddFunction( mod, "__crt_resolve_import", resolver_type );
			LLVMSetVisibility( resolver, LLVMVisibility::LLVMDefaultVisibility );
			LLVMSetLinkage( resolver, LLVMExternalLinkage );
		}

		// Enumerate DLLImports:
		//
		for ( auto func = LLVMGetFirstFunction( mod ); func; func = LLVMGetNextFunction( func ) )
		{
			const char* func_name = LLVMGetValueName( func );
			if ( LLVMGetDLLStorageClass( func ) != LLVMDLLStorageClass::LLVMDLLImportStorageClass )
				if ( LLVMGetFirstBasicBlock( func ) || col.public_symbols.contains( func_name ) )
					continue;

			if ( auto iit = col.imports.find( func_name ); iit != col.imports.end() )
			{
				// Mark the resolver referenced.
				//
				obj->external_symbols.emplace_back( 
					ref::allocate<symbol>( symbol{ .name = "__crt_resolve_import", .storage_class = coff::storage_class_id::public_symbol } ) 
				);
			
				// Get the function type.
				//
				LLVMTypeRef func_type = LLVMGlobalGetValueType( func );
				LLVMTypeRef func_ptr_type = LLVMPointerType( func_type, 0 );
			
				// Remove DLL import attributes and reset linkage/visibility.
				//
				LLVMSetDLLStorageClass( func, LLVMDLLStorageClass::LLVMDefaultStorageClass );
				LLVMSetUnnamedAddr( func, LLVMUnnamedAddr::LLVMNoUnnamedAddr );
				LLVMSetVisibility( func, LLVMVisibility::LLVMDefaultVisibility );
				LLVMSetLinkage( func, LLVMLinkage::LLVMLinkOnceAnyLinkage );
			
				// Pick the key encrypting the pointer.
				//
				auto seed = xstd::lce_64_n( xstd::make_crandom<uint64_t>( 0 ) ^ xstd::make_hash( iit->second.first ) );
				LLVMValueRef cache_key = LLVMConstInt( LLVMInt64Type(), xstd::lce_64( seed ), false );
				LLVMValueRef cache_null = LLVMConstInt( LLVMInt64Type(), xstd::lce_64( seed ), false );
			
				// Create or reference the global caching for the imported pointer.
				//
				std::string name = "___imported_" + iit->second.first;
				LLVMValueRef cache_enc = LLVMGetNamedGlobal( mod, name.c_str() );
				if ( !cache_enc )
				{
					cache_enc = LLVMAddGlobal( mod, LLVMInt64Type(), name.c_str() );
					LLVMSetVisibility( cache_enc, LLVMVisibility::LLVMDefaultVisibility );
					LLVMSetLinkage( cache_enc, LLVMLinkage::LLVMLinkOnceAnyLinkage );
					LLVMSetInitializer( cache_enc, cache_null );
				}
			
				// Create all three basic blocks we need.
				//
				LLVMBuilderRef bb = LLVMCreateBuilder();
				LLVMBasicBlockRef entry_block = LLVMAppendBasicBlock( func, "entry" );
				LLVMBasicBlockRef forward_block = LLVMAppendBasicBlock( func, "fwd" );
				LLVMBasicBlockRef resolver_block = LLVMAppendBasicBlock( func, "resolve" );
			
				// Jump to resolving logic if cache is not set.
				//
				LLVMPositionBuilderAtEnd( bb, entry_block );
				LLVMValueRef first_time = LLVMBuildICmp( bb, LLVMIntEQ, llvm::load( bb, LLVMInt64Type(), cache_enc, "tmp0" ), cache_null, "" );
				llvm::set_unlikely( LLVMBuildCondBr( bb, first_time, resolver_block, forward_block ) );
			
				// Decrypt the pointer, invoke the function and return the result.
				//
				LLVMPositionBuilderAtEnd( bb, forward_block );
				LLVMValueRef dec_args[] = { llvm::loadi64( bb, cache_enc ), cache_key };
				LLVMValueRef fn_ptr = LLVMBuildCall2( bb, enc_fn_t, dec_single_ptr, dec_args, 2, "" );
				fn_ptr = LLVMBuildIntToPtr( bb, fn_ptr, func_ptr_type, "" );
			
				std::vector<LLVMValueRef> params( LLVMCountParams( func ) );
				LLVMGetParams( func, params.data() );
				if ( LLVMGetTypeKind( LLVMGetReturnType( func_type ) ) == LLVMTypeKind::LLVMVoidTypeKind )
				{
					LLVMBuildCall2( bb, func_type, fn_ptr, params.data(), params.size(), "" );
					if (col.module_type == satella::module_type::loader) {
						auto cty = llvm::make_func_type(LLVMVoidType(), {});
						LLVMBuildCall2( bb, cty, llvm::inline_asm( cty, "", "~{ymm6},~{ymm7},~{ymm8},~{ymm9},~{ymm10},~{ymm11},~{ymm12},~{ymm13},~{ymm14},~{ymm15}" ), nullptr, 0, "" );
					}
					LLVMBuildRetVoid( bb );
				}
				else
				{
					LLVMValueRef result = LLVMBuildCall2( bb, func_type, fn_ptr, params.data(), params.size(), "" );
					if (col.module_type == satella::module_type::loader) {
						auto cty = llvm::make_func_type(LLVMVoidType(), {});
						LLVMBuildCall2(bb, cty, llvm::inline_asm(cty, "", "~{ymm6},~{ymm7},~{ymm8},~{ymm9},~{ymm10},~{ymm11},~{ymm12},~{ymm13},~{ymm14},~{ymm15}"), nullptr, 0, "");
					}
					LLVMBuildRet( bb, result );
				}
			
				// Resolve the function pointer and update cache.
				//
				LLVMPositionBuilderAtEnd( bb, resolver_block );
			
				LLVMValueRef resolver_args[] = {
					LLVMConstInt( LLVMInt32Type(), xstd::basic_ihash<xstd::xcrc, const char*>{}( iit->second.second.c_str() ), false ),
					LLVMConstInt( LLVMInt32Type(), xstd::basic_xhash<xstd::xcrc, const char*>{}( iit->second.first.c_str() ), false )
				};
				LLVMValueRef resolved_ptr = LLVMBuildCall2( bb, resolver_type, resolver, resolver_args, 2, "" );
			
				LLVMValueRef enc_args[] = { resolved_ptr, cache_key };
				LLVMValueRef efn_ptr = LLVMBuildCall2( bb, enc_fn_t, enc_single_ptr, enc_args, 2, "" );
				LLVMBuildStore( bb, efn_ptr, cache_enc );
				LLVMBuildBr( bb, forward_block );
			
				// Add attributes and verify.
				//
				LLVMDisposeBuilder( bb );
				llvm::set_enum_attribute( func, col.is_debug() ? "noinline" : "alwaysinline" );
				if ( col.llvm_verify )
					LLVMVerifyFunction( func, LLVMVerifierFailureAction::LLVMAbortProcessAction );
			}
		}
	}
}