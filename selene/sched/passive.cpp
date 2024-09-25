#include "passive.hpp"
#include "irq.hpp"
#include <deque>
#include <xstd/event.hpp>
#include <xstd/bitwise.hpp>
#include <xstd/random.hpp>
#include <mcrt/interface.hpp>
#include <sdk/ke/api.hpp>
#include <sdk/nt/mode_t.hpp>
#include <sdk/nt/dispatcher_header_t.hpp>
#include <ntpp.hpp>
#include <xstd/spinlock.hpp>
#include <xstd/async.hpp>
#include <ia32.hpp>
#include "../misc/crashdump.hpp"
#include "../utility/thread.hpp"
#include <xstd/intrinsics.hpp>
#include <mcrt/interface.hpp>
#include <xstd/thread_pool.hpp>
#include <sdk/pop/api.hpp>

namespace scheduler::passive
{
	// Creates a hidden thread.
	//
	template<typename F, typename... Tx>
	static void create_hidden_thread( std::span<const ntpp::ref<nt::ethread_t>> critical_threads, F&& fn, Tx&&... args ) {
		static constexpr auto read_tib = [ ] ( nt::ethread_t* thread ) -> std::optional<os::tib_t>
		{
			os::tib_t tib = {};
			if ( !thread || !ntpp::read_memory( ob::current_process(), &tib, thread->tcb.teb, sizeof( os::tib_t ) ) )
				return std::nullopt;
			if ( !tib.stack_base || !tib.stack_limit || tib.stack_base >= um_va_end || tib.stack_limit >= um_va_end )
				return std::nullopt;
			return tib;
		};
		fassert( !critical_threads.empty() );

		ntpp::scope_mode _g{};
		while( true )
		{
			// Pick a random thread.
			//
			ntpp::ref ref = xstd::pick_randomi( critical_threads );

			// Skip if the thread is dead.
			//
			ntpp::shared_lock rundown{ &ref->rundown_protect };
			if ( !rundown.handle() )
				continue;

			// Attach to the process.
			//
			ntpp::scope_process proc{ ref->tcb.process };

			// Read the original TIB.
			//
			auto tib = read_tib( ref );
			if ( !tib )
				continue;
			
			// Create a suspended thread, skip if we fail to create it
			//
			void* handle = nullptr;
			
			// TODO: Properly bypass PspCallThreadNotifyRoutines
			os::create_thread_ex(
				&handle,
				MAXIMUM_ALLOWED,
				nullptr,
				ob::current_process(),
				ref->win32_start_address,
				ref->tcb.first_argument,
				true,
				0,
				0,
				0,
				nullptr
			);
			if ( !handle )
				continue;
			
			// Resolve the thread.
			//
			auto ref_new = ntpp::resolve_handle<nt::ethread_t>( handle );
			ntpp::close_handle( handle, true );

			// Read the new TIB.
			//
			auto tib_new = read_tib( ref_new );
			if ( !tib_new )
			{
				ntpp::terminate_thread( ref_new );
				continue;
			}

			// Read the stack bases from the TEBs.
			//
			ref_new->start_address = ref->start_address;
			ref_new->win32_start_address = ref->win32_start_address;
			ref_new->create_time = ref->create_time + int64_t( xstd::make_random<double>( -5, +5 ) * ( 1s / 100ns ) );

			// Copy the data.
			//
			int page = 1;
			for ( ; page <= 3; page++ )
				if ( !ntpp::read_memory( ob::current_process(), xstd::ptr_at( tib_new->stack_base, -0x1000 * page ), xstd::ptr_at( tib->stack_base, -0x1000 * page ), 0x1000 ) )
					break;

			// Set the fake stack details.
			//
			auto* ctx = thread::get_context( ref_new );
			ctx->fake_um_frame = {
				xstd::ptr_at( tib_new->stack_base, -xstd::align_up( xstd::make_random( 0x300 * page, 0xB00 * page ), 0x10 ) + 0x8 ),
				ref->win32_start_address
			};

			// Call an APC and resume the thread.
			//
			[ ]( nt::ethread_t* thread, auto run ) -> xstd::async_task
			{
				// Interrupt execution.
				//
				fassert( co_await ntpp::call_apc( thread ) );
				auto* ctx = thread::get_context( thread );

				// Create the fake stack frame.
				//
				struct temp_frame
				{
					void* ret_addr;
					su::mframe_t machine_frame;
				};
				auto* tmp = ( temp_frame* ) _AddressOfReturnAddress();
				tmp->ret_addr = ( void* ) &ki::apc_interrupt; // TODO: Fake as fuck.
				tmp->machine_frame.rflags.flags = 0x201;
				tmp->machine_frame.rip = ctx->fake_um_frame[ 1 ];
				tmp->machine_frame.seg_cs.flags = 0x33;
				tmp->machine_frame.rsp = ctx->fake_um_frame[ 0 ];
				tmp->machine_frame.seg_ss.flags = 0x2b;

				// Set the top level caller frame.
				//
				ctx->top_level_caller_frame = &tmp->ret_addr;

				// Reset thread state.
				//
				thread->tcb.apc_state.in_progress_flags = 0;
				thread->tcb.trap_frame = ntpp::get_base_trapframe( thread );

				// Raise IO priority.
				//
				ntpp::set_io_priority( thread, io::priority_hint_t::io_priority_high );

				// Lower IRQL and continue from the worker routine.
				//
				ia32::set_irql( PASSIVE_LEVEL );
				thread->tcb.kernel_stack_resident = true;
				thread->tcb.enable_stack_swap = false;
				thread->tcb.system_thread = false;
				thread->hard_errors_are_disabled = true;
				thread->tcb.termination_apc_request = true;
				//std::atomic_ref{ thread->rundown_protect.count }.fetch_add( 2 );
				run();
				co_return;
			}( ref_new.get(), std::bind( std::forward<F>( fn ), std::forward<Tx>( args )... ) );

			if ( ntpp::resume_thread( ref_new ) )
				break;
			ntpp::terminate_thread( ref_new );
			continue;
		}
	}

