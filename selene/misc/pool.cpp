#include "pool.hpp"
#include <xstd/bitwise.hpp>
#include <ntpp.hpp>
#include <sdk/mm/api.hpp>
#include <sdk/ki/api.hpp>
#include <mcrt/interface.hpp>
#include "../sched/irq.hpp"
#include "../utility/memory.hpp"
#include "../utility/memory_isolation.hpp"
#include "../utility/page_manager.hpp"
#include "../misc/profiler.hpp"

#pragma clang attribute push (__no_instrument, apply_to = function)

//#include <sdk/dbg/api.hpp>

template<typename... Tx>
static void mlog( const char* fmt, Tx... args )
{
	//dbg::print_ex( 0, 0, fmt, args... );

	//char buf[ 512 ];
	//snprintf( buf, 512, fmt, std::forward<Tx>( args )... );
	//crt::write_console( buf, true );
}

static std::atomic<size_t> mem_used = 0;

// Native allocator.
//
namespace native
{
	// Configuration.
	//
	static constexpr size_t granularity =                  2_mb;
	static constexpr size_t emergency_pool_size =          32_mb;
	static constexpr size_t emergency_pool_threshold =     24_mb;
	static constexpr size_t emergency_pool_swap_max_size = 64_mb;
	static constexpr size_t emergency_pool_swap_min_size = 16_mb;

	// Wrapper for the operating system allocation.
	//
	namespace os
	{
		// Allocation and deallocation.
		//
		static any_ptr allocate( size_t size, bool no_ipi = false )
		{
			//mlog( "[Selene] alloc(0x%llx, %d)\n", size, no_ipi );

			// Allocate the region and set the protection.
			//
			any_ptr ptr = mem::allocate_independent( size );
			if ( !ptr ) xstd::error( "Memory allocation failed."_es );

			mem::iso::claim_va( ptr, size, mem::iso::pfn_type::indep_pool );
			if ( no_ipi )
				mem::change_protection_no_ipi( ptr, size, mem::prot_rwx );
			else
				mem::change_protection( ptr, size, mem::prot_rwx );
			return ptr;
		}
		static void free( any_ptr ptr, size_t size )
		{
			//mlog( "[Selene] free(%p, 0x%llx)\n", ptr, size );
			if ( !ptr || !size )
				return;

			// Free the region.
			//
			mem::iso::return_va( ptr, size );
			mem::free_independent( ptr, size );
		}
	};

	// Emergency pool for high IRQL allocations.
	//
	struct alignas( 16 ) emergency_pool_t
	{
		any_ptr beginning = nullptr;
		size_t        size_left = 0;
	};
	static emergency_pool_t emergency_pool = {};

	// Free queue for high IRQL deallocations.
	//
	struct inline_free_queue
	{
		inline_free_queue* next;
		size_t length;
	};
	static std::atomic<inline_free_queue*> free_queue = { nullptr };

	// The deferred worker. 
	//
	static xstd::spinlock worker_state = {};
	static void worker()
	{
		std::lock_guard _g{ worker_state };
		//mlog( "Worker TM!" );

		// If emergency pool is below the threshold, replenish.
		//
		emergency_pool_t expected = emergency_pool;
		while( expected.size_left <= emergency_pool_threshold )
		{
			// Single out the first worker.
			//
			static xstd::spinlock local_sl;
			std::unique_lock lock{ local_sl, std::try_to_lock_t{} };
			if ( !lock.owns_lock() )
				break;

			// Allocate a new pool.
			//
			emergency_pool_t local_pool = { os::allocate( emergency_pool_size ), emergency_pool_size };

			// Swap with the new pool.
			//
			do
			{
				if ( cmpxchg( emergency_pool, expected, local_pool ) )
				{
					local_pool = expected;
					break;
				}
			}
			while ( expected.size_left < emergency_pool_size );

			// Free the leftover memory.
			//
			if ( local_pool.size_left )
				os::free( local_pool.beginning, local_pool.size_left );
		}
		//mlog( "Pool replenished?: %llu KB", emergency_pool.size_left / 1024 );

		// Empty the free queue.
		//
		inline_free_queue* queue = free_queue.exchange( nullptr );
		while ( queue )
		{
			auto self = std::exchange( queue, queue->next );
			os::free( self, self->length );
		}
	}
	static void signal_worker()
	{
		//mlog( "Signalling worker" );
		if ( scheduler::initialized )
		{
			if ( worker_state.try_lock() )
			{
				scheduler::queue_async(
					&worker,
					scheduler::priority::dpc,
					scheduler::shorthand::all_but_this,
					0,
					true
				);
				worker_state.unlock();
			}
		}
	}

