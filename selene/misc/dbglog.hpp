#pragma once
#include <ntpp.hpp>
#include <xstd/spinlock.hpp>

// Debug print implementation.
//
namespace dbglog
{
	struct dbwin_buffer
	{
		uint32_t pid;
		char     msg[ 0x1000 - sizeof( uint32_t ) ];
	};
	inline ntpp::ref<nt::kevent_t> data_ready_event = {};
	inline ntpp::ref<nt::kevent_t> buffer_ready_event = {};
	inline dbwin_buffer* buffer_mapping = {};
	inline xstd::spinlock log_lock = {};

	// Initializes the logger.
	//
	COLD static bool try_init()
	{
		buffer_ready_event = ntpp::reference_object_by_name<nt::kevent_t>( L"\\BaseNamedObjects\\DBWIN_BUFFER_READY" );
		if ( !buffer_ready_event )
			return false;

		data_ready_event = ntpp::reference_object_by_name<nt::kevent_t>( L"\\BaseNamedObjects\\DBWIN_DATA_READY" );
		if ( !data_ready_event )
			return false;
		
		auto buffer_scn = ntpp::reference_object_by_name<nt::section_t>( L"\\BaseNamedObjects\\DBWIN_BUFFER" );
		if ( !buffer_scn )
			return false;

		size_t view_size = sizeof( dbwin_buffer );
		return nt::status{ mm::map_view_in_system_space( buffer_scn.get(), ( void** ) &buffer_mapping, &view_size ) }.is_success();
	}

	// Destroys the logger.
	//
	COLD static void destroy()
	{
		if ( data_ready_event )
			ke::set_event( data_ready_event.get(), 1, 0 );
		data_ready_event.reset();
		buffer_ready_event.reset();
		if ( auto prev = std::exchange( buffer_mapping, nullptr ) )
			mm::unmap_view_in_system_space( prev );
	}

	static bool write( std::string_view msg, uint64_t pid = ( uint64_t ) ntpp::get_client_id().unique_process )
	{
		// If IRQL is too high, fail.
		//
		if ( ia32::get_effective_irql() > APC_LEVEL ) [[unlikely]]
			return false;

		// Enter critical region and acquire the lock.
		//
		ntpp::critical_region _c{};
		std::lock_guard _g{ log_lock };

		// Make sure the buffer is initialized.
		//
		if ( !buffer_mapping ) [[unlikely]]
			if ( !try_init() )
				return false;

		// Trim the message.
		//
		if ( msg.ends_with( '\n' ) )
			msg.remove_suffix( 1 );
		if ( msg.size() >= sizeof( dbwin_buffer::msg ) )
			msg = msg.substr( 0, sizeof( dbwin_buffer::msg ) - 1 );

		// Wait for the ready event.
		//
		int64_t interval = -( 1s / 100ns );
		nt::status wait_status = ke::wait_for_single_object( buffer_ready_event, nt::kwait_reason_t::executive, ( char ) nt::mode_t::kernel_mode, false, &interval );
		if ( wait_status != STATUS_WAIT_0 )
		{
			destroy();
			return false;
		}

		buffer_mapping->pid = ( uint32_t ) pid;
		memcpy( buffer_mapping->msg, msg.data(), msg.size() );
		buffer_mapping->msg[ msg.size() ] = 0;

		// Signal ready.
		//
		ke::set_event( data_ready_event.get(), 1, 0 );
		return true;
	}
};