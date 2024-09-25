#pragma once
#include <array>
#include <iterator>
#include <bit>
#include <memory>
#include <variant>
#include <tuple>
#include "common.hpp"
#include "integral_builtins.hpp"
#include "cv_builtins.hpp"
#include "nt_builtins.hpp"
#include "symtable.hpp"

#ifndef SDK_NO_PROPERY_ENCODING
	#ifdef _SELENE_
		#define SDK_NO_PROPERY_ENCODING 1
	#else
		#define SDK_NO_PROPERY_ENCODING 0
	#endif
#endif

// Declare offset geter.
//
#if !IN_PARSER
	#define SDK_OFFSET_ENTRY(type, field) type :: __entry_##field<0>()
#else
	#define SDK_OFFSET_ENTRY(type, field) sdk::offset_entry{}
#endif
#define SDK_OFFSET(type, field) ((int32_t)(SDK_OFFSET_ENTRY(type, field).get_bit_offset() / 8))
#define SDK_EXISTS(type, field) ((bool)(SDK_OFFSET_ENTRY(type, field).get_exists()))

// Macro helper to declare a reference propery that places a type at a specific offset.
// - A template variable C will always be assigned 0, but is kept there to make sure compiler does not generate
//   the code for this routine and nor any of the data it uses (if templated) unless it is directly invoked.
//
namespace sdki 
{
	template<typename T> FORCE_INLINE static constexpr auto* __strip( T* p ) { return ( std::remove_cv_t<T>* )p; };
};
#define __SDK_OFFSET_BOILERPLATE(T, name)                                                                                                             \
	template<auto C = 0> FORCE_INLINE T const& name() const { return (T const&) sdki::__strip(this)->template name<C>(); }                             \
	template<auto C = 0> FORCE_INLINE T volatile& name() volatile { return (T volatile&) sdki::__strip(this)->template name<C>(); }                    \
	template<auto C = 0> FORCE_INLINE T volatile const& name() volatile const { return (T volatile const&) sdki::__strip(this)->template name<C>(); }  \
	template<auto C = 0, typename Tv> FORCE_INLINE T& name( Tv value ) { return name() = value; }                                                      \
	template<auto C = 0, typename Tv> FORCE_INLINE T volatile& name( Tv value ) volatile { return name() = value; }                                    \
	__declspec(property(get=name, put=name))


#if SDK_NO_PROPERY_ENCODING
	#define __SDK_AT_OFFSET_MAGIC(T, name, boff)                                                                                          \
		template<auto C = 0> CONST_FN FORCE_INLINE T& name() { return *(T*)(uint64_t(this)+(boff/8)); }                                    \
		__SDK_OFFSET_BOILERPLATE(_SDK_ESCAPE(T), _SDK_ESCAPE(name))
#else
	#define __SDK_AT_OFFSET_MAGIC(T, name, boff)                                                                                          \
		template<auto C = 0> CONST_FN FORCE_INLINE T& name() { return *(T*)uint64_t(((int64_t(this)<<3)+(boff))>>3); }                     \
		__SDK_OFFSET_BOILERPLATE(_SDK_ESCAPE(T), _SDK_ESCAPE(name))
#endif


#define __SDK_AT_OFFSET_NON_VOL(T, name, boff)                                                                                           \
	template<auto C = 0> CONST_FN FORCE_INLINE T& name() { return *(T*)(uint64_t(this)+(boff/8)); }                                       \
	__SDK_OFFSET_BOILERPLATE(_SDK_ESCAPE(T), _SDK_ESCAPE(name))

#define _SDK_AT_OFFSET(T, boff)         __SDK_AT_OFFSET_MAGIC(_SDK_ESCAPE(T), xstrcat(__ref_, __COUNTER__), _SDK_ESCAPE(boff))
#define _SDK_AT_OFFSET_NON_VOL(T, boff) __SDK_AT_OFFSET_NON_VOL(_SDK_ESCAPE(T), xstrcat(__ref_, __COUNTER__), _SDK_ESCAPE(boff))

// Macro helpers to define magic properties.
//

#define _SDK_MAGIC_PROPERTY(T, name, field, boff, bsize, _exists, key)                                                                                                            \
	template<auto C> FORCE_INLINE static constexpr auto xstrcat(__entry_, field)() { return sdk::make_offset_entry<decltype(xstrcat(name, _t)), key, boff, bsize, _exists, C>(); } \
	_SDK_AT_OFFSET( _SDK_ESCAPE(T), _SDK_ESCAPE(xstrcat(__entry_, field)<C>().get_bit_offset() ) )

#define _SDK_MAGIC_BITFIELD(Q, T, name, field, boff, bsize, _exists, key, cz, ...)                                                                                                 \
	template<auto C> FORCE_INLINE static constexpr auto xstrcat(__entry_, field)() { return sdk::make_offset_entry<decltype(xstrcat(name, _t)), key, boff, bsize, _exists, C>(); }  \
	_SDK_AT_OFFSET( _SDK_ESCAPE(sdki::Q<sdk::bitfield<decltype(xstrcat(__entry_, field)<C>()), T, cz, __VA_ARGS__>>), 0 )

#define SDK_MAGIC_PROPERTIES(name, size, exists, key)                                                                \
	static constexpr bool __magic_properties_tag = true;                                                              \
	template<auto C> FORCE_INLINE     static constexpr auto __magic_properties() { return sdk::make_offset_entry<decltype(xstrcat(name, _t)), key, size, 0, exists, C>(); }

#define SDK_DYNAMIC_SIZE(T)                                                                                          \
	static constexpr bool __has_fixed_size = false;                                                                   \
	T() = delete;                                                                                                     \
	template<typename Tv, auto C = 0> requires( std::is_same_v<Tv, T> )                                               \
	T& operator=(const Tv& v) { memcpy( this, &v, __magic_properties<C>().get_bit_offset() ) }         


