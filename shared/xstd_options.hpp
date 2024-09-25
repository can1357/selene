#pragma once
#define _HAS_CXX23 1
#define _CRT_SECURE_NO_WARNINGS
#if defined(__clang__) || !defined(_MSC_VER)
	#define _CRT_USE_BUILTIN_OFFSETOF
#endif

#if __INTELLISENSE__
	#include <type_traits>
	template<typename... Tx>
	struct _Is_invocable_r__ { static constexpr bool value = true; };
	#define _Is_invocable_r _Is_invocable_r__
	#define __building_module(x) 0
#endif

#ifndef __private_binary__
	// Make sure the CRT is linked as we want it to be.
	//
	#define _ACRTIMP
	#define _VCRTIMP
	#define _DCRTIMP
	#define _STD_ATOMIC_ALWAYS_USE_CMPXCHG16B 1
	#define _PPLTASK_ASYNC_LOGGING 0
	#define _CRT_STDIO_INLINE __forceinline
	#define NO_RETURN
	#define _HAS_EXCEPTIONS 0
	#define _HAS_STATIC_RTTI 0

	// Expose builtins.
	//
	#include "apollo/builtins.hpp"
	
	// Not the same as RELEASE_BUILD, only set to binaries facing the final user.
	//
#ifndef PROD_BUILD
	#define PROD_BUILD 0
#endif
	inline static constexpr bool is_production_build() { return PROD_BUILD; }

	// Set the XSTD options.
	//
	#define XSTD_NO_EXCEPTIONS 1
	#define XSTD_CON_THREAD_LOCAL 0
	#define XSTD_CON_ENFORCE_MODE_WINDOWS 0
	#define XSTD_CON_NO_COLORS   1
	#define XSTD_CON_NO_WARNINGS PROD_BUILD
	#define XSTD_CON_NO_LOGS     PROD_BUILD
	#define XSTD_CON_ERROR_REDIRECT _crt_exit_e
	#define XSTD_CON_ERROR_NOMSG 0
#ifndef XSTD_CHORE_SCHEDULER
	#if _KERNEL_MODE && !defined(_COMPONENT_HOST_)
		#define XSTD_CHORE_SCHEDULER selene_add_chore
	#endif
#endif
	
	// Hook time::now().
	//
	extern "C" {
		unsigned long long _crt_cyclecounter_to_timestamp( unsigned long long t );
	}
	#define XSTD_DEFAULT_CLOCK_READ() _crt_cyclecounter_to_timestamp( __builtin_readcyclecounter() )

	// Expose the event primitive.
	//
#if _KERNEL_MODE
	namespace nt { struct dispatcher_header_t; };
	namespace crt { using event_handle_t = nt::dispatcher_header_t*; };
#else
	namespace crt { using event_handle_t = void*; };
#endif

	namespace crt
	{
		struct alignas( 8 ) event_primitive
		{
			using handle_type = event_handle_t;

#if _KERNEL_MODE
			char native[ 32 ];
#else
			char native[ 8 ];
#endif

			// Interface.
			//
			event_primitive();
			~event_primitive();
			void wait() const;
			bool wait_for( long long milliseconds ) const;
			void notify();
			void reset();
			bool peek() const;

			static event_primitive& from_handle( event_handle_t& evt ) {
#if _KERNEL_MODE
				return *(event_primitive*) evt;
#else
				return *(event_primitive*) &evt;
#endif
			}
			event_handle_t handle() const
			{
#if _KERNEL_MODE
				return /*KEVENT*/ ( nt::dispatcher_header_t* ) &native[ 0 ];
#else
				return /*HANDLE*/ *( void** ) &native[ 0 ];
#endif
			}
		};
	};
	#define XSTD_OS_EVENT_PRIMITIVE crt::event_primitive

	#include "apollo/server_string_def.hpp"

	// XSTD errors.
	//
	#define XSTD_ESTR(c) c##_es
	#define XSTD_ASSERT_MESSAGE( cc, file, line ) XSTD_ESTR( "Assertion failure [" cc "] at " file ":" line )

	// Xedpp errors.
	//
	#define XPP_THROW(x) xstd::error( XSTD_ESTR(x) )

	// Allocator override.
	//
#define __XSTD_NO_BIG_ALLOC_SENTINEL
#ifndef __INTELLISENSE__
	#include <xmemory>
	namespace std
	{
		template <typename T> requires( !__is_same(T, void) )
		class allocator<T>
		{
			public:
			using _From_primary =                          allocator;
			using value_type =                             T;
			using size_type =                              size_t;
			using difference_type =                        ptrdiff_t;
			using propagate_on_container_move_assignment = true_type;

			constexpr allocator() noexcept {}
			constexpr allocator( const allocator& ) noexcept = default;
			template <typename O>
			constexpr allocator( const allocator<O>& ) noexcept {}
			constexpr ~allocator() = default;
			constexpr allocator& operator=( const allocator& ) = default;

			[[gnu::always_inline]] inline constexpr void deallocate( void* p, size_t )
			{
				if constexpr ( alignof( T ) > 0x10 )
					__builtin_operator_delete( p, align_val_t{ alignof( T ) } );
				else
					__builtin_operator_delete( p );
			}
			[[gnu::malloc, gnu::always_inline]] inline constexpr T* allocate( size_t n )
			{
				if ( __builtin_constant_p( ( n >> 48 ) != 0 ) && ( n >> 48 ) != 0 )
					__builtin_unreachable();

				n *= sizeof( T );
				if constexpr ( alignof( T ) > 0x10 )
					return ( T* ) __builtin_operator_new( n, align_val_t{ alignof( T ) } );
				else
					return ( T* ) __builtin_operator_new( n );
			}
		};
	};
#endif
#endif