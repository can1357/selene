#include "isr_hooks.hpp"
#include "patch_manager.hpp"
#include <ntpp.hpp>
#include <xstd/narrow_cast.hpp>
#include <sdk/hvlp/api.hpp>
#include <sdk/kx/api.hpp>
#include <sdk/po/api.hpp>
#include <mcrt/interface.hpp>
#include <tinyjit.hpp>
#include "../sched/irq.hpp"
#include "../misc/shellcode_dumper.hpp"
#include "../utility/memory.hpp"
#include "../utility/memory_isolation.hpp"
#include "../utility/safe_wrappers.hpp"
#include "../utility/thread.hpp"
#include "../hooks/inline_hooks.hpp"

// External references we call into.
//
namespace gdb
{
	void on_user_exit( nt::trapframe* tf );
};
namespace su::r3
{
	void on_user_exit( nt::trapframe* tf );
};
namespace su::r0
{
	NO_INLINE bool on_knx_fault( void* virtual_address, nt::trapframe* tf );
};
namespace nopg
{
	NO_INLINE bool on_knx_fault( void* virtual_address, nt::trapframe* tf );
};
namespace scheduler
{
	NO_INLINE void signal( priority pri );
};


namespace hook::isr
{
	// Patterns.
	//
	// .text:0000000140406F14 0F AE 5D AC                                   stmxcsr dword ptr [rbp-54h]
	static constexpr std::array<uint8_t, 4> enter_identifier = { 0x0F, 0xAE, 0x5D, 0xAC };
	// .text:0000000140407524 0F AE 55 AC                                   ldmxcsr dword ptr [rbp-54h]
	static constexpr std::array<uint8_t, 4> exit_identifier =  { 0x0F, 0xAE, 0x55, 0xAC };

	// .text:0000000140406F18 65 0F AE 14 25 80 01 00 00                    ldmxcsr dword ptr gs:180h
	// .text:00000001403F89C1 0F 29 45 F0                                   movaps  xmmword ptr [rbp-10h], xmm0
	// .text:00000001403F89C5 0F 29 4D 00                                   movaps  xmmword ptr [rbp+0], xmm1
	// .text:00000001403F89C9 0F 29 55 10                                   movaps  xmmword ptr [rbp+10h], xmm2
	// .text:00000001403F89CD 0F 29 5D 20                                   movaps  xmmword ptr [rbp+20h], xmm3
	// .text:00000001403F89D1 0F 29 65 30                                   movaps  xmmword ptr [rbp+30h], xmm4
	// .text:00000001403F89D5 0F 29 6D 40                                   movaps  xmmword ptr [rbp+40h], xmm5
	static constexpr uint8_t isr_enter_pattern[] =     
	{ 
		0x65, 0x0F, 0xAE, 0x14, 0x25, 0x80, 0x01, 0x00, 0x00,
		0x0F, 0x29, 0x45, 0xF0,
		0x0F, 0x29, 0x4D, 0x00,
		0x0F, 0x29, 0x55, 0x10,
		0x0F, 0x29, 0x5D, 0x20,
		0x0F, 0x29, 0x65, 0x30,
		0x0F, 0x29, 0x6D, 0x40
	};

	// .text:00000001403FB010 66 83 BD 80 00 00 00 00                       cmp     word ptr[ rbp + 80h ], 0
	static constexpr uint8_t um_exit_pattern[] =       { 0x66, 0x83, 0xBD, 0x80, 0x00, 0x00, 0x00, 0x00 };
	// .text:0000000140407528 0F 28 45 F0                                   movaps  xmm0, xmmword ptr [rbp-10h]
	static constexpr uint8_t isr_exit_pattern[] =      { 0x0F, 0x28, 0x45, 0xF0 };
	// .text:000000014040731B 4D 33 D2                                      xor     r10, r10
	static constexpr uint8_t sys_exit_pattern[] =      { 0x4D, 0x33, 0xD2 };
	// .text:000000014015778C 33 F6                                         xor     esi, esi
	static constexpr uint8_t cb_exit_pattern[] =       { 0x33, 0xF6 };

