#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <xstd/formatting.hpp>
#include <xstd/hashable.hpp>
#include <array>
#include <lwip/inet.h>

#pragma pack(push, 1)
namespace net
{
	// Sizeof in words.
	//
	using word_t = uint32_t;
	template<typename T>
	inline constexpr size_t wsizeof = ( sizeof( T ) + sizeof( word_t ) - 1 ) / sizeof( word_t );

	// Computes the TCP/UDP checksum, data must be bswap'd already.
	//
	inline uint32_t& ipchk_add( uint32_t& chk, any_ptr data, size_t n )
	{
		const uint8_t* byte_data = data;
		const uint16_t* word_data = data;

		for ( size_t it = 0; it < ( n / 2 ); it++ )
			chk += word_data[ it ];
		if ( n & 1 )
			chk += byte_data[ n - 1 ];
		return chk;
	}
	template<typename T>
	inline uint32_t& ipchk_add( uint32_t& chk, const T& ref )
	{
		return ipchk_add( chk, &ref, sizeof( T ) );
	}
	inline uint16_t ipchk_fold( uint32_t chk )
	{
		chk = ( chk >> 16 ) + ( chk & 0xffff );
		chk = ( chk >> 16 ) + ( chk & 0xffff );
		return ( uint16_t ) chk;
	}
	inline uint16_t ipchk_end( uint32_t chk )
	{
		chk = ipchk_fold( chk );
		return bswap<uint16_t>( ~chk );
	}

	// Ethernet layer.
	//
	enum eth_type : uint16_t
	{
		eth_ipv4 = 0x08'00,
		eth_ipv6 = 0x86'dd,
		eth_arp =  0x08'06,
	};
	struct mac_address_t
	{
		std::array<uint8_t, 6> values = { 0 };

		constexpr auto tie() { return std::tie( values ); }
		constexpr auto operator<=>( const mac_address_t& ) const = default;
		constexpr explicit operator bool() const { return values != mac_address_t{}.values; }

		std::string to_string() const { return xstd::fmt::str( "%02x:%02x:%02x:%02x:%02x:%02x", values[ 0 ], values[ 1 ], values[ 2 ], values[ 3 ], values[ 4 ], values[ 5 ] ); }
	};
	struct eth_header_t
	{
		mac_address_t  dst_mac = {};
		mac_address_t  src_mac = {};
		eth_type       type = {};
	};
	static_assert( sizeof( eth_header_t ) == 14, "Invalid ETH header." );

	// 802.2
	//
	enum dot11_type : uint16_t // :2
	{
		dot11_mgmt = 0b00,
		dot11_ctrl = 0b01,
		dot11_data = 0b10,
		dot11_ext  = 0b11,
	};
	enum lsap_address : uint8_t
	{
		lsap_snap = 0xAA,
	};
	struct dot11_header_t
	{
		struct
		{
			uint16_t   protocol_ver    : 2;
			dot11_type type            : 2;
			uint16_t   cf_ack          : 1;
			uint16_t   cf_poll         : 1;
			uint16_t   null_func       : 1;
			uint16_t   qos             : 1;

			uint16_t   ds_path         : 2;
			uint16_t   more_fragments  : 1;
			uint16_t   retry           : 1;
			uint16_t   power_mgmt      : 1;
			uint16_t   more_data       : 1;
			uint16_t   protected_frame : 1;
			uint16_t   has_ht_or_order : 1;
		};
		uint16_t      duration_id;
		mac_address_t addr1;
		mac_address_t addr2;
		mac_address_t addr3;
		uint16_t      seq_ctl;
		// mac_address_t addr4;
		// uint16_t      qos_ctl;
		// uint32_t      ht_ctl;
	};
	struct llc_header_t
	{
		lsap_address  dst_sap;
		lsap_address  src_sap;
		uint8_t       control;
		//uint8_t       control_ex;
		constexpr bool is_extended() const { return ( control & 0b11 ) != 0b11; }
	};
	struct snap_header_t
	{
		uint8_t  oui[ 3 ];
		eth_type type;
	};

