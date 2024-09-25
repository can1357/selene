#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/bitwise.hpp>
#include <xstd/result.hpp>
#include <xstd/time.hpp>
#include <xstd/formatting.hpp>
#include <xstd/numeric_range.hpp>
#include <xstd/async.hpp>
#include <xstd/text.hpp>
#include <xstd/hashable.hpp>
#include <xstd/coro.hpp>
#include <string>
#include <vector>
#include <optional>
#include <memory>
#include <chrono>
#include <span>
#include <string_view>
#include <nt/image.hpp>
#include <ia32.hpp>
#include <ia32/apic.hpp>
#include <ia32/memory.hpp>
#include <sdk/ki/api.hpp>
#include <sdk/ex/api.hpp>
#include <sdk/ke/api.hpp>
#include <sdk/os/api.hpp>
#include <sdk/nt/eprocess_t.hpp>
#include <sdk/nt/ethread_t.hpp>
#include <sdk/nt/teb_t.hpp>
#include <sdk/nt/peb_t.hpp>
#include <sdk/nt/kpcr_t.hpp>
#include <sdk/nt/kprcb_t.hpp>
#include <sdk/nt/mode_t.hpp>
#include <sdk/nt/kuser_shared_data_t.hpp>
#include <sdk/nt/kspin_lock_queue_t.hpp>
#include <sdk/nt/mmpfn_t.hpp>
#include "enums.hpp"

// Virtual address limits.
//
#if XSTD_IA32_LA57
static constexpr any_ptr um_va_start = 0x0000000000000000ull;
static constexpr any_ptr um_va_end =   0x00FFFFFFFFFEFFFFull;
static constexpr any_ptr km_va_start = 0xFF00000000000000ull;
static constexpr any_ptr km_va_end =   0xFFFFFFFFFFFFFFFFull;
#else
static constexpr any_ptr um_va_start = 0x0000000000000000ull;
static constexpr any_ptr um_va_end =   0x00007FFFFFFEFFFFull;
static constexpr any_ptr km_va_start = 0xFFFF800000000000ull;
static constexpr any_ptr km_va_end =   0xFFFFFFFFFFFFFFFFull;
#endif
FORCE_INLINE inline constexpr bool is_user_va( any_ptr ptr, bool assume_cannonical = false ) {
	if ( xstd::const_condition( assume_cannonical ) )
		return int64_t( ptr.address ) >= 0;
	else
		return ptr <= um_va_end;
}
FORCE_INLINE inline constexpr bool is_kernel_va( any_ptr ptr, bool assume_cannonical = false ) {
	if ( xstd::const_condition( assume_cannonical ) )
		return int64_t( ptr.address ) < 0;
	else
		return ptr >= km_va_start;
}

// Kernel globals.
//
namespace ke 
{
	// Kernel-mode GS structures.
	//
	FORCE_INLINE CONST_FN static uint32_t number_of_processors() { return *( const uint32_t* ) &ke::number_processors; }
	FORCE_INLINE static nt::kpcr_t* get_kpcr() { return ( nt::kpcr_t* ) ia32::read_gsbase(); }
	FORCE_INLINE static nt::kprcb_t* get_kprcb() { return &get_kpcr()->prcb; }
	FORCE_INLINE static nt::kpcr_t* get_kpcr( size_t n )
	{
		if ( n >= number_of_processors() )
			return nullptr;
		else
			return xstd::ptr_at( ( ( nt::kprcb_t** ) &ki::processor_block )[ n ], -SDK_OFFSET( nt::kpcr_t, prcb ) );
	}
	FORCE_INLINE static nt::kprcb_t* get_kprcb( size_t n )
	{
		if ( n >= number_of_processors() )
			return nullptr;
		else
			return ( ( nt::kprcb_t** ) &ki::processor_block )[ n ];
	}
	FORCE_INLINE static std::span<nt::kprcb_t*> get_kprcbs()
	{
		return { ( nt::kprcb_t** ) &ki::processor_block, number_of_processors() };
	}
	FORCE_INLINE static nt::kspin_lock_queue_t* get_lock_queue( size_t i = 0 )
	{
		return i + ( nt::kspin_lock_queue_t* ) __readgsqword( SDK_OFFSET( nt::kpcr_t, lock_array ) );
	}
	FORCE_INLINE static nt::ethread_t* get_ethread()
	{ 
		return ( nt::ethread_t* ) __readgsqword(
#if _SELENE_
			0x188
#else
			SDK_OFFSET( nt::kpcr_t, prcb ) + SDK_OFFSET( nt::kprcb_t, current_thread )
#endif
		); 
	}
	FORCE_INLINE static nt::eprocess_t* get_eprocess( nt::ethread_t* thr = ke::get_ethread() ) { return ( nt::eprocess_t* ) thr->tcb.apc_state.process; }
	FORCE_INLINE static nt::eprocess_t* get_thread_eprocess( nt::ethread_t* thr = ke::get_ethread() ) { return ( nt::eprocess_t* ) thr->tcb.process; }

