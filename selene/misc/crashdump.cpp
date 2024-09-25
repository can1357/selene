#include "crashdump.hpp"
#include <xstd/type_helpers.hpp>
#include <ia32.hpp>
#include <xstd/spinlock.hpp>
#include <ntpp.hpp>
#include <sdk/ki/api.hpp>
#include <sdk/ps/api.hpp>
#include <sdk/kd/api.hpp>
#include <sdk/nt/api.hpp>
#include <sdk/bgp/api.hpp>
#include <sdk/bg/api.hpp>
#include <sdk/bcp/api.hpp>
#include <sdk/hal/api.hpp>
#include <nt/image.hpp>
#include <vmx.hpp>
#include <mcrt/interface.hpp>
#include "../net/lwip.hpp"
#include "../utility/memory.hpp"
#include "../hooks/inline_hooks.hpp"
#include "../hooks/patch_manager.hpp"
#include "../sched/irq.hpp"
#include "../utility/thread.hpp"
#include "../su/su0.hpp"

#include <sdk/nt/subsection_t.hpp>
#include <sdk/nt/control_area_t.hpp>
#include <sdk/nt/kbugcheck_callback_reason_t.hpp>
#include <sdk/nt/kbugcheck_reason_callback_record_t.hpp>

#define DEFAULT_CRASHDUMP 0


namespace gfx {
	struct vec {
		uint32_t x, y;
	};

	uint32_t display_type = 0;
	uint8_t __rect_buffer[ 0x10f00 ];

	static void start() {
		nt::inbv_acquire_display_ownership();
		bgp::fw_acquire_lock();

		uint32_t data[] = {
			( ( uint32_t* ) &bg::internal )[ 2 ],
			( ( uint32_t* ) &bg::internal )[ 1 ],
			( ( uint32_t* ) &bg::internal )[ 3 ],
		};
		display_type = bcp::get_display_type( data );
	}
	static void reset( uint32_t color ) {
		bgp::clear_screen( color );
	}
	static void text( nt::unicode_view str, size_t size ) {
		bcp::display_critical_string( &str, size, size, display_type );
	}
	static void text( nt::unicode_view str, size_t size, uint32_t x, uint32_t y ) {
		auto& c = *( vec* ) &bcp::cursor;
		c = { x, y };
		bcp::display_critical_string( &str, size, size, display_type );
	}
	static void rect2d( uint32_t x, uint32_t y, uint32_t w, uint32_t h, uint32_t color ) {
		gfx::vec pos{ x, y };
		gfx::vec size{ w, h };
		bgp::gx_initialize_rectangle( &size, bgp::get_bits_per_pixel(), &__rect_buffer, sizeof( __rect_buffer ) );
		bgp::gx_fill_rectangle( &__rect_buffer, color );
		bgp::gx_draw_rectangle( &__rect_buffer, &pos );
	}
	static constexpr const char* logo[] = {
		"11111111111111111111111111111111111111111111111111111111111111111111111111111111",
		"11111111111111111111111111111111111111111111111111111111111111111111111111111111",
		"11111111111111111111111111111111111111111111111111111111111111111111111111111111",
		"11111111111111111111111111111111111111111111111111111111111111111111111111111111",
	};
};

namespace crashdump {
	// Named regions.
	//
	static std::tuple<uint64_t, uint64_t, std::string> g_named_region_arr[ 512 ];
	static std::atomic<uint32_t>                       g_named_region_cnt = 0;

	// Adds a named region.
	//
	void name_region( std::span<const uint8_t> rgn, std::string name ) {
		uint32_t id = ++g_named_region_cnt;
		if ( id < std::size( g_named_region_arr ) ) {
			uint64_t start = uint64_t( rgn.data() );
			g_named_region_arr[ id ] = { start, start + rgn.size(), std::move( name ) };
		}
	}

