#pragma once
#include <vector>
#include <unordered_map>
#include <string_view>
#include <ctype.h>
#include <algorithm>
#include <xstd/assert.hpp>

namespace linker
{
	template<typename C>
	struct arguments
	{
		// Freestanding inputs.
		//
		std::vector<std::basic_string<C>> free_standing;

		// Key => (Opt) Value.
		//
		std::unordered_multimap<std::basic_string<C>, std::basic_string<C>> flags;
	};

	// Helper to parse arguments whether in object directives or the command line.
	//
	template<typename C>
	static arguments<C> split_arguments( std::basic_string_view<C> args,
										 C key_specifier = '/',
										 C value_specifier = ':' )
	{
		while ( args.size() && args.back() == '\x0' )
			args.remove_suffix( 1 );

		// Iteratively parse the entire string.
		//
		arguments<C> result = {};
		for ( auto it = args.begin(); it != args.end(); )
		{
			// Find next non-whitespace.
			//
			it = std::find_if_not( it, args.end(), [ ] ( char c ) { return isspace( c ); } );
			if ( it == args.end() ) break;

			// If named argument:
			//
			if ( *it == key_specifier )
			{
				++it;

				// Get the flag name.
				//
				auto flag_end = std::find_if( it, args.end(), [ & ] ( char c ) { return c == value_specifier || isspace( c ); } );
				std::basic_string_view<C> flag_name = { std::to_address( it ), ( size_t ) ( flag_end - it ) };
				it = flag_end;

				// Get the argument.
				//
				std::basic_string_view<C> argument = {};
				if ( it != args.end() && *it == value_specifier )
				{
					bool in_quote = false;
					auto arg_begin = ++it;
					for ( ; it != args.end(); ++it )
					{
						// End of argument if not in quote and space is used.
						//
						if ( !in_quote && isspace( *it ) )
							break;

						// If we encounter '"':
						//
						if ( *it == '"' )
						{
							in_quote = !in_quote;
							continue;
						}
					}
					xstd::assert_that( !in_quote );
					argument = { std::to_address( arg_begin ), ( size_t ) ( it - arg_begin ) };

					if ( argument.starts_with( '"' ) )
						argument.remove_prefix( 1 ), argument.remove_suffix( 1 );
				}
				std::basic_string<C> f{ flag_name };
				for ( C& c : f ) c = tolower( c );
				result.flags.emplace( std::move( f ), std::basic_string<C>{ argument } );
			}
			else
			{
				// Get the whole body.
				//
				bool in_quote = false;
				auto arg_begin = it;
				for ( ; it != args.end(); ++it )
				{
					// End of argument if not in quote and space is used.
					//
					if ( !in_quote && isspace( *it ) )
						break;

					// If we encounter '"':
					//
					if ( *it == '"' )
					{
						in_quote = !in_quote;
						continue;
					}
				}
				xstd::assert_that( !in_quote );
				result.free_standing.emplace_back( std::basic_string<C>{ std::to_address( arg_begin ), ( size_t ) ( it - arg_begin ) } );
			}
		}
		return result;
	}
};