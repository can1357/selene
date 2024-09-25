#include "virtualization.hpp"
#include "../utility/llvm.hpp"

#include <xstd/random.hpp>
#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>
#include <llvm-c/DebugInfo.h>
#include <llvm-c/Comdat.h>

#include <xstd/algorithm.hpp>
#include <wasm/image.hpp>
#include <xstd/formatting.hpp>
#include <apollo/vm_impl.hpp>

#include "attribute_normalization.hpp"

static const char* vm_target = "wasm64";
static const char* vm_triple = "wasm64-unknown-emscripten";

struct block_instance
{
	bool is_loop = false;
	std::shared_ptr<block_instance> parent = {};
	size_t block_idx;
	std::optional<size_t> else_idx;
	std::optional<size_t> end_idx;
};

struct instruction_entry
{
	// Input.
	//
	wasm::vm_opcode opcode = {};
	xstd::hash_t arguments_hash = {};
	std::shared_ptr<void> arguments = {};
	size_t begin_offset = 0;
	size_t end_offset = 0;
	wasm::relocation_entry* relocation = nullptr;
	std::shared_ptr<block_instance> block = {};

	// Output.
	//
	LLVMValueRef fn;

	// Consumes the argument / relocation.
	//
	wasm::relocation_entry* pop_reloc()
	{
		return std::exchange( relocation, nullptr );
	}
	template<typename T>
	T pop_arg()
	{
		if constexpr ( std::is_same_v<T, void> )
		{
			arguments.reset();
		}
		else
		{
			T val = *( T* ) arguments.get();
			arguments.reset();
			return val;
		}
	}

};

