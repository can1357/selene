#include "lwip.hpp"
#include <xstd/random.hpp>
#include <xstd/text.hpp>
#include <xstd/guid.hpp>
#include <sdk/ndis/miniport_block_t.hpp>
#include <sdk/ndis/oid_request_t.hpp>
#include "ndispp.hpp"
#include "lwip_bridge.hpp"
#include <xstd/timer.hpp>
#include <xstd/formatting.hpp>
#include <trace/client.hpp>
#include <mcrt/interface.hpp>
#include <trace/init.hpp>
#include <sdk/netio/api.hpp>
#include <sdk/po/api.hpp>

// Most common gateway addresses.
//
static constexpr net::ipv4_address common_gateway_list[] = {
	{ 10, 0, 0, 1 },
	{ 10, 0, 0, 138 },
	{ 10, 0, 0, 2 },
	{ 10, 0, 1, 1 },
	{ 10, 1, 1, 1 },
	{ 10, 1, 10, 1 },
	{ 10, 10, 1, 1 },
	{ 10, 90, 90, 90 },
	{ 192, 168, 0, 1 },
	{ 192, 168, 0, 10 },
	{ 192, 168, 0, 100 },
	{ 192, 168, 0, 101 },
	{ 192, 168, 0, 227 },
	{ 192, 168, 0, 254 },
	{ 192, 168, 0, 3 },
	{ 192, 168, 0, 30 },
	{ 192, 168, 0, 50 },
	{ 192, 168, 1, 1 },
	{ 192, 168, 1, 10 },
	{ 192, 168, 1, 100 },
	{ 192, 168, 1, 20 },
	{ 192, 168, 1, 200 },
	{ 192, 168, 1, 210 },
	{ 192, 168, 1, 254 },
	{ 192, 168, 1, 99 },
	{ 192, 168, 10, 1 },
	{ 192, 168, 10, 10 },
	{ 192, 168, 10, 100 },
	{ 192, 168, 10, 50 },
	{ 192, 168, 100, 1 },
	{ 192, 168, 100, 100 },
	{ 192, 168, 102, 1 },
	{ 192, 168, 11, 1 },
	{ 192, 168, 123, 254 },
	{ 192, 168, 15, 1 },
	{ 192, 168, 16, 1 },
	{ 192, 168, 168, 168 },
	{ 192, 168, 2, 1 },
	{ 192, 168, 2, 254 },
	{ 192, 168, 20, 1 },
	{ 192, 168, 223, 100 },
	{ 192, 168, 251, 1 },
	{ 192, 168, 254, 254 },
	{ 192, 168, 3, 1 },
	{ 192, 168, 30, 1 },
	{ 192, 168, 4, 1 },
	{ 192, 168, 50, 1 },
	{ 192, 168, 55, 1 },
	{ 192, 168, 62, 1 },
	{ 192, 168, 8, 1 },
	{ 192, 168, 86, 1 },
	{ 200, 200, 200, 5 },
};

// IP Table query helpers.
//
namespace netio
{
	#pragma pack(push, 1)
	struct net_luid_t
	{
		uint64_t rsvd           : 24;
		uint64_t net_luid_index : 24;
		uint64_t if_type        : 16;
	};
	struct sockaddr_in4_t
	{
		uint16_t          family;
		uint16_t          port;
		net::ipv4_address addr;
		uint8_t           zero[ 8 ];
	};
	struct sockaddr_in6_t
	{
		uint16_t family;
		uint16_t port;
		uint32_t flowinfo;
		uint64_t addr[ 2 ];
		uint32_t scope_id;
	};
	union sockaddr_inet_t
	{
		uint16_t       family;
		sockaddr_in4_t ip4;
		sockaddr_in6_t ip6;
	};
	static_assert( sizeof( sockaddr_inet_t ) == 0x1C );
	#pragma pack(pop)

	#pragma pack(push, 8)
	template<typename T>
	struct mib_table
	{
		uint32_t count;
		uint32_t __pad;
		T        table[ 1 ];

