#pragma once
#include <xstd/intrinsics.hpp>
#include <span>
#include <string>
#include <memory>
#include <vector>
#include <utility>
#include <algorithm>
#include <xstd/formatting.hpp>
#include <xedpp.hpp>
#include <flash/image.hpp>

namespace flash
{
	// Helper for validation of code ranges.
	//
	inline bool is_valid_code_range( std::span<const uint8_t> rng )
	{
		while ( !rng.empty() )
		{
			if ( size_t len = xed::decode_len64( rng.data(), rng.size() ) )
				rng = rng.subspan( len );
			else
				return false;
		}
		return true;
	}

	// Search result type.
	//
	struct search_result
	{
		static constexpr uint32_t npos = uint32_t( 0x80000000 );  // Not found

		uint32_t position; // RVA
		uint32_t length;

		// No match.
		//
		constexpr search_result() : position( npos ), length( 0 ) {}

		// Valid result.
		//
		constexpr search_result( uint32_t position, uint32_t length ) : position( position ), length( length ) {}

		// Default copy and compare.
		//
		constexpr search_result( const search_result& ) = default;
		constexpr search_result& operator=( const search_result& ) = default;
		constexpr auto operator<=>( const search_result& ) const = default;

		// Validity check.
		//
		constexpr bool has_value() const { return !( position & npos ); }
		constexpr explicit operator bool() const { return has_value(); }

		// String conversion.
		//
		std::string to_string() const 
		{
			if ( !has_value() ) return "None";
			return xstd::fmt::str( "+%x, %x bytes", position, length );
		}

		// Hashing and serialization.
		//
		constexpr auto tie() { return std::tie( position, length ); }
	};

	// Virtual class for any rule used in pattern matching.
	//
	struct rule
	{
		// Rule traits.
		//
		enum trait : uint8_t
		{
			forward_accel =   1 << 0, // Implements forward accelerated search.
			backwards_accel = 1 << 1, // Implements backwards accelerated search.
			s_padding =       1 << 2, // Special rule, padding.
			s_marker =        1 << 3, // Special rule, marker.
		};

		float quality;
		uint8_t traits;

		// Constructed by trait flags and the rule quality [0-1].
		//
		constexpr rule( uint8_t traits = 0, float quality = 0.0f ) : quality( quality ), traits( traits ) {}

		// Returns the length of the match if prerequisites for the rule are met, otherwise returns a negative number 
		// indicating number of steps the iterator should skip.
		//
		virtual int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward = true ) = 0;

		// Accelerated search implementation.
		//
		virtual search_result accelerated_search( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward ) { unreachable(); }

		// Find and rfind wrappers.
		//
		search_result search( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward )
		{
			// Use the accelerated routine if available.
			//
			if ( traits & ( forward ? forward_accel : backwards_accel ) )
				return accelerated_search( img, scn, rva_0, rva_1, forward );

			// Otherwise check every valid range.
			//
			if ( forward )
			{
				for( uint32_t rva = rva_0; rva <= rva_1; )
				{
					if ( int32_t result = match( img, scn, rva, rva_1, true ); result >= 0 )
						return { rva, uint32_t( result ) };
					else
						rva += -result;
				}
			}
			else
			{
				for ( uint32_t rva = rva_1; rva >= rva_0; )
				{
					if ( int32_t result = match( img, scn, rva_0, rva, false ); result >= 0 )
						return { uint32_t( rva - result ), uint32_t( result ) };
					else
						rva += -result;
				}
			}
			return {};
		}
		search_result find( image* img, section* scn, uint32_t rva_0, uint32_t rva_1 ) { return search( img, scn, rva_0, rva_1, true ); }
		search_result rfind( image* img, section* scn, uint32_t rva_0, uint32_t rva_1 ) { return search( img, scn, rva_0, rva_1, false ); }

		// String conversion.
		//
		virtual std::string to_string() const {
			return "Rule";
		}

		// Virtual destructor.
		//
		virtual ~rule() = default;