	// Low IRQL operations.
	//
	static any_ptr allocate_at_dpc_level( size_t size, bool no_ipi = false )
	{
		// Align up to default granularity and invoke allocation helper.
		//
		dassert( xstd::is_aligned( size, granularity ) );
		return os::allocate( size, no_ipi );
	}
	static void free_at_dpc_level( any_ptr ptr, size_t size )
	{
		// Swap with the emergency pool if applicable:
		//
		if ( emergency_pool_swap_min_size <= size && size <= emergency_pool_swap_max_size )
		{
			emergency_pool_t expected = emergency_pool;
			while ( expected.size_left < size )
			{
				if ( !cmpxchg( emergency_pool, expected, { ptr, size } ) )
					continue;
				ptr = expected.beginning;
				size = expected.size_left;
				break;
			}
		}

		// Invoke the free helper.
		//
		os::free( ptr, size );
	}

	// High IRQL memory helpers.
	//
	static any_ptr allocate_at_high_level( size_t size )
	{
		// Align the allocation to emergency pool granularity.
		//
		dassert( xstd::is_aligned( size, granularity ) );
		//mlog( "Allocating %llu KB at high level (Mem use: %llu KB)", size / 1024, mem_used / 1024 );

		// Fetch the emergancy pool and start the transaction.
		//
		any_ptr allocation = nullptr;
		emergency_pool_t expected = emergency_pool;
		while( true )
		{
			// If there is not enough space in the pool, break.
			//
			emergency_pool_t replaced_with = expected;
			replaced_with.beginning += size;
			if ( replaced_with.size_left < size )
				break;
			replaced_with.size_left -= size;

			// Restart the transaction if it fails.
			//
			if ( !cmpxchg( emergency_pool, expected, replaced_with ) )
				continue;

			// If size left is below threshold, signal the worker to replenish.
			//
			if ( replaced_with.size_left <= emergency_pool_threshold )
				signal_worker();

			// Set the allocated pointer and break.
			//
			allocation = expected.beginning;
			break;
		}

		// If we failed to allocate, use a more creative method.
		//
		if ( !allocation )
		{
			//mlog( "Allocation failed\n" );

			// Adjust IRQL.
			//
			irql_t prev_irql = ia32::get_irql();
			auto prev_flags = ia32::read_flags();
			ia32::disable();
			ia32::set_irql( DISPATCH_LEVEL );
			
			// Acquire a lock.
			//
			static xstd::spinlock spinlock;
			std::unique_lock _g{ spinlock };

			// Create a task awaiting on our completion from an IPI.
			//
			static std::atomic<bool> allocation_complete;
			allocation_complete.store( false, std::memory_order::relaxed );

			auto task = scheduler::queue_async( [] {
				while( !allocation_complete.load( std::memory_order::relaxed ) )
					yield_cpu();
				ia32::flush_tlb();
			}, scheduler::priority::ipi, scheduler::shorthand::all_but_this );

			// Allocate memory, avoiding the TLB shootdown.
			//
			auto* aff = ( nt::kaffinity_ex_t* ) &ke::active_processors;
			auto& num_proc = *( uint32_t* ) &ke::number_processors;
			auto& ts = *( uint32_t* ) &ki::tb_flush_time_stamp;

			auto num_proc_prev = std::exchange( num_proc, 1 );
			auto ts_prev = std::exchange( ts, 0 );
			uint16_t aff_prev = std::exchange( aff->count, 0 );

			allocation = allocate_at_dpc_level( size, true );

			aff->count = aff_prev;
			ts = ts_prev;
			num_proc = num_proc_prev;
			ia32::sfence();

			// Set the flag.
			//
			allocation_complete = true;
			ia32::sfence();

			// Revert the IRQL.
			//
			ia32::set_irql( prev_irql );
			if ( prev_flags.interrupt_enable_flag )
				ia32::enable();
		}
		else
		{
			//mlog( "Allocation success, %llu KB left", ( expected.size_left - *size ) / 1024 );
			pm::fill_page( allocation, 0, size >> 12 );
		}
		return allocation;
	}
	static void free_at_high_level( any_ptr ptr, size_t size )
	{
		//mlog( "Freeing %llu KB at high level", size / 1024 );

		// Swap with the emergency pool if applicable:
		//
		if ( emergency_pool_swap_min_size <= size && size <= emergency_pool_swap_max_size )
		{
			emergency_pool_t expected = emergency_pool;
			while ( expected.size_left < size )
			{
				if ( !cmpxchg( emergency_pool, expected, { ptr, size } ) )
					continue;
				ptr = expected.beginning;
				size = expected.size_left;
				break;
			}
		}

		// Create an inline free queue and swap with the list we have.
		//
		inline_free_queue* value = ptr;
		value->length = size;
		value->next = free_queue.load( std::memory_order::relaxed );
		while ( !free_queue.compare_exchange_strong( value->next, value ) );
		
		// Signal the worker.
		//
		signal_worker();
	}

	// Declare the initializer.
	//
	static void init()
	{
		emergency_pool = {
			os::allocate( emergency_pool_size ),
			emergency_pool_size
		};
	}
	static void destroy()
	{
		emergency_pool_t expected = emergency_pool;
		while ( !cmpxchg( emergency_pool, expected, { nullptr, 0 } ) );
		if ( expected.size_left )
			os::free( expected.beginning, expected.size_left );
	}
};

