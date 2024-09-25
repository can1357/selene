#pragma once
#include <iterator>
#include <memory>
#include <string>
#include <xstd/leb128.hpp>
#include <xstd/assert.hpp>
#include <xstd/type_helpers.hpp>
#include <xstd/serialization.hpp>

// [[Configuration]]
// WASM_MEMORY64: If set, controls whether or not parts from Memory64 proposal are included or not.
//
#ifndef WASM_MEMORY64
#define WASM_MEMORY64 1
#endif

namespace wasm
{
	static constexpr size_t arch_memory_width = WASM_MEMORY64 ? 64 : 32;

	// Declare the basic integer types used almost everywhere.
	//
	using var_bool_t = xstd::encode::leb128_t<bool>;
	template<xstd::Enum T>
	using var_enum_t = xstd::encode::leb128_t<T>;
	template<size_t N>
	using var_uint_t = xstd::encode::leb128_t<typename xstd::trivial_converter<( N + 7 ) / 8>::integral_unsigned>;
	template<size_t N>
	using var_int_t = xstd::encode::leb128_t<typename xstd::trivial_converter<( N + 7 ) / 8>::integral_signed>;

	// Configuration dependant sizes.
	//
	using var_size_t = var_uint_t<arch_memory_width>;
	using var_index_t = var_size_t;

	// Describe the generic container type and the string.
	//
	template<typename T, size_t N = arch_memory_width>
	struct var_container
	{
		// Holds a ULEB encoded length and the data array.
		//
		var_uint_t<N>                     count = 0;
		std::unique_ptr<T[]>              raw_data;

		// Default constructor and initializing constructors using range and var_containers.
		//
		var_container() : count( 0 ) {}
		template<typename It1, typename It2>
		var_container( It1&& begin, It2&& end ) : count( std::distance( begin, end ) )
		{
			if ( count )
			{
				raw_data = std::unique_ptr<T[]>{ new T[ count + std::is_same_v<T, char> ] };
				if constexpr ( std::is_same_v<T, char> ) raw_data[ count ] = 0;
				std::copy( begin, end, raw_data.get() );
			}
		}
		template<xstd::Iterable Ty = std::initializer_list<T>>
		var_container( Ty&& c ) : var_container( std::begin( c ), std::end( c ) ) {}

		// Default move, implement copy.
		//
		var_container( var_container&& ) noexcept = default;
		var_container( const var_container& c ) : var_container( c.raw_data.get(), c.raw_data.get() + c.count ) {}
		var_container& operator=( var_container&& ) noexcept = default;
		var_container& operator=( const var_container& c )
		{
			raw_data = {};
			return *new ( this ) var_container( c );
		}

		// Implement array-like access.
		//
		T* data() { return raw_data.get(); }
		const T* data() const { return raw_data.get(); }
		const T* cdata() const { return raw_data.get(); }

		T* begin() { return data(); }
		T* end() { return data() + count; }
		const T* begin() const { return data(); }
		const T* end() const { return data() + count; }

		auto rbegin() { return std::reverse_iterator( end() ); }
		auto rend() { return std::reverse_iterator( begin() ); }
		auto rbegin() const { return std::reverse_iterator( end() ); }
		auto rend() const { return std::reverse_iterator( begin() ); }

		size_t size() const { return count; }
		bool empty() const { return count.value == 0; }

		T& operator[]( size_t n ) { return raw_data[ n ]; }
		const T& operator[]( size_t n ) const { return raw_data[ n ]; }

		// String-like access.
		//
		size_t length() const requires std::is_same_v<T, char> { return count; }
		std::string to_string() const requires std::is_same_v<T, char> { return std::string{ data(), data() + count }; }
		operator std::string() const requires std::is_same_v<T, char> { return to_string(); }


		// Manually serialized according to the RFC.
		//
		static var_container deserialize( xstd::serialization& stream )
		{
			var_container ctr = {};
			stream >> ctr.count;
			ctr.raw_data = std::unique_ptr<T[]>{ new T[ ctr.count + std::is_same_v<T, char> ] };
			if constexpr ( std::is_same_v<T, char> ) ctr.raw_data[ ctr.count ] = 0;

			if constexpr ( xstd::Trivial<T> )
			{
				stream.read( ctr.raw_data.get(), sizeof( T ) * ctr.count );
			}
			else
			{
				for ( size_t n = 0; n != ctr.count; n++ )
					stream >> ctr.raw_data[ n ];
			}
			return ctr;
		}
		void serialize( xstd::serialization& stream ) const
		{
			stream << count;
			for ( size_t n = 0; n != count.value; n++ )
				stream << raw_data[ n ];
		}
	};
	using var_string = var_container<char>;
};