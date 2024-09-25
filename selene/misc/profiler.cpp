#include "profiler.hpp"
#include <xstd/chore.hpp>
#include <mcrt/interface.hpp>
#include <ia32.hpp>
#include <trace/sjson.hpp>
#include <vector>
#include <xstd/concurrent_arena.hpp>
#include <ntpp.hpp>

#pragma clang attribute push (__no_instrument, apply_to = function)

// Global event context.
//
extern "C" { extern std::atomic<uint64_t> __crt_event_context[]; };

namespace profiler
{
	// Configuration.
	//
	static bool enable = false;
	static uint64_t record_threshold_cycles = 0;
	static uint64_t event_threshold_cycles = 0;

	// Global event list.
	//
	struct [[gnu::packed]] event_entry
	{
		const char* name;
		uint64_t ts;
		uint64_t dur;
		uint32_t tid;
		uint8_t  irql;
	};
	static constexpr size_t arena_size = 1_mb / sizeof( event_entry );
	inline xstd::shared_spinlock evt_reloc_lock;
	inline xstd::concurrent_arena<event_entry> evt_arena( arena_size );
	inline std::list<xstd::concurrent_arena<event_entry>> evt_backlog;

	// Event writer.
	//
	struct context { uint64_t timestamp; };
	NO_AVX NO_INLINE static void write( context* ctx, const char* name, uint64_t id )
	{
		// Skip if below the recording threshold.
		//
		auto timestamp = ia32::read_tscp().first;
		size_t dur = timestamp - ctx->timestamp;
		if ( dur < record_threshold_cycles )
			return;

		// If the total effect this event had on the program has reached the threshold:
		//
		if ( ( __crt_event_context[ id ] += dur ) > event_threshold_cycles )
		{
			// Skip if we can't acquire the lock.
			//
			tracer_lock lock{};
			if ( !lock )
				return;

			// Create the event entry.
			//
			event_entry evt = {
				name,
				ctx->timestamp,
				( uint64_t ) dur,
				( uint32_t ) ( uint64_t ) ntpp::get_client_id().unique_thread,
				( uint8_t ) ( ia32::interrupts_enabled() ? ia32::get_irql() : HIGH_LEVEL )
			};
			ia32::scope_irql<HIGH_LEVEL> ig{};

			// Try to push it on the arena.
			//
			evt_reloc_lock.lock_shared();
			if ( evt_arena.emplace( evt ) ) [[likely]]
			{
				evt_reloc_lock.unlock_shared();
				return;
			}

			// Upgrade the lock and try emplacing again in case we were raced.
			//
			evt_reloc_lock.upgrade();
			if ( evt_arena.emplace( evt ) ) [[unlikely]]
			{
				evt_reloc_lock.unlock();
				return;
			}

			// Emplace the arena into the backlog.
			//
			auto& backlog = evt_backlog.emplace_back( arena_size );
			backlog.swap( evt_arena );

			// Emplace the event and return.
			//
			fassert( evt_arena.emplace( evt ) );
			evt_reloc_lock.unlock();
		}
	}

	// Outputs the current collected data.
	//
	void dump()
	{
		// Acquire a unique lock and flush all buffers.
		//
		ia32::scope_irql<HIGH_LEVEL> ig{};
		std::unique_lock reloc_lock{ evt_reloc_lock };
		auto extension = evt_arena.pop_all( true );
		std::list backlog = std::exchange( evt_backlog, {} );
		reloc_lock.unlock();
		ig.reset();

		static int count = 0;
		auto dump = [ extension = std::move( extension ), backlog = std::move( backlog ), i = ++count ] () mutable
		{
			// Declare the helper to create the JSON data.
			//
			std::string result = "{\n\t\"displayTimeUnit\": \"ns\",\n\t\"traceEvents\":[";
			bool empty = true;
			auto cvt = [ & ] ( auto&& arena )
			{
				for ( auto&& evt : arena )
				{
					empty = false;

					// Convert timestamps.
					//
					double ts = evt.ts / ( crt::get_tsc_freq_ghz() * ( 1us / 1ns ) );
					double dur = evt.dur / ( crt::get_tsc_freq_ghz() * ( 1us / 1ns ) );
					uint64_t ts_hi = ts;
					uint64_t dur_hi = dur;
					uint32_t ts_lo = uint32_t( abs( ts * 1e6 ) ) % uint32_t( 1e6 );
					uint32_t dur_lo = uint32_t( abs( dur * 1e6 ) ) % uint32_t( 1e6 );

					// Write the entry.
					//
					result += xstd::fmt::str(
						"\n\t\t{ \"pid\":0, \"tid\":%llu, \"name\":\"%s\", \"dur\":%llu.%06u, \"ts\":%llu.%06u, \"ph\":\"X\", \"args\":{ \"cycles\":%llu, \"irql\":%d } },",
						evt.tid, evt.name, dur_hi, dur_lo, ts_hi, ts_lo, evt.dur, (int)evt.irql
					);
				}
			};

			// Parse all the data.
			//
			for ( auto&& arena : backlog )
				cvt( std::move( arena ) );
			cvt( std::span( &extension.first[ 0 ], extension.second ) );
			extension.first.reset();
			backlog.clear();
			if ( empty ) return;
			result.pop_back();
			result += "\n\t]\n}";

			// Write to the file.
			//
			auto res = ntpp::write_file( xstd::fmt::wstr( L"\\??\\C:\\trace%d.json", i ), result.data(), result.size() );
			if ( !res )
				return xstd::warning( "Failed to write the trace file: %s"_es, res.status.to_string() );
		};
		if ( ig.prev == PASSIVE_LEVEL && ia32::interrupts_enabled() && !ke::get_ethread()->tcb.combined_apc_disable )
			dump();
		else
			xstd::chore( std::move( dump ) );
	}

	// Enables or disables the profiler.
	//
	void set_state( bool enabled )
	{
		// If enabling for the first time, initialize the theresholds.
		//
		if ( enabled && !record_threshold_cycles )
		{
			record_threshold_cycles = crt::to_cycles( 1us );
			event_threshold_cycles =  crt::to_cycles( 100ms );
		}
		enable = enabled;
	}

	// Changes the cycle threhold.
	//
	void set_threshold( uint64_t rec_cycles, uint64_t evt_cycles )
	{
		record_threshold_cycles = rec_cycles ? rec_cycles : record_threshold_cycles;
		event_threshold_cycles = evt_cycles ? evt_cycles : event_threshold_cycles;
	}
};

extern "C"
{
	[[gnu::noinline, gnu::nodebug]] NO_AVX void __crt_instrument_begin( uint64_t _ctx )
	{
		// Skip if profiling is disabled.
		//
		auto* ctx = ( profiler::context* ) _ctx;
		ctx->timestamp = 0;
		if ( !profiler::enable )
			return;

		// Initialize the timestamp.
		//
		ctx->timestamp = ia32::read_tsc();
	}
	[[gnu::noinline, gnu::nodebug]] NO_AVX void __crt_instrument_end( uint64_t _ctx, const char* name, uint64_t event_id )
	{
		// Skip if context is not initialized.
		//
		auto* ctx = ( profiler::context* ) _ctx;
		if ( !ctx->timestamp )
			return;

		// Write the entry.
		//
		profiler::write( ctx, name, event_id );
	}
};

#pragma clang attribute pop
