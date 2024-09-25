#include <xstd/intrinsics.hpp>
#include <mcrt/interface.hpp>
#include <sdk/ex/api.hpp>
#include <sdk/ke/api.hpp>
#include <sdk/mm/api.hpp>
#include <xstd/text.hpp>
#include <sdk/dbg/api.hpp>
#include <iterator>
#include <vmx.hpp>
#include "misc/pool.hpp"
#include <ntpp.hpp>
#include "misc/crashdump.hpp"
#include <apollo/server_string_def.hpp>
#include "su/vm.hpp"
#include "sched/irq.hpp"

namespace crt
{
	[[gnu::malloc]] FORCE_INLINE void* allocate( size_t n ) { return pool::allocate( n ); }
	[[gnu::malloc]] FORCE_INLINE void* allocate_aligned( size_t n, size_t a ) { return pool::allocate_aligned( n, a ); }
	FORCE_INLINE void* reallocate( void* p, size_t n ) { return pool::reallocate( p, n ); }
	FORCE_INLINE void deallocate( void* p ) { return pool::deallocate( p ); }

	static bool g_vmware_backdoor = false;
	static xstd::circular_buffer g_log_buffer = {}; // [2len + buf]
	static std::atomic<int>      g_printer_workers = 0;
	static constexpr size_t      max_deferred_log_length = 512;

	NO_INLINE static void flush_logs() {
		for ( size_t i = 0; i != 0xfff; i++ ) {
			// Break out if theres not enough space to fit a full message.
			//
			auto [pos, sz] = g_log_buffer.peek();
			if ( sz <= 2 ) break;

			// Read the message.
			//
			static char buffer[ max_deferred_log_length ] = { 0 };
			uint16_t len = 0;
			g_log_buffer.read_raw( &len,         pos,     2   );
			g_log_buffer.read_raw( &buffer[ 0 ], pos + 2, len );
			g_log_buffer.consume( pos, 2u + len );

			// Write out.
			//
			nt::ascii_view ntview{ buffer, len };
			dbg::print_ex( 0, 0, "[SR] %Z\n", &ntview );
		}
		g_printer_workers--;
	}
	NO_INLINE static void write_log_deferred( std::string_view sv ) {
		uint16_t msg_length = ( uint16_t ) std::min( sv.size(), max_deferred_log_length );

		// Fail if we couldn't reserve the space.
		//
		auto pos = g_log_buffer.reserve( uint32_t( msg_length ) + 2 );
		if ( pos == std::string::npos ) {
			return;
		}

		// Write the header and the message.
		//
		g_log_buffer.write_raw( pos,     &msg_length, 2 );
		g_log_buffer.write_raw( pos + 2, sv.data(), msg_length );

		// Commit the message.
		//
		g_log_buffer.commit( uint32_t( msg_length ) + 2 );

		// Queue a worker if there is none.
		//
		int expected = 0;
		if ( g_printer_workers.compare_exchange_strong( expected, 1 ) ) {
			scheduler::queue_dpc( xstd::const_tag<&flush_logs>{}, true );
		}
	}

	template<typename... Tx>
	static bool vmlog( Tx... msg ) {
		for ( size_t n = 0; n != 3; n++ ) {
			vmx::channel channel = vmx::channel::open( n & 1 );
			if ( channel && channel.send_msg( { "log dbgmch-- ", std::string_view{msg}... } ) ) {
				g_vmware_backdoor = true;
				return true;
			}
		}
		return false;
	}

	RINLINE void write_console( std::string_view msg, bool new_line )
	{
		if constexpr ( is_debug_build() ) {
			// Try logging through vmware backdoor.
			//
			bool has_interrupts = ia32::interrupts_enabled();
			if ( g_vmware_backdoor || has_interrupts ) {
				if ( vmlog( msg, new_line ? "\n" : "" ) ) {
					return;
				}
			}

			// Adjust the message and try logging using DbgPrint.
			//
			if ( msg.ends_with( '\n' ) )
				msg.remove_suffix( 1 );
			if ( has_interrupts && ia32::get_irql() <= DISPATCH_LEVEL ) {
				nt::ascii_view ntview{ msg };
				dbg::print_ex( 0, 0, "[SR] %Z\n", &ntview );
			} else {
				write_log_deferred( msg );
			}
		}
	}
	RINLINE void exit( int code )
	{
		crashdump::bugcheck( nullptr, 0xd0, code );
		unreachable();
	}
	NO_INLINE void report_error( const char* str )
	{
		auto ctx = trace::capture_context();

		// Log the error.
		//
		if constexpr ( is_debug_build() )
			vmlog( "Error: ", str, "\n" );

		// Send a stack trace to the server.
		//
		auto trace = crashdump::trace_stack( ctx );
		trace->exception_message = str;
		crashdump::bugcheck( trace.get(), 0xcf, ( uint64_t ) str );
	}
	RINLINE void schedule_work( void( __cdecl* fn )( void* ), void* arg ) { XSTD_CHORE_SCHEDULER( fn, arg, 0, {} ); }
};