		T* begin() { return &table[ 0 ]; }
		const T* begin() const { return &table[ 0 ]; }
		T* end() { return &table[ count ]; }
		const T* end() const { return &table[ count ]; }
		size_t size() const { return count; }

		void operator delete( void* p ) { netio::free_mib_table( p ); }
	};

	struct mib_unicastip_t
	{
		sockaddr_inet_t address;
		uint8_t         __pad[ 4 ];
		net_luid_t      interface_luid;
		uint32_t        interface_index;
		uint32_t        prefix_origin;
		uint32_t        suffix_origin;
		uint32_t        valid_lifetime;
		uint32_t        preferred_lifetime;
		uint8_t         on_link_prefix_length;
		uint8_t         skip_as_source;
		uint8_t         __pad1[ 2 ];
		uint32_t        dad_state;
		uint32_t        scope_id;
		uint64_t        creation_timestamp;

		static std::unique_ptr<mib_table<mib_unicastip_t>> query( uint32_t af = AF_UNSPEC )
		{
			mib_table<mib_unicastip_t>* tbl = nullptr;
			netio::get_unicast_ip_address_table( af, ( any_ptr ) &tbl );
			return std::unique_ptr<mib_table<mib_unicastip_t>>{ tbl };
		}
	};
	static_assert( sizeof( mib_unicastip_t ) == 0x50 );

	struct mib_ippath_t
	{
		sockaddr_inet_t source;
		sockaddr_inet_t destination;
		net_luid_t      interface_luid;
		uint32_t        interface_index;
		sockaddr_inet_t current_next_hop;
		uint32_t        path_mtu;
		uint32_t        rtt_mean;
		uint32_t        rtt_deviation;
		uint32_t        last_state_change;
		uint8_t         is_reachable;
		uint8_t         __pad[ 7 ];
		uint64_t        link_transmit_speed;
		uint64_t        link_receive_speed;

		static std::unique_ptr<mib_table<mib_ippath_t>> query( uint32_t af = AF_UNSPEC )
		{
			mib_table<mib_ippath_t>* tbl = nullptr;
			netio::get_ip_path_table( af, ( any_ptr ) &tbl );
			return std::unique_ptr<mib_table<mib_ippath_t>>{ tbl };
		}
	};
	static_assert( sizeof( mib_ippath_t ) == 0x88 );
	#pragma pack(pop)
};

// LWIP callbacks.
//
namespace lwip::core
{
	static constexpr xstd::duration adapter_update_interval = 10s;
	static xstd::timestamp last_adapter_update = xstd::time::now();
	extern "C" {
		err_t lwip_update_netif() {
			// Remove zombie adapters.
			//
			std::erase_if( adapter_list, []( auto& adp ) { return !adp->validate(); } );
			return adapter_list.empty() ? ERR_IF : ERR_OK;
		}
		void lwip_discover_netifs() {
			// Update adapter list thoroughly.
			//
			auto ts = xstd::time::now();
			if ( ( last_adapter_update + adapter_update_interval ) < ts ) {
				last_adapter_update = ts;
				update_adapter( true );
			}
		}
		uint32_t sys_rand() {
			return xstd::make_srandom<uint32_t>();
		}
		void sys_assert_core_locked() {
			dassert( xstd::net::core_lock.locked() && xstd::net::core_lock.owner_cid() == xstd::net::core_lock.get_cid() );
		}
		uint32_t sys_jiffies() {
			return *(volatile uint32_t*) &ke::get_user_shared_data()->interrupt_time;
		}
		uint32_t sys_now() {
			auto time = *(volatile uint64_t*) &ke::get_user_shared_data()->interrupt_time;
			time /= ( 1ms / 100ns );
			return (uint32_t) time;
		}
	}
};

namespace lwip
{
	// Manual ticking at DPC level.
	//
	void tick_at_dpc_level()
	{
		std::lock_guard _g{ xstd::net::core_lock.unwrap() };
		sys_check_timeouts();
	}

