#include <xstd/intrinsics.hpp>
#include "protocol.hpp"
#include <xstd/spinlock.hpp>
#include <ntpp.hpp>

#if !PROD_BUILD
#include "stub.hpp"
#include "target.hpp"

namespace gdb
{
	// State of the stub.
	//
	struct stub_state
	{
		// Set if connection is in no-ack mode.
		//
		bool in_no_ack = false;

		// Iterators for stateful iterations.
		//
		std::string last_process_query_data = {};
		std::string last_thread_query_data = {};
		std::string last_exec_file_query_data = {};

		// Current target.
		//
		std::optional<target_state> target = std::nullopt;

		// Custom remote commands.
		//
		std::optional<std::string> execute_monitor_command( std::string_view cmd )
		{
			if ( cmd == "blist" )
			{
				std::string reply;
				for ( size_t i = 0; i != 4; i++ )
				{
					reply += xstd::fmt::str( 
						"#%llu: [ address:%p, type:%u, length:%u ]\n", i,
						( uint64_t ) global_breakpoints[ i ].address,
						( uint32_t ) global_breakpoints[ i ].type,
						( uint32_t ) global_breakpoints[ i ].len
					);
				}
				return std::optional{ std::move( reply ) };
			}
			else if ( cmd == "mlist" )
			{
				if ( target )
				{
					auto read_user = [ & ] <typename T> ( const T& ref ) -> std::optional<T>
					{
						std::optional<T> value = {};
						if ( target->read_memory( ( uint64_t ) &ref, &value.emplace(), sizeof( T ) ) != sizeof( T ) )
							value.reset();
						return value;
					};

					std::string reply;
					if ( auto ldr = read_user( target->process->peb->ldr ) )
					{
						auto* ldr_head = &ldr.value()->in_load_order_module_list;
						for ( auto mit = read_user( ldr_head->flink ).value_or( ldr_head ); mit != ldr_head; mit = read_user( mit->flink ).value_or( ldr_head ) )
						{
							auto* it = ( ldr::data_table_entry_t* ) mit;
							auto dll_base = read_user( it->dll_base );
							if ( !dll_base )
								break;
							auto base_name = read_user( it->base_dll_name );
							if ( base_name && base_name->length )
							{
								auto tmp = std::make_unique_for_overwrite<wchar_t[]>( base_name->length / 2 );
								size_t len = target->read_memory( ( uint64_t ) base_name->buffer, tmp.get(), base_name->length ) / 2;
								reply += xstd::fmt::str(
									"%p - %s\n",
									dll_base.value(),
									std::wstring_view{ tmp.get(), len }
								);
							}
						}
					}
					return std::optional{ std::move( reply ) };
				}
			}

			return std::nullopt;
		}

		// Gets the current thread.
		//
		nt::ethread_t* get_current_thread()
		{
			if ( !target )
				return nullptr;
			if ( ntpp::is_exiting( target->process ) )
				return nullptr;
			if ( !target->current_thread )
			{
				for ( auto&& thread : ntpp::thread_list{ target->process } )
				{
					target->current_thread.reset( thread );
					break;
				}
			}
			return target->current_thread.get();
		}

