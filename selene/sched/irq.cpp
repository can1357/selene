#include "irq.hpp"
#include <atomic>
#include <sdk/ki/api.hpp>
#include <xstd/bitwise.hpp>
#include <mcrt/interface.hpp>
#include <xstd/spinlock.hpp>
#include "../hooks/inline_hooks.hpp"
#include "../hooks/patch_manager.hpp"
#include "../utility/thread.hpp"
#include <sdk/iop/api.hpp>

#pragma clang attribute push (__no_instrument, apply_to = function)

// Realtime scheduler for APIC tasks.
//
namespace scheduler
{
	// Global task links.
	//
	static std::array<std::atomic<task_id>, apic::max_processor_count> task_list[ ( size_t ) priority::max ] = { { null_task } };

	// Global task space and task allocator.
	//
	static constexpr size_t max_tasks = 192;
	struct task_space_t
	{
		volatile uint64_t bitmaps[ ( max_tasks + 63 ) / 64 ] = { 0 };
		alignas( task ) uint8_t raw[ max_tasks * sizeof( task ) ];
		FORCE_INLINE task* tasks() { return ( task* ) &raw[ 0 ]; }
	};
	static task_space_t* task_space = new task_space_t();

	// Gets the identifier of a task from its pointer.
	//
	FORCE_INLINE static task_id get_task_id( task* ts )
	{
		return 1 + ( ts - task_space->tasks() );
	}

	// Gets the task pointer from its index.
	//
	FORCE_INLINE static task* get_task( task_id i )
	{
		if ( i == null_task ) return nullptr;
		return task_space->tasks() + ( i - 1 );
	}

	// Dereferences a task.
	//
	RINLINE void dereference_task( task* ts, uint8_t n )
	{
		auto cnt_new = ( ts->reference_count -= n );
		dassert( cnt_new >= 0 );
		if ( cnt_new == 0 ) [[unlikely]] {
			if ( auto* rd = ts->rundown_callback ) rd( ts->context );

			auto idx = bitcnt_t( get_task_id( ts ) ) - 1;
			bool was_set = xstd::bit_reset( task_space->bitmaps[ idx / 64 ], idx % 64 );
			dassert( was_set );
		}
	}
	
	// Allocates a task and returns a unique resource referencing it.
	//
	task_ref allocate_task()
	{
		dassert( initialized );
		while ( true )
		{
			// Find an empty slot, if none available spin.
			//
			size_t slice = 0;
			bitcnt_t n = 0;
			size_t   eid = max_tasks;
			for ( ; slice != std::size( task_space->bitmaps ); slice++ ) {
				n = xstd::lsb( ~task_space->bitmaps[ slice ] );
				if ( n != xstd::bit_npos ) {
					eid = bitcnt_t( n + slice * 64 );
					break;
				}
			}

			if ( eid >= max_tasks ) {
				xstd::warning( "Task space is full!"_es );
				yield_cpu();
				continue;
			}

			// Try setting the index, if it was already set, transaction failed, spin.
			//
			if ( xstd::bit_set( task_space->bitmaps[ slice ], n ) )
				continue;

			// Create the task, set the reference count including the returned unique_ptr.
			//
			auto* ts = new ( task_space->tasks() + eid ) task();
			ts->reference_count = 1;
			return task_ref{ ts };
		}
	}

	// Global task table helpers.
	//
	FORCE_INLINE static void push_table( task* ts, priority prio, uint32_t pcid )
	{
		auto& link = task_list[ ( size_t ) prio ][ pcid ];
		auto& plink = ts->prev[ pcid ];
		task_id tid = get_task_id( ts );
		while ( !link.compare_exchange_strong( plink, tid ) );
	}
	FORCE_INLINE static void pop_table_as( task_id list_head, uint32_t pcid )
	{
		for( task_id it = list_head; it != null_task; )
		{
			// Get the task from ID, forward the iterator.
			//
			task* t = get_task( it );
			it = t->prev[ pcid ];
			
			// If task is to be executed:
			//
			uint8_t deref_count = 1;
			uint8_t threshold = t->threshold;
			uint8_t new_ref_count = --t->pending_count;
			if ( new_ref_count >= threshold )
				t->callback( t->context );

			// Dereference the task.
			//
			dereference_task( t, deref_count );
		}
	}
	FORCE_INLINE static bool pop_table( priority prio )
	{
		// Get the list of tasks, if none found return.
		//
		uint32_t pcid = ia32::read_pcid();
		task_id list_head = task_list[ ( size_t ) prio ][ pcid ].exchange( null_task );
		if ( list_head == null_task ) 
			return false;

		if ( prio != priority::nmi )
			ia32::enable();
		pop_table_as( list_head, pcid );
		if ( prio != priority::nmi )
			ia32::disable();
		return true;
	}

