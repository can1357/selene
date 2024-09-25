#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <xstd/xvector.hpp>
#include <span>

namespace flash::simd
{
	namespace impl
	{
		using ymm_t = xstd::xvec<uint8_t, 32>;
		using xmm_t = xstd::xvec<uint8_t, 16>;

		// Vectorized match implementations.
		//
		NO_INLINE inline bool match( const uint8_t* against, const uint8_t* value, const uint8_t* mask, size_t length )
		{
			auto fn = [ & ] <typename U> ( xstd::type_tag<U>, bool overlap ) FORCE_INLINE -> U
			{
				auto* at = against + ( overlap ? length - sizeof( U ) : 0 );
				auto* vt = value + ( overlap ? length - sizeof( U ) : 0 );
				auto* mt = mask + ( overlap ? length - sizeof( U ) : 0 );
				return ( xstd::load_misaligned<U>( at ) & xstd::load_misaligned<U>( mt ) ) ^ xstd::load_misaligned<U>( vt );
			};

			ymm_t mismatch_ymm = { 0 };
			xmm_t mismatch_xmm = { 0 };
			uint64_t mismatch = 0;
			switch ( length )
			{
				// Integral:
				//
				case 9 ... 15:  mismatch = fn( xstd::type_tag<uint64_t>{}, true );
				case 8:         return ( mismatch |= fn( xstd::type_tag<uint64_t>{}, false ) ) == 0;
				case 5 ... 7:   mismatch = fn( xstd::type_tag<uint32_t>{}, true );
				case 4:         return ( mismatch |= fn( xstd::type_tag<uint32_t>{}, false ) ) == 0;
				case 3:         mismatch = fn( xstd::type_tag<uint8_t>{}, true );
				case 2:         return ( mismatch |= fn( xstd::type_tag<uint16_t>{}, false ) ) == 0;
				case 1:         return fn( xstd::type_tag<uint8_t>{}, false ) == 0;
				case 0:         return true;

				// Vector:
				//
				default:
				{
					do
					{
						length -= sizeof( ymm_t );
						auto against_v = xstd::load_misaligned<ymm_t>( against + length );
						auto value_v = xstd::load_misaligned<ymm_t>( value + length );
						auto mask_v = xstd::load_misaligned<ymm_t>( mask + length );
						mismatch_ymm |= ( against_v & mask_v ) ^ value_v;
					}
					while ( length > sizeof( ymm_t ) );
				}
				case 32:        return ( mismatch_ymm | fn( xstd::type_tag<ymm_t>{}, false ) ).is_zero();
				case 17 ... 31: mismatch_xmm = fn( xstd::type_tag<xmm_t>{}, true );
				case 16:        return ( mismatch_xmm | fn( xstd::type_tag<xmm_t>{}, false ) ).is_zero();
			}
		}

