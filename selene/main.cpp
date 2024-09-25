#include <xstd/intrinsics.hpp>
#include <mcrt/interface.hpp>
#include <xstd/logger.hpp>
#include <xstd/chore.hpp>
#include <xstd/text.hpp>
#include <apollo/attributes.hpp>
#include <ntpp.hpp>
#include <ia32.hpp>
#include <memory>
#include <map>
#include <trace/client.hpp>
#include <trace/client_info.hpp>
#include "misc/nopg.hpp"
#include "net/lwip.hpp"
#include "net/lwip_bridge.hpp"
#include "utility/memory.hpp"
#include "sched/irq.hpp"
#include "sched/passive.hpp"
#include "utility/apic.hpp"
#include "su/proxy.hpp"
#include "su/vm.hpp"
#include "misc/crashdump.hpp"
#include "misc/profiler.hpp"
#include "misc/escape.hpp"
#include "misc/shellcode_dumper.hpp"
#include "misc/ntdll_info.hpp"
#include "utility/memory_isolation.hpp"
#include "utility/thread.hpp"
#include "hooks/isr_hooks.hpp"
#include "hooks/irp_hooks.hpp"
#include "hooks/sys_hooks.hpp"
#include "misc/oswarden.hpp"
#include "clyde/clyde.hpp"
#include "gdb/stub.hpp"
#include "gdb/ce.hpp"
#include <sdk/verifier/api.hpp>
#include <sdk/mou/api.hpp>
#include <sdk/kbd/api.hpp>
#include <sdk/mi/flags_t.hpp>

#define DBG_TRACE() xstd::log( "I'm at line:" xstringify( __LINE__ ) "\n" ); ntpp::sleep( 0.8s )

NO_INLINE static void post_init( const std::wstring& path )
{
	// Start the supervisors.
	//
	xstd::log( "Initializing virtualization...\n" );
	su::init();
	xstd::log( "Initializing user-mode monitor...\n" );
	su::r3::init();
	xstd::log( "Initializing kernel-mode monitor...\n" );
	su::r0::init(); // -- Has to be the last hook!

	// Dump the profiler data and disable until further instructions.
	//
#if PROFILER_BUILD
	xstd::log( "Dumping profiler state...\n" );
	profiler::set_state( false );
	profiler::dump();
#endif

	// Clean process traces.
	//
	oswarden::clean_process_traces( path );

	// Signal ready.
	//

	// Allow PoIdle again.
	//
	hook::isr::cstate_disable = false;
}

extern "C" [[init_discardable]] uint64_t entry_point( uint64_t, uint64_t* original_stack )
{
	ia32::scope_irql<APC_LEVEL> girql{};

	// Verify environment.
	//
	constexpr auto environment_error_dbg = [ ] ( const char* e ) FORCE_INLINE {
		if constexpr ( is_debug_build() ) {
			ke::bug_check_ex( 0xdd, ( uint64_t ) e, ( uint64_t ) e, ( uint64_t ) e, ( uint64_t ) e );
		}
		ia32::write_cr3( { .flags = 0 } );
	};
	if ( ia32::read_cr4().linear_addresses_57_bit != XSTD_IA32_LA57 ) {
		environment_error_dbg( "Unexpected LA57 state."_es );
	} else if ( !mem::iso::is_isolated( mem::get_pfn( &entry_point ), true ) ) {
		environment_error_dbg( "Entry point is not isolated."_es );
	} else if ( mem::lookup_va_type( &entry_point ) != mi::system_va_type_t::driver_images ) {
		environment_error_dbg( "Entry point is not a driver page."_es );
	} else {
		for ( size_t i = 256; i != 512; i++ ) {
			if ( mem::get_pxi_type( i ) == mi::system_va_type_t::driver_images && i != mem::get_driver_px() ) {
				environment_error_dbg( "Multiple driver PXEs found."_es );
			}
		}
	}

	// Initialize APIC.
	//
	xstd::log( "Initializing APIC...\n" );
	apic::init();

	// Disable watchdog in debug build.
	//
	if constexpr ( is_debug_build() ) {
		*( uint8_t* ) &ke::enable_watchdog_timeout = false;
	}

	// Start profiling.
	//
#if PROFILER_BUILD
	profiler::set_state( true );
#endif

	// Lock the few images we need to add all our hooks, initialize memory isolation.
	//
	xstd::log( "Initializing memory...\n" );
	const void* early_lock_ip_list[] = {
		&ke::bug_check,
		&ndis::return_net_buffer_lists,
		&mou::mouse_class_service_callback,
		&kbd::keyboard_class_service_callback
	};
	for ( auto img : early_lock_ip_list ) {
		auto ldr = mem::lookup_image( img );
		if ( !ldr ) [[unlikely]]
			environment_error_dbg( "Failed to find early lock driver"_es );
		mem::lock_image( ldr );
	}
	mem::iso::init();

	// Stuff and things ????.
	//
	auto& flags = *( mi::flags_t* ) &mi::flags;
	xstd::make_atomic( flags.access_bit_fence_required ) = false;

	// Initialize crashdump.
	//
	xstd::log( "Initializing crashdump...\n" );
	crashdump::init();

	// Initialize Hooks, APIC and the scheduler.
	//
	xstd::log( "Initializing scheduler...\n" );
	hook::isr::init();
	scheduler::init();

	// Disable patchguard.
	//
	xstd::log( "Disabling patchguard...\n" );
	nopg::init();

	// Suspend all threads in crescent.
	//
	for ( auto&& thread : ntpp::thread_list{ ke::get_eprocess() } )
		if ( thread != ke::get_ethread() )
			ntpp::suspend_thread( thread );

	// Initialize passive-level scheduling.
	//
	xstd::log( "Initializing TLS and workers...\n" );
	thread::init();
	scheduler::passive::init();

	// Initialize misc hooks and escape port.
	//
	xstd::log( "Initializing misc hooks...\n" );
	hook::irp::init();

	// Initialize OS warden and shellcode dumper.
	//
	xstd::log( "Initializing hardenings...\n" );
	oswarden::init();
	shellcode_dumper::init();

	// Initialize the networking stack.
	//
	xstd::log( "Initializing networking...\n" );
	lwip::bridge::init();
	lwip::init();

	// Initialize NTDLL information, clear driver traces.
	//
	ntdll_info::init();
	oswarden::clean_driver_traces();

	// Initialize GDB & CE.
	//
	xstd::log( "Initializing GDB/CE...\n" );
	gdb::init();
	cesrv::init();

	// Clear shellcode pool.
	//
	memset( (void*) xstd::align_down( *original_stack, 0x1000 ), 0, 0x1000 );

	// Start post initialization after it terminates.
	//
	auto process = ke::get_eprocess();
	xstd::chore( [ path = std::wstring{ ntpp::get_image_path( process ) } ] {
		post_init( path );
	} );

	// Terminate the process.
	//
	girql.reset();
	ntpp::terminate_process( process );
	unreachable();
}