	// Helper stubs.
	//
	template<auto Fn>
	static auto make_enter_stub( std::array<uint8_t, 4> identifier, std::span<const uint8_t> prologue )
	{
		static any_ptr ext_trampoline = nullptr;
		static const uint8_t* result = [ & ] ()
		{
			alignas( 64 ) static tinyjit::buffer<128> trampoline;
			trampoline.insertb( std::span{ &identifier[ 0 ], &identifier[ 4 ] } );
			trampoline.insertb( prologue );
			trampoline.jmp_abs( Fn );

			return trampoline.data();
		}();
		return std::pair{ result, &ext_trampoline };
	}
	template<auto Fn>
	static auto make_exit_stub( std::array<uint8_t, 4> identifier, std::span<const uint8_t> epilogue )
	{
		static any_ptr ext_trampoline = nullptr;
		static const uint8_t* result = [ & ] ()
		{
			alignas( 64 ) static tinyjit::buffer<128> trampoline;
			
			trampoline.push( tinyjit::r64::rax );
			trampoline.subq( tinyjit::r64::rsp, 0x40 );

			trampoline.lea( tinyjit::r64::rcx, tinyjit::memory{ -0x80, tinyjit::r64::rbp } );
			trampoline.call_abs( Fn );

			trampoline.addq( tinyjit::r64::rsp, 0x40 );
			trampoline.pop( tinyjit::r64::rax );

			trampoline.addq( tinyjit::memory{ tinyjit::r64::rsp }, int32_t( 4 + epilogue.size() - 5 ) );
			trampoline.insertb( std::span{ &identifier[ 0 ], &identifier[ 4 ] } );
			trampoline.insertb( epilogue );
			trampoline.ret();

			return trampoline.data();
		}();
		return std::pair{ result, &ext_trampoline };
	}

	[[gnu::noinline, must_tail, no_split, no_instrument]] MS_SSE2AVX static void on_knx_fault()
	{
		auto* tf = ( nt::trapframe* ) std::next( ( uint64_t* ) _AddressOfReturnAddress() );
		auto adr = ia32::read_cr2();
		if ( mem::is_driver_address( adr ) ) {
			if ( su::r0::on_knx_fault( adr, tf ) )
				return;
		} else {
			if ( nopg::on_knx_fault( adr, tf ) )
				[[clang::musttail]] return ( ( ( decltype( &on_knx_fault ) ) nt::get_frame_continuation( nt::trapframe_type::exception ) ) )( );
		}
		ia32::write_cr2( adr );
	}
	[[gnu::noinline, no_split, no_instrument]] MS_SSE2AVX static void on_unx_fault()
	{
		auto* tf = ( nt::trapframe* ) std::next( ( uint64_t* ) _AddressOfReturnAddress() );
		shellcode_dumper::on_unx_fault( tf );
	}

	MS_SSE2AVX COLD static bool handle_nonpresent_nx( ia32::page_fault_exception& pf ) {
		// Establish a PTE.
		//
		auto adr = ia32::read_cr2();
		auto [vpte, level] = mem::establish_pte( adr );
		ia32::write_cr2( adr );

		// Return true if NX and present.
		//
		if ( vpte.present ) {
			pf.present = true;
			return vpte.execute_disable;
		}
		return false;
	}


	// Check if windows originaly has smap.
	//
	static bool os_smap = false;

