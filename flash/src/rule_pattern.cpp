#include <flash/rule_pattern.hpp>
#include <flash/image.hpp>
#include <flash/simd.hpp>

namespace flash
{
	// Constructs the rule from a string.
	//
	pattern pattern::from( std::string_view str )
	{
		std::vector<uint8_t> value = {};
		std::vector<uint8_t> mask = {};

		bool step = false;
		uint8_t mask_it = 0;
		uint8_t value_it = 0;
		for ( char c : str )
		{
			if ( c == '?' )
			{
				mask_it <<= 4;  value_it <<= 4;
			}
			else if ( 'A' <= c && c <= 'F' )
			{
				mask_it <<= 4;  value_it <<= 4;
				mask_it |= 0xF; value_it |= uint8_t( c - 'A' + 0xA );
			}
			else if ( 'a' <= c && c <= 'f' )
			{
				mask_it <<= 4;  value_it <<= 4;
				mask_it |= 0xF; value_it |= uint8_t( c - 'a' + 0xA );
			}
			else if ( '0' <= c && c <= '9' )
			{
				mask_it <<= 4;  value_it <<= 4;
				mask_it |= 0xF; value_it |= uint8_t( c - '0' + 0x0 );
			}
			else
			{
				continue;
			}

			if ( step )
			{
				value.emplace_back( value_it );
				mask.emplace_back( mask_it );
				mask_it = 0; value_it = 0;
				step = false;
			}
			else
			{
				step = true;
			}
		}
		return { std::move( value ), std::move( mask ) };
	}

	// Implement the interface.
	// 
	int32_t pattern::match( image* img, section*, uint32_t rva_0, uint32_t rva_1, bool forward )
	{
		//xstd::log( "%s-match(%x, +%llx) [%s]\n", forward ? "F" : "B", rva_0, range.size(), value );
		
		uint32_t offset = forward ? rva_0 : uint32_t( rva_1 - value.size() );
		if ( ( rva_1 - rva_0 ) >= value.size() && simd::match( img->data.data() + offset, value.data(), mask.data(), value.size() ) )
			return ( int32_t ) value.size();
		return -1;
	}
	search_result pattern::accelerated_search( image* img, section*, uint32_t rva_0, uint32_t rva_1, bool forward )
	{
		//xstd::log( "%s-accelerated_search(%x, +%llx) [%s]\n", forward ? "F" : "B", rva_0, range.size(), value );
		
		if ( ( rva_1 - rva_0 ) < value.size() )
			return {};

		// Fetch the value and the ranges.
		//
		uint8_t v = value[ start_position ];
		uint8_t m = mask[ start_position ];
		const uint8_t* beg = img->data.data() + rva_0 + start_position;
		const uint8_t* end = img->data.data() + rva_1 - ( value.size() - ( start_position + 1 ) );

		if ( forward )
		{
			for ( const uint8_t* it = beg; it != end; ++it )
			{
				// Find the next match, fail if can't find one.
				//
				it = simd::find<uint8_t>( it, end, v, m );
				if ( !it )
					break;
				
				// Match the entire sequence, skip forward if it does not match.
				//
				if ( !simd::match( it - start_position, value.data(), mask.data(), value.size() ) )
					continue;

				// Return the result.
				//
				return { uint32_t( it - start_position - img->data.data() ), uint32_t( value.size() ) };
			}
		}
		else
		{
			for ( const uint8_t* it = end; it != beg; )
			{
				// Find the next match, fail if can't find one.
				//
				it = simd::rfind<uint8_t>( beg, it, v, m );
				if ( !it )
					break;

				// Match the entire sequence, skip forward if it does not match.
				//
				if ( !simd::match( it - start_position, value.data(), mask.data(), value.size() ) )
					continue;

				// Return the result.
				//
				return { uint32_t( it - start_position - img->data.data() ), uint32_t( value.size() ) };
			}
		}
		return {};
	}
};