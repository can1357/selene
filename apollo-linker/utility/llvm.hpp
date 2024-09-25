#pragma once
#include "../object/collection.hpp"
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <tuple>
#include <xstd/text.hpp>

// Implement string conversion.
//
namespace xstd::fmt
{
	template<>
	struct string_formatter<LLVMValueRef>
	{
		inline std::string operator()( LLVMValueRef value ) const noexcept
		{
			char* msg = LLVMPrintValueToString( value );
			std::string str{ msg };
			LLVMDisposeMessage( msg );
			return str;
		}
	};

	template<>
	struct string_formatter<LLVMTypeRef>
	{
		inline std::string operator()( LLVMTypeRef value ) const noexcept
		{
			char* msg = LLVMPrintTypeToString( value );
			std::string str{ msg };
			LLVMDisposeMessage( msg );
			return str;
		}
	};

	template<>
	struct string_formatter<LLVMModuleRef>
	{
		inline std::string operator()( LLVMModuleRef value ) const noexcept
		{
			char* msg = LLVMPrintModuleToString( value );
			std::string str{ msg };
			LLVMDisposeMessage( msg );
			return str;
		}
	};
};

namespace llvm
{
	// Compat layer.
	//
	static LLVMValueRef LLVMConstExtractValue(LLVMValueRef AggConstant, unsigned* IdxList,
		unsigned NumIdx) {
		auto bb = LLVMCreateBuilder();
		auto val = LLVMBuildExtractValue(bb, AggConstant, IdxList[NumIdx - 1], "");
		fassert(LLVMIsConstant(val));
		LLVMDisposeBuilder(bb);
		return val;
	}
	static LLVMValueRef LLVMConstInsertValue(LLVMValueRef AggConstant,
		LLVMValueRef ElementValueConstant,
		unsigned* IdxList, unsigned NumIdx) {

		auto bb = LLVMCreateBuilder();
		auto val = LLVMBuildInsertValue(bb, AggConstant, ElementValueConstant, IdxList[NumIdx - 1], "");
		fassert(LLVMIsConstant(val));
		LLVMDisposeBuilder(bb);
		return val;
	}
	static LLVMValueRef load(LLVMBuilderRef bb, LLVMTypeRef ty, LLVMValueRef ptr, const char* name = "") {
		return LLVMBuildLoad2(bb, ty, ptr, name);
	}
	static LLVMValueRef loadi64(LLVMBuilderRef bb, LLVMValueRef ptr, const char* name = "") { return load(bb, LLVMInt64Type(), ptr, name); }
	static LLVMValueRef loadi32(LLVMBuilderRef bb, LLVMValueRef ptr, const char* name = "") { return load(bb, LLVMInt32Type(), ptr, name); }
	static LLVMValueRef loadi16(LLVMBuilderRef bb, LLVMValueRef ptr, const char* name = "") { return load(bb, LLVMInt16Type(), ptr, name); }
	static LLVMValueRef loadi8(LLVMBuilderRef bb, LLVMValueRef ptr, const char* name = "") { return load(bb, LLVMInt8Type(), ptr, name); }

