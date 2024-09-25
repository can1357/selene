#if !__private_binary__ && not defined(NO_NTPP)
#include "sync.hpp"
#include <mutex>
#include <xstd/chore.hpp>
#include <xstd/bitwise.hpp>

#if _SELENE_
extern "C" void __selene_schedule_dpc_event( crt::event_primitive* );
#endif

namespace ntpp
{
	// User-mode sync primitives.
	//
	nt::result<unique_handle> create_event( const create_event_args& args )
	{
		scope_mode _p{};
		
		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.attributes = args.attributes;

		nt::result<unique_handle> result = {};
		result.status = os::create_event(
			&result.result.emplace().handle,
			MAXIMUM_ALLOWED,
			&attributes,
			args.auto_reset ? nt::event_type_t::synchronization_event : nt::event_type_t::notification_event,
			args.state
		);
		return result;
	}
	nt::result<unique_handle> open_event( const nt::unicode_view& name, uint32_t access_mask )
	{
		scope_mode _p{};

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | default_attributes;

		nt::result<unique_handle> result;
		result.status = os::open_event(
			&result.result.emplace().handle,
			access_mask,
			&attributes
		);
		return result;
	}
	nt::result<int32_t> set_event( void* handle )
	{
		scope_mode _p{};

		int32_t prev = 0;
		auto status = ( nt::status ) os::set_event( handle, &prev );
		return { prev, status };
	}
	nt::result<int32_t> reset_event( void* handle )
	{
		scope_mode _p{};

		int32_t prev = 0;
		auto status = ( nt::status ) os::reset_event( handle, &prev );
		return { prev, status };
	}
	nt::result<int32_t> pulse_event( void* handle )
	{
		scope_mode _p{};

		int32_t prev = 0;
		auto status = ( nt::status ) os::pulse_event( handle, &prev );
		return { prev, status };
	}

	// Waits a for a single or a list of events, returns the index within the list on trigger or std::string::npos if alerted/timeout.
	//
	FORCE_INLINE nt::result<size_t> wait_for( void* const* handles, size_t count, nt::wait_type_t type, int64_t* pinterval, bool alertable )
	{
		scope_mode _p{};
		while ( true )
		{
			nt::status status = {};
			if ( xstd::const_condition( count == 1 ) )
				status = ( nt::status ) os::wait_for_single_object( *handles, alertable, pinterval );
			else
				status = ( nt::status ) os::wait_for_multiple_objects( ( uint32_t ) count, ( void** ) handles, type, alertable, pinterval );

			switch ( status )
			{
				// Repeat on user APC.
				//
				case STATUS_USER_APC: 
					continue;

				// Propagate success.
				//
				case STATUS_WAIT_0 ... STATUS_WAIT_63:
					return { ( size_t ) ( status - STATUS_WAIT_0 ), STATUS_SUCCESS };

				// Propagate timeout / alert / abandonment / etc.
				//
				//case STATUS_ALERTED:
				//case STATUS_TIMEOUT:
				//case STATUS_ABANDONED_WAIT_0 ... STATUS_ABANDONED_WAIT_63:
				default:
					return { std::string::npos, status };
			}
		}
	}
	nt::result<size_t> wait_for( void* const* handles, size_t count, nt::wait_type_t type, const xstd::time::nanoseconds& timeout, bool alertable )
	{
		int64_t interval = -( timeout / std::chrono::nanoseconds( 100 ) );
		int64_t* pinterval = timeout == 0ns ? nullptr : &interval;
		return wait_for( handles, count, type, pinterval, alertable );
	}
	nt::result<size_t> wait_for( void* handle, const xstd::time::nanoseconds& timeout, bool alertable )
	{
		int64_t interval = -( timeout / std::chrono::nanoseconds( 100 ) );
		int64_t* pinterval = timeout == 0ns ? nullptr : &interval;
		return wait_for( &handle, 1, nt::wait_type_t::any, pinterval, alertable );
	}