	// User shared data.
	//
	static constexpr any_ptr km_user_shared_data_va = 0xFFFFF78000000000ull;
	static constexpr any_ptr um_user_shared_data_va = 0x000000007FFE0000ull;
	FORCE_INLINE static nt::kuser_shared_data_t* get_user_shared_data() { return is_kernel_mode() ? km_user_shared_data_va : um_user_shared_data_va; }
};
namespace nt
{
	using ticks = std::chrono::duration<long long, std::ratio_multiply<std::ratio<100, 1>, std::nano>>;
	inline constexpr uint64_t filetime_to_epoch_ms( uint64_t t ) { return ( t - 116444736000000000 ) / 10000; }

	// User-mode GS structures.
	//
	FORCE_INLINE static nt::teb_t* get_teb()
	{
		if constexpr ( is_kernel_mode() )
			return ( nt::teb_t* ) ( ( nt::kthread_t* ) ke::get_ethread() )->teb;
		else
			return ( nt::teb_t* ) ia32::read_gsbase();
	}
	FORCE_INLINE static nt::peb_t* get_peb()
	{
		if constexpr ( is_kernel_mode() )
			return ke::get_eprocess()->peb;
		else
			return get_teb()->process_environment_block;
	}

	// Processor identification.
	//
	template<bool ViaPcr = false>
	FORCE_INLINE inline static uint32_t read_pcid()
	{
		if constexpr ( ViaPcr && is_kernel_mode() )
			return __readgsdword( 0x180 + 0x24 ); // KPCR.Prcb.Number
		else
			return ia32::load_seg_limit<uint32_t>( { .flags = 0x53 } ) >> 14;
	}
};
namespace ob
{
	// Special handles.
	//
	FORCE_INLINE CONST_FN inline void* current_process() { return ( void* ) -1ll; }
	FORCE_INLINE CONST_FN inline void* current_thread() { return ( void* ) -2ll; }
	FORCE_INLINE CONST_FN inline void* current_session() { return ( void* ) -3ll; }
	FORCE_INLINE CONST_FN inline void* current_process_token() { return ( void* ) -4ll; }
	FORCE_INLINE CONST_FN inline void* current_thread_token() { return ( void* ) -5ll; }
	FORCE_INLINE CONST_FN inline void* current_thread_effective_token() { return ( void* ) -6ll; }
	FORCE_INLINE CONST_FN inline constexpr bool is_special_handle( any_ptr p ) { return int64_t( p.address ) < 0 && p >= current_thread_effective_token(); }