	// IP layer.
	//
	enum ip_proto : uint8_t
	{
		proto_tcp = 6,
		proto_udp = 17,
	};
	struct ipv4_address
	{
		std::array<uint8_t, 4> values = { 0 };

		static ipv4_address from_string( const char* str )
		{
			ipv4_address adr = {};
			inet_aton( str, &adr );
			return adr;
		}
		static ipv4_address from_lwip( const ip4_addr_t* ip )
		{
			if ( !ip ) return {};
			return *( const ipv4_address* ) ip;
		}
		ip4_addr_t* as_lwip() { return ( ip4_addr_t* ) this; }
		const ip4_addr_t* as_lwip() const { return ( const ip4_addr_t* ) this; }
		
		uint32_t& as_int() { return *( uint32_t* ) &values; }
		const uint32_t& as_int() const { return *( const uint32_t* ) &values; }

		std::string to_string() const { return xstd::fmt::str( "%d.%d.%d.%d", values[ 0 ], values[ 1 ], values[ 2 ], values[ 3 ] ); }

		auto tie() { return std::tie( as_int() ); }
		constexpr auto operator<=>( const ipv4_address& ) const = default;
		explicit operator bool() const { return as_int() != 0; }
	};
	struct ip_desc_t
	{
		uint16_t       frag_off  : 13;
		uint16_t       reserved  : 1;
		uint16_t       dont_frag : 1;
		uint16_t       more_frag : 1;
	};
	struct ip_header_t
	{
		uint8_t        hdr_len   : 4;
		uint8_t        version   : 4;
		uint8_t        tos;
		uint16_t       len;
		uint16_t       id;
		ip_desc_t      desc;
		uint8_t        ttl;
		ip_proto       protocol;
		uint16_t       chk;
		ipv4_address   src;
		ipv4_address   dst;
	};
	static_assert( sizeof( ip_header_t ) == 20, "Invalid IP header." );

	// ARP layer.
	//
	enum hw_type : uint16_t
	{
		hw_eth = 1
	};
	enum arp_operation : uint16_t
	{
		arp_request =  1,
		arp_reply =    2,
		rarp_request = 3,
		rarp_reply =   4,
	};
	template<uint8_t hw_len = 6, uint8_t pr_len = 4>
	struct arp_identifier_t
	{
		uint8_t        hardware[ hw_len ];
		uint8_t        protocol[ pr_len ];
	};
	template<uint8_t hw_len = 6, uint8_t pr_len = 4>
	struct arp_header_t
	{
		using id_t = arp_identifier_t<hw_len, pr_len>;
		
		hw_type        hardware;
		eth_type       protocol;
		uint8_t        hardware_len = hw_len;
		uint8_t        protocol_len = pr_len;
		arp_operation  operation;
		id_t           sender;
		id_t           target;
	};

	// UDP layer.
	//
	struct udp_header_t
	{
		uint16_t       src_port;
		uint16_t       dst_port;
		uint16_t       len;
		uint16_t       crc;
	};

	// TCP layer.
	//
	struct tcp_desc_t
	{
		uint16_t       fin     : 1;
		uint16_t       syn     : 1;
		uint16_t       rst     : 1;
		uint16_t       psh     : 1;
		uint16_t       ack     : 1;
		uint16_t       urg     : 1;
		uint16_t       ece     : 1;
		uint16_t       cwr     : 1;
		uint16_t       ns      : 1;
		uint16_t       rsvd    : 3;
		uint16_t       hdr_len : 4;
	};
	struct tcp_header_t
	{
		uint16_t       src_port;
		uint16_t       dst_port;
		uint32_t       seq_num;
		uint32_t       ack_num;
		tcp_desc_t     desc;
		uint16_t       window;
		uint16_t       crc;
		uint16_t       urgent_ptr;
	};
	static_assert( sizeof( tcp_header_t ) == 20, "Invalid TCP header." );
};
#pragma pack(pop)