#define _SDK_NONVOL_PROPERTY(T, name, field, boff, bsize, _exists, key)                                                                                  \
	template<auto C> FORCE_INLINE static constexpr auto xstrcat(__entry_, field)() { return sdk::make_cx_offset_entry<boff, bsize, _exists, C ^ key>(); } \
	_SDK_AT_OFFSET_NON_VOL( _SDK_ESCAPE(T), _SDK_ESCAPE(boff) )

#define _SDK_NONVOL_BITFIELD(Q, T, name, field, boff, bsize, _exists, key, cz, ...)                                                                      \
	template<auto C> FORCE_INLINE static constexpr auto xstrcat(__entry_, field)() { return sdk::make_cx_offset_entry<boff, bsize, _exists, C ^ key>(); } \
	_SDK_AT_OFFSET_NON_VOL( _SDK_ESCAPE(sdki::Q<sdk::bitfield<decltype(xstrcat(__entry_, field)<C>()), T, cz, __VA_ARGS__>>), 0 )

#define SDK_NONVOL_PROPERTIES(name, size, exists, key)                                                               \
	static constexpr bool __magic_properties_tag = true;                                                              \
	template<auto C> FORCE_INLINE static constexpr auto __magic_properties() { return sdk::make_cx_offset_entry<size, 0, exists, C ^ key>(); }

#define SDK_FIXED_SIZE(T, size)                                                                                      \
	static constexpr bool __has_fixed_size = true;                                                                    \
	char _raw[size] = {};                                                                                             \

// Macro helper to import publics.
//
#define _SDK_MAGIC_LINK(P, identifier, off, sz, cc, key)                                                              \
	static constexpr sdk::deferred_pointer<_SDK_ESCAPE(P), decltype(xstrcat(identifier, _t)), (key>>33), off, sz, cc>

#if IN_PARSER || defined(SDK_SKIP_VERIFICATION)
	#define SDK_VERIFY(...)
#else
	#define SDK_VERIFY(T, size) static_assert( !size || sizeof(T) == size, "Static size verification failed." );
#endif

// Typestrings.
//
template<typename T, T... chars> 
inline consteval auto operator ""_t()  
{  
	struct __type_string
	{
		using name_t = std::array<char, sizeof...( chars ) + 1>;
		static constexpr auto get_name()
		{
			return std::array{ ((char)chars)..., '\x0' };
		}
	};
	return __type_string{};
}

namespace sdk
{
	// Vararg redirection.
	//
#if !IN_PARSER
	template<typename... Tx>
	concept ValidCCall = ( ( sizeof( std::decay_t<Tx> ) <= 8 && !std::is_floating_point_v<Tx> ) && ... );
#else
	template<typename... Tx>
	concept ValidCCall = true;
#endif

	struct integral_return
	{
		uint64_t value;
		template<typename T> requires( sizeof( T ) <= 8 && !std::is_floating_point_v<T> )
		FORCE_INLINE operator T() const { return *( T* ) &value; }
	};

	// Parsing error indicator.
	//
	struct unknown
	{
		unknown() = delete;
		unknown( const unknown& ) = delete;
		unknown& operator=( const unknown& ) = delete;
	
		// Can cast to any value.
		//
		template<typename T> FORCE_INLINE operator T& () { return *( T* ) this; }
		template<typename T> FORCE_INLINE operator const T& () const { return *( T* ) this; }
		template<typename T> FORCE_INLINE operator volatile T& () volatile { return *( T* ) this; }
		template<typename T> FORCE_INLINE operator const volatile T& () const volatile { return *( T* ) this; }

		// Can be invoked with any C-signature.
		//
		template<typename... Tx> requires( ValidCCall<Tx...> ) 
		FORCE_INLINE integral_return operator()( Tx... args ) const { return (( integral_return(__cdecl*)(...))this)(((void*)(uint64_t)args)... ); }
		template<typename... Tx> requires( ValidCCall<Tx...> )
		FORCE_INLINE integral_return operator()( Tx... args ) const volatile { return (( integral_return(__cdecl*)(...))this)(((void*)(uint64_t)args)... ); }
	};

	// Unknown public type.
	//
	struct unknown_ptr
	{
		uint64_t ptr;

		unknown_ptr();
		constexpr unknown_ptr( uint64_t p ) : ptr( p ) {}
		unknown_ptr( const unknown_ptr& ) = delete;
		unknown_ptr& operator=( const unknown_ptr& ) = delete;

		// Redirection to unknown.
		//
		FORCE_INLINE unknown& operator*() { return *( unknown* ) ptr; }
		FORCE_INLINE const unknown& operator*() const { return *( const unknown* ) ptr; }
		FORCE_INLINE const volatile unknown& operator*() const volatile { return *( const volatile unknown* ) ptr; }

		// Can cast to any value.
		//
		template<typename T> FORCE_INLINE operator T*() const { return ( T* ) ptr; }
		template<typename T> FORCE_INLINE operator T*() const volatile { return ( T* ) ptr; }
		FORCE_INLINE operator uint64_t() const { return ( uint64_t ) ptr; }
		FORCE_INLINE operator uint64_t() const volatile { return ( uint64_t ) ptr; }

		// Can be invoked with any C-signature.
		//
		template<typename... Tx> requires( ValidCCall<Tx...> ) 
		FORCE_INLINE integral_return operator()( Tx... args ) const { return (( integral_return(__cdecl*)(...))ptr)(((uint64_t)args)... ); }
		template<typename... Tx> requires( ValidCCall<Tx...> ) 
		FORCE_INLINE integral_return operator()( Tx... args ) const volatile { return (( integral_return(__cdecl*)(...))ptr)(((uint64_t)args)... ); }
	};