	// Attribute helpers.
	//
	static LLVMAttributeRef enum_attribute( std::string_view k, unsigned int v = 0 )
	{
		unsigned idx = LLVMGetEnumAttributeKindForName( k.data(), k.size() );
		return LLVMCreateEnumAttribute( LLVMGetGlobalContext(), idx, v );
	}
	static LLVMAttributeRef string_attribute( std::string_view k, std::string_view v )
	{
		return LLVMCreateStringAttribute( LLVMGetGlobalContext(), k.data(), k.length(), v.data(), v.length() );
	}
	static void remove_enum_attribute( LLVMValueRef func, std::string_view k )
	{
		unsigned idx = LLVMGetEnumAttributeKindForName( k.data(), k.size() );
		if ( LLVMGetEnumAttributeAtIndex( func, LLVMAttributeFunctionIndex, idx ) )
			LLVMRemoveEnumAttributeAtIndex( func, LLVMAttributeFunctionIndex, idx );
	}
	static void remove_string_attribute( LLVMValueRef func, std::string_view k )
	{
		if ( LLVMGetStringAttributeAtIndex( func, LLVMAttributeFunctionIndex, k.data(), k.length() ) )
			LLVMRemoveStringAttributeAtIndex( func, LLVMAttributeFunctionIndex, k.data(), k.length() );
	}
	static bool has_enum_attribute( LLVMValueRef func, std::string_view k )
	{
		unsigned idx = LLVMGetEnumAttributeKindForName( k.data(), k.size() );
		return LLVMGetEnumAttributeAtIndex( func, LLVMAttributeFunctionIndex, idx ) != nullptr;
	}
	static bool has_string_attribute( LLVMValueRef func, std::string_view k )
	{
		return LLVMGetStringAttributeAtIndex( func, LLVMAttributeFunctionIndex, k.data(), k.size() );
	}
	static void set_enum_attribute( LLVMValueRef func, std::string_view k, unsigned int v = 0 )
	{
		unsigned idx = LLVMGetEnumAttributeKindForName( k.data(), k.size() );
		if ( LLVMGetEnumAttributeAtIndex( func, LLVMAttributeFunctionIndex, idx ) )
			LLVMRemoveEnumAttributeAtIndex( func, LLVMAttributeFunctionIndex, idx );
		LLVMAddAttributeAtIndex( func, LLVMAttributeFunctionIndex, enum_attribute( k, v ) );
	}
	static void set_string_attribute( LLVMValueRef func, std::string_view k, std::string_view v )
	{
		if ( LLVMGetStringAttributeAtIndex( func, LLVMAttributeFunctionIndex, k.data(), k.size() ) )
			LLVMRemoveStringAttributeAtIndex( func, LLVMAttributeFunctionIndex, k.data(), k.size() );
		LLVMAddAttributeAtIndex( func, LLVMAttributeFunctionIndex, string_attribute( k, v ) );
	}

	// Metadata helpers.
	//
	static uint32_t get_md_kind( std::string_view md )
	{
		return LLVMGetMDKindID( md.data(), md.size() );
	}
	static void set_md( LLVMValueRef on, uint32_t kind, std::initializer_list<LLVMValueRef> vals )
	{
		LLVMSetMetadata( on, kind, LLVMMDNode( ( LLVMValueRef* ) &*vals.begin(), vals.size() ) );
	}
	static void set_md( LLVMValueRef on, std::string_view kind, std::initializer_list<LLVMValueRef> vals )
	{
		LLVMSetMetadata( on, get_md_kind( kind ), LLVMMDNode( ( LLVMValueRef* ) &*vals.begin(), vals.size() ) );
	}
	static LLVMValueRef get_md_string( std::string_view str )
	{
		return LLVMMDString( str.data(), str.size() );
	}

	// Branch helpers.
	//
	static void set_branch_weights( LLVMValueRef br, uint32_t a, uint32_t b )
	{
		set_md( br, get_md_kind( "prof" ), { get_md_string( "branch_weights" ), LLVMConstInt( LLVMInt32Type(), a, false ), LLVMConstInt( LLVMInt32Type(), b, false ) } );
	}
	static void set_likely( LLVMValueRef br ) { set_branch_weights( br, 10000, 1 ); }
	static void set_unlikely( LLVMValueRef br ) { set_branch_weights( br, 1, 10000 ); }

	// Inline assembly helper.
	//
	static LLVMValueRef inline_asm( LLVMTypeRef type, std::string_view body, std::string_view constraints, bool side_effects = false, bool align_stack = false, bool throws = false )
	{
		return LLVMGetInlineAsm(
			type,
			( char* ) body.data(), body.size(),
			( char* ) constraints.data(), constraints.size(),
			side_effects,
			align_stack,
			LLVMInlineAsmDialectATT,
			throws
		);
	}

