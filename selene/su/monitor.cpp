#include "vm.hpp"
#include "mirror.hpp"
#include "../sched/irq.hpp"
#include "../utility/memory_isolation.hpp"
#include "../utility/safe_wrappers.hpp"
#include "../misc/crashdump.hpp"
#include <apollo/attributes.hpp>
#include "mirrormm.hpp"
#include "mitigations.hpp"

namespace su
{
	static constexpr bool vm_triplefault_debug = is_debug_build() && false;

	// Copy of gates in the heap where it's visible within the VM as well.
	//
	static ia32::idt_entry* shared_idt = nullptr;
	static constexpr size_t guest_idt_count = host_idt_count;
	static uint8_t* enter_gate = nullptr;
	static uint8_t* resume_gate = nullptr;
	static std::array<uint8_t*, guest_idt_count> exit_gates = { nullptr };

	// Shadow VMCS table.
	//
	static vm_context** shadow_vmcs_table = nullptr;

	// Careless physical memory allocator since all allocations here are permanent.
	//
	static any_ptr vmcs_alloc_phys( size_t num_pages, mem::iso::pfn_type type ) {
		auto pfn = mem::allocate_physical_resident( num_pages );
		auto va =  mem::get_phys_base() + ( pfn << 12 );
		mem::iso::claim_pfns( pfn, num_pages, type );
		return va;
	}

	// Bump allocator for write-protected data/code required by the monitor.
	//
	static uint8_t* vmcs_wp_heap_it = nullptr;
	static uint8_t* vmcs_wp_heap_start = nullptr;
	static uint8_t* vmcs_wp_heap_limit = nullptr;
	static void vmcs_wp_heap_init( size_t length ) {
		length = xstd::align_up( length, 2_mb ) >> 12;
		auto va = vmcs_alloc_phys( length, mem::iso::pfn_type::phys_isr );
		vmcs_wp_heap_start = va;
		vmcs_wp_heap_it = va;
		vmcs_wp_heap_limit = va + ( length << 12 );
		mem::change_protection( va, length << 12, mem::prot_rwx );
	}
	static void vmcs_wp_heap_seal() {
		mem::change_protection( vmcs_wp_heap_start, vmcs_wp_heap_limit - vmcs_wp_heap_start, mem::prot_rx );
		vmcs_wp_heap_it = vmcs_wp_heap_limit;
	}
	static uint8_t* vmcs_wp_heap_alloc( size_t length, size_t align = 64 ) {
		uint8_t* result = xstd::align_up( vmcs_wp_heap_it, align );
		vmcs_wp_heap_it = result + xstd::align_up( length, 64 );
		fassert( result && vmcs_wp_heap_it <= vmcs_wp_heap_limit );
		return result;
	}

	// Helpers for copying code into VMCS heap.
	//
	static constexpr uint64_t end_marker = 0xe65d2b18da183745;
	static constexpr uint32_t iid_marker = 0x08d1f6a9;
	static size_t sizeof_code( any_ptr fn ) {
		const uint8_t* begin = fn;
		const uint8_t* end = begin;
		while ( *( uint64_t* ) end != end_marker )
			++end;
		return end - begin;
	}
	static uint8_t* copy_code( const char* name, any_ptr fn, std::optional<uint32_t> iid = std::nullopt ) {
		size_t n = sizeof_code( fn );
		auto result = vmcs_wp_heap_alloc( n );
		memcpy( result, fn, n );
		crashdump::name_region( { result, n }, name );

		// Replace constants.
		//
		if ( iid ) {
			for ( size_t i = 0; ( i + 4 ) <= n; i++ ) {
				if ( *( uint32_t* ) &result[ i ] == iid_marker ) {
					*( uint32_t* ) &result[ i ] = *iid;
					i += 3;
				}
			}
		}
		for ( size_t i = 0; ( i + 8 ) <= n; i++ ) {
			if ( *( void** ) &result[ i ] == &vmcs_table ) {
				*( void** ) &result[ i ] = shadow_vmcs_table;
				i += 7;
			}
		}
		return result;
	}

	// Special register helpers.
	//
	inline void save_special_registers( vm_context*, trapframe* tf )
	{
		tf->gs_base        = ia32::read_gsbase();
		ia32::swapgs();
		tf->kernel_gs_base = ia32::read_gsbase();
	}
	template<typename T>
	inline void restore_special_registers( vm_context*, T* tf )
	{
		ia32::write_gsbase( tf->kernel_gs_base );
		ia32::swapgs();
		ia32::write_gsbase( tf->gs_base );
	}

	// VM state helpers.
	//
	static void update_vm_state( vm_context* vm, ia32::rflags flags )
	{
		// Handle state changes in VPMU:
		//
		bool vpmu_enable = ia32::get_effective_irql( flags, vm->guest_cr8 ) >= vpmu_min_irql;
		if ( vpmu_enable == vm->emu.vpmu.enabled ) [[likely]]
			return;

		if ( vpmu_enable ) vm->emu.vpmu.enter();
		else               vm->emu.vpmu.exit();

		auto new_cr4 = cr4_mask.apply( vm->guest_cr4 );
		new_cr4.timestamp_disable |= vpmu_enable;
		ia32::write_cr4( new_cr4 );
	}

