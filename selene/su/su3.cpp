#include "su3.hpp"
#include "vm.hpp"
#include "proxy.hpp"
#include "../utility/thread.hpp"
#include <sdk/os/km/api.hpp>
#include <cfw/library.hpp>
#include "../misc/crashdump.hpp"
#include "vdbg.hpp"

#pragma GCC diagnostic ignored "-Winterrupt-service-routine"

extern "C" void __crt_mode_switch_guard_return();

namespace su3
{
	static constexpr bool ecc_debug = is_debug_build() && true;

	using namespace su;
	FORCE_INLINE static thread::context* get_thread_context_from_vm( vm_context* vm = get_vm() ) { return ( thread::context* ) vm->vmm_ud; }
	FORCE_INLINE static uint64_t get_imgbase_for_report( thread::context* ctx )
	{
		if ( !ctx ) return 0;
		if ( auto& fw = ctx->fw ) {
			if ( auto& pcb = fw->pcb ) {
				return ( uint64_t ) pcb->image_base;
			}
		}
		return 0;
	}

	// TODO: NMI == big meme?
	//
	[[gnu::naked, gnu::noinline]] static void callout_helper()
	{
		using ftf = cfw::trapframe;
		__asm
		{
			// Save the non-volatile context of the caller.
			//
			mov       rbp,                [ rsp ] trapframe.ctx_1
			mov       rcx,                rbp
			vmovups   [ rbp ] ftf.ymm6,   ymm6
			vmovups   [ rbp ] ftf.ymm7,   ymm7
			vmovups   [ rbp ] ftf.ymm8,   ymm8
			vmovups   [ rbp ] ftf.ymm9,   ymm9
			vmovups   [ rbp ] ftf.ymm10,  ymm10
			vmovups   [ rbp ] ftf.ymm11,  ymm11
			vmovups   [ rbp ] ftf.ymm12,  ymm12
			vmovups   [ rbp ] ftf.ymm13,  ymm13
			vmovups   [ rbp ] ftf.ymm14,  ymm14
			vmovups   [ rbp ] ftf.ymm15,  ymm15
			mov       [ rbp ] ftf.rsi,    rsi
			mov       [ rbp ] ftf.rdi,    rdi
			mov       [ rbp ] ftf.rbx,    rbx
			mov       [ rbp ] ftf.r12,    r12
			mov       [ rbp ] ftf.r13,    r13
			mov       [ rbp ] ftf.r14,    r14
			mov       [ rbp ] ftf.r15,    r15

			// Change the stack and callout.
			//
			mov       rsp,                [ rsp ] trapframe.ctx_0
			sti
			call      [ rbp ] ftf.ctx_0
			cli

			// Propagate the result, call the final function.
			//
			mov       rcx,                rbp
			mov       rdx,                rax
			call      [ rcx ] ftf.ctx_1
			int3
			ud2
		}
	}