	// Token information.
	//
	nt::result<unique_handle> open_thread_token( void* handle, uint32_t mask, uint32_t as_self )
	{
		scope_mode _p{};
		
		nt::result<unique_handle> res;
		res.status = os::open_thread_token( handle, mask, as_self, &res.result.emplace().handle );
		return res;
	}
	nt::result<unique_handle> open_process_token( void* handle, uint32_t mask )
	{
		scope_mode _p{};
		nt::result<unique_handle> res;
		res.status = os::open_process_token( handle, mask, &res.result.emplace().handle );
		return res;
	}
	nt::result<unique_handle> open_current_token()
	{
		scope_mode _p{};
		auto thr = open_thread_token();
		if ( !thr )
			return open_process_token();
		return thr;
	}
	nt::result<> adjust_privileges_token( void* token, const nt::luid_and_attributes_t& entry )
	{
		scope_mode _p{};

		// Copy vector over temporary TOKEN_PRIVILEGES in stack.
		//
		size_t buffer_size = sizeof( nt::luid_and_attributes_t ) + sizeof( nt::token_privileges_t );
		auto tmp = ( nt::token_privileges_t* )_alloca( buffer_size );
		tmp->privilege_count = 1;
		tmp->privileges[ 0 ] = entry;
	
		// Sanitize the return value and return.
		//
		auto status = ( nt::status ) os::adjust_privileges_token( token, false, tmp, buffer_size, nullptr, nullptr );
		if ( status == STATUS_NOT_ALL_ASSIGNED ) status = STATUS_PRIVILEGE_NOT_HELD;
		return ( nt::status ) status;
	}
	nt::result<> set_token_info( void* token, nt::token_information_class_t iclass, const void* data, size_t len )
	{
		scope_mode _p{};
		return ( nt::status ) os::set_information_token( token, iclass, (void*)data, len );
	}
	nt::result<unique_handle> duplicate_token( void* token, nt::token_type_t type, uint32_t access, sec::impersonation_level_t impersonation_level )
	{
		scope_mode _p{};

		sec::quality_of_service_t qos = {};
		qos.length = sizeof( sec::quality_of_service_t );
		qos.impersonation_level = impersonation_level;
		qos.context_tracking_mode = SECURITY_STATIC_TRACKING;
		qos.effective_only = FALSE;
	
		nt::result<unique_handle> result;
		nt::object_attributes_t attribs = {};
		attribs.length = sizeof( nt::object_attributes_t );
		attribs.security_quality_of_service = &qos;
		result.status = os::duplicate_token(
			token,
			access,
			&attribs,
			FALSE,
			type,
			&result.result.emplace().handle
		);
		return result;
	}
	nt::result<> impersonate_token( void* token )
	{
		scope_mode _p{};
		// Get token type.
		//
		auto token_type = query_token_info<nt::token_type_t>( token, nt::token_information_class_t::token_type );
		if ( !token_type )
			return token_type.status;

		// If primary token, create an impersonation token.
		//
		if ( (**token_type) == nt::token_type_t::primary )
		{
			if ( auto imp = duplicate_token( token, nt::token_type_t::impersonation ) )
				return set_thread_info( ob::current_thread(), nt::threadinfoclass_t::thread_impersonation_token, imp->get(), sizeof( void* ) );
			else
				return imp.status;
		}
		// If impersonation token:
		//
		else
		{
			// Use it as is.
			//
			return set_thread_info( ob::current_thread(), nt::threadinfoclass_t::thread_impersonation_token, &token, sizeof( void* ) );
		}
	}
	nt::result<> revert_to_self()
	{
		scope_mode _p{};
		void* token = nullptr;
		return set_thread_info( ob::current_thread(), nt::threadinfoclass_t::thread_impersonation_token, &token, sizeof( void* ) );
	}

#if KERNEL_TARGET
	// Queues an APC returns true on success.
	//
	bool queue_apc( nt::kapc_t* apc )
	{
		auto* thread = ( nt::ethread_t* ) apc->thread;

		// Acquire rundown protection, return false on failure.
		//
		shared_lock rp{ &thread->rundown_protect };
		if ( !rp.handle() )
			return false;
		if ( thread->terminated )
			return false;

		// Acquire the lock, which will raise to DPC.
		//
		unique_lock thread_lock{ &thread->tcb.thread_lock };

		// Fail if we cannot queue an APC.
		//
		if ( !thread->tcb.apc_queueable )
			return false;

		// Insert it into the thread's APC list.
		//
		auto& head = thread->tcb.apc_state.apc_list_head[ apc->apc_mode ];
		apc->apc_list_entry.insert_after( head.blink );
		apc->inserted = true;
		if ( apc->apc_mode )
			thread->tcb.apc_state.user_apc_pending |= 1;
		else
			thread->tcb.apc_state.kernel_apc_pending |= 1;
		ia32::mfence();

		// Signal the thread for an APC and return.
		//
		auto prcb = ke::get_kprcb();
		ki::signal_thread_for_apc( prcb, apc, thread_lock.handle() );
		release_as_dispatcher( thread_lock, 0, prcb );
		return true;
	}
	