	// Type helpers.
	//
	static LLVMTypeRef make_func_type( LLVMTypeRef retval, std::initializer_list<LLVMTypeRef> args )
	{
		return LLVMFunctionType( retval, ( LLVMTypeRef* ) args.begin(), args.size(), 0 );
	}

	static LLVMValueRef bit_cast( LLVMBuilderRef bb, LLVMModuleRef mod, LLVMValueRef val, LLVMTypeRef new_type )
	{
		LLVMTypeRef prev_type = LLVMTypeOf( val );
		size_t size_p = LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), prev_type );
		size_t size_n = LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), new_type );

		switch ( LLVMGetTypeKind( prev_type ) )
		{
			case LLVMIntegerTypeKind: break;
			case LLVMHalfTypeKind:
			case LLVMFloatTypeKind:
			case LLVMDoubleTypeKind:
			case LLVMVectorTypeKind:  val = LLVMBuildBitCast( bb, val, LLVMIntType( size_p ), "" );     break;
			case LLVMArrayTypeKind:   val = LLVMBuildBitCast( bb, val, LLVMPointerType( LLVMGetElementType( prev_type ), 0 ), "" ); [[fallthrough]];
			case LLVMPointerTypeKind: val = LLVMBuildPtrToInt( bb, val, LLVMInt64Type(), "" );          break;
			case LLVMStructTypeKind:
				if ( size_p <= 64 )
				{
					std::vector<LLVMTypeRef> types( LLVMCountStructElementTypes( prev_type ) );
					LLVMGetStructElementTypes( prev_type, types.data() );
					
					size_t it = 0;
					LLVMTypeRef vit_type = LLVMIntType( size_p );
					LLVMValueRef vit = LLVMConstInt( vit_type, 0, false );
					for ( size_t i = 0; i < std::min( size_n, size_p ); it++ )
					{
						if ( LLVMGetTypeKind( types[ it ] ) != LLVMIntegerTypeKind )
							return nullptr;

						auto sval = LLVMBuildShl( bb, LLVMBuildIntCast2( bb, LLVMBuildExtractValue( bb, val, it, "" ), vit_type, false, "" ), LLVMConstInt( vit_type, i, false ), "" );
						vit = LLVMBuildOr(bb, vit, sval, "" );
						i += LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), types[ it ] );
					}
					val = vit;
					break;
				}
				[[fallthrough]];
			default:
				return nullptr;
		}

		if ( size_p != size_n )
			val = LLVMBuildIntCast2( bb, val, LLVMIntType( size_n ), false, "" );

		switch ( LLVMGetTypeKind( new_type ) )
		{
			case LLVMIntegerTypeKind: return val;
			case LLVMHalfTypeKind:
			case LLVMFloatTypeKind:
			case LLVMDoubleTypeKind:
			case LLVMVectorTypeKind:  return LLVMBuildBitCast( bb, val, new_type, "" );
			case LLVMPointerTypeKind: return LLVMBuildIntToPtr( bb, val, new_type, "" );
			case LLVMStructTypeKind:
				if ( size_n <= 64 )
				{
					std::vector<LLVMTypeRef> types( LLVMCountStructElementTypes( new_type ) );
					LLVMGetStructElementTypes( new_type, types.data() );

					size_t it = 0;
					LLVMValueRef vit = LLVMGetUndef( new_type );
					for ( size_t i = 0; i < std::min( size_n, size_p ); it++ )
					{
						if ( LLVMGetTypeKind( types[ it ] ) != LLVMIntegerTypeKind )
							return nullptr;

						auto sval = LLVMBuildAShr( bb, val, LLVMConstInt( LLVMTypeOf( val ), i, false ), "" );
						sval = LLVMBuildIntCast2( bb, sval, types[ it ], false, "" );
						vit = LLVMBuildInsertValue( bb, vit, sval, it, "" );
						i += LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), types[ it ] );
					}
					return vit;
				}
				[[fallthrough]];
			default:
				return nullptr;
		}
	}
	static LLVMValueRef const_bit_cast( LLVMModuleRef mod, LLVMValueRef val, LLVMTypeRef new_type )
	{
		LLVMTypeRef prev_type = LLVMTypeOf( val );
		size_t size_p = LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), prev_type );
		size_t size_n = LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), new_type );

		switch ( LLVMGetTypeKind( prev_type ) )
		{
			case LLVMIntegerTypeKind: break;
			case LLVMHalfTypeKind:
			case LLVMFloatTypeKind:
			case LLVMDoubleTypeKind:
			case LLVMVectorTypeKind:  val = LLVMConstBitCast( val, LLVMIntType( size_p ) );     break;
			case LLVMArrayTypeKind:   val = LLVMConstBitCast( val, LLVMPointerType( LLVMGetElementType( prev_type ), 0 ) ); [[fallthrough]];
			case LLVMPointerTypeKind: val = LLVMConstPtrToInt( val, LLVMInt64Type() );          break;
			case LLVMStructTypeKind:
			{
				std::vector<LLVMTypeRef> types( LLVMCountStructElementTypes( prev_type ) );
				LLVMGetStructElementTypes( prev_type, types.data() );

				size_t it = 0;
				LLVMTypeRef vit_type = LLVMIntType( size_p );
				LLVMValueRef vit = LLVMConstInt( vit_type, 0, false );
				for ( size_t i = 0; i < std::min( size_n, size_p ); it++ )
				{
					if ( LLVMGetTypeKind( types[ it ] ) != LLVMIntegerTypeKind )
						return nullptr;

					uint32_t idx = it;
					auto sval = LLVMConstShl( LLVMConstIntCast( LLVMConstExtractValue( val, &idx, 1 ), vit_type, false ), LLVMConstInt( vit_type, i, false ) );
					vit = LLVMConstOr( vit, sval );
					i += LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), types[ it ] );
				}
				val = vit;
				break;
			}
				[[fallthrough]];
			default: 
				return nullptr;
		}

		if ( size_p != size_n )
			val = LLVMConstIntCast( val, LLVMIntType( size_n ), false );

		switch ( LLVMGetTypeKind( new_type ) )
		{
			case LLVMIntegerTypeKind: return val;
			case LLVMHalfTypeKind:
			case LLVMFloatTypeKind:
			case LLVMDoubleTypeKind:
			case LLVMVectorTypeKind:  return LLVMConstBitCast( val, new_type );
			case LLVMPointerTypeKind: return LLVMConstIntToPtr( val, new_type );
			case LLVMStructTypeKind:
				if ( size_n <= 64 )
				{
					std::vector<LLVMTypeRef> types( LLVMCountStructElementTypes( new_type ) );
					LLVMGetStructElementTypes( new_type, types.data() );

					size_t it = 0;
					LLVMValueRef vit = LLVMGetUndef( new_type );
					for ( size_t i = 0; i < std::min( size_n, size_p ); it++ )
					{
						if ( LLVMGetTypeKind( types[ it ] ) != LLVMIntegerTypeKind )
							return nullptr;

						uint32_t idx = it;
						auto sval = LLVMConstAShr( val, LLVMConstInt( LLVMTypeOf( val ), i, false ) );
						sval = LLVMConstIntCast( sval, types[ it ], false );
						vit = LLVMConstInsertValue( vit, sval, &idx, 1 );
						i += LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), types[ it ] );
					}
					return vit;
				}
				[[fallthrough]];
			default: 
				return nullptr;
		}
	}

	// Global helpers.
	//
	template<bool external = true>
	static void fix_linkage( LLVMValueRef global )
	{
		LLVMSetVisibility( global, LLVMDefaultVisibility );
		LLVMSetLinkage( global, external ? LLVMExternalLinkage : LLVMLinkOnceAnyLinkage );
	}
	static LLVMValueRef get_function( LLVMModuleRef mod, const char* name )
	{
		return LLVMGetNamedFunction( mod, name );
	}
	template<bool external = true, xstd::Iterable C = std::initializer_list<LLVMTypeRef>>
	static std::tuple<LLVMValueRef, LLVMTypeRef, bool> get_function_ex( LLVMModuleRef mod, const char* name, LLVMTypeRef retval, C&& args, linker::object* obj = nullptr, bool vararg = false )
	{
		LLVMValueRef fn = get_function( mod, name );
		LLVMTypeRef fn_t = LLVMFunctionType(retval, const_cast<LLVMTypeRef*>(std::to_address(std::begin(args))), std::size(args), vararg);
		if ( !fn )
		{
			fn = LLVMAddFunction( mod, name, fn_t );
			fix_linkage<external>( fn );

			if ( obj )
			{
				auto& esym = obj->external_symbols.emplace_back( ref::allocate<linker::symbol>() );
				esym->storage_class = coff::storage_class_id::public_symbol;
				esym->derived_type = coff::derived_type_id::function;
				esym->name = name;
			}
			return { fn, fn_t, true };
		}
		return { fn, fn_t, false };
	}
	template<bool external = true, xstd::Iterable C = std::initializer_list<LLVMTypeRef>>
	static std::pair<LLVMValueRef, bool> get_function( LLVMModuleRef mod, const char* name, LLVMTypeRef retval, C&& args, linker::object* obj = nullptr, bool vararg = false )
	{
		auto [fn, _, found] = get_function_ex<external, C>(mod, name, retval, std::forward<C>(args), obj, vararg);
		return { fn, found };
	}
	static LLVMValueRef get_global( LLVMModuleRef mod, const char* name )
	{
		return LLVMGetNamedGlobal( mod, name );
	}
	template<bool external = true>
	static std::pair<LLVMValueRef, bool> get_global( LLVMModuleRef mod, const char* name, LLVMTypeRef type, LLVMValueRef init = nullptr, linker::object* obj = nullptr )
	{
		LLVMValueRef global = get_global( mod, name );
		if ( !global )
		{
			global = LLVMAddGlobal( mod, type, name );
			fix_linkage<external>( global );
			if ( init )
				LLVMSetInitializer( global, init );

			if ( obj )
			{
				auto& esym = obj->external_symbols.emplace_back( ref::allocate<linker::symbol>() );
				esym->storage_class = coff::storage_class_id::public_symbol;
				esym->name = name;
			}
			return { global, true };
		}
		return { global, false };
	}
	template<bool external = true>
	static std::pair<LLVMValueRef, bool> get_global( LLVMModuleRef mod, const char* name, LLVMValueRef init, linker::object* obj = nullptr ) { return get_global<external>( mod, name, LLVMTypeOf( init ), init, obj ); }

	template<bool external = true, xstd::Iterable C = std::initializer_list<LLVMTypeRef>>
	static LLVMValueRef get_intrinsic( LLVMModuleRef mod, std::string_view name, C&& args = {} )
	{
		return LLVMGetIntrinsicDeclaration( 
			mod, 
			LLVMLookupIntrinsicID( name.data(), name.length() ), 
			const_cast< LLVMTypeRef* >( std::to_address( std::begin( args ) ) ), 
			std::size( args ) 
		);
	}

	// Iterator helpers.
	//
	static std::vector<LLVMBasicBlockRef> get_basic_blocks( LLVMValueRef fn )
	{
		std::vector<LLVMBasicBlockRef> bbs( LLVMCountBasicBlocks( fn ) );
		LLVMGetBasicBlocks( fn, bbs.data() );
		return bbs;
	}
	static std::vector<LLVMValueRef> get_globals( LLVMModuleRef mod )
	{
		std::vector<LLVMValueRef> global_list;
		for ( auto global = LLVMGetFirstGlobal( mod ); global; global = LLVMGetNextGlobal( global ) )
			global_list.emplace_back( global );
		return global_list;
	}
	static std::vector<LLVMValueRef> get_functions( LLVMModuleRef mod )
	{
		std::vector<LLVMValueRef> func_list;
		for ( auto func = LLVMGetFirstFunction( mod ); func; func = LLVMGetNextFunction( func ) )
			func_list.emplace_back( func );
		return func_list;
	}
	static std::vector<LLVMValueRef> get_users( LLVMValueRef value )
	{
		std::vector<LLVMValueRef> user_list;
		for ( auto it = LLVMGetFirstUse( value ); it; it = LLVMGetNextUse( it ) )
			user_list.emplace_back( LLVMGetUser( it ) );
		return user_list;
	}
	static std::unordered_set<std::pair<LLVMValueRef, size_t>, xstd::hasher<>> get_primary_users( LLVMValueRef value, std::initializer_list<LLVMValueKind> accepted_types = { LLVMInstructionValueKind, LLVMGlobalVariableValueKind }, bool allow_indirect = false )
	{
		std::unordered_set<std::pair<LLVMValueRef, size_t>, xstd::hasher<>> result = {};

		auto rec = [ &result, &accepted_types, allow_indirect ] ( auto&& self, LLVMValueRef value ) ->void
		{
			// Iterate all users.
			//
			for ( auto it = LLVMGetFirstUse( value ); it; it = LLVMGetNextUse( it ) )
			{
				LLVMValueRef user = LLVMGetUser( it );

				// If final type, add or break.
				//
				LLVMValueKind kind = LLVMGetValueKind( user );
				switch ( kind )
				{
					case LLVMInstructionValueKind:
					case LLVMGlobalVariableValueKind:
					case LLVMMetadataAsValueValueKind:
					{
						bool found = false;
						for ( auto& type : accepted_types )
						{
							if ( type == kind )
							{
								size_t index = 0;
								while( true )
								{
									auto op = LLVMGetOperand( user, index );
									fassert( op );
									if ( op == value )
										break;
									++index;
								}
								found = result.emplace( user, index ).second;
							}
						}

						if ( !allow_indirect || found )
							user = nullptr;
						break;
					}
					default:
						break;
				}

				// Otherwise recurse.
				//
				if ( user )
					self( self, user );
			}
		};
		rec( rec, value );
		return result;
	}
	static std::string_view get_as_string( LLVMValueRef value )
	{
		size_t total_length = 0;
		const char* data = LLVMGetAsString( value, &total_length );
		return { data, total_length };
	}

	// Replace helpers.
	//
	static void replace_all_and_erase( LLVMValueRef& a, LLVMValueRef b )
	{
		LLVMReplaceAllUsesWith( a, b );
		LLVMInstructionEraseFromParent( a );
		a = b;
	}

	// Size helpers.
	//
	static size_t bit_size( LLVMModuleRef mod, LLVMTypeRef type ) { return type ? LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), type ) : 0; }
	static size_t bit_size( LLVMModuleRef mod, LLVMValueRef value ) { return value ? bit_size( mod, LLVMTypeOf( value ) ) : 0; }
	static size_t size( LLVMModuleRef mod, LLVMTypeRef type ) { return ( bit_size( mod, type ) + 7 ) / 8; }
	static size_t size( LLVMModuleRef mod, LLVMValueRef value ) { return ( bit_size( mod, value ) + 7 ) / 8; }

	// Demotes a constant expression to an instruction and swaps values.
	//
	static LLVMValueRef demote_expression( LLVMBuilderRef bb, LLVMValueRef expr, const std::initializer_list<std::pair<LLVMValueRef, LLVMValueRef>>& swap_list = {}, bool recursive = true )
	{
		for ( auto& [a, b] : swap_list )
			if ( a == expr )
				return b;
		if ( LLVMGetValueKind( expr ) != LLVMConstantExprValueKind )
			return expr;

		auto get_operand = [ & ] ( size_t n )
		{
			auto op = LLVMGetOperand( expr, n );
			for ( auto& [a, b] : swap_list )
				if ( op == a )
					return b;
			if ( recursive )
				op = demote_expression( bb, op, swap_list, true );
			return op;
		};

		LLVMOpcode op = LLVMGetConstOpcode( expr );
		switch ( op )
		{
			case LLVMTrunc:
			case LLVMZExt:
			case LLVMSExt:
			case LLVMFPTrunc:
			case LLVMFPExt:
			case LLVMUIToFP:
			case LLVMSIToFP:
			case LLVMFPToUI:
			case LLVMFPToSI:
			case LLVMPtrToInt:
			case LLVMIntToPtr:
			case LLVMBitCast:
			case LLVMAddrSpaceCast:
				return LLVMBuildCast( bb, op, get_operand( 0 ), LLVMTypeOf( expr ), "" );
			case LLVMSelect:
				return LLVMBuildSelect( bb, get_operand( 0 ), get_operand( 1 ), get_operand( 2 ), "" );
			case LLVMInsertElement:
				return LLVMBuildInsertElement( bb, get_operand( 0 ), get_operand( 1 ), get_operand( 2 ), "" );
			case LLVMExtractElement:
				return LLVMBuildExtractElement( bb, get_operand( 0 ), get_operand( 1 ), "" );

			case LLVMInsertValue:
				xstd::error( "LLVMInsertValue is not implemented!\n" );
				//return InsertValueInst::Create( Ops[ 0 ], Ops[ 1 ], getIndices() );
			case LLVMExtractValue:
				xstd::error( "LLVMExtractValue is not implemented!\n" );
				//return ExtractValueInst::Create( Ops[ 0 ], getIndices() );
			case LLVMShuffleVector:
				xstd::error( "LLVMShuffleVector is not implemented!\n" );
				//return new ShuffleVectorInst( Ops[ 0 ], Ops[ 1 ], getShuffleMask() );

			case LLVMGetElementPtr:
			{
				auto build_gep = LLVMIsInBounds( expr ) ? &LLVMBuildInBoundsGEP2 : &LLVMBuildGEP2;
				std::vector<LLVMValueRef> subops( LLVMGetNumOperands( expr ) );
				for ( size_t n = 0; n != subops.size(); n++ )
					subops[ n ] = get_operand( n );
				return build_gep(bb, LLVMGetGEPSourceElementType(expr), subops[0], subops.data() + 1, subops.size() - 1, "");
			}
			case LLVMICmp:
				return LLVMBuildICmp( bb, LLVMGetICmpPredicate( expr ), get_operand( 0 ), get_operand( 1 ), "" );
			case LLVMFCmp:
				return LLVMBuildFCmp( bb, LLVMGetFCmpPredicate( expr ), get_operand( 0 ), get_operand( 1 ), "" );
			case LLVMFNeg:
				return LLVMBuildFNeg( bb, get_operand( 0 ), "" );
			default:
			{
				return LLVMBuildBinOp( bb, op, get_operand( 0 ), get_operand( 1 ), "" );
				//if ( isa<OverflowingBinaryOperator>( BO ) )
				//{
				//	BO->setHasNoUnsignedWrap( SubclassOptionalData &
				//							  OverflowingBinaryOperator::NoUnsignedWrap );
				//	BO->setHasNoSignedWrap( SubclassOptionalData &
				//							OverflowingBinaryOperator::NoSignedWrap );
				//}
				//if ( isa<PossiblyExactOperator>( BO ) )
				//	BO->setIsExact( SubclassOptionalData & PossiblyExactOperator::IsExact );
			}
		}
	}

	// Name helper.
	//
	static std::string_view name( LLVMValueRef value ) { return LLVMGetValueName( value ); }
};