	// Calls-out to the framework.
	//
	template<typename R, xstd::StatelessLambda ResumeFn>
	static void callout_fw( trapframe* tf,
									R( __stdcall* fn )( cfw::trapframe* ),
									[[maybe_unused]] ResumeFn, // void(vm, TF, R)
									uint64_t uctx = 0, uint64_t uctx2 = 0 )
	{
		// Get thread context and setup the trapframe.
		// TODO:
		// - CHECK STACK OVERFLOW!
		//
		auto* ctx = get_thread_context_from_vm( tf->vmcs );
		auto* thr = ctx->owner;
		if ( !ctx->entry_depth++ ) {
			ctx->watchdog_timer = 0;
			ctx->shadow_stack_initial->previous.initial_stack = ( uint64_t ) thr->tcb.initial_stack;
		}

		cfw::trapframe* ctf = std::prev( ( cfw::trapframe* ) ( ctx->shadow_stack_base - 0x28 ) );
		ctf->prev = std::exchange( ctx->trapframe, ctf );

		// Save last user RSP in context if relevant.
		//
		if ( tf->seg_cs.request_privilege_level )
			ctx->last_um_stack_frame = xstd::align_down( tf->rsp - 0x18, 0x10 );

		// Set the APC mask.
		//
		fassert( std::exchange( thr->tcb.combined_apc_disable, 0xFFFFFFFF ) == 0 );

		// Save the new new stack pointer and the callbacks into context slots.
		//
		ctf->ctx_0 = ( uint64_t ) fn;
		ctf->ctx_1 = ( uint64_t ) +[ ] ( cfw::trapframe* tf, R result ) FLATTEN
		{
			auto* thr = ke::get_ethread();

			// Validate target.
			//
			if ( !mem::is_cannonical( tf->rip ) ) [[unlikely]] {
				cfw::report_error( "Resuming to non-cannonical address."_ss );
				cfw::exit();
			}

			// Reset the APC mask.
			//
			if ( std::exchange( thr->tcb.combined_apc_disable, 0 ) != 0xFFFFFFFF ) [[unlikely]] {
				cfw::report_error( "Invalid APC mask on resume."_ss );
				cfw::exit();
			}

			// Adjust thread context.
			//
			auto* ctx = thread::get_context( thr );
			ctx->entry_depth--;
			ctx->trapframe = tf->prev;

			// Fix kernel gsbase on the trapframe and call resume helper.
			//
			auto* vm = get_vm();
			tf->kernel_gs_base = ( uint64_t ) vm->kpcr;
			return ResumeFn{}( vm, tf, result );
		};
		ctf->ctx_2 = uctx;
		ctf->ctx_3 = uctx2;

		// Copy the trapframe over in a fast manner.
		//
		constexpr size_t copy_length = offsetof( trapframe, machine_frame ) - offsetof( trapframe, gs_base ) + sizeof( mframe_t );
		constexpr size_t copy_length2 = offsetof( cfw::trapframe, machine_frame ) - offsetof( cfw::trapframe, gs_base ) + sizeof( mframe_t );
		static_assert( copy_length == copy_length2, "Invalid trapframe configuration." );
		xstd::trivial_copy_n<copy_length>( &ctf->gs_base, &tf->gs_base );

		// Write the context for the helper and change the linked routine.
		//
		tf->ctx_0 = xstd::align_down( uint64_t( ctf ) - 0x8, 0x10 );
		tf->ctx_1 = ctf;
		tf->retptr() = &callout_helper;
	}

	// Returns a specific trapframe from usermode.
	//
	template<typename T>
	FORCE_INLINE static void return_from_um( T* tf, thread::context* ctx, thread::um_jump_frame* frame )
	{
		// Unlink the frame.
		//
		ctx->prev_um_frame =       frame->prev;
		ctx->shadow_stack_base =   frame->prev_km_stack_frame;
		ctx->last_um_stack_frame = frame->prev_um_stack_frame;

		// Write the return gate.
		//
		tf->rip = ( any_ptr ) &__crt_mode_switch_guard_return;
		tf->rsp = ( any_ptr ) frame;
		tf->seg_cs = host_seg_r0_code;
		tf->seg_ss = host_seg_r0_data;

		// Restore APC state, fix trapframe state, disable SMAP.
		//
		ctx->owner->tcb.combined_apc_disable = 0xFFFFFFFF;
		tf->guest_level = false;
		if ( host_has_smap() )
			tf->rflags.alignment_check_flag = true;
		tf->rflags.direction_flag = false;
	}

	// Attempts to find an exception handler to forward the exception to.
	//
	FORCE_INLINE static cfw::try_catch_block* find_ex_handler( thread::context* ctx, bool guest_level, interrupt_type type )
	{
		uint64_t mask = 1ull << ( size_t( type ) + ( guest_level ? 0 : 32 ) );
		auto* eblk = ctx->fw->active_try_catch;
		int32_t depth = ctx->entry_depth;
		while ( true )
		{
			if ( !eblk || eblk->prev_depth != depth )
				return nullptr;
			if ( eblk->filter & mask )
				return eblk;
			else
				eblk = eblk->prev;
		}
	}