		// Helpers for combining rules.
		//
		struct any;
		struct all;
	};

	// Padding rule.
	//
	struct padding final : rule
	{
		uint32_t min, max;

		// Constructed from a range.
		//
		constexpr padding( uint32_t min, uint32_t max ) : rule( rule::s_padding, -1 ), min( min ), max( max ) {}
		constexpr padding( uint32_t max ) : padding( 0, max ) {}

		// Never match anything, if user does not handle padding types, it is an invalid combination.
		//
		int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward = true ) override { return -1; }
		std::string to_string() const override {
			return xstd::fmt::str( "Pad{%u,%u}", min, max );
		}
	};

	// Marker rule.
	//
	struct marker final : rule
	{
		uint32_t last_seen_rva = 0;

		// Default constructed.
		//
		constexpr marker() : rule( rule::s_marker, -1 ) {}

		// Always match, just save the RVA.
		//
		int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward = true ) final
		{
			last_seen_rva = forward ? rva_0 : rva_1;
			return 0;
		}
		std::string to_string() const override {
			return xstd::fmt::str( "Marker{}" );
		}
	};
	
	// Implement basic rule combinations.
	//
	struct rule::any final : rule
	{
		// List of rules owned by this chain.
		//
		std::vector<std::shared_ptr<rule>> rule_list = {};

		// Additional lists sorted by the descending quality of forward and backwards search.
		//
		std::vector<rule*> rule_list_sorted[ 2 ] = {};

		// Default construction.
		//
		any() : rule() {}

		// Construction by an inline rule list.
		//
		template<typename T1, typename... Tx>
		any( T1&& r1, Tx&&... rest ) : any() {

			auto push_rule = [ & ] <typename R> ( R&& rule )
			{
				append( std::make_shared<std::decay_t<R>>( std::forward<R>( rule ) ) );
			};
			push_rule( std::forward<T1>( r1 ) );
			( push_rule( std::forward<Tx>( rest ) ), ... );
		}

		// Update function invoked when the list is changed.
		//
		void update()
		{
			// Recreate the sorted lists.
			//
			for ( size_t f = 0; f != 2; f++ )
			{
				auto& list = rule_list_sorted[ f ];

				list.resize( rule_list.size() );
				for ( size_t i = 0; i != rule_list.size(); i++ )
					list[ i ] = rule_list[ i ].get();

				std::sort( list.begin(), list.end(), [ flg = f ? forward_accel : backwards_accel ]( rule* a, rule* b )
				{
					float eq_a = ( ( a->traits & flg ) ? 1.0f : 0.0f ) + a->quality;
					float eq_b = ( ( b->traits & flg ) ? 1.0f : 0.0f ) + b->quality;
					return eq_a >= eq_b;
				} );
			}

			// Update the traits.
			//
			quality = 0;
			traits = 0;
			for ( auto& rule : rule_list )
			{
				quality = std::max( quality, rule->quality );
				traits |= rule->traits & ( forward_accel | backwards_accel );
			}
		}

		// Emplaces a new rule.
		//
		void append( std::shared_ptr<rule> r )
		{
			rule_list.emplace_back( std::move( r ) );
			update();
		}

		// Gets the optimal rule chain given the direction.
		//
		std::span<rule*> get_chain( bool forward ) { return rule_list_sorted[ forward ]; }

		// Implement the interface.
		//
		int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward ) override
		{
			int64_t min_skip = INT64_MIN;
			for ( auto& r : get_chain( forward ) )
			{
				if ( int64_t result = r->match( img, scn, rva_0, rva_1, forward ); result >= 0 )
					return result;
				else
					min_skip = std::max( min_skip, result );
			}
			return min_skip;
		}
		search_result accelerated_search( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward ) override
		{
			for ( auto& r : get_chain( forward ) )
				if ( auto res = r->search( img, scn, rva_0, rva_1, forward ) )
					return res;
			return {};
		}
		std::string to_string() const override {
			return xstd::fmt::str( "Any{%s}", rule_list );
		}
	};
	struct rule::all final : rule
	{
		// List of rules owned by this chain.
		//
		std::vector<std::shared_ptr<rule>> rule_list = {};

		// Starting point for optimal search quality.
		//
		size_t starting_points[ 2 ] = { 0, 0 };

		// Default construction.
		//
		all() : rule() {}

		// Construction by an inline rule list.
		//
		template<typename T1, typename... Tx>
		all( T1&& r1, Tx&&... rest ) : all() {

			auto push_rule = [ & ] <typename R> ( R&& rule )
			{
				append( std::make_shared<std::decay_t<R>>( std::forward<R>( rule ) ) );
			};
			push_rule( std::forward<T1>( r1 ) );
			( push_rule( std::forward<Tx>( rest ) ), ... );
		}

		// Update function invoked when the list is changed.
		//
		void update()
		{
			quality = 0;
			traits = 0;
			if ( rule_list.empty() )
				return;

			// Calculate the starting points and the traits.
			//
			{
				auto sp = std::find_if( rule_list.begin(), rule_list.end(), [ ] ( auto& r ) { return !( r->traits & s_padding ); } );
				if ( sp != rule_list.end() )
				{
					for ( auto it = sp + 1; it != rule_list.end(); ++it )
					{
						if ( it->get()->traits & s_padding )
							break;
						float eq_a = ( ( it->get()->traits & forward_accel ) ? 1.0f : 0.0f ) + it->get()->quality;
						float eq_b = ( ( sp->get()->traits & forward_accel ) ? 1.0f : 0.0f ) + sp->get()->quality;
						if ( eq_a > eq_b )
							sp = it;
					}
					quality = std::max( quality, sp->get()->quality );
					traits |= sp->get()->traits & forward_accel;
				}
				starting_points[ true ] = sp - rule_list.begin();
			}
			{
				auto sp = std::find_if( rule_list.rbegin(), rule_list.rend(), [ ] ( auto& r ) { return !( r->traits & s_padding ); } );
				if ( sp != rule_list.rend() )
				{
					for ( auto it = sp + 1; it != rule_list.rend(); ++it )
					{
						if ( it->get()->traits & s_padding )
							break;
						float eq_a = ( ( it->get()->traits & backwards_accel ) ? 1.0f : 0.0f ) + it->get()->quality;
						float eq_b = ( ( sp->get()->traits & backwards_accel ) ? 1.0f : 0.0f ) + sp->get()->quality;
						if ( eq_a > eq_b )
							sp = it;
					}
					quality = std::max( quality, sp->get()->quality );
					traits |= sp->get()->traits & backwards_accel;
				}
				starting_points[ false ] = ( rule_list.size() - 1 ) - ( sp - rule_list.rbegin() );
			}
		}

		// Emplaces a new rule.
		//
		void append( std::shared_ptr<rule> r )
		{
			// Combine sequential paddings.
			//
			if ( ( r->traits & s_padding ) && !rule_list.empty() && ( rule_list.back()->traits & s_padding ) ) [[unlikely]]
			{
				const auto* a = ( const padding* ) r.get();
				const auto* b = ( const padding* ) rule_list.back().get();
				rule_list.back() = std::make_shared<padding>(padding{
					std::min( a->min, b->min ),
					std::max( a->max, b->max ),
				} );
				return;
			}

			rule_list.emplace_back( std::move( r ) );
			update();
		}

		// Match implementation with a partial chain.
		//
		int32_t partial_match( size_t rule_next, image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward )
		{
			if ( forward )
			{
				uint32_t it = rva_0;
				while ( rule_next != rule_list.size() )
				{
					auto& r = rule_list[ rule_next++ ];
					if ( r->traits & s_padding )
					{
						// Save starting point.
						//
						uint32_t pad_start = it;

						// Get padding details, if we reached the end break.
						//
						auto* pad = ( ( const padding* ) r.get() );
						auto min = pad->min, max = pad->max;
						if ( ( it + min ) > rva_1 )
							return -1;
						auto max_it = std::min<uint32_t>( it + max, rva_1 );
						it += min;

						// Search for the next valid rule.
						//
						size_t rule_prev = rule_next;
						while ( true )
						{
							if ( rule_next == rule_list.size() )
								return it;
							if ( !( rule_list[ rule_next ]->traits & s_marker ) )
								break;
							rule_next++;
						}

						auto& r2 = rule_list[ rule_next ];
						int32_t result = -1;
						for ( ; it != max_it; it++ )
						{
							result = partial_match( rule_next, img, scn, it, rva_1, true );
							if ( result >= 0 )
							{
								if ( img->validation_disabled || is_valid_code_range( std::span{ img->data }.subspan( pad_start, it - pad_start ) ) )
								{
									for ( auto& r : std::span{ &rule_list[ rule_prev ], &r2 } )
										( ( marker* ) r.get() )->match( img, scn, it, rva_1, true );
									break;
								}
								result = -1;
							}
						}
						if ( result < 0 )
							return -1;
						it += result;
						break;
					}
					else
					{
						int32_t result = r->match( img, scn, it, rva_1, true );
						if ( result < 0 )
							return result;
						else
							it += result;
					}
				}
				return it - rva_0;
			}
			else
			{
				uint32_t it = rva_1;
				while ( rule_next != std::string::npos )
				{
					auto& r = rule_list[ rule_next-- ];
					if ( r->traits & s_padding )
					{
						// Save starting point.
						//
						uint32_t pad_start = it;

						// Get padding details, if we reached the end break.
						//
						auto* pad = ( ( const padding* ) r.get() );
						auto min = pad->min, max = pad->max;
						if ( ( it - min ) < rva_0 )
							return -1;
						auto max_it = std::min<uint32_t>( it - max, rva_0 );
						it -= min;

						// Search for the next rule.
						//
						size_t rule_prev = rule_next;
						while ( true )
						{
							if ( rule_next == std::string::npos )
								return it;
							if ( !( rule_list[ rule_next ]->traits & s_marker ) )
								break;
							rule_next--;
						}
						auto& r2 = rule_list[ rule_next ];

						int32_t result = -1;
						for ( ; it != max_it; it-- )
						{
							result = partial_match( rule_next, img, scn, rva_0, it, false );
							if ( result >= 0 )
							{
								if ( img->validation_disabled || is_valid_code_range( std::span{ img->data }.subspan( it, pad_start - it ) ) )
								{
									for ( auto& r : std::span{ &r2, &rule_list[ rule_prev ] } )
										( ( marker* ) r.get() )->match( img, scn, rva_0, it, false );
									break;
								}
								result = -1;
							}
						}
						if ( result < 0 )
							return -1;
						it -= result;
						break;
					}
					else
					{
						int32_t result = r->match( img, scn, rva_0, it, false );
						if ( result < 0 )
							return result;
						else
							it -= result;
					}
				}
				return rva_1 - it;
			}
		}

		// Implement the interface.
		//
		int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward ) override
		{
			if ( forward ) return partial_match( 0, img, scn, rva_0, rva_1, true );
			else           return partial_match( rule_list.size() - 1, img, scn, rva_0, rva_1, false );
		}
		search_result accelerated_search( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward ) override
		{
			// Return dummy result if we have no rules.
			//
			const size_t starting_pos = starting_points[ forward ];
			if ( starting_pos == rule_list.size() )
				return search_result{ 0, 0 };
			auto& search_rule = rule_list[ starting_pos ];

			if ( forward )
			{
				for( uint32_t it = rva_0; it != rva_1; )
				{
					// If none found, fail.
					//
					search_result result = search_rule->find( img, scn, it, rva_1 );
					if ( !result )
						break;

					// Partially match against every rule before us.
					//
					int32_t result_b = partial_match( starting_pos - 1, img, scn, rva_0, result.position, false );
					if ( result_b >= 0 )
					{
						// Partially match against every rule after us.
						//
						int32_t result_a = partial_match( starting_pos + 1, img, scn, result.position + result.length, rva_1, true );
						if ( result_a >= 0 )
						{
							// Combine all results and return.
							//
							uint32_t begin_it = result.position - result_b;
							uint32_t end_it =   result.position + result.length + result_a;
							return { begin_it, end_it - begin_it };
						}
					}

					// Move the iterator.
					//
					it = result.position + 1;
				}
			}
			else
			{
				for ( uint32_t it = rva_1; it != rva_0; )
				{
					// If none found, fail.
					//
					search_result result = search_rule->rfind( img, scn, rva_0, it );
					if ( !result )
						break;

					// Partially match against every rule before us.
					//
					int32_t result_b = partial_match( starting_pos - 1, img, scn, rva_0, result.position, false );
					if ( result_b >= 0 )
					{
						// Partially match against every rule after us.
						//
						int32_t result_a = partial_match( starting_pos + 1, img, scn, result.position + result.length, rva_1, true );
						if ( result_a >= 0 )
						{
							// Combine all results and return.
							//
							uint32_t begin_it = result.position - result_b;
							uint32_t end_it =   result.position + result.length + result_a;
							return { begin_it, end_it - begin_it };
						}
					}

					// Move the iterator.
					//
					it = result.position;
				}
			}
			return {};
		}
		std::string to_string() const override {
			return xstd::fmt::str( "All{%s}", rule_list );
		}
	};
};