	// Kernel handles.
	//
	inline constexpr uint64_t khandle_flag = 0xFFFFFFFF80000000;
	FORCE_INLINE CONST_FN inline constexpr bool is_khandle( any_ptr hnd ) { return !is_special_handle( hnd ) && ( hnd & khandle_flag ) == khandle_flag; }
	FORCE_INLINE CONST_FN inline constexpr any_ptr make_khandle( any_ptr hnd )
	{
		return hnd | khandle_flag;
	}
	template<typename T>
	FORCE_INLINE CONST_FN inline constexpr bool clear_khandle( T& hnd )
	{
		if ( !is_khandle( hnd ) )
			return false;
		hnd = T( ( ( uint64_t ) hnd ) ^ khandle_flag );
		return true;
	}
};

// Status type.
//
namespace nt
{
	struct status_traits
	{
		inline static constexpr int32_t success_value = STATUS_SUCCESS;
		inline static constexpr int32_t failure_value = STATUS_UNSUCCESSFUL;
		FORCE_INLINE constexpr static bool is_success( int32_t value ) { return value >= 0; }
	};
	struct TRIVIAL_ABI status
	{
		using status_traits = status_traits;
		int32_t value = status_traits::failure_value;
		FORCE_INLINE constexpr status() noexcept = default;
		FORCE_INLINE constexpr status( int32_t value ) noexcept : value( value ) {}
		FORCE_INLINE constexpr status( status&& ) noexcept = default;
		FORCE_INLINE constexpr status( const status& ) noexcept = default;
		FORCE_INLINE constexpr status& operator=( status&& ) noexcept = default;
		FORCE_INLINE constexpr status& operator=( const status& ) noexcept = default;
		FORCE_INLINE constexpr operator int32_t& ( ) { return value; }
		FORCE_INLINE constexpr operator const int32_t& ( ) const noexcept { return value; }
		FORCE_INLINE constexpr bool is_success() const noexcept { return value >= 0; }
		FORCE_INLINE constexpr bool is_information() const noexcept { return ( uint32_t( value ) >> 30 ) == STATUS_SEVERITY_INFORMATIONAL; }
		FORCE_INLINE constexpr bool is_warning() const noexcept { return ( uint32_t( value ) >> 30 ) == STATUS_SEVERITY_WARNING; }
		FORCE_INLINE constexpr bool is_error() const noexcept { return ( uint32_t( value ) >> 30 ) == STATUS_SEVERITY_ERROR; }
		FORCE_INLINE std::string to_string() const { return xstd::fmt::hex_lz( ( uint32_t ) value ); }
	};
	template<typename T = std::monostate>
	using result = xstd::basic_result<T, status>;
};

namespace ntpp 
{
	// Default attributes set on any object.
	//
	static constexpr uint32_t default_attributes = is_kernel_mode() ? OBJ_KERNEL_HANDLE : 0;

	// Gets the client identifier.
	//
	FORCE_INLINE static const nt::client_id_t& get_client_id()
	{
		if constexpr ( is_kernel_mode() )
			return ke::get_ethread()->cid;
		else
			return nt::get_teb()->client_id;
	}

	// Elevates previous mode to kernel-mode before executing the rest of the block.
	//
#if KERNEL_TARGET
	struct scope_mode
	{
		char& thread_mode = ke::get_ethread()->tcb.previous_mode;
		char prev;
		scope_mode( nt::mode_t mode = nt::mode_t::kernel_mode ) : prev( std::exchange( thread_mode, ( char ) mode ) ) {}
		~scope_mode() { thread_mode = prev; }
	};
#else
	struct scope_mode
	{
		constexpr scope_mode( nt::mode_t = nt::mode_t::kernel_mode ) {}
		constexpr ~scope_mode() {}
	};
#endif