	// Forwards an exception on the trapframe to the try catch block given.
	//
	template<typename Tf>
	FORCE_INLINE static void forward_ex_handler( cfw::try_catch_block* eblk, Tf* tf, thread::context* ctx, bool guest_level, interrupt_type type )
	{
		// Write the exception details.
		//
		switch ( type )
		{
			case interrupt_type::debug:          eblk->exception_context = tf->error_code; break;
			case interrupt_type::page_fault:     eblk->exception_context = tf->fault_address; break;
			case interrupt_type::native_syscall: eblk->exception_context = tf->r10; break;
			default:                             eblk->exception_context = tf->error_code; break;
		}
		eblk->exception_address = tf->rip;
		eblk->exception_type = type;

		// If exception happened in user-mode, return from it first.
		//
		if ( guest_level )
			return_from_um( tf, ctx, ctx->prev_um_frame );

		// Update the registers and mark handled.
		//
		tf->rbp = eblk->rbp;
		tf->rax = eblk->rbx; /*!*/
		tf->rsp = eblk->rsp;
		tf->rip = eblk->rip;
	}

	// Raises a module error.
	//
	COLD static void raise_error [[noreturn]] ( trapframe* tf )
	{
		if constexpr ( is_debug_build() ) {
			xstd::log( " ### Unexpected Fault ###\n" );
			isr_print_debug( tf );
		}

		auto trace = crashdump::trace_stack( tf );
		trace->exception_message = "Unexpected trap"_es;
		trace->exception_code = ( uint8_t ) tf->type;
		trace->exception_arguments = { tf->error_code, ( uint64_t ) tf->fault_address };
		trace->cr8 = ia32::get_effective_irql( tf->rflags );
		trace->cr2 = tf->fault_address;

		auto* ctx = get_thread_context_from_vm( tf->vmcs );
		if ( !ctx || !ctx->trapframe ) {
			crashdump::bugcheck( trace.get(), 0xce, tf->rip );
		} else {
			//chost::report_error( std::move( trace ), ( uint64_t ) tf, get_imgbase_for_report( ctx ) );
			//chost::unload_exit( true, session_state::exit_crash );
			unreachable();
		}
	}
	__attribute__((interrupt,__no_split__)) static void reenter_vm_from_high_irql( mframe_t* );

	// External-interrupt handler.
	//
	template<bool GuestLevel>
	static void isr_external()
	{
		// Reference the trapframe and the VM.
		//
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;

		assume( tf->guest_level == GuestLevel );

		// If a callout is interrupted:
		//
		if constexpr ( !GuestLevel )
		{
			auto* ctx = get_thread_context_from_vm( vm );
			auto* thr = ctx->owner;

			// Save the mframe.
			//
			auto* utf = ctx->trapframe;
			fassert( !ctx->interrupted_mframe );
			ctx->interrupted_mframe.emplace( tf->machine_frame );

			// If passive level, inject as if it was interrupting the original thread.
			//
			if ( ia32::get_effective_irql( tf->rflags ) == PASSIVE_LEVEL && thr->tcb.combined_apc_disable == 0xFFFFFFFF )
			{
				// Inject as if it was interrupting the user-mode.
				//
				tf->machine_frame =  utf->machine_frame;
				tf->guest_level =    true;
				tf->gs_base =        utf->gs_base;
				tf->kernel_gs_base = ( uint64_t ) vm->kpcr;
				dassert( tf->machine_frame.seg_cs.request_privilege_level != 0 );
			}
			else
			{
				// Switch to kernel stack and allocate space for the old frame.
				//
				tf->rip = ( uint64_t ) &reenter_vm_from_high_irql;
				tf->rsp = xstd::align_down( uint64_t( ctx->owner->tcb.initial_stack ) - 0x100 - sizeof( mframe_t ), 0x10 );
				( ( mframe_t* ) tf->rsp )->rip = ( uint64_t ) ctx;

				// Handle the state switch before injection.
				//
				dassert( tf->guest_level == false );
				vdbg::suspend_for_mode_flip( vm );
				tf->gs_base = ( uint64_t ) vm->kpcr;
				tf->kernel_gs_base = utf->gs_base;
			}
		}
		return vm->inject( tf );
	}

