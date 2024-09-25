#pragma once
#include "config.hpp"
#include "event.hpp"
#include <xstd/formatting.hpp>
#include <xstd/hashable.hpp>
#include <xstd/small_vector.hpp>
#include <xstd/narrow_cast.hpp>
#include <xstd/numeric_range.hpp>
#include <xstd/spinlock.hpp>
#include <map>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_set>
#include <unordered_map>

// [[Configuration]]
// PRINT_EVENT_LOG: Debugging option, if set to 1 radio prints details of each event, if set to 2,
//                  keeps a circular buffer to be printed on an error.
// GEAR_SIZE: Size of the gear hash applied for the identification of nodes; if none left undefined.
//
// ARG_SAMPLE_COUNT: Number of argument samples kept in a node.
//
#ifndef PRINT_EVENT_LOG
	#define PRINT_EVENT_LOG 0
#endif
#ifndef GEAR_SIZE
	#define GEAR_SIZE 3
#elif !GEAR_SIZE
	#undef  GEAR_SIZE
#endif
#ifndef ARG_SAMPLE_COUNT
	#define ARG_SAMPLE_COUNT 16
#endif

#if PRINT_EVENT_LOG
	namespace xt::debug
	{
	#if PRINT_EVENT_LOG == 2
		static constexpr size_t cbuf_size = 512;
	
		inline xstd::spinlock cbuf_lock;
		inline size_t cbuf_it = 0;
		inline std::string cbuf[ cbuf_size ] = {};

		inline void cbuf_dump()
		{
			std::lock_guard _g{ cbuf_lock };
			size_t dump_count = cbuf_it > cbuf_size ? cbuf_size : cbuf_it;
			for ( size_t n = 1; n <= dump_count; n++ )
			{
				auto& entry = cbuf[ ( cbuf_it - n ) % cbuf_size ];
				xstd::log( entry.c_str() );
			}
		}
	#endif

		template<typename... Tx>
		inline void log( const char* fmt, Tx&&... args )
		{
	#if PRINT_EVENT_LOG == 1
			xstd::log( fmt, std::forward<Tx>( args )... );
	#elif PRINT_EVENT_LOG == 2
			std::lock_guard _g{ cbuf_lock };
			cbuf[ cbuf_it++ % cbuf_size ] = xstd::fmt::str( fmt, std::forward<Tx>( args )... );
	#endif
		}
	};
#endif

namespace xt
{
	// Node types for the event graph, almost identical to event types but with the 
	// exception that node types are processed to filter out task interruptions 
	// and made stateless and possibly randomly sampled.
	//
	enum event_node_type : uint8_t
	{
		evt_node_none = 0,
		
		// -- Main control flow events.
		//
		// Beginning of task.
		evt_node_start,
		// Returning from a task.
		evt_node_return,
		// External invocation.
		evt_node_invoke,
		// External call causing an unexpected change in stack pointer.
		evt_node_longjmp,
		
		// -- Interruption of control flow.
		//
		// Trapped execution that immediately returns back to the task.
		evt_node_checkpoint,
		// Exceptions that were dispatched.
		evt_node_exception,

		// -- Miscellaneous events.
		//
		// - Critical provider errors that occured during event reporting.
		evt_node_error,
		// - Provider comments.
		evt_node_comment,
		
		evt_node_max = evt_node_comment,
	};
	
	// Argument critical checkpoints ignoring the limit of maximum samples.
	//
	static constexpr bool is_checkpoint_arg_critical( checkpoint_id chk )
	{
		switch ( chk )
		{
			case builtin_rdtsc:
			case builtin_rdtscp:
			case builtin_invlpg:
			case builtin_invpcid:
			case builtin_monitor:
			case checkpoint_read_pte:
			case checkpoint_write_pte:
			case checkpoint_write_wp:
				return false;
			default:
				return true;
		}
	}

	// Metadata for the event graph containing information about the execution environment 
	// e.g. image information.
	//
	struct graph_metadata
	{
		struct image
		{
			uint64_t             size = 0;
			std::string          name;
			std::string          pdb_path;
			std::string          pdb_identifier;

			// Serialization, hashing and equal comparison.
			//
			auto tie() { return std::tie( size, name, pdb_path, pdb_identifier ); }
			auto tie() const { return std::tie( size, name, pdb_path, pdb_identifier ); }
			bool operator==( const image& o ) const { return tie() == o.tie(); }
			bool operator!=( const image& o ) const { return tie() != o.tie(); }
		};
		std::map<uint64_t, image> image_list = {};