	// Returns the network configuration in a triple <ip, gw, sub> of IP addresses for the miniport.
	//
	static adapter_config get_net_config( uint32_t iface_idx )
	{
		// Get a list of local addresses.
		//
		std::vector<net::ipv4_address> ip_src;
		if ( auto unicast_tbl = netio::mib_unicastip_t::query( AF_INET ) )
		{
			for ( auto& entry : *unicast_tbl )
			{
				if ( entry.interface_index != iface_idx ) continue;
				if ( entry.skip_as_source ) continue;
				ip_src.emplace_back( entry.address.ip4.addr );
			}
		}

		// Determine the most common routes.
		//
		struct route
		{
			net::ipv4_address ip_src;
			net::ipv4_address ip_gateway;
			uint32_t          count;
		};
		std::vector<route> route_tbl;
		if ( auto ip_path_tbl = netio::mib_ippath_t::query( AF_INET ) ) {
			for ( auto& entry : *ip_path_tbl ) {
				if ( entry.interface_index != iface_idx ) continue;
				if ( !entry.is_reachable ) continue;
				//ndis::log_network( " -> %s => %s (%s)\n", entry.source.ip4.addr, entry.destination.ip4.addr, entry.current_next_hop.ip4.addr );

				if ( entry.destination.ip4.addr == entry.current_next_hop.ip4.addr ) continue;
				if ( std::find( ip_src.begin(), ip_src.end(), entry.source.ip4.addr ) == ip_src.end() ) continue;
				if ( ( entry.source.ip4.addr.as_int() ^ entry.current_next_hop.ip4.addr.as_int() ) & 0xff ) continue;
				if ( !( ( entry.source.ip4.addr.as_int() ^ entry.destination.ip4.addr.as_int() ) & 0xff ) ) continue;

				auto it = std::find_if( route_tbl.begin(), route_tbl.end(), [ & ] ( const route& r )
				{
					return r.ip_src == entry.source.ip4.addr &&
						r.ip_gateway == entry.current_next_hop.ip4.addr;
				} );
				if ( it == route_tbl.end() )
					it = route_tbl.insert( route_tbl.end(), route{ entry.source.ip4.addr, entry.current_next_hop.ip4.addr, 0 } );
				it->count++;
				if ( std::find( common_gateway_list, std::end( common_gateway_list ), entry.current_next_hop.ip4.addr ) != std::end( common_gateway_list ) )
					it->count += 100;
			}
		}

		// Sort by rarity.
		//
		std::sort( route_tbl.begin(), route_tbl.end(), [ ] ( auto& a, auto& b ) {
			return a.count >= b.count;
		} );

		// Create the result.
		//
		adapter_config result = { {} };
		if ( !route_tbl.empty() )
		{
			result.ip_address = route_tbl.front().ip_src;
			result.gateway = route_tbl.front().ip_gateway;
			result.subnet_mask = { 255, 255, 255, 0 };
			result.name_server = result.gateway;
		}
		return result;
	}