	// Process attach/detach.
	//
	void stack_attach_process( nt::eprocess_t* process, nt::kapc_state_t* apc_state )
	{
		// Set a dummy flag and return if we're already attached to the process.
		//
		auto* thread = ke::get_ethread();
		if ( thread->tcb.apc_state.process == &process->pcb )
		{
			apc_state->process = ( any_ptr ) 1;
			return;
		}

		// Acquire thread lock.
		//
		unique_lock lock{ &thread->tcb.thread_lock };
		
		// Attach to the process.
		//
		if ( thread->tcb.apc_state_index )
		{
			ki::attach_process( thread, process, lock.handle(), 0ull, apc_state );
		}
		else
		{
			apc_state->process = nullptr;
			ki::attach_process( thread, process, lock.handle(), 0ull, &thread->tcb.saved_apc_state );
		}
	}
	void unstack_detach_process( nt::kapc_state_t* apc_state )
	{
		// Skip if dummy flag is set.
		//
		if ( apc_state->process == ( any_ptr ) 1 )
			return;

		// Detach from the process.
		//
		auto* thread = ke::get_ethread();
		if ( auto* proc = apc_state->process )
			ki::detach_process( apc_state, 0ull );
		else
			ki::detach_process( &thread->tcb.saved_apc_state, 0ull );
	}

	// Image name helpers.
	//
	std::wstring_view get_image_path( nt::eprocess_t* process )
	{
		auto& name = process->se_audit_process_creation_info.image_file_name;
		return name ? name->name.get() : std::wstring_view{};
	}
	std::wstring_view get_image_name( nt::eprocess_t* process )
	{
		auto path = get_image_path( process );
		size_t pos = path.rfind( '\\' );
		if ( pos != std::string::npos ) return path.substr( pos + 1 );
		else                            return {};
	}

	// Group affinity helpers.
	//
	nt::group_affinity_t get_system_group_affinity( nt::ethread_t* thr ) 
	{
		unique_lock lock{ &thr->tcb.thread_lock };
		if ( thr->tcb.system_affinity_active )
			return *( nt::group_affinity_t* ) &thr->tcb.affinity;
		else
			return {};
	}
	nt::group_affinity_t set_system_group_affinity( const nt::group_affinity_t& affinity )
	{
		CHECK_IRQL( <= DISPATCH_LEVEL );
		nt::group_affinity_t prev = {};
		ke::set_system_group_affinity_thread( ( nt::group_affinity_t* ) &affinity, &prev );
		return prev;
	}
	void revert_to_user_affinity( const nt::group_affinity_t& prev_affinity ) 
	{
		CHECK_IRQL( <= DISPATCH_LEVEL );
		ke::revert_to_user_group_affinity_thread( (nt::group_affinity_t*) &prev_affinity );
	}
	void switch_to_processor( nt::kprcb_t* prcb )
	{
		nt::group_affinity_t affinity = {};
		affinity.group = prcb->group;
		affinity.mask = 1ull << prcb->group_index;
		set_system_group_affinity( affinity );
	}
	
	// Thread stack information.
	//
	stack_information query_stack_information( any_ptr ptr, irql_t irql, nt::ethread_t* thread, nt::kpcr_t* pcr )
	{
		// If within thread stack:
		//
		if ( thread->tcb.stack_limit <= ptr && ptr < thread->tcb.stack_base )
		{
			if ( thread->tcb.misc_flags & 0x1000 )
				return { { thread->tcb.stack_limit, thread->tcb.stack_base }, nt::kernel_stack_limits_t::expanded_stack_limits };
			else if ( thread->tcb.callback_nesting_level )
				return { { thread->tcb.stack_limit, thread->tcb.stack_base }, nt::kernel_stack_limits_t::win32k_stack_limits };
			else
				return { { thread->tcb.stack_limit, thread->tcb.stack_base }, nt::kernel_stack_limits_t::normal_stack_limits };
		}

		auto check = [ & ] ( any_ptr chk, nt::kernel_stack_limits_t type ) -> stack_information
		{
			if ( chk && ( chk - kernel_stack_size ) <= ptr && ptr < ( chk + 0x50 ) )
				return { { chk - kernel_stack_size, chk + 0x50 }, type };
			else
				return { {}, {} };
		};

		// If at or above dispatch level:
		//
		if ( irql >= DISPATCH_LEVEL )
		{
			if ( auto res = check( pcr->prcb.isr_stack, nt::kernel_stack_limits_t::isr_stack_limits ); res.range.first )
				return res;
			if ( auto res = check( pcr->prcb.dpc_stack, nt::kernel_stack_limits_t::dpc_stack_limits ); res.range.first )
				return res;

			if ( SDK_EXISTS( nt::kprcb_t, exception_stack ) )
			{
				if ( auto res = check( pcr->prcb.exception_stack, nt::kernel_stack_limits_t::exception_stack_limits ); res.range.first )
					return res;
			}
		}

		// If interrups are disabled, check ISR stacks:
		//
		if ( irql >= HIGH_LEVEL )
		{
			auto* tss = ( ia32::tss<>* ) pcr->tss_base;

			if ( auto res = check( tss->ist[ 3 ], nt::kernel_stack_limits_t::nmi_stack_limits ); res.range.first )
				return res;
			if ( auto res = check( tss->ist[ 2 ], nt::kernel_stack_limits_t::machine_check_stack_limits ); res.range.first )
				return res;
		}
		return { { km_va_start, km_va_end }, nt::kernel_stack_limits_t::maximum_stack_limits };
	}
	nt::trapframe* get_base_trapframe( nt::kthread_t* thread )
	{
		any_ptr initial_stack = thread->initial_stack;
		while ( true )
		{
			nt::kstack_control_t* stack_control = initial_stack;
			if ( !stack_control->stack_expansion )
				break;
			initial_stack = stack_control->previous.initial_stack;
		}
		return initial_stack - sizeof( nt::trapframe );
	}
	