	// Freezes KUSER_SHARED_DATA::SystemTime for a given duration.
	//
	static std::atomic<uint64_t> clk_frozen_until = 0;
	static std::atomic<uint64_t> clk_prev_increment = 0;
	void freeze_clock_for( xstd::duration dur ) {
		// Save previous increment & freeze.
		//
		std::atomic_ref<uint64_t> qpc_inc{ ke::get_user_shared_data()->qpc_system_time_increment };
		uint64_t prev = qpc_inc.load( std::memory_order::relaxed );
		if ( prev ) clk_prev_increment = prev;
		
		// frozen until = max(now + time, frozen until)
		//
		uint64_t dst = ia32::read_tsc() + crt::ns_to_cycles( dur / 1ns );
		uint64_t expected = clk_frozen_until.load( std::memory_order::relaxed );
		while ( expected < dst ) {
			if ( clk_frozen_until.compare_exchange_strong( expected, dst ) )
				break;
		}

		// Actually freeze.
		//
		qpc_inc.store( 0, std::memory_order::release );
	}

	// Interrupt hooks.
	//
	static hook::record ki_process_nmi_hook;
	[[must_tail]] MS_SSE2AVX static void hk_ki_process_nmi( nt::trapframe* tf, nt::exframe* ex )
	{
		// Handle the tasks, if none were found or if there is NMIs pending, invoke the helper.
		//
		if ( !pop_table( priority::nmi ) || *( void** ) &ki::nmi_callback_list_head )
			[[clang::musttail]] return ki_process_nmi_hook.next<decltype( &hk_ki_process_nmi )>()( tf, ex );
	}
	extern NO_INLINE void signal( priority pri )
	{
		auto& increment = ke::get_user_shared_data()->qpc_system_time_increment;
		if ( !increment ) [[unlikely]] {
			if ( clk_frozen_until < ia32::read_tsc() ) {
				increment = clk_prev_increment.load( std::memory_order::relaxed );
			}
		}
		assume( pri != priority::nmi );
		pop_table( pri );
	}

	// Creates and sends an APIC command based the paramters passed.
	//
	FORCE_INLINE static void send_apic_command( priority prio, shorthand sh, uint32_t pcid )
	{
		// Create the command.
		//
		apic::command cmd = {};
		cmd.sh_group = sh;

		// Choose the interrupt vector / delivery mode.
		//
		switch ( prio )
		{
			case priority::dpc:
			{
				cmd.vector = 0x2F;
				break;
			}
			case priority::ipi:
			{
				cmd.vector = 0xE1;
				break;
			}
			case priority::nmi:
			{
				cmd.mode = apic::delivery_mode::nmi;
				break;
			}
			default: unreachable();
		}

		// Send the command.
		//
		if ( sh == shorthand::none ) pcid = apic::number_to_apic( pcid );
		else                         pcid = 0;
		apic::controller{}.send_command( cmd, pcid );
	}
	
	// Queues a task.
	//
	FORCE_INLINE void queue( const task_ref& ts, priority prio, shorthand sh, uint32_t pcid, bool one_shot )
	{
		std::atomic_thread_fence( std::memory_order::release );
		dassert( ts->pending_count == 0 );

		// Disable interrupts.
		//
		ia32::scope_irql<HIGH_LEVEL> girql{};

		// Set the pending count and add the link based on the shorthand used and 
		// whether or not one shot flag is set.
		//
		switch ( sh )
		{
			case shorthand::none:
			{
				ts->pending_count = 1;
				ts->reference_count++;
				ts->threshold = 0;
				push_table( ts.pointer, prio, pcid );
				break;
			}
			case shorthand::all_but_this:
			{
				pcid = 0;
				size_t queue_count = apic::number_of_processors() - 1;
				ts->pending_count = queue_count;
				ts->reference_count += queue_count;
				if ( !queue_count ) [[unlikely]] 
					return;

				ts->threshold = one_shot ? queue_count - 1 : 0;
				uint32_t self = ia32::read_pcid();
				for ( size_t n = 0; n != apic::number_of_processors(); n++ )
					if ( n != self )
						push_table( ts.pointer, prio, n );
				break;
			}
			case shorthand::all:
			{
				pcid = 0;
				size_t queue_count = apic::number_of_processors();

				ts->pending_count = queue_count;
				ts->reference_count += queue_count;
				ts->threshold = one_shot ? queue_count - 1 : 0;
				for ( size_t n = 0; n != apic::number_of_processors(); n++ )
					push_table( ts.pointer, prio, n );
				break;
			}
			case shorthand::self:
			{
				pcid = 0;
				ts->pending_count = 1;
				ts->reference_count++;
				ts->threshold = 0;
				push_table( ts.pointer, prio, ia32::read_pcid() );
				break;
			}
			default: unreachable();
		}

		// No need for memory-barrier since the push_table above will generate LOCK,
		// implying full barrier.
		//
		send_apic_command( prio, sh, pcid );
	}

	// Initializes the scheduler hooks.
	//
	NO_INLINE void init()
	{
		hook::add( &ki_process_nmi_hook, &ki::process_nmi, &hk_ki_process_nmi );
		initialized = true;
	}
};

extern "C" void __selene_schedule_dpc_event( crt::event_primitive* evt )
{
	scheduler::queue_dpc( [ evt ] { evt->notify(); }, true );
}

#pragma clang attribute pop