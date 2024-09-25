#pragma once
#include <xstd/intrinsics.hpp>
#include <span>
#include <vector>
#include <string_view>
#include <flash/rule.hpp>

namespace flash
{
	struct pattern final : rule
	{
		std::vector<uint8_t> value = {};
		std::vector<uint8_t> mask = {};
		size_t start_position = 0;

		// Determines the quality of a byte.
		//
		static constexpr float rank_byte( uint8_t value )
		{
			bitcnt_t set_bits = xstd::popcnt( value );
			return 1.0f - ( std::abs( set_bits - 4 ) / 4.0f );
		}

		// Constructed by a value and a mask.
		//
		pattern( std::vector<uint8_t> _value, std::vector<uint8_t> _mask = {} ) 
			: rule( rule::forward_accel | rule::backwards_accel, -FLT_MAX ), value( std::move( _value ) ), mask( std::move( _mask ) )
		{
			mask.resize( value.size(), 0xFF );
		
			// Determine the rank and the optimal start position.
			//
			for ( size_t i = 0; i != value.size(); i++ )
			{
				value[ i ] &= mask[ i ];
				if ( float rank = rank_byte( value[ i ] ); rank > quality )
				{
					start_position = i;
					quality = rank;
				}
			}
		}
		pattern( std::span<const uint8_t> value, std::span<const uint8_t> mask = {} ) 
			: pattern( std::vector<uint8_t>{ value.begin(), value.end() }, std::vector<uint8_t>{ mask.begin(), mask.end() } ) {}

		// Constructs the rule from a string.
		//
		static pattern from( std::string_view str );

		// Implement the interface.
		// 
		int32_t match( image*, section*, uint32_t rva_0, uint32_t rva_1, bool forward = true ) override;
		search_result accelerated_search( image*, section*, uint32_t rva_0, uint32_t rva_1, bool forward ) override;
		std::string to_string() const override {
			return xstd::fmt::str( "Pattern{%s}", value );
		}
	};
};