	// Worker traits.
	//
	struct worker : xstd::worker_base<worker> {
		// Traits of the thread-pool.
		//
		static constexpr bool is_lazy = false;
		static size_t get_ideal_worker_count() {
			return std::clamp<size_t>( 2 * std::thread::hardware_concurrency(), 8, 64 );
		}
		static void create_thread( void( __cdecl* cb )( void* ), void* arg, std::span<const ntpp::ref<nt::ethread_t>> critical_threads ) {
			create_hidden_thread( critical_threads, cb, arg );
		}
		FORCE_INLINE static int64_t timestamp( int64_t delta_ns ) {
			return crt::get_ticks() + ( delta_ns / 100 );
		}

		// Worker hooks.
		//
		xstd::event_primitive event = {};
		nt::ethread_t* thread = ke::get_ethread();
		worker() {}

		FORCE_INLINE void sleep( uint32_t milliseconds ) {
			ntpp::sleep( milliseconds * 1ms );
		}
		FORCE_INLINE void halt() {
			auto reason = xstd::pick_random( {
				nt::kwait_reason_t::wr_queue,
				nt::kwait_reason_t::wr_lpc_receive,
				nt::kwait_reason_t::wr_lpc_reply,
				nt::kwait_reason_t::wr_delay_execution
			} );
			ke::wait_for_single_object(
				&event,
				reason,
				(char) nt::mode_t::kernel_mode,
				false,
				nullptr 
			);
			event.reset();
		}
		FORCE_INLINE void execute( xstd::work_item item ) {
			thread->hard_errors_are_disabled = true;
			thread->tcb.previous_mode = (char) nt::mode_t::kernel_mode;
			item();
			thread->tcb.previous_mode = (char) nt::mode_t::user_mode;
			dassert( ia32::get_effective_irql() == PASSIVE_LEVEL );
			dassert( !thread->tcb.combined_apc_disable );
		}
		FORCE_INLINE void signal() {
			event.notify();
		}
	};
	static xstd::thread_pool<worker> g_threadpool = {};

	// Deferred queue task for IRQL > DISPATCH_LEVEL.
	//
	using work_args = std::tuple<void( __cdecl* )( void* ), void*, int64_t, xstd::event_handle>;
	static scheduler::task_ref         deferred_push_task;
	static xstd::xspinlock<HIGH_LEVEL> deferred_push_lock;
	static std::vector<work_args>      deferred_push_list;
	COLD NO_INLINE void push_deferred( irql_t prev_irql, work_args args )
	{
		ia32::set_irql( HIGH_LEVEL );
		{
			std::lock_guard _g{ deferred_push_lock.unwrap() };
			bool kickoff = deferred_push_list.empty();
			deferred_push_list.emplace_back( args );
			if ( kickoff ) {
				scheduler::queue_dpc( [] {
					size_t it = 0;
					while( true ) {
						work_args args;
						{
							std::lock_guard _g{ deferred_push_lock };
							if ( deferred_push_list.size() >= it ) {
								deferred_push_list.clear();
								break;
							} else {
								args = deferred_push_list[it++];
							}
						}
						std::apply( &selene_add_chore, args );
					}
				}, true );
			}
		}
		ia32::set_irql( prev_irql & 0xF );
	}

	// Initializes the worker pool.
	//
	NO_INLINE void init()
	{
		*(uint8_t*) &pop::shutdown_cleanly = 0;
		*(uint8_t*) &ps::continue_waiting = 0;

		// Make a list of critical process threads.
		//
		std::vector<ntpp::ref<nt::ethread_t>> critical_threads;
		{
			for ( nt::eprocess_t* proc : ntpp::process_list{} )
			{
				// Filter to critical csrss/winlogon.
				//
				if ( !proc->break_on_termination )
					continue;
				if ( memcmp( proc->image_file_name.data(), "csrs", 4 ) && memcmp( proc->image_file_name.data(), "winl", 4 ) )
					continue;

				// Reference all alive threads.
				//
				for( nt::ethread_t* thr : ntpp::thread_list{ proc } )
					if ( !ntpp::is_exiting( thr ) )
						if ( auto ref = ntpp::make_safe_reference( thr ) )
							critical_threads.emplace_back( std::move( ref ) );
			}
		}

		// Start all workers and set the initialized flag.
		//
		initialized = true;
		g_threadpool.start( std::span{ critical_threads } );
	}
};


extern "C" void __cdecl selene_add_chore( void( __cdecl * cb )( void* ), void* arg, int64_t timeout, xstd::event_handle evt )
{
	using namespace scheduler::passive;
	if ( auto prev = ia32::get_effective_irql(); prev > DISPATCH_LEVEL ) [[unlikely]] {
		push_deferred( prev, { cb, arg, timeout, evt } );
	} else {
		g_threadpool( cb, arg, timeout, evt );
	}
}