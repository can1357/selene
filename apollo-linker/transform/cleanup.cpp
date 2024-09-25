#include "cleanup.hpp"
#include "../utility/llvm.hpp"
#include <xstd/random.hpp>

#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

#define IN_GENERATOR 1
#include <sdkgen/support_library.hpp>

template<typename T>
static void transform_builtin_symbol_read( LLVMModuleRef mod, const char* name )
{
	// Resolve the function.
	//
	LLVMValueRef fn = llvm::get_function( mod, name );
	if ( !fn ) return;

	// Function traits:
	//
	LLVMTypeRef value_type =
		sizeof( T ) == 8 ? LLVMInt64Type() :
		sizeof( T ) == 4 ? LLVMInt32Type() :
		sizeof( T ) == 2 ? LLVMInt16Type() :
		sizeof( T ) == 1 ? LLVMInt8Type()  : nullptr;

	// Resolve each call:
	//
	for ( auto [user, _] : llvm::get_primary_users( fn, { LLVMInstructionValueKind } ) )
	{
		if ( LLVMGetInstructionOpcode( user ) == LLVMCall )
		{
			// Fetch the operands.
			//
			LLVMValueRef src = LLVMGetOperand( user, 0 );
			LLVMValueRef off = LLVMGetOperand( user, 1 );
			LLVMValueRef key = LLVMGetOperand( user, 2 );

			// Validate constant arguments and make the temporary type.
			//
			if ( !LLVMIsConstant( off ) ) xstd::error( "Offset operand to %s must be a constant integer.", name );
			if ( !LLVMIsConstant( key ) ) xstd::error( "Key operand to %s must be a constant integer.", name );
			size_t ioff = LLVMConstIntGetZExtValue( off );
			size_t ikey = LLVMConstIntGetZExtValue( key );

			// Roll the key if necessary.
			//
			for ( size_t i = ioff; i != 0; )
			{
				if ( i >= 8 )
				{
					ikey = sdk::magic_lcg_next( ikey );
					i -= 8;
				}
				else
				{
					ikey = shrd( ikey, sdk::magic_lcg_next( ikey ), i * 8 );
					break;
				}
			}

			// Create the builder.
			//
			LLVMBuilderRef bb = LLVMCreateBuilder();
			LLVMPositionBuilderBefore( bb, user );

			// Cast the pointer and load the value.
			//
			LLVMValueRef value = llvm::load( bb, value_type, src );
			
			// XOR with the key.
			//
			value = LLVMBuildXor( bb, value, LLVMConstInt( value_type, T( ikey ), false ), "" );

			// Dispose the builder, replace every user with the value.
			//
			LLVMDisposeBuilder( bb );
			llvm::replace_all_and_erase( user, value );
		}
	}
}

