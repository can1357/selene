#include "attribute_normalization.hpp"

#include <xstd/random.hpp>
#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

#include <xstd/algorithm.hpp>
#include <xstd/formatting.hpp>
#include <apollo/attributes.hpp>
#include "../utility/llvm.hpp"

static const char* target_cpu = "haswell";
constexpr std::string_view target_features_user = "+avx,+avx2,+aes,+bmi,+bmi2,+cx16,+cx8,+f16c,+fma,+fsgsbase,+fxsr,+invpcid,+lzcnt,+mmx,+movbe,+pclmul,+popcnt,+rdrnd,+sahf,+sse,+sse2,+sse3,+sse4.1,+sse4.2,+ssse3,+x87,+xsave,+xsaveopt";
constexpr std::string_view target_features_kernel = target_features_user;

std::string_view linker::transform::get_feature_set( collection& col )
{
	return col.module_type == satella::module_type::kernel ? target_features_kernel : target_features_user;
}
void linker::transform::set_default_attributes( collection& col, LLVMValueRef fn )
{
	// Set the target features / CPU we require.
	//
	llvm::set_string_attribute( fn, "target-cpu", target_cpu );
	llvm::set_string_attribute( fn, "target-features", get_feature_set( col ) );

	// If kernel mode, disable redzone and stack probe.
	//
	if ( col.module_type != satella::module_type::loader )
	{
		llvm::set_enum_attribute( fn, "noredzone" );
		llvm::set_string_attribute( fn, "no-stack-arg-probe", "" );
	}

	// Disable stack-smashing protection.
	//
	llvm::remove_enum_attribute( fn, "ssp" );
	llvm::remove_enum_attribute( fn, "sspreq" );
	llvm::remove_enum_attribute( fn, "sspstrong" );
}

void linker::transform::normalize_attributes( collection& col )
{
	// Enumerate every LLVM object:
	//
	for ( auto& obj : col.working_set )
	{
		auto& mod = obj->llvm;
		if ( !mod ) continue;

		// For each external symbol, set DLLIMPORT if dynamically imported:
		//
		for ( auto& sym : obj->external_symbols )
		{
			auto xsym = col.public_symbols.find( sym->name );
			if ( xsym == col.public_symbols.end() ) continue;
			if ( !xsym->second.alive() ) continue;

			if ( xsym->second->dyn_import )
			{
				auto g = LLVMGetNamedFunction( mod, sym->name.c_str() );
				if ( !g ) g = LLVMGetNamedGlobal( mod, sym->name.c_str() );
				if ( g )
					LLVMSetDLLStorageClass( g, LLVMDLLImportStorageClass ), LLVMSetDSOLocal( g, false );
			}
		}

		// For each defined function:
		//
		auto set_feature = obj->attributes.move_prefixed( "set_feature:" );
		for ( auto func = LLVMGetFirstFunction( mod ); func; func = LLVMGetNextFunction( func ) )
		{
			// Skip if intrinsic.
			//
			if ( !memcmp( LLVMGetValueName( func ), "llvm.", 5 ) )
				continue;

			// Set the default attributes.
			//
			set_default_attributes( col, func );

			// If non-MS ABI / naked, set preserve_ret.
			//
			if ( LLVMGetFunctionCallConv( func ) == LLVMPreserveAllCallConv ||
				  LLVMGetFunctionCallConv( func ) == LLVMPreserveMostCallConv ||
				  LLVMGetFunctionCallConv( func ) == LLVMColdCallConv ||
				  llvm::has_enum_attribute( func, "naked" ) )
				col.attributes.add( LLVMGetValueName( func ), "preserve_ret" );

			// Handle enforced feature sets.
			//
			std::string custom_feature_set = {};
			for ( auto [obj, str] : set_feature )
			{
				if ( obj == func )
				{
					if ( custom_feature_set.empty() )
						custom_feature_set = get_feature_set( col );

					if ( !str.empty() && str[ 0 ] == '+' )
					{
						str.remove_prefix( 1 );

						if ( size_t n = custom_feature_set.find( str ); n != std::string::npos )
							custom_feature_set[ n - 1 ] = '+';
						else
							( custom_feature_set += ",+" ) += str;

					}
					else if ( !str.empty() && str[ 0 ] == '-' )
					{
						str.remove_prefix( 1 );

						if ( size_t n = custom_feature_set.find( str ); n != std::string::npos )
							custom_feature_set[ n - 1 ] = '-';
						else
							( custom_feature_set += ",-" ) += str;
					}
					else
					{
						xstd::error( "Invalid feature setting." );
					}
				}
			}
			if ( !custom_feature_set.empty() )
				llvm::set_string_attribute( func, "target-features", custom_feature_set );
		}

		// For each function marked with must_tail:
		//
		for ( LLVMValueRef fn : obj->attributes.move( "must_tail" ) )
		{
			// Enumerate each basic block.
			//
			auto list_blocks = llvm::get_basic_blocks( fn );
			for ( LLVMBasicBlockRef block : list_blocks )
			{
				// If terminating block:
				//
				if ( auto end = LLVMGetLastInstruction( block ); LLVMGetInstructionOpcode( end ) == LLVMRet )
				{
					auto force_tail = [ &fn ] ( auto end, LLVMTailCallKind k = LLVMTailCallKindMustTail ) -> LLVMValueRef
					{
						// Iterate backwards until we find a call.
						//
						for ( auto it = LLVMGetPreviousInstruction( end ); it; it = LLVMGetPreviousInstruction( it ) )
						{
							if ( LLVMGetInstructionOpcode( it ) == LLVMCall )
							{
								if ( ( LLVMGetNumOperands( it ) - 1 ) == LLVMCountParams( fn ) )
								{
									// Set tail call and return.
									//
									LLVMSetTailCall( it, true );
									LLVMSetTailCallKind( it, k );
									return it;
								}
								else
								{
									return nullptr;
								}
							}
						}
						return nullptr;
					};

					// If not the only instruction:
					//
					if ( LLVMGetFirstInstruction( block ) != end && LLVMGetInstructionOpcode( LLVMGetPreviousInstruction( end ) ) != LLVMPHI )
					{
						force_tail( end );
					}
					// Recurse into all blocks targetting this.
					//
					else
					{
						for ( auto& pblock : list_blocks )
						{
							auto ins = LLVMGetLastInstruction( pblock );
							if ( LLVMGetInstructionOpcode( ins ) == LLVMBr )
							{
								for ( size_t n = 0; n != LLVMGetNumOperands( ins ); n++ )
								{
									auto op = LLVMGetOperand( ins, n );
									if ( LLVMIsABasicBlock( op ) && LLVMValueAsBasicBlock( op ) == block )
										force_tail( LLVMGetLastInstruction( pblock ), LLVMTailCallKindTail );
								}
							}
						}
					}
				}
			}
		}

		// Verify.
		//
		if ( col.llvm_verify )
			LLVMVerifyModule( mod, LLVMVerifierFailureAction::LLVMAbortProcessAction, nullptr );
	}
}