	// Adapter internals.
	//
	adapter::adapter( ndis::miniport_block_t* mb, uint32_t port, const adapter_config& cfg, uint32_t if_index )
		: netif{ .ip_addr = { 0 }, .hwaddr = { 0 }, .hwaddr_len = 6, .name = { 'e', 'n' } }, miniport( mb ), port( port ), host_config( cfg ), if_index( if_index )
	{
		// If miniport is not viable or if we cannot reference it, release it.
		//
		if ( !cfg.ip_address || !cfg.gateway || !ndis::reference_net_object( mb ) )
		{
			miniport = nullptr;
			return;
		}

		// Add the adapter.
		//
		netif_add_noaddr( this, this, [ ] ( netif* _i ) -> err_t
		{
			auto* self = ( adapter* ) _i;

			// Set the MTU.
			//
			self->mtu = TCP_MSS + 40u;
			if ( uint32_t ifb_mtu = self->miniport->if_block->if_mtu )
				self->mtu = std::clamp( ifb_mtu, 1200u, TCP_MSS + 40u );

			// Set the flags and the callbacks.
			//
			self->output = &etharp_output;
			self->linkoutput = &bridge::link_output;
			self->flags = NETIF_FLAG_BROADCAST | NETIF_FLAG_ETHARP | NETIF_FLAG_UP;
			return ERR_OK;
		}, &netif_input );
	}
	void adapter::release()
	{
		// Close the connection check socket.
		//
		if ( auto sock = std::exchange( conn_check_tcp, nullptr ) )
		{
			tcp_arg( sock, nullptr );
			tcp_abort( sock );
		}

		// If link was previously up:
		//
		if ( netif_is_link_up( this ) )
		{
			// Set the link down.
			//
			netif_set_link_down( this );

			// Reset default adapter if it was this one and queue an update.
			//
			if ( netif_default == this )
			{
				netif_set_default( nullptr );
				update_adapter();
			}
		}
	}
	bool adapter::renew()
	{
		// Release the current address, if miniport is down fail.
		//
		release();
		if ( !ndis::is_miniport_up( miniport ) )
			return false;

		// Host lease and physical address is shared.
		//
		flags |= NETIF_SHARED_ETH | NETIF_SHARED_IP;
		get_mac_address() = *( net::mac_address_t* ) &miniport->if_block->if_phys_address.address;
		netif_set_addr(
			this,
			( ip4_addr_t* ) &host_config.ip_address,
			( ip4_addr_t* ) &host_config.subnet_mask,
			( ip4_addr_t* ) &host_config.gateway
		);
		netif_set_link_up( this );
		return true;
	}
	bool adapter::validate()
	{
		if ( !ndis::is_miniport_up( miniport ) ) {
			release();
			return false;
		}
		return netif_is_link_up( this );
	}
	std::string adapter::to_string() const
	{
		if ( !miniport || !miniport->if_block )
			return xstd::fmt::str( "%p - invalid adapter", miniport );
		else
			return xstd::fmt::str( "%p:%d - %.*ls", miniport, port, miniport->if_block->if_descr.length, miniport->if_block->if_descr.string.data() );
	}
	adapter::~adapter()
	{
		{
			std::unique_lock net_lock{ xstd::net::core_lock };
			release();
			netif_remove( this );
		}
		if ( auto m = std::exchange( miniport, {} ) )
			ndis::dereference_net_object( m );
	}

