#pragma once
#include "common.hpp"
#include "ob.hpp"
#include <sdk/nt/kevent_t.hpp>
#include <sdk/nt/kapc_state_t.hpp>
#include <sdk/nt/kernel_stack_limits_t.hpp>
#include <sdk/nt/kstack_control_t.hpp>
#include <sdk/nt/kthread_state_t.hpp>
#include <sdk/win/thread_basic_information_t.hpp>
#include <sdk/ldr/km/data_table_entry_t.hpp>
#include <sdk/ex/rundown_ref_t.hpp>
#include <sdk/rtl/bitmap_t.hpp>
#include <sdk/mm/api.hpp>
#include <sdk/psp/api.hpp>
#include <sdk/expi/api.hpp>

// Synchronization primitives.
//
namespace ntpp
{
	using lock_handle_t = uint64_t;
	namespace impl
	{
		template<bitcnt_t Idx, irql_t Tp, typename T>
		FORCE_INLINE inline irql_t lock_spinlock( volatile T* ref )
		{
			irql_t old_irql = ia32::get_irql();
			dassert( old_irql <= Tp );

			while ( true ) {
				ia32::set_irql( Tp );
				if ( !xstd::bit_set<volatile T>( *ref, Idx ) ) [[likely]]
					break;
				
				ia32::set_irql( old_irql );
				do
					yield_cpu();
				while ( xstd::bit_test<volatile T>( *ref, Idx ) );
			}
			return old_irql;
		}
		template<bitcnt_t Idx, irql_t Tp, typename T>
		FORCE_INLINE inline void unlock_spinlock( volatile T* ref, irql_t prev )
		{
			if constexpr ( Idx == -1 ) {
				*ref = T( 0 );
				std::atomic_thread_fence( std::memory_order::release );
			} else {
				std::atomic_ref{ ( T& ) *ref }.fetch_and( ~T( T( 1 ) << Idx ) );
			}

			if ( xstd::const_condition( prev == Tp ) )
				return;
			ia32::set_irql( prev );
		}
	};
	
	// Spin locks:
	//
	inline lock_handle_t lock( volatile uint64_t* spinlock )
	{
		return impl::lock_spinlock<0, DISPATCH_LEVEL>( spinlock );
	}
	inline void unlock( volatile uint64_t* spinlock, lock_handle_t old_irql )
	{
		return impl::unlock_spinlock<-1, DISPATCH_LEVEL>( spinlock, old_irql );
	}
	inline lock_handle_t lock( uint64_t* spinlock ) { return lock( ( volatile uint64_t* ) spinlock ); }
	inline void unlock( uint64_t* spinlock, lock_handle_t old_irql ) { return unlock( ( volatile uint64_t* ) spinlock, old_irql ); }
	
	// Dispatcher header:
	//
	inline lock_handle_t lock( nt::dispatcher_header_t* hdr )
	{
		return impl::lock_spinlock<7, DISPATCH_LEVEL>( &hdr->lock );
	}
	inline void unlock( nt::dispatcher_header_t* hdr, lock_handle_t old_irql )
	{
		return impl::unlock_spinlock<7, DISPATCH_LEVEL>( &hdr->lock, old_irql );
	}
	
	// Push locks:
	//
	inline lock_handle_t lock( ex::push_lock_t* pushlock )
	{
		CHECK_IRQL( <= APC_LEVEL );
		enter_critical_region();
		ex::acquire_push_lock_exclusive_ex( ( any_ptr ) pushlock, 0ull );
		return {};
	}
	inline lock_handle_t lock_shared( ex::push_lock_t* pushlock )
	{
		CHECK_IRQL( <= APC_LEVEL );
		enter_critical_region();
		ex::acquire_push_lock_shared_ex( ( any_ptr ) pushlock, 0ull );
		return {};
	}
	inline void unlock( ex::push_lock_t* pushlock, lock_handle_t = {} )
	{
		ex::release_push_lock_exclusive_ex( ( any_ptr ) pushlock, 0ull );
		leave_critical_region();
	}
	inline void unlock_shared( ex::push_lock_t* pushlock, lock_handle_t = {} )
	{
		ex::release_push_lock_shared_ex( ( any_ptr ) pushlock, 0ull );
		leave_critical_region();
	}
	