	// APC state helpers.
	//
	inline bool enter_guarded_region( nt::ethread_t* thread = ke::get_ethread() )
	{
		int16_t& ref = thread->tcb.special_apc_disable;
		return !ref--;
	}
	inline bool enter_critical_region( nt::ethread_t* thread = ke::get_ethread() )
	{
		int16_t& ref = thread->tcb.kernel_apc_disable;
		return !ref--;
	}
	inline bool leave_guarded_region_unsafe( nt::ethread_t* thread = ke::get_ethread() )
	{
		int16_t& ref = thread->tcb.special_apc_disable;
		return !++ref;
	}
	inline bool leave_critical_region_unsafe( nt::ethread_t* thread = ke::get_ethread() )
	{
		int16_t& ref = thread->tcb.kernel_apc_disable;
		return !++ref;
	}
	inline bool has_apcs_queued( nt::ethread_t* thread, nt::mode_t mode )
	{
		auto list = &thread->tcb.apc_state.apc_list_head[ ( size_t ) mode ];
		return list->flink != list;
	}
	inline bool is_executing_dpcs( nt::kprcb_t* pcb = ke::get_kprcb() ) 
	{
		return ( pcb->dpc_request_summary & 0x10001 ) != 0;
	}
	COLD inline void check_for_apc_delivery( nt::ethread_t* thread = ke::get_ethread() )
	{
		thread->tcb.apc_state.kernel_apc_pending = true;
#if _SELENE_
		if ( !ia32::get_effective_irql() ) [[likely]]
			ia32::intn( 0x1F );
		else if ( ia32::apic::initialized() )
			ia32::apic::controller<true>{}.request_interrupt( 0x1F, ia32::apic::shorthand::self );
#endif
	}
	inline bool leave_guarded_region( nt::ethread_t* thread = ke::get_ethread() )
	{
		if ( !leave_guarded_region_unsafe( thread ) )
			return false;
		if ( has_apcs_queued( thread, nt::mode_t::kernel_mode ) ) [[unlikely]]
			check_for_apc_delivery( thread );
		return true;
	}
	inline bool leave_critical_region( nt::ethread_t* thread = ke::get_ethread() )
	{
		uint32_t& ref = thread->tcb.combined_apc_disable;
		int16_t& low_ref = *( int16_t* ) &ref;
		low_ref++;
		if ( ref )
			return false;
		if ( has_apcs_queued( thread, nt::mode_t::kernel_mode ) ) [[unlikely]]
			check_for_apc_delivery( thread );
		return true;
	}

	struct critical_region
	{
		// Dummy constructor.
		//
		nt::ethread_t* thread;
		critical_region( nt::ethread_t* thread = ke::get_ethread() ) : thread( thread ) { enter_critical_region( thread ); assume( thread != nullptr ); }

		// Leaves the critical region.
		//
		void reset() { if ( auto p = std::exchange( thread, nullptr ) ) leave_critical_region( p ); }
		~critical_region() { reset(); }
	};
	struct guarded_region
	{
		// Dummy constructor.
		//
		nt::ethread_t* thread;
		guarded_region( nt::ethread_t* thread = ke::get_ethread() ) : thread( thread ) { enter_guarded_region( thread ); assume( thread != nullptr ); }

		// Leaves the guarded region.
		//
		void reset() { if ( auto p = std::exchange( thread, nullptr ) ) leave_guarded_region( p ); }
		~guarded_region() { reset(); }
	};

	// Common implementation details.
	//
	namespace impl
	{
		template<typename T, typename F, typename Setup, typename... BaseArgs>
		RINLINE static nt::result<std::unique_ptr<T>> query_info_template( F&& provider, Setup&& setup, BaseArgs... args )
		{
			using U = std::conditional_t<std::is_same_v<T, std::byte>, std::array<uint8_t, 64>, T>;
			size_t len = sizeof( U );
			std::unique_ptr<T> info{ ( T* ) malloc( len ) };
			memset( info.get(), 0, sizeof( U ) );
			setup( info.get(), len );

			while ( true )
			{
				size_t plen = len;
				auto status = provider( args..., info.get(), plen, ( any_ptr ) &len );
				if ( len > plen )
				{
					info.reset( ( T* ) malloc( len ) );
					memset( info.get(), 0, sizeof( U ) );
					setup( info.get(), len );
					continue;
				}
				return nt::result<std::unique_ptr<T>>{ std::move( info ), status };
			}
		}
	};
};