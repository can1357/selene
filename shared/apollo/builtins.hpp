#pragma once
#include <stdint.h>

#define __xcxx__builtin_halt_consteval	1
#define __xcxx__builtin_pure_load		1
#define __xcxx__builtin_fetch_dynamic	1
#define __xcxx__builtin_dynamic_users	1
#define __xcxx__builtin_store_dynamic	1
#define __xcxx__builtin_pure_read	   1

#define __is_defined_p_1 0,
#define __take_second_arg(__ignored, val, ...) val
#define ____is_defined(a1p)     __take_second_arg(a1p 1, 0)
#define ___is_defined(val)      ____is_defined(__is_defined_p_##val)
#define __is_defined(x)         ___is_defined(x)

#ifdef __INTELLISENSE__
	#define __has_xcxx_builtin(...) 1
#else
	#define __has_xcxx_builtin(name) __is_defined(__xcxx##name)
	#if !__has_xcxx_builtin(__builtin_halt_consteval)
		#error "Faulty pre-processor parsing."
	#endif
#endif

extern "C" 
{
	// Implemented by the linker.
	//
	void                            __builtin_halt_consteval( void* clobber );
	[[gnu::const]] void*            __builtin_pure_load( void* dst, const volatile void* src, size_t size, size_t alignment );
	[[gnu::const]] uint8_t          __builtin_symbol_read1( const volatile void* src, size_t offset, uint64_t key );
	[[gnu::const]] uint16_t         __builtin_symbol_read2( const volatile void* src, size_t offset, uint64_t key );
	[[gnu::const]] uint32_t         __builtin_symbol_read4( const volatile void* src, size_t offset, uint64_t key );
	[[gnu::const]] uint64_t         __builtin_symbol_read8( const volatile void* src, size_t offset, uint64_t key );

	[[gnu::const]] void*            __builtin_fetch_dynamic( const char* reloc_name );
	[[gnu::const]] uint8_t** const* __builtin_dynamic_users( const char* reloc_name );
};

// Wrappers around the implementations.
//
[[gnu::always_inline]] inline static void __builtin_store_dynamic( const char* reloc_name, const volatile void* value )
{
	for ( auto it = __builtin_dynamic_users( reloc_name ); it && *it; ++it )
		**it = ( uint8_t* ) value;
}

template<typename T>
[[gnu::always_inline, gnu::const]] inline static constexpr T __builtin_pure_read( const T& ref )
{
	if ( !__builtin_is_constant_evaluated() )
	{
		T tmp;
		return *( T* ) __builtin_pure_load( &tmp, &ref, sizeof( T ), alignof( T ) );
	}
	else
	{
		return ref;
	}
}

extern "C"
{
	// Externally defined import stubs if used.
	//
	uint64_t __cdecl __crt_resolve_import( uint32_t mod, uint32_t imp );
	uint64_t __cdecl __crt_resolve_syscall_idx( uint32_t name );
	uint64_t __cdecl __crt_invoke_syscall( uint64_t idx, uint64_t arg_cnt, const uint64_t* );
	uint64_t __cdecl __crt_load_module( const wchar_t* name );

	// Pointer and string encryption logic implemented by linker appendix.
	//
	[[gnu::nodebug]] void __cdecl __crt_assert( bool b, uint64_t str );
	[[gnu::nodebug]] uint64_t __cdecl __crt_decrypt_single( uint64_t value, uint64_t key );
	[[gnu::nodebug]] uint64_t __cdecl __crt_encrypt_single( uint64_t value, uint64_t key );
	[[gnu::nodebug]] uint64_t __cdecl __crt_decrypt( const uint64_t* _ptr, size_t n, uint64_t key );
	[[gnu::nodebug]] uint64_t __cdecl __crt_encrypt( const uint64_t* _ptr, size_t n, uint64_t key );
};