	// Resources:
	//
	inline lock_handle_t lock( nt::eresource_t* resource )
	{
		CHECK_IRQL( <= APC_LEVEL );
		ex::enter_critical_region_and_acquire_resource_exclusive( resource );
		return {};
	}
	inline lock_handle_t lock_shared( nt::eresource_t* resource )
	{
		CHECK_IRQL( <= APC_LEVEL );
		ex::enter_critical_region_and_acquire_resource_shared( resource );
		return {};
	}
	inline void unlock( nt::eresource_t* resource, lock_handle_t = {} )
	{
		ex::release_resource_and_leave_critical_region( resource );
	}
	inline void unlock_shared( nt::eresource_t* resource, lock_handle_t = {} )
	{
		ex::release_resource_and_leave_critical_region( resource );
	}
	
	// Rundown protect:
	//
	inline lock_handle_t lock( ex::rundown_ref_t* rundown )
	{
		auto thr = ke::get_ethread();
		enter_critical_region( thr );
		auto& cnt = xstd::make_atomic( rundown->count );
		uint64_t value = cnt.load( std::memory_order::relaxed );
		while ( true )
		{
			if ( value & EX_RUNDOWN_ACTIVE ) [[unlikely]]
			{
				leave_critical_region( thr );
				return false;
			}
			if ( cnt.compare_exchange_strong( value, value + 2 ) )
			{
				assume( thr != nullptr );
				return lock_handle_t( thr );
			}
		}
	}
	inline void unlock( ex::rundown_ref_t* rundown, lock_handle_t hnd )
	{
		if ( hnd )
		{
			auto& cnt = xstd::make_atomic( rundown->count );
			uint64_t value = cnt.load( std::memory_order::relaxed );
			while ( true )
			{
				if ( value & EX_RUNDOWN_ACTIVE ) [[unlikely]]
				{
					ex::release_rundown_protection_ex( rundown, 1 );
					break;
				}
				if ( cnt.compare_exchange_strong( value, value - 2 ) )
					break;
			}
			leave_critical_region( ( nt::ethread_t* ) hnd );
		}
	}
	inline bool did_rundown( ex::rundown_ref_t* r ) 
	{
		return r->count & EX_RUNDOWN_ACTIVE;
	}
	inline lock_handle_t lock_shared( ex::rundown_ref_t* rundown )
	{
		return lock( rundown );
	}
	inline void unlock_shared( ex::rundown_ref_t* rundown, lock_handle_t hnd )
	{
		return unlock( rundown, hnd );
	}
	
	// PFN spinlock:
	//
	inline lock_handle_t lock( nt::mmpfn_t* pfn )
	{
		return impl::lock_spinlock<63, DISPATCH_LEVEL>( &pfn->u2.lock );
	}
	inline void unlock( nt::mmpfn_t* pfn, lock_handle_t old_irql )
	{
		return impl::unlock_spinlock<63, DISPATCH_LEVEL>( &pfn->u2.lock, old_irql );
	}

	// Queued spinlocks:
	//
	struct spinlock_queue 
	{ 
		uint64_t index; 
		inline constexpr spinlock_queue( uint64_t index ) : index( index ) {}
		constexpr spinlock_queue( const spinlock_queue& ) noexcept = default;
		constexpr spinlock_queue& operator=( const spinlock_queue& ) = delete;
	};
	inline void lock_at_dpc( nt::kspin_lock_queue_t* self )
	{
		// Try to acquire the lock:
		std::atomic_ref lock{ *( nt::kspin_lock_queue_t** ) self->lock };
		if ( auto prev = lock.exchange( self ) ) [[unlikely]]
		{
			// On failure, set the marker and write the queue next.
			*( uint64_t* ) &self->lock |= LOCK_QUEUE_WAIT;
			prev->next = self;

			// Wait for it to be cleared.
			while ( uint64_t( xstd::make_volatile( self->lock ) ) & LOCK_QUEUE_WAIT )
				yield_cpu();
		}
	}
	inline void unlock_at_dpc( nt::kspin_lock_queue_t* self ) 
	{
		// If there is no processor waiting in the queue:
		auto* next = self->next;
		if ( !next ) [[likely]]
		{
			// Try to simply swap ourselves out.
			std::atomic_ref lock{ *( nt::kspin_lock_queue_t** ) self->lock };
			auto* expected = self;
			if ( lock.compare_exchange_strong( expected, nullptr ) ) [[likely]]
				return;

			// Wait for the queue to be valid.
			while ( !( next = xstd::make_volatile( self->next ) ) )
				yield_cpu();
		}
		
		// Clear the next pointer, clear the mark from the next in the queue.
		self->next = nullptr;
		xstd::atomic_bit_reset( next->lock, xstd::lsb( LOCK_QUEUE_WAIT ) );
	}
	inline lock_handle_t lock( spinlock_queue queue )
	{
		auto prev = ia32::raise_irql( DISPATCH_LEVEL );
		lock_at_dpc( ke::get_lock_queue( queue.index ) );
		return prev;
	}
	inline void unlock( spinlock_queue queue, lock_handle_t old_irql )
	{
		unlock_at_dpc( ke::get_lock_queue( queue.index ) );
		ia32::set_irql( old_irql );
	}