	// Kernel-mode thread/process APIs.
	//
	nt::result<> get_thread_context( nt::ethread_t* thread, nt::context* ctx )
	{
		return ( nt::status ) psp::get_context_thread_internal( thread, ctx, nt::mode_t::kernel_mode, nt::mode_t::user_mode, nt::mode_t::kernel_mode );
	}
	nt::result<> set_thread_context( nt::ethread_t* thread, const nt::context* ctx )
	{
		return( nt::status ) psp::set_context_thread_internal( thread, ctx, nt::mode_t::kernel_mode, nt::mode_t::user_mode, nt::mode_t::kernel_mode );
	}
	nt::result<> suspend_thread( nt::ethread_t* thread, uint32_t* prev )
	{
		critical_region _g{};
		shared_lock rp{ &thread->rundown_protect };
		if ( !rp.handle() )
			return ( nt::status ) STATUS_THREAD_IS_TERMINATING;
		if ( thread->terminated )
			return ( nt::status ) STATUS_THREAD_IS_TERMINATING;
		uint32_t prev_cnt = ke::suspend_thread( thread );
		if ( prev ) *prev = prev_cnt;
		return ( nt::status ) STATUS_SUCCESS;
	}
	nt::result<> resume_thread( nt::ethread_t* thread, uint32_t* prev )
	{
		critical_region _g{};
		shared_lock rp{ &thread->rundown_protect };
		if ( !rp.handle() )
			return ( nt::status ) STATUS_THREAD_IS_TERMINATING;
		if ( thread->terminated )
			return ( nt::status ) STATUS_THREAD_IS_TERMINATING;
		uint32_t prev_cnt = ke::resume_thread( thread );
		if ( prev ) *prev = prev_cnt;
		return ( nt::status ) STATUS_SUCCESS;
	}
	bool alert_thread( nt::ethread_t* thread, nt::mode_t alert_mode )
	{
		// Acquire thread lock, if already alerted return.
		//
		unique_lock thread_lock{ &thread->tcb.thread_lock };
		auto mode = ( char ) alert_mode;
		if ( thread->tcb.alerted[ mode ] )
			return true;

		// If we can alert the thread via a signal:
		//
		if ( thread->tcb.state == ( char ) nt::kthread_state_t::waiting &&
			  ( thread->tcb.wait_register.state != 3 && thread->tcb.wait_register.state != 4 ) &&
			  thread->tcb.alertable && mode <= thread->tcb.wait_mode )
		{
			auto prcb = ke::get_kprcb();
			bool success = ( uint8_t ) ki::signal_thread( prcb, thread, STATUS_ALERTED, nullptr );
			thread->tcb.wait_register.alert = true;
			if ( success )
			{
				release_as_dispatcher( thread_lock, 2, prcb );
				return false;
			}
		}
		thread->tcb.alerted[ mode ] = 1;
		return false;
	}
	nt::result<> terminate_thread( nt::ethread_t* thread, nt::status status )
	{
		return ( nt::status ) psp::terminate_thread_by_pointer( thread, status.value, thread == ke::get_ethread() );
	}
	nt::result<> terminate_process( nt::eprocess_t* process, nt::status status )
	{
		critical_region _g{};
		auto* thread = ke::get_ethread();
		auto result = ( nt::status ) psp::terminate_process( process, thread, status.value, true );
		if ( thread->tcb.apc_state.process == &process->pcb )
		{
			_g.reset();
			psp::terminate_thread_by_pointer( thread, status.value, true );
			unreachable();
		}
		return result;
	}
	nt::result<> suspend_process( nt::eprocess_t* process )
	{
		return ( nt::status ) ps::suspend_process( process );
	}
	nt::result<> resume_process( nt::eprocess_t* process )
	{
		return ( nt::status ) ps::resume_process( process );
	}

