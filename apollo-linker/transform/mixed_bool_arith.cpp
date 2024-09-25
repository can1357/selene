#include "mixed_bool_arith.hpp"
#include "../utility/llvm.hpp"

#include <xstd/random.hpp>
#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

#include <xstd/algorithm.hpp>


// Forward refs.
//
static LLVMValueRef make_neg( LLVMBuilderRef bb, LLVMValueRef a, const float* depth );
static LLVMValueRef make_not( LLVMBuilderRef bb, LLVMValueRef a, const float* depth );
static LLVMValueRef make_add( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth );
static LLVMValueRef make_sub( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth );
static LLVMValueRef make_shl( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth );
static LLVMValueRef make_lshr( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth );
static LLVMValueRef make_and( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth );
static LLVMValueRef make_or( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth );
static LLVMValueRef make_xor( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth );

// Unary operators.
//
static LLVMValueRef make_neg( LLVMBuilderRef bb, LLVMValueRef a, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildNeg( bb, a, "" );
	// TODO
	return LLVMBuildNeg( bb, a, "" );
}
static LLVMValueRef make_not( LLVMBuilderRef bb, LLVMValueRef a, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildNot( bb, a, "" );
	// TODO
	return LLVMBuildNot( bb, a, "" );
}

// Arithmetic operators.
//
static LLVMValueRef make_add( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildAdd( bb, a, b, "" );

	// (~A&B)+(A&~B)+((A&B)<<1)
	auto a1 = make_and( bb, make_not( bb, a, depth ), b, depth );
	auto a2 = make_and( bb, make_not( bb, b, depth ), a, depth );
	auto s1 = make_shl( bb, make_and( bb, a, b, depth ), LLVMConstInt( LLVMTypeOf( a1 ), 1, false ), depth );
	return make_add( bb, a1, make_add( bb, a2, s1, depth ), depth );
}
static LLVMValueRef make_sub( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildSub( bb, a, b, "" );

	// ~((~A)+B)
	return make_not( bb, make_add(
		bb,
		make_not( bb, a, depth ),
		b,
		depth
	), depth );
}

// Bitwise operators.
//
static LLVMValueRef make_shl( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildShl( bb, a, b, "" );
	// TODO
	return LLVMBuildShl( bb, a, b, "" );
}
static LLVMValueRef make_lshr( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildLShr( bb, a, b, "" );
	// TODO
	return LLVMBuildLShr( bb, a, b, "" );
}
static LLVMValueRef make_and( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildAnd( bb, a, b, "" );

	switch ( xstd::make_random( 0, 1 ) )
	{
		// 1+B+(A|~B)
		case 0:
		{
			auto t0 = make_or( bb, a, make_not( bb, b, depth ), depth );
			t0 = make_add( bb, t0, b, depth );
			t0 = make_add( bb, t0, LLVMConstInt( LLVMTypeOf( t0 ), 1, false ), depth );
			return t0;
		}
		//  (-(A|B))+B+A
		case 1:
		{
			auto t0 = make_neg( bb, make_or( bb, a, b, depth ), depth );
			t0 = make_add( bb, t0, a, depth );
			t0 = make_add( bb, t0, b, depth );
			return t0;
		}
		default: break;
	}
	unreachable();
}
static LLVMValueRef make_or( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildOr( bb, a, b, "" );

	switch ( xstd::make_random( 0, 2 ) )
	{
		// A+(B&~A)
		case 0:
		{
			return make_add( bb,
								  a,
								  make_and( bb, b, make_not( bb, a, depth ), depth ),
								  depth
			);
		}
		// (~(A&B))+B-(~A)
		case 1:
		{
			auto t0 = make_not( bb, make_and( bb, a, b, depth ), depth );
			t0 = make_add( bb, t0, b, depth );
			t0 = make_sub( bb, t0, make_not( bb, a, depth ), depth );
			return t0;
		}
		// -(~(A|B))+(~A&B)+(A|~B)
		case 2:
		{
			auto a1 = make_not( bb, make_or( bb, a, b, depth ), depth );
			auto a2 = make_and( bb, make_not( bb, a, depth ), b, depth );
			auto a3 = make_or( bb, make_not( bb, b, depth ), a, depth );

			return make_sub(
				bb,
				make_add( bb, a2, a3, depth ),
				a1,
				depth
			);
		}
		default: break;
	}
	unreachable();
}
static LLVMValueRef make_xor( LLVMBuilderRef bb, LLVMValueRef a, LLVMValueRef b, const float* depth )
{
	if ( xstd::make_random( 0.0f, 1.0f ) <= *depth++ )
		return LLVMBuildXor( bb, a, b, "" );

	switch ( xstd::make_random( 0, 2 ) )
	{
		// (A+B)-((A&B)<<1)
		case 0:
		{
			auto sum = make_add( bb, a, b, depth );
			auto band = make_and( bb, a, b, depth );

			return make_sub( bb,
								  sum,
								  make_shl( bb, band, LLVMConstInt( LLVMTypeOf( band ), 1, false ), depth ),
								  depth
			);
		}
		// (A-B)+((~A&B)<<1)
		case 1:
		{
			auto diff = make_sub( bb, a, b, depth );
			auto andn = make_and( bb, make_not( bb, a, depth ), b, depth );

			return make_add( bb,
								  diff,
								  make_shl( bb, andn, LLVMConstInt( LLVMTypeOf( andn ), 1, false ), depth ),
								  depth
			);
		}
		// (A|B)&(~(A&B))
		case 2:
		{
			return make_and(
				bb,
				make_or( bb, a, b, depth ),
				make_not( bb, make_and( bb, a, b, depth ), depth ), depth
			);
		}
		default: break;
	}
	unreachable();
}