	// Page fault handler.
	//
	template<bool GuestLevel>
	static void isr_pagefault()
	{
		// Reference the trapframe and the VM.
		//
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;

		static constexpr interrupt_type Type = interrupt_type::page_fault;
		assume( tf->type == Type && tf->guest_level == GuestLevel );

		// If coming from the guest, inject as is.
		//
		if constexpr ( GuestLevel )
		{
			auto* ctx = get_thread_context_from_vm( vm );
			if ( auto eblk = find_ex_handler( ctx, GuestLevel, Type ) )
			{
				return callout_fw(
					tf,
					+[ ] ( cfw::trapframe* tf ) -> bool
					{
						auto st = mem::virtual_fault( tf->fault_address, { .flags = ( uint32_t ) tf->error_code } );
						return st.success();
					},
					[ ] ( su::vm_context* vm, cfw::trapframe* tf, bool handled )
					{
						if ( !handled )
							forward_ex_handler( ( cfw::try_catch_block* ) tf->ctx_2, tf, get_thread_context_from_vm( vm ), GuestLevel, Type );
						vm->resume( tf );
					},
					( uint64_t ) eblk
				);
			}
			return vm->inject( tf );
		}
		else
		{
			// Must not be in the VM stack.
			//
			fassert( !vm->is_monitor_stack( tf ) );

			// Get the IRQL.
			//
			irql_t irql = ia32::get_irql();

			// If interrupts were previously enabled, adjust the IRQL.
			//
			if ( tf->rflags.interrupt_enable_flag ) {
				ia32::set_irql( std::max<uint32_t>( irql, APC_LEVEL ) );
				ia32::enable();
			}

			// Try to handle the page fault:
			//
			nt::result<> result = mem::virtual_fault( tf->fault_address, { .flags = ( uint32_t ) tf->error_code } );

			// Disable interrupts again if previously enabled.
			//
			if ( tf->rflags.interrupt_enable_flag ) {
				ia32::disable();
				ia32::set_irql( irql );

				// Reload VM pointer.
				//
				vm = get_vm();
				tf->vmcs = vm;
				tf->gs_base = ( uint64_t ) vm->kpcr;
			}

			// If successful, continue execution.
			//
			if ( result )
				return vm->resume( tf );

			// Handle safe stub.
			//
			if ( safe::is_stub( tf->rip ) ) {
				safe::fail_stub( tf );
				return vm->resume( tf );
			}

			// Forward to an exception handler where relevant.
			//
			if ( irql == PASSIVE_LEVEL && tf->rflags.interrupt_enable_flag ) {
				auto* ctx = get_thread_context_from_vm( vm );
				if ( auto eblk = find_ex_handler( ctx, GuestLevel, Type ) ) {
					forward_ex_handler( eblk, tf, ctx, GuestLevel, Type );
					return vm->resume( tf );
				}
			}

			// Finally, raise an error.
			//
			return raise_error( tf );
		}
	}