	// Partial suspension and resuming of the VM for ISRs.
	//
	void vmreturn_gate();
	[[no_split]] static void resume_vm_cfw [[noreturn]] ( vm_context* vmcs, cfw::trapframe* tf )
	{
		dassert( vmcs->mm.is_shared() );

		// If resuming the guest:
		//
		if ( tf->guest_level ) [[likely]]
		{
			// Update the VM state.
			//
			update_vm_state( vmcs, tf->rflags );

			// Restore the special registers.
			//
			restore_special_registers( vmcs, tf );

			// Handle MTF.
			//
			if constexpr ( enable_mtf ) {
				if ( vmcs->mtf ) [[unlikely]] {
					tf->rflags.trap_flag = true;
				}
			}
		}
		
		// Load the registers and return.
		//
		cfw::continue_frame( tf );
	}
	[[no_split]] static const void* _resume_vm()
	{
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;

		// If resuming the guest:
		//
		if ( tf->guest_level )
		{
			// Update the VM state.
			//
			update_vm_state( vm, tf->rflags );

			// Restore the special registers.
			//
			restore_special_registers( vm, tf );

			// Handle MTF.
			//
			if constexpr ( enable_mtf ) {
				if ( vm->mtf ) [[unlikely]] {
					tf->rflags.trap_flag = true;
				}
			}

			// Handle IOPL.
			//
			if ( vr0_iopl && !( tf->seg_cs.request_privilege_level & 1 ) ) {
				tf->rflags.io_privilege_level = tf->seg_cs.request_privilege_level;
			}

			// Jump to the gate for the switch to guest.
			//
			tf->ctx_1 = vm->mm.get_cr3_for_resume( false ).flags;
			return resume_gate;
		}
		// Returning from double fault:
		//
		else
		{
			if ( tf->guest_level )
				xstd::error( "Resuming guest using return gate?"_es );
			return &vmreturn_gate;
		}
	}
	[[gnu::naked, no_split]] static void resume_vm()
	{
		__asm 
		{ 
			call _resume_vm
			jmp  rax
		};
	}
	[[no_stub]] static void suspend_vm( interrupt_type type )
	{
		auto* tf = trapframe::current();
		auto* vm = tf->vmcs;
		tf->rflags.resume_flag = false;

		// If SMAP was enabled, disable it.
		//
		if ( vm->guest_cr4.smap_enable )
			ia32::set_ac( true );

		// Forgive the switch duration.
		//
		vm->emu.vpmu.forgive_cycles( 180 );

		// Reset the flags.
		//
		bool guest_level = tf->seg_cs.flags != host_seg_r0_code.flags;
		tf->guest_level = guest_level;

		// Clear TF set by MTF.
		//
		if constexpr ( enable_mtf ) {
			if ( guest_level && vm->mtf ) [[unlikely]] {
				tf->rflags.trap_flag = false;
			}
		}

		// Clear IOPL.
		//
		if constexpr ( vr0_iopl ) {
			tf->rflags.io_privilege_level = 0;
		}

		// If exception:
		//
		if ( int_is_exception( type ) ) {
			// If #PF, save fault address:
			//
			if ( type == interrupt_type::page_fault )
				tf->fault_address = ia32::read_cr2();
			
			// If #DB, write Dr6 in error code slot.
			//
			else if ( type == interrupt_type::debug )
				tf->error_code = ia32::read_dr6().flags;

			// If host exception:
			//
			if ( !guest_level ) [[unlikely]] {
				// If fault within LEH context:
				//
				if ( auto* block = leh::pop<eh_model>( tf->vmcs, tf->rsp ) )
				{
					// Dispatch the exception.
					//
					tf->rip = ( uint64_t ) block->landingpad_ip;
					block->state = { ( uint32_t ) 0xFFFFFFFF, exception_details{ type, tf->error_code, tf->fault_address.address } };
					tf->retptr() = &vmreturn_gate;
					return;
				}

				// If #DB:
				//
				if ( type == interrupt_type::debug )
				{
					// If spurious #DB, inject a #DB on top of another #DB.
					//
					auto* ptf = vm->get_base_trapframe();
					if ( uintptr_t( ptf + 1 ) > uintptr_t( &tf->machine_frame ) && uintptr_t( &tf->machine_frame ) > uintptr_t( ptf ) ) [[unlikely]]
					{
						tf->machine_frame = ptf->machine_frame;
						vm->deliver( tf, interrupt_type::debug );
						vm->inject( tf, interrupt_type::debug );
						return;
					}
					// Otherwise, discard and continue.
					//
					else
					{
						ia32::write_dr6( { .flags = 0 } );
						tf->rflags.resume_flag = true;
						tf->retptr() = &vmreturn_gate;
						return;
					}
				}
				// If fault from safe stub with interrupts disabled, discard:
				//
				else if ( type == interrupt_type::page_fault || type == interrupt_type::general_protection_fault ) {
					if ( safe::is_stub( tf->rip ) && !tf->rflags.interrupt_enable_flag ) {
						safe::fail_stub( tf );
						tf->retptr() = &vmreturn_gate;
						return;
					}
				}
			}
		}

		// Save the special registers if guest level:
		//
		if ( guest_level ) {
			vm->mm.roundtrip();
			save_special_registers( vm, tf );
		}
		else {
			tf->kernel_gs_base = 0x8000000000000000; // Non-cannonical.
		}

		// Fix GSBASE.
		//
		ia32::write_gsbase( vm->kpcr );

		// If MTF is enabled:
		//
		if constexpr ( enable_mtf ) {
			if ( guest_level && vm->mtf ) [[unlikely]] {
				// If guest level #DB raised due to single stepping:
				//
				if ( type == interrupt_type::debug && ( tf->error_code & DR6_SINGLE_INSTRUCTION_FLAG ) ) {
					// Clear DR6.
					//
					ia32::dr6 dr{ .flags = tf->error_code ^ DR6_SINGLE_INSTRUCTION_FLAG };
					ia32::write_dr6( dr );

					// If new RIP is not executable, swap with a #PF.
					//
					if ( auto pte = vm->mm.lookup( tf->rip ).first; !pte->present || pte->execute_disable ) {
						tf->type = type = interrupt_type::page_fault;
						tf->fault_address = tf->rip;
						tf->error_code = PAGE_FAULT_EXCEPTION_EXECUTE_FLAG;
						if ( pte->present )
							tf->error_code |= PAGE_FAULT_EXCEPTION_PRESENT_FLAG;
					}
					// Otherwise, jump to MTF handler.
					//
					else {
						[[clang::musttail]] return ( ( decltype( &suspend_vm ) ) vm->mtf )( type );
					}
				}
			}
		}

		// If #NMI:
		//
		if ( type == interrupt_type::non_maskable ) [[unlikely]]
		{
			// If guest level #PMI due to the RTM trap mitigation:
			//
			if ( guest_level && mgx::reset_rtm_trap() )
			{
				//xstd::warning( "Guest was using TSX %p!", tf->rip );

				// Try to find a xbegin nearby and replace the RIP.
				//
				bool found = false;
				for ( size_t i = 6; i != 256; i++ )
				{
					auto val = safe::read<uint16_t>( tf->rip - i );
					if ( !val )           break;
					if ( *val != 0xF8C7 ) continue;
					tf->rip -= i;
					found = true;
					break;
				}

				// If we could not find it, log the error and skip.
				//
				if ( !found ) [[unlikely]]
				{
					vm->record_checkpoint( tf, xt::builtin_xbegin_missed );
					return vm->resume( tf );
				}

				// Record the TSX.
				//
				vm->record_checkpoint( tf, xt::builtin_xbegin );

				// Inject an #UD.
				//
				return vm->inject( tf, interrupt_type::invalid_opcode );
			}

			// If guest code:
			//
			if ( guest_level )
			{
				// Inject to host.
				//
				return vm->inject( tf, type );
			}
			// If monitor code:
			//
			else if ( !tf->rflags.interrupt_enable_flag )
			{
				// Set pending #NMI flag and resume.
				//
				vm->pending_nmi |= 1;
				tf->retptr() = &vmreturn_gate;
				return;
			}
			// If duplicate, skip.
			//
			else if ( xstd::bit_set( vm->pending_nmi, 1 ) )
			{
				tf->retptr() = &vmreturn_gate;
				return;
			}
			// Mark #NMI handled and let the guest handle it.
			//
			else
			{
				vm->pending_nmi = 3;
			}
		}

		// Tail call into the ISR.
		//
		size_t ist_index = ( size_t ) type;
		if ( ist_index >= vm->vm_isr_table->size() )
			ist_index = vm->vm_isr_table->size() - 1;
		auto isr = vm->vm_isr_table->at( ist_index )[ !guest_level ];
		[[clang::musttail]] return ( ( decltype( &suspend_vm ) ) isr )( type );
	}

	// Trampoline that handles saving of the registers and jumps to the real handler.
	//
	[[gnu::naked, no_split, no_stub]] static void vmexit_trampoline()
	{
		__asm
		{
			// Save the volatile general purpose/AVX registers. 
			// - rbp/rcx are saved by the gate, rcx holds interrupt vector.
			//
			mov       [ rsp ] trapframe.rax,              rax
			mov       [ rsp ] trapframe.rdx,              rdx
			mov       [ rsp ] trapframe.r8,               r8
			mov       [ rsp ] trapframe.r9,               r9
			mov       [ rsp ] trapframe.r10,              r10
			mov       [ rsp ] trapframe.r11,              r11
			vstmxcsr  [ rsp ] trapframe.mx_csr
			vldmxcsr  [ rip + mxcsr_store ]
			vmovdqu   [ rsp ] trapframe.ymm0,             ymm0
			vmovdqu   [ rsp ] trapframe.ymm1,             ymm1
			vmovdqu   [ rsp ] trapframe.ymm2,             ymm2
			vmovdqu   [ rsp ] trapframe.ymm3,             ymm3
			vmovdqu   [ rsp ] trapframe.ymm4,             ymm4
			vmovdqu   [ rsp ] trapframe.ymm5,             ymm5

			// Suspend the VM and invoke the ISR.
			//
			call      suspend_vm
			int3
			ud2

			// Memory storing kernel MXCSR:
			mxcsr_store:
				__emit 0x80 // 0x1F80, mask all, not precise.
				__emit 0x1F
				__emit 0x00
				__emit 0x00
		}
	}