	// ISR start:
	//
	MS_SSE2AVX static void hk_on_isr_enter()
	{
		uint64_t& retadr = *( uint64_t* ) _AddressOfReturnAddress();
		auto* tf = ( nt::trapframe* ) std::next( &retadr );

		// Read the identifier and fix the return address.
		//
		const auto& id = *( su::interrupt_type* ) retadr;
		retadr += std::size( enter_identifier ) + std::size( isr_enter_pattern ) - 5;

		// Disable SMAP.
		//
		if ( os_smap )
			ia32::set_ac( true );

		// Notify scheduler on DPC and IPI interrupts.
		//
		if ( id == su::interrupt_type::dpc_interrupt ) [[unlikely]] {
			irql_t prev = ia32::get_irql();
			ia32::set_irql( DISPATCH_LEVEL );
			scheduler::signal( scheduler::priority::dpc );
			ia32::set_irql( prev );
		} else if ( id == su::interrupt_type::ipi_interrupt ) [[unlikely]] {
			irql_t prev = ia32::get_irql();
			ia32::set_irql( IPI_LEVEL );
			scheduler::signal( scheduler::priority::ipi );
			ia32::set_irql( prev );
		}

		// If page fault due to execution:
		//
		bool is_user = ( tf->seg_cs.flags & 1 ) != 0;
		auto pf = ( ia32::page_fault_exception& ) tf->error_code;
		if ( id == su::interrupt_type::page_fault ) {
			if ( !pf.reserved_bit_violation && !pf.write && pf.execute ) {
				// If we care about this:
				//
				if ( !is_user || shellcode_dumper::is_traced( ke::get_eprocess() ) ) {
					// If not present, pass to virtual faulting handler.
					//
					bool is_nx_present = pf.present;
					if ( !is_nx_present && tf->rflags.interrupt_enable_flag ) {
						is_nx_present = handle_nonpresent_nx( pf );
					}

					// If valid case, pass to each handler:
					//
					if ( is_nx_present ) {
						if ( is_user )
							[[clang::musttail]] return on_unx_fault();
						else
							[[clang::musttail]] return on_knx_fault();
					}
				}
			}
		}

		// If user-mode skip.
		//
		if ( is_user ) [[likely]]
			return;

		bool confused = false;
		// If external interrupt delivered to kernel mode:
		// 
		if ( tf->type == nt::trapframe_type::external ) {
			auto* thr = ke::get_ethread();
			auto* ctx = thread::get_context( thr );
			if ( ( ctx && ctx->active() ) || mem::iso::is_isolated_image_va( tf->rip ) ) {
				confused = true;
				thread::confuse_trapframe( thr, ctx, tf );
			}
		}
		if ( !confused ) thread::mark_trapframe_not_confused( tf );

		// If #PF/#GP in safe stub:
		//
		if ( ( id == su::interrupt_type::general_protection_fault || id == su::interrupt_type::page_fault ) && safe::is_stub( tf->rip ) ) {
			// If #PF @ <= APC_LEVEL try handling:
			//
			bool handled = false;
			if ( id == su::interrupt_type::page_fault && tf->rflags.interrupt_enable_flag && !pf.execute ) {
				if ( auto irql = ia32::get_irql(); irql <= APC_LEVEL ) {
					auto adr = ia32::read_cr2();
					ia32::set_irql( APC_LEVEL );
					ia32::enable();
					handled = !mem::virtual_fault( adr, { .flags = ( uint32_t ) tf->error_code } ).fail();
					ia32::disable();
					ia32::set_irql( irql );
				}
			}
			
			if ( !handled )
				safe::fail_stub( tf );
			[[clang::musttail]] return ( ( decltype( &hk_on_isr_enter ) ) nt::get_frame_continuation( nt::trapframe_type::exception ) )();
		}
	}

	// Helper stub for converting tf->retptr() style of dispatch in exit gates.
	// - rcx = &trapframe
	[[gnu::naked, no_split, no_stub]] static void retptr_patch_gate( nt::trapframe* tf )
	{
		__asm
		{
			lea rsp, [ rcx - 8 ]
			ret
		}
	}

	// ISR exit:
	//
	MS_SSE2AVX static void __cdecl hk_on_isr_exit( nt::trapframe* tf )
	{
		if ( !( tf->seg_cs.flags & 1 ) ) {
			if ( tf->type == nt::trapframe_type::external )
				thread::enlighten_trapframe( tf );
			
			// If quiting into NX region, skip the NX #PF and evaluate.
			//
			if ( mem::is_driver_address( tf->rip ) ) {
				auto [pte, _] = mem::lookup_pte( tf->rip );
				if ( pte->present && pte->execute_disable ) {
					if ( su::r0::on_knx_fault( ( void* ) tf->rip, tf ) ) {
						[[clang::musttail]] return retptr_patch_gate( tf );
					}
				}
			}
		} else {
			gdb::on_user_exit( tf );
			su::r3::on_user_exit( tf );
		}
	}