	// Ecc handler.
	//
	static bool handle_ecc( trapframe* tf, vm_context* vm, thread::context* ctx ) {
		// Skip if not INT1 or INT3.
		//
		if ( tf->type != su::interrupt_type::breakpoint && ( tf->type != su::interrupt_type::debug || ( tf->error_code & ( DR6_BREAKPOINT_CONDITION_FLAG | DR6_SINGLE_INSTRUCTION_FLAG ) ) ) ) {
			return false;
		}

		// Skip if not in a callout.
		//
		if ( !ctx->trapframe ) {
			return false;
		}

		// Check if correctable INT1/INT3.
		//
		auto corrected_ptr = tf->rip - 1;
		std::array<uint8_t, 15> insb = { 0xCC };
		auto fw = ctx->fw.get();
		auto pcb = fw->pcb.get();
		{
			std::shared_lock _g{ pcb->ecc_lock.unwrap() };
			for ( auto& [base, range] : pcb->ecc_list ) {
				if ( base <= corrected_ptr && corrected_ptr < ( base + range.size() - 15 ) ) {
					insb = *( std::array<uint8_t, 15>* ) &range[ corrected_ptr - base ];
					break;
				}
			}
		}
		if ( insb[ 0 ] == 0xCC /*int3*/ || insb[ 0 ] == 0xF1 /*int1*/ ) {
			if constexpr ( ecc_debug ) xstd::log( "Skipping since non correctable %02x\n", uint32_t( insb[ 0 ] ) );
			return false;
		}
		tf->rip = corrected_ptr;

		// Dumb tests.
		//
		if ( !memcmp( insb.data(), "\x48\x83\xC1\x10", 4 ) ) {
			tf->rcx += 0x10;
			tf->rip += 4;
			vm->resume( tf );
			return true;
		} else if ( !memcmp( insb.data(), "\x48\xB8\x00\x00\x00\x00\x01\x00\x00\x00", 10 ) ) {
			tf->rax =  0x100000000;
			tf->rip += 10;
			vm->resume( tf );
			return true;
		}

		// If we could emulate it, continue.
		//
		if constexpr ( ecc_debug ) {
			auto ins = xed::decode64( insb );
			xstd::log( "Correcting %p as %s\n", corrected_ptr, ins );
		}
		if ( vm->emulate( tf, nullptr, insb.data() ) ) {
			if constexpr ( ecc_debug ) {
				xstd::log( "Emulated!\n" );
				xstd::log( "RIP: [handler:%p] %p\n", tf->retptr(),   tf->rip );
				for ( auto& i : xed::decode64_n( tf->retptr(), 63 ) ) {
					xstd::inspect( i );
				}
			}
			return true;
		}
		if constexpr ( ecc_debug ) xstd::log( "Overwritten!\n" );

		// Otherwise overwrite it and resume the VM.
		//
		mem::phys_ptr<uint8_t> ptr{ mem::get_physical_address( corrected_ptr ) };
		*ptr = insb[ 0 ];
		ia32::clwb_s( ptr.get() );
		vm->resume( tf );
		return true;
	}

	// Generic exception handler.
	//
	template<bool GuestLevel>
	static void isr_exception()
	{
		// Reference the trapframe and the VM.
		//
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;
		auto* ctx = get_thread_context_from_vm( vm );
		assume( tf->guest_level == GuestLevel );

		// If guest level:
		//
		if constexpr ( GuestLevel ) {
			// Try to correct errors.
			//
			if ( handle_ecc( tf, vm, ctx ) )
				return;

			// Try to emulate.
			//
			if ( tf->type == interrupt_type::invalid_opcode || tf->type == interrupt_type::general_protection_fault ) {
				if ( vm->emulate( tf ) )
					return;
			}
		}

		// If within a callout:
		//
		if ( ctx->trapframe && ( GuestLevel || ia32::get_effective_irql( tf->rflags ) == PASSIVE_LEVEL ) ) {
			// Forward to an exception handler where relevant.
			//
			if ( auto eblk = find_ex_handler( ctx, GuestLevel, tf->type ) ) {
				forward_ex_handler( eblk, tf, ctx, GuestLevel, tf->type );
				return vm->resume( tf );
			}
		}

		// Inject the exception or raise an error.
		//
		if constexpr ( GuestLevel )
			return vm->inject( tf );
		else
			return raise_error( tf );
	}

