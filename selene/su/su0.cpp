#include "su0.hpp"
#include "vm.hpp"
#include "proxy.hpp"
#include "../utility/memory_isolation.hpp"
#include "../utility/safe_wrappers.hpp"
#include "../sched/irq.hpp"
#include "../hooks/patch_manager.hpp"
#include "ext/apiset.hpp"
#include "mirror.hpp"
#include "mirrormm.hpp"
#include "../misc/crashdump.hpp"
#include "mitigations.hpp"
#include "vdbg.hpp"

static constexpr bool r0_vm_debug = is_debug_build() && false;
static constexpr bool r0_mgx_debug = is_debug_build() && false;

namespace su0
{
	using namespace su;

	// Handles some hack solutions to wallclock timings.
	//
	static bool mitigate_wallclock( trapframe* tf )
	{
	   // ....
	   return false;
	}

	// Host error handler.
	//
	static void isr_host_fault()
	{
		auto* tf = trapframe::current();

		// If debug build, print the panic on console.
		//
		if constexpr ( is_debug_build() ) {
			xstd::log( "### Unexpected double fault ###\n" );
			isr_print_debug( tf );
		}

		// Submit the crashdump.
		//
		tf->vmcs->exit_for_suspend();
		auto trace = crashdump::trace_stack( tf );
		trace->exception_message = xstd::fmt::str( "Unexpected double fault #%02x(%02x)", ( uint32_t ) tf->type, ( uint32_t ) tf->error_code );
		trace->exception_code = ( uint8_t ) tf->type;
		trace->exception_arguments = { tf->error_code, ( uint64_t ) tf->fault_address };
		trace->cr8 = ia32::get_effective_irql( tf->rflags );
		trace->cr2 = tf->fault_address;
		crashdump::bugcheck( trace.get(), 0xce, tf->rip );
	}

	// External-interrupt handler.
	//
	static void isr_external()
	{
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;

		// If RIP is not executable from the guest page tables, we've spuriously missed a #PF, record the
		// exit and clear the event buffer from the VM so that the preempting IPI does not get logged.
		//
		auto pte = vm->mm.lookup( tf->rip, false ).first;
		uint8_t flags = int_inject_external;
		if ( pte->present && pte->execute_disable ) [[unlikely]] {
			if ( !su::ext::apiset::instrument_exit( tf ) )
				flags |= int_inject_no_record;
		} else if ( !pte->present ) [[unlikely]] {
			// Log the NP #PF VMEXIT:
			//
			vm->record_interrupt( tf, interrupt_type::page_fault, 0 );
			flags |= int_inject_no_record;
		}

		// Infer the interrupt vector.
		//
		assume( tf->type > interrupt_type::max_hardware_exception ); // Can't be an NMI so this assumption is enough, handled by monitor.

		// Inject it to the host, we don't care.
		//
		return vm->inject( tf, flags );
	}

