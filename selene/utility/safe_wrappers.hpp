#pragma once
#include <tuple>
#include <optional>
#include <xstd/type_helpers.hpp>
#include <apollo/attributes.hpp>

namespace safe
{
	// Fault safe memory stubs.
	//
	[[gnu::naked, no_split, no_stub]] inline uint64_t _preadq()
	{
		__asm
		{
			mov rax, [rax]
			clc
			ret
		}
	}
	[[gnu::naked, no_split, no_stub]] inline uint32_t _preadl()
	{
		__asm
		{
			mov eax, [rax]
			clc
			ret
		}
	}
	[[gnu::naked, no_split, no_stub]] inline uint16_t _preadw()
	{
		__asm
		{
			mov ax,  [rax]
			clc
			ret
		}
	}
	[[gnu::naked, no_split, no_stub]] inline uint8_t _preadb()
	{
		__asm
		{
			mov al,  [rax]
			clc
			ret
		}
	}
	[[gnu::naked, no_split, no_stub]] inline size_t _pmemcpy()
	{
		__asm
		{
			rep movsb
			ret
		}
	}
	[[gnu::naked, no_split, no_stub]] inline size_t _prtouch()
	{
		__asm
		{
			x:
			mov  al,                [rcx]
			or   rcx,               0xFFF
			inc  rcx
			cmp  rcx,               rdx
			jnae x
			clc
			ret
		}
	}
	[[gnu::naked, no_split, no_stub]] inline size_t _pwtouch()
	{
		__asm
		{
			x:
			lock or byte ptr [rcx], 0
			or      rcx,            0xFFF
			inc     rcx
			cmp     rcx,            rdx
			jnae x
			clc
			ret
		}
	}
	[[gnu::naked, no_split, no_stub]] inline size_t _pfail()
	{
		__asm
		{
			stc
			ret
		}
	}

	// List of functors all expecting a fault (#PF/#GP).
	//
	inline constexpr const void* stub_list[] = { &_preadq, &_preadl, &_preadw, &_preadb, &_pmemcpy, &_prtouch, &_pwtouch };
	FORCE_INLINE static bool is_stub( any_ptr p ) { return std::find( std::begin( stub_list ), std::end( stub_list ), p ) != std::end( stub_list ); }
	template<typename Tf>
	FORCE_INLINE static void fail_stub( Tf* tf ) {
		tf->rip = ( any_ptr ) &_pfail;
	}

	// Validates read/write permissions on [ptr], returns false on failure.
	//
	FORCE_INLINE inline bool read_probe( any_ptr ptr, size_t length ) {
		uint8_t fail;
		asm( "call %c3" : "=@ccc" ( fail ), "+c" ( ptr.address ) : "d" ( ptr + length ), "i" ( &_prtouch ) : "flags" );
		return !fail;
	}
	FORCE_INLINE inline bool write_probe( any_ptr ptr, size_t length ) {
		uint8_t fail;
		asm( "call %c3" : "=@ccc" ( fail ), "+c" ( ptr.address ) : "d" ( ptr + length ), "i" ( &_pwtouch ) : "flags" );
		return !fail;
	}

	// Copies [length] bytes from [src] to [dst], returns the number of bytes left.
	//
	FORCE_INLINE inline size_t copy( any_ptr dst, any_ptr src, size_t length )  
	{ 
		asm( "cld; call %c3" : "+S" ( src.address ), "+D" ( dst.address ), "+c" ( length ) : "i" ( &_pmemcpy ) : "flags", "memory" );
		return length;
	}

	// Reads <T> from [src], returns the value if we could fully read it.
	//
	template<typename T>
	FORCE_INLINE inline std::optional<T> read( any_ptr src )
	{
		if constexpr ( sizeof( T ) == 8 || sizeof( T ) == 4 ||
							sizeof( T ) == 2 || sizeof( T ) == 1 )
		{
			using I = xstd::convert_uint_t<T>;
			constexpr auto func =
				sizeof( T ) == 8 ? ( void* ) &_preadq :
				sizeof( T ) == 4 ? ( void* ) &_preadl :
				sizeof( T ) == 2 ? ( void* ) &_preadw : ( void* ) &_preadb;

			I value;
			uint8_t fail;
			asm( "call %c2" : "=a"( value ), "=@ccc" ( fail ) : "i" ( func ), "a" ( src ) : "flags" );
			if ( fail ) [[unlikely]]
				return std::nullopt;
			return xstd::bit_cast< T >( value );
		}
		else
		{
			T value;
			if ( safe::copy( &value, src, sizeof( T ) ) ) [[unlikely]]
				return std::nullopt;
			return value;
		}
	}
	template<typename T>
	FORCE_INLINE inline std::optional<std::remove_cv_t<T>> read( const T* src )
	{
		return read<std::remove_cv_t<T>>( any_ptr( src ) );
	}

	// Writes <T> [value] to [dst], returns true if we could write it.
	//
	template<typename T>
	FORCE_INLINE inline bool write( any_ptr dst, const T& value )
	{
		return !safe::copy( dst, &value, sizeof( T ) );
	}
	template<typename T> 
	FORCE_INLINE inline bool write( T* dst, const T& value )
	{
		return write<T>( any_ptr( dst ), value );
	}
};