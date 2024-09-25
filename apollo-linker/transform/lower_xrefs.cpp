#include "lower_xrefs.hpp"
#include "../utility/llvm.hpp"
#include <xstd/random.hpp>

#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

// Lowers xrefs to absolute movs.
//
void linker::transform::lower_xrefs( collection& col )
{
	// Enumerate every LLVM object:
	//
	for ( auto& obj : col.working_set )
	{
		auto& mod = obj->llvm;
		if ( !mod ) continue;
		auto& excluded = obj->attributes.find( "no_obfuscate" );

		// Enumerate every global.
		//
		for ( auto global : llvm::get_globals( mod ) )
		{
			// Skip if not suitable.
			//
			if ( LLVMIsGlobalConstant( global ) && llvm::size( mod, LLVMGlobalGetValueType( global ) ) <= 256 )
				continue;

			// Enumerate every user:
			//
			for ( auto& [ins, op] : llvm::get_primary_users( global, { LLVMInstructionValueKind } ) )
			{
				// Skip if instruction belongs to a function with no_obfuscate mark.
				//
				auto bblock = LLVMGetInstructionParent( ins );
				if ( bblock && excluded.contains( LLVMGetBasicBlockParent( bblock ) ) )
					continue;

				// Skip if call to inline-asm.
				//
				if ( LLVMIsACallInst( ins ) && LLVMGetValueKind( LLVMGetCalledValue( ins ) ) == LLVMInlineAsmValueKind )
					continue;

				// Calculate the offset and create the inline assembly.
				//
				int32_t offset = xstd::make_random<int32_t>() >> 4;
				LLVMValueRef stub;
				LLVMTypeRef stub_ty = llvm::make_func_type(LLVMInt64Type(), { LLVMTypeOf(global), LLVMInt64Type() });
				if ( offset >= 0 )
					stub = llvm::inline_asm( stub_ty, "movabs $1+${2:c}, $0", "=r,i,i" );
				else
					stub = llvm::inline_asm( stub_ty, "movabs $1-${2:c}, $0", "=r,i,i" );

				// Create the builder.
				//
				LLVMBuilderRef bb = LLVMCreateBuilder();
				if ( LLVMGetInstructionOpcode( ins ) == LLVMPHI )
					LLVMPositionBuilderBefore( bb, LLVMGetLastInstruction( LLVMGetIncomingBlock( ins, op ) ) );
				else
					LLVMPositionBuilderBefore( bb, ins );

				// Call into the stub, offset the result and cast it.
				//
				LLVMValueRef args[] = { global, LLVMConstInt( LLVMInt64Type(), std::abs( offset ), false ) };
				LLVMValueRef value = LLVMBuildCall2( bb, stub_ty, stub, args, std::size( args ), "" );
				if ( offset >= 0 )
					value = LLVMBuildSub( bb, value, args[ 1 ], "" );
				else
					value = LLVMBuildAdd( bb, value, args[ 1 ], "" );
				value = llvm::bit_cast( bb, mod, value, LLVMTypeOf( global ) );

				// Lower the constant expression if relevant.
				//
				value = llvm::demote_expression( bb, LLVMGetOperand( ins, op ), { { global, value } } );
			
				// Replace the operand.
				//
				LLVMSetOperand( ins, op, value );

				// Dipose the builder.
				//
				LLVMDisposeBuilder( bb );
			}
		}

		if ( col.llvm_verify )
			LLVMVerifyModule( mod, LLVMVerifierFailureAction::LLVMAbortProcessAction, nullptr );
	}
}