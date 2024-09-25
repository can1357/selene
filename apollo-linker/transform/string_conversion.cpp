#include "string_conversion.hpp"

#include <llvm-c/Analysis.h>
#include <llvm-c/Core.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>

#include <xstd/algorithm.hpp>
#include <xstd/base_n.hpp>
#include <xstd/random.hpp>

#include <apollo/server_string.hpp>
#include <apollo/builtins.hpp>

#define _IN_LINKER_
#include "../apollo-crt/apollo-crt.cpp"
#include "../utility/llvm.hpp"


// List of strings that are forced to be server strings/removed.
//
inline constexpr std::string_view force_remove[] = {
	 "Jean-loup",
	 "Mark Adler",
	 "Lua.org",
	 "Copyright 1995",
	 "$LuaVersion",
};
inline constexpr std::string_view force_server[] = {
	// File path.
	//
	"S:\\",
	
	// XSTD errors.
	//
	"(Fail=",
	"(Result=",
	"(Success)",
	"Assertion failure [",
	
	// STL errors.
	//
	"bad allocation",
	"bad any_cast",
	"bad array new length",
	"bad conversion",
	"bad function call",
	"bad locale name",
	"bad optional access",
	"bad variant access",
	"bad_weak_ptr",
	"bitset overflow"
	"boyer-moore pattern is too long",
	"broken promise",
	"deque<t> too long",
	"derived class must implement",
	"fail to schedule the chore!",
	"future already retrived",
	"invalid hash bucket count",
	"list too long",
	"locale::combine facet missing",
	"map/set too long",
	"promise already satisfied",
	"size_t too long for _size_type",
	"string too long",
	"unordered_map/set too long",
	"unknown exception",
	"vector too long",
	"vector<bool> too long",
	"invalid string position",
	"invalid string_view position",
	
	// Lua, ZLIB, etc.
	//
	"sol: ",
	"control structure too long",
	"core and library have incompatible numeric types",
	"error in error handling",
	"float format mismatch",
	"format mismatch",
	"function arguments expected",
	"function or expression needs too many registers",
	"incompatible version",
	"incorrect data check",
	"incorrect header check",
	"incorrect length check",
	"initial value",
	"insufficient memory",
	"integer format mismatch",
	"integer index",
	"integer overflow",
	"invalid bit length repeat",
	"invalid block type",
	"invalid code -- missing end-of-block",
	"invalid code lengths set",
	"invalid distance code",
	"invalid distance code",
	"invalid distance too far back",
	"invalid distance too far back",
	"invalid distances set",
	"invalid escape sequence",
	"invalid hash bucket count",
	"invalid key to \"next\"",
	"invalid literal/length code",
	"invalid literal/length code",
	"invalid literal/lengths set",
	"invalid long string delimiter",
	"not a binary chunk",
	"malformed number",
	"multiple to-be-closed variables in local list",
	"not enough memory",
	"number has no integer representation",
	"stream end",
	"stream error",
	"string length overflow",
	"string too long",
	"unknown compression method",
	"unknown exception",
	"unknown header flags set",
	"value at this index does not properly reflect the desired type",
	"value expected",
	"value is not a valid userdata",
	"perform arithmetic on",
	"perform bitwise operation on",
	"\"__index\" chain too long; possible loop",
	"\"__newindex\" chain too long; possible loop",
	"\"__tostring\" must return a string",
	"i/o error",
	"utf-8 value too large",
	"cannot resume dead coroutine",
	"cannot resume non-suspended coroutine",
	"cannot use \",..\" outside a vararg function",
	"chunk has too many lines",
	"header crc mismatch",
	"hexadecimal digit expected",
};

template<typename C = char>
static std::string make_printable( std::basic_string_view<C> str )
{
	 std::string msg = {};
	 for ( size_t n = 0; n != str.size(); n++ )
		  if ( isprint( ( char ) str[ n ] ) )
				msg += ( char ) str[ n ];

	 if ( msg.size() > 64 )
		  msg.resize( 64 ), msg += "...";

	 for ( auto diag_msg : { "error", "warning" } )
	 {
		  while ( true )
		  {
				size_t i = xstd::ifind( msg, diag_msg );
				if ( i == std::string::npos ) break;
				msg.insert( i + 1, "_" );
		  }
	 }
	 return msg;
}