constexpr static float table_extreme[] = {
	0.6f, 
	0.7f, 
	0.9f, 
	1.0f, 1.0f
};
constexpr static float table_normal[] = {
	0.7f, 
	0.8f, 
	0.9f, 
	1.0f, 1.0f
};
constexpr static float table_low[] = {
	0.8f, 
	0.9f, 
	1.0f, 1.0f, 1.0f
};


static void apply_mba( LLVMModuleRef mod, LLVMValueRef func, LLVMValueRef crt_assert, const float* table )
{
	// Define the helper to check if a value is a standard sized integer.
	//
	auto is_int8n = [ dl = LLVMGetModuleDataLayout( mod ) ]( LLVMValueRef v )
	{
		auto t = LLVMTypeOf( v );
		if ( LLVMGetTypeKind( t ) != LLVMIntegerTypeKind )
			return false;
		switch ( LLVMSizeOfTypeInBits( dl, t ) )
		{
			case 8:
			case 16:
			case 32:
			case 64:
				return true;
			default:
				return false;
		}
	};

	// For each instruction:
	//
	using fn_bin_t = LLVMValueRef( * )( LLVMBuilderRef, LLVMValueRef, LLVMValueRef, const float* );
	static constexpr std::tuple<LLVMOpcode, fn_bin_t, const char*> op_list[] = {
		 { LLVMOr,  &make_or, "__or" },
		 { LLVMXor, &make_xor, "__xor" },
		 { LLVMAnd, &make_and, "__and" },
		 { LLVMAdd, &make_add, "__add" },
		 { LLVMSub, &make_sub, "__sub" },
	};

	for ( auto bb = LLVMGetFirstBasicBlock( func ); bb; bb = LLVMGetNextBasicBlock( bb ) )
	{
		for ( auto ins = LLVMGetFirstInstruction( bb ); ins; )
		{
			auto next = LLVMGetNextInstruction( ins );

			if ( auto i = xstd::find_if( op_list, [ op = LLVMGetInstructionOpcode( ins ) ]( auto&& tup ) { return std::get<0>( tup ) == op; } ) )
			{
				auto& [opcode, maker, name] = *i;

				// Get operands, skip if vector operation.
				//
				auto a = LLVMGetOperand( ins, 0 );
				auto b = LLVMGetOperand( ins, 1 );
				if ( is_int8n( a ) && is_int8n( b ) )
				{
					// Create the obfuscated result, replace every use.
					//
					LLVMBuilderRef bb = LLVMCreateBuilder();
					LLVMPositionBuilderBefore( bb, next );

					LLVMValueRef result = maker( bb, a, b, table );
					LLVMReplaceAllUsesWith( ins, result );

					// If validation is enabled, add an assert to check if the result is matching.
					//
					if ( crt_assert )
					{
						LLVMValueRef args[] = {
							 LLVMBuildICmp( bb, LLVMIntEQ, result, ins, "" ),
							 LLVMBuildPtrToInt( bb, LLVMBuildGlobalString( bb, name, name ), LLVMInt64Type(), "" )
						};
						std::array crt_assert_args = { LLVMInt1Type(), LLVMInt64Type() };
						LLVMTypeRef crt_assert_t = LLVMFunctionType(LLVMVoidType(), crt_assert_args.data(), crt_assert_args.size(), 0);
						LLVMBuildCall2( bb, crt_assert_t, crt_assert, args, 2, "" );
					}
					LLVMDisposeBuilder( bb );
				}
			}
			ins = next;
		}
	}
}