// Cleans up codegen.
//
void linker::transform::cleanup( collection& col )
{
	// Enumerate every LLVM object:
	//
	for ( auto& obj : col.working_set )
	{
		auto& mod = obj->llvm;
		if ( !mod ) continue;

		// __builtin_symbol_readN:
		//
		transform_builtin_symbol_read<uint8_t>( mod, "__builtin_symbol_read1" );
		transform_builtin_symbol_read<uint16_t>( mod, "__builtin_symbol_read2" );
		transform_builtin_symbol_read<uint32_t>( mod, "__builtin_symbol_read4" );
		transform_builtin_symbol_read<uint64_t>( mod, "__builtin_symbol_read8" );

		// __builtin_pure_load:
		//
		if ( LLVMValueRef fn = LLVMGetNamedFunction( mod, "__builtin_pure_load" ) )
		{
			for ( auto [user, _] : llvm::get_primary_users( fn, { LLVMInstructionValueKind } ) )
			{
				if ( LLVMGetInstructionOpcode( user ) == LLVMCall )
				{
					// Fetch the operands.
					//
					LLVMValueRef dst =  LLVMGetOperand( user, 0 );
					LLVMValueRef src =  LLVMGetOperand( user, 1 );
					LLVMValueRef len =  LLVMGetOperand( user, 2 );
					LLVMValueRef algn = LLVMGetOperand( user, 3 );

					// Validate constant arguments and make the temporary type.
					//
					size_t ilen =  LLVMIsConstant( len )  ? LLVMConstIntGetZExtValue( len )  : 0;
					size_t ialgn = LLVMIsConstant( algn ) ? LLVMConstIntGetZExtValue( algn ) : 0;
					if ( !ilen ) xstd::error( "Length operand to __builtin_pure_load must be a constant non-zero integer." );
					if ( !ialgn ) xstd::error( "Alignment operand to __builtin_pure_load must be a constant non-zero integer." );
					LLVMTypeRef value_type = LLVMArrayType( LLVMIntType( ialgn * 8 ), xstd::align_up( ilen, ialgn ) / ialgn );

					// Create the builder.
					//
					LLVMBuilderRef bb = LLVMCreateBuilder();
					LLVMPositionBuilderBefore( bb, user );

					// Cast the pointers and copy the value.
					//
					LLVMBuildStore( bb, llvm::load( bb, value_type, src ), dst );

					// Dispose the builder, replace every user with the destination operand.
					//
					LLVMDisposeBuilder( bb );
					LLVMReplaceAllUsesWith( user, dst );
				}
			}
		}

		// __builtin_halt_consteval:
		//
		if ( LLVMValueRef fn = LLVMGetNamedFunction( mod, "__builtin_halt_consteval" ) )
			for ( auto [user, _] : llvm::get_primary_users( fn, { LLVMInstructionValueKind } ) )
				if ( LLVMGetInstructionOpcode( user ) == LLVMCall )
					LLVMInstructionEraseFromParent( user );

		// MS STL garbage:
		//
		for ( const char* name : { 
			"_invoke_watson",
			"_invalid_parameter_noinfo", 
			"_invalid_parameter_noinfo_noreturn", 
			"?_Xlength_error@std@@YAXPEBD@Z",
			"?_Throw_bad_array_new_length@std@@YAXXZ"} )
		{
			LLVMValueRef fn = LLVMGetNamedFunction( mod, name );
			if ( !fn ) continue;

			for ( auto [user, _] : llvm::get_primary_users( fn, { LLVMInstructionValueKind } ) )
			{
				if ( LLVMGetInstructionOpcode( user ) == LLVMCall )
				{
					LLVMBuilderRef bb = LLVMCreateBuilder();
					LLVMPositionBuilderBefore( bb, user );
					//if ( col.build_type == satella::build_type::development )
					//	LLVMBuildCall( bb, llvm::get_intrinsic( mod, "llvm.trap" ), nullptr, 0, "" );
					LLVMBuildUnreachable( bb );
					LLVMDisposeBuilder( bb );
					while ( user )
						LLVMInstructionEraseFromParent( std::exchange( user, LLVMGetNextInstruction( user ) ) );
				}
			}
		}

		// MS CRT garbage:
		//
		if ( LLVMValueRef iob_fn = LLVMGetNamedFunction( mod, "__acrt_iob_func" ) )
		{
			auto ret_type = LLVMGetReturnType( LLVMGlobalGetValueType( iob_fn ) );
			auto new_value = llvm::const_bit_cast( mod, LLVMConstInt( LLVMInt64Type(), 1 /*crt::stdout_hnd*/, false ), ret_type );

			for ( auto [user, _] : llvm::get_primary_users( iob_fn, { LLVMInstructionValueKind } ) )
				if ( LLVMGetInstructionOpcode( user ) == LLVMCall )
					llvm::replace_all_and_erase( user, new_value );
		}
		if ( LLVMValueRef iob_fn = LLVMGetNamedFunction( mod, "_Query_perf_frequency" ) )
		{
			auto new_value = LLVMConstInt( LLVMInt64Type(), 1s / 1ns /*as in MiniCRT/time.cpp*/, false );
			for ( auto [user, _] : llvm::get_primary_users( iob_fn, { LLVMInstructionValueKind } ) )
				if ( LLVMGetInstructionOpcode( user ) == LLVMCall )
					llvm::replace_all_and_erase( user, new_value );
		}

		if ( col.llvm_verify )
			LLVMVerifyModule( mod, LLVMVerifierFailureAction::LLVMAbortProcessAction, nullptr );
	}
}