	// User exit:
	//
	MS_SSE2AVX static void __cdecl hk_on_um_exit( nt::trapframe* tf )
	{
		if ( !( tf->seg_cs.flags & 1 ) ) {
			if ( tf->type == nt::trapframe_type::external && thread::enlighten_trapframe( tf ) )
				[[clang::musttail]] return ( ( decltype( &hk_on_um_exit ) ) nt::get_frame_continuation( nt::trapframe_type::external ) )( tf );
		} else {
			gdb::on_user_exit( tf );
			su::r3::on_user_exit( tf );
		}
	}

	// Syscall/UMS exit:
	//
	MS_SSE2AVX static void __cdecl hk_on_sys_exit( nt::trapframe* tf )
	{
		if ( !( tf->seg_cs.flags & 1 ) )
			return;
		gdb::on_user_exit( tf );
		su::r3::on_user_exit( tf );
	}

	// CallUsermode exit:
	//
	MS_SSE2AVX static void __cdecl hk_on_cb_exit( nt::trapframe* tf )
	{
		if ( !( tf->seg_cs.flags & 1 ) )
			return;
		gdb::on_user_exit( tf );
		su::r3::on_user_exit( tf );
	}

	// PoIdle hook.
	//
	alignas( 64 ) static hook::record po_idle_hook = {};
	NO_AVX static void hk_po_idle( nt::kprcb_t* prcb ) {
		if ( cstate_disable ) [[unlikely]] {
			return;
		}
		[[clang::musttail]] return po_idle_hook.next<decltype( &hk_po_idle )>()( prcb );
	}