	// RAII Guards.
	//
	template<typename T>
	struct unique_lock
	{
		T* ptr;
		lock_handle_t h;
		
		unique_lock() : ptr( nullptr ) {}
		unique_lock( const void* ptr ) : ptr( ( T* ) ptr ), h( lock( this->ptr ) ) { assume( this->ptr != nullptr ); }
		unique_lock( const void* ptr, lock_handle_t h, std::adopt_lock_t ) : ptr( ( T* ) ptr ), h( h ) { assume( this->ptr != nullptr ); }
		unique_lock( const unique_lock& ) = delete;
		unique_lock& operator=( const unique_lock& ) = delete;
		unique_lock( unique_lock&& o ) noexcept : ptr( std::exchange( o.ptr, nullptr ) ), h( o.h ) {}
		unique_lock& operator=( unique_lock&& o ) noexcept
		{
			reset();
			ptr = std::exchange( o.ptr, nullptr );
			h = o.h;
			return *this;
		}

		lock_handle_t handle() const { return h; }

		void reset( T* other = nullptr )
		{
			if ( ptr )
				unlock( ptr, h );
			ptr = other;
			h = other ? lock( other ) : 0;
		}
		~unique_lock() { reset(); }
	};
	template<>
	struct unique_lock<spinlock_queue>
	{
		lock_handle_t h;
		nt::kspin_lock_queue_t* ptr;

		unique_lock( spinlock_queue queue ) : h( ia32::raise_irql( DISPATCH_LEVEL ) ), ptr( ke::get_lock_queue( queue.index ) ) { lock_at_dpc( ptr ); }
		unique_lock( spinlock_queue queue, lock_handle_t h, std::adopt_lock_t ) : h( h ), ptr( ke::get_lock_queue( queue.index ) ) {}
		unique_lock( const unique_lock& ) = delete;
		unique_lock& operator=( const unique_lock& ) = delete;
		lock_handle_t handle() const { return h; }
		~unique_lock() { unlock_at_dpc( ptr ); ia32::set_irql( h ); }
	};
	template<typename T> unique_lock( T* )->unique_lock<T>;
	template<typename T> unique_lock( T*, lock_handle_t, std::adopt_lock_t )->unique_lock<T>;
	template<typename T>
	struct shared_lock
	{
		T* ptr;
		lock_handle_t h;

		shared_lock() : ptr( nullptr ) {}
		shared_lock( const void* ptr ) : ptr( ( T* ) ptr ), h( lock_shared( this->ptr ) ) { assume( this->ptr != nullptr ); }
		shared_lock( const void* ptr, lock_handle_t h, std::adopt_lock_t ) : ptr( ( T* ) ptr ), h( h ) { assume( this->ptr != nullptr ); }
		shared_lock( const shared_lock& ) = delete;
		shared_lock& operator=( const shared_lock& ) = delete;
		shared_lock( shared_lock&& o ) noexcept : ptr( std::exchange( o.ptr, nullptr ) ), h( o.h ) {}
		shared_lock& operator=( shared_lock&& o ) noexcept
		{
			reset();
			ptr = std::exchange( o.ptr, nullptr );
			h = o.h;
			return *this;
		}

		lock_handle_t handle() const { return h; }

		void reset( T* other = nullptr )
		{
			if ( ptr )
				unlock_shared( ptr, h );
			ptr = other;
			h = other ? lock_shared( other ) : 0;
		}
		~shared_lock() { reset(); }
	};
	template<typename T> shared_lock( T* )->shared_lock<T>;
	template<typename T> shared_lock( T*, lock_handle_t, std::adopt_lock_t )->shared_lock<T>;
	template<typename L>
	FORCE_INLINE inline void release_as_dispatcher( L& lock, uint64_t boost_flags, nt::kprcb_t* prcb = ke::get_kprcb() )
	{
		irql_t prev_irql = std::exchange( lock.h, DISPATCH_LEVEL );
		lock.reset();
		dassert( ia32::get_irql() == DISPATCH_LEVEL );
		ki::exit_dispatcher( prcb, 0ull, 1ull, boost_flags, prev_irql );
		dassert( ia32::get_irql() == prev_irql );
	}