		// Serialization, hashing and equal comparison.
		//
		auto tie() { return std::tie( image_list ); }
		auto tie() const { return std::tie( image_list ); }
		bool operator==( const graph_metadata& o ) const { return tie() == o.tie(); }
		bool operator!=( const graph_metadata& o ) const { return tie() != o.tie(); }
	};

	// Generic node type.
	//
	struct event_node_id
	{
		event_node_type type = evt_node_none;
		uint64_t        id1 = 0;
		uint64_t        id2 = 0;
#if GEAR_SIZE
		std::array<xstd::hash_t, GEAR_SIZE> gear = {};
#else
		std::monostate                      gear = {};
#endif

		// Fully tiable.
		//
		auto tie() { return std::tie( type, id1, id2, gear ); }
		bool operator==( const event_node_id& o ) const { return xstd::tie_equal_to{}( *this, o ); }
		bool operator!=( const event_node_id& o ) const { return !xstd::tie_equal_to{}( *this, o ); }
		std::string to_string( fn_address_namer namer = name_address ) const
		{
			if ( type == evt_node_none )
				return "()";
			std::string name = "(" + xstd::fmt::as_string( type ) + ":";
			for ( auto id : { id1, id2 } )
			{
				if ( int64_t( id ) < 0 )
					name += namer( id ) + ":";
				else if ( id != 0 )
					name += xstd::fmt::as_string( id ) + ":";
			}
			name += xstd::fmt::as_string( gear ) + ")";
			return name;
		}
	};
	struct event_edge
	{
		// Identifier of the target node.
		//
		event_node_id dst = {};

		// Stack delta we've observed.
		//
		int32_t sp_delta = 0;

		// Fully tiable.
		//
		auto tie() { return std::tie( dst, sp_delta ); }
		bool operator==( const event_edge& o ) const { return dst == o.dst && sp_delta == o.sp_delta; }
		bool operator!=( const event_edge& o ) const { return dst != o.dst || sp_delta != o.sp_delta; }
	};
	struct event_path_details
	{
		size_t   counter = 0;
		uint64_t time_recorded = 0;
		double avg_time_spent() const { return time_recorded / double( counter ); }
		auto tie() { return std::tie( time_recorded, counter ); }
	};
	struct event_node
	{
		// Identifier and the arguments, values depend on the node type.
		//
		//    ------------------------------------------------------
		//    |     Type           |       UID      |    Args      |
		//    ------------------------------------------------------
		//    | evt_node_start     | <ip, retptr>   | <cb args...> |
		//    | evt_node_return    | <retptr>       | <ret value>  |
		//    | evt_node_invoke    | <retptr, ip>   | <args...>    |
		//    | evt_node_longjmp   | <ip>           |              |
		//    | evt_node_checkpoint| <ip, builtin>  | <ops...>     |
		//    | evt_node_exception | <ip, vec>      | <error code> | 
		//    | evt_node_error     | <ip, src>      | <...>        |
		//    | evt_node_comment   | <ip>           | <...>        |
		//    ------------------------------------------------------
		//
		event_node_id uid = { evt_node_none, 0, 0 };
		xstd::small_vector<std::vector<std::pair<vararg_store, size_t>>, 15> args = {};

		// Number of occurances.
		//
		size_t counter = 1;

		// Edges from this node to others, maps the to the counter.
		//
		std::unordered_map<event_edge, event_path_details, xstd::hasher<>, xstd::tie_equal_to> edges;

		// String conversion.
		//
		std::string to_string( fn_address_namer namer = name_address ) const
		{
			switch ( uid.type )
			{
				case evt_node_start:      return xstd::fmt::str( "Callback(%s)", namer( uid.id2 ) );
				case evt_node_return:	  return xstd::fmt::str( "ReturnTo(%s)", namer( uid.id1 ) );
				case evt_node_longjmp:	  return xstd::fmt::str( "Longjmp(%s)", namer( uid.id1 ) );
				case evt_node_invoke:	  return xstd::fmt::str( "Call(%s)", namer( uid.id2 ) );
				case evt_node_checkpoint: return xstd::fmt::str( "%s: %s", namer( uid.id1 ), name_checkpoint( ( checkpoint_id ) uid.id2 ) );
				case evt_node_exception:  return xstd::fmt::str( "%s", name_interrupt( ( interrupt_id ) uid.id2 ) );
				case evt_node_error:	     return xstd::fmt::str( "Error%d(%s)", uid.id2, namer( uid.id1 ) );
				case evt_node_comment:	  return xstd::fmt::str( "Comments" );
				default:                  xstd::error( "Invalid event node." );
			}
		}