	// ISR mappings:
	//
	static std::pair<void*, su::interrupt_type> isr_mapping[] = {
		// Hardware exceptions.
		//
		{ &ki::divide_error_fault,          su::interrupt_type::divide_by_zero              },
		{ &ki::nmi_interrupt_start,         su::interrupt_type::non_maskable                },
		{ &ki::breakpoint_trap,             su::interrupt_type::breakpoint                  },
		{ &ki::overflow_trap,               su::interrupt_type::overflow                    },
		{ &ki::bound_fault,                 su::interrupt_type::bound_range                 },
		{ &ki::invalid_opcode_fault,        su::interrupt_type::invalid_opcode              },
		{ &ki::npx_not_available_fault,     su::interrupt_type::device_not_available        },
		{ &ki::double_fault_abort,          su::interrupt_type::double_fault                },
		{ &ki::npx_segment_overrun_abort,   su::interrupt_type::coprocessor_segment_overrun },
		{ &ki::invalid_tss_fault,           su::interrupt_type::invalid_tss                 },
		{ &ki::segment_not_present_fault,   su::interrupt_type::segment_not_present         },
		{ &ki::stack_fault,                 su::interrupt_type::stack_segment_fault         },
		{ &ki::general_protection_fault,    su::interrupt_type::general_protection_fault    },
		{ &ki::page_fault,                  su::interrupt_type::page_fault                  },
		{ &ki::floating_error_fault,        su::interrupt_type::fpu_exception               },
		{ &ki::alignment_fault,             su::interrupt_type::alignment_check             },
		{ &ki::mcheck_abort,                su::interrupt_type::machine_check               },
		{ &ki::xmm_exception,               su::interrupt_type::xmm_exception               },

		// #VE
		{ 
			sdk::exists( ki::virtualization_exception ) ? ( void* ) &ki::virtualization_exception : nullptr,
			su::interrupt_type::vmx_exception
		},
		// #CP
		{ 
			sdk::exists( ki::control_protection_fault ) ? ( void* ) &ki::control_protection_fault : nullptr,
			su::interrupt_type::control_protection_exception
		},
		// #DB
		{ 
			sdk::exists( kx::debug_trap_or_fault ) ? &kx::debug_trap_or_fault : &ki::debug_trap_or_fault, 
			su::interrupt_type::debug 
		},

		// Software interrupts.
		//
		{ &ki::apc_interrupt,                su::interrupt_type::apc_interrupt        },
		{ &ki::raise_security_check_failure, su::interrupt_type::raise_security_check },
		{ &ki::raise_assertion,              su::interrupt_type::raise_assert         },
		{ &ki::debug_service_trap,           su::interrupt_type::debug_service_trap   },
		{ &ki::dpc_interrupt,                su::interrupt_type::dpc_interrupt        },
		{ &ki::hv_interrupt,                 su::interrupt_type::hv_interrupt         },
		{ &ki::vmbus_interrupt0,             su::interrupt_type::vmbus_interrupt0     },
		{ &ki::vmbus_interrupt1,             su::interrupt_type::vmbus_interrupt1     },
		{ &ki::vmbus_interrupt2,             su::interrupt_type::vmbus_interrupt2     },
		{ &ki::vmbus_interrupt3,             su::interrupt_type::vmbus_interrupt3     },
		{ &ki::ipi_interrupt,                su::interrupt_type::ipi_interrupt        },

		{ 
			sdk::exists( ki::sw_interrupt ) ? ( void* ) &ki::sw_interrupt : nullptr,
			su::interrupt_type::sw_interrupt
		},

		// Syscalls.
		//
		{ &ki::system_call32,                su::interrupt_type::compatibility_syscall },
		{ &ki::system_call64,                su::interrupt_type::native_syscall        },
	};
	static su::interrupt_type identify_interrupt( any_ptr ptr )
	{
		auto img = ntpp::get_ntoskrnl();
		auto pdata = img->get_directory( win::directory_entry_exception );
		win::exception_directory ex{ img->raw_to_ptr( pdata->rva ), pdata->size };
		if ( auto it = ex.find_overlapping( ptr - ( uint64_t ) img ); it != ex.end() )
		{
			ptr = it->rva_begin + ( uint64_t ) img;
			for ( auto& [k, v] : isr_mapping )
				if ( k == ptr )
					return v;
		}
		return su::interrupt_type::max;
	}