// Native object fallback.
//
static void strip_native_strings( linker::object& obj )
{
	for ( auto& scn : obj.sections )
	{
		for ( auto& sym : scn->symbols )
		{
			if ( !sym->is_public() || !sym->name.starts_with( "??_C@_" ) )
				continue;

			auto strip_string = [ & ] <bool is_wide> ( std::bool_constant<is_wide> )
			{
				using C = std::conditional_t<is_wide, wchar_t, char>;
				using str_view_t = std::basic_string_view<C>;

				// Get string ranges.
				//
				const C* bg_str = ( const C* ) scn->raw_data.data() + sym->value;
				const C* en_str = ( const C* ) ( scn->raw_data.data() + scn->raw_data.size() );
				const C* it_str = ( const C* ) bg_str;
				while ( it_str != en_str && *it_str )
					it_str++;

				// If not null terminated (binary string) or if less than 3 characters skip.
				//
				if ( it_str != ( en_str - 1 ) || ( it_str - bg_str ) < 3 )
					return;
				std::string msg = make_printable( str_view_t{ bg_str, ( size_t ) ( it_str - bg_str ) } );
				//xstd::log( "Non-LTO object '%s' emits string '%s' into binary, removing...\n", scn->owner->file_name.filename(), msg );

				// Remove the string, make the symbol private and print a warning.
				//
				fassert( scn->symbols.size() == 1 );
				scn->raw_data = { 0 };
				sym->storage_class = coff::storage_class_id::private_symbol;
			};

			if ( sym->name[ 6 ] == '0' ) strip_string( std::false_type{} );
			else if ( sym->name[ 6 ] == '1' ) strip_string( std::true_type{} );
		}
	}
}

