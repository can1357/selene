#include "proxy.hpp"
#include <trace/client.hpp>
#include <xstd/sha1.hpp>
#include <xstd/async.hpp>
#include <ntpp.hpp>
#include <cfw/tls.hpp>
#include "../utility/thread.hpp"
#include "../misc/crashdump.hpp"
#include "../sched/irq.hpp"
#include "../hooks/patch_manager.hpp"
#include "../hooks/inline_hooks.hpp"
#include "../gdb/target.hpp"
#include "su3.hpp"
#include "vm.hpp"

namespace su
{
	// Hook for the process initialization callback.
	//
	alignas( 64 ) static hook::record mm_initialize_process_address_space_hook = {};
	[[must_tail]] MS_SSE2AVX static uint64_t hk_mm_initialize_process_address_space( nt::eprocess_t* process, nt::eprocess_t* parent, uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3 )
	{
		{
			thread::shadow_guard _g{};

			// Disable KVA shadowing.
			//
			if ( !process->address_policy_frozen )
				process->pcb.address_policy = 1; /*NoKvaShadow*/

			// Evaluate the process later.
			//
			xstd::chore( [process = ntpp::ref{ process }]() {
				if ( ntpp::is_exiting( process ) || ntpp::did_rundown( &process->rundown_protect ) )
					return;
				//chost::evaluate_process( process, false );
			}, 2s );
		}
		return mm_initialize_process_address_space_hook( process, parent, u0, u1, u2, u3 );
	}

	// Hook for handling context swap within the VM.
	//
	alignas( 64 ) static hook::record ki_swap_context_hook = {};
	NO_AVX static uint64_t hk_ki_swap_context( nt::ethread_t* current_thread, nt::ethread_t* next_thread, uint32_t wait_irql )
	{
		auto swap = ki_swap_context_hook.next<decltype( &hk_ki_swap_context )>();
		ia32::disable();
		if ( auto vm = get_vm(); vm->is_active() ) [[unlikely]] {
			return r3::vm_swap_context( vm, current_thread, next_thread, wait_irql, ( r3::fn_swap_context ) swap );
		}
		ia32::enable();
		[[clang::musttail]] return swap( current_thread, next_thread, wait_irql );
	}

	// Hook for preventing stack switching within the shadow stack.
	//
	alignas( 64 ) static hook::record ki_expand_kernel_stack_and_callout_switch_stack_hook = {};
	NO_AVX static uint64_t hk_ki_expand_kernel_stack_and_callout_switch_stack( uint64_t u0, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint64_t u5 )
	{
		// If we are in the shadow stack, ignore the expansion and just call into the callback.
		//
		auto* ctx = thread::get_context();
		if ( ctx && ctx->shadow_stack && ctx->shadow_stack <= _AddressOfReturnAddress() && _AddressOfReturnAddress() <= ( ctx->shadow_stack + ctx->stack_size ) ) {
			return STATUS_CALLBACK_INVOKE_INLINE;
		}

		// Otherwise forward.
		//
		[[clang::musttail]] return ki_expand_kernel_stack_and_callout_switch_stack_hook.next<decltype( &hk_ki_expand_kernel_stack_and_callout_switch_stack )>()( u0, u1, u2, u3, u4, u5 );
	}

	COLD NO_INLINE static bool report_um_crash( nt::exception_record_t* record, nt::exframe* xf, nt::trapframe* tf ) {
		ia32::scope_irql<HIGH_LEVEL> irql{};
		if ( auto ctx = thread::get_context() ) {
			if ( auto& fw = ctx->fw ) {
				if ( auto& pcb = fw->pcb; pcb && pcb->ex_reports.fetch_add( 1 ) < 8 ) {
					irql.unlock();
					auto trace = crashdump::trace_stack( { tf, xf }, true );
					trace->cr8 = ia32::get_effective_irql( tf->rflags );
					trace->cr2 = tf->fault_address;
					trace->exception_code = record->exception_code;
					trace->exception_address = ( uint64_t ) record->exception_address;
					trace->exception_arguments = { record->exception_information.data(), record->exception_information.data() + record->number_parameters };
					trace->exception_message = "User-mode crash."_es;
					scheduler::queue_async(
						[ trace = std::move( trace ) ] { submit_crashdump_aux( xstd::serialize( *trace ) ); },
						scheduler::priority::dpc, scheduler::shorthand::all, 0, true
					);
				}
			}
		}
		return false;
	}

	alignas( 64 ) static hook::record ki_dispatch_exception_hook = {};
	[[no_instrument]] MS_SSE2AVX static void hk_ki_dispatch_exception( nt::exception_record_t* record, nt::exframe* xf, nt::trapframe* tf, uint8_t mode, bool first_chance )
	{
		if ( mode == ( uint8_t ) nt::mode_t::user_mode ) {
			// Skip if succesfully redirected.
			//
			bool last_chance = !first_chance ||
				record->exception_code == STATUS_FAIL_FAST_EXCEPTION ||
				record->exception_code == STATUS_STACK_BUFFER_OVERRUN;
			if ( last_chance ) {
				if ( report_um_crash( record, xf, tf ) )
					return;
			} else {
				if ( gdb::redirect_signal( record, xf, tf ) )
					return;
			}
		}
		[[clang::musttail]] return ki_dispatch_exception_hook.next<decltype( &hk_ki_dispatch_exception )>()( record, xf, tf, mode, first_chance );
	}

	namespace r3
	{
		// Hook for the kernel exits.
		//
		extern void on_user_exit( nt::trapframe* tf )
		{
			auto thr = ke::get_ethread();
			if ( auto* ctx = thread::get_context( thr ) )
				vmenter( tf, thr, ctx );
		}

		// Initializes the proxy responsible for redirection of control flow.
		//
		NO_INLINE void init()
		{
			// Add the hooks.
			//
			hook::add( &ki_swap_context_hook, &ki::swap_context, &hk_ki_swap_context );
			hook::add( &mm_initialize_process_address_space_hook, &mm::initialize_process_address_space, &hk_mm_initialize_process_address_space );
			hook::add( &ki_expand_kernel_stack_and_callout_switch_stack_hook, &ki::expand_kernel_stack_and_callout_switch_stack, &hk_ki_expand_kernel_stack_and_callout_switch_stack );
			hook::add( &ki_dispatch_exception_hook, &ki::dispatch_exception, &hk_ki_dispatch_exception );
		}
	};
};