	// Initializes ISR hooks on ntoskrnl.
	//
	NO_INLINE void init()
	{
		// Cache SMAP flag.
		//
		os_smap = ia32::read_cr4().smap_enable;
		if ( os_smap ) {
			ntpp::call_ipi( [ ] {
				auto cr4 = ia32::read_cr4();
				cr4.smap_enable = false;
				ia32::write_cr4( cr4 );
			} );
		}

		// Disable PoIdle for a while.
		//
		hook::add( &po_idle_hook, &po::idle, hk_po_idle );

		// Find .text of ntoskrnl.
		//
		auto* nt = ntpp::get_ntoskrnl();
		auto scn_list = nt->get_nt_headers()->sections();
		auto scn = std::find_if( scn_list.begin(), scn_list.end(), [ ] ( auto& scn ) { return scn.name.to_string() == ".text"; } );
	
		// Determine the limits of the section.
		//
		auto text_begin = xstd::ptr_at( nt, scn->virtual_address );
		auto text_end = text_begin + std::min( scn->virtual_size, scn->size_raw_data );

		// TODO: FF 25 inplace instead of E8 would be more elegant :)

		// Declare helper to assure REL32 relocatable jump.
		//
		any_ptr trampoline_it = ( void* ) &hvlp::determine_enlightenments;
		any_ptr trampoline_end = trampoline_it + 0x200;
		auto connect = [ & ] ( uint8_t* jmp_pad, any_ptr it, any_ptr target, any_ptr& trampoline ) {
			if ( !xstd::narrow_viable<int32_t>( xstd::distance( it + 5, target ) ) ) [[unlikely]] {
				if ( !trampoline ) {
					uint8_t stub[ 6 + 8 ] = { 0xFF, 0x25, 0x00, 0x00, 0x00, 0x00 };
					*( void** ) &stub[ 6 ] = target;
					hook::patch( trampoline_it, stub );
					trampoline = trampoline_it;
					trampoline_it += sizeof( stub );
					fassert( ptrdiff_t( trampoline_end - trampoline_it ) > 0 );
				}
				target = trampoline;
			}
			fassert( xstd::narrow_viable<int32_t>( xstd::distance( it + 5, target ) ) );
			*( int32_t* ) &jmp_pad[ 1 ] = xstd::distance( it + 5, target );
		};

		// First hook exits.
		//
		size_t num_exit = 0;
		for ( auto it = text_begin; it <= ( text_end - 4 ); it++ ) {
			auto value = *( const uint32_t* ) it;
			auto ptr = it + 4;

			auto match = [ & ] <size_t N> ( const uint8_t( &p )[ N ] ) {
				return ( ptr + N ) <= text_end && xstd::trivial_equals_n<N>( ptr, p );
			};
			auto detour = [ & ] ( auto target ) {
				uint8_t result[ 5 ] = { 0xE8, 0x00, 0x00, 0x00, 0x00 };
				connect( result, it, target.first, *target.second );
				return hook::patch( it, result );
			};

			if ( value == xstd::bit_cast< uint32_t >( exit_identifier ) ) {
				if ( match( um_exit_pattern ) ) {
					num_exit++; //xstd::log( "Found UM_EXIT  @ %p\n", 0x140000000 + scn->virtual_address + ( it - text_begin ) );
					detour( make_exit_stub<&hk_on_um_exit>( exit_identifier, um_exit_pattern ) );
				} else if ( match( isr_exit_pattern ) ) {
					num_exit++; //xstd::log( "Found isr_exit  @ %p\n", 0x140000000 + scn->virtual_address + ( it - text_begin ) );
					detour( make_exit_stub<&hk_on_isr_exit>( exit_identifier, isr_exit_pattern ) );
				} else if ( match( sys_exit_pattern ) ) {
					num_exit++; //xstd::log( "Found SYS_EXIT @ %p\n", 0x140000000 + scn->virtual_address + ( it - text_begin ) );
					detour( make_exit_stub<&hk_on_sys_exit>( exit_identifier, sys_exit_pattern ) );
				} else if ( match( cb_exit_pattern ) ) {
					num_exit++; //xstd::log("Found CB_EXIT  @ %p\n", 0x140000000 + scn->virtual_address + ( it - text_begin ));
					detour( make_exit_stub<&hk_on_cb_exit>( exit_identifier, cb_exit_pattern ) );
				}
			}
		}

		// Then hook enters.
		//
		size_t num_enter = 0;
		for ( auto it = text_begin; it <= ( text_end - 4 ); it++ ) {
			auto value = *( const uint32_t* ) it;
			auto ptr = it + 4;

			auto match = [ & ] <size_t N> ( const uint8_t( &p )[ N ] ) {
				return ( ptr + N ) <= text_end && xstd::trivial_equals_n<N>( ptr, p );
			};
			auto detour = [ & ] ( auto target, su::interrupt_type i ) {
				uint8_t result[ 6 ] = { 0xE8, 0x00, 0x00, 0x00, 0x00, ( uint8_t ) i };
				connect( result, it, target.first, *target.second );
				return hook::patch( it, result );
			};

			if ( value == xstd::bit_cast< uint32_t >( enter_identifier ) ) {
				if ( match( isr_enter_pattern ) ) {
					auto id = identify_interrupt( it );
					num_enter++; //xstd::log( "Found ISR_ENTER [#%02x] @ %p\n", ( uint64_t ) id, 0x140000000 + scn->virtual_address + ( it - text_begin ) );
					detour(
						make_enter_stub<&hk_on_isr_enter>( enter_identifier, isr_enter_pattern ),
						id
					);
				}
			}
		}
		xstd::log( "Hooked %llu enters, %llu exits.\n", num_enter, num_exit );
	}
};