#include "lwip_bridge.hpp"
#include <optional>
#include "lwip.hpp"
#include "../hooks/inline_hooks.hpp"
#include "../utility/thread.hpp"
#include <lwip/priv/tcp_priv.h>
#include <trace/client.hpp>
#include <lwip/udp.h>

// IEEE 802.11 support functions.
//
namespace ieee_802_3
{
	static size_t read_eth( lwip::adapter*, net::eth_header_t* eth, ndis::net_buffer_t* nb )
	{
		return ndis::read_net_buffer( nb, eth ) ? sizeof( net::eth_header_t ) : 0;
	}
};
namespace ieee_802_11
{
#pragma pack(push, 1)
	struct header_buffer_t
	{
		net::dot11_header_t  dot11;
		char                 buffer[
			sizeof( net::mac_address_t ) + // adr4
			sizeof( uint16_t ) +           // qos ctl
			sizeof( uint32_t ) +           // ht  ctl
			sizeof( net::llc_header_t ) +
			sizeof( uint8_t ) +            // extended control
			sizeof( net::snap_header_t )
		];
	};
	struct combined_header_t
	{
		net::dot11_header_t  dot11;
		net::llc_header_t    llc;
		net::snap_header_t   snap;
	};
#pragma pack(pop)

	static size_t read_eth( lwip::adapter*, net::eth_header_t* eth, ndis::net_buffer_t* nb )
	{
		header_buffer_t buf = {};
		ndis::read_net_buffer( nb, &buf );

		// Parse the DOT11 header.
		//
		net::dot11_header_t& dot11 = buf.dot11;
		size_t offset = 0;

		// Ignore if not data packet.
		//
		if ( dot11.type != net::dot11_data )
			return 0;
		if ( dot11.null_func )
			return 0;

		// Fail if any unsupported flags are set and parse the path.
		//
		const net::mac_address_t* bss;
		const net::mac_address_t* sa;
		const net::mac_address_t* da;
		switch ( dot11.ds_path )
		{
			// None.
			case 0b00: da =  &dot11.addr1; sa =  &dot11.addr2; bss = &dot11.addr3; break;
			// To DS.
			case 0b01: bss = &dot11.addr1; sa =  &dot11.addr2; da =  &dot11.addr3; break;
			// From DS.
			case 0b10: da =  &dot11.addr1; bss = &dot11.addr2; sa =  &dot11.addr3; break;
			// To&From DS.
			case 0b11: bss = &dot11.addr2; da =  &dot11.addr3;
				sa = ( const net::mac_address_t* ) &buf.buffer[ offset ];
				offset += sizeof( net::mac_address_t );
				break;
		}

		// Skip control bits and assign the LLC header.
		//
		if ( dot11.qos )
		{
			offset += sizeof( uint16_t );
			if ( dot11.has_ht_or_order )
				offset += sizeof( uint32_t );
		}
		auto* llc = ( const net::llc_header_t* ) &buf.buffer[ offset ];
		offset += sizeof( net::llc_header_t );

		// Parse the LLC header and skip the control bits.
		//
		if ( llc->dst_sap != net::lsap_snap || llc->src_sap != net::lsap_snap )
			return 0;
		offset += llc->is_extended();

		// Assign the SNAP header.
		//
		auto* snap = ( const net::snap_header_t* ) &buf.buffer[ offset ];
		offset += sizeof( net::snap_header_t );

		eth->dst_mac = *da;
		eth->src_mac = *sa;
		eth->type =    snap->type;
		( void ) bss;
#if LWIP_NDIS_SEND_NO_FILTERS_802_11
		if ( net->host_config.bssid != *bss )
		{
			MB_SOCK_DEBUG( "Stolen BSSID from received packet: %s\n", bss->to_string().c_str() );
			net->host_config.bssid = *bss;
		}
#endif
		return offset + sizeof( net::dot11_header_t );
	}