	// #DB handler.
	//
	static void isr_guest_debug()
	{
		// Reference the trapframe and the VM.
		//
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;
		auto* ctx = get_thread_context_from_vm( vm );

		static constexpr bool GuestLevel = true;
		static constexpr interrupt_type Type = interrupt_type::debug;
		assume( tf->type == Type && tf->guest_level == GuestLevel );

		// Try to correct errors.
		//
		if ( handle_ecc( tf, vm, ctx ) )
			return;

		// If we hit any shadow breakpoints:
		//
		if ( uint32_t vbp_mask = vdbg::get_vbp_mask( vm, tf ) )
		{
			auto* ix = ctx->fw->get_instrument();
			return callout_fw(
				tf,
				+[ ] ( cfw::trapframe* tf ) -> bool
				{
					auto* ix = ( cfw::instrument_context* ) tf->ctx_3;
					for ( size_t n = 0; n != 4; n++ )
							if ( xstd::bit_test( tf->ctx_2, n ) && ix->bp_handlers[ n ] )
								ix->bp_handlers[ n ]( tf );
					ia32::dr6 final_dr6{ .flags = tf->error_code };
					return !final_dr6.breakpoint_condition && !final_dr6.single_instruction;
				},
				[ ] ( su::vm_context* vm, cfw::trapframe* tf, bool resume )
				{
					if ( resume ) [[likely]] {
						ia32::write_dr6( { .flags = 0 } );
						tf->rflags.resume_flag = true;
						return vm->resume( tf );
					}

					// If within a callout:
					//
					auto* ctx = get_thread_context_from_vm( vm );
					if ( ctx->trapframe ) {
						// Forward to an exception handler where relevant.
						//
						if ( auto eblk = find_ex_handler( ctx, GuestLevel, Type ) ) {
							ia32::write_dr6( { .flags = 0 } );
							forward_ex_handler( eblk, tf, ctx, GuestLevel, Type );
							return vm->resume( tf );
						}
					}

					// Inject the error.
					//
					ia32::write_dr6( { .flags = tf->error_code } );
					return vm->inject( tf );
				},
				vbp_mask,
				( uint64_t ) ix
			);
		}

		// If within a callout:
		//
		if ( ctx->trapframe ) {
			// Consider the policy.
			//
			if ( ctx->fw->db_ignore ) {
				tf->rflags.resume_flag = true;
				ia32::write_dr6( { .flags = 0 } );
				return vm->resume( tf );
			}

			// Forward to an exception handler where relevant.
			//
			if ( auto eblk = find_ex_handler( ctx, GuestLevel, Type ) ) {
				ia32::write_dr6( { .flags = 0 } );
				forward_ex_handler( eblk, tf, ctx, GuestLevel, Type );
				return vm->resume( tf );
			}
		}

		// Inject the exception.
		//
		return vm->inject( tf );
	}

	// Syscall handler.
	//
	static void isr_syscall()
	{
		// Reference the trapframe and the VM.
		//
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;

		static constexpr bool GuestLevel = true;
		static constexpr interrupt_type Type = interrupt_type::native_syscall;
		assume( tf->type == Type && tf->guest_level == GuestLevel );

		// Reference the thread context.
		//
		auto* ctx = get_thread_context_from_vm( vm );
		auto* fw = ctx->fw.get();

		// If key matches the return point:
		//
		if ( tf->rbp == UM_JUMP_RBP_KEY ) {
			// If expected return point:
			//
			if ( thread::um_jump_frame* um = ctx->prev_um_frame ) {
				auto stub_retptr = um->prev_um_stack_frame - cfw::ucall_max_sp_padding;
				if ( tf->rsp >= ( stub_retptr + 8 ) ) {
					return_from_um( tf, ctx, um );
					return vm->resume( tf );
				}
			}
		}

		// Forward to an exception handler where relevant.
		//
		if ( tf->syscall_idx().significant_bits() == ( uint32_t ) sdk::syscall_index_of( os::km::raise_exception ) && !uint32_t( tf->syscall_arg( 2 /*FirstChance*/ ) ) ) {
			if ( auto eblk = find_ex_handler( ctx, GuestLevel, Type ) ) {
				forward_ex_handler( eblk, tf, ctx, GuestLevel, Type );
				return vm->resume( tf );
			}
		}

		// Forward to instrumentation where relevant.
		//
		auto* ins = fw->get_instrument();
		if ( auto sys = ins->syscall_hook ) {
			if ( !fw->pcb->pending_unload ) {
				if ( ins->no_syscall_filters || std::find( ins->syscall_filters.begin(), ins->syscall_filters.end(), tf->syscall_idx() ) != ins->syscall_filters.end() ) {
					return callout_fw( tf, sys, [ ] ( su::vm_context* vm, cfw::trapframe* tf, bool res ) {
						if ( res )
							vm->inject( tf, interrupt_type::native_syscall, 0, nullptr, int_inject_syscall );
						else
							vm->resume( tf );
					} );
				}
			}
		}

		// Inject as is.
		//
		return vm->inject( tf, interrupt_type::native_syscall, 0, nullptr, int_inject_syscall );
	}
	static void isr_csyscall()
	{
		auto* tf = trapframe::current();
		return tf->vmcs->inject(tf, interrupt_type::compatibility_syscall, 0, nullptr, int_inject_syscall);
	}