	// Basic helpers.
	//
	FORCE_INLINE static size_t safe_read( any_ptr dst, any_ptr src, size_t n ) {
		// Check for cannonicality.
		//
		if ( int64_t( src.address ) < 0 ) {
			if ( src < km_va_start ) return 0;
			n = std::min<uint64_t>( n, km_va_end - src );
		} else {
			if ( src > um_va_end ) return 0;
			n = std::min<uint64_t>( n, um_va_end - src );
		}

		// If fault allowed, redirect to safe::read.
		//
		irql_t irql = ia32::get_irql();
		if ( irql <= APC_LEVEL && ia32::interrupts_enabled() && !( ( ( std::atomic<uint32_t>* ) &ki::bug_check_active )->load( std::memory_order::relaxed ) & 3 ) ) {
			return n - safe::copy( dst, src, n );
		}

		// Otherwise, enter the VA->PA loop:
		//
		auto src0 = src;
		while ( n > 0 ) {
			// Resolve the PTE.
			//
			size_t copy_count = 0;
			{
				ia32::set_irql( IPI_LEVEL );
				auto [pte, depth] = mem::lookup_pte( src );
				if ( pte->present ) {
					// Resolve the page boundary.
					//
					uint64_t pa_start =  pte->page_frame_number << 12;
					size_t   page_size = mem::page_size( depth );
					uint64_t pa =        pa_start | ( src & ( page_size - 1 ) );
					copy_count = std::min( pa_start + page_size - pa, n );

					// Issue the copy.
					//
					memcpy( dst, mem::get_phys_base() + pa, copy_count );
				}
				ia32::set_irql( irql );
			}

			// Break if we failed.
			//
			if ( !copy_count ) break;

			// Otherwise increment iterators.
			//
			src +=        copy_count;
			dst +=        copy_count;
			n   -=        copy_count;
		}
		return src - src0;
	}
	FORCE_INLINE static bool is_adr_valid( any_ptr p ) {
		uint8_t tmp;
		return safe_read( &tmp, p, 1 ) != 0;
	}
	template<size_t N>
	FORCE_INLINE static void memcpy_nwp_cr0( void* dst, const void* src ) {
		// Raise IRQL.
		//
		irql_t prev_irql = ia32::get_irql();
		ia32::set_irql( std::max<irql_t>( prev_irql, DISPATCH_LEVEL ) );

		// Disable write protection.
		//
		auto cr0 = ia32::read_cr0();
		auto cr4 = ia32::read_cr4();
		ia32::write_cr4( { .flags = cr4.flags & ~CR4_CONTROL_FLOW_ENFORCEMENT_ENABLE_FLAG } );
		ia32::write_cr0( { .flags = cr0.flags & ~CR0_WRITE_PROTECT_FLAG } );

		// Do the copy.
		//
		if constexpr ( N == 1 )
			( ( std::atomic<uint8_t>* ) dst )->exchange( *( const uint8_t* ) src );
		else if constexpr ( N == 2 )
			( ( std::atomic<uint16_t>* ) dst )->exchange( *( const uint16_t* ) src );
		else if constexpr ( N == 4 )
			( ( std::atomic<uint32_t>* ) dst )->exchange( *( const uint32_t* ) src );
		else if constexpr ( N == 8 )
			( ( std::atomic<uint64_t>* ) dst )->exchange( *( const uint64_t* ) src );
		else
			memcpy( dst, src, N );

		// Restore cr0 and the IRQL.
		//
		ia32::write_cr0( cr0 );
		ia32::write_cr4( cr4 );
		ia32::set_irql( prev_irql );
	}

	// Creates the snapshot provider.
	//
	static trace::provider snapshot_provider = {
		.safe_read = [ ] ( void* dst, any_ptr p, size_t n ) {
			return safe_read( dst, p, n );
		},
		.stack_query = [ ] ( any_ptr ptr ) -> std::pair<any_ptr, size_t> {
			auto thr = ke::get_ethread();
			auto irql = ia32::get_effective_irql();
			if ( ptr < um_va_start && irql == PASSIVE_LEVEL ) {
				if ( auto tib = safe::read( &( ( nt::teb_t* ) thr->tcb.teb )->nt_tib ) ) {
					xstd::numeric_range<any_ptr> rng{ tib->stack_limit, tib->stack_base };
					if ( rng.contains( ptr ) ) {
						return { rng.first, rng.size() };
					}
				}
			} else {
				auto info = ntpp::query_stack_information( ptr, irql & 0xF, thr );

				if ( info.type == nt::kernel_stack_limits_t::maximum_stack_limits ) {
					for ( auto& vm : su::vmcs_table ) {
						if ( vm && vm->is_monitor_stack( ptr ) ) {
							info.range = vm->get_monitor_stack_range();
							info.type = nt::kernel_stack_limits_t::swap_busy_stack_limits;
						}
					}
				}
				if ( info.type == nt::kernel_stack_limits_t::maximum_stack_limits ) {
					if ( auto ctx = thread::get_context( thr ) ) {
						xstd::numeric_range<any_ptr> rng{ctx->shadow_stack, ctx->shadow_stack + ctx->stack_size};
						if ( rng.contains( ptr ) ) {
							info.range = rng;
							info.type = nt::kernel_stack_limits_t::swap_busy_stack_limits;
						}
					}
				}
				if ( info.type != nt::kernel_stack_limits_t::maximum_stack_limits && info.range.contains( ptr ) ) {
					return { info.range.first, info.range.size() };
				}
			}
			return { nullptr, 0 };
		},
		.enlighten_trapframe = [ ] ( void* tf ) {
			thread::enlighten_trapframe( ( nt::trapframe* ) tf );
		},
	};

