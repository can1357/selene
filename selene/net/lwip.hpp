#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/future.hpp>
#include <xstd/hashable.hpp>
#include <xstd/formatting.hpp>
#include <xstd/spinlock.hpp>
#include <xstd/random.hpp>
#include <atomic>
#include <mutex>
#include <ia32.hpp>
#include <ntpp.hpp>
#include <lwip/dhcp.h>
#include <lwip/netif.h>
#include <lwip/etharp.h>
#include <lwip/netif.h>
#include <lwip/autoip.h>
#include <lwip/sys.h>
#include <lwip/tcp.h>
#include <lwip/init.h>
#include <lwip/dns.h>
#include <lwip/timeouts.h>
#include "layer_defs.hpp"
#include "lwip_bridge.hpp"

namespace ndis { struct miniport_block_t; };

namespace lwip
{
	// Adapter configuration.
	//
	struct adapter_config
	{
		net::ipv4_address  ip_address = {};
		net::ipv4_address  gateway = {};
		net::ipv4_address  subnet_mask = {};
		net::ipv4_address  name_server = {};
		net::mac_address_t bssid = {};

		constexpr auto tie() const { return std::tie( ip_address, gateway, subnet_mask, name_server, bssid ); }
		constexpr auto operator<=>( const adapter_config& o ) const = default;

		std::string to_string() const 
		{ 
			return xstd::fmt::str( 
				bssid ? "[ IP: %s | Gateway: %s | Subnet: %s | NS: %s | BSSID: %s ]" : "[ IP: %s | Gateway: %s | Subnet: %s | NS: %s ]", 
				ip_address, gateway, subnet_mask, name_server, bssid 
			);
		}
	};

	// Wrapper around LWIP network interface.
	// - Should hold the mutex whilist touching anything non-const.
	//
	struct adapter : netif
	{
		// Miniport identifier.
		//
		ndis::miniport_block_t* miniport;
		uint32_t port;
		adapter_config host_config;
		uint32_t if_index;

		// State of the update mechanism.
		//
		tcp_pcb* conn_check_tcp = nullptr;

		// Constructs an adapter from a miniport block pointer.
		//
		adapter( ndis::miniport_block_t* miniport, uint32_t port, const adapter_config& cfg, uint32_t if_index );

		// Tries to set the adapter up, will return false if adapter is not available.
		//
		bool renew();
		void release();

		// Validates adapter state, returns false and sets the adapter down if not valid.
		//
		bool validate();

		// String conversion.
		//
		std::string to_string() const;

		// Address getters with the type cast.
		//
		net::mac_address_t& get_mac_address() { return *( net::mac_address_t* ) &hwaddr; }
		const net::mac_address_t& get_mac_address() const { return *( const net::mac_address_t* ) &hwaddr; }
		net::ipv4_address& get_ip_address() { return *( net::ipv4_address* ) &ip_addr; }
		const net::ipv4_address& get_ip_address() const { return *( const net::ipv4_address* ) &ip_addr; }

		// No copy or move.
		//
		adapter( adapter&& ) = delete;
		adapter( const adapter& ) = delete;

		// Dereferences and removes the interface.
		//
		~adapter();
	};

	// List of adapters.
	// - Must be used with the core lock held.
	//
	inline std::vector<std::unique_ptr<adapter>> adapter_list = {};
	inline adapter* find_adapter( ndis::miniport_block_t* mp, uint32_t port )
	{
		auto oracle = [ & ] ( auto& a ) { return a->miniport == mp && a->port == port; };

		if ( adapter_list.size() == 1 ) [[likely]]
		{
			auto* adp = adapter_list.front().get();
			return oracle( adp ) ? adp : nullptr;
		}
		else
		{
			auto it = std::find_if( adapter_list.begin(), adapter_list.end(), oracle );
			if ( it == adapter_list.end() ) return {};
			return it->get();
		}
	}

	// Updates the adapter list and returns a promise that will be resolved with a working adapter
	// that can connect to the internet where possible, or rejected. If force is set, current adapter 
	// list will be ignored even if it has functional adapters, else it may lazily skip the update operation.
	//
	xstd::future<> update_adapter( bool force = false );

	// Starts the network stack.
	//
	inline bool initialized = false;
	void init();

	// Manual ticking at DPC level.
	//
	void tick_at_dpc_level();
};