	// Gate that handles the last steps of VMENTER.
	// - rsp = &nt::trapframe
	[[gnu::naked, no_split, no_stub]] static void vmenter_gate()
	{
		using nt_trapframe = nt::trapframe;
		__asm
		{
			// Load the volatile general purpose/SSE registers.
			//
			mov       rax,                         [ rsp ] nt_trapframe.rax
			mov       rcx,                         [ rsp ] nt_trapframe.rcx
			mov       rdx,                         [ rsp ] nt_trapframe.rdx
			mov       r8,                          [ rsp ] nt_trapframe.r8
			mov       r9,                          [ rsp ] nt_trapframe.r9
			mov       r10,                         [ rsp ] nt_trapframe.r10
			mov       r11,                         [ rsp ] nt_trapframe.r11
			movaps    xmm0,                        [ rsp ] nt_trapframe.xmm0
			movaps    xmm1,                        [ rsp ] nt_trapframe.xmm1
			movaps    xmm2,                        [ rsp ] nt_trapframe.xmm2
			movaps    xmm3,                        [ rsp ] nt_trapframe.xmm3
			movaps    xmm4,                        [ rsp ] nt_trapframe.xmm4
			movaps    xmm5,                        [ rsp ] nt_trapframe.xmm5
			ldmxcsr   [ rsp ] nt_trapframe.mx_csr

			// Switch to VM-stack.
			//
			mov       rsp,                         [ rsp ] nt_trapframe.rbx
			
			// Load the new CR3.
			//
			pop       rbp
			test      rbp,                         rbp
			jz no_switch
				mov       cr3,                      rbp
			no_switch:
			
			// Restore the RBP and IRETQ.
			//
			pop       rbp
			iretq
		}

		// Emit the end sequence.
		//
		asm volatile( ".quad %c[end_marker];" :: [end_marker] "i" ( end_marker ) );
	}

	// Gate that handles the last steps of VMRESUME.
	// - rsp = &trapframe
	[[gnu::naked, no_split, no_stub]] static void vmresume_gate()
	{
		__asm
		{
			// Load the volatile general purpose/SSE registers.
			//
			mov       rax,                         [ rsp ] trapframe.rax
			mov       rcx,                         [ rsp ] trapframe.rcx
			mov       rdx,                         [ rsp ] trapframe.rdx
			mov       r8,                          [ rsp ] trapframe.r8
			mov       r9,                          [ rsp ] trapframe.r9
			mov       r10,                         [ rsp ] trapframe.r10
			mov       r11,                         [ rsp ] trapframe.r11
			vmovdqu   ymm0,                        [ rsp ] trapframe.ymm0
			vmovdqu   ymm1,                        [ rsp ] trapframe.ymm1
			vmovdqu   ymm2,                        [ rsp ] trapframe.ymm2
			vmovdqu   ymm3,                        [ rsp ] trapframe.ymm3
			vmovdqu   ymm4,                        [ rsp ] trapframe.ymm4
			vmovdqu   ymm5,                        [ rsp ] trapframe.ymm5
			vldmxcsr  [ rsp ] trapframe.mx_csr
			
			// Load the new CR3.
			//
			mov       rbp,                         [ rsp ] trapframe.ctx_1 // .vm_cr3
			test      rbp,                         rbp
			jz no_switch
				mov       cr3,                         rbp
			no_switch:
			
			// Restore the RBP, adjust the stack and IRETQ.
			//
			mov       rbp,                         [ rsp ] trapframe.rbp
			lea       rsp,                 		   [ rsp + 8 ] trapframe.error_code // .rip
			iretq
		}

		// Emit the end sequence.
		//
		asm volatile( ".quad %c[end_marker];" :: [end_marker] "i" ( end_marker ) );
	}
	
	// Gate that handles LSTAR/CSTAR.
	//
	template<bool Compat>
	[[gnu::naked, no_split, no_stub]] static void vmexit_syscall_gate()
	{
		asm volatile(
			// Save guest RSP/RBP into XMM4.
			//
			"movq         %%rsp,                   %%xmm4;"
			"pinsrq       $1,         %%rbp,       %%xmm4;"

			// Fetch the VMCS from the table.
			//
			"movl         $0x53,                   %%ebp;"
			"lsl          %%ebp,                   %%ebp;"
			"shrl         $0xE,                    %%ebp;"
			"movabs       %[vmcs_table],           %%rsp;"
			"movq         (%%rsp, %%rbp, 8),       %%rbp;"

			// Start the trapframe at the beginning of the ISR stack, clear XMM4.
			//
			"leaq         %c[isr_stack_sz](%%rbp), %%rsp;"
			"movq         %%rcx,                   %c[off_rip](%%rsp);"
			"movl         %[seg_expected],         %c[off_cs](%%rsp);"
			"movq         %%r11,                   %c[off_efl](%%rsp);"
			"movq         %%xmm4,                  %c[off_rsp](%%rsp);"
			"movl         $0x2b,                   %c[off_ss](%%rsp);"
			"pextrq       $1,             %%xmm4,  %c[off_rbp](%%rsp);"
			"movq         %%rcx,                   %c[off_rcx](%%rsp);"
			"pxor         %%xmm4,                  %%xmm4;"
			
			// Skip Cr3 switch if switch is disabled.
			//
			"cmpq         $0,                      %c[off_vcr3](%%rbp);"
			"je           frame_start%=;"

			// Restore the real Cr3.
			//
			"movq         %c[off_cr3](%%rbp),      %%rcx;"
			"movq         %%rcx,                   %%cr3;"

			// Save the interrupt type both onto the trapframe and to rcx.
			//
			"frame_start%=: "
			"mov          %[iid],                  %%ecx;"
			"movb         %%cl,                    %c[off_itype](%%rsp);"

			// Save VMCS, jump to the trampoline.
			//
			"movq         %%rbp,                   %c[off_vmcs](%%rsp);"
			"movabs       %[trampoline],           %%rbp;"
			"jmpq         *%%rbp;"

			// Emit the end marker.
			//
			".quad %c[end_marker];"

			// Inputs
			:: [off_vcr3]     "i" ( offsetof( vm_context, mm ) + offsetof( plpd::memory, vm_cr3 ) ),
			   [off_cr3]      "i" ( offsetof( vm_context, mm ) + offsetof( plpd::memory, vmm_cr3 ) ),
			   [off_vmcs]     "i" ( offsetof( trapframe, vmcs ) ),
			   [off_itype]    "i" ( offsetof( trapframe, type ) ),
			   [off_rbp]      "i" ( offsetof( trapframe, rbp ) ),
			   [off_rcx]      "i" ( offsetof( trapframe, rcx ) ),
			   [off_cs]       "i" ( offsetof( trapframe, seg_cs ) ),
			   [off_ss]       "i" ( offsetof( trapframe, seg_ss ) ),
			   [off_rip]      "i" ( offsetof( trapframe, rip ) ),
			   [off_rsp]      "i" ( offsetof( trapframe, rsp ) ),
			   [off_efl]      "i" ( offsetof( trapframe, rflags ) ),
			   [trampoline]   "i" ( &vmexit_trampoline ),
			   [vmcs_table]   "i" ( &vmcs_table ),
			   [end_marker]   "i" ( end_marker ),
			   [isr_stack_sz] "i" ( stack_size - sizeof(trapframe) ),
			   [iid]          "i" ( Compat ? ( uint32_t ) su::interrupt_type::compatibility_syscall : ( uint32_t ) su::interrupt_type::native_syscall ),
			   [seg_expected] "i" ( Compat ? 0x23 : 0x33 )
		);
	}