void linker::transform::convert_virtual_routines( collection& col )
{
	// Initialize the required LLVM modules.
	//
	LLVMInitializeAllTargetInfos();
	LLVMInitializeAllTargets();
	LLVMInitializeAllTargetMCs();
	LLVMInitializeAllAsmParsers();
	LLVMInitializeAllAsmPrinters();

	auto normalize_function_attr = [ & ] ( LLVMValueRef fn )
	{
		transform::set_default_attributes( col, fn );
		llvm::set_enum_attribute( fn, "nounwind" );
	};

	// Create the target machine.
	//
	LLVMTargetRef target = LLVMGetTargetFromName( vm_target );
	if ( !target ) xstd::error( "Architecture targetted by the Virtual machine cannot be found." );

	LLVMTargetMachineRef target_machine = LLVMCreateTargetMachine(
		target,
		vm_triple,
		"",
		"",
		LLVMCodeGenLevelAggressive,
		LLVMRelocStatic,
		LLVMCodeModelDefault
	);
	if ( !target ) xstd::error( "Failed to create target virtual machine." );

	// For each target tagged with the 'virtualize' attribute.
	//
	std::unordered_map<std::string, std::vector<std::pair<ref::strong_ptr<object>, LLVMValueRef>>> all_targets;
	for ( auto& obj : col.working_set )
	{
		if ( !obj->llvm )
			continue;
		for ( auto& entry : obj->attributes.find( "virtualize" ) )
		{
			if ( LLVMGetFirstBasicBlock( entry ) )
				all_targets[ LLVMGetValueName( entry ) ].emplace_back( obj, entry );
		}
	}

	for ( auto& [target, targets] : all_targets )
	{
		// Log progress.
		//
		if ( !targets.empty() )
			xstd::log( "Compiling WASM routine '%s'...\n", target );
		else
			xstd::warning( "Function '%s' is not found although it was marked to be virtualized.", target );

		// For each symbol:
		//
		for ( auto& [obj, target_fn] : targets )
		{
			auto& mod = obj->llvm;

			// Cache for opcode deduplication.
			//
			std::unordered_map<std::tuple<uint16_t, uint64_t, uint64_t>, LLVMValueRef, xstd::hasher<>> func_cache;

			// If it's already virtualized in an other object, remove the rest of the definitions.
			//
			if ( obj != targets.front().first )
			{
				for ( auto bb = LLVMGetFirstBasicBlock( target_fn ); bb; )
					LLVMDeleteBasicBlock( std::exchange( bb, LLVMGetNextBasicBlock( bb ) ) );
				LLVMSetLinkage( target_fn, LLVMExternalLinkage );
				LLVMSetVisibility( target_fn, LLVMDefaultVisibility );
				LLVMGlobalClearMetadata( target_fn );
				LLVMSetComdat( target_fn, nullptr );

				// Remove the public function and make it an external.
				//
				for ( auto& scn : obj->sections )
				{
					std::erase_if( scn->symbols, [ &, target = &target ] ( auto& sym )
					{
						return sym && sym->name == *target;
					} );
				}
				auto& sym = obj->external_symbols.emplace_back( ref::allocate<symbol>() );
				sym->storage_class = coff::storage_class_id::public_symbol;
				sym->name = target;
				continue;
			}

			// Insert an alloca at the beginning for complex calling conventions.
			//
			LLVMBuilderRef bb = LLVMCreateBuilder();
			LLVMPositionBuilderBefore( bb, LLVMGetFirstInstruction( LLVMGetFirstBasicBlock( target_fn ) ) );
			LLVMValueRef callspace = LLVMBuildArrayAlloca( bb, LLVMInt8Type(), LLVMConstInt( LLVMInt64Type(), 4096, false ), "" );
			LLVMSetAlignment( callspace, 0x10 );
			size_t callspace_size = 0;

			// Declare helpers for aggregate conversion.
			//
			auto is_aggregate = [ & ] ( LLVMTypeRef type )
			{
				LLVMTypeKind kind = LLVMGetTypeKind( type );
				switch ( kind )
				{
					case LLVMIntegerTypeKind:
						return llvm::bit_size( mod, type ) > 64;

					case LLVMLabelTypeKind:
					case LLVMFunctionTypeKind:
						xstd::error( "Passing label as an argument from a VM!\n" );

					case LLVMPointerTypeKind:
					case LLVMVoidTypeKind:
						return false;

					default:
						return true;
						break;
				}
			};

			// Enumerate every basic block in the target function:
			//
			for ( auto bblock = LLVMGetFirstBasicBlock( target_fn ); bblock; bblock = LLVMGetNextBasicBlock( bblock ) )
			{
				// Enumerate every instruction:
				//
				for ( auto ins = LLVMGetFirstInstruction( bblock ); ins; )
				{
					// If load or store:
					//
					LLVMOpcode opcode = LLVMGetInstructionOpcode( ins );
					if ( opcode == LLVMStore || opcode == LLVMLoad )
					{
						// Check if we have to translate the address space access:
						//
						int operand_id = opcode == LLVMStore ? 1 : 0;
						LLVMValueRef ptr = LLVMGetOperand( ins, operand_id );
						const char* translate_fn_name = nullptr;
						switch (LLVMGetPointerAddressSpace(LLVMTypeOf(ptr)))
						{
							case 256: // gs
								translate_fn_name = "__crt_translate_gs"; 
								break;
							case 257: // fs
								translate_fn_name = "__crt_translate_fs";
								break;
							default:
								break;
						}

						// Build an externally translated address if so.
						//
						if (translate_fn_name) {
							auto [translate_fn, translate_fn_ty, translate_fn_fnd] = llvm::get_function_ex(mod, translate_fn_name, LLVMInt64Type(), { LLVMInt64Type() }, obj.get());
							LLVMPositionBuilderBefore(bb, ins);
							LLVMValueRef iptr = LLVMBuildPtrToInt(bb, ptr, LLVMInt64Type(), "");
							iptr = LLVMBuildCall2(bb, translate_fn_ty, translate_fn, &iptr, 1, "");
							ptr = LLVMBuildIntToPtr(bb, iptr, LLVMPointerType(LLVMVoidType(), 0), "");
							LLVMSetOperand(ins, operand_id, ptr);
						}
					}
					// If call:
					//
					else if ( opcode == LLVMCall )
					{
						// Get target information.
						//
						LLVMValueRef fn = LLVMGetCalledValue( ins );
						int fn_cc = LLVMGetInstructionCallConv( ins );
						LLVMTypeRef fn_type = LLVMGetCalledFunctionType( ins );
						std::string_view fn_name = LLVMGetValueName( fn );

						// If arch-independent LLVM intrinsic, skip.
						//
						bool is_arch_intrinsic = fn_name.starts_with( "llvm.x86" );
						if ( !is_arch_intrinsic && fn_name.starts_with( "llvm." ) )
						{
							ins = LLVMGetNextInstruction( ins );
							continue;
						}

						// Get input and output details.
						//
						std::vector<LLVMValueRef> target_operands( LLVMGetNumOperands( ins ) - 1 );
						for ( size_t n = 0; n != target_operands.size(); n++ )
							target_operands[ n ] = LLVMGetOperand( ins, n );
						std::vector<LLVMTypeRef> target_types( target_operands.size() );
						for ( size_t n = 0; n != target_operands.size(); n++ )
							target_types[ n ] = LLVMTypeOf( target_operands[ n ] );
						LLVMTypeRef target_rettype = LLVMGetReturnType( fn_type );

						// Skip if we don't have to build a trampoline.
						//
						bool is_inline_asm = LLVMGetValueKind( fn ) == LLVMInlineAsmValueKind;
						bool is_vararg = LLVMIsFunctionVarArg( fn_type );
						bool is_complex = xstd::find_if( target_types, is_aggregate ) || is_aggregate( target_rettype );
						bool is_indirect = !is_inline_asm && !LLVMIsConstant( fn );
						if ( !is_inline_asm && !is_vararg && !is_arch_intrinsic && !is_complex && !is_indirect )
						{
							ins = LLVMGetNextInstruction( ins );
							continue;
						}

						// Start hashing the function.
						//
						std::string trampoline_hash_sink;
						std::string inline_asm_string = "";
						if ( is_inline_asm )
						{
							inline_asm_string = xstd::fmt::as_string( fn );
							trampoline_hash_sink += inline_asm_string;
						}
						else
						{
							trampoline_hash_sink += fn_name.empty() ? xstd::fmt::as_string( fn ) : fn_name;
						}

						// If inline asm has "J" or "i", do not pass constant arguments indirectly.
						//
						bool inline_asm_has_const_specifier = false;
						if ( is_inline_asm )
						{
							if ( size_t n = inline_asm_string.rfind( "\", \"" ); n != std::string::npos )
							{
								auto subview = std::string_view{ inline_asm_string }.substr( n + 4 );
								while ( !subview.empty() )
								{
									auto p = subview.find_first_of( ",\\\"" );
									if ( p == std::string::npos )
										p = subview.size() - 1;
									auto sv = subview.substr( 0, p );

									inline_asm_has_const_specifier |= ( sv == "Jr" ) || ( sv == "i" );
									if ( inline_asm_has_const_specifier )
										break;
									subview.remove_prefix( p + 1 );
									break;
								}
							}
						}

						// Build a list of instructions for the trampoline to fetch values and a parameter list for our call.
						//
						using fn_directive = std::function<LLVMValueRef( LLVMBuilderRef, LLVMValueRef /*fn if relevant*/, LLVMValueRef /*value if relevant*/ )>;
						std::vector<fn_directive> operand_getters( target_operands.size() );
						fn_directive target_getter = {};
						fn_directive ret_handler = {};
						std::vector<LLVMValueRef> forwarded_parameters = {};

						// If indirect, pass the function as the first argument.
						//
						if ( is_indirect )
						{
							forwarded_parameters.emplace_back( fn );
							target_getter = [ ] ( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef ) -> LLVMValueRef { return LLVMGetParam( fn, 0 ); };
						}
						else
						{
							target_getter = [ f = fn ] ( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef ) -> LLVMValueRef { return f; };
						}

						// Declare common redirection helper.
						//
						size_t local_callspace_it = 0;
						LLVMTypeRef retval_type = nullptr;
						auto forward_operand = [ & ] ( LLVMTypeRef type, LLVMValueRef value /*If no value passed, treated as retval, returned function serves two purposes based on the arguments*/ ) -> fn_directive
						{
							// If inline assembly with constant inputs and the value is constant, propagate the value.
							//
							if ( value && is_inline_asm && LLVMIsConstant( value ) && inline_asm_has_const_specifier )
							{
								trampoline_hash_sink += xstd::fmt::as_string( value );
								return [ value ] ( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef _ ) -> LLVMValueRef { return value; };
							}

							// Pass directly if not aggregate.
							//
							size_t idx = forwarded_parameters.size();
							if ( !is_aggregate( type ) )
							{
								if ( !value )
								{
									retval_type = type;
									return[ is_void = LLVMGetTypeKind( type ) == LLVMVoidTypeKind ]( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef value )->LLVMValueRef
									{
										if ( fn )
										{
											if ( is_void )
												LLVMBuildRetVoid( bb );
											else
												LLVMBuildRet( bb, value );
											return nullptr;
										}
										else
										{
											return value;
										}
									};
								}

								forwarded_parameters.emplace_back( value );
								return [ n = idx ] ( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef value ) -> LLVMValueRef { return LLVMGetParam( fn, n ); };
							}

							// Bitcast into a single register if it fits.
							//
							size_t byte_length = llvm::size( mod, type );
							if ( byte_length <= 8 )
							{
								if ( !value )
								{
									retval_type = LLVMInt64Type();
									return [ mod, type ] ( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef value )->LLVMValueRef
									{
										if ( fn )
										{
											LLVMBuildRet( bb, llvm::bit_cast( bb, mod, value, LLVMInt64Type() ) );
											return nullptr;
										}
										else
										{
											return llvm::bit_cast( bb, mod, value, type );
										}
									};
								}

								forwarded_parameters.emplace_back( llvm::bit_cast( bb, mod, value, LLVMInt64Type() ) );
								return [ mod, type = type, n = idx ] ( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef )->LLVMValueRef { return llvm::bit_cast( bb, mod, LLVMGetParam( fn, n ), type ); };
							}

							// Store into the callspace otherwise.
							//
							size_t offset = local_callspace_it;
							local_callspace_it += byte_length;
							callspace_size = std::max( callspace_size, local_callspace_it );

							LLVMValueRef index = LLVMConstInt( LLVMInt64Type(), offset, false );
							LLVMValueRef ptr = LLVMBuildInBoundsGEP2( bb, LLVMInt64Type(), callspace, &index, 1, "" );
							ptr = LLVMBuildPointerCast( bb, ptr, LLVMPointerType( type, 0 ), "" );

							if ( !value )
							{
								forwarded_parameters.emplace_back( ptr );
								retval_type = LLVMVoidType();
								return [ ptr, type, n = idx ] ( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef value )->LLVMValueRef
								{
									if ( fn )
									{
										LLVMBuildStore( bb, value, LLVMGetParam( fn, n ) );
										LLVMBuildRetVoid( bb );
										return nullptr;
									}
									else
									{
										return llvm::load( bb, type, ptr, "" );
									}
								};
							}
							else
							{
								LLVMBuildStore( bb, value, ptr );
								forwarded_parameters.emplace_back( ptr );
								return [ type, n = idx ] ( LLVMBuilderRef bb, LLVMValueRef fn, LLVMValueRef ) -> LLVMValueRef 
								{ 
									return llvm::load( bb, type, LLVMGetParam( fn, n ), "" ); 
								};
							}
						};

						// Pass each argument and reserve the retval.
						//
						LLVMPositionBuilderBefore( bb, ins );
						for( size_t n = 0; n != target_operands.size(); n++ )
							operand_getters[ n ] = forward_operand( target_types[ n ], target_operands[ n ] );
						ret_handler = forward_operand( target_rettype, nullptr );

						// Create the trampoline.
						//
						std::vector<LLVMTypeRef> typelist( forwarded_parameters.size() );
						for ( size_t n = 0; n != typelist.size(); n++ )
							typelist[ n ] = LLVMTypeOf( forwarded_parameters[ n ] );

						// Create the trampoline name.
						//
						xstd::hash_t trampoline_hash = xstd::make_hash( trampoline_hash_sink, xstd::fmt::as_string( typelist ) );
						auto [trampoline, trampoline_ty, trampoline_inserted] = llvm::get_function_ex<false>(
							mod,
							xstd::fmt::str( "wasm_trampoline.%s.%llx", fn_name.empty() ? ( is_inline_asm ? "asm" : "indirect" ) : fn_name.data(), trampoline_hash.as64() ).data(),
							retval_type,
							typelist
						);
						LLVMSetUnnamedAddr( trampoline, LLVMGlobalUnnamedAddr );
						LLVMSetLinkage( trampoline, LLVMLinkOnceAnyLinkage );
						llvm::set_enum_attribute( trampoline, "alwaysinline" );
						normalize_function_attr( trampoline );

						// Build the redirection block.
						//
						if ( trampoline_inserted )
						{
							LLVMPositionBuilderAtEnd( bb, LLVMAppendBasicBlock( trampoline, "" ) );
							std::vector<LLVMValueRef> params( operand_getters.size() );
							for ( size_t n = 0; n != params.size(); n++ )
								params[ n ] = operand_getters[ n ]( bb, trampoline, nullptr );
							LLVMValueRef target = target_getter( bb, trampoline, nullptr );
							LLVMValueRef redirection = LLVMBuildCall2( bb, fn_type, target, params.data(), params.size(), "" );
							LLVMSetInstructionCallConv( redirection, fn_cc );
							LLVMSetTailCall( redirection, true );
							if ( is_inline_asm ) {
								//xstd::inspect( ins );
								LLVMCopyParameterAttributes( redirection, ins );
								//xstd::inspect( redirection );
							}
							ret_handler( bb, trampoline, redirection );
						}

						// Invoke the trampoline from the routine.
						//
						LLVMPositionBuilderBefore( bb, ins );
						LLVMValueRef new_value = LLVMBuildCall2( bb, trampoline_ty, trampoline, forwarded_parameters.data(), forwarded_parameters.size(), "" );
						if ( LLVMIsTailCall( ins ) )
							LLVMSetTailCall( new_value, true ), LLVMSetTailCallKind( new_value, LLVMGetTailCallKind( ins ) );
						new_value = ret_handler( bb, nullptr, new_value );

						// Replace the value and erase previous instruction.
						//
						llvm::replace_all_and_erase( ins, new_value );
					}
					ins = LLVMGetNextInstruction( ins );
				}
			}

			// Fix the callspace size.
			//
			if ( callspace_size )
			{
				LLVMPositionBuilderBefore( bb, LLVMGetFirstInstruction( LLVMGetFirstBasicBlock( target_fn ) ) );
				LLVMValueRef callspace_real = LLVMBuildArrayAlloca( bb, LLVMInt8Type(), LLVMConstInt( LLVMInt64Type(), xstd::align_up( callspace_size + 8, 0x10 ), false ), "" );
				LLVMSetAlignment( callspace_real, 0x10 );
				LLVMReplaceAllUsesWith( callspace, callspace_real );
			}
			LLVMInstructionEraseFromParent( callspace );

			// Dispose the builder and verify the function.
			//
			LLVMDisposeBuilder( bb );
			if ( col.llvm_verify )
				LLVMVerifyFunction( target_fn, LLVMAbortProcessAction );

			// Clone the module, clear inline assembly and debug information, fix data layout.
			//
			LLVMModuleRef copy = LLVMCloneModule( mod );

			LLVMStripModuleDebugInfo( copy );
			LLVMSetTarget( copy, vm_triple );
			LLVMSetDataLayout( copy, "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128" );

			// Delete every global variable.
			//
			std::vector<LLVMValueRef> global_list;
			for ( auto global = LLVMGetFirstGlobal( copy ); global; global = LLVMGetNextGlobal( global ) )
				global_list.emplace_back( global );
			for ( LLVMValueRef global : global_list )
			{
				LLVMSetComdat( global, nullptr );

				if ( !LLVMIsAFunction( global ) )
				{
					if ( LLVMIsAGlobalVariable( global ) )
					{
						LLVMSetInitializer( global, nullptr );
						LLVMSetVisibility( global, LLVMDefaultVisibility );
						LLVMSetLinkage( global, LLVMExternalLinkage );
						LLVMSetExternallyInitialized( global, true );
					}
					else
					{
						LLVMReplaceAllUsesWith( global, nullptr );
						LLVMDeleteGlobal( global );
					}
				}
			}

			// Delete functions.
			//
			bool found = false;
			for ( auto fn = LLVMGetFirstFunction( copy ); fn; fn = LLVMGetNextFunction( fn ) )
			{
				LLVMSetComdat( fn, nullptr );

				// Remove processor attributes.
				//
				llvm::remove_string_attribute( fn, "target-cpu" );
				llvm::remove_string_attribute( fn, "target-features" );

				// Iterate every function, if name matches, make it externally linked, else remove.
				//
				if ( std::string_view name = LLVMGetValueName( fn ); name != target )
				{
					if ( name.starts_with( "llvm." ) )
						continue;

					// Remove definition and mark externally linked.
					//
					for ( auto bb : llvm::get_basic_blocks( fn ) )
						LLVMDeleteBasicBlock( bb );
					LLVMSetLinkage( fn, LLVMExternalLinkage );
					LLVMSetVisibility( fn, LLVMDefaultVisibility );
				}
				else
				{
					found = true;
					LLVMSetLinkage( fn, LLVMExternalLinkage );
					LLVMSetVisibility( fn, LLVMDefaultVisibility );

					// Enable atomics, disable jump tables.
					//
					llvm::set_string_attribute( fn, "target-features", "+atomics" );
					llvm::set_string_attribute( fn, "no-jump-tables", "true" );
				}
			}
			fassert( found );

			// Delete the annotation array, we don't need it.
			//
			if ( LLVMValueRef annotation_array = LLVMGetNamedGlobal( copy, "llvm.global.annotations" ) )
				LLVMDeleteGlobal( annotation_array );

			// Save the LL Temporary to file.
			//
			static int __counter = 0;
			std::string tmp_suffix = std::filesystem::path{ obj->lto.path }.filename().string() + "_fn_" + std::to_string( __counter++ );
			if ( col.llvm_save )
			{
				std::filesystem::path temp_directory = "llvm_tmp";
				std::filesystem::create_directory( temp_directory );
				std::string ll_path = ( temp_directory / ( tmp_suffix + ".ll" ) ).string();
				char* msg = nullptr;
				LLVMPrintModuleToFile( copy, ll_path.data(), &msg );
				if ( msg ) xstd::error( "%s", msg );
			}

			// Verify the module.
			//
			if ( col.llvm_verify )
				LLVMVerifyModule( copy, LLVMAbortProcessAction, nullptr );

			// Save the WASM temporary to file.
			//
			if ( col.llvm_save )
			{
				std::filesystem::path temp_directory = "wasm_tmp";
				std::filesystem::create_directory( temp_directory );
				std::string wasm_path;
				char* msg = nullptr;
				xstd::log( " -- Saved as: '%s'\n", tmp_suffix );

				wasm_path = ( temp_directory / ( tmp_suffix + ".ll" ) ).string();
				LLVMPrintModuleToFile( copy, wasm_path.c_str(), &msg );
				if ( msg ) xstd::error( "%s", msg );

				//wasm_path = ( temp_directory / ( tmp_suffix + ".o" ) ).string();
				//LLVMTargetMachineEmitToFile( target_machine, copy, wasm_path.data(), LLVMObjectFile, &msg );
				//if ( msg ) xstd::error( "%s", msg );
				
				wasm_path = ( temp_directory / ( tmp_suffix + ".s" ) ).string();
				LLVMTargetMachineEmitToFile( target_machine, copy, wasm_path.data(), LLVMAssemblyFile, &msg );
				if ( msg ) xstd::error( "%s", msg );
			}

			// Emit the object into memory.
			//
			LLVMMemoryBufferRef out_buffer;
			char* err = nullptr;
			if ( LLVMTargetMachineEmitToMemoryBuffer( target_machine, copy, LLVMObjectFile, &err, &out_buffer ) )
				xstd::error( "Virtualization failed: %s\n", err );

			// Parse the object file and discard the object buffer.
			//
			wasm::image image = xstd::serialization{ LLVMGetBufferStart( out_buffer ), LLVMGetBufferSize( out_buffer ), true }.read<wasm::image>();
			LLVMDisposeMemoryBuffer( out_buffer );

			// Cleanup.
			//
			LLVMDisposeModule( copy );

			// Make sure it is laid out as we expected it to be.
			//
			fassert( image.code.size() == 1 );
			fassert( image.tables.empty() );
			fassert( image.memory.empty() );
			fassert( image.relocs.size() <= 1 );

			// Get the relocs and discard unnecessary types.
			//
			std::vector<wasm::relocation_entry> relocs;
			if ( !image.relocs.empty() )
			{
				relocs = {
					 image.relocs.begin()->relocs.begin(),
					 image.relocs.begin()->relocs.end()
				};
			}
			std::erase_if( relocs, [ ] ( auto& reloc )
			{
				return reloc.type == wasm::relocation_type::type_index_leb;
			} );
			relocs.emplace_back( wasm::relocation_entry{ .offset = SIZE_MAX } ); // Terminator.
			fassert( std::is_sorted( relocs.begin(), relocs.end(), [ ] ( auto& a, auto& b ) { return a.offset < b.offset; } ) );

			// Read the instructions and blocks.
			//
			std::shared_ptr<block_instance> current_block = {};
			std::vector<instruction_entry> instructions = {};
			xstd::serialization strm{ image.code[ 0 ].code, true };
			for ( auto reloc_it = relocs.begin(); !strm.empty(); )
			{
				// Read the opcode with the prefixes.
				//
				uint16_t op = strm.read<uint8_t>();
				if ( op == wasm::op_prefix_threads )
					op |= uint16_t( strm.read<uint8_t>() ) << 8;

				// Read basic properties.
				//
				instruction_entry& instruction = instructions.emplace_back();
				instruction.begin_offset = strm.offset();
				instruction.opcode = ( wasm::vm_opcode ) op;
				instruction.block = current_block;

				// Handle block beginning and ending:
				//
				if ( instruction.opcode == wasm::op_block || instruction.opcode == wasm::op_loop || instruction.opcode == wasm::op_if )
				{
					current_block = std::make_shared<block_instance>( block_instance{
						 .is_loop = instruction.opcode == wasm::op_loop,
						 .parent = std::move( current_block ),
						 .block_idx = instructions.size()
					} );
					instruction.block = current_block;
				}
				else if ( instruction.opcode == wasm::op_end )
				{
					if ( current_block )
					{
						current_block->end_idx = instructions.size();
						current_block = current_block->parent;
					}
				}
				else if ( instruction.opcode == wasm::op_else )
				{
					current_block->else_idx = instructions.size();
				}

				// Read the arguments and write length.
				//
				xstd::make_constant_series<0x100>( [ & ] <auto N> ( xstd::const_tag<N> )
				{
					if ( instruction.opcode == N )
					{
						using T = wasm::roperands_t<N>;
						if constexpr ( !std::is_void_v<T> )
						{
							T args = strm.read<T>();
							instruction.arguments_hash = xstd::make_hash( args );
							instruction.arguments = std::make_shared<T>( std::move( args ) );
						}
					}
					constexpr uint16_t EN = ( ( N << 8 ) | wasm::op_prefix_threads );
					if ( instruction.opcode == EN )
					{
						using T = wasm::roperands_t<EN>;
						if constexpr ( !std::is_void_v<T> )
						{
							T args = strm.read<T>();
							instruction.arguments_hash = xstd::make_hash( args );
							instruction.arguments = std::make_shared<T>( std::move( args ) );
						}
					}
				} );
				instruction.end_offset = strm.offset();

				// Read the relocation if relevant.
				//
				fassert( reloc_it->offset >= ( instruction.begin_offset + image.code[ 0 ].code_offset ) );
				if ( reloc_it->offset < ( instruction.end_offset + image.code[ 0 ].code_offset ) ) // single relocation allowed
					instruction.relocation = std::to_address( reloc_it++ );
			}

			// Resolve the original function.
			//
			LLVMValueRef orig_func = LLVMGetNamedFunction( mod, target.c_str() );

			// Declare the instruction type.
			//
			std::array ins_args = { LLVMInt64Type(), LLVMInt64Type() };
			LLVMTypeRef ins_type = LLVMFunctionType( LLVMInt64Type(), ins_args.data(), ins_args.size(), 0 );

			// Resolve the WASM execution engine helpers.
			//
			unsigned alwaysinline_attrk = LLVMGetEnumAttributeKindForName( "alwaysinline", xstd::strlen( "alwaysinline" ) );
			LLVMAttributeRef alwaysinline_attr = LLVMCreateEnumAttribute( LLVMGetGlobalContext(), alwaysinline_attrk, 0 );
			auto get_func = [ &, obj = obj.get() ]( const char* name, LLVMTypeRef retval, std::initializer_list<LLVMTypeRef> args )
			{
				LLVMValueRef fn = LLVMGetNamedFunction( mod, name );
				LLVMTypeRef fn_t = LLVMFunctionType(retval, (LLVMTypeRef*)args.begin(), args.size(), 0);
				if ( !fn )
				{
					fn = LLVMAddFunction( mod, name, fn_t );
					LLVMSetVisibility( fn, LLVMDefaultVisibility );
					LLVMSetLinkage( fn, LLVMExternalLinkage );

					auto& esym = obj->external_symbols.emplace_back( ref::allocate<symbol>() );
					esym->storage_class = coff::storage_class_id::public_symbol;
					esym->name = name;
				}
				LLVMAddAttributeAtIndex( fn, LLVMAttributeFunctionIndex, alwaysinline_attr );
				return std::pair{ fn, fn_t };
			};
			// extern "C" uint64_t __wasm_execute( uint16_t opcode, uint64_t _ctx_, uint64_t key )
			auto [wasm_exec, wasm_exec_t] = get_func("__wasm_execute", LLVMInt64Type(), {LLVMInt16Type(), LLVMInt64Type(), LLVMInt64Type(), LLVMInt64Type(), LLVMInt64Type()});
			// extern "C" uint64_t __wasm_vmenter( uint64_t* args, uint64_t arg_cnt, uint64_t local_cnt, uint64_t ip, uint64_t key )
			auto [wasm_vmenter, wasm_vmenter_t] = get_func("__wasm_vmenter", LLVMInt64Type(), {LLVMPointerType(LLVMInt64Type(), 0), LLVMInt64Type(), LLVMInt64Type(), LLVMInt64Type(), LLVMInt64Type(), LLVMInt64Type()});
			// extern "C" uint64_t __wasm_bpop( uint64_t _ctx_ )
			// extern "C" void __wasm_bpush( uint64_t _ctx_, uint64_t val )
			// extern "C" uint64_t __wasm_bret( uint64_t _ctx_, uint64_t key )
			auto [wasm_bpop, wasm_bpop_t] = get_func("__wasm_bpop", LLVMInt64Type(), { LLVMInt64Type() });
			auto [wasm_bpush, wasm_bpush_t] = get_func("__wasm_bpush", LLVMVoidType(), { LLVMInt64Type(), LLVMInt64Type() });
			auto [wasm_bret, wasm_bret_t] = get_func( "__wasm_bret", LLVMInt64Type(), { LLVMInt64Type(), LLVMInt64Type() } );

			// Intrinsics....
			//
			auto __pchar = LLVMPointerType( LLVMInt8Type(), 0 );
			auto __int = LLVMInt32Type();
			auto __size = LLVMInt64Type();
			get_func( "strcmp", __int, { __pchar, __pchar } );
			get_func( "strcpy", __pchar, { __pchar, __pchar } );
			get_func( "memcmp", __int, { __pchar, __pchar, __size } );
			get_func( "memmove", __pchar, { __pchar, __pchar, __size } );
			get_func( "memcpy", __pchar, { __pchar, __pchar, __size } );
			get_func( "memset", __pchar, { __pchar, __int,   __size } );
			get_func( "__multi3", LLVMVoidType(), {__size, __size, __size, __size, __size } );

			// Stores the estimated stack size:
			//
			size_t estimated_stack_ext = 0;

			// Encode every instruction.
			//
			std::vector<LLVMValueRef> stream;
			std::map<size_t, size_t> il_mapping;
			std::vector<std::pair<size_t, size_t>> pending_relocs;
			size_t last_i64_const = 0;
			for ( size_t n = 0; n != instructions.size(); n++ )
			{
				auto& ins = instructions[ n ];
				il_mapping.insert( { n, stream.size() } );
				LLVMValueRef fast_call_dst = nullptr;

				//// If this is a i32.wrap_i64 right before call_indirect, skip.
				////
				//if ( ins.opcode == wasm::op_i32_wrap_i64 &&
				//	  ( n + 1 ) != instructions.size() &&
				//	  instructions[ n + 1 ].opcode == wasm::op_call_indirect )
				//	ins.opcode = wasm::op_nop;
				if ( ins.opcode == wasm::op_call_indirect )
					xstd::error( "WASM: Don't know how to handle indirect calls!" );

				// If last instruction, replace with return.
				//
				if ( n == ( instructions.size() - 1 ) )
					ins.opcode = wasm::op_return;

				// Skip if block markers.
				// 
				if ( ins.opcode == wasm::op_block || ins.opcode == wasm::op_loop || ins.opcode == wasm::op_end )
					continue;
				if ( ins.opcode == wasm::op_if || ins.opcode == wasm::op_else )
					xstd::error( "WASM: Don't know how to handle if/else constructs!" );

				uint16_t opcode = ins.opcode;
				std::optional<uint64_t> aux2;

				std::string_view opcode_name;
				xstd::make_constant_series<0x100>( [ & ] <auto N> ( xstd::const_tag<N> )
				{
					constexpr uint16_t EN = ( ( N << 8 ) | wasm::op_prefix_threads );
					if ( ins.opcode == EN )
						opcode_name = xstd::const_tag<( wasm::vm_opcode ) EN>::to_string();
					else if ( ins.opcode == N )
						opcode_name = xstd::const_tag<( wasm::vm_opcode ) N>::to_string();
				} );
				if ( opcode_name.starts_with( "wasm::op_" ) )
					opcode_name.remove_prefix( xstd::strlen( "wasm::op_" ) );

				// First entry in stream is the address of the handler.
				//
				stream.emplace_back();
				size_t key_index = stream.size();

				// Handle the immediates.
				//
				auto get_global = [ & ] () -> std::tuple<LLVMValueRef, size_t, LLVMValueRef>
				{
					size_t func_type = std::string::npos;
					if ( ins.relocation && (
						ins.relocation->type == wasm::relocation_type::memory_addr_sleb64 ||
						ins.relocation->type == wasm::relocation_type::memory_addr_sleb ||
						ins.relocation->type == wasm::relocation_type::memory_addr_leb64 ||
						ins.relocation->type == wasm::relocation_type::memory_addr_leb ||
						ins.relocation->type == wasm::relocation_type::memory_addr_i64 ||
						ins.relocation->type == wasm::relocation_type::memory_addr_i32 ||
						ins.relocation->type == wasm::relocation_type::function_index_leb ) )
					{
						auto& sym = image.linking.symbol_table[ ins.relocation->index ];

						std::string name;
						uint64_t addend = 0;
						if ( auto data = std::get_if<wasm::data_symbol_undef>( &sym.sym ) )
						{
							addend = ins.relocation->addend;
							ins.pop_reloc();
							name = data->name;
						}
						else if ( auto imp = sym.find_import_entry( image.imports ); imp && imp->module_name.to_string() == "env" )
						{
							addend = ins.relocation->addend;
							ins.pop_reloc();
							name = imp->field_name;
							if ( imp->kind == wasm::external_kind::function )
								func_type = imp->fn_type;
						}
						else
						{
							xstd::warning( "Failed to find relocation?" );
							return { nullptr, func_type, nullptr };
						}

						LLVMValueRef glb = sym.kind == wasm::symbol_kind::function
							? LLVMGetNamedFunction( mod, name.c_str() )
							: LLVMGetNamedGlobal( mod, name.c_str() );

						if ( !glb )
						{
							if ( size_t n = name.rfind( '.' ); n != std::string::npos )
							{
								name.erase( n, name.size() );
								glb = sym.kind == wasm::symbol_kind::function
									? LLVMGetNamedFunction( mod, name.c_str() )
									: LLVMGetNamedGlobal( mod, name.c_str() );
							}

							if ( !glb )
								xstd::error( "Builtin or external symbol '%s' missing.", name.c_str() );
						}

						LLVMValueRef value = LLVMConstPtrToInt( glb, LLVMInt64Type() );
						if ( addend )
							value = LLVMConstAdd( value, LLVMConstInt( LLVMInt64Type(), addend, false ) );
						else
							return { value, func_type, glb };
						return { value, func_type, nullptr };
					}
					else if ( ins.relocation )
					{
						xstd::warning( "Unknown relocation type: %s", xstd::fmt::as_string( ins.relocation->type ) );
						return { nullptr, func_type, nullptr };
					}
					else
					{
						xstd::warning( "Null relocation?" );
						return { nullptr, func_type, nullptr };
					}
				};

				// Imm = { Offset }
				//
				if ( wasm::op_i32_load <= opcode && opcode <= wasm::op_i64_store32 )
				{
					LLVMValueRef value = LLVMConstInt( LLVMInt64Type(), ins.pop_arg<wasm::memory_immediate>().offset, false );

					if ( ins.relocation )
						if ( auto [glb, ftype, oglb] = get_global(); glb )
							value = LLVMConstAdd( glb, value );

					stream.emplace_back( value );
				}
				// Imm = { Offset }, Aux = <Relaxed?>
				//
				else if ( ( opcode & 0xFF ) == wasm::op_prefix_threads && opcode != wasm::op_atomic_fence )
				{
					LLVMValueRef value = LLVMConstInt( LLVMInt64Type(), ins.pop_arg<wasm::memory_immediate>().offset, false );
					if ( ins.relocation )
						if ( auto [glb, ftype, oglb] = get_global(); glb )
							value = LLVMConstAdd( glb, value );
					stream.emplace_back( value );

					// If next instruction is drop, set relaxed flag.
					//
					if ( ( n + 1 ) != instructions.size() && instructions[ n + 1 ].opcode == wasm::op_drop )
						aux2.emplace( apollo::vm::aux2_rmw_relax );
				}
				// Imm = { Constant }
				//
				else if ( wasm::op_i32_const <= opcode && opcode <= wasm::op_f64_const )
				{
					LLVMValueRef value;
					if ( opcode & 1 ) value = LLVMConstInt( LLVMInt64Type(), ins.pop_arg<uint32_t>(), false );
					else              value = LLVMConstInt( LLVMInt64Type(), ( last_i64_const = ins.pop_arg<uint64_t>() ), false );

					if ( ins.relocation )
						if ( auto [glb, ftype, oglb] = get_global(); glb )
							value = LLVMConstAdd( glb, value );

					stream.emplace_back( value );
				}
				// Imm = { Index }
				//
				else if ( opcode == wasm::op_get_local || opcode == wasm::op_set_local || opcode == wasm::op_tee_local )
				{
					stream.emplace_back( LLVMConstInt( LLVMInt64Type(), ins.pop_arg<wasm::ilocal_index_imm>().local_index, false ) );
				}
				// Imm = { IP Target }
				//
				else if ( opcode == wasm::op_br || opcode == wasm::op_br_if )
				{
					auto depth = ins.pop_arg<wasm::ibranch_imm>().relative_depth;

					auto block = ins.block;
					while ( depth-- )
					{
						if ( !block || !( block = block->parent ) )
							xstd::error( "Relative branch beyond scope depth @ 0x%x.", ins.begin_offset );
					}

					if ( block->is_loop )
						pending_relocs.emplace_back( stream.size(), block->block_idx );
					else
						pending_relocs.emplace_back( stream.size(), *block->end_idx );
					stream.emplace_back();
				}
				// Imm = { Ptr } || Aux = { Num Args, Has Ret }
				//   or additionally a "fast-call" if trampoline.
				//
				else if ( opcode == wasm::op_call || opcode == wasm::op_call_indirect )
				{
					// Get the type index, if not indirect, push the function pointer up the stream.
					//
					wasm::func_type_t* type = nullptr;
					apollo::vm::call_aux fn_aux = {};
					if ( opcode == wasm::op_call )
					{
						auto arg = ins.pop_arg<wasm::icall_imm>();

						if ( ins.relocation && ins.relocation->type == wasm::relocation_type::function_index_leb )
						{
							if ( auto [glb, ftype, oglb] = get_global(); glb )
							{
								if ( oglb && xstd::istarts_with( LLVMGetValueName( oglb ), "wasm_trampoline" ) )
									fast_call_dst = oglb;
								else
									stream.emplace_back( glb );
								if ( ftype != std::string::npos ) type = &image.types[ ftype ];
							}
						}

						if ( !type ) type = &image.types[ image.functions[ arg.function_index ] ];
					}
					else
					{
						auto arg = ins.pop_arg<wasm::icall_indirect_imm>();
						type = &image.types[ arg.type_index ];
					}

					// Pass the call details via aux2.
					//
					fn_aux.has_retval = !type->return_types.empty();
					fn_aux.num_args = type->param_types.size();
					aux2 = fn_aux.raw;
				}
				// Imm = {}
				// Replace op with set_sp get_sp magic.
				//
				else if ( opcode == wasm::op_get_global || opcode == wasm::op_set_global )
				{
					if ( ins.relocation && ins.relocation->type == wasm::relocation_type::global_index_leb )
					{
						auto& sym = image.linking.symbol_table[ ins.relocation->index ];

						if ( auto imp = sym.find_import_entry( image.imports ); imp && imp->field_name.to_string() == "__stack_pointer" )
						{
							if ( !estimated_stack_ext && opcode == wasm::op_set_global && ( 0x28 <= last_i64_const && last_i64_const <= 128_kb ) )
								estimated_stack_ext = last_i64_const;
							opcode_name = opcode == wasm::op_set_global ? "set_sp" : "get_sp";
							opcode = opcode == wasm::op_set_global ? apollo::vm::op_set_sp : apollo::vm::op_get_sp;
							ins.pop_arg<void>();
							ins.pop_reloc();
						}
					}
				}

				// If boxed instruction, generate an inlined callout:
				//
				if ( fast_call_dst )
				{
					ins.fn = LLVMAddFunction( mod, xstd::fmt::str( "wasm_boxed_%s_%s_%llx", opcode_name, target, ins.begin_offset ).c_str(), ins_type );
					normalize_function_attr( ins.fn );
					stream[ key_index - 1 ] = LLVMConstPtrToInt( ins.fn, LLVMInt64Type() );

					// Start the function.
					//
					LLVMBasicBlockRef block = LLVMAppendBasicBlock( ins.fn, "" );
					LLVMBuilderRef bb = LLVMCreateBuilder();
					LLVMPositionBuilderAtEnd( bb, block );

					// Build the argument array.
					//
					LLVMTypeRef dst_type = LLVMGlobalGetValueType( fast_call_dst );
					std::vector<LLVMTypeRef> arg_types( LLVMCountParamTypes( dst_type ) );
					LLVMGetParamTypes( dst_type, arg_types.data() );
					std::vector<LLVMValueRef> arg_values( arg_types.size() );
					for ( size_t n = 0; n != arg_types.size(); n++ )
					{
						std::array args = { LLVMGetParam( ins.fn, 0 ) };
						arg_values[ arg_types.size() - n - 1 ] = llvm::bit_cast(
							bb, mod,
							LLVMBuildCall2( bb, wasm_bpop_t, wasm_bpop, args.data(), args.size(), "" ),
							arg_types[ arg_types.size() - n - 1 ]
						);
					}

					// Call into the original function.
					//
					LLVMValueRef result = LLVMBuildCall2( bb, dst_type, fast_call_dst, arg_values.data(), arg_values.size(), "" );
					LLVMAddCallSiteAttribute( result, LLVMAttributeFunctionIndex, alwaysinline_attr );

					// If there is a result, push it.
					//
					if ( LLVMGetTypeKind( LLVMGetReturnType( dst_type ) ) != LLVMVoidTypeKind )
					{
						std::array args = { LLVMGetParam( ins.fn, 0 ), llvm::bit_cast( bb, mod, result, LLVMInt64Type() ) };
						LLVMBuildCall2( bb, wasm_bpush_t, wasm_bpush, args.data(), args.size(), "" );
					}

					// Continue execution.
					//
					std::array args = {
						 LLVMGetParam( ins.fn, 0 ), LLVMConstInt( LLVMInt64Type(), key_index + ( xstd::make_random<uint64_t>() << 6 ), false )
					};
					LLVMValueRef cv = LLVMBuildCall2( bb, wasm_bret_t, wasm_bret, args.data(), args.size(), "" );
					LLVMSetTailCall( cv, true );
					LLVMBuildRet( bb, cv );
					LLVMDisposeBuilder( bb );
				}
				// Otherwise treat as a generic opcode:
				//
				else
				{
					// Try to re-use an already created handler.
					//
					auto& cached_handler_ptr = func_cache[ { opcode, key_index % ( 64 / 8 ), aux2.value_or( 0 ) } ];
					if ( !cached_handler_ptr )
					{
						// Create the instruction and set the handler pointer.
						// 
						ins.fn = LLVMAddFunction( mod, xstd::fmt::str( "wasm_%s_%s_%llx", opcode_name, target, ins.begin_offset ).c_str(), ins_type );
						normalize_function_attr( ins.fn );
						cached_handler_ptr = LLVMConstPtrToInt( ins.fn, LLVMInt64Type() );

						// Call into the execution engine.
						//
						LLVMBasicBlockRef block = LLVMAppendBasicBlock( ins.fn, "" );
						LLVMBuilderRef bb = LLVMCreateBuilder();
						LLVMPositionBuilderAtEnd( bb, block );
						std::array args = {
							 LLVMConstInt( LLVMInt16Type(), opcode, false ),
							 LLVMGetParam( ins.fn, 0 ),
							 LLVMConstInt( LLVMInt64Type(), key_index + ( xstd::make_random<uint64_t>() << 6 ), false ),  // memory offset of ip
							 LLVMConstInt( LLVMInt64Type(), ins.begin_offset, false ),  // aux1: vip
							 LLVMConstInt( LLVMInt64Type(), aux2.value_or( xstd::make_random<uint64_t>() ), false ),      // aux2: free to be used.
						};
						LLVMValueRef cv = LLVMBuildCall2( bb, wasm_exec_t, wasm_exec, args.data(), args.size(), "" );
						LLVMBuildRet( bb, cv );
						LLVMDisposeBuilder( bb );
					}
					stream[ key_index - 1 ] = cached_handler_ptr;
				}

				// Instructions that should not get generated:
				//
				if ( opcode == wasm::op_br_table ||
					  opcode == wasm::op_get_global || opcode == wasm::op_set_global ||
					  opcode == wasm::op_current_memory || opcode == wasm::op_grow_memory ||
					  opcode == wasm::op_atomic_notify || opcode == wasm::op_atomic_wait32 ||
					  opcode == wasm::op_atomic_wait64 )
					xstd::error( "Unexpected instruction." );

				// Make sure argument and reloc is used.
				//
				if ( ins.arguments )  xstd::error( "Opcode %s did not parse all immediates.", opcode_name );
				if ( ins.relocation ) xstd::error( "Opcode %s did not parse all relocations.", opcode_name );
			}

			// Handle relocs.
			//
			for ( auto& [src, dst] : pending_relocs )
				stream[ src ] = LLVMConstInt( LLVMInt64Type(), int64_t( il_mapping[ dst ] - ( src + 1 ) ), false );

			// Encode entire stream using a procedurally generated 2048-bit key.
			//
			size_t off = 0;
			for ( auto& entry : stream )  // TODO: Bad
				entry = LLVMConstSub( entry, LLVMConstInt( LLVMInt64Type(), apollo::vm::stream_keys[ off++ % ( 64 / 8 ) ], false ) );

			// Place stream into globals.
			//
			LLVMValueRef gstream = LLVMAddGlobal( mod, LLVMArrayType( LLVMInt64Type(), stream.size() ), ( "__wasm_" + target ).c_str() );
			LLVMSetInitializer( gstream, LLVMConstArray( LLVMInt64Type(), stream.data(), stream.size() ) );
			LLVMSetAlignment( gstream, 256 );

			// Remove the original definition.
			//
			for ( auto bb = LLVMGetFirstBasicBlock( orig_func ); bb; )
				LLVMDeleteBasicBlock( std::exchange( bb, LLVMGetNextBasicBlock( bb ) ) );

			// Make it inlined if release mode.
			//
			if ( col.build_type == satella::build_type::production )
			{
				llvm::set_enum_attribute( orig_func, "alwaysinline" );
				llvm::remove_enum_attribute( orig_func, "noinline" );
			}

			// Create a function, the first basic block and the builder.
			//
			LLVMBasicBlockRef block = LLVMAppendBasicBlock( orig_func, "" );
			bb = LLVMCreateBuilder();
			LLVMPositionBuilderAtEnd( bb, block );

			// Build the parameter array.
			//
			size_t num_params = LLVMCountParams( orig_func );
			std::vector<LLVMValueRef> orig_params( num_params );
			LLVMGetParams( orig_func, orig_params.data() );

			LLVMValueRef param_arr_ptr = nullptr;
			if ( num_params )
			{
				LLVMTypeRef param_arr_type = LLVMArrayType( LLVMInt64Type(), num_params );
				LLVMValueRef param_arr = LLVMBuildAlloca( bb, param_arr_type, "param_arr" );
				for ( size_t n = 0; n != num_params; n++ )
				{
					std::array indices = { LLVMConstInt( LLVMInt64Type(), n, false ) };
					LLVMBuildStore(
						bb,
						llvm::bit_cast( bb, mod, orig_params[ n ], LLVMInt64Type() ),
						LLVMBuildInBoundsGEP2( bb, LLVMInt64Type(), param_arr, indices.data(), indices.size(), "" )
					);
				}

				std::array indices = { LLVMConstInt( LLVMInt64Type(), 0, false ) };
				param_arr_ptr = LLVMBuildInBoundsGEP2( bb, LLVMInt64Type(), param_arr, indices.data(), indices.size(), "" );
			}
			else
			{
				param_arr_ptr = LLVMConstNull( LLVMPointerType( LLVMInt64Type(), 0 ) );
			}

			// Build the call.
			//
			estimated_stack_ext = std::max( 0x100ull, estimated_stack_ext ) + 0x100;
			std::array args = {
				 param_arr_ptr,
				 LLVMConstInt( LLVMInt64Type(), xstd::align_up( estimated_stack_ext, 128 ) / 8, false ),
				 LLVMConstInt( LLVMInt64Type(), num_params, false ),
				 LLVMConstInt( LLVMInt64Type(), image.code[ 0 ].locals.size(), false ),
				 LLVMBuildPtrToInt( bb, gstream, LLVMInt64Type(), "" ),
				 LLVMConstInt( LLVMInt64Type(), ( xstd::make_random<uint64_t>() << 6 ), false ), // TODO: Bad
			};
			xstd::log( " -- Stack frame: 0x%llx bytes\n", estimated_stack_ext );
			LLVMValueRef result = LLVMBuildCall2( bb, wasm_vmenter_t, wasm_vmenter, args.data(), args.size(), "" );

			// Propagate the return value.
			//
			LLVMTypeRef ret_type = LLVMGetReturnType( LLVMGlobalGetValueType( orig_func ) );
			if ( LLVMGetTypeKind( ret_type ) == LLVMTypeKind::LLVMVoidTypeKind )
				LLVMBuildRetVoid( bb );
			else
				LLVMBuildRet( bb, llvm::bit_cast( bb, mod, result, ret_type ) );

			// Verify the function.
			//
			if ( col.llvm_verify )
				LLVMVerifyFunction( orig_func, LLVMAbortProcessAction );

			// Dispose the builder.
			//
			LLVMDisposeBuilder( bb );
		}
	}

	// Cleanup.
	//
	LLVMDisposeTargetMachine( target_machine );
}