		// Each packets implementation.
		//
		void enable_persistent_mode() 
		{ 
		}
		void query_halt_reason() 
		{
			if ( !target )
				return send( "E01" );
			// TODO
			send( SIGINT );
		}
		void kill()
		{
			if ( target )
				target->kill();
		}
		void detach()
		{
			if ( target )
			{
				target.reset();
				last_target = nullptr;
				send( "OK" );
			}
			else
			{
				send( "E01" );
			}
		}
		void interrupt()
		{
			if ( !target )
				return send( "E01" );
			target->interrupt();
			return send( SIGINT );
		}
		void read_register( std::string_view msg )
		{
			auto thr = get_current_thread();
			if ( !thr ) return send( "E01" );
			
			uint64_t reg_id = xstd::parse_number_v( msg, 16 );
			size_t size = reg_size( ( reg_num ) reg_id );
			if ( !size )
				return send( "E02" );
			
			uint8_t buffer[ 16 ];
			if ( !target->read_register( thr, reg_num( reg_id ), &buffer ) )
				return send( "E03" );
			return send( as_hex( std::span{ &buffer[ 0 ], size } ) );
		}
		void read_registers()
		{
			auto thr = get_current_thread();
			if ( !thr ) return send( "E01" );

			auto regs = target->read_general_registers( thr );
			if ( !regs ) return send( "E02" );
			return send( as_hex( xstd::as_bytes( *regs ) ) );
		}
		void write_register( std::string_view msg )
		{
			auto thr = get_current_thread();
			if ( !thr ) return send( "E01" );

			uint64_t reg_id = xstd::parse_number_v( msg, 16 );
			size_t size = reg_size( ( reg_num ) reg_id );
			if ( !size )
				return send( "E02" );
			if ( !msg.starts_with( "=" ) )
				return send( "E03" );
			msg.remove_prefix( 1 );
			if ( msg.size() != ( size * 2 ) )
				return send( "E04" );
			uint8_t buffer[ 16 ];
			read_bytes( msg.data(), &buffer[ 0 ], size );
			if ( !target->write_register( thr, reg_num( reg_id ), &buffer, size ) )
				return send( "E05" );
			return send( "OK" );
		}
		void write_registers( std::string_view msg )
		{
			auto thr = get_current_thread();
			if ( !thr ) return send( "E01" );
			
			if ( msg.size() != ( sizeof( general_registers ) * 2 ) )
				return send( "E02" );

			general_registers regs = {};
			read_bytes( msg.data(), ( uint8_t* ) &regs, sizeof(regs));

			if ( !target->write_general_registers( thr, regs ) )
				return send( "E03" );
			else
				return send( "OK" );
		}
		void read_memory( std::string_view msg )
		{
			if ( !target )
				return send( "E01" );

			uint64_t address = xstd::parse_number_v( msg, 16 );
			size_t length = 1;
			if ( msg.starts_with( "," ) )
			{
				msg.remove_prefix( 1 );
				length = xstd::parse_number_v( msg, 16 );
			}

			auto temp = std::make_unique_for_overwrite<uint8_t[]>( length );
			length = target->read_memory( address, temp.get(), length );
			return send( as_hex( std::span{ &temp[ 0 ], length } ) );
		}
		void write_memory( std::string_view msg )
		{
			if ( !target )
				return send( "E01" );
			uint64_t address = xstd::parse_number_v( msg, 16 );
			if ( !msg.starts_with( "," ) )
				return send( "E02" );
			msg.remove_prefix( 1 );
			size_t length = xstd::parse_number_v( msg, 16 );
			if ( !msg.starts_with( ":" ) || msg.size() != ( length * 2 + 1 ) )
				return send( "E03" );
			msg.remove_prefix( 1 );
			auto temp = std::make_unique_for_overwrite<uint8_t[]>( length );
			read_bytes( msg.data(), &temp[ 0 ], length );
			if ( target->write_memory( address, temp.get(), length ) != length )
				return send( "E02" );
			else
				return send( "OK" );
		}
		void general_query( std::string_view msg )
		{
			auto submit_range = [ & ] ( std::string_view src, uint64_t offset, int64_t length )
			{
				bool end = ( offset + length ) >= src.size();
				if ( end ) length = src.size() - offset;
				std::string result = end ? "l" : "m";
				if ( length > 0 )
					result += src.substr( offset, length );
				return send( std::move( result ) );
			};
			auto parse_range_query = [ & ] ( std::string_view s ) -> std::optional<std::pair<uint64_t, int64_t>>
			{
				if ( msg.starts_with( s ) )
				{
					msg.remove_prefix( s.size() );
					uint64_t offset = xstd::parse_number_v( msg, 16 );
					if ( msg.starts_with( "," ) )
					{
						msg.remove_prefix( 1 );
						int64_t length = ( int64_t ) xstd::parse_number_v( msg, 16 );
						return std::pair{ offset, length };
					}
				}
				return std::nullopt;
			};
		
			if ( msg.starts_with( "Supported" ) )
			{
				return send(
					"PacketSize=40000000;"
					//"qXfer:auxv:read+;"
					"qXfer:features:read+;"
					"qXfer:exec-file:read+;"
					//"qXfer:libraries:read+;"
					//"qXfer:library-list:read+;" // IDA TYPO.
					//"qXfer:memory-map:read+;"
					"QStartNoAckMode+;"
					"qXfer:osdata:read+;"
					"qXfer:threads:read+;"
				);
			}
			else if ( msg == "C" )
			{
				auto thr = get_current_thread();
				if ( !thr ) 
					return send( "E01" );
				else
					return send( xstd::fmt::print_ux<false>( ( uint64_t ) thr->cid.unique_thread, "QC" ) );
			}
			else if ( auto q = parse_range_query( "Xfer:osdata:read:processes:" ) )
			{
				// If no offset given, rebuild the process list.
				//
				if ( !q->first )
				{
					last_process_query_data = R"(<?xml version="1.0"?><!DOCTYPE target SYSTEM "osdata.dtd"><osdata type="processes">)";
					for ( auto process : ntpp::process_list{} )
					{
						last_process_query_data += xstd::fmt::str( 
							R"(<item><column name="pid">%llu</column><column name="command">%s</column></item>)", 
							process->unique_process_id, 
							ntpp::get_image_name( process )
						);
					}
					last_process_query_data += "</osdata>";
				}
				return submit_range( last_process_query_data, q->first, q->second );
			}
			else if ( auto q = parse_range_query( "Xfer:features:read:target.xml:" ) )
			{
				return submit_range( target_desc, q->first, q->second );
			}
			else if ( auto q = parse_range_query( "Xfer:exec-file:read::" ) )
			{
				if ( !target )
					return send( "E01" );
				if ( !q->first )
					last_exec_file_query_data = xstd::utf_convert<char>( ntpp::get_image_path( target->process ) );
				return submit_range( last_exec_file_query_data, q->first, q->second );
			}
			else if ( auto q = parse_range_query( "Xfer:threads:read::" ) )
			{
				if ( !target )
					return send( "E01" );

				// If no offset given, rebuild the thread list.
				//
				if ( !q->first )
				{
					last_thread_query_data = R"(<?xml version="1.0"?><threads>)";
					if ( !ntpp::is_exiting( target->process ) )
					{
						for ( auto&& thread : ntpp::thread_list{ target->process } )
						{
							if ( thread->thread_name && !thread->thread_name->get().empty() )
							{
								last_thread_query_data += xstd::fmt::str(
									R"(<thread id="%llx" name="%s"></thread>)",
									thread->cid.unique_thread,
									thread->thread_name->get()
								);
							}
							else
							{
								last_thread_query_data += xstd::fmt::str(
									R"(<thread id="%llx"></thread>)",
									thread->cid.unique_thread
								);
							}
						}
					}
					last_thread_query_data += "</threads>";
				}
				return submit_range( last_thread_query_data, q->first, q->second );
			}
			else if ( msg == "fThreadInfo" || msg == "sThreadInfo" )
			{
				if ( !target )
					return send( "E01" );

				if ( msg == "fThreadInfo" )
				{
					std::string result = "";
					if ( !ntpp::is_exiting( target->process ) )
						for ( auto&& thread : ntpp::thread_list{ target->process } )
							result += xstd::fmt::print_ux<false>( ( uint64_t ) thread->cid.unique_thread, "," );

					if ( !result.empty() )
					{
						result[ 0 ] = 'm';
						return send( std::move( result ) );
					}
				}
				return send( "l" );
			}
			else if ( msg.starts_with( "Rcmd," ) )
			{
				msg.remove_prefix( xstd::strlen( "Rcmd," ) );

				std::string data( msg.size() / 2, ' ' );
				read_bytes( msg.data(), ( uint8_t* ) data.data(), msg.size() / 2 );

				auto reply = execute_monitor_command( data ).value_or( "Unknown command." );
				if ( reply.empty() )
					return send( "OK" );
				else
					return send( as_hex( std::span{ ( uint8_t* ) reply.data(), reply.size() } ) );
			}

			printf( "Unsupported general query '%.*s'\n", msg.size(), msg.data() );
			send( "" );
		}
		void general_set( std::string_view msg )
		{
			if ( msg == "StartNoAckMode" )
			{
				in_no_ack = true;
				return send( "OK" );
			}
			printf( "Unsupported general set '%.*s'\n", msg.size(), msg.data() );
			send( "" );
		}
		void set_thread( std::string_view msg )
		{
			if ( !target )
				return send( "E01" );
			if ( ntpp::is_exiting( target->process ) )
				return send( "E03" );

			// Read the TID.
			//
			msg.remove_prefix( 1 );
			int64_t tid = xstd::parse_number_v<int64_t>( msg, 16 );
			if ( tid == -1 )
				return send( "E04" );

			// If targetting a specific thread:
			//
			ntpp::ref<nt::ethread_t> value = {};
			if ( tid )
			{
				value = ntpp::lookup_thread( ( uint64_t ) tid );
				if ( value && value->tcb.process != ( nt::kprocess_t* ) target->process.get() )
					value.reset();
				if ( !value )
					return send( "E05" );
			}

			// Otherwise do the assignment and return.
			//
			target->current_thread = std::move( value );
			return send( "OK" );
		}
		void attach( std::string_view msg )
		{
			uint64_t process_id = xstd::parse_number_v( msg, 16 );
			if ( !msg.empty() )
				return send( "E01" );
			
			auto process = ntpp::lookup_process( process_id );
			if ( !process )
				return send( "E02" );

			global_breakpoints = {};
			last_target = process.get();
			target.emplace( std::move( process ) );
			target->interrupt();
			return query_halt_reason();
		}
		void resume()
		{
			if ( !target )
				return send( "E01" );
			if ( !target->resume() )
				return send( "E02" );
			// No reply until stop packet.
		}
		void step()
		{
			auto thr = get_current_thread();
			if ( !thr ) return send( "E01" );
			if ( !target->step( thr ) )
				return send( "E02" );
			// No reply until stop packet.
		}
		void configure_breakpoint( std::string_view msg, bool add )
		{
			if ( !target )                             return send( "E01" );
			if ( ntpp::is_exiting( target->process ) ) return send( "E02" );
			
			// Parse the type.
			//
			if ( msg.empty() )
				return send( "E03" );
			uint8_t type = uint8_t( msg[ 0 ] - '0' );
			msg.remove_prefix( 1 );
			if ( type > 4 )
				return send( "E04" );
			
			// Upgrade software to hardware silently.
			//
			if ( type == 0 )
				type = 1;
			breakpoint_type etype = breakpoint_type( type - 1 );
			
			// Parse the address and kind (length).
			//
			if ( !msg.starts_with( "," ) )
				return send( "E05" );
			msg.remove_prefix( 1 );
			uint64_t address = xstd::parse_number_v( msg, 16 );
			if ( !msg.starts_with( "," ) )
				return send( "E06" );
			msg.remove_prefix( 1 );
			uint64_t length = xstd::parse_number_v( msg, 16 );
			if ( !msg.empty() )
				return send( "E07" );
			
			breakpoint_length elength;
			switch ( length )
			{
				case 0:
				case 1: elength = breakpoint_length::byte;  break;
				case 2: elength = breakpoint_length::word;  break;
				case 4: elength = breakpoint_length::dword; break;
				case 8: elength = breakpoint_length::qword; break;
				default: return send( "E08" );
			}
			if ( etype == breakpoint_type::execute )
				elength = breakpoint_length::byte;
			
			// Create the breakpoint entry.
			//
			breakpoint_entry entry{ address, etype, elength };
			
			// Fetch the array.
			//
			auto bp_array = global_breakpoints;
			
			// If removing, remove all matches.
			//
			if ( !add )
			{
				auto new_end = std::remove_if( bp_array.begin(), bp_array.end(), [ & ] ( auto& e )
				{
					return xstd::trivial_equals( e, entry );
				} );
				std::fill( new_end, bp_array.end(), breakpoint_entry{} );
			}
			// If adding, insert at the first empty slot, if there are none, shift out the oldest breakpoint.
			//
			else
			{
				auto it = std::find_if( bp_array.begin(), bp_array.end(), [ & ] ( auto& e )
				{
					return e.address == 0;
				} );
				if ( it != bp_array.end() )
				{
					*it = entry;
				}
				else
				{
					std::shift_left( bp_array.begin(), bp_array.end(), 1 );
					bp_array.back() = entry;
				}
			}
			
			// Save the new list and send okay.
			//
			global_breakpoints = bp_array;
			return send( "OK" );
		}