	// Returns a numeric score for a given ndis miniport block, negative if not viable.
	//
	static int64_t rate_miniport( ndis::if_block_t* ifb, ndis::miniport_block_t* mb )
	{
		// Dump the details.
		//
		ndis::log_network( "--------------------------------------\n" );
		ndis::dump_net_object( mb );
		ndis::dump_net_object( ifb );
		if ( !mb || !ifb ) return -1;

		// Not viable if it has an invalid MAC address.
		//
		size_t adr_len = ifb->if_phys_address.length;
		if ( adr_len != 6 )
			return -1;
		const uint8_t* adr = ifb->if_phys_address.address.data();
		if ( std::count( adr, adr + adr_len, 0 ) == (int64_t) adr_len )
			return -1;

		// Skip if we do not support this media.
		//
		if ( mb->miniport_media_type != ndis::medium_t::medium_native802_11 &&
			 mb->miniport_media_type != ndis::medium_t::medium802_3 &&
			 mb->miniport_media_type != ndis::medium_t::medium_wan &&
			 mb->miniport_media_type != ndis::medium_t::medium_wireless_wan &&
			 mb->miniport_media_type != ndis::medium_t::medium_dix )
			return -1;

		// Calculate the score roughly based on the resemblence to a real physical adapter.
		//
		int64_t score = 0;
		int64_t flag = 1ll << 62;
		auto add_score = [ & ]( bool x ) mutable
		{
			score |= x ? flag : 0;
			dassert( flag != 0 );
			flag >>= 1;
		};

		// -- Strongest indicators of physical adapters.
		//
		// Being the lowest layer / Not a WAN tunnel or filter.
		add_score( ifb->lower_layer_if_count == 0 );
		add_score( ifb->wan_tunnel_type == UINT32_MAX );
		// Prefer ETH.
		add_score( mb->physical_medium_type == ndis::physical_medium_t::medium802_3 );
		add_score( mb->miniport_media_type ==  ndis::medium_t::medium802_3 );
		// Then WIFI.
		add_score( mb->physical_medium_type == ndis::physical_medium_t::medium_native802_11 );
		add_score( mb->miniport_media_type ==  ndis::medium_t::medium_native802_11 );
		// Bus I/O presence.
		add_score( is_kernel_va( mb->set_bus_data ) );

		// # Shift the counter to match the low bits instead of high.
		//
		flag = 1 << 5;

		// -- Indicators of viable connection.
		//
		add_score( ifb->media_connect_state != ndis::net_if_media_connect_state_t::connected );
		add_score( mb->driver_power_state != nt::device_power_state_t::unspecified );

		// -- Weak indicators of physical adapters.
		//
		// Reasonable link speed.
		add_score( std::clamp<size_t>( mb->rcv_link_speed, 1_mb, 10_gb ) == mb->rcv_link_speed );
		// Better link speed.
		add_score( std::clamp<size_t>( mb->rcv_link_speed, 100_mb, 10_gb ) == mb->rcv_link_speed );
		// Duplex state presence.
		add_score( ifb->media_duplex_state != ndis::net_if_media_duplex_state_t::unknown );
		// Valid physical medium type set.
		add_score( ifb->physical_medium_type != ndis::physical_medium_t::medium_unspecified );
		return score;
	}

	// Returns a list of viable miniports sorted in order of preference.
	//
	struct connectable {
		ndis::ref<ndis::miniport_block_t> miniport;
		uint32_t                          if_index;
		uint32_t                          port_number;
		int64_t                           score = 0;

		auto tie() const { return std::tie( miniport, if_index, port_number ); }
		bool operator==( const connectable& c ) const { return tie() == c.tie(); }
	};
	static std::vector<connectable> rate_miniports()
	{
		// Query all miniports and score them.
		//
		std::vector<connectable> result;
		ndis::enum_ifblock( [&]( ndis::if_block_t* ifb, ndis::miniport_block_t* mb ) {
			// Get the base miniport.
			//
			if ( auto mp = ndis::get_base_miniport( mb ); ndis::is_miniport_up( mp ) ) {
				// Skip if not viable.
				//
				auto score = rate_miniport( ifb, mp );
				if ( score < 0 )
					return;
				result.emplace_back( connectable{ ndis::ref{ mb }, ifb->if_index, ifb->port_number, score } );
			}
		} );
		std::sort( result.begin(), result.end(), [ & ] ( auto& a, auto& b ) { return a.score > b.score; } );
		return result;
	}

	// Adapter update context.
	// - Thread-safety: protected by global LWIP mutex.
	//
	struct adapter_update_context
	{
		size_t wait_counter = 0;
		xstd::promise<> promise;
		xstd::promise<> finalize()
		{
			auto p = std::move( promise );
			wait_counter = 0;
			return p;
		}
	};
	static adapter_update_context adapter_update = {};