		// Serialization, hashing and equal comparison.
		//
		template<typename H> void hash( H& out ) const { xstd::extend_hash( out, uid ); }
		auto tie() { return std::tie( uid, args, counter, edges ); }
		bool operator==( const event_node& o ) const { return uid == o.uid; }
		bool operator!=( const event_node& o ) const { return uid != o.uid; }
	};
	struct event_graph
	{
		// Associated metadata.
		//
		graph_metadata meta = {};

		// Set of nodes within this graph.
		//
		std::unordered_map<event_node_id, event_node, xstd::hasher<>> nodes = {};

		// Serialization, hashing and equal comparison.
		//
		auto tie() { return std::tie( meta, nodes ); }
		bool operator==( const event_graph& o ) const { return nodes == o.nodes; }
		bool operator!=( const event_graph& o ) const { return nodes != o.nodes; }
	};

	// Event radio dispatches events into an event graph tracking task states.
	//
	struct event_radio
	{
		// Task state.
		//
		enum wait_state_id
		{
			wait_none,
			wait_call_return,
			wait_interrupt_return,
			wait_dispatch,
		};
		struct task_entry
		{
			// Thread identifier.
			//
			uint32_t                           tid = {};
			
			// Range of the whole stack this task is assigned.
			//
			xstd::numeric_range<xstd::any_ptr> stack_range = {};

			// Details of the previous record entry.
			//
			event_node_id                      last_node = {};
			uint8_t                            last_tpr = {};
			uint64_t                           last_tsc = 0;
			xstd::any_ptr                      last_sp = {};

			// Initiator details.
			//
			xstd::any_ptr                      entry_ip = {};
			xstd::any_ptr                      entry_sp = {};
			
			// Wait state of the task.
			//
			xstd::any_ptr                      interrupt_tpr = nullptr;
			xstd::any_ptr                      interrupt_ip = nullptr;
			xstd::any_ptr                      interrupt_sp = nullptr;
			wait_state_id                      wait_state = wait_none;

			void append_node( uint64_t tsc, const std::shared_ptr<event_graph>& graph, const task_snapshot& snap, event_node_id uid, std::vector<vararg_store>&& args )
			{
				//fassert( stack_range.contains( snap.sp ) );

				// Adjust the stack pointer.
				//
				xstd::any_ptr sp = snap.sp;
				switch ( uid.type )
				{
					case evt_node_invoke: sp += 8; /*right before application pushed retptr*/ break;
					case evt_node_return: sp -= 8; /*right before application popped retptr*/ break;
					default: break;
				}

				// Calculate the gear hash.
				//
				if ( sp < last_sp )
				{
#if GEAR_SIZE
					for ( size_t n = 0; n != ( GEAR_SIZE - 1 ); n++ )
						uid.gear[ n ] = last_node.gear[ n + 1 ];
#endif
				}
				else
				{
#if GEAR_SIZE
					uid.gear.front() = last_node.gear.back();
#endif
				}
#if GEAR_SIZE
				uid.gear.back() = xstd::make_hash( last_node.type, last_node.id1, last_node.id2 );
#endif

				// Insert the new node.
				//
				auto [it, inserted] = graph->nodes.emplace( uid, event_node{ uid } );
				if ( !inserted )
					++it->second.counter;

				// Process the arguments.
				//
				size_t prev_argn = it->second.args.size();
				size_t curr_argn = args.size();
				if ( prev_argn < curr_argn ) [[unlikely]]
				{
					it->second.args.resize( curr_argn );
					for ( auto& i : it->second.args )
						i.reserve( ARG_SAMPLE_COUNT );
				}
				for ( size_t n = 0; n != args.size(); n++ )
				{
					// Skip if we reached the maximum sampling count.
					//
					auto& vec = it->second.args[ n ];
					if ( vec.size() == ARG_SAMPLE_COUNT && ( uid.type != evt_node_checkpoint || !is_checkpoint_arg_critical( ( checkpoint_id ) uid.id2 ) ) )
						continue;

					// Skip if duplicate.
					//
					auto it_dup = std::find_if( vec.begin(), vec.end(), [ & ] ( auto& entry ) { return entry.first == args[ n ]; } );
					if ( it_dup != vec.end() )
						continue;

					// Insert the value.
					//
					vec.emplace_back( std::move( args[ n ] ), it->second.counter - 1 );
				}

				// Link the nodes.
				//
				if ( last_node.type != evt_node_none )
				{
					event_edge edge = {
						.dst = uid,
						.sp_delta = ( int32_t ) ( sp - last_sp )
					};

					auto [eit, einserted] = graph->nodes[ last_node ].edges.emplace( edge, event_path_details{ 1 } );
					if ( !einserted )
						++eit->second.counter;
					if ( last_tsc )
						eit->second.time_recorded += tsc - last_tsc;
				}

				// Update the task state.
				//
				last_tsc = tsc;
				last_tpr = snap.tpr;
				last_sp = sp;
				last_node = uid;
			}
		};

