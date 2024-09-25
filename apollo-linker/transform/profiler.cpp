#include "profiler.hpp"
#include <array>
#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>
#define _IN_LINKER_
#include "../apollo-crt/apollo-crt.cpp"
#include "../utility/llvm.hpp"
#include "../utility/undname.hpp"

// Runtime library configuration.
//
static constexpr size_t min_instrumented_bb_count = 4;
static constexpr size_t instrumentation_context_size = 8;

// Instruments large functions around a profiler.
//
void linker::transform::insert_instrumentation( collection& col )
{
   std::unordered_map<std::string, size_t> function_indices = {};

   // Enumerate every object:
   //
   for ( auto& obj : col.working_set )
   {
      // If it's a non LTO object, skip.
      //
      auto& mod = obj->llvm;
      if ( !mod )
         continue;

      // Skip if CRT.
      //
      if ( obj->is_builtin_provider )
         continue;
      if ( obj->file_name.native().find( L"malloc" ) != std::string::npos )
         continue;

      // Resolve the instrumentation runtime.
      //
      auto [ins_beg, ins_beg_ty, ins_beg_fnd] = llvm::get_function_ex( mod, "__crt_instrument_begin", LLVMVoidType(), { LLVMInt64Type() }, obj.get() );
      auto [ins_end, ins_end_ty, ins_end_fnd] = llvm::get_function_ex( mod, "__crt_instrument_end", LLVMVoidType(), { LLVMInt64Type(), LLVMPointerType( LLVMInt8Type(), 0 ), LLVMInt64Type() }, obj.get() );

      // Resolve the enum attributes for the functions we'll skip.
      //
      auto skip_list = obj->attributes.move( "no_instrument" );

      // Enumerate functions.
      //
      for ( LLVMValueRef fn : llvm::get_functions( mod ) )
      {
         // Skip the runtime itself, must also be flattened by Clang to avoid recursion.
         //
         if ( fn == ins_beg || fn == ins_end )
            continue;

         // Skip if certain attributes are set.
         //
         if ( skip_list.contains( fn ) || llvm::has_enum_attribute( fn, "naked" ) )
            continue;

         // Skip if below the BB threshold.
         //
         size_t bb_count = LLVMCountBasicBlocks( fn );
         if ( bb_count < min_instrumented_bb_count )
            continue;

         // Undecorate the string for the instrumented routine name.
         //
         std::string_view name = LLVMGetValueName( fn );
         std::string out_tmp;
         if ( out_tmp = util::undecorate_name( name.data() ); !out_tmp.empty() )
            name = out_tmp.data();

         // Skip STL/IA32 implementation details, trim the name.
         //
         if ( name.starts_with( "std::_" ) )
            continue;
         if ( name.starts_with( "ia32::" ) )
            continue;
         if ( name.starts_with( "__crt_" ) )
            continue;
         if ( name.size() > 96 )
            name.remove_suffix( name.size() - 96 );

         // Determine the function index.
         //
         auto fn_index = function_indices.emplace( std::string{ name }, function_indices.size() ).first->second;
         auto [pf_name, _] = llvm::get_global<false>( mod, ( "_profiler_tag_" + std::to_string( fn_index ) ).data(), LLVMConstString( name.data(), name.size(), false ) );

         // Resolve the entry point and insert an allocation for the context.
         //
         LLVMBuilderRef bb = LLVMCreateBuilder();
         auto ep = LLVMGetFirstBasicBlock( fn );
         LLVMValueRef ins = LLVMGetFirstInstruction( ep );
         LLVMPositionBuilderBefore( bb, ins );
         LLVMValueRef ctx = LLVMBuildAlloca( bb, LLVMArrayType( LLVMInt8Type(), instrumentation_context_size ), "" );

         // Skip until the instruction is not an allocation to help stack frame creation.
         //
         while ( LLVMGetInstructionOpcode( ins ) == LLVMAlloca )
            ins = LLVMGetNextInstruction( ins );

         // Insert the call to context initialization right afterwards.
         //
         LLVMPositionBuilderBefore( bb, ins );
         ctx = llvm::bit_cast( bb, mod, ctx, LLVMInt64Type() );
         LLVMValueRef args[] = { ctx };
         LLVMBuildCall2( bb, ins_beg_ty, ins_beg, args, std::size( args ), "" );

         // Enumerate each basic block.
         //
         for ( LLVMBasicBlockRef block : llvm::get_basic_blocks( fn ) )
         {
            // If terminating block, invoke the termination helper:
            //
            if ( auto end = LLVMGetLastInstruction( block ); LLVMGetInstructionOpcode( end ) == LLVMRet )
            {
               // Skip the last call if tail.
               //
               if ( auto i = LLVMGetPreviousInstruction( end ); i && LLVMGetInstructionOpcode( i ) == LLVMCall && LLVMIsTailCall( i ) )
                  end = i;

               LLVMPositionBuilderBefore( bb, end );
               LLVMValueRef args[] = { ctx, llvm::bit_cast( bb, mod, pf_name, LLVMPointerType( LLVMInt8Type(), 0 ) ), LLVMConstInt( LLVMInt64Type(), fn_index, false ) };
               LLVMBuildCall2( bb, ins_end_ty, ins_end, args, std::size( args ), "" );
            }
         }
         LLVMDisposeBuilder( bb );
      }

      // Verify the changes.
      //
      if ( col.llvm_verify )
         LLVMVerifyModule( mod, LLVMVerifierFailureAction::LLVMAbortProcessAction, nullptr );
   }


   // Enumerate every object:
   //
   for ( auto& obj : col.working_set )
   {
      // If it's a non LTO object, skip.
      //
      auto& mod = obj->llvm;
      if ( !mod )
         continue;

      // If there's an external called "__crt_event_context" being referenced, create it.
      //
      LLVMValueRef ctx = LLVMGetNamedGlobal( mod, "__crt_event_context" );
      if ( ctx )
      {
         // Create a new global.
         //
         auto [glob, _] = llvm::get_global<false>( mod, "__crt_event_context_$", LLVMConstNull( LLVMArrayType( LLVMGetElementType( LLVMGlobalGetValueType( ctx ) ), function_indices.size() ) ) );

         // Replace every use after casting the type from [N x T]* => [0 x T]*
         //
         LLVMReplaceAllUsesWith( ctx, LLVMConstBitCast( glob, LLVMTypeOf( ctx ) ) );

         // Verify the changes.
         //
         if ( col.llvm_verify )
            LLVMVerifyModule( mod, LLVMAbortProcessAction, nullptr );
      }
   }
}