#include "thread.hpp"
#include <xstd/async.hpp>
#include <sdk/etwp/api.hpp>
#include <xstd/random.hpp>
#include "../hooks/inline_hooks.hpp"
#include "../hooks/patch_manager.hpp"
#include "../chost/manager.hpp"

namespace thread
{
	// Initializers and destructors for thread context.
	//
	FORCE_INLINE static void initialize_for( nt::ethread_t* thr, bool is_system_thread )
	{
		// Allocate and initialize the context.
		//
		auto ctx = std::make_unique<context>();
		ctx->owner = thr;

		// Assign the context.
		//
		set_context( thr, std::move( ctx ) );

		// If user-mode thread, notify the component host.
		//
		//if ( !is_system_thread )
		//chost::notify_thread( thr, true );
	}
	FORCE_INLINE static void delete_for( nt::ethread_t* thr, bool is_system_thread )
	{
		// If user-mode thread, notify the component host.
		//
		//if ( !is_system_thread )
		//	chost::notify_thread( thr, false );

		// Delete the context.
		//
		set_context( thr, nullptr );
	}

	// Trapframe obfuscation.
	//
#if 1
	static constexpr auto tf_cfk =  0xb52775a97ce222d0;
	static const uint64_t tf_auto_fake_rip = 0x5 + ( uint64_t ) &ki::swap_context;
	static const auto tf_confusion_key = xstd::make_srandom<uint64_t>();

	FORCE_INLINE void confuse_trapframe( nt::ethread_t* thr, context* ctx, nt::trapframe* tf )
	{
		tf->rdi = 0;
		if ( !tf_confusion_enabled ) return;
		if ( tf->rip < km_va_start ) return;

		any_ptr legal_stack_limit;

		// If there is no thread context yet, assume we know nothing about the stack.
		//
		if ( !ctx ) [[unlikely]]
		{
			legal_stack_limit = nullptr;
		}
		// If there is context:
		//
		else
		{
			// Use the stack limit saved if there is one.
			//
			legal_stack_limit = ctx->top_level_caller_frame;

			// Otherwise try to pick a valid stack limit.
			//
			if ( !legal_stack_limit )
			{
				// TODO: Maybe be more pessimistic and just yolo start from stack top?
				//
				any_ptr it = xstd::align_down( tf->rsp, 0x10 ) + 8;
				while ( thr->tcb.stack_limit <= it && ( it + 0x20 ) <= thr->tcb.initial_stack )
				{
					if ( ntpp::ntoskrnl_range.contains( *( uint64_t* ) it ) )
					{
						legal_stack_limit = it;
						break;
					}
					else
					{
						it += 0x10;
					}
				}
			}
		}

		// If there is a legal stack frame decided:
		//
		uint64_t prev_rsp, prev_rip;
		if ( legal_stack_limit )
		{
			prev_rsp = std::exchange( tf->rsp, legal_stack_limit + 8 );
			prev_rip = std::exchange( tf->rip, *( uint64_t* ) legal_stack_limit );
			tf->seg_ss.flags = 0x18;
			tf->seg_cs.flags = 0x10;
		}
		else
		{
			prev_rsp = std::exchange( tf->rsp, xstd::ptr_at( thr->tcb.initial_stack, -0x78 ) );
			prev_rip = std::exchange( tf->rip, tf_auto_fake_rip );
			tf->seg_ss.flags = 0x18;
			tf->seg_cs.flags = 0x10;
		}

		// Set magical fields.
		//
		tf->last_branch_from_rip = prev_rsp ^ tf_cfk;
		tf->last_branch_to_rip = prev_rip ^ tf_cfk;
		tf->last_exception_from_rip = tf_confusion_key + tf->rbp;
	}
	FORCE_INLINE void mark_trapframe_not_confused( nt::trapframe* tf )
	{
		tf->last_exception_from_rip = 0;
	}
	FORCE_INLINE bool enlighten_trapframe( nt::trapframe* tf )
	{
		uint64_t key = tf->last_exception_from_rip - tf->rbp;
		if ( key != tf_confusion_key ) [[likely]]
			return false;

		uint64_t prev_rsp = tf->last_branch_from_rip ^ tf_cfk;
		uint64_t prev_rip = tf->last_branch_to_rip ^ tf_cfk;
		if ( prev_rip > km_va_start )
		{
			tf->rip = prev_rip;
			tf->rsp = prev_rsp;
			tf->seg_ss.flags = 0x18;
			tf->seg_cs.flags = 0x10;
			tf->last_branch_from_rip = 0;
			tf->last_branch_to_rip = 0;
			tf->last_exception_from_rip = 0;
			return true;
		}
		return false;
	}
#else
	FORCE_INLINE void confuse_trapframe( nt::ethread_t* thr, context* ctx, nt::trapframe* tf ) {}
	FORCE_INLINE void mark_trapframe_not_confused( nt::trapframe* tf ) {}
	FORCE_INLINE bool enlighten_trapframe( nt::trapframe* tf ) { return false; }
#endif


