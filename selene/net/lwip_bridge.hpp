#pragma once
#include <memory>
#include <lwip/pbuf.h>
#include <xstd/hashable.hpp>
#include <unordered_map>
#include <unordered_set>
#include <atomic>
#include "ndispp.hpp"
#include "layer_defs.hpp"

#define LWIP_NDIS_SEND_NO_FILTERS        1
#define LWIP_NDIS_SEND_NO_FILTERS_802_11 0 // TODO: Doesn't really work :)

// LWIP to NDIS bridge.
//
namespace lwip::bridge
{
	// Queries the BSSID given a 802.11 miniport.
	//
	net::mac_address_t get_bssid( ndis::miniport_block_t* mb, uint32_t port );

	// Sends a pbuf over a miniport block.
	//
	err_t link_output( netif* nif, pbuf* p );

	// Initializes the hooks.
	//
	void init();
};