	static err_t convert_eth( lwip::adapter* net, pbuf*& p )
	{
		// Read the ethernet header.
		//
		if ( p->len < sizeof( net::eth_header_t ) )
			return ERR_IF;
		auto eth = *( const net::eth_header_t* ) p->payload;

		// Remove the ethernet header, append the new header.
		//
		pbuf_remove_header( p, sizeof( net::eth_header_t ) );
		pbuf* hdr = pbuf_alloc( PBUF_RAW_TX, sizeof( combined_header_t ), PBUF_RAM );
		if ( !hdr ) return ERR_MEM;
		pbuf_cat( hdr, p );

		// Write the new header.
		//
		auto* chdr = ( combined_header_t* ) hdr->payload;
		memset( chdr, 0, sizeof( combined_header_t ) );
		chdr->dot11.addr1 = net->host_config.bssid;
		chdr->dot11.addr2 = eth.src_mac;
		chdr->dot11.addr3 = eth.dst_mac;
		chdr->dot11.ds_path = 0b01; // to ds | !from ds
		chdr->dot11.type =  net::dot11_data;
		chdr->dot11.duration_id = 0x8000;

		chdr->llc.dst_sap = net::lsap_snap;
		chdr->llc.src_sap = net::lsap_snap;
		chdr->llc.control = 0b11;

		chdr->snap.type =   eth.type;
		p = hdr;
		return ERR_OK;
	}
};

// LWIP to NDIS bridge.
//
namespace lwip::bridge
{
	// Creates a pbuf describing a net buffer.
	//
	static pbuf* nb_to_pbuf( ndis::net_buffer_t* nb, uint8_t netif_idx, size_t off )
	{
		// If net buffer has no data, return nullptr.
		//
		size_t input_size = nb->data_length;
		if ( !input_size ) return nullptr;

		// Iterate MDL's:
		//
		pbuf* chain = nullptr;
		off += nb->current_mdl_offset;
		for ( auto mdl = nb->current_mdl; mdl && input_size; mdl = mdl->next )
		{
			// If skipping past the whole MDL, continue and subtract from offset.
			//
			if ( off > mdl->byte_count )
			{
				off -= mdl->byte_count;
				continue;
			}

			// Map the MDL to memory if required.
			//
			any_ptr va;
			size_t data_length = mdl->byte_count;
			if ( mdl->mdl_flags & ( MDL_SOURCE_IS_NONPAGED_POOL | MDL_MAPPED_TO_SYSTEM_VA ) )
				va = mdl->mapped_system_va;
			else
				va = mm::map_locked_pages_specify_cache( mdl, 0, nt::memory_caching_type_t::cached, nullptr, 0, 0 );
			if ( !va ) break;

			// Apply the offset.
			//
			data_length -= off;
			va += off;
			off = 0;

			// Constraint the size.
			//
			data_length = std::min( input_size, data_length );
			input_size -= data_length;

			// Create the PBUF.
			//
			pbuf* buf = pbuf_alloc_reference(
				va,
				data_length,
				PBUF_REF
			);

			// Chain the buffers.
			//
			if ( chain )
				pbuf_cat( chain, buf );
			else
				chain = buf;
		}

		// Set the interface index and return.
		//
		if ( chain ) chain->if_idx = netif_idx;
		return chain;
	}