	// User-mode sync primitives.
	//
	struct create_event_args
	{
		uint32_t attributes = default_attributes;
		bool auto_reset = true;
		bool state = false;
	};
	nt::result<unique_handle> create_event( const create_event_args& args = {} );
	nt::result<unique_handle> open_event( const nt::unicode_view& name, uint32_t access_mask = MAXIMUM_ALLOWED );
	nt::result<int32_t> set_event( void* handle );
	nt::result<int32_t> reset_event( void* handle );
	nt::result<int32_t> pulse_event( void* handle );

	// Waits a for a single or a list of events, returns the index within the list on trigger or std::string::npos if alerted/timeout.
	//
	nt::result<size_t> wait_for( void* const* handles, size_t count, nt::wait_type_t type, int64_t* pinterval = nullptr, bool alertable = false );
	nt::result<size_t> wait_for( void* const* handles, size_t count, nt::wait_type_t type, const xstd::time::nanoseconds& timeout, bool alertable = false );
	nt::result<size_t> wait_for( void* handle, const xstd::time::nanoseconds& timeout = 0ns, bool alertable = false );
	template<typename Iterable = std::initializer_list<void*>>
	inline nt::result<size_t> wait_for( const Iterable& handles, nt::wait_type_t type, const xstd::time::nanoseconds& timeout = 0ns, bool alertable = false )
	{
		return wait_for( &*std::begin( handles ), std::size( handles ), type, timeout, alertable );
	}

	// Sleep / Yield.
	//
	template<xstd::Duration D>
	inline nt::status sleep( D duration, bool alertable = false )
	{
		if ( duration < 0ms )
			return STATUS_SUCCESS;
		int64_t interval = -std::chrono::duration_cast< nt::ticks >( duration ).count();
		if constexpr ( is_kernel_mode() )
			return ke::delay_execution_thread( 0, alertable, &interval );
		else
			return os::delay_execution( alertable, &interval );
	}
	inline nt::status sleep_until( xstd::timestamp timestamp, bool alertable = false )
	{
		return sleep( timestamp - xstd::time::now(), alertable );
	}
	inline void yield_execution()
	{
		if constexpr ( is_kernel_mode() )
			ke::yield_execution( 0 );
		else
			os::yield_execution();
	}

	// Token information.
	//
	nt::result<unique_handle> open_thread_token( void* handle = ob::current_thread(), uint32_t mask = MAXIMUM_ALLOWED, uint32_t as_self = true );
	nt::result<unique_handle> open_process_token( void* handle = ob::current_process(), uint32_t mask = MAXIMUM_ALLOWED );
	nt::result<unique_handle> open_current_token();
	nt::result<> adjust_privileges_token( void* token, const nt::luid_and_attributes_t& entry );
	template<typename T>
	inline nt::result<std::unique_ptr<T>> query_token_info( void* token, nt::token_information_class_t iclass )
	{
		scope_mode _p{};
		return impl::query_info_template<T>( 
			os::query_information_token,
			[ ] ( auto&&... ) {},
			token, iclass
		);
	}
	nt::result<> set_token_info( void* token, nt::token_information_class_t iclass, const void* data, size_t len );
	nt::result<unique_handle> duplicate_token( void* token, nt::token_type_t type = nt::token_type_t::impersonation, 
															  uint32_t access = MAXIMUM_ALLOWED, sec::impersonation_level_t impersonation_level = sec::impersonation_level_t::impersonation );
	nt::result<> impersonate_token( void* token );
	nt::result<> revert_to_self();

#if KERNEL_TARGET
	// Event utils.
	//
	inline void initialize_event( nt::kevent_t* evt, bool auto_reset )
	{
		memset( evt, 0, sizeof( nt::kevent_t ) );
		evt->header.type = auto_reset ? ( uint8_t ) nt::event_type_t::synchronization_event : ( uint8_t ) nt::event_type_t::notification_event;
		evt->header.size = sizeof( nt::kevent_t ) / 4;
		evt->header.wait_list_head.blink = &evt->header.wait_list_head;
		evt->header.wait_list_head.flink = &evt->header.wait_list_head;
	}

	// Queues an APC returns true on success.
	//
	bool queue_apc( nt::kapc_t* apc );