	// Gate that handles the first steps of VMEXIT.
	//
	template<bool has_error_code>
	[[gnu::naked, no_split, no_stub]] static void vmexit_gate()
	{
		static constexpr size_t stack_adjust = has_error_code ? offsetof( trapframe, error_code ) : offsetof( trapframe, rip );

		asm volatile(
			// Adjust the stack pointer.
			//
			"subq         %[stack_adjust],         %%rsp;"

			// Save rbp/rcx.
			//
			"movq         %%rbp,                   %c[off_rbp](%%rsp);"
			"movq         %%rcx,                   %c[off_rcx](%%rsp);"
			
			// Jump to the appropriate exit handler.
			//
			"testb        $3,                      %c[off_cs](%%rsp);"
			"jz           host_exit%=;"

				// # -- Guest->Host:
				// 
				"guest_exit%=:"

				// Calculate the VMCS by masking off stack pointer.
				//
				"movq         %%rsp,                   %%rbp;"
				"andq         $~0x1FFFFF,              %%rbp;"

				// Skip Cr3 switch if switch is disabled.
				//
				"cmpq         $0,                      %c[off_vcr3](%%rbp);"
				"je           frame_start%=;"

				// Restore the real Cr3.
				//
				"movq         %c[off_cr3](%%rbp),      %%rcx;"
				"movq         %%rcx,                   %%cr3;"
				"jmp          frame_start%=;"

				// # -- Host->Host:
				//  
				"host_exit%=:"

				// Fetch the VMCS from the table.
				//
				"movl         $0x53,                   %%ebp;"
				"lsl          %%ebp,                   %%ebp;"
				"shrl         $0xE,                    %%ebp;"
				"movabs       %[vmcs_table],           %%rcx;"
				"movq         (%%rcx, %%rbp, 8),       %%rbp;"

			// Save the interrupt type both onto the trapframe and to rcx.
			//
			"frame_start%=: "
			"mov          %[iid_marker],           %%ecx;"
			"movb         %%cl,                    %c[off_itype](%%rsp);"

			// Save VMCS, jump to the trampoline.
			//
			"movq         %%rbp,                   %c[off_vmcs](%%rsp);"
			"movabs       %[trampoline],           %%rbp;"
			"jmpq         *%%rbp;"

			// Emit the end marker.
			//
			".quad %c[end_marker];"

			// Inputs
			:: [stack_adjust] "i" ( stack_adjust ),
			   [off_vcr3]     "i" ( offsetof( vm_context, mm ) + offsetof( plpd::memory, vm_cr3 ) ),
			   [off_cr3]      "i" ( offsetof( vm_context, mm ) + offsetof( plpd::memory, vmm_cr3 ) ),
			   [off_vmcs]     "i" ( offsetof( trapframe, vmcs ) ),
			   [off_itype]    "i" ( offsetof( trapframe, type ) ),
			   [off_rbp]      "i" ( offsetof( trapframe, rbp ) ),
			   [off_rcx]      "i" ( offsetof( trapframe, rcx ) ),
			   [off_cs]       "i" ( offsetof( trapframe, seg_cs ) ),
			   [trampoline]   "i" ( &vmexit_trampoline ),
			   [vmcs_table]   "i" ( &vmcs_table ),
			   [end_marker]   "i" ( end_marker ),
			   [iid_marker]   "i" ( iid_marker )
		);
	}
	template<bool has_error_code>
	[[gnu::naked, no_split, no_stub]] static void vmexit_gate_spurious()
	{
		static constexpr size_t stack_adjust = has_error_code ? offsetof( trapframe, error_code ) : offsetof( trapframe, rip );

		asm volatile(
			// Adjust the stack pointer.
			//
			"subq         %[stack_adjust],         %%rsp;"

			// Save rbp/rcx.
			//
			"movq         %%rbp,                   %c[off_rbp](%%rsp);"
			"movq         %%rcx,                   %c[off_rcx](%%rsp);"
			
			// Jump to the appropriate exit handler.
			//
			"testb        $3,                      %c[off_cs](%%rsp);"
			"jz           host_exit%=;"

				// # -- Guest->Host:
				// 
				"guest_exit%=:"

				// Calculate the VMCS by masking off stack pointer.
				//
				"movq         %%rsp,                   %%rbp;"
				"andq         $~0x1FFFFF,              %%rbp;"
				"jmp          pswap%=;"

				// # -- Host->Host:
				//  
				"host_exit%=:"

				// Fetch the VMCS from the table.
				//
				"movl         $0x53,                   %%ebp;"
				"lsl          %%ebp,                   %%ebp;"
				"shrl         $0xE,                    %%ebp;"
				"movabs       %[vmcs_table],           %%rcx;"
				"movq         (%%rcx, %%rbp, 8),       %%rbp;"

				// # -- Unconditional CR3 swap if using shadow tables.
				//
				"pswap%=:"

				// Skip Cr3 switch if switch is disabled.
				//
				"cmpq         $0,                      %c[off_vcr3](%%rbp);"
				"je           frame_start%=;"

				// Restore the real Cr3.
				//
				"movq         %c[off_cr3](%%rbp),      %%rcx;"
				"movq         %%rcx,                   %%cr3;"

			// Save the interrupt type both onto the trapframe and to rcx.
			//
			"frame_start%=: "
			"mov          %[iid_marker],           %%ecx;"
			"movb         %%cl,                    %c[off_itype](%%rsp);"

			// Save VMCS, jump to the trampoline.
			//
			"movq         %%rbp,                   %c[off_vmcs](%%rsp);"
			"movabs       %[trampoline],           %%rbp;"
			"jmpq         *%%rbp;"

			// Emit the end marker.
			//
			".quad %c[end_marker];"

			// Inputs
			:: [stack_adjust] "i" ( stack_adjust ),
			   [off_vcr3]     "i" ( offsetof( vm_context, mm ) + offsetof( plpd::memory, vm_cr3 ) ),
			   [off_cr3]      "i" ( offsetof( vm_context, mm ) + offsetof( plpd::memory, vmm_cr3 ) ),
			   [off_vmcs]     "i" ( offsetof( trapframe, vmcs ) ),
			   [off_itype]    "i" ( offsetof( trapframe, type ) ),
			   [off_rbp]      "i" ( offsetof( trapframe, rbp ) ),
			   [off_rcx]      "i" ( offsetof( trapframe, rcx ) ),
			   [off_cs]       "i" ( offsetof( trapframe, seg_cs ) ),
			   [trampoline]   "i" ( &vmexit_trampoline ),
			   [vmcs_table]   "i" ( &vmcs_table ),
			   [end_marker]   "i" ( end_marker ),
			   [iid_marker]   "i" ( iid_marker )
		);
	}

	// Gate that handles the return to host execution.
	// - rsp = &trapframe
	[[gnu::naked, no_split, no_stub]] static void vmreturn_gate()
	{
		__asm
		{
			// Load the volatile general purpose/SSE registers.
			//
			mov       rax,                         [ rsp ] trapframe.rax
			mov       rbp,                         [ rsp ] trapframe.rbp
			mov       rcx,                         [ rsp ] trapframe.rcx
			mov       rdx,                         [ rsp ] trapframe.rdx
			mov       r8,                          [ rsp ] trapframe.r8
			mov       r9,                          [ rsp ] trapframe.r9
			mov       r10,                         [ rsp ] trapframe.r10
			mov       r11,                         [ rsp ] trapframe.r11
			vmovdqu   ymm0,                        [ rsp ] trapframe.ymm0
			vmovdqu   ymm1,                        [ rsp ] trapframe.ymm1
			vmovdqu   ymm2,                        [ rsp ] trapframe.ymm2
			vmovdqu   ymm3,                        [ rsp ] trapframe.ymm3
			vmovdqu   ymm4,                        [ rsp ] trapframe.ymm4
			vmovdqu   ymm5,                        [ rsp ] trapframe.ymm5
			vldmxcsr  [ rsp ] trapframe.mx_csr
		
			// Adjust the stack and IRETQ.
			//
			lea       rsp,                 		   [ rsp + 8 ] trapframe.error_code // .rip
			iretq
		}
	}

	// Creates the VM context given the processor, reserved for internal use.
	//
	vm_context::vm_context( nt::kpcr_t* kpcr ) : kpcr( kpcr )
	{
		// Initialize reference structures.
		//
		kpcr_idtr = { ia32::read_idtr().limit, ( uint64_t ) kpcr->idt_base };
		kpcr_gdtr = { ia32::read_gdtr().limit, ( uint64_t ) kpcr->gdt_base };
		kpcr_tss =  kpcr->tss_base;

		// Initialize the GDT.
		//
		auto* gdt_entries = ( ia32::gdt_entry* ) kpcr_gdtr.base_address;
		dassert( ia32::get_gdt().second == host_gdt_count );
		std::copy_n( gdt_entries, host_gdt_count, gdt );
		gdt[ guest_seg_vr0_code.index ] = guest_vr0_code_seg;
		gdt[ guest_seg_vr0_data.index ] = guest_vr0_data_seg;

		// Initialize the TSS.
		//
		tss.reserved_0 = 0;
		tss.reserved_1 = 0;
		tss.reserved_2 = 0;
		tss.ist.fill( nullptr );
		tss.ist[ 1 ] = std::end( nmi_stack );
		tss.ist[ 2 ] = std::end( df_stack );
		tss.iopb_offset = sizeof( ia32::tss<> );
		tss.rsp[ 0 ] = std::end( isr_stack );
		( ( ia32::tss_entry* ) &gdt[ host_seg_task.index ] )->set_offset( &tss );
		dassert( ia32::get_tr().flags == host_seg_task.flags );

		// Initialize TSC.
		//
		pcid = guest_tsc_aux = kpcr->prcb.number;
	}

