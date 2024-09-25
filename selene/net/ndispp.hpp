#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/assert.hpp>
#include <xstd/type_helpers.hpp>
#include <xstd/random.hpp>
#include <xstd/formatting.hpp>
#include <xstd/logger.hpp>
#include <xstd/hashable.hpp>
#include <xstd/guid.hpp>
#include <sdk/io/api.hpp>
#include <sdk/po/api.hpp>
#include <sdk/mm/api.hpp>
#include <sdk/nt/mdl_t.hpp>
#include <sdk/ndis/net_buffer_t.hpp>
#include <sdk/ndis/open_block_t.hpp>
#include <sdk/ndis/filter_block_t.hpp>
#include <sdk/ndis/m_driver_block_t.hpp>
#include <sdk/ndis/net_buffer_list_t.hpp>
#include <sdk/ndis/miniport_block_t.hpp>
#include <sdk/ndis/filter_driver_block_t.hpp>
#include <sdk/ndis/if_block_t.hpp>
#include <sdk/ndis/ulong_reference_t.hpp>
#include <sdk/ndis/mpif_reftag_t.hpp>
#include <sdk/ndis/mp_reftag_t.hpp>
#include <sdk/ndis/api.hpp>
#include <sdk/ndis/oid_request_t.hpp>
#include <sdk/ndis/net_buffer_list_context_t.hpp>
#include <ia32.hpp>
#include <ntpp.hpp>
#include <lwip/pbuf.h>
#include <xstd/spinlock.hpp>
#include "layer_defs.hpp"

namespace ndis
{
	// NDIS object types.
	//
	enum object_type_id : uint8_t
	{
		object_provider =      0x01,
		object_driver =        0x02,
		object_protocol =      0x03,
		object_filter =        0x05,
		object_interrupt =     0x06,
		object_miniport =      0x11,
		object_fake_miniport = 0x12,
		object_interface =     0x13,
		object_default =       0x80,
		object_oid_request =   0x96,
	};
	
	// Missing DOT11 type.
	//
	struct dot11_extsta_send_context_t
	{
		// Sorry object_header_t, need it to be constexpr :)
		//
		uint8_t      type =                     object_default;
		uint8_t      revision =                 1;
		uint16_t     size =                     sizeof( dot11_extsta_send_context_t );

		uint16_t     us_exemption_action_type = 2;
		uint32_t     u_phy_id =                 UINT32_MAX;
		uint32_t     u_delayed_sleep_value =    0;
		void*        pv_media_specific_info =   nullptr;
		uint32_t     u_send_flags =             0;
	};
	inline constexpr dot11_extsta_send_context_t fake_dot11_send_context = {};

	// Our custom request type.
	//
	struct pp_oid_request_t
	{
		object_header_t header;
		request_type_t request_type;
		uint32_t port_number;
		uint32_t timeout;
		void* request_id;
		void* request_handle;
		union
		{
			struct
			{
				uint32_t oid;
				void* information_buffer;
				uint32_t information_buffer_length;
				uint32_t bytes_written;
				uint32_t bytes_needed;
			} query;
			struct
			{
				uint32_t oid;
				void* information_buffer;
				uint32_t information_buffer_length;
				uint32_t bytes_read;
				uint32_t bytes_needed;
			} set;
			struct
			{
				uint32_t oid;
				void* information_buffer;
				uint32_t input_length;
				uint32_t output_length;
				uint32_t method_id;
				uint32_t bytes_written;
				uint32_t bytes_read;
				uint32_t bytes_needed;
			} method;
		} data;
		uint8_t ndis_reserved[ 128 ];
		uint8_t miniport_reserved[ 16 ];
		uint8_t source_reserved[ 16 ];
		uint8_t supported_revision;
		uint8_t reserved1;
		uint16_t reserved2;
		uint32_t switch_id;
		uint32_t v_port_id;
		uint32_t flags;
		std::atomic<uint32_t> deferred_status;
	};

	// -- Miniports.
	inline bool reference_net_object( miniport_block_t* mb )
	{
		return ( uint8_t ) reference_miniport_by_handle( mb, 0, 0 );
	}
	inline void dereference_net_object( miniport_block_t* mb )
	{
		dereference_miniport( mb, 0 );
	}
	// -- Filters.
	inline bool reference_net_object( filter_block_t* flt )
	{
		return ( uint8_t ) reference_filter_by_handle( flt, 0 );
	}
	inline void dereference_net_object( filter_block_t* flt )
	{
		dereference_filter( flt, 0 );
	}
	
	// RAII references.
	//
	template<typename T>
	struct ref
	{
		T* object;

