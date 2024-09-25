#pragma once
#include <memory>
#include <mutex>
#include <atomic>
#include <functional>
#include <xt/event_graph.hpp>
#include <xstd/time.hpp>
#include <xstd/spinlock.hpp>
#include <xstd/chore.hpp>
#include <xstd/circular_buffer.hpp>
#include <ia32.hpp>
#include <ia32/memory.hpp>
#include "../utility/apic.hpp"

// Implements the execution trace buffer.
//
namespace xt
{
	struct [[gnu::packed]] minimal_event
	{
#if XSTD_IA32_LA57
		uint32_t          id;
		uint16_t          length;
		uint128_t         type   : 4;
		uint128_t         ip     : ia32::mem::va_bits;
		uint128_t         sp     : ia32::mem::va_bits;
		uint128_t         tpr    : 4;
#else
		uint32_t          id;
		uint128_t         length : 16;
		uint128_t         type   : 4;
		uint128_t         ip     : ia32::mem::va_bits;
		uint128_t         sp     : ia32::mem::va_bits;
		uint128_t         tpr    : 4;
#endif
	};
	static constexpr size_t local_buffer_capacity = 16_mb;
	static constexpr size_t flushing_threshold = 6_mb;
	static constexpr size_t critical_threshold = ( sizeof( minimal_event ) + sizeof( control_parameters ) + sizeof( task_parameters ) + ( ( 1 + 8 ) * 4 ) ) * 128;

	// Global event identifier counter.
	//
	inline std::atomic<uint32_t> global_id_counter = 0;

	// Local event tracer buffer per processor.
	//
	struct local_buffer
	{
		// Raw circular buffer.
		//
		xstd::circular_buffer<local_buffer_capacity> raw_buffer;

		// Writes an event entry.
		//
		template<typename... Tx>
		FORCE_INLINE void write_event( event_type type, const task_snapshot& snapshot, Tx&&... args )
		{
			// Calculate the length of the data we need and create the header.
			//
			size_t max_ext_length = write_buffer( nullptr, args... );
			dassert( max_ext_length <= UINT16_MAX );
			
			auto* evt = ( minimal_event* ) _alloca( max_ext_length + sizeof( minimal_event ) );
			size_t ext_length = write_buffer( ( uint8_t* ) std::next( evt ), args... );
			size_t total_length = ext_length + sizeof( minimal_event );
			//evt->timestamp = ia32::read_tsc();
			evt->type = type;
			evt->length = uint16_t( ext_length );
			evt->sp = snapshot.sp;
			evt->ip = snapshot.ip;
			evt->tpr = snapshot.tpr;
			evt->id = ++global_id_counter;

			// Write the data and return.
			//
			if ( !raw_buffer.write( evt, total_length, false ) ) [[unlikely]]
				xstd::warning( "Local buffer is full, dropping event!"_es );
		}

		// Wrappers around the writer.
		//
		template<typename... Tx>
		FORCE_INLINE void enter( const task_snapshot& snapshot, const task_parameters& params, const control_parameters& ctr, const Tx&... args )
		{
			write_event( event_enter, snapshot, params, ctr, make_vararg_view( args )... );
		}
		template<typename... Tx>
		FORCE_INLINE void checkpoint( const task_snapshot& snapshot, checkpoint_id chk, const Tx&... args )
		{
			write_event( event_checkpoint, snapshot, chk, make_vararg_view( args )... );
		}
		template<typename... Tx>
		FORCE_INLINE void exit( const task_snapshot& snapshot, const control_parameters& ctr, const Tx&... args )
		{
			write_event( event_exit, snapshot, ctr, make_vararg_view( args )... );
		}
		template<typename... Tx>
		FORCE_INLINE void silent_exit( const task_snapshot& snapshot )
		{
			write_event( event_silent_exit, snapshot );
		}
		template<typename... Tx>
		FORCE_INLINE void swap_context( const task_snapshot& snapshot, uint32_t pcid_0, uint32_t tid )
		{
			write_event( event_swap_context, snapshot, pcid_0, tid );
		}
		template<typename... Tx>
		FORCE_INLINE void interrupt( const task_snapshot& snapshot, interrupt_id index, const Tx&... args )
		{
			write_event( event_interrupt, snapshot, index, make_vararg_view( args )... );
		}
		template<typename... Tx>
		FORCE_INLINE void comment( const task_snapshot& snapshot, const Tx&... args )
		{
			write_event( event_comment, snapshot, make_vararg_view( args )... );
		}
		template<typename... Tx>
		FORCE_INLINE void error( const task_snapshot& snapshot, const Tx&... args )
		{
			write_event( event_error, snapshot, make_vararg_view( args )... );
		}
	};