	// DebugPrint skipping helper.
	//
	static void isr_skipdbg()
	{
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;
		if ( tf->rflags.interrupt_enable_flag && safe::read<uint16_t>( tf->rip - 1 ) == 0xCC2D ) {
			tf->rip++;
			return vm->resume( tf );
		}
		raise_error( tf );
	}

	// Generate the ISR table.
	//
	static constexpr auto isr_table = make_isr_table( [ ]( interrupt_type I ) -> isr_pair_t {
		switch ( I ) {
			case interrupt_type::native_syscall:        return { &isr_syscall,         &isr_exception<false> };
			case interrupt_type::compatibility_syscall: return { &isr_csyscall,        &isr_exception<false> };
			case interrupt_type::debug:                 return { &isr_guest_debug,     &isr_exception<false> };
			case interrupt_type::page_fault:            return { &isr_pagefault<true>, &isr_pagefault<false> };

			case interrupt_type::raise_assert:
			case interrupt_type::raise_security_check:  return { &isr_exception<true>, &isr_exception<false> };
			case interrupt_type::debug_service_trap:    return { &isr_external<true>,  &isr_skipdbg          };
			default: {
				if ( int_is_exception( I ) )             return { &isr_exception<true>, &isr_exception<false> };
				else                                     return { &isr_external<true>,  &isr_external<false> };
			}
		}
	} );

	// TODO: Deduplicate this bullshit code, save dbg state properly instead o this garbage,
	// make usre the ->enter shit is properly done
	//
	//
	__attribute__((interrupt, __no_split__)) static void reenter_vm_from_high_irql( mframe_t* f )
	{
		ia32::disable();
		auto* ctx = ( thread::context* ) f->rip;

		// Write the frame.
		//
		*f = std::exchange( ctx->interrupted_mframe, std::nullopt ).value();
		asm volatile( "" :: "m"( *f ) );

		// Get the VM and ready for entry.
		//
		auto* vm = get_vm();
		//vm->event_buffer = std::move( buf ); TODO:
		vm->vm_isr_table = isr_table;
		vm->vmm_ud = ctx;

		// Enter the vm, restart vdbg.
		//
		vm->enter( 3 );
		vdbg::uenter( vm, nullptr );
	}
};

// Invoked by the proxy to handle context swap wihthin the VM.
//
MS_SSE2AVX NO_INLINE uint64_t su::r3::vm_swap_context(
	vm_context* vm, nt::ethread_t* current_thread, nt::ethread_t* next_thread, uint32_t wait_irql,
	su::r3::fn_swap_context swap )
{
	// Suspend VDBG, exit the VM in-place.
	//
	auto* ctx = vm->vmm_ud;
	vdbg::suspend_for_mode_flip( vm );
	vm->exit_for_suspend();

	// Swap context.
	//
	ia32::enable();
	bool pending = swap( current_thread, next_thread, wait_irql );
	ia32::disable();

	// Enter the VM again, resume VDBG.
	//
	vm = get_vm();
	//vm->event_buffer = std::move( buf ); TODO:
	vm->vmm_ud = ctx;
	vm->vm_isr_table = su3::isr_table;
	vm->enter( 3 );
	vdbg::uenter( vm, nullptr );
	ia32::enable();

	// Handle pending APCs.
	//
	if ( pending )
		ia32::intn( 0x1F );
	return 0;
}