	// Global state.
	//
	static xstd::recursive_spinlock g_lock = {};
	static nt::context g_bugcheck_ctx = {};
	static const trace::snapshot* volatile g_last_snapshot = nullptr;

	// Fills the common info in the snapshot and preunwinds.
	//
	static void ready_snapshot( trace::snapshot* snapshot, bool user )
	{
		// Fill environment information.
		//
		snapshot->cpu_brand = ia32::get_brand();
		snapshot->nt_build = ke::get_user_shared_data()->nt_build_number;
		snapshot->token = apollo::token.data;

		auto process = ke::get_eprocess();
		auto& arr = process->image_file_name;
		snapshot->process_name = { arr.begin(), std::find( arr.begin(), arr.end(), 0 ) };

		// Fill the image list.
		//
		{
			// Kernel.
			//
			snapshot->apollo_images.push_back( { apollo::mapping } );

			// Fill basic driver list.
			//
			if ( su::driver_list_init ) {
				for ( auto& sdr : su::dump_driver_list() ) {
					trace::nt_image_desc desc = {
						.base_address =   sdr->info.base_address,
						.length =         sdr->info.in_memory_size,
						.pdb_path =       sdr->info.pdb_path,
						.pdb_identifier = sdr->info.pdb_identifier,
						.image_name =     sdr->info.file_name,
					};
					snapshot->add_image( std::move( desc ) );
				}
			} else {
				for ( auto&& img : ntpp::module_list{ ntpp::no_lock_t{} } ) {
					snapshot->add_image( img );
				}
			}
		}

		// Fill the user-mode image list.
		//
		if ( user && process != ntpp::get_initial_system_process() && ia32::get_effective_irql() <= APC_LEVEL ) {
			ntpp::enum_vads( process, [ & ] ( nt::mmvad_t* vad ) {
				if ( vad->core.vad_flags.vad_type != VadImageMap )
					return;
				nt::subsection_t* subsection = vad->subsection;
				if ( !subsection )
					return;
				nt::control_area_t* control_area = subsection->control_area;
				if ( !control_area )
					return;
				nt::file_object_t* file_object = ( nt::file_object_t* ) ( control_area->file_pointer.value & ~0xFull );
				if ( !file_object )
					return;
				std::wstring_view path = file_object->file_name;
				size_t pos = path.rfind( '\\' );
				if ( pos != std::string::npos )
					path = path.substr( pos + 1 );

				auto lo = ntpp::vad_base_vpn( vad ) << 12;
				auto hi = ( ntpp::vad_limit_vpn( vad ) + 1 ) << 12;
				snapshot->add_image( {
					.base_address = lo,
					.length =       hi - lo,
					.image_name =   xstd::utf_convert<char>( path )
				} );
			} );
		}

		// Fill misc information.
		//
		size_t named_region_cnt = std::min<size_t>( g_named_region_cnt.load( std::memory_order::relaxed ), std::size( g_named_region_arr ) );
		snapshot->named_va.assign( &g_named_region_arr[ 0 ], &g_named_region_arr[ named_region_cnt ] );
		snapshot->named_va.emplace_back( uint64_t( mem::lookup_pfn( 0 ) ), uint64_t( mem::lookup_pfn( mem::max_valid_pfn() ) ), "MmPfnDatabase"_ss );
		snapshot->ud_context[ "ptebase"_ss ] = mem::self_ref_index();

		// Preunwind and fill image unwind info.
		//
		snapshot->preunwind();
		snapshot->fill_unwind_data();
	}