		// Handles a decoded command.
		//
		void on_message( std::string_view msg )
		{
			char cmd = msg[ 0 ];
			msg.remove_prefix( 1 );

			// TODO A thread-id can also be a literal ‘-1’ to indicate all threads.

			switch ( cmd )
			{
				case '!':  return enable_persistent_mode();
				case '?':  return query_halt_reason();
				case 'k':  return kill();
				case 'D':  return detach();
				case 'q':  return general_query( msg );
				case 'Q':  return general_set( msg );
				case 'p':  return read_register( msg );
				case 'g':  return read_registers();
				case 'm':  return read_memory( msg );
				case 'P':  return write_register( msg );
				case 'G':  return write_registers( msg );
				case 'M':  return write_memory( msg );
				case 'r':
				case 'H':  return set_thread( msg );
				case '\3': return interrupt();
				case 'c':  return resume(); // TODO: address format
				case 's':  return step(); // TODO: address format
				case 'z':  return configure_breakpoint( msg, false );
				case 'Z':  return configure_breakpoint( msg, true );
				case 'v':
				{
					if ( msg.starts_with( "Attach;" ) )
						return attach( msg.substr( xstd::strlen( "Attach;" ) ) );
					//if ( msg == "Cont?" )
					//	return send( "vCont;c;s" );

					printf( "Unsupported extended command '%.*s'\n", msg.size(), msg.data() );
					return send( "" );
				}
				default: 
					printf( "Unsupported command '%c'\n", cmd );
					return send( "" );
			}
		}

