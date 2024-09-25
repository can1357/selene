#pragma once
#include <stdint.h>
#include <tuple>
#include <string>
#include <string_view>
#include <xstd/intrinsics.hpp>
#include <xstd/tinyjambu.hpp>
#include <xstd/hashable.hpp>
#include <xstd/numeric_range.hpp>
#include "server_string_def.hpp"

namespace apollo::sstr
{
	// Escape command details.
	//
	inline constexpr size_t escape_cmd_bitlength = 3;
	enum escape_commands : uint8_t
	{
		escape_cmd_perc = 0, // emits '%'
		escape_cmd_null = 1, // emits '\0'
		escape_cmd_dupl = 2, // emits next character as is
		escape_cmd_strb = 3, // begins a server string
		escape_cmd_stre = 4, // ends a server string
		escape_cmd_fmtb = 5, // begins a foreign format string result
		escape_cmd_fmte = 6, // ends a foreign format string result (Followed by u14 checksum)
		escape_cmd_chk =  7, // ends the whole text
		escape_cmd_max,
	};
	inline constexpr uint64_t seed_key = 0xb1abcc0cccf0ce13;
	inline constexpr uint32_t crypto_context[ 5 ] = { 0xdea2ca31, 0xf9017eda, 0x65b9a202, 0xf3681dac, 0x988e06fd };

	// Given a string returns the prefixing format specifier length or zero if not a format specifier.
	//
	template<typename T>
	inline constexpr size_t calculate_fmt_length( std::basic_string_view<T> fmt )
	{
		// Handle invalid cases and '%%'.
		//
		if ( fmt[ 0 ] != '%' || fmt.size() == 1 )
			return 0;
		if ( fmt[ 1 ] == '%' )
			return 2;
		size_t length = 1;

		// Skip all flags.
		//
		while ( true )
		{
			if ( fmt.size() == length )
				return 0;
			auto chr = fmt[ length ];
			for ( char skip : "0123456789-+ #.*lhtjz" )
			{
				if ( chr == skip )
				{
					chr = '*';
					break;
				}
			}
			if ( chr != '*' )
				break;
			else
				length++;
		}

		// Should be the format specifier now.
		//
		for ( char specifier : "diuxXobfFcHsp" )
		{
			if ( fmt[ length ] == specifier )
				return length + 1;
		}
		return 0;
	}