	// Event tracer control block containing the final graph and all buffers associated, one per image.
	//
	struct control_block : std::enable_shared_from_this<control_block>
	{
		// Circular buffers.
		//
		std::vector<std::shared_ptr<local_buffer>> buffers;

		// Event radio storing the structured graph after processing.
		//
		xt::event_radio radio = {};

		// Mutex for the flush worker.
		//
		std::mutex worker_mutex = {};

		// Last flush timestamp.
		//
		xstd::timestamp last_flush = xstd::time::now();
		std::atomic<bool> pending_flush = false;

		// Temporary locals allocated for the reader so that they can be re-used.
		//
		std::unique_ptr<uint8_t[]> reader_buffer = std::make_unique<uint8_t[]>( UINT16_MAX + sizeof( event_header ) );
		std::vector<std::tuple<size_t, size_t, size_t>> reader_limits; // [Position, Size, Iterator]

		// Constructs a control block holding the relevant buffers and the output event graph for a single traced image.
		//
		control_block() 
		{ 
			// Initialize the buffers.
			//
			reader_limits.resize( apic::number_of_processors() );
			buffers.resize( apic::number_of_processors() );
			for ( auto& e : buffers )
				e = std::make_shared<local_buffer>();
		}

		// Invoked on demand when the circular buffers should be consumed.
		//
		NO_INLINE void flush_locked()
		{
			// Update the flush timestamp.
			//
			last_flush = xstd::time::now();
			pending_flush.store( false, std::memory_order::relaxed );
			for( size_t iteration = 0;; iteration++ )
			{
				// Fetch the limits.
				//
				size_t min_leftover = SIZE_MAX;
				for ( size_t n = 0; n != apic::number_of_processors(); n++ )
				{
					auto& [pos, size, it] = reader_limits[ n ];
					it = 0;
					std::tie( pos, size ) = buffers[ n ]->raw_buffer.peek();
					min_leftover = std::min( min_leftover, local_buffer_capacity - size );
				}
				
				// If first flush is complete and the limits are enough to fullfil the request, skip.
				//
				if ( iteration && min_leftover >= flushing_threshold )
					break;

				// Enter the event reading loop.
				//
				while( true )
				{
					// Read the global counter so that we can handle wrap around.
					//
					uint32_t gid = global_id_counter.load( std::memory_order::relaxed );

					// Pick the first event from all event buffers based on the event id.
					//
					std::optional<std::pair<uint32_t, size_t>> picked;
					for ( size_t n = 0; n != apic::number_of_processors(); n++ )
					{
						auto& [pos, size, it] = reader_limits[ n ];
						if ( ( it + sizeof( minimal_event ) ) > size ) continue;
						uint32_t id = 0;
						buffers[ n ]->raw_buffer.read_raw( &id, pos + it, 4 );
						id = gid - id;
						if ( !picked || picked->first < id )
							picked.emplace( id, n );
					}

					// Break if no events left to be read.
					//
					if ( !picked ) break;
					auto [_, pcid] = *picked;
					auto& [pos, size, it] = reader_limits[ pcid ];

					// Read and translate the event header.
					//
					auto& buf = buffers[ pcid ]->raw_buffer;
					auto* header = ( event_header* ) reader_buffer.get();

					minimal_event mheader;
					buf.read_raw( &mheader, pos + it, sizeof( minimal_event ) );
					header->timestamp = mheader.id;//mheader.timestamp;
					header->type = ( xt::event_type ) mheader.type;
					header->length = mheader.length;
					header->snapshot.ip = ia32::mem::make_cannonical( mheader.ip );
					header->snapshot.sp = ia32::mem::make_cannonical( mheader.sp );
					header->snapshot.pcid = pcid;
					header->snapshot.tpr = mheader.tpr;
					it += sizeof( minimal_event );

					// Read the event data.
					//
					buf.read_raw( std::next( header ), pos + it, header->length );
					it += header->length;

					// Emit to the event radio.
					//
					radio.replay( header );
				}

				// Report the consumed ranges.
				//
				for ( size_t n = 0; n != apic::number_of_processors(); n++ )
				{
					auto& [pos, size, it] = reader_limits[ n ];
					buffers[ n ]->raw_buffer.consume( pos, it );
				}
			}
			//xstd::log( "Flushed XT buffers, took %s (Waiting tasks: %llu)\n", xstd::time::now() - last_flush, radio.waiting_tasks.size() );
		}
	};
};