	// Lambda IPI/DPC/Worker helpers.
	//
	template<typename T> requires xstd::Invocable<T, void>
	inline void call_ipi( T&& fn )
	{
		CHECK_IRQL( < IPI_LEVEL );
		ke::ipi_generic_call( [ ] ( uint64_t ctx ) MS_SSE2AVX -> uint64_t
		{
			( *( ( decltype( &fn ) ) ctx ) )( );
			return 0;
		}, ( uint64_t ) &fn );
	}
	template<typename T> requires xstd::Invocable<T, void>
	inline void call_dpc( T&& fn )
	{
		CHECK_IRQL( < DISPATCH_LEVEL );
		ke::generic_call_dpc( [ ] ( nt::kdpc_t*, void* ctx, void* completion_barrier, void* sync_barrier ) MS_SSE2AVX
		{
			( *( ( decltype( &fn ) ) ctx ) )( );
			ke::signal_call_dpc_synchronize( sync_barrier );
			ke::signal_call_dpc_done( completion_barrier );
		}, ( void* ) &fn );
	}
	template<typename T> requires xstd::Invocable<T, void>
	inline void call_worker( T&& fn, nt::work_queue_type_t type = nt::work_queue_type_t::normal_work_queue )
	{
		CHECK_IRQL( < DISPATCH_LEVEL );
		
		nt::kevent_t event = {};
		initialize_event( &event, false );
		auto wrapped = [ & ] () {
			fn();
			ke::set_event( &event, 0, 0 );
		};

		nt::work_queue_item_t item = {};
		item.parameter = ( void* ) &wrapped;
		item.worker_routine = [] ( void* ctx ) MS_SSE2AVX {
			( *( ( decltype( &wrapped ) ) ctx ) )();
		};
		ex::queue_work_item( &item, type );
		ke::wait_for_single_object( &event, nt::kwait_reason_t::executive, 0, 0, nullptr );
	}

	// APC as awaitable.
	//
	struct apc_awaitable
	{
		nt::kapc_t apc = {};
		std::coroutine_handle<> continuation;
		bool cancelled;

		inline explicit apc_awaitable( nt::ethread_t* thread )
		{
			apc.thread = &thread->tcb;
			apc.size = sizeof( nt::kapc_t );
			apc.type = 0x12;
			apc.apc_mode = ( char ) nt::mode_t::kernel_mode;
			apc.apc_state_index = ( char ) nt::kapc_environment_t::original_apc_environment;
			apc.kernel_routine = []( nt::kapc_t* _apc, auto, auto, void**, void** ) MS_SSE2AVX
			{
				auto * apc = ( apc_awaitable* ) _apc;
				apc->cancelled = false;
				apc->continuation();
			};
			apc.normal_routine = nullptr;
			apc.normal_context = nullptr;
			apc.rundown_routine = []( nt::kapc_t* _apc ) MS_SSE2AVX
			{
				auto * apc = ( apc_awaitable* ) _apc;
				apc->cancelled = true;
				apc->continuation();
			};
		}

		inline bool await_ready() { return false; }
		inline bool await_suspend( std::coroutine_handle<> h )
		{
			continuation = h;
			cancelled = true;
			return queue_apc( &apc );
		}
		inline bool await_resume() { return !cancelled; }
	};
	inline apc_awaitable call_apc( nt::ethread_t* thread ) { return apc_awaitable{ thread }; }

	// Group affinity helpers.
	//
	nt::group_affinity_t get_system_group_affinity( nt::ethread_t* thr = ke::get_ethread() );
	nt::group_affinity_t set_system_group_affinity( const nt::group_affinity_t& affinity );
	void revert_to_user_affinity( const nt::group_affinity_t& prev_affinity );
	void switch_to_processor( nt::kprcb_t* prcb );
	inline void switch_to_processor( size_t n ) { return switch_to_processor( ke::get_kprcb( n ) ); }
	template<typename F>
	inline void for_each_processor( F&& enumerator )
	{
		auto previous_affinity = get_system_group_affinity();
		for ( auto prcb : ke::get_kprcbs() )
		{
			switch_to_processor( prcb );
			enumerator();
		}
		revert_to_user_affinity( previous_affinity );
	}

	// Enumeration of common kernel containers.
	//
	struct no_lock_t {};
	namespace impl
	{
		template<typename T>
		struct ps_iterator
		{
			// Iterator traits.
			//
			using iterator_category = std::bidirectional_iterator_tag;
			using value_type        = T*;
			using difference_type   = ptrdiff_t;