		// Vectorized find implementations.
		//
		template<typename T>
		NO_INLINE inline const T* find( std::span<const T> within, T value, T mask )
		{
			using vec_t = xstd::vec256_t<T>;

			// If we can't vectorize this search, do it linearly.
			//
			if ( within.size() < vec_t::Length )
			{
				for ( size_t n = 0; n != within.size(); n++ )
					if ( !( ( within[ n ] ^ value ) & mask ) )
						return &within[ n ];
				return nullptr;
			}

			// Create the vector values.
			//
			vec_t value_vec = vec_t::broadcast( value );
			vec_t mask_vec =  vec_t::broadcast( mask );

			// While there's a huge size leftover, skip as fast possible.
			//
			while ( within.size() >= ( vec_t::Length * 5 ) )
			{
				auto c0 = value_vec == ( mask_vec & xstd::load_misaligned<vec_t>( &within[ vec_t::Length * 0 ] ) );
				auto c1 = value_vec == ( mask_vec & xstd::load_misaligned<vec_t>( &within[ vec_t::Length * 1 ] ) );
				auto cmp = c0 | c1;
				auto c2 = value_vec == ( mask_vec & xstd::load_misaligned<vec_t>( &within[ vec_t::Length * 2 ] ) );
				auto c3 = value_vec == ( mask_vec & xstd::load_misaligned<vec_t>( &within[ vec_t::Length * 3 ] ) );
				cmp |= ( c2 | c3 );
				if ( cmp.is_zero() )
				{
					within = within.subspan( vec_t::Length * 4 );
					continue;
				}
				else
				{
					if ( !c0.is_zero() )      return &within[ vec_t::Length * 0 + xstd::lsb( c0.mask() ) ];
					if ( !c1.is_zero() )      return &within[ vec_t::Length * 1 + xstd::lsb( c1.mask() ) ];
					if ( !c2.is_zero() )      return &within[ vec_t::Length * 2 + xstd::lsb( c2.mask() ) ];
					return &within[ vec_t::Length * 3 + xstd::lsb( c3.mask() ) ];
				}
			}

			// Until we hit the last step:
			//
			size_t limit = within.size() - vec_t::Length;
			for ( size_t n = 0; n < limit; n += vec_t::Length )
			{
				// Match any element of the vector, if we found anything return the index.
				//
				vec_t data_vec = mask_vec & xstd::load_misaligned<vec_t>( &within[ n ] );
				if ( auto cmp_vec = data_vec == value_vec; !cmp_vec.is_zero() )
					return &within[ n + xstd::lsb( cmp_vec.mask() ) ];
			}
			
			// Do the final step and return the result.
			//
			vec_t data_vec = mask_vec & xstd::load_misaligned<vec_t>( &within[ limit ] );
			if ( auto cmp_vec = data_vec == value_vec; !cmp_vec.is_zero() )
				return &within[ limit + xstd::lsb( cmp_vec.mask() ) ];
			else
				return nullptr;
		}
		template<typename T>
		NO_INLINE inline const T* rfind( std::span<const T> within, T value, T mask )
		{
			using vec_t = xstd::vec256_t<T>;

			// If we can't vectorize this search, do it linearly.
			//
			if ( within.size() < vec_t::Length )
			{
				for ( size_t n = within.size(); n != 0; n-- )
					if ( !( ( within[ n - 1 ] ^ value ) & mask ) )
						return &within[ n - 1 ];
				return nullptr;
			}

			// Create the vector values.
			//
			vec_t value_vec = vec_t::broadcast( value );
			vec_t mask_vec =  vec_t::broadcast( mask );

			// While there's a huge size leftover, skip as fast possible.
			//
			while ( within.size() >= ( vec_t::Length * 5 ) )
			{
				auto c0 = value_vec == ( mask_vec & xstd::load_misaligned<vec_t>( &within[ within.size() - vec_t::Length * 1 ] ) );
				auto c1 = value_vec == ( mask_vec & xstd::load_misaligned<vec_t>( &within[ within.size() - vec_t::Length * 2 ] ) );
				auto cmp = c0 | c1;
				auto c2 = value_vec == ( mask_vec & xstd::load_misaligned<vec_t>( &within[ within.size() - vec_t::Length * 3 ] ) );
				auto c3 = value_vec == ( mask_vec & xstd::load_misaligned<vec_t>( &within[ within.size() - vec_t::Length * 4 ] ) );
				cmp |= ( c2 | c3 );
				if ( cmp.is_zero() )
				{
					within = within.subspan( 0, within.size() - vec_t::Length * 4 );
					continue;
				}
				else
				{
					if ( !c0.is_zero() )      return &within[ within.size() - vec_t::Length * 1 + xstd::msb( c0.mask() ) ];
					if ( !c1.is_zero() )      return &within[ within.size() - vec_t::Length * 2 + xstd::msb( c1.mask() ) ];
					if ( !c2.is_zero() )      return &within[ within.size() - vec_t::Length * 3 + xstd::msb( c2.mask() ) ];
					return &within[ within.size() - vec_t::Length * 4 + xstd::msb( c3.mask() ) ];
				}
			}

			// Until we hit the last step:
			//
			constexpr size_t limit = vec_t::Length;
			for ( size_t n = within.size(); int64_t( n ) > int64_t( limit ); n -= vec_t::Length )
			{
				// Match any element of the vector, if we found anything return the index.
				//
				vec_t data_vec = mask_vec & xstd::load_misaligned<vec_t>( &within[ n - vec_t::Length ] );
				if ( auto cmp_vec = data_vec == value_vec; !cmp_vec.is_zero() )
					return &within[ n - vec_t::Length + xstd::msb( cmp_vec.mask() ) ];
			}

			// Do the final step and return the result.
			//
			vec_t data_vec = mask_vec & xstd::load_misaligned<vec_t>( &within[ 0 ] );
			if ( auto cmp_vec = data_vec == value_vec; !cmp_vec.is_zero() )
				return &within[ xstd::msb( cmp_vec.mask() ) ];
			else
				return nullptr;
		}
	};

	// Matcher for a masked value with dyanmic size.
	//
	template<typename T>
	FORCE_INLINE inline bool match( const T* against, const T* value, const T* mask, size_t length )
	{
		return impl::match( ( const uint8_t* ) against, ( const uint8_t* ) value, ( const uint8_t* ) mask, sizeof( T ) * length );
	}

	// Searcher for a masked value.
	//
	template<typename T>
	FORCE_INLINE inline const T* find( std::span<const T> within, T value, T mask )
	{
		return impl::find( within, value, mask );
	}
	template<typename T>
	FORCE_INLINE inline const T* rfind( std::span<const T> within, T value, T mask )
	{
		return impl::rfind( within, value, mask );
	}
	template<typename T>
	FORCE_INLINE inline const T* find( const T* begin, const T* end, T value, T mask )
	{
		return find<T>( std::span{ begin, end }, value, mask );
	}
	template<typename T>
	FORCE_INLINE inline const T* rfind( const T* begin, const T* end, T value, T mask )
	{
		return rfind<T>( std::span{ begin, end }, value, mask );
	}
}