	std::tuple<nt::kernel_stack_limits_t, void*, void*> query_stack_limits()
	{
		auto [range, type] = query_stack_information( ia32::get_sp() );
		return { type, range.first, range.limit };
	}
#else
	std::tuple<nt::kernel_stack_limits_t, void*, void*> query_stack_limits() {
		auto teb = nt::get_teb();
		return { nt::kernel_stack_limits_t::normal_stack_limits, teb->nt_tib.stack_limit, teb->nt_tib.stack_base };
	}
#endif
	
	// Basic TLS helpers, no support for extended slots.
	//
	nt::result<size_t> tls_alloc( nt::peb_t* peb )
	{
		// Get the bitmap.
		//
		auto bitmap = *( rtl::bitmap_t** ) &peb->tls_bitmap;
		
		// Enter the scanning loop.
		//
		while ( true )
		{
			// Iterate the buffer.
			//
			auto it = bitmap->buffer;
			for ( size_t n = 0; n < bitmap->size_of_bit_map && n < 64 /*teb->tls_slots.size()*/; n += 32, ++it )
			{
				// Enter atomic loop.
				//
				while ( true )
				{
					// Find the least significant 0 below the limit.
					//
					bitcnt_t idx = xstd::lsb( ~*it );
					if ( idx == -1 || ( n + idx ) >= bitmap->size_of_bit_map )
						break;

					// Bittest and set, return if it was previously unset.
					//
					if ( !xstd::bit_set( xstd::make_atomic( *it ), idx ) )
						return size_t( idx ) + n;
				}
			}
		}
		return nt::status{ STATUS_UNSUCCESSFUL };
	}
	void tls_free( size_t idx, nt::teb_t* teb )
	{
		// Get the bitmap.
		//
		auto* peb = teb->process_environment_block;
		auto bitmap = *( rtl::bitmap_t** ) &peb->tls_bitmap;

		// Skip if invalid index.
		//
		if ( idx >= bitmap->size_of_bit_map )
			return;

		// Reset the bit.
		//
		xstd::bit_reset( xstd::make_atomic( bitmap->buffer[ idx / 32 ] ), idx % 32 );
	}
	void** tls_ref( size_t idx, nt::teb_t* teb )
	{
		// Reference the TLS value.
		//
		if ( idx < teb->tls_slots.size() )
			return &teb->tls_slots[ idx ];
		return nullptr;
	}

	// Thread creation.
	//
	nt::result<unique_handle> create_thread( const create_thread_args& args )
	{
		scope_mode _p{};
		nt::result<unique_handle> res;

		if constexpr ( is_kernel_mode() )
		{
			nt::object_attributes_t attributes = {};
			attributes.length = sizeof( nt::object_attributes_t );
			attributes.attributes = OBJ_KERNEL_HANDLE;

			nt::client_id_t client_id;
			res.status.value = ( nt::status ) psp::create_thread(
				&res.result.emplace().handle,
				MAXIMUM_ALLOWED,
				&attributes,
				nullptr,
				get_initial_system_process(),
				nullptr,
				&client_id,
				nullptr,
				nullptr,
				0u, // flags
				args.routine,
				args.argument,
				nullptr
			);
		} 
		else
		{
			res.status.value = os::create_thread_ex(
				&res.result.emplace().handle,
				MAXIMUM_ALLOWED,
				nullptr,
				args.process_handle,
				args.routine,
				args.argument,
				false,
				0,
				0,
				0,
				nullptr
			);
		}
		return res;
	}