	// Function types.
	//
	template<typename T, typename = void> struct function_type {};
	template<typename T, typename... Tx>  struct function_type<T( Tx... )> { using type = T __cdecl ( Tx... ); };
	template<typename T, typename... Tx>  struct function_type<T( Tx..., ... )> { using type = T __cdecl ( Tx..., ... ); };
	template<typename T> using function = typename function_type<T>::type;

#pragma pack(push, 1)
	template<typename I>
	struct symbol_table_reference // => structured after symbol_table_header
	{
		using name_t = typename I::name_t;

		uint32_t magic = SYM_TBL_MAGIC;
		const volatile void* address;
		size_t encryption_key;
		name_t identifier = I::get_name();
	};
#pragma pack(pop)

	template<size_t Key, typename F, typename I>
	struct symbol_table_entry
	{
		// Declare the value.
		//
		static constexpr auto static_value = F{}();
		using T = std::decay_t<decltype( static_value )>;

		// Declare encrypted store.
		//
		inline static _CONSTINIT volatile T value = magic_encode_decode( static_value, Key );

		[[gnu::section( SYM_TBL_DISCARD ), gnu::used]] auto* __sym_tbl_entry()
		{
			[[gnu::section( SYM_TBL_SEG ), gnu::used]] static constexpr symbol_table_reference<I> ref{
				.address = &value,
				.encryption_key = Key
			};
			return &ref;
		}

		FORCE_INLINE static void get( T& out ) 
		{
			if constexpr ( xstd::Same<T, offset_entry> )
			{
				out.bit_offset =      ( uint32_t ) __builtin_symbol_read4( &value.bit_offset,      __builtin_offsetof( offset_entry, bit_offset ), Key );
				out.bit_size =        ( uint16_t ) __builtin_symbol_read2( &value.bit_size,        __builtin_offsetof( offset_entry, bit_size ), Key );
				out.exists =          ( uint8_t )  __builtin_symbol_read1( &value.exists,          __builtin_offsetof( offset_entry, exists ), Key );
			}
			else if constexpr ( xstd::Same<T, public_entry> )
			{
				out.virtual_address = ( uint64_t ) __builtin_symbol_read8( &value.virtual_address, __builtin_offsetof( public_entry, virtual_address ), Key );
				out.offset =          ( uint32_t ) __builtin_symbol_read4( &value.offset,          __builtin_offsetof( public_entry, offset ), Key );
				out.sys_idx =         ( int32_t )  __builtin_symbol_read4( &value.sys_idx,         __builtin_offsetof( public_entry, sys_idx ), Key );
				out.exists =          ( uint8_t )  __builtin_symbol_read1( &value.exists,          __builtin_offsetof( public_entry, exists ), Key );
			}
			else
			{
				static_assert( sizeof( T ) == -1, "Unknown type." );
			}
		}
		FORCE_INLINE static uint32_t get_bit_offset() requires xstd::Same<T, offset_entry>
		{
			return __builtin_symbol_read4( &value.bit_offset, __builtin_offsetof( offset_entry, bit_offset ), Key );
		}
		FORCE_INLINE static uint64_t get_virtual_address() requires xstd::Same<T, public_entry>
		{
			return __builtin_symbol_read8( &value.virtual_address, __builtin_offsetof( public_entry, virtual_address ), Key );
		}
		FORCE_INLINE static int32_t get_syscall_index() requires xstd::Same<T, public_entry>
		{
			return ( int32_t ) __builtin_symbol_read4( &value.sys_idx, __builtin_offsetof( public_entry, sys_idx ), Key );
		}
		FORCE_INLINE static uint32_t get_rva() requires xstd::Same<T, public_entry>
		{
			return __builtin_symbol_read4( &value.offset, __builtin_offsetof( public_entry, offset ), Key );
		}
		FORCE_INLINE static bool get_exists()
		{
			return __builtin_symbol_read1( &value.exists, __builtin_offsetof( T, exists ), Key ) != 0;
		}
	};

	template<typename I, size_t Key, uint32_t bit_offset, uint16_t bit_size, bool exists, auto __idx>
	FORCE_INLINE inline constexpr auto make_offset_entry()
	{
		constexpr auto lambda = [ ] ()
		{
			return offset_entry{ exists ? bit_offset : UINT32_MAX, bit_size, exists };
		};
#if SDK_NO_PROPERY_ENCODING
		return symbol_table_entry<0, decltype( lambda ), I>{};
#else
		return symbol_table_entry<Key, decltype( lambda ), I>{};
#endif
	}
	template<uint32_t bit_offset, uint16_t bit_size, bool exists, auto __idx>
	FORCE_INLINE inline constexpr auto make_cx_offset_entry()
	{
		struct
		{
			static void get( offset_entry& out )
			{
				out = offset_entry{ bit_offset, bit_size, exists };
			}
			static uint32_t get_bit_offset()
			{
				return bit_offset;
			}
			static bool get_exists()
			{
				return exists;
			}
		} anon;
		return anon;
	}

	template<typename P, typename I, size_t Key, uint32_t offset, uint32_t /*deprecated, size*/, bool exists>
	struct deferred_pointer
	{
		using pointer_type = P;

		static constexpr bool __magic_link_tag = true;

		template<auto C = 0>
		FORCE_INLINE static auto entry_v()
		{
			constexpr auto lambda = [ ] () { return public_entry{ 0, offset, -1, exists }; };
			return symbol_table_entry<Key, decltype( lambda ), I>{};
		}
		template<auto C = 0>
		FORCE_INLINE static bool get_exists()
		{
			return entry_v<C>().get_exists();
		}
		template<auto C = 0>
		FORCE_INLINE static uint32_t get_rva()
		{
			return entry_v<C>().get_rva();
		}
		template<auto C = 0>
		FORCE_INLINE static int32_t get_syscall_index()
		{
			return entry_v<C>().get_syscall_index();
		}