		// Debug handler.
		//
		static void print_dbg( bool c2s, std::string_view msg ) 
		{
			//if ( msg.size() > 32 )
			//	printf( "%s '%.*s...'\n", c2s ? "->" : "<-", 32, msg.data() );
			//else
			//	printf( "%s '%.*s'\n", c2s ? "->" : "<-", msg.size(), msg.data() );
		}

		// Handles the decoding of an incoming message.
		//
		void on_receive( std::string_view msg )
		{
			print_dbg( true, msg );
			while ( !msg.empty() )
			{
				// Handle gestures.
				//
				if ( msg[ 0 ] == '+' )
				{
					msg.remove_prefix( 1 );
					continue;
				}
				if ( msg[ 0 ] == '\3' )
				{
					on_message( "\3" );
					msg.remove_prefix( 1 );
					continue;
				}
				if ( msg[ 0 ] != '$' /*'-' for instance*/ )
					return;

				// Find the end of the packet.
				//
				msg.remove_prefix( 1 );
				size_t end = msg.find( '#' );
				if ( end == std::string::npos || ( end + 3 ) > msg.size() )
				{
					send_raw( "-" );
					return;
				}

				// Parse the packet.
				//
				std::string submsg = unescape_string( std::string{ msg.substr( 0, end ) } );
				uint8_t chk = read_byte( msg.data() + end + 1 );
				msg.remove_prefix( end + 3 );
				if ( chk != compute_checksum( submsg ) )
				{
					send_raw( "-" );
					return;
				}

				// Tell the client that we got the packet and handle it.
				//
				if ( !in_no_ack )
					send_raw( "+" );
				on_message( submsg );
			}
		}