		// Maps processor => active task.
		//
		std::vector<std::unique_ptr<task_entry>> active_tasks{ 32 };

		// Waiting task list.
		//
		std::unordered_map<uint32_t, std::vector<std::unique_ptr<task_entry>>, xstd::hasher<>> waiting_tasks = {};

		// Current timestamp.
		//
		uint64_t timestamp = 0;

		// Graph we're relaying the events to.
		//
		std::shared_ptr<event_graph> graph;

		// Constructed by a graph pointer or by default a new shared graph.
		//
		event_radio( std::shared_ptr<event_graph> graph = std::make_shared<event_graph>() ) : graph( std::move( graph ) ) {}

		// Task state helpers.
		//
		static void task_error( const task_entry* task, const task_snapshot* snap, std::string reason )
		{
#if PRINT_EVENT_LOG
	#if PRINT_EVENT_LOG == 2
			debug::cbuf_dump();
	#endif
			if ( !task )
			{
				xstd::log( "---- Fatal Tracer Error ----\n" );
				xstd::log( "       <<NULL TASK>>        \n" );
				xstd::warning( "%s\n\n", reason );
				return;
			}

			xstd::log( "---- Fatal Task Error ----\n" );
			if ( snap ) xstd::log( "  -- Input:          %s\n", *snap );
			xstd::log( "  -- Wait State:     %s\n", xstd::name_enum( task->wait_state ) );
			xstd::log( "  -- Stack Range:    %s\n", task->stack_range );
			xstd::log( "  -- TID:            0x%x\n", task->tid );
			xstd::log( "  -- Last  TPR:      %02x\n", task->last_tpr );
			xstd::log( "  -- Last  TSC:      %p\n", task->last_tsc );
			xstd::log( "  -- Last  SP:       %p\n", task->last_sp );
			xstd::log( "  -- Entry IP:       %s\n", name_address( task->entry_ip ) );
			xstd::log( "  -- Entry SP:       %p\n", task->entry_sp );
			xstd::log( "  -- Interrupt TPR:  %02x\n", task->interrupt_tpr );
			xstd::log( "  -- Interrupt IP:   %s\n", name_address( task->interrupt_ip ) );
			xstd::log( "  -- Interrupt SP:   %p\n", task->interrupt_sp );
			xstd::warning( "%s\n\n", reason );
#endif
		}
		void suspend_task( std::unique_ptr<task_entry> entry, wait_state_id reason )
		{
			// If tail-call, assume wait will never be satisfied.
			//
			if ( reason == wait_call_return && entry->last_sp >= entry->entry_sp )
				return;

			uint32_t tid = entry->tid;
			entry->wait_state = reason;
			waiting_tasks[ tid ].emplace_back( std::move( entry ) );
		}
		std::unique_ptr<task_entry>& ref_active_task( uint16_t pcid )
		{
			if ( active_tasks.size() <= pcid ) [[unlikely]]
				active_tasks.resize( pcid + 1 );
			return active_tasks[ pcid ];
		}