	// User-mode thread/process APIs.
	//
	nt::result<nt::context> get_thread_context( void* handle, uint32_t context_flags )
	{
		nt::result<nt::context> result;
		auto& ctx = result.result.emplace();
		ctx.context_flags = context_flags;


#if KERNEL_TARGET
		auto thread = resolve_handle<nt::ethread_t>( handle );
		if ( !thread ) return nt::status{ STATUS_INVALID_HANDLE };
		result.status = get_thread_context( thread, &ctx ).status;
#endif
		result.status = ( nt::status ) os::get_context_thread( handle, ( nt::context* ) &ctx );
		return result;
	}
	nt::result<> set_thread_context( void* handle, const nt::context* ctx )
	{
#if KERNEL_TARGET
		auto thread = resolve_handle<nt::ethread_t>( handle );
		if ( !thread ) return nt::status{ STATUS_INVALID_HANDLE };
		return set_thread_context( thread, ctx ).status;
#endif
		return ( nt::status ) os::set_context_thread( handle, ( nt::context* ) ctx );
	}
	nt::result<> alert_thread( void* handle )
	{
#if KERNEL_TARGET
		auto thread = resolve_handle<nt::ethread_t>( handle );
		if ( !thread ) return nt::status{ STATUS_INVALID_HANDLE };
		ntpp::alert_thread( thread );
		return nt::status{ STATUS_SUCCESS };
#endif
		return ( nt::status ) os::alert_thread( handle );
	}
	nt::result<> suspend_thread( void* handle, uint32_t* prev )
	{
#if KERNEL_TARGET
		auto thread = resolve_handle<nt::ethread_t>( handle );
		if ( !thread ) return nt::status{ STATUS_INVALID_HANDLE };
		return ntpp::suspend_thread( thread, prev ).status;
#endif
		return ( nt::status ) os::suspend_thread( handle, prev );
	}
	nt::result<> resume_thread( void* handle, uint32_t* prev )
	{
#if KERNEL_TARGET
		auto thread = resolve_handle<nt::ethread_t>( handle );
		if ( !thread ) return nt::status{ STATUS_INVALID_HANDLE };
		return ntpp::resume_thread( thread, prev ).status;
#endif
		return ( nt::status ) os::resume_thread( handle, prev );
	}
	nt::result<> terminate_thread( void* handle, nt::status status )
	{
#if KERNEL_TARGET
		auto thread = resolve_handle<nt::ethread_t>( handle );
		if ( !thread ) return nt::status{ STATUS_INVALID_HANDLE };
		if ( auto self = ke::get_ethread(); self == thread ) {
			thread.reset();
			return ntpp::terminate_thread( self, status.value ).status;
		} else {
			return ntpp::terminate_thread( thread, status.value ).status;
		}
#endif
		return ( nt::status ) os::terminate_thread( handle, status );
	}
	nt::result<> suspend_process( void* handle )
	{
#if KERNEL_TARGET
		auto process = resolve_handle<nt::eprocess_t>( handle );
		if ( !process ) return nt::status{ STATUS_INVALID_HANDLE };
		return ntpp::suspend_process( process );
#endif
		return ( nt::status ) os::suspend_process( handle );
	}
	nt::result<> resume_process( void* handle )
	{
#if KERNEL_TARGET
		auto process = resolve_handle<nt::eprocess_t>( handle );
		if ( !process ) return nt::status{ STATUS_INVALID_HANDLE };
		return ntpp::resume_process( process );
#endif
		return ( nt::status ) os::resume_process( handle );
	}
	nt::result<> terminate_process( void* handle, nt::status status )
	{
#if KERNEL_TARGET
		auto process = resolve_handle<nt::eprocess_t>( handle );
		if ( !process ) return nt::status{ STATUS_INVALID_HANDLE };
		return ntpp::terminate_process( process );
#endif
		return ( nt::status ) os::terminate_process( handle, status );
	}
};

// CRT requirements.
//
#if !defined(NTPP_CRT_NO_THREADS) || !defined(NTPP_CRT_NO_SYNC)
#include <mcrt/interface.hpp>
namespace crt
{
#ifndef NTPP_CRT_NO_THREADS
	RINLINE void detach_thread( void* handle )
	{
		ntpp::close_handle( handle, true );
	}
	RINLINE bool join_thread( void* handle )
	{
		if ( ntpp::wait_for( handle ) != 0ull )
			return false;
		ntpp::close_handle( handle, true );
		return true;
	}
	RINLINE std::pair<void*, uint64_t> create_thread( void( __cdecl* fn )( void* ), void* arg )
	{
		if constexpr ( is_kernel_mode() )
		{
			void* handle = nullptr;
			nt::client_id_t cid = {};
			ps::create_system_thread(
				&handle,
				MAXIMUM_ALLOWED,
				nullptr,
				nullptr,
				&cid,
				fn,
				arg
			);
			return { handle, ( uint64_t ) cid.unique_thread };
		}
		else
		{
			auto res = ntpp::create_thread( {
				.routine = ( int32_t( __cdecl* )( void* ) ) fn,
				.argument = arg
			} );
			if ( res )
			{
				auto info = ntpp::query_thread_info<win::thread_basic_information_t>( 
					res->get(), 
					nt::threadinfoclass_t::thread_basic_information 
				);
				return { res->release(), ( uint64_t ) info->client_id.unique_thread };
			}
			return { nullptr, 0 };
		}
	}
#endif
#ifndef NTPP_CRT_NO_SYNC
	FORCE_INLINE void sleep_thread( size_t ticks )
	{
		ntpp::sleep( nt::ticks{ ticks }, false );
	}
	FORCE_INLINE void yield_thread()
	{
#if KERNEL_TARGET
		if ( ia32::get_effective_irql() > APC_LEVEL )
		{
			ia32::pause();
			return;
		}
#endif
		ntpp::yield_execution();
	}
	FORCE_INLINE size_t get_thread_id()
	{
		return ( size_t ) ntpp::get_client_id().unique_thread;
	}
	FORCE_INLINE void* get_thread_pointer()
	{
		if constexpr ( is_kernel_mode() )
			return ke::get_ethread();
		else
			return nt::get_teb();
	}
	FORCE_INLINE size_t get_hardware_concurrency()
	{
		return ke::get_user_shared_data()->active_processor_count;
	}
	FORCE_INLINE uint64_t get_ticks()
	{
		return xstd::ref_at<volatile uint64_t>( ke::get_user_shared_data(), 8 );
	}
	#if KERNEL_TARGET
	struct hl_waitblock_t
	{
		hl_waitblock_t*       next = nullptr;
		bool                  wake_up = false;
	};
	struct kernel_event_t
	{
		nt::kevent_t          object = {};
		hl_waitblock_t*       hl_wait = nullptr;