	// Updates the guest Cr4.
	//
	void vm_context::set_guest_cr4( ia32::cr4 value )
	{
		guest_cr4 = value;
	}

	
	// Exits the VM.
	//
	FORCE_INLINE static void vmcs_exit( vm_context* vm )
	{
		// Invoke the exit callback.
		//
		vm->exit_callback( vm );

		// Disarm the RTM trap.
		//
		if ( vm->rtm_trap_set ) {
			vm->rtm_trap_set = false;
			mgx::set_rtm_trap_state( false );
		}

		// Reset the VM state.
		//
		vm->clear();

		// Restore the control registers.
		//
		ia32::write_cr4( vm->guest_cr4 );
		ia32::write_cr2( vm->guest_cr2 );

		// Reset the state for CPUID faulting.
		//
		if constexpr ( cpuid_faulting ) {
			if ( ia32::is_intel() ) {
				ia32::write_msr( MSR_INTEL_MISC_FEATURES_ENABLES, 0 );
				ia32::write_msr( MSR_INTEL_PLATFORM_INFO, ia32::read_msr( MSR_INTEL_PLATFORM_INFO ) & ~PLATFORM_INFO_CPUID_FAULTING );
			}
		}

		// Handle extensions.
		//
		if ( vm->emu.vpmu.enabled )
			vm->emu.vpmu.suspend();

		// Restore CR3.
		//
		vm->mm.exit();

		// Make TSS available.
		//
		ia32::tss_entry* tss_entry = vm->ref_guest_gdt<ia32::tss_entry>( vm->guest_tr.index );
		safe::write<uint8_t>( 5 + ( uint8_t* ) tss_entry, 0x89 ); // Assumes P|DPL|S but fuck you.
		
		// Restore IDT, GDT, TR, LSTAR, CSTAR.
		//
		ia32::write_msr( IA32_LSTAR, vm->guest_lstar );
		ia32::write_msr( IA32_CSTAR, vm->guest_cstar );
		ia32::write_gdtr( &vm->guest_gdtr );
		ia32::set_tr( vm->guest_tr );
		ia32::write_idtr( &vm->guest_idtr );
	}

	// Switches to VM context immediately.
	//
	void vm_context::enter( uint8_t vpl, ia32::rflags flags )
	{
		dassert( !ia32::interrupts_enabled() );

		// Reset the fault depth, save the IRQL.
		//
		pending_nmi = 0;
		guest_cr8 = vpl == 3 ? 0 : ia32::read_cr8();

		// Swap IDT, GDT, TR, LSTAR, CSTAR.
		//
		( ( ia32::tss_entry* ) &gdt[ host_seg_task.index ] )->type = 0x9;
		ia32::read_idtr( &guest_idtr );
		ia32::set_idt( shared_idt, guest_idt_count );
		ia32::read_gdtr( &guest_gdtr );
		ia32::set_gdt( gdt, std::size( gdt ) );
		guest_tr = ia32::get_tr();
		ia32::set_tr( host_seg_task );

		//guest_lstar = ia32::read_msr( IA32_LSTAR ); <= Shouldn't really change outside the VM where NT ensures fixed value.
		//guest_cstar = ia32::read_msr( IA32_CSTAR ); <=
		ia32::write_msr( IA32_LSTAR, exit_gates[ ( uint32_t ) interrupt_type::native_syscall ] );
		ia32::write_msr( IA32_CSTAR, exit_gates[ ( uint32_t ) interrupt_type::compatibility_syscall ] );

		// Handle extensions.
		//
		irql_t eff_irql = ia32::get_effective_irql( flags, guest_cr8 );
		bool vpmu_enable = eff_irql >= vpmu_min_irql;
		if ( vpmu_enable )
			emu.vpmu.enter();

		// Enter virtual memory and sync with NT.
		//
		bool should_hostile = eff_irql >= IPI_LEVEL || guest_idtr.base_address != ( uint64_t ) kpcr->idt_base;
		mm.enter( ia32::read_cr3(), vpl ? plpd::policy::shared : ( should_hostile ? plpd::policy::hostile : plpd::policy::split ) );

		// Update the control registers.
		//
		set_guest_cr4( ia32::read_cr4() );
		auto new_cr4 = cr4_mask.apply( guest_cr4 );
		new_cr4.timestamp_disable |= vpmu_enable;
		ia32::write_cr4( new_cr4 );

		// Set the state for CPUID faulting.
		//
		if constexpr ( cpuid_faulting ) {
			if ( ia32::is_intel() ) {
				ia32::write_msr( MSR_INTEL_MISC_FEATURES_ENABLES, MISC_FEATURES_CPUID_FAULTING );
				ia32::write_msr( MSR_INTEL_PLATFORM_INFO, ia32::read_msr( MSR_INTEL_PLATFORM_INFO ) | PLATFORM_INFO_CPUID_FAULTING );
			}
		}
	}

	// Exits the VM context and starts real execution on procedure return.
	//
	template<typename T>
	FORCE_INLINE static void vmcs_exit( vm_context* vm, T* tf )
	{
		// Exit.
		//
		vmcs_exit( vm );

		// Handle pending NMI.
		//
		if ( vm->pending_nmi == 1 ) [[unlikely]]
		{
			xstd::cold_call( [ & ] {
				vm->pending_nmi |= 2;
				vm->deliver( tf, interrupt_type::non_maskable );
			} );
		}

		// Restore the special registers.
		//
		restore_special_registers( vm, tf );
	}
	void vm_context::exit( trapframe* tf )
	{
		// If VPL0:
		//
		if ( tf->seg_cs.flags == guest_seg_vr0_code.flags ) {
			// If target address is not executable in system space, resume instead.
			//
			auto [pte, _] = mem::lookup_pte( tf->rip );
			if ( !pte->present || pte->execute_disable ) [[unlikely]] {
				return resume( tf );
			}

			// Adjust segment selectors.
			//
			tf->seg_cs = host_seg_r0_code;
			tf->seg_ss = host_seg_r0_data;
		}

		vmcs_exit( this, tf );
		tf->vmcs = nullptr;
		tf->retptr() = &vmreturn_gate;
	}
	void vm_context::exit [[noreturn]] ( cfw::trapframe* tf )
	{
		vmcs_exit( this, tf );
		cfw::continue_frame( tf );
	}
	void vm_context::exit_for_suspend()
	{
		vmcs_exit( this );
	}