	// Updates the adapter list and returns a promise that will be resolved with a working adapter
	// that can connect to the internet where possible, or rejected. If force is set, current adapter
	// list will be ignored even if it has functional adapters, else it may lazily skip the update operation.
	//
	xstd::future<> update_adapter( bool force )
	{
		CHECK_IRQL( <= DISPATCH_LEVEL );

		// If there is no adapter update going on, create a promise and assign, else inherit the previous instance.
		//
		xstd::promise<> pr = {};
		{
			std::unique_lock net_lock{ xstd::net::core_lock };
			if ( adapter_update.promise )
			{
				// Skip if not in force mode.
				//
				if ( !force )
					return adapter_update.promise;

				// Steal the promise.
				//
				pr = std::move( adapter_update.promise );

				// Clear default adapter.
				//
				netif_set_default( nullptr );

				// Invalidate the adapter list.
				//
				adapter_update.wait_counter = SIZE_MAX;
				adapter_list.clear();
			}
			else
			{
				// Allocate a new promise.
				//
				pr = xstd::make_promise<>();
			}

			// Initialize and return the promise reference.
			//
			adapter_update = {};
			adapter_update.promise = pr;
		}

		// If update is not forced, check if we should update:
		//
		if ( !force )
		{
			adapter_config cfg;
			uint32_t ifidx = UINT32_MAX;
			{
				std::unique_lock net_lock{ xstd::net::core_lock };
				// If there is no default interface or if it's down, should update.
				//
				auto* adp = ( lwip::adapter* ) netif_default;
				if ( adp && ndis::is_miniport_up( adp->miniport ) && netif_is_link_up( adp ) ) {
					// Get host config and the related if block with a reference.
					//
					cfg = adp->host_config;
					ifidx = adp->if_index;
				}
			}

			// If adapter is valid and host configuration did not change, fullfill the promise and return.
			//
			if ( ifidx != UINT32_MAX && get_net_config( ifidx ) == cfg )
			{
				std::unique_lock net_lock{ xstd::net::core_lock };
				if ( auto pr = adapter_update.finalize() )
					pr.resolve();
				return pr;
			}
		}

		// Fetch the miniports sorted by rating.
		//
		std::vector viable_miniports = rate_miniports();
		if ( viable_miniports.empty() ) {
			std::unique_lock net_lock{ xstd::net::core_lock };
			if ( auto pr = adapter_update.finalize() ) {
				ndis::log_network( "No viable adapters found.\n" );
				pr.reject( "No connection."_es );
			}
			return pr;
		}

		// Query the configurations.
		//
		std::vector<adapter_config> configurations;
		for ( auto it = viable_miniports.begin(); it != viable_miniports.end(); )
		{
			// If miniport is valid:
			//
			auto& [mp, ifidx, port, score] = *it;
			if ( mp && mp->if_block && mp->if_block->port_number == port )
			{
				// If configuration is valid:
				//
				auto cfg = get_net_config( ifidx );
				if ( cfg.ip_address && cfg.gateway )
				{
#if LWIP_NDIS_SEND_NO_FILTERS_802_11
					if ( mp->miniport_media_type == ndis::medium_t::medium_native802_11 )
					{
						// Read the BSSID if 802.11 adapter.
						//
						cfg.bssid = bridge::get_bssid( mp, port );
					}
#endif

					// Add the configuration and skip to the next one.
					//
					configurations.emplace_back( cfg );
					++it;
					continue;
				}
				else
				{
					ndis::log_network( "Not viable, no config\n" );
				}
			}

			// Remove this miniport and continue.
			//
			it = viable_miniports.erase( it );
		}

		// Enter locked region:
		//
		{
			std::unique_lock net_lock{ xstd::net::core_lock };

			// Clear the default adapter.
			//
			netif_set_default( nullptr );

			// Remove all adapters that are not in the viable list.
			//
			std::erase_if( adapter_list, [ & ] ( auto& adapter )
			{
				for ( auto& [mp, ifidx, port, score] : viable_miniports )
				{
					if ( mp == adapter->miniport && port == adapter->port )
						return false;
				}
				return true;
			} );

			// Create adapters for each viable miniport, if there already was one restart it.
			//
			for ( size_t n = 0; n != viable_miniports.size(); n++ )
			{
				auto& [mp, ifidx, port, score] = viable_miniports[ n ];
				auto& cfg = configurations[ n ];

				auto adp = find_adapter( mp.get(), port );
				if ( !adp )
				{
					auto new_adp = std::make_unique<adapter>( mp, port, cfg, ifidx );
					if ( !new_adp->renew() )
						continue;
					adp = new_adp.get();
					adapter_list.emplace_back( std::move( new_adp ) );
				}
				else
				{
					adp->release();
					adp->host_config = cfg;
					adp->renew();
				}
				ndis::log_network( "Adapter - %s | Cfg => %s\n", *adp, cfg );
			}

			// Declare the callbacks for failure / success.
			//
			static auto on_fail = [ ] ( adapter* adp, err_t err, bool freed )
			{
				ndis::log_network( "%s failed with error %d\n", *adp, err );

				// Close the test TCP connection.
				//
				if ( !freed )
				{
					tcp_arg( adp->conn_check_tcp, nullptr );
					tcp_abort( adp->conn_check_tcp );
				}
				adp->conn_check_tcp = nullptr;

				// If no updating adapters left.
				//
				if ( !--adapter_update.wait_counter )
				{
					// Reject the promise.
					//
					if ( auto pr = adapter_update.finalize() ) {
						ndis::log_network( "None of the adapters have a viable connection.\n" );
						pr.reject( "No connection."_es );
					}
				}
			};
			static auto on_success = [ ] ( adapter* adp )
			{
				std::string adapter_desc = adp->to_string();
				ndis::log_network( "%s successfully established the test connection!\n", adapter_desc );

				{
					std::unique_lock _g{ trace::g_info_lock };
					trace::nic_description = adapter_desc;
				}

				// Close the test TCP connection.
				//
				if ( auto test_sock = std::exchange( adp->conn_check_tcp, nullptr ) ) {
					tcp_arg( test_sock, nullptr );
					tcp_abort( test_sock );
				}

				// If the promise is not already complete:
				//
				if ( auto pr = adapter_update.finalize() )
				{
					// Set as the default adapter and the DNS servers.
					//
					netif_set_default( adp );
					dns_setserver( 0, net::ipv4_address{ 1, 1, 1, 1 }.as_lwip() );
					dns_setserver( 1, adp->host_config.name_server.as_lwip() );

					// Erase every other adapter from the list.
					//
					std::erase_if( adapter_list, [ & ] ( auto& a ) { return a.get() != adp; } );

					// Resolve the promise.
					//
					pr.resolve();
				}
			};

			// Handle by-default cases.
			//
			adapter_update.wait_counter = adapter_list.size();
			if ( !adapter_update.wait_counter ) {
				if ( auto pr = adapter_update.finalize() ) {
					ndis::log_network( "No adapters available\n" );
					pr.reject( "No connection."_es );
				}
				return pr;
			} else if ( adapter_update.wait_counter == 1 ) {
				on_success( adapter_list[ 0 ].get() );
				return pr;
			}

			// Start the connection check logic.
			//
			static constexpr net::ipv4_address test_ip = { 1, 1, 1, 1 };
			static constexpr uint16_t          test_port = 80;
			for ( auto& adp : adapter_list )
			{
				auto& tcp = adp->conn_check_tcp = tcp_new();
				tcp_bind_netif( tcp, adp.get() );
				tcp_arg( tcp, adp.get() );
				tcp_err( tcp, [ ] ( void* arg, err_t err )
				{
					if ( !arg ) return;
					on_fail( ( adapter* ) arg, err, true );
				} );
				err_t result = tcp_connect( tcp, ( ip4_addr* ) &test_ip, test_port, [ ] ( void* arg, struct tcp_pcb* tpcb, err_t err ) -> err_t
				{
					if ( !arg )
					{
						tcp_abort( tpcb );
						return ERR_ABRT;
					}
					if ( err == ERR_OK ) on_success( ( adapter* ) arg );
					else                 on_fail( ( adapter* ) arg, err, false );
					return ERR_ABRT;

				} );
				if ( result != ERR_OK )
					on_fail( adp.get(), result, false );
			}
		}
		return pr;
	}


	// Starts the network stack.
	//
	NO_INLINE void init()
	{
		// Initialize NDISPP.
		//
		ndis::init();

		// Initialize LWIP.
		//
		trace::init();

		// Mark as initialized.
		//
		initialized = true;

		// Update adapter list.
		//
		update_adapter( true ).wait_for( 60s );
	}
};