		inline bool is_auto_reset() const { return object.header.type == ( uint8_t ) nt::event_type_t::synchronization_event; }
	};
	struct dispatcher_guard
	{
		nt::dispatcher_header_t* hdr;
		irql_t prev;

		inline dispatcher_guard( nt::dispatcher_header_t* hdr ) : hdr( hdr )
		{
			prev = ntpp::impl::lock_spinlock<7, HIGH_LEVEL>( &hdr->lock );
		}
		inline ~dispatcher_guard()
		{
			ntpp::impl::unlock_spinlock<7, HIGH_LEVEL>( &hdr->lock, prev );
		}
	};

	// Kernel-mode event wrapper.
	//
	using event_t = kernel_event_t;
	FORCE_INLINE static void init_event( kernel_event_t* evt, bool auto_reset )
	{
		evt->hl_wait = nullptr;
		ntpp::initialize_event( &evt->object, auto_reset );
	}
	FORCE_INLINE static void clear_event( kernel_event_t* evt, bool for_destroy )
	{
		if ( for_destroy )
			dassert( evt->object.header.wait_list_head.flink == &evt->object.header.wait_list_head && !evt->hl_wait );
		xstd::make_atomic( evt->object.header.signal_state ).store( 0, std::memory_order::relaxed );
	}
	static void signal_event( kernel_event_t* evt )
	{
		if ( evt->object.header.signal_state ) [[unlikely]]
			return;

		// Save the processors spinning at high level:
		//
		if ( evt->hl_wait ) [[unlikely]]
		{
			dispatcher_guard _g{ &evt->object.header };
			size_t limit = evt->is_auto_reset() ? 1 : SIZE_MAX;
			while ( evt->hl_wait )
			{
				evt->hl_wait->wake_up = true;
				evt->hl_wait = evt->hl_wait->next;
				if ( !--limit )
					return;
			}
		}

		// Signal the event at or below DISPATCH_LEVEL.
		//
#if _SELENE_
		if ( ia32::get_effective_irql() > DISPATCH_LEVEL ) [[unlikely]]
			return __selene_schedule_dpc_event( (crt::event_primitive*) evt );
#endif
		ke::set_event( &evt->object, 0, 0ull );
	}
	static bool wait_for_event( kernel_event_t* evt, int64_t* pinterval )
	{
		// Quickly check if we can return right away.
		//
		if ( !evt->is_auto_reset() && evt->object.header.signal_state )
			return true;

		// If we can call the NT implementation, do so.
		//
		if ( auto irq = ia32::get_effective_irql(); irq < DISPATCH_LEVEL || ( irq == DISPATCH_LEVEL && pinterval && *pinterval == 0 ) )
		{
			while ( true )
			{
				int32_t status = ke::wait_for_single_object( &evt->object, nt::kwait_reason_t::executive, ( char ) nt::mode_t::kernel_mode, false, pinterval );
				if ( status == STATUS_USER_APC )
					continue;
				return status == STATUS_WAIT_0;
			}
		}
		// Otherwise use our implementation.
		//
		else
		{
			int64_t dpc_timeout_ticks;
			if ( !pinterval )          dpc_timeout_ticks = INT64_MAX >> 12;
			else if ( *pinterval < 0 ) dpc_timeout_ticks = -*pinterval;
			else                       dpc_timeout_ticks = *pinterval - get_ticks();
			auto dpc_timeout = xstd::time::now() + ( std::max( 0ll, dpc_timeout_ticks ) * 100ns );

			// If not auto-reset, simply spin until signal state is set.
			//
			if ( !evt->is_auto_reset() )
			{
				while ( !evt->object.header.signal_state )
				{
					yield_cpu();
					if ( xstd::time::now() >= dpc_timeout )
						return false;
				}
				return true;
			}
			// If auto-reset event:
			//
			else
			{
				// Register our wait-block.
				//
				hl_waitblock_t wb = {};
				{
					dispatcher_guard _g{ &evt->object.header };
					wb.next = evt->hl_wait;
					evt->hl_wait = &wb;
				}

				// Spin until we're waken up.
				//
				while ( true )
				{
					if ( wb.wake_up )
						return true;
					yield_cpu();
					if ( xstd::time::now() >= dpc_timeout )
						break;
				}

				// Unlink our entry and check for success one more time.
				//
				dispatcher_guard _g{ &evt->object.header };
				bool success = wb.wake_up;
				for ( auto it = ( hl_waitblock_t* ) &evt->hl_wait; it; )
				{
					if ( it->next == &wb )
					{
						it->next = wb.next;
						break;
					}
				}
				return success;
			}
		}
	}
	FORCE_INLINE static bool peek_event( kernel_event_t* evt )
	{
		return bool( evt->object.header.signal_state );
	}
	FORCE_INLINE static void* native_event( kernel_event_t* evt )
	{
		return &evt->object;
	}
#else
	// User-mode event wrapper.
	//
	using user_event_t = ntpp::unique_handle;
	using event_t = user_event_t;
	FORCE_INLINE static void init_event( ntpp::unique_handle* evt, bool auto_reset )
	{
		*evt = ntpp::create_event( { .auto_reset = auto_reset, .state = false } ).value();
	}
	FORCE_INLINE static void clear_event( ntpp::unique_handle* evt, bool for_destroy )
	{
		if ( for_destroy ) return;
		ntpp::reset_event( evt->get() );
	}
	FORCE_INLINE static void signal_event( ntpp::unique_handle* evt )
	{
		ntpp::set_event( evt->get() ).assert();
	}
	FORCE_INLINE static bool wait_for_event( ntpp::unique_handle* evt, int64_t* pinterval )
	{
		return ntpp::wait_for( &evt->handle, 1, nt::wait_type_t::all, pinterval ) == 0ull;
	}
	FORCE_INLINE static bool peek_event( ntpp::unique_handle* evt )
	{
		int64_t ival = 0;
		return wait_for_event( evt, &ival );
	}
	FORCE_INLINE static void* native_event( ntpp::unique_handle* evt )
	{
		return evt->get();
	}
#endif
	
