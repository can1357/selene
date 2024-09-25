#pragma once
#include <vector>
#include <string_view>
#include <xstd/hexdump.hpp>

namespace flash
{
	// Hex to vector and vice versa.
	//
	inline std::vector<uint8_t> from_hex( std::string_view str )
	{
		std::vector<uint8_t> value = {};
		bool step = false;
		uint8_t value_it = 0;
		for ( char c : str )
		{
			if ( 'A' <= c && c <= 'F' )
			{
				value_it <<= 4;
				value_it |= uint8_t( c - 'A' + 0xA );
			}
			else if ( 'a' <= c && c <= 'f' )
			{
				value_it <<= 4;
				value_it |= uint8_t( c - 'a' + 0xA );
			}
			else if ( '0' <= c && c <= '9' )
			{
				value_it <<= 4;
				value_it |= uint8_t( c - '0' + 0x0 );
			}
			else
			{
				continue;
			}
			if ( step )
			{
				value.emplace_back( value_it );
				value_it = 0;
				step = false;
			}
			else
			{
				step = true;
			}
		}
		return value;
	}
	inline std::string to_hex( std::span<const uint8_t> data )
	{
		if ( data.empty() ) return {};
		std::string out( data.size() * 3 - 1, ' ' );
		for ( size_t i = 0; i != data.size(); i++ )
			xstd::fmt::print_hex_digit( &out[ i * 3 ], data[ i ] );
		return out;
	}
};