		// Implement an almost interchangable interface with the event buffer.
		//
		void enter( const task_snapshot& snapshot, const task_parameters& params, const control_parameters& ctr, std::vector<vararg_store> args )
		{
#if PRINT_EVENT_LOG
			debug::log( "%016llx Enter      %s %s %s %s\n", timestamp, snapshot, params, ctr, args );
#endif

			// Kick the active task.
			//
			auto& active_task = ref_active_task( snapshot.pcid );
			if ( active_task )
				suspend_task( std::exchange( active_task, nullptr ), wait_dispatch );
			
			while ( 1 )
			{
				auto tit = waiting_tasks.find( params.tid );
				if ( tit == waiting_tasks.end() )
					break;

				// Process returns.
				//
				auto it = tit->second.rbegin();
				for ( ; it != tit->second.rend(); ++it )
				{
					const std::unique_ptr<task_entry>& task = *it;
					if ( !task->stack_range.contains( snapshot.sp ) )
						continue;

					// Expecting return from an interrupt:
					//
					if ( task->wait_state == wait_interrupt_return )
					{
						if ( task->interrupt_tpr != snapshot.tpr )
						{
							task_error( task.get(), &snapshot, "Unexpected interrupt TPR." );
							return;
						}
						else if ( task->interrupt_ip != snapshot.ip && ( int64_t( task->interrupt_sp - snapshot.sp ) == 8 || int64_t( task->interrupt_sp - snapshot.sp ) == -8 ) )
						{
							task_error( task.get(), &snapshot, "Spuriously missed guest #PF, fix supervisor code!" );
							return;
						}
						else if ( task->interrupt_sp != snapshot.sp )
						{
							task_error( task.get(), &snapshot, "Unexpected interrupt SP." );
							return;
						}
						task->interrupt_sp = nullptr;
						break;
					}
					// Expecting return from a call:
					//
					else if ( task->wait_state == wait_call_return )
					{
						// Call return.
						//
						if ( task->last_sp == snapshot.sp )
						{
							task->last_tpr = snapshot.tpr;
							break;
						}
						// Nested callbacks.
						//
						else if ( task->last_sp > snapshot.sp )
						{
							continue;
						}
						// Long jump.
						//
						else
						{
							task->append_node( timestamp, graph, snapshot, { evt_node_longjmp, snapshot.ip, 0 }, std::move( args ) );
							break;
						}
					}
					else if ( task->wait_state == wait_dispatch )
					{
						// If nested callback:
						//
						if ( task->last_sp > snapshot.sp )
						{
							continue;
						}
						// If it is indeed dispatched:
						//
						else
						{
							break;
						}
					}
					else
					{
						task_error( task.get(), &snapshot, "Waiting task list is corrupt, invalid task entry in waiting list." );
						return;
					}
				}

				if ( it != tit->second.rend() )
				{
					if ( snapshot.sp > it->get()->entry_sp )
					{
#if PRINT_EVENT_LOG
						log( "< Nested CB return %p -> %p >\n", snapshot.sp, it->get()->entry_sp );
#endif
						tit->second.erase( --it.base() );
						if ( tit->second.empty() )
						{
							waiting_tasks.erase( tit );
							break;
						}
						continue;
					}

					it->get()->wait_state = wait_none;
					active_task = std::move( *it );
					tit->second.erase( --it.base() );
					if ( tit->second.empty() )
						waiting_tasks.erase( tit );
					return;
				}
				else
				{
					break;
				}
			}

			// Native call, beginning of a new task:
			//
			uint64_t sp_leftover = snapshot.sp & 0xF;
			if ( sp_leftover == 8 )
			{
				// Create the new task entry.
				//
				uint64_t stack_base = snapshot.sp + params.stack_used;
				active_task = std::make_unique<task_entry>();
				active_task->tid = params.tid;
				active_task->stack_range = { stack_base - params.stack_size, stack_base };
				active_task->last_sp = snapshot.sp;
				active_task->entry_sp = snapshot.sp + 8;
				active_task->entry_ip = ctr.tos;

				// Add the node.
				//
				active_task->append_node( timestamp, graph, snapshot, { evt_node_start, snapshot.ip, ctr.tos }, std::move( args ) );
			}
			// New task we missed if the event log started in the middle.
			//
			else
			{
#if PRINT_EVENT_LOG
				task_error( nullptr, &snapshot, xstd::fmt::str( "Missed task [ %s | %s ]\n", params, ctr ) );
#endif
				// Create the new task entry.
				//
				uint64_t stack_base = snapshot.sp + params.stack_used;
				active_task = std::make_unique<task_entry>();
				active_task->tid = params.tid;
				active_task->stack_range = { stack_base - params.stack_size, stack_base };
				active_task->last_sp = snapshot.sp;
				active_task->entry_sp = nullptr;
				active_task->entry_ip = nullptr;
			}
		}
		void checkpoint( const task_snapshot& snapshot, checkpoint_id chk, std::vector<vararg_store> args )
		{
#if PRINT_EVENT_LOG
			debug::log( "%016llx Chk        %s %s %s\n", timestamp, snapshot, name_checkpoint( chk ), args );
#endif
			// Get the active task.
			//
			auto& active_task = ref_active_task( snapshot.pcid );
			if ( !active_task || active_task->wait_state != wait_none )
			{
				task_error( active_task.get(), &snapshot, "Invalid task state for checkpoint." );
				return;
			}

			// Append the node.
			//
			active_task->append_node( timestamp, graph, snapshot, { evt_node_checkpoint, snapshot.ip, ( uint64_t ) chk }, std::move( args ) );
		}
		void silent_exit( const task_snapshot& snapshot )
		{
#if PRINT_EVENT_LOG
			debug::log( "%016llx SExit      %s\n", timestamp, snapshot );
#endif

			// Get the active task.
			//
			auto& active_task = ref_active_task( snapshot.pcid );
			if ( !active_task || active_task->wait_state != wait_none || ( snapshot.sp & 0xF ) != 8 )
			{
				task_error( active_task.get(), &snapshot, "Invalid task state for s-exit." );
				return;
			}

			// Suspend the task.
			//
			active_task->last_tsc = timestamp;
			active_task->last_tpr = snapshot.tpr;
			active_task->last_sp = snapshot.sp + 8;
			suspend_task( std::exchange( active_task, nullptr ), wait_call_return );
		}
		void swap_context( const task_snapshot& snapshot, uint32_t pcid_0, uint32_t tid )
		{
#if PRINT_EVENT_LOG
			debug::log( "%016llx SwapC      %s\n", timestamp, snapshot, pcid_0 );
#endif

			// Kick the active task.
			//
			auto& active_task = ref_active_task( snapshot.pcid );
			if ( active_task )
				suspend_task( std::exchange( active_task, nullptr ), wait_dispatch );

			// Find the previous task.
			//
			auto& ptask = ref_active_task( pcid_0 );
			if ( !ptask || ptask->tid != tid || !ptask->stack_range.contains( snapshot.sp ) )
			{
				if ( auto tit = waiting_tasks.find( tid ); tit != waiting_tasks.end() )
				{
					for ( auto it = tit->second.rbegin(); it != tit->second.rend(); it++ )
					{
						if ( it->get()->wait_state == wait_dispatch && it->get()->stack_range.contains( snapshot.sp ) )
						{
							active_task = std::move( *it );
							active_task->wait_state = wait_none;
							tit->second.erase( --it.base() );
							if ( tit->second.empty() )
								waiting_tasks.erase( tit );
							return;
						}
					}
				}
			}
			else
			{
				active_task = std::exchange( ptask, nullptr );
				return;
			}
			task_error( nullptr, &snapshot, "Lazy swap context failed." );
		}
		void exit( const task_snapshot& snapshot, const control_parameters& ctr, std::vector<vararg_store> args )
		{
#if PRINT_EVENT_LOG
			debug::log( "%016llx Exit       %s %s %s\n", timestamp, snapshot, ctr, args );
#endif

			// Get the active task.
			//
			auto& active_task = ref_active_task( snapshot.pcid );
			if ( !active_task || active_task->wait_state != wait_none )
			{
				task_error( active_task.get(), &snapshot, "Invalid task state for exit." );
				return;
			}

			// Virtual call, invocation:
			//
			uint64_t sp_leftover = snapshot.sp & 0xF;
			if ( sp_leftover == 8 )
			{
				// Append a new node.
				//
				active_task->append_node( timestamp, graph, snapshot, { evt_node_invoke, ctr.tos, snapshot.ip }, std::move( args ) );

				// Suspend the task.
				//
				suspend_task( std::exchange( active_task, nullptr ), wait_call_return );
			}
			// Virtual return, return from a task:
			//
			else if ( sp_leftover == 0 && ( !active_task->entry_ip || ( active_task->entry_ip == snapshot.ip && active_task->entry_sp == snapshot.sp ) ) )
			{
				// Add the node.
				//
				active_task->append_node( timestamp, graph, snapshot, { evt_node_return, snapshot.ip, 0 }, std::move( args ) );

				// Clear the active task.
				//
				active_task.reset();
			}
			// Handle callout with invalid SP:
			//
			else
			{
				active_task->append_node( timestamp, graph, snapshot, { evt_node_error, snapshot.ip, 1 }, std::move( args ) );
				suspend_task( std::exchange( active_task, nullptr ), wait_call_return );
			}
		}
		void interrupt( const task_snapshot& snapshot, interrupt_id index, std::vector<vararg_store> args )
		{
#if PRINT_EVENT_LOG
			debug::log( "%016llx Interrupt  %s %s %s\n", timestamp, snapshot, name_interrupt( index ), args );
#endif

			// Get the active task.
			//
			auto& active_task = ref_active_task( snapshot.pcid );
			if ( !active_task || active_task->wait_state != wait_none )
			{
				task_error( active_task.get(), &snapshot, "Invalid task state for interruption." );
				return;
			}

			// If exception create a new node.
			//
			bool is_exception = ( index <= interrupt_id::max_hardware_exception && index != interrupt_id::non_maskable ) || index == interrupt_id::raise_assert || index == interrupt_id::raise_security_check;
			if ( is_exception )
				active_task->append_node( timestamp, graph, snapshot, { evt_node_exception, snapshot.ip, ( uint64_t ) index }, std::move( args ) );

			// Suspend the task.
			//
			active_task->interrupt_ip = snapshot.ip;
			active_task->interrupt_sp = snapshot.sp;
			active_task->interrupt_tpr = snapshot.tpr;
			suspend_task( std::exchange( active_task, nullptr ), is_exception ? wait_dispatch : wait_interrupt_return );
		}
		void comment( const task_snapshot& snapshot, std::vector<vararg_store> args )
		{
#if PRINT_EVENT_LOG
			debug::log( "%016llx Comment    %s %s\n", timestamp, snapshot, args );
#endif
			// Get the active task.
			//
			auto& active_task = ref_active_task( snapshot.pcid );
			if ( !active_task || active_task->wait_state != wait_none )
			{
				task_error( active_task.get(), &snapshot, "Invalid task state for comment." );
				return;
			}

			// Append the node.
			//
			active_task->append_node( timestamp, graph, snapshot, { evt_node_comment, snapshot.ip, 0 }, std::move( args ) );
		}
		void error( const task_snapshot& snapshot, std::vector<vararg_store> args )
		{
#if PRINT_EVENT_LOG
			debug::log( "%016llx Error      %s %s\n", timestamp, snapshot, args );
#endif
			// Get the active task.
			//
			auto& active_task = ref_active_task( snapshot.pcid );
			if ( !active_task || active_task->wait_state != wait_none )
			{
				task_error( active_task.get(), &snapshot, "Invalid task state for error." );
				return;
			}

			// Append the node.
			//
			active_task->append_node( timestamp, graph, snapshot, { evt_node_error, snapshot.ip, 0 }, std::move( args ) );

			// Kill the task.
			//
			active_task.reset();
		}