	// Creates a net buffer list describing a pbuf.
	//
	static ndis::net_buffer_list_t* pbuf_to_nbl( pbuf* p )
	{
		// If empty, return nullptr.
		//
		if ( !p->tot_len )
			return nullptr;

		// If pbuf is volatile, clone it.
		//
		nt::mdl_t* first_mdl = nullptr;
		if ( p->type_internal & PBUF_TYPE_FLAG_DATA_VOLATILE )
		{
			p = pbuf_clone( PBUF_RAW, PBUF_RAM, p );
			if ( !p )
				return nullptr;
			first_mdl = io::allocate_mdl( p->payload, p->tot_len, 0, 0, nullptr );
			mm::build_mdl_for_non_paged_pool( first_mdl );
		}
		// Otherwise create a 1:1 mapping with a reference pending.
		//
		else
		{
			// Create a chain of MDLs representing the pbuf chain.
			//
			auto rem_len = p->tot_len;
			nt::mdl_t* tail = nullptr;
			for ( auto it = p; it && rem_len; it = it->next )
			{
				auto ref_len = std::min( rem_len, it->len );
				rem_len -= ref_len;

				nt::mdl_t* mdl = io::allocate_mdl( it->payload, ref_len, 0, 0, nullptr );
				mm::build_mdl_for_non_paged_pool( mdl );
				if ( first_mdl ) tail->next = mdl;
				else             first_mdl = mdl;
				tail = mdl;
			}

			// Add a reference.
			//
			pbuf_ref( p );
		}

		// Return the NBL.
		//
		return ndis::allocate_nbl( first_mdl, p->tot_len, p );
	}

	// Queries the BSSID given a 802.11 miniport.
	//
	net::mac_address_t get_bssid( ndis::miniport_block_t* mb, uint32_t port )
	{
		net::mac_address_t bssid = {};
		ndis::pp_oid_request_t oid;
		oid.request_type = ndis::request_type_t::query_information;
		oid.data.query.oid = OID_802_11_BSSID;
		oid.data.query.information_buffer = &bssid;
		oid.data.query.information_buffer_length = sizeof( bssid );
		ndis::oid_request_blocking( mb, port, &oid );
		return bssid;
	}

	// Sends a pbuf over a miniport block.
	//
	err_t link_output( netif* nif, pbuf* p )
	{
		CHECK_IRQL( == DISPATCH_LEVEL );

		// Validate the adapter.
		//
		auto net = ( adapter* ) nif;
		if ( !net->validate() ) return ERR_CONN;
		auto* mb = net->miniport;
		bool is_802_11 = mb->miniport_media_type == ndis::medium_t::medium_native802_11;
		bool is_802_3 = mb->miniport_media_type == ndis::medium_t::medium802_3;

#if LWIP_NDIS_SEND_NO_FILTERS_802_11
		// Convert the Ethernet II header to 802.11 if relevant.
		//
		if (is_802_11)
			if (err_t e = ieee_802_11::convert_eth( net, p ); e != ERR_OK)
				return e;
#endif
		( void ) is_802_11;

		// Convert the pbuf into net buffer lists.
		//
		auto* nbl = bridge::pbuf_to_nbl( p );
		if ( !nbl ) return ERR_MEM;

		// Get our open block, set the miniport.
		//
		auto* handle = ndis::g_open_block;
		handle->miniport_handle = mb;

#if LWIP_NDIS_SEND_NO_FILTERS
		// Set media specific information.
		if (!is_802_3) {
			do {
#if LWIP_NDIS_SEND_NO_FILTERS_802_11
				if (is_802_11) {
					nbl->net_buffer_list_info[ 0x6 ] = (void*) &ndis::fake_dot11_send_context;
					break;
				}
#endif
				ndis::send_net_buffer_lists( handle, nbl, net->port, NDIS_SEND_FLAGS_DISPATCH_LEVEL );
				return nbl->status == STATUS_UNSUCCESSFUL ? ERR_CONN : ERR_OK;
			} while (false);
		}

		// Invoke send net buffer lists.
		//
		ndis::set_nbl_direct( nbl );
		auto* drv = mb->driver_handle;
		drv->miniport_driver_characteristics.send_net_buffer_lists_handler(
			mb->miniport_adapter_context,
			nbl,
			net->port,
			NDIS_SEND_FLAGS_DISPATCH_LEVEL
		);
#else
		ndis::send_net_buffer_lists( handle, nbl, net->port, NDIS_SEND_FLAGS_DISPATCH_LEVEL );
#endif
		return nbl->status == STATUS_UNSUCCESSFUL ? ERR_CONN : ERR_OK;
	}