void linker::transform::apply_mba( collection& col, bool extreme )
{
	// Remove this to test statements.
	//
	if ( col.is_debug() )
		return;

	// Enumerate every LLVM object:
	//
	for ( auto& obj : col.working_set )
	{
		auto& mod = obj->llvm;
		if ( !mod ) continue;

		// Resolve assert helper if we're in debug mode.
		//
		LLVMValueRef crt_assert = nullptr;
		if ( col.is_debug() )
		{
			crt_assert = LLVMGetNamedFunction( mod, "__crt_assert" );
			if ( !crt_assert )
			{
				std::array crt_assert_args = { LLVMInt1Type(), LLVMInt64Type() };
				LLVMTypeRef crt_assert_t = LLVMFunctionType( LLVMVoidType(), crt_assert_args.data(), crt_assert_args.size(), 0 );
				crt_assert = LLVMAddFunction( mod, "__crt_assert", crt_assert_t );
				LLVMSetVisibility( crt_assert, LLVMVisibility::LLVMDefaultVisibility );
				LLVMSetLinkage( crt_assert, LLVMExternalLinkage );
			}
		}

		// Enumerate every instruction:
		//
		auto& excluded = obj->attributes.find( "no_obfuscate" );
		for ( auto func = LLVMGetFirstFunction( mod ); func; func = LLVMGetNextFunction( func ) )
		{
			// Skip if excluded.
			//
			if ( excluded.contains( func ) )
				continue;

			// Skip standard library functions.
			//
			std::string_view name = LLVMGetValueName( func );
			if ( name.find( "_Emplace" ) != std::string::npos )
				continue;
			if ( name.find( "_List_node" ) != std::string::npos )
				continue;
			if ( name.find( "_Insert" ) != std::string::npos )
				continue;
			if ( name.find( "_Reallocate" ) != std::string::npos )
				continue;
			if ( name.find( "_Ref_count" ) != std::string::npos )
				continue;
			if ( name.find( "_Hash" ) != std::string::npos )
				continue;
			if ( name.find( "wasm_trampoline" ) != std::string::npos )
				continue;

			// Be nice with WASM handlers.
			//
			if ( name.find( "wasm_" ) != std::string::npos )
			{
				if ( extreme )
					apply_mba( mod, func, crt_assert, table_low );
				else
					continue;
			}
			else
			{
				apply_mba( mod, func, crt_assert, extreme ? table_extreme : table_normal );
			}
		}
		if ( col.llvm_verify )
			LLVMVerifyModule( mod, LLVMPrintMessageAction, nullptr );
	}
}