		// Deserializing reader.
		//
		void replay( const event_header* it )
		{
			const uint8_t* ext = it->begin();
			timestamp = it->timestamp;

			auto read_args = [ & ] ()
			{
				std::vector<vararg_store> list = {};
				while ( ext != it->end() )
					read_buffer( ext, list.emplace_back() );
				return list;
			};

			switch ( it->type )
			{
				case event_enter:
				{
					task_parameters tparams;
					control_parameters cparams;
					read_buffer( ext, tparams, cparams );
					return enter( it->snapshot, tparams, cparams, read_args() );
				}
				case event_checkpoint:
				{
					checkpoint_id chk;
					read_buffer( ext, chk );
					return checkpoint( it->snapshot, chk, read_args() );
				}
				case event_exit:
				{
					control_parameters cparams;
					read_buffer( ext, cparams );
					return exit( it->snapshot, cparams, read_args() );
				}
				case event_silent_exit:
				{
					return silent_exit( it->snapshot );
				}
				case event_swap_context:
				{
					uint32_t pcid_0, tid;
					read_buffer( ext, pcid_0, tid );
					return swap_context( it->snapshot, pcid_0, tid );
				}
				case event_interrupt:
				{
					interrupt_id idx;
					read_buffer( ext, idx );
					return interrupt( it->snapshot, idx, read_args() );
				}
				case event_comment:
				{
					return comment( it->snapshot, read_args() );
				}
				case event_error:
				{
					return error( it->snapshot, read_args() );
				}
				default:                  unreachable();
			}
		}
	};
};