	// Thread book-keeping hooks.
	//
	alignas( 64 ) static hook::record psp_insert_thread_hook;
	[[must_tail]] MS_SSE2AVX FLATTEN static uint64_t hk_psp_insert_thread( nt::ethread_t* thread, nt::eprocess_t* proc, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t u6, uint64_t u7, uint64_t u8, uint64_t u9, uint64_t u10 )
	{
		// Initialize the thread and call out to insert thread.
		//
		{
			shadow_guard _g{};
			bool is_system = proc == ntpp::get_initial_system_process();
			initialize_for( thread, is_system );
		}
		[[clang::musttail]] return psp_insert_thread_hook.next<decltype( &hk_psp_insert_thread )>()( thread, proc, u1, u2, u3, u4, u5, u6, u7, u8, u9, u10 );
	}

	alignas( 64 ) static hook::record psp_thread_delete_hook;
	[[must_tail]] MS_SSE2AVX FLATTEN static uint64_t hk_psp_thread_delete( nt::ethread_t* thread )
	{
		{
			shadow_guard _g{};

			// Delete the context and callout.
			//
			delete_for( thread, thread->tcb.system_thread );
		}
		return psp_thread_delete_hook( thread );
	}

	// ETW hiding hooks.
	//
	alignas( 64 ) static hook::record etwp_reserve_trace_buffer_hook;
	[[must_tail]] MS_SSE2AVX static uint64_t hk_etwp_reserve_trace_buffer( uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5, uint64_t u6 )
	{
		if ( context* ctx = get_context(); ctx && ctx->active() )
			return 0;
		else
			return etwp_reserve_trace_buffer_hook( u1, u2, u3, u4, u5, u6 );
	}

	// Stack information.
	//
	alignas( 64 ) static hook::record ke_query_stack_information_ex_hook;
	[[must_tail]] MS_SSE2AVX static uint64_t hk_ke_query_stack_information_ex( uint8_t* ptr, nt::kernel_stack_limits_t* type, uint8_t** limit, uint8_t** base )
	{
		{
			thread::shadow_guard guard{};
			if ( context* ctx = get_context(); ctx && ctx->shadow_stack )
			{
				xstd::numeric_range range{ ctx->shadow_stack, ctx->shadow_stack + ctx->stack_size };
				if ( range.contains( ptr ) )
				{
					*base = range.end();
					*limit = range.begin();
					if ( ctx->owner->tcb.misc_flags & 0x1000 )
						*type = nt::kernel_stack_limits_t::expanded_stack_limits;
					else if ( ctx->owner->tcb.callback_nesting_level )
						*type = nt::kernel_stack_limits_t::win32k_stack_limits;
					else
						*type = nt::kernel_stack_limits_t::normal_stack_limits;
					return true;
				}
			}
		}
		return ke_query_stack_information_ex_hook( ptr, type, limit, base );
	}

	// APC hiding.
	//
	alignas( 64 ) static hook::record ki_deliver_apc_hook;
	[[must_tail]] MS_SSE2AVX static uint64_t hk_ki_deliver_apc( nt::mode_t mode, nt::exframe* ef, nt::trapframe* tf )
	{
		// If we're delivering kernel-mode APCs:
		//
		if ( mode != nt::mode_t::user_mode && !tf )
		{
			if ( auto* ctx = thread::get_context(); ctx && ctx->active() )
			{
				ia32::intn( 0x1F );
				return 0;
			}
		}
		[[clang::musttail]] return ki_deliver_apc_hook.next<decltype( &hk_ki_deliver_apc )>()( mode, ef, tf );
	}

	// Initializes thread local contexes and stack hiding.
	//
	NO_INLINE void init()
	{
		// Add the hooks.
		//
		hook::patch( &etwp::trace_lost_event, { 0xC3 } );
		hook::add( &etwp_reserve_trace_buffer_hook, &etwp::reserve_trace_buffer, &hk_etwp_reserve_trace_buffer );
		hook::add( &ki_deliver_apc_hook, &ki::deliver_apc, &hk_ki_deliver_apc );
		hook::add( &psp_insert_thread_hook, &psp::insert_thread, &hk_psp_insert_thread );
		hook::add( &psp_thread_delete_hook, &psp::thread_delete, &hk_psp_thread_delete );

		if ( sdk::exists( ke::query_current_stack_information_ex ) )
			hook::add( &ke_query_stack_information_ex_hook, &ke::query_current_stack_information_ex, &hk_ke_query_stack_information_ex );

		// Initialize TLS for threads that did not have a context.
		//
		for ( auto&& process : ntpp::process_list{} )
			for( auto&& thread : ntpp::thread_list{ process } )
				if ( !get_context( thread ) )
					initialize_for( thread, thread->tcb.system_thread );
	}
};