			// Iterator ranges and the last value held.
			//
			nt::list_entry_t* it = nullptr;
			nt::list_entry_t* head = nullptr;
			ref<T> ref = {};
			
			// Define iteration.
			//
			inline void advance( bool fwd )
			{
				ref.reset();
				while ( !ref )
				{
					// Break if we reach the end.
					//
					it = fwd ? it->flink : it->blink;
					if ( it == head )
						break;

					// Try to reference the object.
					//
					T* object;
					if constexpr( xstd::Same<T, nt::eprocess_t> )
						object = xstd::ptr_at<nt::eprocess_t>( it, -SDK_OFFSET( nt::eprocess_t, active_process_links ) );
					else
						object = xstd::ptr_at<nt::ethread_t>( it, -SDK_OFFSET( nt::ethread_t, thread_list_entry ) );
					ref.reset( object );
				}
			}
			ps_iterator& operator++() { advance( true ); return *this; }
			ps_iterator& operator--() { advance( false ); return *this; }
			ps_iterator operator++( int ) { auto s = *this; operator++(); return s; }
			ps_iterator operator--( int ) { auto s = *this; operator--(); return s; }

			// Comparison between entries.
			//
			bool operator==( const ps_iterator& rhs ) const { return it == rhs.it; }
			bool operator!=( const ps_iterator& rhs ) const { return it != rhs.it; }
			
			// Redirection to value type.
			//
			value_type operator*() const { return ref; }
			value_type operator->() const { return ref; }
		};
		struct module_iterator
		{
			// Iterator traits.
			//
			using iterator_category = std::bidirectional_iterator_tag;
			using value_type        = ldr::km::data_table_entry_t*;
			using difference_type   = ptrdiff_t;

			// Iterator ranges.
			//
			nt::list_entry_t* it = nullptr;
			
			// Define iteration.
			//
			inline void advance( bool fwd ) { it = fwd ? it->flink : it->blink; }
			module_iterator& operator++() { advance( true ); return *this; }
			module_iterator& operator--() { advance( false ); return *this; }
			module_iterator operator++( int ) { auto s = *this; operator++(); return s; }
			module_iterator operator--( int ) { auto s = *this; operator--(); return s; }

			// Comparison between entries.
			//
			bool operator==( const module_iterator& rhs ) const { return it == rhs.it; }
			bool operator!=( const module_iterator& rhs ) const { return it != rhs.it; }
			
			// Redirection to value type.
			//
			value_type operator*() const { return ( value_type ) it; }
			value_type operator->() const { return ( value_type ) it; }
		};
		struct session_iterator
		{
			// Iterator traits.
			//
			using iterator_category = std::forward_iterator_tag;
			using value_type =        nt::eprocess_t*;
			using difference_type =   ptrdiff_t;

			// Iterator ranges.
			//
			ref<nt::eprocess_t> it = {};

			// Define iteration.
			//
			session_iterator& operator++() { it.reset( mm::get_next_session( it.release() ), true ); return *this; }
			session_iterator operator++( int ) { auto s = *this; operator++(); return s; }

			// Comparison between entries.
			//
			bool operator==( const session_iterator& rhs ) const { return it == rhs.it; }
			bool operator!=( const session_iterator& rhs ) const { return it != rhs.it; }

			// Redirection to value type.
			//
			value_type operator*() const { return it; }
			value_type operator->() const { return it; }
		};
	};
	struct process_list : std::ranges::view_base
	{
		using iterator =         impl::ps_iterator<nt::eprocess_t>;

		// Lock and the head of the list.
		//
		shared_lock<ex::push_lock_t> lock = {};
		nt::list_entry_t* head = ( nt::list_entry_t* ) &ps::active_process_head;

		// Constructors.
		//
		explicit process_list() : lock( &psp::active_process_lock ) {}
		explicit process_list( no_lock_t ) {}
		process_list( process_list&& ) noexcept = default;
		process_list& operator=( process_list&& ) noexcept = default;

		// Iterators.
		//
		iterator begin() const { return ++iterator{ head, head }; }
		iterator end() const { return iterator{ head, head }; }
		size_t size() const { return std::distance( begin(), end() ); }
		bool empty() const { return head->flink == head; }
	};
	struct thread_list : std::ranges::view_base
	{
		using iterator =         impl::ps_iterator<nt::ethread_t>;

		// Lock and the head of the list.
		//
		shared_lock<ex::push_lock_t> lock = {};
		nt::list_entry_t* head = nullptr;

