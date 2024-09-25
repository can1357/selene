#pragma once
#include <array>
#include <xstd/type_helpers.hpp>
#include <xstd/bitwise.hpp>
#include <xstd/crc.hpp>

// Syscall name hasher.
//
namespace crt::details
{
	template<size_t N, size_t K = N>
	FORCE_INLINE static void unmasking_copy( void* dst, const void* src, size_t& mask )
	{
		auto* pdst = ( uint8_t* ) dst;
		auto* psrc = ( const uint8_t* ) src;
		if ( xstd::bit_reset( mask, xstd::msb( K ) ) )
			*( std::array<uint8_t, K>* )& pdst[ mask ] = *( const std::array<uint8_t, K>* ) &psrc[ mask ];
		if constexpr ( K != 1 )
			return unmasking_copy<N, K / 2>( dst, src, mask );
	}

	FORCE_INLINE inline constexpr uint32_t make_syscall_hash( std::string_view str )
	{
		std::array<uint64_t, 4> partition = { 0 };
		size_t chars_hashed = ( str.size() - 2 ) % ( sizeof( partition ) + 1 );
		uint32_t seed = 0;

		if ( std::is_constant_evaluated() )
		{
			for ( size_t i = 0; i != chars_hashed; i++ )
				partition[ i / 8 ] |= uint64_t( str[ i + 2 ] ) << ( ( i % 8 ) * 8 );
			for ( size_t i = 0; i != 4; i++ )
				seed |= uint32_t( str[ str.size() - 4 + i ] ) << ( i * 8 );
		}
		else
		{
			unmasking_copy<sizeof( partition )>( partition.data(), str.data() + 2, chars_hashed );
			seed = *( uint32_t* ) &str[ str.size() - 4 ];
		}


		xstd::crc32c hash = { ~uint32_t( seed ^ str.size() ) };
		for ( auto& v : partition )
			hash.add_bytes( v );
		return ~hash.digest();
	}
};