	// Traces the stack from the current function.
	//
	std::unique_ptr<trace::snapshot> trace_stack( trace::reduced_context ctx, bool user )
	{
		auto local_snap = std::make_unique<trace::snapshot>( snapshot_provider );
		local_snap->exception_code = 0;
		local_snap->exception_address = ( uint64_t ) _ReturnAddress();
		local_snap->context = { &ctx };
		ready_snapshot( local_snap.get(), user );
		return local_snap;
	}

	// Saves the details of bugchecks before the actual invocation.
	//
	alignas( 64 ) static hook::record kd_trap_hook = {};
	[[must_tail]] MS_SSE2AVX static uint64_t hk_kd_trap( nt::trapframe* trap_frame, nt::exframe* exception_frame, nt::exception_record_t* exception_record, nt::context* context_record, uint8_t previous_mode, uint8_t second_chance )
	{
#if !DEFAULT_CRASHDUMP
		{
			thread::shadow_guard _g{};

			// Determine if it's a KD trap or not.
			//
			bool is_kd_trap =
				( exception_record->exception_code == STATUS_BREAKPOINT || exception_record->exception_code == 0x4000001F ) &&
				exception_record->number_parameters && exception_record->exception_information[ 0 ];

			// If last chance exception from kernel:
			//
			if ( !is_kd_trap && !previous_mode && second_chance ) {
				ia32::scope_irql<DISPATCH_LEVEL, true> _i{};

				// If first instance:
				//
				if ( g_lock.try_lock() ) {
					// Get the exception context.
					//
					auto* ctx = context_record;
					if ( !ctx && trap_frame ) {
						ntpp::trap_to_context( &g_bugcheck_ctx, trap_frame, exception_frame );
						ctx = &g_bugcheck_ctx;
					}

					// If we could make a valid one:
					//
					if ( ctx ) {
						// Fetch the exception details.
						//
						std::vector<uint64_t> parameters = {};
						uint64_t exception_code = STATUS_UNSUCCESSFUL;
						any_ptr exception_address = ctx->rip;
						if ( exception_record ) {
							exception_code = exception_record->exception_code;
							exception_address = exception_record->exception_address;
							parameters = {
								exception_record->exception_information.begin(),
								exception_record->exception_information.begin() + exception_record->number_parameters
							};
						}

						// Create the snapshot.
						//
						if constexpr ( is_debug_build() )
							xstd::log( "Exception 0x%x at %p\n", exception_code, exception_address );

						auto snap = trace_stack( ctx );
						snap->exception_code = exception_code;
						snap->exception_address = exception_address;
						snap->exception_arguments = std::move( parameters );
						snap->exception_message = "An unexpected kernel exception occured."_es;
						snap->cr2 = ia32::read_cr2();
						snap->cr8 = ia32::get_effective_irql( std::nullopt, _i.prev );
						g_last_snapshot = snap.release();
						if constexpr ( is_debug_build() )
							xstd::log( "Snapshot saved!\n" );
					}
					// Otherwise unlock, we've failed.
					//
					else {
						g_lock.unlock();
					}
				}
			}
		}
#endif

		// Skip the KD stub logic, pass to KdpTrap.
		//
		return kd_trap_hook( trap_frame, exception_frame, exception_record, context_record, previous_mode, second_chance );
	}

	// Handling of DPCs.
	//
	static void rundown_dpc_queue()
	{
		if ( auto prcb = ke::get_kprcb(); prcb->dpc_request_summary & 0xBF ) {
			ia32::disable();
			ki::retire_dpc_list( prcb );
			ia32::enable();
		}
	}

	// Implementation of the idle loop for all dead processors during a bugcheck.
	//
	NO_INLINE static void bugcheck_loser_trap [[noreturn]] ()
	{
		ia32::set_effective_irql( DISPATCH_LEVEL );
		while ( true ) {
			rundown_dpc_queue();
		}
	}