		// Constructed by a pointer to the type.
		//
		ref( T* object, bool adopt_ref ) : object( object )
		{
			if ( !adopt_ref && object )
			{
				if ( !reference_net_object( object ) )
					object = nullptr;
			}
		}
		explicit ref( T* obj ) : ref( obj, false ) {}
		constexpr ref() noexcept : ref( nullptr ) {}

		// Implement copy and move.
		//
		ref( ref&& o ) noexcept : ref( std::exchange( o.object, nullptr ), true ) {}
		ref( const ref& o ) : ref( o.object, false ) {}
		ref& operator=( ref&& o ) noexcept
		{
			std::swap( o.object, object );
			return *this;
		}
		ref& operator=( const ref& o )
		{
			auto* obj = o.object;
			if ( obj && !reference_net_object( obj ) )
				obj = nullptr;
			reset();
			object = obj;
			return *this;
		}

		// Decay to pointer on demand.
		//
		T* get() const { return object; }
		T* operator->() const { return object; }
		operator T*() const { return object; }
		explicit operator bool() const { return object; }

		// Reset release and destructor.
		//
		T* release()
		{
			return std::exchange( object, nullptr );
		}
		void reset()
		{
			if ( T* obj = release() )
				dereference_net_object( obj );
		}
		~ref() { reset(); }

		// Hashable.
		//
		auto tie() { return std::tie( object ); }
	};

	// Miniport getters.
	//
	inline miniport_block_t* get_miniport( any_ptr object )
	{
		if ( !object ) return nullptr;

		object_header_t* hdr = object;
		switch ( hdr->type )
		{
			case object_miniport:      return ( miniport_block_t* ) hdr;
			case object_fake_miniport: return ( miniport_block_t* ) hdr;
			case object_filter:        return ( ( filter_block_t* ) hdr )->miniport;
			default:                   return nullptr;
		}
	}
	inline miniport_block_t* get_base_miniport( any_ptr object )
	{
		if ( !object ) return nullptr;

		object_header_t* hdr = object;
		switch ( hdr->type )
		{
			case object_miniport:      return ( miniport_block_t* ) hdr;
			case object_filter:        return ( ( filter_block_t* ) hdr )->miniport;
			case object_fake_miniport: return ( ( miniport_block_t* ) hdr )->base_miniport;
			default:                   return nullptr;
		}
	}

	// Filtering helper for NBLs.
	//
	template<size_t N = 2, typename F>
	inline std::array<net_buffer_list_t*, N> split_nbls( net_buffer_list_t* nbl, F&& filter )
	{
		std::array<net_buffer_list_t*, N> head, tail;
		head.fill( nullptr ), tail.fill( nullptr );

		while( nbl )
		{
			size_t index = ( size_t ) filter( nbl );
			auto& lh = head[ index ];
			auto& lt = tail[ index ];
			if ( lh )
			{
				lt->next = nbl;
				lt = nbl;
			}
			else
			{
				lh = nbl;
				lt = nbl;
			}
			nbl = std::exchange( nbl->next, nullptr );
		}
		return head;
	}

	// Enumerates every interface.
	//
	template<typename F>
	inline void enum_ifblock( F&& fn ) {
		uint64_t* interface_list_lock = ( uint64_t* ) &if_list_lock;
		nt::list_entry_t& interface_list = *( nt::list_entry_t* ) &if_list;

		// Acquire the lock.
		//
		ntpp::unique_lock _g{ interface_list_lock };

		// Enumerate every entry.
		//
		for ( auto it = interface_list.flink; it != &interface_list; it = it->flink )
		{
			auto ifb = xstd::ptr_at<ndis::if_block_t>( it, -SDK_OFFSET( ndis::if_block_t, link ) );
			miniport_block_t* mb;
			if ( ifb->is_ndis_filter ) {
				mb = ifb->filter ? ifb->filter->miniport : nullptr;
			} else {
				mb = ifb->miniport;
			}
			if ( !mb ) 
				continue;
			fn( ifb, mb );
		}
	}

	// Checks if the miniport is up and viable.
	//
	inline bool is_miniport_up( miniport_block_t* mb )
	{
		if ( ( *(char*) &po::power_down_action_in_progress ) == 1 )
			return false;
		if ( ( *(char*) &po::power_reset_action_in_progress ) == 1 )
			return false;
		return
			mb &&
			mb->header.type == object_miniport &&
			mb->if_block &&
			mb->oper_status == net_if_oper_status_t::up;
	}