static bool try_unload( nt::ethread_t* thr, thread::context* ctx, bool critical, session_state reason = {} )
{
	if ( !critical && ctx->prev_um_frame )
		return false;

	if ( auto& mf = ctx->interrupted_mframe ) {
		auto& apc_idx = thr->tcb.combined_apc_disable;
		if ( !apc_idx || apc_idx == 0xFFFFFFFF ) {
			//chost::unload_exit( false, reason );
			return true;
		}
	} else {
		//chost::unload_exit( false, reason );
		return true;
	}
	return false;
}

NO_INLINE static bool watchdog_expire(nt::trapframe* tf, nt::ethread_t* thr, thread::context* ctx) {

	if ( thr->tcb.combined_apc_disable != 0xFFFFFFFF )
		return false;

	auto& mf = ctx->interrupted_mframe;
	reduced_context context{ tf };
	context.rip = mf->rip;
	context.rsp = mf->rsp;
	context.rflags = mf->rflags.flags;
	context.seg_cs = mf->seg_cs.flags;
	context.seg_ss = mf->seg_ss.flags;

	auto trace = crashdump::trace_stack( context );
	trace->exception_message = "Watchdog expired during execution"_es;
	trace->exception_code = 0xDD;
	trace->exception_arguments = { mf->rip, ctx->watchdog_timer };
	trace->cr8 = 0;
	trace->cr2 = tf->fault_address;
	//chost::report_error( std::move( trace ), ( uint64_t ) tf, su3::get_imgbase_for_report( ctx ) );
	return try_unload( thr, ctx, true, session_state::exit_watchdog );
}

MS_SSE2AVX NO_INLINE bool su::r3::vmenter( nt::trapframe* tf, nt::ethread_t* thr, thread::context* ctx )
{
	auto fw = ctx->fw.get();
	if ( !fw ) return false;
	auto* pcb = fw->pcb.get();

	// If a previous callout was interrupted:
	//
	if ( auto& mf = ctx->interrupted_mframe ) {
		// If termination is requested or pending critical unload, try exiting.
		//
		if ( ( pcb->pending_unload.load( std::memory_order::relaxed ) & 2 ) || ntpp::is_exiting( ( nt::eprocess_t* ) pcb->eprocess ) ) [[unlikely]]
			if ( try_unload( thr, ctx, true, session_state::exit_process ) )
				return false;

		// If watchdog expired, try exiting.
		//
		if ( ctx->watchdog_timer && ia32::read_tsc() > ctx->watchdog_timer ) [[unlikely]]
			if ( watchdog_expire( tf, thr, ctx ) )
				return false;

		// Restore the state and resume from the previous point.
		//
		*( mframe_t* ) &tf->rip = *mf;
		mf.reset();
		auto gs = ia32::read_gsbase();
		ia32::swapgs();
		ia32::write_gsbase( gs );
	}
	// Otherwise if first-time entering:
	//
	else if ( !ctx->prev_um_frame ) {
		// Process pending unloads.
		//
		session_state reason = {};
		if ( pcb->expiry_time < xstd::time::now() )
			reason = session_state::exit_expiry;
		else if ( pcb->pending_unload.load( std::memory_order::relaxed ) )
			reason = session_state::exit_unload;
		if ( reason != session_state::none ) [[unlikely]] {
			if ( try_unload( thr, ctx, false, reason ) )
				return false;
		}
	}

	// Get the VM and ready for entry.
	//
	auto* vm = get_vm();
	//vm->event_buffer = std::move( buf ); TODO:
	vm->vm_isr_table = su3::isr_table;
	vm->vmm_ud = ctx;

	// Enter the vm, start vdbg.
	//
	vm->enter( 3 );
	vdbg::uenter( vm, tf );

	// Clear the original trapframe.
	//
	tf->dr7.flags = 0;
	return true;
}