	// Delivers an interrupt within the guest context to the host.
	// - Does not exit the VM.
	//
	static void vmcs_deliver( vm_context* vm, trapframe* tf, interrupt_type type, uint64_t error_code, any_ptr fault_address, uint8_t flags )
	{
		uint8_t vpl = ( tf->seg_cs.request_privilege_level & 1 ) ? 3 : 0;

		// Validate the delivered exception frame.
		//
		if constexpr ( is_debug_build() ) {
			if ( vm->is_monitor_stack( tf->rsp ) ) [[unlikely]]
				xstd::error( "Injecting exception on host stack to guest, wtf?"_es );
		}

		// If we're delivering a syscall:
		//
		if ( flags & int_inject_syscall ) {
			if ( type == interrupt_type::native_syscall || type == interrupt_type::compatibility_syscall ) [[likely]] {
				// Dispatch as a normal syscall.
				//
				tf->rcx = tf->rip;
				tf->rip = type == interrupt_type::native_syscall ? vm->guest_lstar : vm->guest_cstar;
				tf->r11 = tf->rflags.flags;
				tf->rflags.flags &= ~vm->guest_fmask;
				tf->seg_cs.flags = uint16_t( vm->guest_star >> 32 );
				tf->seg_ss.flags = uint16_t( vm->guest_star >> 32 ) + 8;
				tf->seg_cs.request_privilege_level = 0;
				tf->seg_ss.request_privilege_level = 0;
				//if ( !( tf->seg_cs.request_privilege_level & 1 ) ) {
				//	tf->seg_cs = guest_seg_vr0_code;
				//	tf->seg_ss = guest_seg_vr0_data;
				//}
				return;
			}
			xstd::log( " --- Invalid syscall type --- \n" );
			fastfail( 0xd4 );
		}

		// If we're delivering a page-fault, set the new cr2.
		//
		if ( type == interrupt_type::page_fault )
			vm->guest_cr2 = fault_address;

		// Read the IDT entry, generate #GP or #DF if entry is not valid.
		//
		auto idt_entry = vm->read_guest_idt( size_t( type ) );
		if ( !idt_entry || !idt_entry->present || 
			  ( ( flags & ( int_inject_user_req | int_inject_no_cpl_check ) ) == int_inject_user_req && idt_entry->priv < vpl ) ) [[unlikely]] {
			if constexpr ( vm_triplefault_debug ) {
				xstd::log( "-> idt err: (%d, %d),  (%d, %d)\n", idt_entry ? 1 : 0, ( idt_entry && idt_entry->present ) ? 1 : 0, idt_entry ? idt_entry->priv : 0, vpl );
				xstd::log( "guest_idtr.base_address: %p\n", vm->guest_idtr.base_address );
				xstd::log( "vm->kpcr->idt_base:      %p (valid:%d)\n", vm->kpcr_idtr.base_address, mem::is_address_valid( vm->kpcr_idtr.base_address ) );
				xstd::log( "ref %x => %p\n", ( uint32_t ) type, vm->ref_guest_idt( size_t( type ) ) );
			}

			// If already coming from an interrupt delivery error:
			//
			if ( flags & int_inject_recursive ) [[unlikely]] {
				// Raise to #DF if #GP/#NP fails.
				//
				if ( type != interrupt_type::double_fault ) {
					return vmcs_deliver( vm, tf, interrupt_type::double_fault, 0, nullptr, int_inject_recursive );
				} 
				// Triple fault if #DF fails.
				//
				else {
					if constexpr ( vm_triplefault_debug )
						xstd::log( " --- triple fault --- \n" );
					fastfail( 0xd3 );
				}
			} 
			// Raise to #GP/#NP.
			//
			else {
				ia32::exception_error_code er = { .flags = 0 };
				er.external_event = !( flags & int_inject_user_req );
				er.descriptor_location = 1;
				er.index = ( uint64_t ) type;
				return vmcs_deliver( vm, tf, idt_entry ? interrupt_type::general_protection_fault : interrupt_type::segment_not_present, er.flags, nullptr, int_inject_recursive );
			}
		}

		// Determine the stack position it'll be inserted at.
		//
		any_ptr sp_injected = tf->rsp;
		if ( idt_entry->ist_index || vpl != 0 ) {
			// Determine which offset we want to read.
			//
			size_t sp_offset;
			if ( idt_entry->ist_index ) {
				sp_offset = xstd::make_offset( &ia32::tss<>::ist ) + 8ull * idt_entry->ist_index;
			} else {
				sp_offset = xstd::make_offset( &ia32::tss<>::rsp ) + 8ull * ia32::segment_selector{.flags = idt_entry->selector }.request_privilege_level;
			}

			// Resolve the TSS.
			//
			ia32::tss<>* tss = nullptr;
			auto tss_entry = vm->read_guest_gdt<ia32::tss_entry>( vm->guest_tr.index );
			if ( tss_entry ) tss = tss_entry->get_offset();
			if ( !tss ) [[unlikely]] {
				ia32::exception_error_code er = { .flags = 0 };
				er.descriptor_location = 0;
				er.index = ( uint64_t ) vm->guest_tr.index;
				if constexpr ( vm_triplefault_debug ) {
					xstd::log( "-> no tss\n" );
					xstd::log( "guest_gdtr.base_address: %p\n", vm->guest_gdtr.base_address );
					xstd::log( "vm->kpcr->gdt_base:      %p (valid:%d)\n", vm->kpcr_gdtr.base_address, mem::is_address_valid( vm->kpcr_gdtr.base_address ) );
					xstd::log( "ref %x => %p\n", ( uint32_t ) vm->guest_tr.index, vm->ref_guest_gdt( size_t( vm->guest_tr.index ) ) );
				}
				return vmcs_deliver( vm, tf, tss_entry ? interrupt_type::general_protection_fault : interrupt_type::segment_not_present, er.flags, nullptr, int_inject_recursive );
			}
			
			// Read from guest memory.
			//
			uint64_t* sp_ptr = xstd::ptr_at<uint64_t>( tss, sp_offset );
			std::optional<uint64_t> sp;
			if ( tss == ( void* ) vm->kpcr_tss ) [[likely]] {
				sp = safe::read( sp_ptr );
			} else {
				sp = vm->from_guest( nullptr, sp_ptr );
			}
			if ( !sp ) [[unlikely]] {
				if constexpr ( vm_triplefault_debug ) {
					xstd::log( "-> no sp\n" );
					xstd::log( "sp_ptr:                  %p\n", sp_ptr );
					xstd::log( "tss:                     %p\n", tss );
					xstd::log( "vm->kpcr->tss_base:      %p (valid:%d)\n", vm->kpcr_tss, mem::is_address_valid( vm->kpcr_tss ) );
					xstd::log( "ref %x => %p\n", ( uint32_t ) type, vm->ref_guest_idt( size_t( type ) ) );
				}
				return vmcs_deliver( vm, tf, interrupt_type::double_fault, 0, nullptr, int_inject_recursive );
			}
			sp_injected = *sp;
		}
		sp_injected.address &= ~0xFull;

		// Create the machine frame.
		//
		auto frame = tf->machine_frame;
		if ( !vpl ) {
			frame.seg_cs = host_seg_r0_code;
			frame.seg_ss = host_seg_r0_data;
		}
		uint64_t    mframe_space[ 1 + ( sizeof( mframe_t ) / sizeof( uint64_t ) ) ];
		const void* mframe_begin = &mframe_space[ int_has_error( type ) ? 0 : 1 ];
		size_t      mframe_size = sizeof( mframe_t ) + ( int_has_error( type ) ? sizeof( uint64_t ) : 0 );
		mframe_space[ 0 ] = error_code;
		*( mframe_t* ) &mframe_space[ 1 ] = frame;

		// Write the machine frame to IRETQ at.
		//
		sp_injected -= mframe_size;
		tf->rflags.virtual_8086_mode_flag = false;
		tf->rflags.trap_flag = false;
		tf->rflags.resume_flag = false;
		tf->rflags.nested_task_flag = false;
		tf->rflags.interrupt_enable_flag = false;
		tf->rip = idt_entry->get_handler();
		tf->rsp = sp_injected;
		if ( !( idt_entry->selector & 1 ) ) {
			tf->seg_cs.flags = guest_seg_vr0_code.flags;
		} else {
			tf->seg_cs.flags = idt_entry->selector;
		}
		tf->seg_ss.request_privilege_level = tf->seg_cs.request_privilege_level;
		tf->seg_ss.index = tf->seg_cs.index + 1;

		// If write to guest memory fails, double fault.
		//
		if ( size_t leftover = vm->write_guest( nullptr, sp_injected, mframe_begin, mframe_size ) ) [[unlikely]] {
			if constexpr ( vm_triplefault_debug ) {
				xstd::log( "-> sp write failed\n" );
				xstd::log( "sp_injected:             %p\n", sp_injected );
				xstd::log( "mframe_size:             %llx\n", mframe_size );
				xstd::log( "leftover:                %llx\n", leftover );
			}
			return vmcs_deliver( vm, tf, interrupt_type::double_fault, 0, nullptr, int_inject_recursive );
		}
	}
	void vm_context::deliver( trapframe* tf, interrupt_type type, uint64_t error_code, any_ptr fault_address, uint8_t flags )
	{
		vmcs_deliver( this, tf, type, error_code, fault_address, flags );
	}
	void vm_context::deliver( cfw::trapframe* tf, interrupt_type type, uint64_t error_code, any_ptr fault_address, uint8_t flags )
	{
		auto tfs = ( su::trapframe* ) ( uintptr_t( &tf->gs_base ) - offsetof( su::trapframe, gs_base ) );
		vmcs_deliver( this, tfs, type, error_code, fault_address, flags );
	}
	