		// Access using known type.
		//
		template<auto C = 0> FORCE_INLINE P get() const volatile 
		{
			return ( P ) entry_v<C>().get_virtual_address();
		}
		template<auto C = 0> FORCE_INLINE operator P() const volatile { return get<C>(); }
		template<auto C = 0> FORCE_INLINE P operator->() const volatile { return get<C>(); }
		template<auto C = 0> FORCE_INLINE auto& operator*() const volatile { return *get<C>(); }

		// Overload addressof.
		//
		template<auto C = 0> FORCE_INLINE P operator&() const volatile { return get(); }

#if KERNEL_TARGET
		// Invoke if it's a function.
		//
		template<typename... Tx> requires xstd::InvocableWith<P, Tx...>
		FORCE_INLINE decltype( auto ) operator()( Tx&&... args ) const volatile 
		{ 
			return get<0>()( std::forward<Tx>( args )... );
		}
#else
		[[sdk_syminvoke, gnu::noinline, gnu::flatten]] inline static uint64_t ccall( uint64_t arg_count, void** eargs )
		{
			return ( ( uint64_t( * )( ... ) )0xDEADBEEF )( arg_count, eargs );
		}

		// Invoke if it's a function.
		//
		template<typename... Tx> requires xstd::InvocableWith<P, Tx...>
		FORCE_INLINE integral_return operator()( Tx&&... args ) const volatile
		{
			std::array<void*, sizeof...( Tx )> arr = { ( (void*) (uint64_t) args )... };
			return integral_return{ .value = ccall( sizeof...( Tx ), arr.data() ) };
		}
#endif
	};

	template<typename O /*=> decltype(<offset entry>)*/, typename _T, bitcnt_t CSize, typename... UnderlyingTypes>
	struct bitfield
	{
		// Internal traits.
		//
		using field_type = O;
		using T = std::conditional_t<std::is_signed_v<_T>, xstd::convert_int_t<_T>, xstd::convert_uint_t<_T>>;
		static constexpr bool always_qword = ( sizeof...( UnderlyingTypes ) == 1 ) && sizeof( xstd::first_of_t<UnderlyingTypes...> ) == 8;
		static constexpr bool always_dword = ( sizeof...( UnderlyingTypes ) == 1 ) && sizeof( xstd::first_of_t<UnderlyingTypes...> ) == 4;
		static constexpr bool always_word =  ( sizeof...( UnderlyingTypes ) == 1 ) && sizeof( xstd::first_of_t<UnderlyingTypes...> ) == 2;
		static constexpr bool always_byte =  ( sizeof...( UnderlyingTypes ) == 1 ) && sizeof( xstd::first_of_t<UnderlyingTypes...> ) == 1;

		// No copy/construction allowed.
		//
		bitfield();
		bitfield( const bitfield& ) = delete;
		bitfield& operator=( const bitfield& ) = delete;