	// Page fault handler.
	//
	static void isr_pagefault()
	{
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;
		ia32::page_fault_exception ex{ .flags = ( uint32_t ) tf->error_code };
		//if constexpr ( r0_vm_debug ) su::isr_print_debug( tf );

		// If it was caused by a page not being present:
		//
		size_t pxi = mem::px_index( tf->fault_address );
		auto* lpx =  &vm->mm.get_pxe( pxi, true );
		if ( !ex.present && !lpx->present ) [[unlikely]] {
			// If we could lazily map it, continue.
			//
			if ( vm->mm.lazy_map( pxi ) )
				return vm->resume( tf );
		}

		// Inject reserved bit violations as is.
		//
		if ( ex.sgx || ex.protection_key_violation || ex.reserved_bit_violation ) [[unlikely]]
			return vm->inject( tf );

		// If NX fault, exit to host range.
		//
		if ( ex.execute ) [[likely]] {
			if ( !su::ext::apiset::instrument_exit( tf ) ) [[likely]]
				return vm->exit( tf );
			return vm->resume( tf );
		}

		// If page was not present:
		//
		if ( !ex.present ) {
			auto pxi_flags = mem::get_pxi_flags( pxi );

			// If system images, just emulate.
			//
			if ( pxi_flags & mem::va_driver ) {
				return vm->emulate_s( tf );
			}

			// If accessing PTE range:
			//
			if ( pxi_flags & mem::va_self_ref ) {
				auto [va, depth] = mem::rlookup_pte( tf->fault_address );
				vm->record_checkpoint( tf, ex.write ? xt::checkpoint_write_pte : xt::checkpoint_read_pte, uint64_t( va ), depth );
				return vm->emulate_s( tf );
			}
			fassert( lpx->page_frame_number != vm->mm.guest_cr3.address_of_page_directory );

			// If accessing our pages:
			//
			auto rec = mem::iso::try_resolve( mem::get_pfn( tf->fault_address ) );
			if ( rec && mem::iso::is_restricted( rec->type ) ) {
				vm->record_checkpoint( tf, ex.write ? xt::checkpoint_write_host : xt::checkpoint_read_host, uint64_t( tf->fault_address ) );
				return vm->emulate_s( tf );
			}

			// If present in system table and not ours, or protected, emulate.
			//
			auto [spte, sd] = mem::lookup_pte( tf->fault_address );
			if ( spte->present ? ( !ex.write || spte->write ) : ( mmm::pte_secret && spte->ignored_2 == mmm::pte_secret ) ) {
				return vm->emulate_s( tf );
			}

			// Seems just like paged out memory, inject to host.
			//
			return vm->inject( tf );
		}

		// If fault was caused by a write-protected page:
		//
		if ( ex.write ) [[unlikely]] {
			// If PTE was originally writable and is write protected due to being trapped:
			//
			auto [lpte, ld] = vm->mm.lookup( tf->fault_address );
			if ( kernel_mirror.pxi == pxi && pte_details( lpte )->was_w && pte_details( lpte )->trapped ) {
				// Flush the iCache within every instance of the emulator besides this VM.
				//
				for ( size_t n = 0; n != apic::number_of_processors(); n++ )
					if ( auto xvm = get_vm( n ); xvm != vm )
						xvm->emu.flush_pending = true;

				// Emulate the write operation.
				//
				vm->record_checkpoint( tf, xt::checkpoint_code_rewrite, uint64_t( tf->fault_address ) );
				return vm->emulate_s( tf, [ ] ( void* ptr, uint32_t n, bool is_write ) {
					auto* tf = trapframe::current();
					if ( !is_write )
						return ( void ) memcpy( tf->temp, ptr, n );
					tf->vmcs->record_checkpoint( tf, xt::checkpoint_code_rewrite, ( uint64_t ) ptr );
					memcpy( ptr, tf->temp, n );

					// Set the flush flag on the current VM after the write is complete.
					//
					tf->vmcs->emu.flush_pending = true;
				} );
			}

			// If write protect is off:
			//
			if ( !ia32::smsw().write_protect ) {
				// TODO: Handle hooked pages if this gets hit.
				//
				fassert( !hook::lookup_shadow_pfn( lpte->page_frame_number ) );

				// Emulate the write operation on both pages.
				//
				vm->record_checkpoint( tf, xt::checkpoint_write_wp, uint64_t( tf->fault_address ) );
				return vm->emulate_s( tf );
			}

			// Seems just like copy-on-write, inject to host.
			//
			return vm->inject( tf );
		}

		// If we could not handle it, inject to guest.
		//
		assume( tf->type == interrupt_type::page_fault );
		return vm->inject( tf );
	}

	// Generic exception handler.
	//
	static void isr_exception()
	{
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;
		if constexpr ( r0_vm_debug ) su::isr_print_debug( tf );

		if ( tf->type == interrupt_type::invalid_opcode || tf->type == interrupt_type::general_protection_fault ) {
			// Mitigate against wallclock timings.
			//
			if ( mitigate_wallclock( tf ) )
				return vm->resume( tf );

			// Try to emulate the instruction.
			//
			if ( vm->emulate( tf ) )
				return;
		}

		// Inject to guest.
		//
		assume( tf->type <= interrupt_type::max_hardware_exception );
		assume( tf->type != interrupt_type::non_maskable );
		assume( tf->type != interrupt_type::page_fault );
		return vm->inject( tf );
	}

	// DebugPrint skipping helper.
	//
	static void isr_skipdbg()
	{
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;
		if constexpr ( r0_vm_debug ) su::isr_print_debug( tf );

		if ( tf->rflags.interrupt_enable_flag && safe::read<uint16_t>( tf->rip - 1 ) == 0xCC2D ) {
			tf->rip++;
			return vm->resume( tf );
		}
		return isr_host_fault();
	}

	// Syscall handler.
	//
	static void isr_syscall()
	{
		auto* tf = trapframe::current();
		if constexpr ( r0_vm_debug ) su::isr_print_debug( tf );
		return tf->vmcs->inject( tf, interrupt_type::native_syscall, 0, nullptr, int_inject_syscall );
	}
	static void isr_csyscall()
	{
		auto* tf = trapframe::current();
		if constexpr ( r0_vm_debug ) su::isr_print_debug( tf );
		return tf->vmcs->inject( tf, interrupt_type::compatibility_syscall, 0, nullptr, int_inject_syscall );
	}