	// Switches to VM context and starts virtual execution on procedure return.
	//
	void vm_context::enter( nt::trapframe* tf )
	{
		// Enter vm context.
		//
		enter( tf->seg_cs.request_privilege_level, tf->rflags );

		// If entering VPL0:
		//
		if ( !tf->seg_cs.request_privilege_level ) {
			// If hostile probe some memory.
			//
			if ( mm.is_hostile() ) [[unlikely]] {
				for ( auto ptr : { tf->rsp, tf->rip } ) {
					auto pxi = mem::px_index( ptr );
					if ( !mm.transient_pxes[ pxi ] ) {
						mm.lazy_map( pxi );
					}
				}
			}
			// Adjust machine frame.
			//
			auto mf = *( mframe_t* ) &tf->rip;
			mf.seg_cs = guest_seg_vr0_code;
			mf.seg_ss = guest_seg_vr0_data;
			mf.rflags.resume_flag = false;

			// Handle MTF.
			//
			if constexpr ( enable_mtf ) {
				if ( this->mtf ) [[unlikely]] {
					mf.rflags.trap_flag = true;
				}
			}
			// Handle IOPL.
			//
			if constexpr ( vr0_iopl ) {
				mf.rflags.io_privilege_level = guest_seg_vr0_code.request_privilege_level;
			}

			// Create an mframe+cr3 struct on our stack.
			//
			auto begin = (uint64_t*) &df_stack[8192];
			auto it = begin;
			*it++ =             mm.get_cr3_for_resume( true ).flags;
			*it++ =             tf->rbp;
			*( mframe_t* ) it = mf;

			// Setup the gate for the beginning of the execution.
			//
			tf->rbx = ( uint64_t ) begin;
			tf->retptr() = enter_gate;
		}
	}

	// Primitives for reading and writing guest memory, on failure returns the number of bytes left.
	// - Injects a #PF on failure if TF is given.
	// - If TF is not given, ignores permissions.
	//
	constexpr uint16_t mem_flags_dontcare = mem::va_stack | mem::va_pool | mem::va_session | mem::va_pfn_db | mem::va_process;
	size_t vm_context::read_guest( trapframe* tf, any_ptr dst, any_ptr src, size_t n, bool execute )
	{
		// Filter out non-cannonical.
		//
		if ( !mem::is_cannonical( src ) ) [[unlikely]] {
			if ( tf ) {
				inject( tf, interrupt_type::general_protection_fault, 0 );
			}
			return n;
		}

		// Create the base access descriptor.
		//
		ia32::page_fault_exception pf{ .flags = 0 };
		pf.execute =          execute;
		pf.user_mode_access = tf && tf->seg_cs.request_privilege_level == 3;

		// If VM page tables are not isolated qualifies for acccel.
		//
		if ( mm.is_shared() ) {
			// If reading as user from kernel pointer, fail.
			//
			if ( pf.user_mode_access && int64_t( src ) < 0 ) [[unlikely]] {
				inject( tf, interrupt_type::page_fault, pf.flags, src );
				return n;
			}

			// Forward to safe copy.
			//
			if ( !safe::copy( dst, src, n ) ) [[likely]]
				return 0;
		}
		// Otherwise:
		//
		else {
			// If entries are identical or if we're already in the guest address space:
			//
			auto pxi =          mem::px_index( src );
			bool is_identical = mm.is_split();
			if ( !is_identical ) {
				auto& pxe_vm = mm.get_pxe( pxi );
				auto& pxe_is = *mem::get_pxe_by_index( pxi );
				is_identical = pxe_is.present && pxe_vm.present && pxe_is.page_frame_number == pxe_vm.page_frame_number;
			}
			if ( is_identical ) [[likely]] {
				// If ignoring premissions or if dontcare, try accelerating.
				//
				if ( !tf || ( mem::get_pxi_flags( pxi ) & mem_flags_dontcare ) || ( execute && kernel_mirror.is_trapped_fast( src ) ) ) {
					if ( !safe::copy( dst, src, n ) ) [[likely]]
						return 0;
				}
			}
		}

		// Calculate final flags:
		//
		uint16_t flags;
		if ( tf ) {
			mem::walk_request req = {
				.cr4    = guest_cr4,
				// .efer   = ia32::read_msr<ia32::efer_register>( IA32_EFER ),
				.efl    = tf->rflags,
				.access = pf
			};
			flags = req.get_flags();
		} else {
			flags = mem::pw_preset_strict;
			if ( execute ) flags |= mem::pw_assert_ex;
		}
		
		if ( mem::vm_result result = mmm::read_virtual( dst, src, n, flags, &this->mm ); !result ) {
			// If it must succeed, inject the fault and return.
			//
			if ( tf ) {
				if ( !mem::is_cannonical( result.fault_address ) ) [[unlikely]]
					inject( tf, interrupt_type::general_protection_fault, 0 );
				else
					inject( tf, interrupt_type::page_fault, mem::walk_request::make_exception( pf, result.status, flags ).flags, result.fault_address );
			}
			return result.fault_address - src;
		}
		return 0;
	}
	size_t vm_context::write_guest( trapframe* tf, any_ptr dst, any_ptr src, size_t n )
	{
		// Filter out non-cannonical.
		//
		if ( !mem::is_cannonical( dst ) ) [[unlikely]] {
			if ( tf ) {
				inject( tf, interrupt_type::general_protection_fault, 0 );
			}
			return n;
		}

		// Create the base access descriptor.
		//
		ia32::page_fault_exception pf{ .flags = 0 };
		pf.write =            true;
		pf.user_mode_access = tf && tf->seg_cs.request_privilege_level == 3;

		// If VM page tables are not isolated qualifies for acccel.
		//
		if ( mm.is_shared() ) {
			// If writing as user to a kernel pointer, fail.
			//
			if ( pf.user_mode_access && int64_t( dst ) < 0 ) [[unlikely]] {
				inject( tf, interrupt_type::page_fault, pf.flags, dst );
				return n;
			}

			// Forward to safe copy.
			//
			if ( !safe::copy( dst, src, n ) ) [[likely]]
				return 0;
		}
		// Otherwise:
		//
		else {
			// If entries are identical or if we're already in the guest address space:
			//
			auto pxi =          mem::px_index( dst );
			bool is_identical = mm.is_split();
			if ( !is_identical ) {
				auto& pxe_vm = mm.get_pxe( pxi );
				auto& pxe_is = *mem::get_pxe_by_index( pxi );
				is_identical = pxe_is.present && pxe_vm.present && pxe_is.page_frame_number == pxe_vm.page_frame_number;
			}
			if ( is_identical ) [[likely]] {
				// If ignoring premissions or if dontcare address, try accelerating.
				//
				if ( !tf || ( mem::get_pxi_flags( pxi ) & mem_flags_dontcare ) ) {
					if ( !safe::copy( dst, src, n ) ) [[likely]]
						return 0;
				}
			}
		}

		// Calculate final flags:
		//
		uint16_t flags;
		if ( tf ) {
			mem::walk_request req = {
				.cr4    = guest_cr4,
				.cr0    = ia32::smsw(),
				.efl    = tf->rflags,
				.access = pf
			};
			flags =  req.get_flags();
		} else {
			flags =  mem::pw_preset_strict;
		}

		if ( mem::vm_result result = mmm::write_virtual( dst, src, n, flags, &this->mm ); !result ) {
			// If it must succeed, inject the fault and return.
			//
			if ( tf ) {
				if ( !mem::is_cannonical( result.fault_address ) ) [[unlikely]]
					inject( tf, interrupt_type::general_protection_fault, 0 );
				else
					inject( tf, interrupt_type::page_fault, mem::walk_request::make_exception( pf, result.status, flags ).flags, result.fault_address );
			}
			return result.fault_address - src;
		}
		return 0;
	}

