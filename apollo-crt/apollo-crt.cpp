// Disable CRT version broadcasting.
//
#ifndef MUST_MATCH
	#define MUST_MATCH(x) 
#endif

#include <stdint.h>
#include <xstd/intrinsics.hpp>
#include <xstd/random.hpp>

static constexpr uint64_t __crt_build_key = 0x79509e971613c549;

extern "C"
{
#ifdef _IN_LINKER_
	#define __crt_linkage__ static
#else
	#define __crt_linkage__ 
#endif

	// Pointer and string encryption logic.
	//
	NO_DEBUG FORCE_INLINE __crt_linkage__ void __cdecl __crt_assert( bool b, uint64_t str )
	{
		if ( !b ) [[unlikely]]
			__trap();
	}
	NO_DEBUG RINLINE __crt_linkage__ uint64_t __cdecl __crt_decrypt_single( uint64_t value, uint64_t key )
	{
		const uint64_t options_key = __crt_build_key * key;

		if ( options_key & 8 )
			value = rotrq( value, ( ( 16 | options_key ) >> 3 ) % 41 );

		if ( options_key & 1 )      value += ( __crt_build_key * key );
		else                        value ^= ( __crt_build_key * key );

		if ( options_key & 16 )
		{
			if ( ( options_key & 32 ) || ( options_key & 64 ) )
				value &= ~3;
			else
				value ^= 1;
		}
		else if ( !( options_key & 8 ) && ( options_key & 4 ) )
			value = int64_t( value ) >> ( ( ( 8 | options_key ) >> 3 ) % 7 );

		return value;
	}
	NO_DEBUG RINLINE __crt_linkage__ uint64_t __cdecl __crt_encrypt_single( uint64_t value, uint64_t key )
	{
		const uint64_t options_key = __crt_build_key * key;

		if ( options_key & 16 )
			value |= ( options_key & 32 ) ? 3 : 1;
		else if ( !( options_key & 8 ) && ( options_key & 4 ) )
			value = value << ( ( ( 8 | options_key ) >> 3 ) % 7 );

		if ( options_key & 1 )      value -= ( __crt_build_key * key );
		else                        value ^= ( __crt_build_key * key );

		if ( options_key & 8 )
			value = rotlq( value, ( ( 16 | options_key ) >> 3 ) % 41 );
		return value;
	}
	NO_DEBUG RINLINE __crt_linkage__ uint64_t __cdecl __crt_decrypt( const uint64_t* _ptr, size_t n, uint64_t key )
	{
		const uint64_t* volatile __ptr = _ptr;
		const uint64_t* ptr = __ptr;

		uint64_t* result = new uint64_t[ n ];
		for ( size_t i = 0; i != n; i++ )
		{
			result[ i ] = ptr[ i ];

			switch ( n % 3 )
			{
				case 0: result[ i ] ^= xstd::lce_64( key ); break;
				case 1: result[ i ] -= xstd::lce_64( key ); break;
				case 2: result[ i ] += xstd::lce_64( key ); break;
			}
			if ( n % 2 ) result[ i ] = rotrq( result[ i ], n % 64 );
		}
		return ( uint64_t ) result;
	}
	NO_DEBUG RINLINE __crt_linkage__ uint64_t __cdecl __crt_encrypt( const uint64_t* _ptr, size_t n, uint64_t key )
	{
		const uint64_t* volatile __ptr = _ptr;
		const uint64_t* ptr = __ptr;

		uint64_t* result = new uint64_t[ n ];
		for ( size_t i = 0; i != n; i++ )
		{
			result[ i ] = ptr[ i ];

			if ( n % 2 ) result[ i ] = rotlq( result[ i ], n % 64 );
			switch ( n % 3 )
			{
				case 0: result[ i ] ^= xstd::lce_64( key ); break;
				case 1: result[ i ] += xstd::lce_64( key ); break;
				case 2: result[ i ] -= xstd::lce_64( key ); break;
			}
		}
		return ( uint64_t ) result;
	}

#ifdef __clang__
	NO_DEBUG RINLINE __crt_linkage__ uint64_t __cdecl __crt_translate_gs( uint64_t ptr )
	{
		uint64_t base;
		asm( "rdgsbase %0" : "=r" ( base ) );
		return base + ptr;
	}

	NO_DEBUG RINLINE __crt_linkage__ uint64_t __cdecl __crt_translate_fs( uint64_t ptr )
	{
		uint64_t base;
		asm( "rdfsbase %0" : "=r" ( base ) );
		return base + ptr;
	}
#endif
};