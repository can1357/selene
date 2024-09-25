#include "syscall_lifter.hpp"
#include "../utility/llvm.hpp"

#include <xstd/random.hpp>
#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

#include <xstd/algorithm.hpp>
#include <xstd/formatting.hpp>
#include <apollo/attributes.hpp>
#include <apollo/details/crt_syscall_hash.hpp>

void linker::transform::lift_syscalls( collection& col )
{
	 // Enumerate every LLVM object:
	 //
	 for ( auto& obj : col.working_set )
	 {
		  auto& mod = obj->llvm;
		  if ( !mod ) continue;

		  // If module contains any symbols:
		  //
		  for ( LLVMValueRef func : obj->attributes.move( "sdk_syminvoke" ) )
		  {
				// Decode the symbol name.
				//
				std::string_view name = LLVMGetValueName( func );
				auto name_it = name.find( "@$0" );
				if ( name_it == std::string::npos )
					 continue;

				std::string sym_name = {};
				name.remove_prefix( name_it );
				while ( name.starts_with( "@$0" ) )
				{
					 auto hi = name[ 3 ] - 'A';
					 auto lo = name[ 4 ] - 'A';
					 sym_name.push_back( ( hi << 4 ) | ( lo ) );
					 name.remove_prefix( 3 + 2 );
				}

				// Rename the function.
				//
				LLVMSetValueName( func, sym_name.data() );

				// If it does not look like a syscall, skip.
				//
				if ( !sym_name.starts_with( "Nt" ) || !sym_name.ends_with( "$ntoskrnl.exe" ) )
					 continue;
				sym_name.resize( sym_name.size()  - xstd::strlen( "$ntoskrnl.exe" ) );

				// Collect the paramters, first argument is the count, second argument is the array.
				//
				std::vector<LLVMValueRef> ops( LLVMCountParams( func ) );
				LLVMGetParams( func, ops.data() );
				fassert( ops.size() == 2 );

				// Delete the original code.
				//
				for ( auto bb = LLVMGetFirstBasicBlock( func ); bb; )
					 LLVMDeleteBasicBlock( std::exchange( bb, LLVMGetNextBasicBlock( bb ) ) );

				// Create the global caching for the imported pointer.
				//
				auto seed = xstd::lce_64_n( xstd::make_crandom<uint64_t>( 3 ) ^ xstd::make_hash( name ) );
				LLVMValueRef inull = LLVMConstInt( LLVMInt64Type(), xstd::lce_64( seed ), false );
				auto [pglb, inserted2] = llvm::get_global<false>(
					mod,
					( "__idx_" + sym_name ).data(),
					LLVMInt64Type(),
					inull
				);

				// Create all three basic blocks we need.
				//
				LLVMBuilderRef bb = LLVMCreateBuilder();
				LLVMBasicBlockRef entry_block = LLVMAppendBasicBlock( func, "" );
				LLVMBasicBlockRef forward_block = LLVMAppendBasicBlock( func, "" );
				LLVMBasicBlockRef resolver_block = LLVMAppendBasicBlock( func, "" );

				// Jump to resolving logic if cache is not set.
				//
				LLVMPositionBuilderAtEnd( bb, entry_block );
				LLVMValueRef first_time = LLVMBuildICmp( bb, LLVMIntEQ, llvm::loadi64( bb, pglb ), inull, "" );
				llvm::set_unlikely( LLVMBuildCondBr( bb, first_time, resolver_block, forward_block ) );

				// Save stack pointer.
				//
				LLVMPositionBuilderAtEnd( bb, forward_block );

				// Pass the syscall index, argument count and the argument array to __crt_invoke_syscall.
				//
				auto [pres, pres_ty, inserted] = llvm::get_function_ex<true>(
					 mod,
					 "__crt_invoke_syscall",
					 LLVMInt64Type(),
					 { LLVMInt64Type(), LLVMInt64Type(), LLVMPointerType( LLVMInt64Type(), 0 ) },
					 nullptr
				);
				std::array args = {
					 llvm::loadi64( bb, pglb ),
					 ops[ 0 ], ops[ 1 ]
				};
				LLVMBuildRet( bb, LLVMBuildCall2( bb, pres_ty, pres, args.data(), args.size(), "" ) );

				// Resolve the syscall index and update cache.
				//
				LLVMPositionBuilderAtEnd( bb, resolver_block );
				LLVMValueRef resolver_arg = LLVMConstInt( LLVMInt32Type(), crt::details::make_syscall_hash( sym_name.c_str() ), false );

				auto [sysres, sysres_ty, sysres_fnd] = llvm::get_function_ex(mod, "__crt_resolve_syscall_idx", LLVMInt64Type(), { LLVMInt32Type() }, obj.get());
				LLVMValueRef syscall_idx = LLVMBuildCall2(
					 bb, sysres_ty, sysres,
					 &resolver_arg,
					 1, ""
				);
				LLVMBuildStore( bb, syscall_idx, pglb );
				LLVMBuildBr( bb, forward_block );

				// Add attributes and verify.
				//
				LLVMDisposeBuilder( bb );
				llvm::remove_enum_attribute( func, "noinline" );
				llvm::set_enum_attribute( func, "alwaysinline" );
				if ( col.llvm_verify )
					 LLVMVerifyFunction( func, LLVMVerifierFailureAction::LLVMAbortProcessAction );
		  }
	 }
}