	// Encrypts the given string inline and returns it.
	//
	template<typename T>
	inline std::basic_string<T> encrypt( std::basic_string<T> fmt )
	{
		constexpr T high_bit = T( 1ull << ( ( sizeof( T ) * 8 ) - 1 ) );
		constexpr size_t key_len_unit = 4 / sizeof( T );

		// Skip if empty.
		//
		if ( fmt.empty() )
			return fmt;

		// Reserve space for the worst case space complexity.
		//
		fmt.reserve( fmt.size() * 3 );

		// Pick a "pseudo-random" 4-byte seed generated out of the input and insert it at the beginning.
		//
		std::array<T, key_len_unit> chars = {};
		*( uint32_t* ) chars.data() = ( uint32_t ) xstd::make_hash( fmt ).as64();
		for ( auto& c : chars )
			if ( c == '%' || !c )
				c = T( ~0 );
		fmt.insert( fmt.begin(), chars.begin(), chars.end() );
		uint64_t seed = seed_key ^ *( uint32_t* ) chars.data();

		// Start encrypting the string.
		//
		size_t position = key_len_unit;
		while ( true )
		{
			// Find the next format specifier.
			//
			size_t next = position;
			size_t fmt_length = 0;
			while ( next != fmt.size() && !( fmt_length = calculate_fmt_length<T>( fmt.substr( next ) ) ) )
				next++;

			// Roll the seed once and determine the escape key.
			// - EscapeKey = (<HighBit> | seed<<3)
			//
			xstd::lce_64( seed );
			T escape = high_bit | T( seed << escape_cmd_bitlength );
			xstd::numeric_range<T> escape_range = { T( escape ), T( escape + escape_cmd_max ) };

			// If next format string begins at the current position:
			//
			size_t length = next - position;
			if ( !length )
			{
				// If length is zero, we've reached the end of the string, insert chk and break.
				//
				length = fmt_length;
				if ( !length )
				{
					T escape = high_bit | T( seed << escape_cmd_bitlength );
					fmt += T( escape + escape_cmd_chk );
					break;
				}

				// Insert begin and end markers, skip.
				//
				fmt.insert( fmt.begin() + position, escape + escape_cmd_fmtb );
				position += length + 1;
				fmt.insert( fmt.begin() + position++, escape + escape_cmd_fmte );

				// Roll the seed once more and use it as the pseudo-checksum where checksum is [sizeof(T)*16 - 2] bits.
				//
				fmt.insert( fmt.begin() + position++, T( high_bit | xstd::lce_64( seed ) ) );
				fmt.insert( fmt.begin() + position++, T( high_bit | xstd::lce_64( seed ) ) );
			}
			// Otherwise if we're right before a format string or if there is none:
			//
			else
			{
				// Insert the str begin key.
				//
				fmt.insert( fmt.begin() + position, escape + escape_cmd_strb );
				++position;

				// Encrypt the data and create the digest.
				//
				xstd::tinyjambu<128> enc = { { crypto_context[ 0 ], uint32_t( seed ), uint32_t( seed >> 32 ), crypto_context[ 1 ] } };
				enc.reset( { crypto_context[ 2 ], crypto_context[ 3 ], crypto_context[ 4 ] } );
				auto tag = enc.encrypt( ( uint8_t* ) &fmt[ position ], length * sizeof( T ) ).finalize();

				// Escape the digest.
				//
				for ( size_t n = 0; n != length; n++ )
				{
					if ( fmt[ position ] == '%' )
					{
						fmt[ position ] = escape + escape_cmd_perc;
					}
					else if ( fmt[ position ] == '\x0' )
					{
						fmt[ position ] = escape + escape_cmd_null;
					}
					else if ( escape_range.contains( fmt[ position ] ) )
					{
						fmt.insert( fmt.begin() + position, escape + escape_cmd_dupl );
						++position;
					}
					position++;
				}

				// Insert the str end key.
				//
				fmt.insert( fmt.begin() + position, escape + escape_cmd_stre );
				++position;

				// Roll the seed by tag.
				//
				seed ^= *( uint64_t* ) &tag;
			}
		}
		return fmt;
	}

