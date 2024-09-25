#pragma once
#include "common.hpp"
#include "sync.hpp"
#include "ob.hpp"
#include <sdk/cm/api.hpp>
#include <sdk/win/key_value_partial_information_t.hpp>

namespace ntpp
{
	// Creates/Opens a key, similar to emplace/find, [handle, inserted] / [handle].
	//
	nt::result<std::pair<unique_handle, bool>> create_key( const nt::unicode_view& name, uint32_t access = MAXIMUM_ALLOWED, uint32_t options = REG_OPTION_NON_VOLATILE );
	nt::result<unique_handle> open_key( const nt::unicode_view& name, uint32_t access = MAXIMUM_ALLOWED );
	
	// Key information query.
	//
	template<typename T = win::key_value_partial_information_t>
	inline nt::result<std::unique_ptr<T>> query_key_value( void* key, const nt::unicode_view& subkey, nt::key_value_information_class_t iclass = nt::key_value_information_class_t::key_value_partial_information )
	{
		scope_mode _p{};
		scope_registry_lock _g{};

		return impl::query_info_template<T>( 
			os::query_value_key,
			[ ] ( auto&&... ) {},
			key, ( nt::unicode_view* ) &subkey, iclass
		);
	}
	template<typename T>
	inline nt::result<std::unique_ptr<T>> query_subkey_info( void* key, size_t index, nt::key_information_class_t iclass = nt::key_information_class_t::key_basic_information )
	{
		scope_mode _p{};
		scope_registry_lock _g{};

		auto res = impl::query_info_template<T>( 
			os::enumerate_key,
			[ ] ( auto&&... ) {},
			key, index, iclass
		);
		if ( res.status == STATUS_NO_MORE_ENTRIES )
			res.status = STATUS_END_OF_FILE;
		return res;
	}

	// Key/Value deletion.
	//
	nt::result<> delete_key( void* handle );
	nt::result<> delete_key_value( void* handle, const nt::unicode_view& subkey );

	// Key value setter and misc APIs.
	//
	nt::result<> set_key_value( void* key, const nt::unicode_view& subkey, uint32_t type, const void* data, size_t length );
	nt::result<> flush_key( void* handle );

	// Key type helpers.
	//
	template<typename T>
	concept KeyValueInfoLikeWithOffset = requires( T && a ) {
		( uint32_t ) a.type;
		( uint32_t ) a.data_length;
		( uint32_t ) a.data_offset;
	};
	template<typename T>
	concept KeyValueInfoLikeWithData = requires( T && a ) {
		( uint32_t ) a.type;
		( uint32_t ) a.data_length;
		&a.data;
	};
	template<typename T>
	concept KeyValueInfoLike = KeyValueInfoLikeWithData<T> || KeyValueInfoLikeWithOffset<T>;
	template<KeyValueInfoLike I>
	inline any_ptr reg_reference( I* value ) {
		if constexpr ( KeyValueInfoLikeWithData<I> )
			return &value->data;
		else
			return xstd::ptr_at( value, value->data_offset );
	}
	template<typename T, KeyValueInfoLike I>
	inline std::span<T> reg_reference_span( I* value ) {
		return std::span<T>{ ( T* ) reg_reference( value ), value->data_length / sizeof( T ) };
	}

	// Read/Write utilities for each type.
	//
	template<uint32_t type>
	struct reg_type;
	template<>
	struct reg_type<REG_DWORD>
	{
		using element_type = uint32_t;

		static nt::result<> write( void* key, const nt::unicode_view& subkey, const element_type& value )
		{
			return set_key_value( key, subkey, REG_DWORD, &value, sizeof( uint32_t ) );
		}
		template<KeyValueInfoLike T>
		static nt::result<element_type> convert( T* val )
		{
			void* data = reg_reference( val );
			switch ( val->type )
			{
				case REG_QWORD:
				case REG_DWORD:            return *( uint32_t* ) data;
				case REG_DWORD_BIG_ENDIAN: return __builtin_bswap32( *( uint32_t* ) data );
				default:                   return nt::status{ STATUS_OBJECT_TYPE_MISMATCH };
			}
		}
		static nt::result<element_type> read( void* key, const nt::unicode_view& subkey )
		{
			auto val = query_key_value( key, subkey );
			if ( !val ) return { val.status };
			return convert( std::to_address( val ) );
		}
	};
	template<>
	struct reg_type<REG_QWORD>
	{
		using element_type = uint64_t;

		static nt::result<> write( void* key, const nt::unicode_view& subkey, const element_type& value )
		{
			return set_key_value( key, subkey, REG_QWORD, &value, sizeof( uint64_t ) );
		}
		template<KeyValueInfoLike T>
		static nt::result<element_type> convert( T* val )
		{
			void* data = reg_reference( val );
			switch ( val->type )
			{
				case REG_QWORD:			   return *( uint64_t* ) data;
				case REG_DWORD:            return ( uint64_t ) * ( uint32_t* ) data;
				case REG_DWORD_BIG_ENDIAN: return ( uint64_t ) __builtin_bswap32( *( uint32_t* ) data );
				default:                   return nt::status{ STATUS_OBJECT_TYPE_MISMATCH };;
			}
		}
		static nt::result<element_type> read( void* key, const nt::unicode_view& subkey )
		{
			auto val = query_key_value( key, subkey );
			if ( !val ) return { val.status };
			return convert( std::to_address( val ) );
		}
	};
	template<>
	struct reg_type<REG_DWORD_BIG_ENDIAN>
	{
		using element_type = uint32_t;