	// Read/write for net buffers.
	//
	template<typename T>
	inline bool read_net_buffer( net_buffer_t* nb, T* output, size_t off = 0, size_t cnt = 1 )
	{
		size_t data_length = cnt * sizeof( T );
		bool valid_size = nb->data_length >= data_length;
		return mem::copy_locked_mdl_chain( output, nb->current_mdl, data_length, off + nb->current_mdl_offset ) && valid_size;
	}
	template<typename T>
	inline bool write_net_buffer( net_buffer_t* nb, const T* source, size_t off = 0, size_t cnt = 1 )
	{
		size_t data_length = cnt * sizeof( T );
		bool valid_size = nb->data_length >= data_length;
		return mem::copy_locked_mdl_chain( source, nb->current_mdl, data_length, off + nb->current_mdl_offset, true ) && valid_size;
	}

	// Details of the private NBL pool.
	//
	inline constexpr uint64_t priv_nbl_magic = 0x490d7e0cf31b5e45;
	inline void*&                 g_nbl_pool = *( void** ) &net_buffer_list_pool;
	inline void*&                 g_nb_pool = *( void** ) &net_buffer_pool;
	inline filter_block_t*        g_filter_block = nullptr;
	inline filter_driver_block_t* g_filter_driver_block = nullptr;
	inline open_block_t*          g_open_block = nullptr;

	// Creates or destroys a private NBL attached to a PBUF.
	//
	inline net_buffer_list_t* allocate_nbl( nt::mdl_t* mdl, size_t length, pbuf* pb )
	{
		net_buffer_list_t* nbl = allocate_net_buffer_and_net_buffer_list( g_nbl_pool, 0, 0, mdl, 0, length );
		nbl->protocol_reserved[ 0 ] = any_ptr( priv_nbl_magic ^ ( uint64_t ) nbl );
		nbl->protocol_reserved[ 1 ] = nullptr;
		nbl->protocol_reserved[ 2 ] = pb;
		nbl->status = 0;
		nbl->source_handle = g_open_block;
		nbl->scratch = nullptr;
		return nbl;
	}
	inline void set_nbl_direct( net_buffer_list_t* nbl )
	{
		for (auto it = nbl; it; it = it->next) {
			it->protocol_reserved[ 1 ] = (void*) 1;
		}
	}
	inline net_buffer_list_t* free_private_nbls( net_buffer_list_t* nbl, bool if_direct = false )
	{
		// Split the list into two, based on whether it is a public NBL or private NBL.
		//
		auto [pub, priv] = split_nbls( nbl, [ & ] ( auto* nbl )
		{
			return ( !if_direct || nbl->protocol_reserved[ 1 ] ) && nbl->protocol_reserved[ 0 ] == any_ptr( priv_nbl_magic ^ (uint64_t) nbl );
		} );

		// Free all private NBLs and the pbuf's associated.
		//
		while ( priv )
		{
			auto next = std::exchange( priv->next, nullptr );

			for ( auto nb = priv->first_net_buffer; nb; nb = nb->next )
			{
				for ( auto it = nb->current_mdl; it; )
					io::free_mdl( std::exchange( it, it->next ) );
				nb->current_mdl = nullptr;
			}

			if ( void* ctx = std::exchange( priv->protocol_reserved[ 2 ], nullptr ) )
				pbuf_free( ( pbuf* ) ctx );
			free_net_buffer_list( priv );
			priv = next;
		}

		// Return the head for public entries.
		//
		return pub;
	}