	// Redirect to the real interface.
	//
	static_assert( sizeof( event_type ) >= sizeof( event_t ) );
	void init_event( event_type* event, bool auto_reset )
	{
		init_event( new ( event ) event_t{}, auto_reset );
	}
	void destroy_event( event_type* event )
	{
		clear_event( ( event_t* ) event, true );
		std::destroy_at( ( event_t* ) event );
	}
	void signal_event( event_type* event )
	{
		signal_event( ( event_t* ) event );
	}
	bool peek_event( event_type* event )
	{
		return peek_event( ( event_t* ) event );
	}
	void clear_event( event_type* event )
	{
		return clear_event( ( event_t* ) event, false );
	}
	void* native_event( event_type* event )
	{
		return native_event( ( event_t* ) event );
	}
	[[no_instrument]] NO_INLINE bool wait_for_event( event_type* event, int64_t* pinterval )
	{
		return wait_for_event( ( event_t* ) event, pinterval );
	}

	// Expose the XSTD interface.
	//
	static_assert( sizeof( event_primitive::native ) == sizeof( event_type ) );
	FORCE_INLINE void event_primitive::reset()
	{
		clear_event( ( event_type* ) &native );
	}
	FORCE_INLINE bool event_primitive::peek() const
	{
		return peek_event( ( event_type* ) &native );
	}
	FORCE_INLINE void event_primitive::wait() const
	{
		wait_for_event( ( event_type* ) &native, nullptr );
	}
	FORCE_INLINE bool event_primitive::wait_for( long long milliseconds ) const
	{
		int64_t interval = -( milliseconds * ( 1ms / 100ns ) );
		return wait_for_event( ( event_type* ) &native, &interval );
	}
	FORCE_INLINE void event_primitive::notify()
	{
		signal_event( ( event_type* ) &native );
	}
	FORCE_INLINE event_primitive::event_primitive() { init_event( ( event_type* ) &native, false ); }
	FORCE_INLINE event_primitive::~event_primitive() { destroy_event( ( event_type* ) &native ); }
#endif
};
#endif
#endif