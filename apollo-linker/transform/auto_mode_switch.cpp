#include "auto_mode_switch.hpp"
#include "../utility/llvm.hpp"
#include <xstd/random.hpp>

#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

// Automatically inserts checks for mode-switch in indirect branches.
//
void linker::transform::auto_mode_switch( collection& col )
{
	// Enumerate every LLVM object:
	//
	for ( auto& obj : col.working_set )
	{
		auto& mod = obj->llvm;
		if ( !mod ) continue;
		if ( obj->is_builtin_provider ) continue;
		auto& excluded = obj->attributes.find( "no_mode_switch" );
		
		for ( auto& fn : llvm::get_functions( mod ) )
		{
			std::string_view name{ LLVMGetValueName( fn ) };
			if ( name.starts_with( "__wasm" ) )
				continue;
			if ( name.starts_with( "?_Delete_this" ) )
				continue;
			if ( excluded.contains( fn ) )
				continue;

			for ( auto& bb : llvm::get_basic_blocks( fn ) )
			{
				for ( auto ins = LLVMGetFirstInstruction( bb ); ins; ins = LLVMGetNextInstruction( ins ) )
				{
					if ( !LLVMIsACallInst( ins ) )
						continue;
					LLVMValueRef target = LLVMGetCalledValue( ins );
					if ( LLVMIsConstant( target ) || LLVMIsAFunction( target ) || LLVMIsAInlineAsm( target ) )
						continue;

					// Vectorcall functions are for flash callbacks, skip.
					//
					LLVMCallConv cconv = ( LLVMCallConv ) LLVMGetInstructionCallConv( ins );
					if ( cconv == LLVMX86VectorCallCallConv )
						continue;
					
					LLVMTypeRef type = LLVMGetCalledFunctionType( ins );
					auto bb = LLVMCreateBuilder();
					LLVMPositionBuilderBefore( bb, ins );

					// Get the operands of the call.
					//
					std::vector<LLVMValueRef> target_operands( LLVMGetNumOperands( ins ) - 1 );
					for ( size_t n = 0; n != target_operands.size(); n++ )
						target_operands[ n ] = LLVMGetOperand( ins, n );

					// Cast the guard to the call type.
					//
					auto [guard, _] = llvm::get_function( mod, "__crt_mode_switch_guard", LLVMInt64Type(), {}, obj.get(), true /*must be vararg*/ );
					LLVMSetDLLStorageClass( guard, LLVMDLLImportStorageClass );

					// Get the call point and put it in a bundle.
					//
					auto bundle = LLVMCreateOperandBundleDef( "cfguardtarget", &target, 1 );
					LLVMValueRef new_ins = LLVMBuildCallWithOpBundle(
						bb,
						type,
						guard,
						target_operands.data(),
						target_operands.size(),
						&bundle,
						1,
						""
					);
					LLVMSetInstructionCallConv( new_ins, cconv );
					LLVMSetTailCallKind( new_ins, LLVMGetTailCallKind( ins ) );
					
					llvm::replace_all_and_erase( ins, new_ins );

					LLVMDisposeBuilder( bb );
					if ( col.llvm_verify )
						LLVMVerifyFunction( fn, LLVMVerifierFailureAction::LLVMAbortProcessAction );
				}
			}
		}
	}
}