	// #DB handler.
	//
	static void isr_guest_debug() {
		// Reference the trapframe and the VM.
		//
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;
		if constexpr ( r0_mgx_debug ) su::isr_print_debug( tf );

		// Calculate the VBP mask and call the handler.
		//
		uint32_t vbp_mask = vdbg::get_vbp_mask( vm, tf ) | ( 1 << 5 );
		auto* mgx = ( r0::mgx_info* ) vm->vmm_ud;
		ia32::dr6 final_dr6{ .flags = tf->error_code };
		if ( auto cb = mgx->bp_handlers[ xstd::lsb( vbp_mask ) ] ) {
			tf->retptr() = nullptr;
			cb( tf );
			if ( tf->retptr() ) {
				ia32::write_dr6( final_dr6 );
				return;
			}
		}

		// If DR6 is cleaned, resume the VM.
		//
		final_dr6.flags = tf->error_code;
		ia32::write_dr6( final_dr6 );
		if ( !final_dr6.breakpoint_condition && !final_dr6.single_instruction ) {
			return vm->resume( tf );
		}

		// Inject to guest.
		//
		assume( tf->type <= interrupt_type::max_hardware_exception );
		assume( tf->type != interrupt_type::non_maskable );
		assume( tf->type != interrupt_type::page_fault );
		return vm->inject( tf );
	}

	// MTF.
	//
	//static robin_hood::unordered_flat_set<uint32_t> g_seen;
	static void isr_mtf()
	{
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;

		if constexpr ( r0_vm_debug ) su::isr_print_debug( tf );
		//char disasm[ 128 ] = { '?', '?', 0 };
		//uint8_t bytes[ xed::max_ins_len ] = { 0x00 };
		//if ( size_t bytes_read = std::size( bytes ) - safe::copy( &bytes[ 0 ], tf->rip, std::size( bytes ) ) )
		//{
		//	if ( g_seen.emplace( 0xffffff & *( uint32_t* ) &bytes[ 0 ] ).second ) {
		//		if ( auto ins = xed::decode64( &bytes[ 0 ], bytes_read ) )
		//			ins->to_string( disasm, std::size( disasm ) - 1, tf->rip );
		//		else
		//			disasm[ 0 ] = '*';
		//
		//		xstd::log( "[CPU %llu] #%02x(%02x) @ [ %02x:%p %s ] | SP: %02x:%p | EFL: %08llx | CR8: %d | CR2: %llx\n",
		//				  ia32::read_pcid(),
		//				  ( uint32_t ) tf->type, ( uint32_t ) tf->error_code,
		//				  ( uint32_t ) tf->seg_cs.flags, tf->rip, disasm,
		//				  ( uint32_t ) tf->seg_ss.flags, tf->rsp, tf->rflags.flags, ia32::read_cr8(), ia32::read_cr2() );
		//	}
		//}
		return vm->resume( tf );
	}

	// Generate the ISR table.
	//
	static constexpr auto isr_table = make_isr_table( [] ( interrupt_type I ) -> isr_pair_t
	{
		switch ( I )
		{
			case interrupt_type::native_syscall:        return { &isr_syscall,         &isr_host_fault };
			case interrupt_type::compatibility_syscall: return { &isr_csyscall,        &isr_host_fault };
			case interrupt_type::page_fault:            return { &isr_pagefault,       &isr_host_fault };
			case interrupt_type::debug:                 return { &isr_guest_debug,     &isr_host_fault };
			case interrupt_type::raise_assert:
			case interrupt_type::raise_security_check:  return { &isr_exception,       &isr_host_fault };
			case interrupt_type::debug_service_trap:    return { &isr_external,        &isr_skipdbg    };
			default:
			{
				if ( int_is_exception( I ) )             return { &isr_exception,       &isr_host_fault };
				else                                     return { &isr_external,        &isr_host_fault };
			}
		}
	} );
};

namespace su::r0 {
	static constexpr auto emulate = [ ] ( trapframe* tf ) {
		tf->vmcs->emulate( tf );
	};

	COLD static void mgx_setup( mgx_info* mgx ) {
		// Mitigate against TSX.
		//
		mgx->on_enter = [ ] ( vm_context* vm, nt::trapframe* ) {
			// Setup RTM trap.
			//
			vm->rtm_trap_set = mgx::set_rtm_trap_state( true );
		};
	}
};

// Invoked by the proxy with an NT trap frame to enter the VM.
//
void su::r0::vmenter( nt::trapframe* tf, std::shared_ptr<xt::local_buffer> buf, mgx_info* mgx )
{
	// Setup VM.
	//
	auto* vm = get_vm();
	vm->event_buffer = std::move( buf );
	vm->vm_isr_table = su0::isr_table;
	vm->vmm_ud = mgx;
	//vm->mtf = &su0::isr_mtf;
	assume( tf->seg_cs.request_privilege_level == 0 );
	vm->enter( tf );

	// Setup CR2.
	//
	if ( auto cr2 = ia32::read_cr2(); cr2 != tf->rip ) {
		vm->guest_cr2 = cr2;
	} else {
		ia32::write_cr2( vm->guest_cr2 );
	}

	// Instrument enter.
	//
	ext::apiset::instrument_enter( tf, vm );

	// Setup targetted mitigations.
	//
	if ( mgx ) {
		mgx->setup( &mgx_setup );
		if ( mgx->on_enter )
			mgx->on_enter( vm, tf );
		vdbg::kenter( vm );
	}
}
