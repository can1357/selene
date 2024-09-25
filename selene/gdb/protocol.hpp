#pragma once
#include <xstd/text.hpp>
#include <xstd/formatting.hpp>

// Define utility functions for protocol implementation.
//
namespace gdb
{
	// Returns whether or not a character needs to be escaped.
	//
	inline constexpr bool should_escape( char c )
	{
		return c == '}' || c == '#' || c == '$';
	}

	// Computes the checksum of a message.
	//
	inline constexpr uint8_t compute_checksum( std::string_view msg )
	{
		uint8_t checksum = 0;
		for ( char b : msg )
			checksum += ( uint8_t ) b;
		return checksum;
	}

	// Escapes a string.
	//
	inline std::string escape_string( std::string msg )
	{
		for ( auto it = msg.begin(); it != msg.end(); )
		{
			if ( should_escape( *it ) ) [[unlikely]]
			{
				*it ^= 0x20;
				it = msg.insert( it, '}' ) + 2;
			}
			else
			{
				++it;
			}
		}
		return msg;
	}

	// Unescapes a string.
	//
	inline std::string unescape_string( std::string msg )
	{
		for ( auto it = msg.begin(); it != msg.end(); it++ )
		{
			if ( *it == '}' ) [[unlikely]]
			{
				it = msg.erase( it );
				*it ^= 0x20;
			}
		}
		return msg;
	}

	// Appends a raw-buffer as hexadecimal to a string.
	//
	inline void append_hex( std::string& to, std::span<const uint8_t> data )
	{
		size_t at = to.size();
		to.resize( at + data.size() * 2 );

		while ( data.size() >= 8 )
		{
			auto arr = xstd::fmt::print_hex<false>( *( const std::array<uint8_t, 8>* ) data.data() );
			memcpy( to.data() + at, &arr, sizeof( arr ) );
			at += sizeof( arr );
			data = data.subspan( 8 );
		}

		for ( size_t i = 0; i != data.size(); i++ )
			xstd::fmt::print_hex_digit( to.data() + at + i * 2, data[ i ] );
	}

	// Converts a raw-buffer into a hexadecimal string.
	//
	inline std::string as_hex( std::span<const uint8_t> data )
	{
		std::string res;
		append_hex( res, data );
		return res;
	}

	// Reads a hexadecimal byte from the given poision.
	//
	inline constexpr uint8_t read_byte( const char* from )
	{
		uint8_t hi = from[ 0 ] > '9' ? 0xA + ( from[ 0 ] - 'a' ) : from[ 0 ] - '0';
		uint8_t lo = from[ 1 ] > '9' ? 0xA + ( from[ 1 ] - 'a' ) : from[ 1 ] - '0';
		return lo | ( hi << 4 );
	}

	// Reads multiple hexadecimal bytes from the given position.
	//
	inline void read_bytes( const char* from, uint8_t* to, size_t n )
	{
		for ( size_t i = 0; i != n; i++ )
			to[ i ] = read_byte( from + i * 2 );
	}
};