		// Constructors.
		//
		thread_list() {}
		explicit thread_list( nt::eprocess_t* process ) : lock( &process->thread_list_lock ), head( &process->thread_list_head ) {}
		explicit thread_list( nt::eprocess_t* process, no_lock_t ) : head( &process->thread_list_head ) {}
		thread_list( thread_list&& ) noexcept = default;
		thread_list& operator=( thread_list&& ) noexcept = default;

		// Iterators.
		//
		iterator begin() const { return std::next( iterator{ head, head }, head != nullptr ); }
		iterator end() const { return { head, head }; }
		size_t size() const { return std::distance( begin(), end() ); }
		bool empty() const { return !head || head->flink == head; }
	};
	struct module_list : std::ranges::view_base
	{
		using iterator =         impl::module_iterator;

		// Lock and the head of the list.
		//
		shared_lock<nt::eresource_t> lock = {};
		nt::list_entry_t* head = nullptr;

		// Constructors.
		//
		explicit module_list() : lock( &ps::loaded_module_resource ), head( ( nt::list_entry_t* ) &ps::loaded_module_list ) {}
		explicit module_list( no_lock_t ) : head( ( nt::list_entry_t* ) &ps::loaded_module_list ) {}
		module_list( module_list&& ) noexcept = default;
		module_list& operator=( module_list&& ) noexcept = default;

		// Iterators.
		//
		iterator begin() const { return ++iterator{ head }; }
		iterator end() const { return iterator{ head }; }
		size_t size() const { return std::distance( begin(), end() ); }
		constexpr bool empty() const noexcept { return false; }
	};
	struct session_list : std::ranges::view_base
	{
		using iterator =         impl::session_iterator;

		constexpr explicit session_list() = default;
		constexpr session_list( session_list&& ) noexcept = default;
		constexpr session_list& operator=( session_list&& ) noexcept = default;

		// Iterators.
		//
		iterator begin() const { return ++iterator{ {} }; }
		iterator end() const { return iterator{}; }
		size_t size() const { return std::distance( begin(), end() ); }
		constexpr bool empty() const noexcept { return false; }
	};

	// Helper for closing all handles.
	//
	template<typename F>
	inline void close_handle_if( F&& filter )
	{
		for ( auto&& eproc : process_list{} )
			close_handle_if( eproc, filter );
	}

	// Basic process/thread utils.
	//
	std::wstring_view get_image_path( nt::eprocess_t* process );
	std::wstring_view get_image_name( nt::eprocess_t* process );
	inline bool is_exiting( nt::ethread_t* thread ) 
	{
		return thread->terminated || did_rundown( &thread->rundown_protect );
	}
	inline bool is_exiting( nt::eprocess_t* process )
	{
		return process->flags & 0xC /*Exiting | Delete*/;
	}
	inline std::optional<nt::status> get_exit_status( nt::ethread_t* thread ) 
	{
		if ( is_exiting( thread ) )
			return nt::status{ thread->exit_status };
		else
			return std::nullopt;
	}
	inline std::optional<nt::status> get_exit_status( nt::eprocess_t* process ) 
	{ 
		if ( is_exiting( process ) )
			return nt::status{ process->exit_status };
		else
			return std::nullopt;
	}
	inline uint64_t get_session_id( nt::eprocess_t* proc )
	{
		if ( !proc->session || !proc->address_policy_frozen )
			return 0;
		return proc->session->session_id;
	}

	// Process attach/detach.
	//
	void stack_attach_process( nt::eprocess_t* process, nt::kapc_state_t* apc_state );
	void unstack_detach_process( nt::kapc_state_t* apc_state );
	struct scope_process
	{
		std::optional<nt::kapc_state_t> apc_state;

		// Constructed by EPROCESS.
		//
		scope_process( nt::eprocess_t* process )
		{
			if ( process && process != ke::get_eprocess() )
				stack_attach_process( process, &apc_state.emplace() );
		}
		scope_process( nt::kprocess_t* process ) : scope_process( ( nt::eprocess_t* ) process ) {};

		// Detaches from the process region.
		//
		void reset() {
			if ( apc_state.has_value() ) {
				unstack_detach_process( &apc_state.value() );
				apc_state.reset();
			}
		}
		~scope_process() { reset(); }
	};

	// Thread stack information.
	//
	struct stack_information
	{
		xstd::numeric_range<any_ptr> range;
		nt::kernel_stack_limits_t          type;