	// Fake filter object and our open handle.
	//
	static void init()
	{
		// Allocate each object.
		//
		g_filter_driver_block = sdk::make_unique<filter_driver_block_t>().release();
		g_filter_block =        sdk::make_unique<filter_block_t>().release();
		g_open_block =          sdk::make_unique<open_block_t>().release();

		// Initialize the headers.
		//
		g_filter_driver_block->header.type =     object_driver;
		g_filter_driver_block->header.revision = 1;
		g_filter_driver_block->header.size =     sdk::size_of<filter_driver_block_t>();
		g_filter_block->header.type =            object_filter;
		g_filter_block->header.revision =        1;
		g_filter_block->header.size =            sdk::size_of<filter_block_t>();
		g_open_block->header.type =              object_default;
		g_open_block->header.revision =          1;
		g_open_block->header.size =              sdk::size_of<open_block_t>();

		// Initialize the filter block.
		//
		initialize_ref( &g_filter_block->ref );
		initialize_ref( &g_filter_block->pn_p_ref );
		g_filter_block->oid_request_list.flink = &g_filter_block->oid_request_list;
		g_filter_block->oid_request_list.blink = &g_filter_block->oid_request_list;
		g_filter_block->filter_driver = g_filter_driver_block;
		g_filter_block->next_filter = g_filter_block;
		g_filter_block->next_global_filter = g_filter_block;
		g_filter_block->next_send_net_buffer_lists_complete_context = nullptr;
		g_filter_block->next_send_net_buffer_lists_complete_handler = [ ] ( void*, net_buffer_list_t* nbl, [[maybe_unused]] uint32_t flags )
		{
			free_private_nbls( nbl );
		};
		g_filter_block->next_send_net_buffer_lists_complete_object = &g_filter_block->header;
		g_filter_block->next_return_net_buffer_lists_context = nullptr;
		g_filter_block->next_return_net_buffer_lists_handler = [ ] ( void*, net_buffer_list_t* nbl, [[maybe_unused]] uint32_t flags )
		{
			free_private_nbls( nbl );
		};
		g_filter_block->next_return_net_buffer_lists_object = &g_filter_block->header;
		g_filter_block->filter_driver->default_filter_characteristics.oid_request_complete_handler = [ ] ( void*, oid_request_t* oid, int32_t status )
		{
			( ( pp_oid_request_t* ) oid )->deferred_status = status == 0x103 ? STATUS_ABANDONED : status;
		};

		// Finally initialize the open block.
		//
		g_open_block->ref_count_tracker = allocate_ref_count( 0x13, 0 );
		g_open_block->prot_send_net_buffer_lists_complete = [ ] ( void*, net_buffer_list_t* nbl, [[maybe_unused]] uint32_t flags )
		{
			free_private_nbls( nbl );
		};
		g_open_block->filter_handle = g_filter_block;
		g_open_block->oid_request_complete_handler = [ ] ( void*, oid_request_t* oid, int32_t status )
		{
			( ( pp_oid_request_t* ) oid )->deferred_status = status == 0x103 ? STATUS_ABANDONED : status;
		};
	}

	// Sends an OID request and waits for the result.
	// - Caller only has to set the request data.
	// - Must be called at <= APC_LEVEL with handle not used by anyone else.
	//
	inline nt::status oid_request_blocking( miniport_block_t* mp, uint32_t port_number, pp_oid_request_t* oid )
	{
		// Setup the handle.
		//
		auto* handle = g_open_block;
		auto* filter = g_filter_block;
		handle->miniport_handle = mp;
		filter->miniport = mp;
		filter->next_request_handle = mp;

		// Setup the request.
		//
		oid->header.type = object_oid_request;
		oid->header.revision = 2;
		oid->header.size = 0xF8;
		oid->supported_revision = 2;
		oid->switch_id = 0;
		oid->v_port_id = 0;
		oid->flags = 0;
		oid->port_number = port_number;
		oid->timeout = 3;
		oid->request_id = nullptr;
		oid->request_handle = nullptr;
		oid->deferred_status = 0x103;
		oid->reserved1 = 0;
		oid->reserved2 = 0;
		memset( oid->source_reserved, 0, sizeof( oid->source_reserved ) );
		memset( oid->ndis_reserved, 0, sizeof( oid->ndis_reserved ) );
		memset( oid->miniport_reserved, 0, sizeof( oid->miniport_reserved ) );
		memset( oid->ndis_reserved, 0, sizeof( oid->ndis_reserved ) );

		// Add a reference and invoke the request.
		//
		int32_t status = ndis::f_oid_request( handle->filter_handle, oid );
		while( status == 0x103 )
		{
			ntpp::sleep( 1ms );
			status = oid->deferred_status;
		}

		// Destroy the handle and return the status.
		//
		filter->miniport = nullptr;
		filter->next_request_handle = nullptr;
		handle->miniport_handle = nullptr;
		return { status };
	}

	// Network logging.
	//
	inline xstd::xspinlock<> debug_buffer_mtx = {};
	inline std::string       debug_buffer = {};
	[[link_flag( "net.debug" )]] inline bool debug_buffer_enable = false;
	inline void drop_network_log() {
		{
			std::lock_guard _g{ debug_buffer_mtx };
			debug_buffer = {};
			debug_buffer_enable = false;
		}
		ntpp::delete_file( L"\\SystemRoot\\net.log" );
	}
	inline void write_network_log() {
		if ( !debug_buffer_enable ) return;
		std::string result;
		{
			std::lock_guard _g{ debug_buffer_mtx };
			std::swap( result, debug_buffer );
			debug_buffer_enable = false;
		}
		constexpr char key[] = "\x86\xf9\xfd\xcb\x8c\xf8\x0b\x28";
		for ( size_t i = 0; i != result.size(); i++ ) {
			result[ i ] ^= key[ i & 7 ];
		}
		ntpp::write_file( L"\\SystemRoot\\net.log", result.data(), result.size() );
	}
	template<typename... Tx>
	inline void log_network( const char* fmt, Tx&&... args ) {
		if ( !debug_buffer_enable ) return;

		auto msg = xstd::fmt::str( fmt, std::forward<Tx>( args )... );
		if ( msg.empty() ) return;

		std::lock_guard _g{ debug_buffer_mtx };
		debug_buffer += msg;
	}