	// Checks whether or not our network stack is interested in the given packet.
	// - Must have the core lock held.
	//
	static bool filter_ipv4( u8_t netif_idx, ndis::net_buffer_t* nb, size_t data_offset )
	{
		// Read the header.
		//
		net::ip_header_t ip;
		if ( !ndis::read_net_buffer( nb, &ip, data_offset ) )
			return false;
		data_offset += ip.hdr_len * sizeof( net::word_t );

		// If TCP:
		//
		if ( ip.protocol == net::proto_tcp )
		{
			// Read the ports.
			//
			std::array<uint16_t, 2> ports;
			if ( !ndis::read_net_buffer( nb, &ports, data_offset + offsetof( net::tcp_header_t, src_port ) ) )
				return false;
			uint16_t src_port = bswap( ports[ 0 ] );
			uint16_t dst_port = bswap( ports[ 1 ] );

			// For each PCB:
			//
			for ( auto& list : tcp_pcb_lists )
			{
				for ( auto it = *list; it; it = it->next )
				{
					// Skip if the interface does not match.
					//
					if ( it->netif_idx != netif_idx && it->netif_idx != NETIF_NO_INDEX )
						continue;

					// Skip if the ports/IPs do not match.
					//
					if ( it->local_port != dst_port )
						continue;
					if ( !ip4_addr_isany_val( it->local_ip ) && it->local_ip.addr != ip.dst.as_int() )
						continue;
					if ( it->state != LISTEN ) {
						if ( it->remote_port != src_port )
							continue;
						if ( !ip4_addr_isany_val( it->remote_ip ) && it->remote_ip.addr != ip.src.as_int() )
							continue;
					}

					// We exclusively care about the packet.
					//
					return true;
				}
			}
		}
		// If UDP (For DNS):
		//
		else if ( ip.protocol == net::proto_udp )
		{
			// Read the port.
			//
			uint16_t dst_port;
			if ( !ndis::read_net_buffer( nb, &dst_port, data_offset + offsetof( net::udp_header_t, dst_port ) ) )
				return false;
			dst_port = bswap( dst_port );

			// For each PCB:
			//
			for ( auto it = udp_pcbs; it; it = it->next )
			{
				// Skip if the interface does not match.
				//
				if ( it->netif_idx != netif_idx && it->netif_idx != NETIF_NO_INDEX )
					continue;

				// Skip if the IPs do not match.
				//
				if ( !ip4_addr_isany_val( it->local_ip ) && it->local_ip.addr != ip.dst.as_int() )
					continue;
				if ( !ip4_addr_isany_val( it->remote_ip ) && it->remote_ip.addr != ip.src.as_int() )
					continue;

				// Skip if the ports do not match.
				//
				if ( it->local_port != dst_port )
					continue;

				// We exclusively care about the packet.
				//
				return true;
			}
		}

		// Do not care.
		//
		return false;
	}