		auto tie() { return std::tie( range, type ); }
	};
	static constexpr size_t kernel_stack_size = 24_kb;
	stack_information query_stack_information( any_ptr ptr, irql_t irql = ia32::get_effective_irql(), nt::ethread_t* thread = ke::get_ethread(), nt::kpcr_t* pcr = ke::get_kpcr() );
	nt::trapframe* get_base_trapframe( nt::kthread_t* thread );
	inline nt::trapframe* get_base_trapframe( nt::ethread_t* thread ) { return get_base_trapframe( &thread->tcb ); }
#endif
	std::tuple<nt::kernel_stack_limits_t, void*, void*> query_stack_limits();
	
	// Basic TLS helpers, no support for extended slots.
	//
	nt::result<size_t> tls_alloc( nt::peb_t* peb = nt::get_peb() );
	void tls_free( size_t idx, nt::teb_t* teb = nt::get_teb() );
	void** tls_ref( size_t idx, nt::teb_t* teb = nt::get_teb() );

	// Kernel-mode thread/process APIs.
	//
	nt::result<> get_thread_context( nt::ethread_t* thread, nt::context* ctx );
	nt::result<> set_thread_context( nt::ethread_t* thread, const nt::context* ctx );
	bool alert_thread( nt::ethread_t* thread, nt::mode_t alert_mode = nt::mode_t::kernel_mode );
	nt::result<> suspend_thread( nt::ethread_t* thread, uint32_t* prev = nullptr );
	nt::result<> resume_thread( nt::ethread_t* thread, uint32_t* prev = nullptr );
	nt::result<> terminate_thread( nt::ethread_t* thread, nt::status status = STATUS_SUCCESS );
	nt::result<> terminate_process( nt::eprocess_t* process, nt::status status = STATUS_SUCCESS );
	nt::result<> suspend_process( nt::eprocess_t* process );
	nt::result<> resume_process( nt::eprocess_t* process );

	// User-mode thread/process APIs.
	//
	nt::result<nt::context> get_thread_context( void* handle, uint32_t context_flags = CONTEXT_ALL );
	nt::result<> set_thread_context( void* handle, const nt::context* ctx );
	nt::result<> alert_thread( void* handle );
	nt::result<> suspend_thread( void* handle, uint32_t* prev = nullptr );
	nt::result<> resume_thread( void* handle, uint32_t* prev = nullptr );
	nt::result<> terminate_thread( void* handle, nt::status status = STATUS_SUCCESS );
	nt::result<> terminate_process( void* handle, nt::status status = STATUS_SUCCESS );
	nt::result<> suspend_process( void* handle );
	nt::result<> resume_process( void* handle );

	// Thread and process information.
	//
	template<typename T>
	inline nt::result<std::unique_ptr<T>> query_process_info( void* handle, win::processinfoclass_t iclass )
	{
		scope_mode _p{};
		return impl::query_info_template<T>( 
			os::query_information_process,
			[ ] ( auto&&... ) {},
			handle, iclass
		);
	}
	template<typename T>
	inline nt::result<std::unique_ptr<T>> query_thread_info( void* handle, nt::threadinfoclass_t iclass )
	{
		scope_mode _p{};
		return impl::query_info_template<T>(
			os::query_information_thread,
			[ ] ( auto&&... ) {},
			handle, iclass
		);
	}
	inline nt::result<> set_process_info( void* handle, win::processinfoclass_t iclass, const void* data, size_t len )
	{
		scope_mode _p{};
		return ( nt::status ) os::set_information_process( handle, iclass, ( void* ) data, len );
	}
	inline nt::result<> set_thread_info( void* handle, nt::threadinfoclass_t iclass, const void* data, size_t len )
	{
		scope_mode _p{};
		return ( nt::status ) os::set_information_thread( handle, iclass, ( void* ) data, len );
	}

	// Thread creation.
	//
	struct create_thread_args
	{
		int32_t(__cdecl*routine)(void*) = nullptr;
		void* argument = nullptr;
		void* process_handle = ob::current_process();
	};
	nt::result<unique_handle> create_thread( const create_thread_args& args = {} );
	template<typename T> requires xstd::InvocableWith<T>
	inline nt::result<unique_handle> create_thread( T&& func )
	{
		using D = std::decay_t<T>;

		create_thread_args args = {};

		args.argument = new D( std::forward<T>( func ) );
		args.routine = [ ]( void* ctx ) FLATTEN -> int32_t
		{
			D fn = std::move( *( D* ) ctx );
			delete ( D* ) ctx;
			fn();
			return 0;
		};
		auto result = create_thread( args );
		if ( !result )
			delete ( D* ) args.argument;
		return result;
	}
};