	// Decrypts the encrypted string in the given range, returns the buffer and the length of the digest.
	// - Returns empty string and 0 on failure.
	//
	template<typename T>
	inline std::pair<std::basic_string<T>, size_t> decrypt( std::basic_string_view<T> fmt )
	{
		constexpr T high_bit = T( 1ull << ( ( sizeof( T ) * 8 ) - 1 ) );
		constexpr size_t key_len_unit = 4 / sizeof( T );

		// Skip, size would not be enough for a encrypted buffer.
		//
		if ( fmt.size() <= ( key_len_unit ) )
			return { {}, 0 };
		
		// Get the initial seed and allocate the buffer.
		//
		uint64_t seed = seed_key ^ *( uint32_t* ) fmt.data();
		std::basic_string<T> buffer = {};
		buffer.reserve( fmt.size() );

		// Start decrypting the string.
		//
		size_t position = key_len_unit;
		while ( position < fmt.size() )
		{
			// Roll the seed once and determine the escape key.
			// - EscapeKey = (<HighBit> | seed<<3)
			//
			xstd::lce_64( seed );
			T escape = high_bit | T( seed << escape_cmd_bitlength );
			xstd::numeric_range<T> escape_range = { T( escape ), T( escape + escape_cmd_max ) };

			// If format begin:
			//
			if ( fmt[ position ] == ( escape + escape_cmd_fmtb ) )
			{
				position++;

				// Search for the end of the formatted string.
				//
				T query[ 4 ] = {};
				query[ 0 ] = escape + escape_cmd_fmte;
				query[ 1 ] = T( high_bit | xstd::lce_64( seed ) );
				query[ 2 ] = T( high_bit | xstd::lce_64( seed ) );
				query[ 3 ] = '\0';

				// If none found fail.
				//
				auto end_pos = fmt.find( query, position );
				if ( end_pos == std::basic_string<T>::npos )
					break;

				// Insert the range as is and skip.
				//
				buffer.insert( buffer.end(), fmt.begin() + position, fmt.begin() + end_pos );
				position = end_pos + 3;
			}
			// If string begin:
			//
			else if ( fmt[ position ] == ( escape + escape_cmd_strb ) )
			{
				// Read un-escape digest.
				//
				T last_char = 0;
				size_t buffer_pos = buffer.size();
				++position;
				while ( position < fmt.size() )
				{
					// Break if end of string.
					//
					last_char = fmt[ position++ ];
					if ( last_char == ( escape + escape_cmd_stre ) )
						break;
					// Insert % if escaped percentage.
					//
					else if ( last_char == ( escape + escape_cmd_perc ) )
						buffer += T( '%' );
					// Insert '\0' if escaped null.
					//
					else if ( last_char == ( escape + escape_cmd_null ) )
						buffer += T( '\0' );
					// Insert next character if duplicate escape.
					//
					else if ( last_char == ( escape + escape_cmd_dupl ) )
					{
						// If out of range, fail.
						//
						if ( position == fmt.size() )
							return { {}, 0 };
						last_char = fmt[ position++ ];
						buffer += last_char;
					}
					else
					{
						buffer += last_char;
					}
				}

				// Fail if invalid ending.
				//
				if ( last_char != ( escape + escape_cmd_stre ) )
					break;

				// Decrypt the data.
				//
				xstd::tinyjambu<128> enc = { { crypto_context[ 0 ], uint32_t( seed ), uint32_t( seed >> 32 ), crypto_context[ 1 ] } };
				enc.reset( { crypto_context[ 2 ], crypto_context[ 3 ], crypto_context[ 4 ] } );
				auto tag = enc.decrypt( ( uint8_t* ) &buffer[ buffer_pos ], ( buffer.size() - buffer_pos ) * sizeof( T ) ).finalize();

				// Roll the seed by tag.
				//
				seed ^= *( uint64_t* ) &tag;
			}
			// If text end:
			//
			else if ( fmt[ position ] == ( escape + escape_cmd_chk ) )
			{
				// Return the buffer, we've succeeded.
				//
				return std::pair{ std::move( buffer ), position + 1 };
			}
			// If next character is unexpected, fail.
			//
			else
			{
				break;
			}
		}
		return { {}, 0 };
	}

	// Decrypts all encrypted strings in the given range.
	//
	template<typename T>
	inline void decrypt_all( std::basic_string<T>& buffer )
	{
		constexpr T high_bit = T( 1ull << ( ( sizeof( T ) * 8 ) - 1 ) );
		constexpr size_t key_len_unit = 4 / sizeof( T );

		// Skip, size would not be enough for a encrypted buffer.
		//
		if ( buffer.size() <= key_len_unit )
			return;

		for ( size_t n = 0; ( n + key_len_unit + 1 ) < buffer.size(); ++n )
		{
			// Read the initial seed.
			//
			uint64_t seed = seed_key  ^ *( uint32_t* ) &buffer[ n ];

			// Roll the seed once and determine the escape key.
			// - EscapeKey = (<HighBit> | seed<<3)
			//
			xstd::lce_64( seed );
			T escape = high_bit | T( seed << escape_cmd_bitlength );
			xstd::numeric_range<T> escape_range = { T( escape ), T( escape + escape_cmd_max ) };

			// If character looks like a valid escape character, try actually decrypting.
			//
			auto& value = buffer[ n + key_len_unit ];
			if ( value == ( escape + escape_cmd_fmtb ) || value == ( escape + escape_cmd_strb ) )
			{
				// If it does decrypt, replace the string and move on.
				//
				auto [str, len] = decrypt<T>( buffer.substr( n ) );
				if ( len )
				{
					size_t slen = str.size();
					buffer.erase( buffer.begin() + n, buffer.begin() + n + len );
					buffer.insert( n, std::move( str ) );
					n += slen - 1;
				}
			}
		}
	}
};