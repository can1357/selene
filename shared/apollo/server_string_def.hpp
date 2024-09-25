#pragma once
#include <stdint.h>
#include <cstring>
#define SERVER_STRING_MAGIC   "dGhpcyBpcyBhIG=="
#define SERVER_STRING_MAGIC_W L"dGhpcyBpcyBhIG=="
#define SERVER_STRING_PREFIX  'd','G','h','p','c','y','B','p','c','y','B','h','I','G','=','='

template<typename T, T... Chars>
inline constexpr T _sstr[] = { SERVER_STRING_PREFIX, Chars..., T( 0 ) };

#if defined(__INTELLISENSE__) || !defined(__clang__)
		inline constexpr const char* operator ""_es( const char* c, size_t ) { return c; }
		inline constexpr const wchar_t* operator ""_es( const wchar_t* c, size_t ) { return c; }
		inline constexpr const char* operator ""_ss( const char* c, size_t ) { return c; }
		inline constexpr const wchar_t* operator ""_ss( const wchar_t* c, size_t ) { return c; }
#elif defined(__clang__)
		#pragma GCC diagnostic ignored "-Wgnu-string-literal-operator-template"
		template<typename T, T... Chars>
		[[gnu::always_inline]] const T* operator ""_ss() {
			auto* p = ( T* ) _sstr<T, Chars...>;
			asm volatile( "" : "+r" ( p ) );
			return p;
		}
   #if (!PROD_BUILD)
		inline constexpr const char* operator ""_es( const char* c, size_t ) { return c; }
		inline constexpr const wchar_t* operator ""_es( const wchar_t* c, size_t ) { return c; }
   #else
		template<typename T, T... Chars>
		[[gnu::always_inline]] const T* operator ""_es() {
			auto* p = ( T* ) _sstr<T, Chars...>;
			asm volatile( "" : "+r" ( p ) );
			return p; 
		}
   #endif
#endif