		static nt::result<> write( void* key, const nt::unicode_view& subkey, const element_type& value )
		{
			uint32_t nvalue = __builtin_bswap32( value );
			return set_key_value( key, subkey, REG_DWORD_BIG_ENDIAN, &nvalue, sizeof( uint32_t ) );
		}
		template<KeyValueInfoLike T>
		static nt::result<element_type> convert( T* val )
		{
			void* data = reg_reference( val );
			switch ( val->type )
			{
				case REG_QWORD:
				case REG_DWORD:            return __builtin_bswap32( *( uint32_t* ) data );
				case REG_DWORD_BIG_ENDIAN: return *( uint32_t* ) data;
				default:                   return nt::status{ STATUS_OBJECT_TYPE_MISMATCH };
			}
		}
		static nt::result<element_type> read( void* key, const nt::unicode_view& subkey )
		{
			auto val = query_key_value( key, subkey );
			if ( !val ) return { val.status };
			return convert( std::to_address( val ) );
		}
	};
	template<>
	struct reg_type<REG_BINARY>
	{
		using element_type = std::vector<uint8_t>;

		static nt::result<> write( void* key, const nt::unicode_view& subkey, std::span<const uint8_t> value )
		{
			return set_key_value( key, subkey, REG_BINARY, value.data(), value.size() );
		}
		template<KeyValueInfoLike T>
		static nt::result<element_type> convert( T* val )
		{
			uint8_t* data = reg_reference( val );
			return std::vector<uint8_t>{ data, data + val->data_length };
		}
		static nt::result<element_type> read( void* key, const nt::unicode_view& subkey )
		{
			auto val = query_key_value( key, subkey );
			if ( !val ) return { val.status };
			return convert( std::to_address( val ) );
		}
	};
	template<>
	struct reg_type<REG_SZ>
	{
		using element_type = std::wstring;

		static nt::result<> write( void* key, const nt::unicode_view& subkey, const std::wstring_view& value )
		{
			return set_key_value( key, subkey, REG_SZ, value.data(), ( value.size() + 1 ) * sizeof( wchar_t ) );
		}
		template<KeyValueInfoLike T>
		static nt::result<element_type> convert( T* val )
		{
			if ( val->type != REG_SZ && val->type != REG_EXPAND_SZ ) return nt::status{ STATUS_OBJECT_TYPE_MISMATCH };

			wchar_t* data = reg_reference( val );
			wchar_t* data_end = data + ( val->data_length / 2 );
			return std::wstring{ data, std::find( data, data_end, 0 ) };
		}
		static nt::result<element_type> read( void* key, const nt::unicode_view& subkey )
		{
			auto val = query_key_value( key, subkey );
			if ( !val ) return { val.status };
			return convert( std::to_address( val ) );
		}
	};
	template<>
	struct reg_type<REG_MULTI_SZ>
	{
		using element_type = std::vector<std::wstring>;

		static nt::result<> write( void* key, const nt::unicode_view& subkey, const std::vector<std::wstring>& value )
		{
			size_t total = 1;
			for ( auto& v : value )
				total += v.size() + 1;
			std::wstring merged;
			merged.resize( total );
			total = 0;
			for ( auto& v : value )
			{
				std::copy_n( v.begin(), v.size(), merged.begin() + total );
				total += v.size() + 1;
			}
			return set_key_value( key, subkey, REG_MULTI_SZ, merged.data(), ( ++total ) * sizeof( wchar_t ) );
		}
		template<KeyValueInfoLike T>
		static nt::result<element_type> convert( T* val )
		{
			if ( val->type == REG_SZ || val->type == REG_EXPAND_SZ ) return std::vector{ *reg_type<REG_SZ>::convert( val ) };
			if ( val->type != REG_MULTI_SZ ) return nt::status{ STATUS_OBJECT_TYPE_MISMATCH };
			wchar_t* data = reg_reference( val );
			wchar_t* data_end = data + ( val->data_length / 2 );

			std::vector<std::wstring> list;
			while ( data < data_end )
			{
				auto item_end = std::find( data, data_end, 0 );
				list.push_back( { data, item_end } );
				data = item_end + 1;
			}
			if ( list.back().empty() )
				list.pop_back();
			return list;
		}
		static nt::result<element_type> read( void* key, const nt::unicode_view& subkey )
		{
			auto val = query_key_value( key, subkey );
			if ( !val ) return { val.status };
			return convert<win::key_value_partial_information_t>( std::to_address( val ) );
		}
	};

	// Environment value getters.
	//
	std::optional<std::wstring> get_cenv( std::wstring_view user_sid, xstd::ahash_t variable_hash );
	std::optional<std::wstring> get_env( std::wstring_view user_sid, std::wstring_view variable );

	// Expands the environment variables in the given string.
	//
	std::wstring expand_env( std::wstring_view sid, std::wstring str );
};