		// Dispatchers based on runtime information.
		//
		template<typename F>
		FORCE_INLINE auto visit( F&& fn, offset_entry off )
		{
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			if constexpr ( always_qword )
				return fn( xstd::ref_at<uint64_t>( this, ( off.bit_offset & ~63 ) / 8 ), off.bit_offset & 63 );
			else if constexpr ( always_dword )
				return fn( xstd::ref_at<uint32_t>( this, ( off.bit_offset & ~31 ) / 8 ), off.bit_offset & 31 );
			else if constexpr ( always_word )
				return fn( xstd::ref_at<uint16_t>( this, ( off.bit_offset & ~15 ) / 8 ), off.bit_offset & 15 );
			else if constexpr ( always_byte )
				return fn( xstd::ref_at<uint8_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else if ( bit_size > 32 )
				return fn( xstd::ref_at<uint64_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else if ( bit_size > 16 )
				return fn( xstd::ref_at<uint32_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else if ( bit_size > 8 )
				return fn( xstd::ref_at<uint16_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else
				return fn( xstd::ref_at<uint8_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
		}
		template<typename F>
		FORCE_INLINE auto visit( F&& fn, offset_entry off ) const
		{
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			if constexpr ( always_qword )
				return fn( xstd::ref_at<const uint64_t>( this, ( off.bit_offset & ~63 ) / 8 ), off.bit_offset & 63 );
			else if constexpr ( always_dword )
				return fn( xstd::ref_at<const uint32_t>( this, ( off.bit_offset & ~31 ) / 8 ), off.bit_offset & 31 );
			else if constexpr ( always_word )
				return fn( xstd::ref_at<const uint16_t>( this, ( off.bit_offset & ~15 ) / 8 ), off.bit_offset & 15 );
			else if constexpr ( always_byte )
				return fn( xstd::ref_at<const uint8_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else if ( bit_size > 32 )
				return fn( xstd::ref_at<const uint64_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else if ( bit_size > 16 )
				return fn( xstd::ref_at<const uint32_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else if ( bit_size > 8 )
				return fn( xstd::ref_at<const uint16_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else
				return fn( xstd::ref_at<const uint8_t>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
		}
		template<typename F>
		FORCE_INLINE auto visit( F&& fn, offset_entry off ) volatile
		{
			if constexpr ( always_qword )
				return fn( xstd::ref_at<std::atomic<uint64_t>>( this, ( off.bit_offset & ~63 ) / 8 ), off.bit_offset & 63 );
			else if constexpr ( always_dword )
				return fn( xstd::ref_at<std::atomic<uint32_t>>( this, ( off.bit_offset & ~31 ) / 8 ), off.bit_offset & 31 );
			else if constexpr ( always_word )
				return fn( xstd::ref_at<std::atomic<uint16_t>>( this, ( off.bit_offset & ~15 ) / 8 ), off.bit_offset & 15 );
			else if constexpr ( always_byte )
				return fn( xstd::ref_at<std::atomic<uint8_t>>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else
				static_assert( sizeof( T ) == -1, "Cannot complete this operation atomically." );
		}
		template<typename F>
		FORCE_INLINE auto visit( F&& fn, offset_entry off ) const volatile
		{
			if constexpr ( always_qword )
				return fn( xstd::ref_at<const std::atomic<uint64_t>>( this, ( off.bit_offset & ~63 ) / 8 ), off.bit_offset & 63 );
			else if constexpr ( always_dword )
				return fn( xstd::ref_at<const std::atomic<uint32_t>>( this, ( off.bit_offset & ~31 ) / 8 ), off.bit_offset & 31 );
			else if constexpr ( always_word )
				return fn( xstd::ref_at<const std::atomic<uint16_t>>( this, ( off.bit_offset & ~15 ) / 8 ), off.bit_offset & 15 );
			else if constexpr ( always_byte )
				return fn( xstd::ref_at<const std::atomic<uint8_t>>( this, ( off.bit_offset / 8 ) ), off.bit_offset & 7 );
			else
				static_assert( sizeof( T ) == -1, "Cannot complete this operation atomically." );
		}

		// Value reader.
		//
		FORCE_INLINE T load() const
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto reader = [ & ] <typename U> ( const U& value, bitcnt_t offset )
			{
				// If bit size is constant one, use bit test.
				//
				if constexpr ( CSize == 1 )
				{
					return xstd::bit_test( value, offset );
				}
				// Otherwise read directly.
				//
				else
				{
					if constexpr ( std::is_signed_v<T> )
							return T( xstd::sign_extend( uint64_t(value) >> offset, bit_size ) );
					else
							return T( xstd::zero_extend( uint64_t(value) >> offset, bit_size ) );
				}
			};
			return visit( reader, off );
		}
		FORCE_INLINE T load() const volatile 
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto reader = [ & ] <typename U> ( const std::atomic<U>& value, bitcnt_t offset )
			{
				// If bit size is constant one, use bit test.
				//
				if constexpr ( CSize == 1 )
				{
					return xstd::bit_test( value, offset );
				}
				// Otherwise read directly.
				//
				else
				{
					if constexpr ( std::is_signed_v<T> )
							return T( xstd::sign_extend( uint64_t( value.load() ) >> offset, bit_size ) );
					else
							return T( xstd::zero_extend( uint64_t( value.load() ) >> offset, bit_size ) );
				}
			};
			return visit( reader, off );
		}

		// Exchange primitive and the atomic counterpart.
		//
		FORCE_INLINE T exchange( T val )
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto writer = [ & ] <typename U> ( U& value, bitcnt_t offset )
			{
				// If bit size is constant one, use bit set/reset.
				//
				if constexpr ( CSize == 1 )
				{
					if ( val )
							return xstd::bit_set( value, offset );
					else
							return xstd::bit_reset( value, offset );
				}
				// Otherwise write directly.
				//
				else
				{
					U mask = U( xstd::fill_bits( bit_size, offset ) );
					U flag;
					if constexpr ( std::is_signed_v<T> )
							flag = U( ( int64_t( val ) << offset ) & mask );
					else
							flag = U( ( uint64_t( val ) << offset ) & mask );
					U prev = std::exchange( value, ( value & ~mask ) | flag );

					// Shift and return the previous value after extending.
					//
					if constexpr ( std::is_signed_v<T> )
							return T( xstd::sign_extend( prev >> offset, bit_size ) );
					else
							return T( xstd::zero_extend( prev >> offset, bit_size ) );
				}
			};
			return visit( writer, off );
		}
		FORCE_INLINE T exchange( T val ) volatile 
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto writer = [ & ] <typename U> ( std::atomic<U>& value, bitcnt_t offset )
			{
				// If bit size is constant one, use atomic bit set/reset.
				//
				if constexpr ( CSize == 1 )
				{
					if ( val )
							return xstd::bit_set( value, offset );
					else
							return xstd::bit_reset( value, offset );
				}
				// Otherwise use a compare exchange loop.
				//
				else
				{
					U mask = U( xstd::fill_bits( bit_size, offset ) );
					U flag;
					if constexpr ( std::is_signed_v<T> )
							flag = U( ( int64_t( val ) << offset ) & mask );
					else
							flag = U( ( uint64_t( val ) << offset ) & mask );
					U expected = value.load();
					while ( !value.compare_exchange_strong( expected, ( expected & ~mask ) | flag ) );

					// Shift and return the previous value after extending.
					//
					if constexpr ( std::is_signed_v<T> )
							return T( xstd::sign_extend( expected >> offset, bit_size ) );
					else
							return T( xstd::zero_extend( expected >> offset, bit_size ) );
				}
			};
			return visit( writer, off );
		}

		// Fetch AND/OR/XOR.
		//
		FORCE_INLINE T fetch_and( T val ) volatile
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto writer = [ & ] <typename U> ( std::atomic<U>&value, bitcnt_t offset )
			{
				// Apply the adjusted atomic bitwise operation.
				//
				U mask = U( xstd::fill_bits( bit_size, offset ) );
				U flag;
				if constexpr ( std::is_signed_v<T> )
					flag = U( ( int64_t( val ) << offset ) & mask ) | ~mask;
				else
					flag = U( ( uint64_t( val ) << offset ) & mask ) | ~mask;
				U result = value.fetch_and( flag );

				// Shift and return the previous value after extending.
				//
				if constexpr ( std::is_signed_v<T> )
					return T( xstd::sign_extend( result >> offset, bit_size ) );
				else
					return T( xstd::zero_extend( result >> offset, bit_size ) );
			};
			return visit( writer, off );
		}
		FORCE_INLINE T fetch_or( T val ) volatile
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto writer = [ & ] <typename U> ( std::atomic<U>&value, bitcnt_t offset )
			{
				// Apply the adjusted atomic bitwise operation.
				//
				U mask = U( xstd::fill_bits( bit_size, offset ) );
				U flag;
				if constexpr ( std::is_signed_v<T> )
					flag = U( ( int64_t( val ) << offset ) & mask );
				else
					flag = U( ( uint64_t( val ) << offset ) & mask );
				U result = value.fetch_or( flag );

				// Shift and return the previous value after extending.
				//
				if constexpr ( std::is_signed_v<T> )
					return T( xstd::sign_extend( result >> offset, bit_size ) );
				else
					return T( xstd::zero_extend( result >> offset, bit_size ) );
			};
			return visit( writer, off );
		}
		FORCE_INLINE T fetch_xor( T val ) volatile
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto writer = [ & ] <typename U> ( std::atomic<U>&value, bitcnt_t offset )
			{
				// Apply the adjusted atomic bitwise operation.
				//
				U mask = U( xstd::fill_bits( bit_size, offset ) );
				U flag;
				if constexpr ( std::is_signed_v<T> )
					flag = U( ( int64_t( val ) << offset ) & mask );
				else
					flag = U( ( uint64_t( val ) << offset ) & mask );
				U result = value.fetch_xor( flag );

				// Shift and return the previous value after extending.
				//
				if constexpr ( std::is_signed_v<T> )
					return T( xstd::sign_extend( result >> offset, bit_size ) );
				else
					return T( xstd::zero_extend( result >> offset, bit_size ) );
			};
			return visit( writer, off );
		}

		// Compare-exchange primitive and the atomic counterpart.
		//
		FORCE_INLINE bool compare_exchange( T& ex, T val )
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto writer = [ & ] <typename U> ( U& value, bitcnt_t offset )
			{
				U mask = U( xstd::fill_bits( bit_size, offset ) );
				U flag;
				if constexpr ( std::is_signed_v<T> )
					flag = U( ( int64_t( val ) << offset ) & mask );
				else
					flag = U( ( uint64_t( val ) << offset ) & mask );

				
				// Shift and compare.
				//
				T ex2;
				U expected = value;
				if constexpr ( std::is_signed_v<T> )
					ex2 = T( xstd::sign_extend( expected >> offset, bit_size ) );
				else
					ex2 = T( xstd::zero_extend( expected >> offset, bit_size ) );
				if ( ex2 != ex )
				{
					ex = ex2;
					return false;
				}
				else
				{
					value = ( expected & ~mask ) | flag;
					return true;
				}
			};
			return visit( writer, off );
		}
		FORCE_INLINE bool compare_exchange( T& ex, T val ) volatile
		{
			offset_entry off; O::get( off );

			// If we know the constant bit size, use that instead.
			//
			bitcnt_t bit_size;
			if constexpr ( CSize != 0 ) bit_size = CSize;
			else                        bit_size = off.bit_size;

			auto writer = [ & ] <typename U> ( std::atomic<U>&value, bitcnt_t offset )
			{
				U mask = U( xstd::fill_bits( bit_size, offset ) );
				U flag;
				if constexpr ( std::is_signed_v<T> )
					flag = U( ( int64_t( val ) << offset ) & mask );
				else
					flag = U( ( uint64_t( val ) << offset ) & mask );
				
				U expected = value.load();
				while ( true )
				{
					// Shift and compare.
					//
					T ex2;
					if constexpr ( std::is_signed_v<T> )
							ex2 = T( xstd::sign_extend( expected >> offset, bit_size ) );
					else
							ex2 = T( xstd::zero_extend( expected >> offset, bit_size ) );
					if ( ex2 != ex )
					{
							ex = ex2;
							return false;
					}
				
					if ( value.compare_exchange_strong( expected, ( expected & ~mask ) | flag ) )
							return true;
				}
			};
			return visit( writer, off );
		}

		// Implement store via exchange.
		//
		FORCE_INLINE void store( T val ) { exchange( val ); }
		FORCE_INLINE void store( T val ) volatile { exchange( val ); }

		// Operator decays.
		//
		FORCE_INLINE operator T() const { return load(); }
		FORCE_INLINE operator T() const volatile { return load(); }
		FORCE_INLINE bitfield& operator=( T value ) { store( value ); return *this; }
		FORCE_INLINE volatile bitfield& operator=( T value ) volatile { store( value ); return *this; }
	};
	
	template<typename... Tx>
	struct variant
	{
		static constexpr bool __magic_variant_tag = true;
		using type_list = std::tuple<Tx...>;

		variant();
		variant( const variant& ) = delete;
		variant& operator=( const variant& ) = delete;

		template<typename T>
		variant& operator=( T&& value ) volatile
		{
			bool done = false;
			xstd::make_constant_series<std::tuple_size_v<type_list>>( [ & ] <size_t N> ( xstd::const_tag<N> )
			{
				if constexpr ( xstd::Convertible<std::decay_t<T>, std::tuple_element_t<N, type_list>> )
				{
					if ( !done )
					{
							*( std::tuple_element_t<N, type_list>* ) this = std::forward<T>( value );
							done = true;
					}
				}
			} );
			return ( variant& ) *this;
		}
	};

	template<typename T>
	concept MagicDecl = requires { T::__magic_properties_tag; };
	template<typename T>
	concept MagicLinked = requires { T::__magic_link_tag; };
	template<typename T>
	concept NormalLinkage = !MagicLinked<T>;
	
	template<typename T> concept FixedMagicDecl = MagicDecl<T> && T::__has_fixed_size;
	template<typename T> concept DynamicMagicDecl = MagicDecl<T> && !T::__has_fixed_size;

	// Magic iterator type.
	//
	template<MagicDecl V>
	struct magic_iterator
	{
		using iterator_category = std::random_access_iterator_tag;
		using difference_type =   ptrdiff_t;
		using value_type =        V;
		using reference =         V&;
		using pointer =           V*;
	
		// Current entry and the type size.
		//
		V*     position;
		size_t type_size;
	
		// Construct from pointer.
		//
		template<auto C = 0>
		FORCE_INLINE magic_iterator( V* ptr ) : position( ptr )
		{
			offset_entry off = V::template __magic_properties<C>().get_bit_offset();
			type_size = off.bit_offset;
			if ( !off.exists )
				position = nullptr;
		}
	
		// Iteration.
		//
		FORCE_INLINE magic_iterator& operator+=( ptrdiff_t i ) { position = ( V* ) ( uint64_t( position ) + type_size * i ); return *this; }
		FORCE_INLINE magic_iterator& operator-=( ptrdiff_t i ) { position = ( V* ) ( uint64_t( position ) - type_size * i ); return *this; }
		FORCE_INLINE magic_iterator  operator+( ptrdiff_t i )  { auto s = *this; s += i; return s; }
		FORCE_INLINE magic_iterator  operator-( ptrdiff_t i )  { auto s = *this; s -= i; return s; }
		FORCE_INLINE magic_iterator& operator++() { position = ( V* ) ( uint64_t( position ) + type_size ); return *this; }
		FORCE_INLINE magic_iterator& operator--() { position = ( V* ) ( uint64_t( position ) - type_size ); return *this; }
		FORCE_INLINE magic_iterator  operator++( int ) { auto s = *this; operator++(); return s; }
		FORCE_INLINE magic_iterator  operator--( int ) { auto s = *this; operator--(); return s; }
	
		// Comparison via decay to pointer.
		//
		FORCE_INLINE operator pointer() const { return position; }
	
		// Dereferencing.
		//
		FORCE_INLINE reference operator[]( size_t n ) const { return *operator+( n ); }
		FORCE_INLINE reference operator*() const  { return *position; }
		FORCE_INLINE pointer   operator->() const { return position; }
	};

	// Array types.
	//
	template<MagicDecl T, size_t N>
	struct magic_array
	{
		using value_type             = T;
		using size_type              = size_t;
		using difference_type        = ptrdiff_t;
		using pointer                = T*;
		using const_pointer          = const T*;
		using reference              = T&;
		using const_reference        = const T&;
		using iterator               = magic_iterator<T>;
		using const_iterator         = magic_iterator<const T>;
		using reverse_iterator       = std::reverse_iterator<iterator>;
		using const_reverse_iterator = std::reverse_iterator<const_iterator>;

		magic_array() = delete;
		magic_array( const magic_array& ) = delete;
		magic_array& operator=( const magic_array& ) = delete;

		FORCE_INLINE iterator begin() { return ( T* ) this; }
		FORCE_INLINE const_iterator begin() const { return ( const T* ) this; }
		FORCE_INLINE iterator end() { return begin() + N; }
		FORCE_INLINE const_iterator end() const { return begin() + N; }
		FORCE_INLINE reverse_iterator rbegin() { reverse_iterator( end() ); }
		FORCE_INLINE const_reverse_iterator rbegin() const { const_reverse_iterator( end() ); }
		FORCE_INLINE reverse_iterator rend() { reverse_iterator( begin() ); }
		FORCE_INLINE const_reverse_iterator rend() const { const_reverse_iterator( begin() ); }
		FORCE_INLINE constexpr size_t size() const { return N; }
		FORCE_INLINE constexpr bool empty() const { return !N; }
		FORCE_INLINE reference at( size_type i ) { return *( begin() + i ); }
		FORCE_INLINE const_reference at( size_type i ) const { return *( begin() + i ); }
		FORCE_INLINE reference operator[]( size_type i ) { return at( i ); }
		FORCE_INLINE const_reference operator[]( size_type i ) const { return at( i ); }
		FORCE_INLINE reference front() { return *begin(); }
		FORCE_INLINE const_reference front() const { return *begin(); }
		FORCE_INLINE reference back() { return at( N - 1 ); }
		FORCE_INLINE const_reference back() const { return at( N - 1 ); }

		// Doesn't really exist.
		//
		FORCE_INLINE iterator data() { return begin(); }
		FORCE_INLINE const_iterator data() const { return begin(); }
	};

	template<typename T, size_t N>  struct array_type              { using type = std::array<T, N>; };
	template<typename T>            struct array_type<T, 0>        { using type = std::array<T, 1>; };
	template<DynamicMagicDecl T, size_t N> struct array_type<T, N> { using type = magic_array<T, N>; };
	template<DynamicMagicDecl T>           struct array_type<T, 0> { using type = magic_array<T, 1>; };
	template<typename T, size_t N = 0>  using array = typename array_type<T, N>::type;

	// Declare basic property helpers.
	//
	template<MagicDecl        T> FORCE_INLINE static bool exists() { return T::template __magic_properties<0>().get_exists(); }
	template<FixedMagicDecl   T> FORCE_INLINE static size_t size_of() { return sizeof( T ); }
	template<DynamicMagicDecl T> FORCE_INLINE static size_t size_of() { return T::template __magic_properties<0>().get_bit_offset(); }

	// Declare symbol helpers.
	//
	template<MagicLinked   T> FORCE_INLINE static bool exists( const T& ) { return T::get_exists(); }
	template<MagicLinked   T> FORCE_INLINE static uint32_t rva_of( const T& ) { return T::get_rva(); }
	template<MagicLinked   T> FORCE_INLINE static public_entry entry_of( const T& ) { public_entry result; T::template entry_v<0>().get( result ); return result; }
	template<MagicLinked   T> FORCE_INLINE static auto resolve_for( any_ptr img, const T& ref ) { return ( typename T::pointer_type ) ( img + rva_of( ref ) ); }
	template<MagicLinked   T> FORCE_INLINE static int32_t syscall_index_of( const T& ) { return T::get_syscall_index(); }

	template<NormalLinkage T> FORCE_INLINE static bool exists( const T& ref );                      // Left undefined, intellisense does not know MagicLinked at parsing time.
	template<NormalLinkage T> FORCE_INLINE static uint32_t rva_of( const T& ref );                  //
	template<NormalLinkage T> FORCE_INLINE static public_entry entry_of( const T& ref );            //
	template<NormalLinkage T> FORCE_INLINE static T resolve_for( any_ptr img, const T& ref ); //
	template<NormalLinkage T> FORCE_INLINE static int32_t syscall_index_of( const T& ref );         //

	template<typename T>      FORCE_INLINE static any_ptr image_base_of( const T& ref ) { return any_ptr( ( void* ) &ref ) - rva_of( ref ); }

	// Declare allocators.
	//
	template<typename T> FORCE_INLINE static T& make_local( void* p = _alloca( size_of<T>() ) ) { return *( T* ) memset( p, 0, sizeof( size_of<T>() ) ); }
	template<typename T> FORCE_INLINE static std::unique_ptr<T> make_unique() { return std::unique_ptr<T>{ ( T* )new uint8_t[ size_of<T>() ]{ 0 } }; }
	template<typename T> FORCE_INLINE static std::shared_ptr<T> make_shared() { return std::shared_ptr<T>{ ( T* )new uint8_t[ size_of<T>() ]{ 0 } }; }

	// Bit offset helper.
	//
	template<typename T> 
	FORCE_INLINE static size_t bit_offset( const T& ref )
	{
		if constexpr ( std::is_integral_v<T> )
			return 0;
		else
			return T::field_type::get().bit_offset & 7;
	}
};

namespace std
{
	// Implement std::get<> for sdk::variant.
	//
	template<typename... Tx> struct tuple_size<sdk::variant<Tx...>> { static constexpr auto value = sizeof...( Tx ); };
	template<size_t I, typename... Tx> struct tuple_element<I, sdk::variant<Tx...>> { using type = tuple_element_t<I, std::tuple<Tx...>>; };
	template<size_t I, typename... Tx> FORCE_INLINE tuple_element_t<I, sdk::variant<Tx...>>& get( sdk::variant<Tx...>& c ) { return ( tuple_element_t<I, std::tuple<Tx...>>& )c; }
	template<size_t I, typename... Tx> FORCE_INLINE const tuple_element_t<I, sdk::variant<Tx...>>& get( const sdk::variant<Tx...>& c ) { return ( const tuple_element_t<I, std::tuple<Tx...>>& )c; }
	template<size_t I, typename... Tx> FORCE_INLINE volatile tuple_element_t<I, sdk::variant<Tx...>>& get( volatile sdk::variant<Tx...>& c ) { return ( volatile tuple_element_t<I, std::tuple<Tx...>>& )c; }
	template<size_t I, typename... Tx> FORCE_INLINE const volatile tuple_element_t<I, sdk::variant<Tx...>>& get( const volatile sdk::variant<Tx...>& c ) { return ( const volatile tuple_element_t<I, std::tuple<Tx...>>& )c; }

	// Implement std::atomic for bitfields.
	//
	template<typename O, typename T, bitcnt_t CSize, typename... UnderlyingTypes>
	struct atomic<sdk::bitfield<O, T, CSize, UnderlyingTypes...>> 
	{
		volatile sdk::bitfield<O, T, CSize, UnderlyingTypes...> underlying;

		FORCE_INLINE T load() const { return underlying.load(); }
		FORCE_INLINE void store( T value ) { underlying.store( value ); }
		FORCE_INLINE T exchange( T value ) { return underlying.exchange( value ); }
		FORCE_INLINE T fetch_and( T value ) { return underlying.fetch_and( value ); }
		FORCE_INLINE T fetch_or( T value ) { return underlying.fetch_or( value ); }
		FORCE_INLINE T fetch_xor( T value ) { return underlying.fetch_xor( value ); }
		FORCE_INLINE T compare_exchange_strong( T& expected, T desired ) { return underlying.compare_exchange( expected, desired ); }
		FORCE_INLINE T compare_exchange_weak( T& expected, T desired ) { return underlying.compare_exchange( expected, desired ); }
		FORCE_INLINE operator T() const { return underlying.load(); }
		FORCE_INLINE auto& operator=( T value ) { underlying.store( value ); return *this; }
		FORCE_INLINE T operator&=( T value ) { return underlying.fetch_and( value ); }
		FORCE_INLINE T operator|=( T value ) { return underlying.fetch_or( value ); }
		FORCE_INLINE T operator^=( T value ) { return underlying.fetch_xor( value ); }
	};
	// Implement std::exchange for bitfields.
	//
	template<typename X, typename O, typename T, bitcnt_t CSize, typename... UnderlyingTypes>
	FORCE_INLINE T exchange( sdk::bitfield<O, T, CSize, UnderlyingTypes...>& ref, X&& value )
	{
		return ref.exchange( value );
	}
	template<typename X, typename O, typename T, bitcnt_t CSize, typename... UnderlyingTypes>
	FORCE_INLINE T exchange( volatile sdk::bitfield<O, T, CSize, UnderlyingTypes...>& ref, X&& value )
	{
		return ref.exchange( value );
	}
	template<typename X, typename O, typename T, bitcnt_t CSize, typename... UnderlyingTypes>
	FORCE_INLINE T exchange( std::atomic<sdk::bitfield<O, T, CSize, UnderlyingTypes...>>& ref, X&& value )
	{
		return ref.exchange( value );
	}
	template<typename X, typename O, typename T, bitcnt_t CSize, typename... UnderlyingTypes>
	FORCE_INLINE void swap( sdk::bitfield<O, T, CSize, UnderlyingTypes...>& ref, X& value )
	{
		value = ref.exchange( value );
	}
	template<typename X, typename O, typename T, bitcnt_t CSize, typename... UnderlyingTypes>
	FORCE_INLINE void swap( volatile sdk::bitfield<O, T, CSize, UnderlyingTypes...>& ref, X& value )
	{
		value = ref.exchange( value );
	}
	template<typename X, typename O, typename T, bitcnt_t CSize, typename... UnderlyingTypes>
	FORCE_INLINE void swap( std::atomic<sdk::bitfield<O, T, CSize, UnderlyingTypes...>>& ref, X& value )
	{
		value = ref.exchange( value );
	}
};