// TLS table.
//
struct mem_cpu_tls
{
	std::array<void*, 2>   rp_ctx = {};
	uint8_t                depth = 0;
};
static std::array<mem_cpu_tls, apic::max_processor_count> tls_table = {};

// RAII-style local context search/allocation.
//
struct local_context
{
	const bool allocated = false;
	mem_cpu_tls* entry = nullptr;
	irql_t irql = PASSIVE_LEVEL;

	inline local_context( bool allocate ) : allocated( allocate )
	{
		if ( allocate )
		{
			// Raise the IRQL and get the CPU entry.
			//
			irql = ia32::get_irql();
			if ( irql < DISPATCH_LEVEL )
				ia32::set_irql( DISPATCH_LEVEL );
			entry = &tls_table[ ia32::read_pcid() ];

			// Increment the depth.
			//
			uint8_t prev_depth = entry->depth++;
			dassert( ( prev_depth + 1 ) <= entry->rp_ctx.size() );
		}
		else
		{
			entry = &tls_table[ ia32::read_pcid() ];
		}
	}

	// No copy/move allowed.
	//
	local_context( local_context&& ) noexcept = delete;
	local_context( const local_context& ) = delete;
	local_context& operator=( local_context&& ) noexcept = delete;
	local_context& operator=( const local_context& ) = delete;

	// Redirections.
	//
	mem_cpu_tls* operator->() const { return entry; }
	uint32_t get_vtid() const { return ( uint32_t ) ( entry - tls_table.data() ) + ( entry->depth * tls_table.size() ); }
	void*& get_ctx() const { return entry->rp_ctx[ entry->depth - 1 ]; }

	// Destructor releases the context.
	//
	inline ~local_context()
	{
		// If it was an allocation, decrement depth and restore IRQL.
		//
		if ( allocated )
		{
			entry->depth--;
			ia32::set_irql( irql );
		}
	}
};

extern "C" 
{
	FORCE_INLINE int rpmalloc_get_irq()
	{
		return ia32::get_irql();
	}
	FORCE_INLINE void rpmalloc_set_irq( int irq )
	{
		ia32::set_irql( ( uint8_t ) irq );
	}
	FORCE_INLINE uintptr_t rpmalloc_get_thread_id()
	{
		return local_context{ false }.get_vtid();
	}
	FORCE_INLINE void* rpmalloc_get_tls()
	{
		return local_context{ false }.get_ctx();
	}
	FORCE_INLINE void rpmalloc_set_tls( void* ptr )
	{
		local_context{ false }.get_ctx() = ptr;
	}
	FORCE_INLINE void* rpmalloc_mmap_os( size_t size, size_t* offset )
	{
		mem_used += size;
		//mlog( "mmap(%llx, &(%llx))", size, *offset );
		void* p;
		if ( ia32::get_effective_irql() <= DISPATCH_LEVEL )
			p = native::allocate_at_dpc_level( size );
		else
			p = native::allocate_at_high_level( size );
		*offset = 0;
		return p;
	}
	FORCE_INLINE void rpmalloc_unmap_os( void* address, size_t size, size_t offset, size_t release )
	{
		if ( size == release && !offset )
		{
			//xstd::log( "unmap(%p, %llx)!\n", address, size );
			if ( ia32::get_effective_irql() <= DISPATCH_LEVEL )
				native::free_at_dpc_level( address, size );
			else
				native::free_at_high_level( address, size );
		}
		else
		{
			xstd::error( "Invalid unmap(%p, %llx, %llx, %llx)!"_es, address, size, offset, release );
		}
		mem_used -= size;
	}
}

// Exposed interface.
//
namespace pool
{
	[[gnu::constructor( 121 )]] static void init()
	{
		native::init();
		{
			local_context ctx{ true };
			rpmalloc_initialize();
		}

		ntpp::call_dpc( [ ]
		{
			local_context ctx{ true };
			profiler::tracer_lock _gt{};
			rpmalloc_thread_initialize();
			ctx.entry->depth++;
			rpmalloc_thread_initialize();
			ctx.entry->depth = 1;
		} );
	}

	[[gnu::malloc]] RINLINE void* allocate_aligned( size_t n, size_t a )
	{
		local_context _g{ true };
		profiler::tracer_lock _gt{};
		return rpaligned_alloc( a, n );
	}
	[[gnu::malloc]] RINLINE void* allocate( size_t n )
	{
		local_context _g{ true };
		profiler::tracer_lock _gt{};
		return rpmalloc( n );
	}
	RINLINE void deallocate( void* p )
	{
		local_context _g{ true };
		profiler::tracer_lock _gt{};
		return rpfree( p );
	}
	RINLINE void* reallocate( void* p, size_t n )
	{
		local_context _g{ true };
		profiler::tracer_lock _gt{};
		return rprealloc( p, n );
	}
};

#pragma clang attribute pop