	// Resumes guest execution.
	//
	FORCE_INLINE void vm_context::resume( trapframe* tf )
	{
		dassert( tf->vmcs );

		// Resume the VM.
		//
		tf->retptr() = &resume_vm;

		// Handle pending NMI.
		//
		if ( pending_nmi == 1 ) [[unlikely]]
		{
			xstd::cold_call( [ & ]
			{
				if ( tf->seg_cs.request_privilege_level != 0 && !xstd::bit_set( pending_nmi, 1 ) )
					inject( tf, interrupt_type::non_maskable );
			} );
		}
	}
	FORCE_INLINE void vm_context::resume [[noreturn]] ( cfw::trapframe* tf )
	{
		// Handle pending NMI.
		//
		if ( pending_nmi == 1 ) [[unlikely]]
		{
			xstd::cold_call( [ & ]
			{
				if ( tf->seg_cs.request_privilege_level != 0 && !xstd::bit_set( pending_nmi, 1 ) )
				{
					inject( tf, interrupt_type::non_maskable );
					unreachable();
				}
			} );
		}
		
		// Resume the VM.
		//
		resume_vm_cfw( this, tf );
	}

	// Initializes the monitor.
	//
	NO_INLINE void init()
	{
		// Initialize control registers.
		//
		scheduler::call_ipi( [ ] {
			auto cr4 = ia32::read_cr4();

			// If processor is PCID capable and PCIDs are disabled, force enable it.
			//
			if ( use_pcid )
				cr4.pcid_enable = true;

			// Disable page global.
			//
			cr4.page_global_enable = false;
			ia32::write_cr4( cr4 );
		} );

		// Initialize mitigations.
		//
		mgx::init();

		// Create the shadowed entry.
		//
		kernel_mirror.set_shadowed( mem::get_driver_px(), true );

		// Map the processor structures in system region.
		//
		if constexpr ( !trap_image_read ) {
			for ( auto* prcb : ke::get_kprcbs() ) {
				nt::kpcr_t* pcr = xstd::ptr_at( prcb, -SDK_OFFSET( nt::kpcr_t, prcb ) );

				any_ptr stacks[] = {
					prcb->dpc_stack,
					prcb->isr_stack,
					SDK_EXISTS( nt::kprcb_t, exception_stack ) ? prcb->exception_stack : nullptr
				};
				for ( auto p : stacks ) {
					if ( !p || !mem::is_driver_address( p ) )
						continue;

					auto base = xstd::align_down( p - ntpp::kernel_stack_size, 0x1000 );
					auto end = xstd::align_up( p + 0x50, 0x1000 );
					kernel_mirror.map( base, end - base, false );
				}

				std::pair<any_ptr, size_t> structures[] = {
					{ pcr, sdk::size_of<nt::kpcr_t>() },
					{ pcr->idt_base, 0x1000 },
					{ pcr->gdt_base, host_gdt_count * sizeof( ia32::gdt_entry ) },
					{ pcr->tss_base, sizeof( ia32::tss<> ) }
				};
				for ( auto& [p, s] : structures ) {
					if ( mem::is_driver_address( p ) ) {
						auto base = xstd::align_down( p, 0x1000 );
						auto end = xstd::align_up( p + s, 0x1000 );
						kernel_mirror.map( base, end - base, false );
					}
				}
			}
		}

		// Calculate the size of code heap, and initialize.
		//
		size_t num_cpu = apic::number_of_processors();
		size_t max_exit_gate = std::max( {
			sizeof_code( &vmexit_gate_spurious<true> ), sizeof_code( &vmexit_gate_spurious<false> ),
			sizeof_code( &vmexit_gate<true> ),          sizeof_code( &vmexit_gate<false> )
		} );
		vmcs_wp_heap_init(
			// IDT:
			xstd::align_up( sizeof( ia32::idt_entry ) * guest_idt_count, 64 ) + // 4k
			// Shadow VMCS table:
			xstd::align_up( sizeof( vm_context* ) * num_cpu, 64 ) + // 64-1k,
			// Padding:
			128 +
			// Code:
			xstd::align_up( sizeof_code( &vmenter_gate ), 64 ) + // ~128
			xstd::align_up( sizeof_code( &vmresume_gate ), 64 ) + // ~192
			xstd::align_up( max_exit_gate, 64 ) * ( exit_gates.size() - 2 ) +  // ~128 * 254
			xstd::align_up( sizeof_code( &vmexit_syscall_gate<false> ), 64 ) + // ~256
			xstd::align_up( sizeof_code( &vmexit_syscall_gate<true> ), 64 ) // ~256
		);

		// Preallocate IDT / CR3 / VMCS table as prefixes.
		//
		shared_idt = ( any_ptr ) vmcs_wp_heap_alloc( sizeof( ia32::idt_entry ) * guest_idt_count );
		shadow_vmcs_table = ( any_ptr ) vmcs_wp_heap_alloc( sizeof( vm_context* ) * num_cpu );
		memset( vmcs_wp_heap_alloc( 128 ), 0xCC, 128 );

		// Create the enter/resume gates.
		//
		enter_gate =  copy_code( "vmenter_gate"_ss, &vmenter_gate );
		resume_gate = copy_code( "vmresume_gate"_ss, &vmresume_gate );

		// Create the exit gates.
		//
		for ( uint32_t i = 0; i != std::size( exit_gates ); i++ ) {
			if ( i == ( uint32_t ) interrupt_type::double_fault || i == ( uint32_t ) interrupt_type::non_maskable || i == ( uint32_t ) interrupt_type::debug || i == ( uint32_t ) interrupt_type::machine_check )
				exit_gates[ i ] = copy_code( "vmexit_gate_spurious"_ss, int_has_error( ( interrupt_type ) i ) ? &vmexit_gate_spurious<true> : &vmexit_gate_spurious<false>, i );
			else if ( i == ( uint32_t ) interrupt_type::native_syscall )
				exit_gates[ i ] = copy_code( "vmexit_gate_syscall"_ss, &vmexit_syscall_gate<false>, i );
			else if ( i == ( uint32_t ) interrupt_type::compatibility_syscall )
				exit_gates[ i ] = copy_code( "vmexit_gate_syscall_legacy"_ss, &vmexit_syscall_gate<true>, i );
			else
				exit_gates[ i ] = copy_code( "vmexit_gate"_ss, int_has_error( ( interrupt_type ) i ) ? &vmexit_gate<true> : &vmexit_gate<false>, i );
		}
		
		// Create the IDT.
		//
		for ( size_t n = 0; n != guest_idt_count; n++ ) {
			if ( n == ( size_t ) interrupt_type::native_syscall || n == ( size_t ) interrupt_type::native_syscall )
				continue;
			shared_idt[ n ].present = true;
			shared_idt[ n ].type = 0xe;
			shared_idt[ n ].present = 1;
			shared_idt[ n ].selector = host_seg_r0_code.flags;
			shared_idt[ n ].set_handler( exit_gates[ n ] );
		}
		shared_idt[ ( size_t ) interrupt_type::non_maskable ].ist_index = 1;
		shared_idt[ ( size_t ) interrupt_type::double_fault ].ist_index = 2;
		shared_idt[ ( size_t ) interrupt_type::machine_check ].ist_index = 2;
		for ( auto& np : non_privileged_interrupts )
			shared_idt[ size_t( np ) ].priv = 3;

		// Setup the isolated page tables.
		//
		plpd::init();

		// Initialize the processors.
		//
		auto previous_affinity = ntpp::get_system_group_affinity();
		for ( nt::kprcb_t* prcb : ke::get_kprcbs() ) {
			// Switch to the processor.
			//
			ntpp::switch_to_processor( prcb );
			nt::kpcr_t* pcr = xstd::ptr_at<nt::kpcr_t>( prcb, -SDK_OFFSET( nt::kpcr_t, prcb ) );
			uint32_t n = prcb->number;

			// Initialize the processor, set the tables.
			//
			auto va = vmcs_alloc_phys( 512, mem::iso::pfn_type::phys_vmcs );
			auto* vmcs = new ( va ) vm_context( pcr );
			shadow_vmcs_table[ n ] = vmcs_table[ n ] = vmcs;
		}
		ntpp::revert_to_user_affinity( previous_affinity );

		// Seal the code heap.
		//
		vmcs_wp_heap_seal();
	}

	// -- XT wrappers
	COLD void vm_context::unchecked_transfer_deferred( const xt::task_snapshot& snap, std::span<const uint8_t> deferred ) {
		while ( true ) {
			auto i = xt::partial_event::next( deferred );
			if ( i.view.empty() ) break;
			event_buffer->write_event( xt::event_checkpoint, snap, i );
		}
	}
};