// Attempts to encrypt every use of C strings and handles erasure and conversion to server strings for others.
//
void linker::transform::string_conversion( collection& col, bool hide_all )
{
	 // Enumerate every object:
	 //
	 for ( auto& obj : col.working_set )
	 {
		  // If it's a non LTO object, invoke native fallback.
		  //
		  auto& mod = obj->llvm;
		  if ( !mod )
		  {
				if ( !col.is_debug() && hide_all ) strip_native_strings( *obj );
				continue;
		  }

		  // Add a reference to the decryption helpers.
		  // - void* __crt_decrypt( void* ptr, uint32_t n, uint64_t key )
		  // - uint64_t __crt_*_single( uint64_t intptr, uint64_t key) 
		  //
		  auto [decrypter, decrypter_ty, decrypter_fnd] = llvm::get_function_ex( mod, "__crt_decrypt", LLVMInt64Type(), { LLVMPointerType(LLVMInt64Type(), 0), LLVMInt64Type(), LLVMInt64Type() });
		  auto [enc_single_ptr, enc_single_ptr_ty, enc_single_ptr_fnd] = llvm::get_function_ex(mod, "__crt_encrypt_single", LLVMInt64Type(), { LLVMInt64Type(), LLVMInt64Type() });
		  auto [dec_single_ptr, dec_single_ptr_ty, dec_single_ptr_fnd] = llvm::get_function_ex( mod, "__crt_decrypt_single", LLVMInt64Type(), { LLVMInt64Type(), LLVMInt64Type() } );

		  // Enumerate every global:
		  //
		  for( LLVMValueRef global : llvm::get_globals( mod ) )
		  {
				// Must be a constant, data array.
				//
				if ( !LLVMIsGlobalConstant( global ) )
					 continue;
				LLVMTypeRef type = LLVMGlobalGetValueType( global );
				if ( !type || LLVMGetTypeKind( type ) != LLVMTypeKind::LLVMArrayTypeKind )
					 continue;

				// Skip if in metadata section.
				//
				const char* section = LLVMGetSection( global );
				if ( section && !strcmp( section, "llvm.metadata" ) )
					 continue;

				// Must be initialized with i8[] or i16[].
				//
				size_t length = LLVMGetArrayLength( type );
				if ( length <= 2 )
					 continue;
				LLVMTypeRef etype = LLVMGetElementType( type );
				if( LLVMGetTypeKind( etype ) != LLVMTypeKind::LLVMIntegerTypeKind )
					 continue;
				size_t elength = LLVMSizeOfTypeInBits( LLVMGetModuleDataLayout( mod ), etype );
				if ( elength != 8 && elength != 16 )
					 continue;
				LLVMValueRef value = LLVMGetInitializer( global );
				if ( !value )
					 continue;

				// Read the string, skip if not null terminated.
				//
				size_t total_length = 0;
				const char* data = LLVMGetAsString( value, &total_length );
				for( size_t n = 1; data && n <= ( elength / 8 ); n++ )
					 if ( data[ total_length - n ] != 0 )
						  data = nullptr;

				// All characters must be printable.
				//
				for ( size_t n = 0; data && n != ( length - 1 ); n++ )
				{
					 char ch = data[ n * ( elength / 8 ) ];
					 if ( ch < 0 || ( !isprint( ch ) && !isspace( ch ) ) )
						  data = nullptr;
				}
				if ( !data ) continue;

				auto handle_string = [ & ] <typename C> ( std::basic_string_view<C> str )
				{
					 // Remove string if in force remove list.
					 //
					 if ( !col.is_debug() && xstd::find_if( force_remove, [ & ] ( auto& e ) { return xstd::ifind( str, e ) != std::string::npos; } ) )
					 {
						  LLVMSetInitializer( global, LLVMConstNull( type ) );
						  return;
					 }

					 // Convert to server string if in force server list or is requested.
					 //
					 bool sstr_magic;
					 if constexpr ( sizeof( C ) == 1 )
						  sstr_magic = str.starts_with( SERVER_STRING_MAGIC );
					 else
						  sstr_magic = str.starts_with( SERVER_STRING_MAGIC_W );

					 // Force profiler strings & the blacklisted names to be server strings in production mode.
					 //
					 bool sstr = sstr_magic;
					 if ( !sstr && !col.is_debug() )
					 {
						  sstr = xstd::istarts_with( LLVMGetValueName( global ), "_profiler_tag_" ) || 
								xstd::find_if( force_server, [ & ] ( auto& e ) { return xstd::ifind( str, e ) != std::string::npos; } );
					 }

					 // If we should convert this to a server string:
					 //
					 if ( sstr )
					 {
						  //xstd::log( "%s emits string: '%s', converting to server string...\n", obj->file_name.filename().string().c_str(), make_printable<C>( str ) );

						  // Remove the prefix.
						  //
						  if ( sstr_magic )
								str.remove_prefix( xstd::strlen( SERVER_STRING_MAGIC ) );

						  // Create the new array.
						  //
						  std::vector<LLVMValueRef> parts;
						  auto encrypted_str = apollo::sstr::encrypt( std::basic_string<C>{ str } );
						  for ( auto c : encrypted_str )
								parts.emplace_back( LLVMConstInt( etype, c, false ) );
						  parts.emplace_back( LLVMConstInt( etype, 0, false ) );
						  while ( parts.size() < length )
								parts.emplace_back( LLVMConstInt( etype, 0, false ) );

						  // Create the new global.
						  //
						  std::string new_name = LLVMGetValueName( global ); new_name += '_';
						  LLVMTypeRef new_type = LLVMArrayType( etype, parts.size() );
						  LLVMValueRef new_global = LLVMAddGlobal( mod, new_type, new_name.c_str() );
						  LLVMSetVisibility( new_global, LLVMVisibility::LLVMDefaultVisibility );
						  LLVMSetLinkage( new_global, LLVMLinkage::LLVMLinkOnceAnyLinkage );
						  LLVMValueRef new_init = LLVMConstArray( etype, parts.data(), parts.size() );
						  LLVMSetInitializer( new_global, new_init );
						  LLVMSetGlobalConstant( new_global, true );

						  // Replace in every context and delete the value.
						  //
						  LLVMReplaceAllUsesWith( global, /*new_global*/ LLVMConstPointerCast( new_global, LLVMTypeOf( global ) ) );
						  LLVMDeleteGlobal( global );
						  return;
					 }

					 // Skip encryption if debug and hide_all is not set.
					 //
					 if ( col.is_debug() || !hide_all )
						  return;

					 //xstd::log( "%s emits string: '%s', encrypting...\n", obj->file_name.filename().string().c_str(), make_printable<C>( str ) );

					 // Create a function returning the pointer required or resolve it.
					 //
					 LLVMTypeRef ptr_type = LLVMPointerType( type, 0 );
					 std::string resolver_name = "dec_" + xstd::make_hash( str ).to_string();
					 auto [resolver, resolver_ty, inserted] = llvm::get_function_ex<false>( mod, resolver_name.data(), ptr_type, {} );
					 if ( inserted )
					 {
						  // Pick the key encrypting the pointer.
						  //
						  auto seed = xstd::lce_64_n( xstd::make_crandom<uint64_t>( 2 ) ^ xstd::make_hash( str ) );
						  LLVMValueRef cache_key = LLVMConstInt( LLVMInt64Type(), xstd::lce_64( seed ), false );
						  LLVMValueRef cache_null = LLVMConstInt( LLVMInt64Type(), xstd::lce_64( seed ), false );

						  // Create the global cache.
						  //
						  LLVMValueRef cache_enc = LLVMAddGlobal( mod, LLVMInt64Type(), ( "cache_" + resolver_name ).c_str() );
						  LLVMSetVisibility( cache_enc, LLVMVisibility::LLVMDefaultVisibility );
						  LLVMSetLinkage( cache_enc, LLVMLinkage::LLVMLinkOnceAnyLinkage );
						  LLVMSetInitializer( cache_enc, cache_null );

						  // Create an encrypted i64 array storing it.
						  //
						  size_t qcnt = ( total_length + 7 ) / 8;
						  uint64_t key = xstd::make_hash( str );
						  uint64_t* enc_res = ( uint64_t* ) __crt_encrypt( ( const uint64_t* ) data, qcnt, key );

						  LLVMValueRef enc_store = LLVMAddGlobal( mod, LLVMArrayType( LLVMInt8Type(), qcnt * 8 ), ( "enc_" + resolver_name ).c_str() );
						  LLVMSetVisibility( enc_store, LLVMVisibility::LLVMDefaultVisibility );
						  LLVMSetLinkage( enc_store, LLVMLinkage::LLVMLinkOnceAnyLinkage );
						  LLVMSetInitializer( enc_store, LLVMConstString( ( const char* ) enc_res, qcnt * 8, true ) );
						  delete[] enc_res;

						  // Create all three basic blocks we need.
						  //
						  LLVMBuilderRef bb = LLVMCreateBuilder();
						  LLVMBasicBlockRef entry_block = LLVMAppendBasicBlock( resolver, "" );
						  LLVMBasicBlockRef return_block = LLVMAppendBasicBlock( resolver, "" );
						  LLVMBasicBlockRef resolver_block = LLVMAppendBasicBlock( resolver, "" );

						  // Skip decryption if cache is set.
						  //
						  LLVMPositionBuilderAtEnd( bb, entry_block );

						  LLVMValueRef val = llvm::loadi64( bb, cache_enc );

						  LLVMValueRef valdec_args[] = { val, cache_key };
						  LLVMValueRef valdec = LLVMBuildCall2( bb, dec_single_ptr_ty, dec_single_ptr, valdec_args, 2, "" );

						  LLVMValueRef first_time = LLVMBuildICmp( bb, LLVMIntEQ, val, cache_null, "" );
						  llvm::set_unlikely( LLVMBuildCondBr( bb, first_time, resolver_block, return_block ) );

						  // Decrypt the full string and update cache.
						  //
						  LLVMPositionBuilderAtEnd( bb, resolver_block );

						  LLVMValueRef decrypter_args[] = {
								LLVMBuildPointerCast( bb, enc_store, LLVMPointerType( LLVMInt64Type(), 0 ), "" ),
								LLVMConstInt( LLVMInt64Type(), qcnt, false ),
								LLVMConstInt( LLVMInt64Type(), key, false )
						  };
						  LLVMValueRef valdec_2 = LLVMBuildCall2( bb, decrypter_ty, decrypter, decrypter_args, 3, "" );

						  LLVMValueRef valenc_args[] = { valdec_2, cache_key };
						  LLVMValueRef valenc = LLVMBuildCall2( bb, enc_single_ptr_ty, enc_single_ptr, valenc_args, 2, "" );

						  if ( xstd::make_random( 0, 3 ) == 0 )
						  {
								LLVMValueRef valenc_spec = LLVMBuildSub( bb, valenc, cache_null, "" );
								LLVMBuildAtomicRMW( bb, LLVMAtomicRMWBinOpAdd, cache_enc, valenc_spec, LLVMAtomicOrderingMonotonic, true );
						  }
						  else
						  {
								LLVMBuildStore( bb, valenc, cache_enc );
						  }
						  LLVMBuildBr( bb, return_block );

						  // Decrypt and return the cached result after casting.
						  //
						  LLVMPositionBuilderAtEnd( bb, return_block );
						  LLVMValueRef phi = LLVMBuildPhi( bb, LLVMInt64Type(), "" );

						  LLVMAddIncoming( phi, &valdec, &entry_block, 1 );
						  LLVMAddIncoming( phi, &valdec_2, &resolver_block, 1 );

						  LLVMBuildRet( bb, LLVMBuildIntToPtr( bb, phi, ptr_type, "" ) );

						  // Add attributes and verify.
						  //
						  LLVMDisposeBuilder( bb );
						  llvm::set_enum_attribute( resolver, "alwaysinline" );
						  if ( col.llvm_verify )
								LLVMVerifyFunction( resolver, LLVMVerifierFailureAction::LLVMAbortProcessAction );
					 }

					 // Find uses within functions.
					 //
					 auto instruction_xrefs = llvm::get_primary_users( global, { LLVMInstructionValueKind } );
					 if ( !instruction_xrefs.empty() )
					 {
						  // Enumerate every user:
						  //
						  for ( auto& [ins, op] : instruction_xrefs )
						  {
								// Create the builder.
								//
								LLVMBuilderRef bb = LLVMCreateBuilder();
								if ( LLVMGetInstructionOpcode( ins ) == LLVMPHI )
									 LLVMPositionBuilderBefore( bb, LLVMGetLastInstruction( LLVMGetIncomingBlock( ins, op ) ) );
								else
									 LLVMPositionBuilderBefore( bb, ins );

								// Call into the stub.
								//
								LLVMValueRef result = LLVMBuildCall2( bb, resolver_ty, resolver, nullptr, 0, "" );

								// Lower the constant expression if relevant.
								//
								value = llvm::demote_expression( bb, LLVMGetOperand( ins, op ), { { global, result } } );

								// Replace the operand.
								//
								LLVMSetOperand( ins, op, value );

								// Dipose the builder.
								//
								LLVMDisposeBuilder( bb );
						  }
					 }

					 // Find uses within globals.
					 //
					 auto global_xrefs = llvm::get_primary_users( global, { LLVMGlobalVariableValueKind } );
					 if ( !global_xrefs.empty() )
					 {
						  // Start by making the global mutable.
						  //
						  LLVMSetInitializer( global, LLVMGetUndef( type ) );
						  LLVMSetGlobalConstant( global, false );

						  // Create an inline decryption function.
						  //
						  LLVMTypeRef lazydec_type = LLVMFunctionType( LLVMVoidType(), nullptr, 0, 0 );
						  LLVMValueRef lazydec = LLVMAddFunction( mod, ( "fn_lazydec_" + resolver_name ).c_str(), lazydec_type );
						  LLVMSetLinkage( lazydec, LLVMLinkage::LLVMInternalLinkage );
						  llvm::set_enum_attribute( lazydec, "alwaysinline" );

						  // Create a global skip flag.
						  //
						  auto seed = xstd::lce_64_n( xstd::make_crandom<uint64_t>( 1 ) ^ xstd::make_hash( str ) );
						  uint8_t not_init_flag = xstd::lce_64( seed );
						  uint8_t init_flag = xstd::lce_64( seed );
						  if ( init_flag == not_init_flag ) 
							  init_flag++;
						  LLVMValueRef lazydec_flag = LLVMAddGlobal( mod, LLVMInt8Type(), ( "lazydec_" + resolver_name ).c_str() );
						  LLVMSetInitializer( lazydec_flag, LLVMConstInt( LLVMInt8Type(), not_init_flag, false ) );
						  LLVMSetLinkage( lazydec_flag, LLVMLinkage::LLVMInternalLinkage );

						  // Create three blocks.
						  //
						  LLVMBuilderRef bb = LLVMCreateBuilder();
						  LLVMBasicBlockRef entry_block = LLVMAppendBasicBlock( lazydec, "" );
						  LLVMBasicBlockRef lazydec_block = LLVMAppendBasicBlock( lazydec, "" );
						  LLVMBasicBlockRef return_block = LLVMAppendBasicBlock( lazydec, "" );

						  // Skip decryption if flag is set.
						  //
						  LLVMPositionBuilderAtEnd( bb, entry_block );
						  LLVMValueRef val = llvm::loadi8( bb, lazydec_flag, "" );
						  LLVMValueRef first_time = LLVMBuildICmp( bb, LLVMIntEQ, val, LLVMConstInt( LLVMInt8Type(), not_init_flag, false ), "" );
						  llvm::set_unlikely( LLVMBuildCondBr( bb, first_time, lazydec_block, return_block ) );

						  // Decrypt the value, copy to the inline location and set the flag.
						  //
						  LLVMPositionBuilderAtEnd( bb, lazydec_block );
						  LLVMValueRef ptr = LLVMBuildCall2( bb, resolver_ty, resolver, nullptr, 0, "" );
						  LLVMBuildMemCpy( bb, global, 1, ptr, 1, LLVMConstInt( LLVMInt64Type(), total_length, false ) );
						  LLVMBuildStore( bb, LLVMConstInt( LLVMInt8Type(), init_flag, false ), lazydec_flag );
						  LLVMBuildRetVoid( bb );

						  // Dummy return block.
						  //
						  LLVMPositionBuilderAtEnd( bb, return_block );
						  LLVMBuildRetVoid( bb );

						  // For each function referencing this global, add a call to the lazy decryption.
						  //
						  std::unordered_set<LLVMValueRef, xstd::hasher<>> functions;
						  for ( auto& [xrefing_global, __] : global_xrefs )
								for ( auto& [ins, _] : llvm::get_primary_users( xrefing_global, { LLVMInstructionValueKind }, true ) )
									 functions.emplace( LLVMGetBasicBlockParent( LLVMGetInstructionParent( ins ) ) );
						  for ( auto& fn : functions )
						  {
								LLVMPositionBuilderBefore( bb, LLVMGetFirstInstruction( LLVMGetFirstBasicBlock( fn ) ) );
								LLVMBuildCall2( bb, lazydec_type, lazydec, nullptr, 0, "" );
						  }
						  LLVMDisposeBuilder( bb );
					 }
				};

				if ( elength == 8 )
					 handle_string( std::string_view{ data, data + total_length - 1 } );
				else
					 handle_string( std::wstring_view{ ( const wchar_t* ) data, ( const wchar_t* ) ( data + total_length - 2 ) } );
		  }

		  if ( col.llvm_verify )
				LLVMVerifyModule( mod, LLVMVerifierFailureAction::LLVMAbortProcessAction, nullptr );
	 }
}