		// Submits a message through the protocol.
		//
		void send( std::string msg )
		{
			// Escape the string and then compute the checksum.
			//
			msg = escape_string( std::move( msg ) );
			auto chk = xstd::fmt::print_hex<false, uint8_t>( compute_checksum( msg ) );

			// Insert the header and the footer.
			//
			size_t len = msg.size();
			msg.resize( len + 4 );
			memmove( msg.data() + 1, msg.data(), len );
			msg[ 0 ] = '$';
			msg[ len + 1 ] = '#';
			msg[ len + 2 ] = chk[ 0 ];
			msg[ len + 3 ] = chk[ 1 ];
			send_raw( std::move( msg ) );
		}
		void send_raw( std::string msg )
		{
			print_dbg( false, msg );
			moonbeam::request<"gdbWrite">( sjson::instance{ std::move( msg ) } ).release();
		}
	};
	static std::optional<stub_state> global_state;

	// Initializes the GDB server and the CE stubs.
	//
	NO_INLINE void init()
	{
		// Initialize target signals.
		//
		init_signal();

		// Register the relevant end-points.
		//
		moonbeam::register_endpoint<"startGdbServer">( [ ] ( sjson::instance ) -> moonbeam::endpoint
		{
			// TODO:

			//uint16_t port = port_no.is_integer() ? port_no.integer() : 0;
			//if ( !port ) {
			//	// kill it.
			//} else {
			//	// restart or start
			//}
			co_return{};
		} );
	}

	// Sends a singal.
	// - Must be called under a lock.
	//
	void send_signal( std::string msg )
	{
		global_state->send( std::move( msg ) );
	}

	// Gets the current target.
	// - Must be called under a lock.
	//
	target_state* get_target()
	{
		if ( global_state && global_state->target )
			return &global_state->target.value();
		else
			return nullptr;
	}
};
#else
namespace gdb {
	void init() {
		moonbeam::register_endpoint<"startGdbServer">( []( sjson::instance ) -> moonbeam::endpoint {
			co_yield xstd::exception{ "gdb not enabled in this build"_es };
			co_return {};
		} );
	}
};
#endif