	// Handles incoming packets.
	//
	static void handle_link_input( ndis::miniport_block_t* miniport, ndis::net_buffer_list_t* nbl, uint32_t port, uint32_t flags )
	{
		// Skip if we don't consider this miniport valid.
		//
		assume( miniport != nullptr );
		miniport = ndis::get_base_miniport( miniport );
		if ( !ndis::is_miniport_up( miniport ) )
			return;

		// Pick the header converter.
		//
		auto* eth_reader = &ieee_802_3::read_eth;
		bool is_802_11 = miniport->miniport_media_type == ndis::medium_t::medium_native802_11;
		if ( is_802_11 )
			eth_reader = &ieee_802_11::read_eth;

		// Lock core lock.
		//
		std::unique_lock net_lock{ xstd::net::core_lock };

		// Skip the entire list if we cannot find the adapter.
		//
		lwip::adapter* net = find_adapter( miniport, port );
		if ( !net ) [[unlikely]] return;
		uint8_t idx = netif_get_index( net );

		// Go through each NB:
		//
		for ( auto* e = nbl; e; e = e->next )
		{
			for ( auto it = e->first_net_buffer; it; it = it->next )
			{
				if (it->data_length <= sizeof(net::eth_header_t))
					continue;

				net::eth_header_t eth = {};
				if ( size_t offset = eth_reader( net, &eth, it ) )
				{
					// If the net buffer list contains IPv4 packets, each frame needs classification.
					//
					if ( eth.type == bswap( net::eth_ipv4 ) )
					{
						if ( filter_ipv4( idx, it, offset ) )
						{
							if ( auto p = bridge::nb_to_pbuf( it, idx, offset ) )
								if ( ip4_input( p, net ) != ERR_OK )
									pbuf_free( p );

							// Remove the data from the NDIS stack.
							//
							if ( !is_802_11 ) {
								net::eth_header_t dummy = eth;
								dummy.type = ( net::eth_type ) bswapw( 0x80'9B );
								dummy.src_mac = dummy.dst_mac;
								dummy.dst_mac = { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
								if ( ndis::write_net_buffer( it, &dummy ) )
									it->data_length = sizeof( net::eth_header_t );
								else
									it->data_length = 0;
							}
						}
					}
					// If this is an ARP stream, we should feed all data to the adapter.
					//
					else if ( eth.type == bswap( net::eth_arp ) )
					{
						if ( auto p = bridge::nb_to_pbuf( it, idx, offset ) )
							etharp_input( p, net );
					}
				}
			}
		}
	}

	// Hooks into NDIS.
	//
	alignas( 64 ) static hook::record ndis_m_indicate_receive_net_buffer_lists_hook = {};
	[[no_instrument]] MS_SSE2AVX static void hk_ndis_m_indicate_receive_net_buffer_lists( ndis::miniport_block_t* miniport, ndis::net_buffer_list_t* nbl, uint32_t port, uint32_t count_nbl, uint32_t flags )
	{
		thread::shadow_guard guard{};
		handle_link_input( miniport, nbl, port, flags );
		ndis_m_indicate_receive_net_buffer_lists_hook( miniport, nbl, port, count_nbl, flags );
	}
#if LWIP_NDIS_SEND_NO_FILTERS
	alignas( 64 ) static hook::record ndis_m_send_net_buffer_lists_complete_hook = {};
	[[no_instrument]] MS_SSE2AVX static void hk_ndis_m_send_net_buffer_lists_complete( ndis::open_block_t* hndl, ndis::net_buffer_list_t* nbls, uint32_t send_complete_flags )
	{
		{
			thread::shadow_guard guard{};
			nbls = ndis::free_private_nbls( nbls, true );
		}
		if ( nbls )
			[[clang::musttail]] return ndis_m_send_net_buffer_lists_complete_hook.next<decltype(&hk_ndis_m_send_net_buffer_lists_complete)>()(hndl, nbls, send_complete_flags);
	}
#endif

	// Initializes the hooks.
	//
	NO_INLINE void init()
	{
		// Disable NDIS trackers.
		//
		*( uint32_t* ) &ndis::nbl_tracker_mode = 0;
		*( void** ) &ndis::verifier_ndis_dispatch = nullptr;
		*( uint32_t* ) &ndis::microsoft_windows_ndis_enable_bits = 0;

		// Hook recv and send completion.
		//
		hook::add( &ndis_m_indicate_receive_net_buffer_lists_hook, ( void* ) &ndis::m_indicate_receive_net_buffer_lists, &hk_ndis_m_indicate_receive_net_buffer_lists );
#if LWIP_NDIS_SEND_NO_FILTERS
		hook::add( &ndis_m_send_net_buffer_lists_complete_hook, ( void* ) &ndis::m_send_net_buffer_lists_complete, &hk_ndis_m_send_net_buffer_lists_complete );
#endif
	}
};