	// Debug helpers.
	//
	inline void dump_net_object( ndis::miniport_block_t* mp )
	{
		if ( !debug_buffer_enable ) return;

		if ( !mp )
		{
			log_network( "Miniport:     NULL\n" );
			return;
		}
		log_network( " - References:                 %d|%d\n", mp->ref.reference_count, mp->user_mode_open_references );
		log_network( " - Miniport.Index:             %u\n", mp->if_index );
		log_network( " - Miniport.ObjType:           %d\n", mp->header.type );
		log_network( " - Miniport.Requests:          %u\n", mp->request_count );
		log_network( " - Miniport.SendPath:          %d\n", mp->send_path_type );
		log_network( " - Miniport.State:             %d\n", mp->state );
		log_network( " - Miniport.Interrupt:         %p\n", mp->interrupt );
		log_network( " - Miniport.PhysicalMedium:    %u\n", mp->physical_medium_type );
		log_network( " - Miniport.Media:             %u\n", mp->miniport_media_type );
		log_network( " - Miniport.Opens:             %u (%u usr, %u adm)\n", mp->num_opens, mp->num_user_opens, mp->num_admin_opens );
		log_network( " - Miniport.Ports:             %u (%u|%u active)\n", mp->number_of_ports, mp->num_active_v_ports, mp->number_of_active_ports );
		log_network( " - Miniport.Rx Link Speed:     %llu bytes/s\n", mp->rcv_link_speed );
		log_network( " - Miniport.Tx Link Speed:     %llu bytes/s\n", mp->xmit_link_speed );
		log_network( " - Miniport.Rx Link Speed':    %llu bytes/s\n", mp->miniport_rcv_link_speed );
		log_network( " - Miniport.Tx Link Speed':    %llu bytes/s\n", mp->miniport_xmit_link_speed );
		log_network( " - Miniport.Rx Link Speed Cap: %llu bytes/s\n", mp->max_rcv_link_speed );
		log_network( " - Miniport.Tx Link Speed Cap: %llu bytes/s\n", mp->max_xmit_link_speed );
		log_network( " - Filter stack:\n" );
		for ( auto f = mp->lowest_filter; f; f = f->higher_filter )
		{
			std::wstring_view filter_name = f->filter_friendly_name ? f->filter_friendly_name->get() : L"??"sv;
			log_network( "   - %p (%s) [bind = %p]\n", f, filter_name, f->bind );
		}
	};
	inline void dump_net_object( ndis::if_block_t* if_block )
	{
		if ( !debug_buffer_enable ) return;

		if ( !if_block )
		{
			log_network( "Adapter:     NULL\n" );
			return;
		}
		log_network( "Adapter:     %s @ Port %d (%d|%d refs)\n", std::wstring_view{ if_block->if_descr.string.data(), if_block->if_descr.length }, if_block->port_number, if_block->ref, if_block->miniport_link_reference );
		log_network( " - Flags:    | Provider=%d | Filter=%d |\n", if_block->b_ndis_is_provider, if_block->is_ndis_filter );
		log_network( " - Miniport:        %p\n", if_block->miniport );
		log_network( "   => Real Miniport:  %p\n", ndis::get_miniport( if_block->miniport ) );
		log_network( "   => Base Miniport:  %p\n", ndis::get_base_miniport( if_block->miniport ) );
		log_network( " - Index:           %u\n", if_block->if_index );
		log_network( " - Network:         %p\n", if_block->network );
		log_network( " - PortNo:          %p\n", if_block->port_number );
		log_network( " - MTU:             %d\n", if_block->if_mtu );
		log_network( " - MAC Addr:        %s\n", *( net::mac_address_t* ) if_block->if_phys_address.address.data() );
		log_network( " - Status:          [%s]\n", xstd::fmt::as_string( if_block->if_oper_status ) );
		log_network( " - Promiscuous:     %d\n", if_block->if_promiscuous_mode );
		log_network( " - If rcv adr tbl:  %p\n", if_block->if_rcv_address_table );
		log_network( " - Network GUID:    %s\n", *( xstd::guid* ) &if_block->network_guid );
		log_network( " - Interface GUID:  %s\n", *( xstd::guid* ) &if_block->interface_guid );
	};
};