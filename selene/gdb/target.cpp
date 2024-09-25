#include <xstd/intrinsics.hpp>
#include "target.hpp"
#include "stub.hpp"
#include <ntpp.hpp>
#include <sdk/nt/exception_record_t.hpp>
#include "../utility/thread.hpp"
#include "../hooks/inline_hooks.hpp"
#include "../hooks/isr_hooks.hpp"

#if !PROD_BUILD
namespace gdb
{
	FORCE_INLINE static void signal_dbgtrap( nt::ethread_t* thr, thread::context* ctx )
	{
		// Enter shadow guard, acquire global lock.
		//
		thread::shadow_guard _g{ ctx };
		std::unique_lock lock{ gdb::global_lock };

		// If target mismatches, skip signalling.
		//
		auto* target = gdb::get_target();
		if ( !target || &target->process.get()->pcb != thr->tcb.process ) [[unlikely]]
			return;

		// Send the signal.
		//
		// 05 == SIGTRAP
		gdb::send_signal( xstd::fmt::str( "T05thread:%llx", ( uint64_t ) thr->cid.unique_thread ) );

		// Interrupt the process.
		//
		lock.unlock();
		target->interrupt();
	}

	NO_INLINE bool redirect_signal( nt::exception_record_t* record, nt::exframe* xf, nt::trapframe* tf )
	{
		( void ) xf;

		// If it's not caused by a single step or hardware breakpoint, skip.
		//
		if ( record->exception_code != STATUS_SINGLE_STEP )
			return false;

		// Get the thread context.
		//
		nt::ethread_t* thr = ke::get_ethread();
		thread::context* ctx = thread::get_context( thr );

		// If caused by single stepping:
		//
		if ( !thr->tcb.header.active_dr7 || tf->dr6.single_instruction )
		{
			// Skip if not caused by GDB.
			//
			if ( !ctx->gdb.is_single_stepping )
				return false;

			// TODO: Overlapping trap flags.

			// Clear the single stepping flag.
			//
			ctx->gdb.is_single_stepping = false;
		}
		// If caused by debug registers:
		//
		else if ( tf->dr6.breakpoint_condition & ctx->gdb.sdebug_mask )
		{
			// TODO: Overlapping debug registers.
			
			// Set the resume flag.
			//
			tf->rflags.resume_flag = true;
		}
		// Otherwise skip.
		//
		else
		{
			return false;
		}

		// Signal the GDB client.
		//
		signal_dbgtrap( thr, ctx );

		// Skip the actual exception dispatch.
		//
		return true;
	}

	// Called upon user-exit to add hardware breakpoints.
	//
	void on_user_exit( nt::trapframe* tf )
	{
		nt::ethread_t* thr = ke::get_ethread();
		
		// If current GDB target:
		//
		if ( thr->tcb.process == &last_target->pcb ) [[unlikely]]
		{
			thread::context* ctx = thread::get_context( thr );

			// Handle single stepping.
			//
			if ( ctx->gdb.is_single_stepping )
				tf->rflags.trap_flag = true;

			// Handle debug registers.
			//
			tf->dr7.flags &= ~(
				xstd::bit_pdep<uint64_t>( 
					ctx->gdb.sdebug_mask, 
					DR7_LOCAL_BREAKPOINT_0_FLAG | DR7_LOCAL_BREAKPOINT_1_FLAG | DR7_LOCAL_BREAKPOINT_2_FLAG | DR7_LOCAL_BREAKPOINT_3_FLAG 
				)
			);
			if ( global_breakpoints[ 0 ].address )
			{
				// Clean trapframe and thread states.
				//
				ctx->gdb.sdebug_mask = 0;
				if ( !xstd::bit_set( ( volatile uint16_t& ) thr->tcb.header.debug_active, 0 ) || !( tf->dr7.flags & 0xFFFF ) )
				{
					tf->dr0 = 0;
					tf->dr1 = 0;
					tf->dr2 = 0;
					tf->dr3 = 0;
					tf->dr6.flags = 0;
					tf->dr7.flags = 0;
				}

				// Save originals.
				//
				ctx->original_dbg.dr0 = tf->dr0;
				ctx->original_dbg.dr1 = tf->dr1;
				ctx->original_dbg.dr2 = tf->dr2;
				ctx->original_dbg.dr3 = tf->dr3;
				ctx->original_dbg.dr7 = tf->dr7;

				// Emplace each breakpoint in reverse order.
				//
				auto bps = global_breakpoints;
				for ( breakpoint_entry bp : std::views::reverse( bps ) )
				{
					// Skip if null.
					//
					if ( !bp.address )
						continue;

					// Find an empty debug register index.
					//
					size_t idx;
					if ( !tf->dr7.local_breakpoint_0 )
						idx = 0;
					else if ( !tf->dr7.local_breakpoint_1 )
						idx = 1;
					else if ( !tf->dr7.local_breakpoint_2 )
						idx = 2;
					else if ( !tf->dr7.local_breakpoint_3 )
						idx = 3;
					// Allocation failed.
					else
						break;

					// Set the address.
					//
					( &tf->dr0 )[ idx ] = bp.address;

					// Enable local breakpoint.
					//
					tf->dr7.flags |= DR7_LOCAL_BREAKPOINT_0_FLAG << ( idx * 2 );
					
					// Set the new flags.
					//
					uint64_t df = uint64_t( bp.type );
					df |= uint64_t( bp.len ) << 2;
					tf->dr7.flags &= ~( 0xF << ( DR7_READ_WRITE_0_BIT + idx * 4 ) );
					tf->dr7.flags |=    df  << ( DR7_READ_WRITE_0_BIT + idx * 4 );

					// Declare that we enabled shadow debug registers.
					//
					ctx->gdb.sdebug_mask |= 1 << idx;
				}
			}
		}
	}

	// Implement a save debug registers hook to hide shadow debug registers.
	//
	alignas( 64 ) static hook::record ki_save_debug_register_state_hook = {};
	__attribute__((no_caller_saved_registers)) static void hk_ki_save_debug_register_state_r( nt::trapframe* tf )
	{
		tf = xstd::ptr_at( tf, -0x80 );
		auto* ctx = thread::get_context();
		if ( ctx->gdb.sdebug_mask )
		{
			tf->dr0 = ctx->original_dbg.dr0;
			tf->dr1 = ctx->original_dbg.dr1;
			tf->dr2 = ctx->original_dbg.dr2;
			tf->dr3 = ctx->original_dbg.dr3;
			tf->dr7 = ctx->original_dbg.dr7;
		}
	}
	[[gnu::naked]] static void hk_ki_save_debug_register_state()
	{
		using T = hook::record;
		__asm
		{
			call qword ptr [ rip + ki_save_debug_register_state_hook ] T.continue_pos
			mov	rcx, rbp
			jmp	hk_ki_save_debug_register_state_r
		}
	}

	// Initializes hooks for the signal catching.
	//
	void init_signal()
	{
		hook::add( &ki_save_debug_register_state_hook, &ki::save_debug_register_state, &hk_ki_save_debug_register_state );
	}
};

#else
namespace gdb {
	void on_user_exit( nt::trapframe* ) {}
	bool redirect_signal( nt::exception_record_t*, nt::exframe*, nt::trapframe* ) { return false; }
};
#endif