	// Actual bugcheck hook.
	//
	static hook::record ke_bug_check2_hook = {};
	static uint64_t hk_ke_bug_check2( uint32_t code, uint64_t p1, uint64_t p2, uint64_t p3, uint64_t p4, uint64_t p_trap )
	{
		ia32::disable();
		auto* kpcr = ke::get_kpcr( nt::read_pcid() );
		ia32::write_gsbase( kpcr );
		ia32::set_idt( kpcr->idt_base, 0x100 );
		ia32::set_gdt( kpcr->gdt_base, 0xB );
#if DEFAULT_CRASHDUMP
		ia32::enable();
		return ke_bug_check2_hook( code, p1, p2, p3, p4, p_trap );
#else
		// Partially restore processor state just incase.
		//
		uint64_t cr2 = ia32::read_cr2();
		uint64_t cr8 = kpcr->prcb.debugger_saved_irql;
		if ( auto ctx = kpcr->prcb.context; ctx && !ctx->eflags.interrupt_enable_flag )
			cr8 |= NO_INTERRUPTS;
		if constexpr ( is_debug_build() )
			xstd::log( "Bugcheck 0x%x (%p, %p, %p, %p) CPU #%d\n", code, p1, p2, p3, p4, ia32::read_pcid() );

		// Disable watchdog timeout and TF confusion.
		//
		*( uint8_t* ) &ke::enable_watchdog_timeout = false;
		thread::tf_confusion_enabled = false;

		// EOI.
		//
		apic::controller pic;
		pic.end_of_interrupt();
		pic.end_of_interrupt();
		pic.end_of_interrupt();

		// Set bugcheck active, freeze every other CPU.
		//
		static std::atomic<nt::kpcr_t*> winner_prc = nullptr;
		nt::kpcr_t* winner_expected = nullptr;
		if ( !winner_prc.compare_exchange_strong( winner_expected, kpcr ) ) {
			if ( winner_expected != kpcr )
				bugcheck_loser_trap();
		} else {
			scheduler::queue_async( bugcheck_loser_trap, scheduler::priority::dpc, apic::shorthand::all_but_this, 0, false );
		}
		( ( std::atomic<uint32_t>* ) &ki::bug_check_active )->store(2);

		// If the first bugcheck or the KdTrap snapping mechanism did fault:
		//
		auto snap = g_last_snapshot;
		if ( !snap ) {
			if constexpr ( is_debug_build() )
				xstd::log( "Snapshotting bugcheck 0x%x (%p, %p, %p, %p)\n", code, p1, p2, p3, p4 );

			// Unwind one frame back from the partially unwinded one KeBugCheckEx writes.
			//
			auto* ctx = kpcr->prcb.context;
			auto uw_rsp = ctx->rsp + 0x8;
			auto uw_rip = *( uint64_t* ) ctx->rsp;

			// Parge bugcheck information to find a trapframe or context where possible.
			//
			nt::trapframe* tf = nullptr;
			nt::context* ext_ctx = nullptr;
			any_ptr bugcheck_dispatch_ptr = ( void* ) &ki::bug_check_dispatch;
			if ( bugcheck_dispatch_ptr <= uw_rip && uw_rip <= ( bugcheck_dispatch_ptr + 0x80 ) )
				tf = ( nt::trapframe* ) ( ctx->rbp - 0x80 );
			else if ( code == 0x139 || code == 0x7f )
				tf = ( nt::trapframe* ) p2;
			else if ( code == 0x50 || code == 0x3b )
				tf = ( nt::trapframe* ) p3;
			else if ( code == 0x3d || code == 0x3c )
				ext_ctx = ( nt::context* ) p2;
			else if ( code == 0x7e )
				ext_ctx = ( nt::context* ) p4;

			auto valid_sys_frame = [ ] ( auto* frame ) {
				return
					frame >= km_va_start &&
					mem::is_address_valid( &frame->seg_cs ) &&
					std::bit_cast< uint16_t >( frame->seg_cs ) == 0x10 &&
					mem::is_address_valid( &frame->rsp ) &&
					frame->rsp >= km_va_start &&
					mem::is_address_valid( frame->rsp );
			};
			if ( valid_sys_frame( ext_ctx ) ) {
				ctx = ext_ctx;
			} else if ( valid_sys_frame( tf ) ) {
				cr2 = tf->fault_address;
				if ( is_kernel_va( uw_rsp ) && mem::is_address_valid( uw_rsp ) ) {
					// Caller stack will be KEXCEPTION_FRAME.
					//
					auto exf = ( nt::exframe* ) uw_rsp;

					// Translate to CONTEXT.
					//
					ntpp::trap_to_context( &g_bugcheck_ctx, tf, exf );
					ctx = &g_bugcheck_ctx;
				}
			}

			// Create the snapshot.
			//
			auto nsnap = trace_stack( ctx );
			nsnap->exception_code = code;
			nsnap->exception_address = 0;
			nsnap->exception_arguments = { p1, p2, p3, p4 };
			nsnap->exception_message = "A bugcheck occured."_es;
			nsnap->cr2 = cr2;
			nsnap->cr8 = cr8;
			snap = nsnap.release();
			if constexpr ( is_debug_build() )
				xstd::log( "Snapshot saved!\n" );
		}

		// Serialize the snapshot.
		//
		auto serialized_snapshot = xstd::serialize( *snap );

		// Submit via VMX channel if debug build.
		//
		if constexpr ( is_debug_build() ) {
			if ( vmx::channel::success ) {
				xstd::vec_buffer copy = {};
				encode_crashdump( copy, serialized_snapshot );
				for ( size_t n = 0; n != 3; n++ ) {
					vmx::channel channel = vmx::channel::open( n & 1 );
					if ( channel && channel.send_msg( { "log crshdmp-- ", std::string_view{ ( char* ) copy.data(), copy.size() } } ) ) {
						xstd::log( "<Guest> Crashdump forwarding successful!\n" );
						//	ia32::spin();
						break;
					}
				}
			}
		}

		// If we can enable networking:
		//
		static volatile bool last_net_dump_bugchecked = false;
		bool networked_dump_ok = false;
		if ( lwip::initialized && !lwip::adapter_list.empty() && !last_net_dump_bugchecked && !serialized_snapshot.empty() ) {
			last_net_dump_bugchecked = true;
			ia32::set_effective_irql( DISPATCH_LEVEL );

			// Reset core lock forcefully.
			//
			new ( &xstd::net::core_lock ) xstd::recursive_xspinlock<>();

			// Try sending the crashdump.
			//
			uint64_t lwip_interval = crt::to_cycles( TCP_TMR_INTERVAL * 1ms );
			uint64_t lwip_next_tick = 0;
			xstd::log( "Trying to send crashdump...\n" );
			networked_dump_ok = submit_crashdump_critical( serialized_snapshot, [ & ] {
				// Rundown DPC queue, yield.
				//
				rundown_dpc_queue();
				yield_cpu();

				// Tick the LWIP stack if relevant.
				//
				if ( std::unique_lock lock{ xstd::net::core_lock, std::try_to_lock } ) {
					if ( lwip_next_tick <= ia32::read_tsc() ) {
						lwip::tick_at_dpc_level();
						lwip_next_tick = lwip_interval + ia32::read_tsc();
					}
				}
			} );
			xstd::log( "=> %s\n", networked_dump_ok ? "OK" : "Timeout" );
		} else {
			xstd::log( "Failed to enable networking for crashdump.\n" );
		}

		if constexpr ( is_release_build() ) {
			// Disable crashdumps.
			//
			constexpr uint8_t ret_stub[] = { 0x31, 0xC0, 0xC3, 0x00 };
			memcpy_nwp_cr0<4>( ( void* ) &io::write_crash_dump, ret_stub );
			*( bool* ) &nt::crashdmp_initialized = false;
			*( void** ) &nt::crashdmp_dump_block = nullptr;
			*( void** ) &nt::crashdmp_image_entry = nullptr;

			// If we did succeed making a networked dump:
			//
			if ( networked_dump_ok ) {
				gfx::start();
				gfx::reset( 0xff0000ff );

				size_t h = 1;
				for ( auto e : gfx::logo ) {
					for ( size_t w = 0; w != 80; w++ ) {
						if ( e[ w ] != '1' ) {
							gfx::rect2d( w * 2, h * 5, 2, 5, 0xFF'FF'FF'FF );
						}
					}
					h += 1;
				}

				gfx::text( L"Whoops!\n", 22, 10, 180 );
				auto t0 = xstd::time::now() + 10s;
				while ( xstd::time::now() < t0 )
					ia32::usleep();
			}
			hal::return_to_firmware( 0 );
			ia32::write_cr3( { .flags = 0 } );
			unreachable();
		}

		( ( std::atomic<uint32_t>* )& ki::bug_check_active )->store( 0 );
		*( bool* ) &iop::auto_reboot = true;

		// Continue with the bugcheck.
		//
		return ke_bug_check2_hook( code, p1, p2, p3, p4, p_trap );
#endif
	}

	// Initiates a bugcheck.
	//
	void bugcheck [[noreturn]] ( const trace::snapshot* snap, int code, uint64_t arg0, uint64_t arg1, uint64_t arg2 )
	{
		auto irql = ia32::get_effective_irql();
		ia32::disable();

		auto* kpcr = ke::get_kpcr( nt::read_pcid() );
		kpcr->prcb.debugger_saved_irql = irql & 0xF;

		if ( kpcr->prcb.context ) {
			ntpp::capture_context( kpcr->prcb.context );
			if ( !( irql & NO_INTERRUPTS ) )
				kpcr->prcb.context->eflags.flags |= EFLAGS_INTERRUPT_ENABLE_FLAG_FLAG;
		}

		kpcr->prcb.processor_state.special_registers.cr0 = ia32::read_cr0().flags;
		kpcr->prcb.processor_state.special_registers.cr2 = ia32::read_cr2().address;
		kpcr->prcb.processor_state.special_registers.cr3 = ia32::read_cr3().flags;
		kpcr->prcb.processor_state.special_registers.cr4 = ia32::read_cr4().flags;
		kpcr->prcb.processor_state.special_registers.cr8 = irql & 0xF;
		kpcr->prcb.processor_state.special_registers.mx_csr = ia32::read_mxcsr();
		kpcr->prcb.processor_state.special_registers.xcr0 = ia32::read_xcr( 0 );

		if ( irql < DISPATCH_LEVEL )
			ia32::set_irql( DISPATCH_LEVEL );
		if ( !( irql & NO_INTERRUPTS ) )
			ia32::enable();
		++std::atomic_ref{ *( int32_t* ) &ki::hardware_trigger };

		if ( snap && g_lock.try_lock() ) {
			g_last_snapshot = snap;
		}
		hk_ke_bug_check2( code, arg0, arg1, arg2, 0, 0 );
		unreachable();
	}


	// Used to prevent Windows crashdumps until we initialize.
	//
	using lock_hook_t = std::array<uint8_t, 8>;
	static lock_hook_t lock_prev = {};
	static constexpr lock_hook_t lock_stub = { 0x31, 0xC0, 0x0F, 0x22, 0xD8, 0x00, 0x00, 0x00 };
	[[gnu::constructor( 101 )]] static void lock()
	{
		if constexpr ( is_release_build() ) {
			any_ptr ptr = ( void* ) &io::save_bug_check_progress;
			lock_prev = *( const lock_hook_t* ) ptr;
			memcpy_nwp_cr0<8>( ptr, &lock_stub );
		}
	}
	static void unlock()
	{
		if constexpr ( is_release_build() ) {
			any_ptr ptr = ( void* ) &io::save_bug_check_progress;
			memcpy_nwp_cr0<8>( ptr, &lock_prev );

			for ( auto it = ptr; it < ( ptr + sizeof( lock_hook_t ) ); ) {
				auto pa = mem::get_physical_address( it );
				any_ptr it_limit = ( it + 0x1000 ) & ~0xFFF;
				if ( auto sh = hook::lookup_shadow_pfn( pa >> 12 ) ) {
					memcpy(
						mem::phys_ptr{ ( *sh << 12 ) + ( it & 0xFFF ) },
						lock_prev.data() + ( it - ptr ),
						std::min( it_limit, ptr + sizeof( lock_hook_t ) ) - it
					);
				}
				it = it_limit;
			}
		}
	}

	// Initializes the dump collector used when the system crashes.
	//
	NO_INLINE void init()
	{
		// Add the bugcheck hooks and reverse the crash lock.
		//
		hook::add( &ke_bug_check2_hook, &ke::bug_check2, &hk_ke_bug_check2 );
		unlock();
		hook::add( &kd_trap_hook, &kd::trap, &hk_kd_trap );
		is_initialized = true;

		// Disable capsule support.
		//
		iop::remove_dump_capsule_support();
	}
};
