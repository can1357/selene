#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.Header", header, 0x0, 0x20, true, 0xc167e5b005e5f8b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.Flags", flags, 0x20, 0x20, true, 0xde70e36cb1e988f8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_header_group_transposition_action_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.Action", action, 0x40, 0x20, true, 0x831e4ad452fe2ffc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.HeadersPresent", headers_present, 0x60, 0x20, true, 0xc612bd3bced87655)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.HeaderFields", header_fields, 0x80, 0x40, true, 0x2ec6e39e8f112384)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ethernet_header_fields_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.EthernetFields", ethernet_fields, 0xc0, 0xa0, true, 0xed37f1541f571591)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in_addr_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.IPv4Address.SourceIPAddress", source_ip_address, 0x0, 0x20, true, 0x7d8de4b6a3ec40e5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in_addr_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.IPv4Address.DestinationIPAddress", destination_ip_address, 0x20, 0x20, true, 0xd39ea511ce574cd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_i_pv4_address_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.IPv4Address", i_pv4_address, 0x0, 0x40, true, 0xb8e76c64e4cb65da)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in6_addr_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.IPv6Address.SourceIPAddress", source_ip_address, 0x0, 0x80, true, 0x913c67bd955f860e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in6_addr_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.IPv6Address.DestinationIPAddress", destination_ip_address, 0x80, 0x80, true, 0x90c52a2ab844111b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_i_pv6_address_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress.IPv6Address", i_pv6_address, 0x0, 0x0, true, 0x6524a92566273ce)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_ip_address_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPAddress", ip_address, 0x160, 0x0, true, 0x855c17c5b5c25345)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.Ttl", ttl, 0x260, 0x8, true, 0xe08c49a0c05d70ee)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.Dscp", dscp, 0x268, 0x8, true, 0x20f0ad11eae512ec)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.IPProtocol", ip_protocol, 0x270, 0x8, true, 0xdec281aff9ab0f51)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Udp.SourcePort", source_port, 0x0, 0x10, true, 0xfd200885c9785b28)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Udp.DestinationPort", destination_port, 0x10, 0x10, true, 0xef3391408548729d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_udp_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Udp", udp, 0x0, 0x20, true, 0x24d55dd1ad8f7b6)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Tcp.SourcePort", source_port, 0x0, 0x10, true, 0xb17add3a743c39dd)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Tcp.DestinationPort", destination_port, 0x10, 0x10, true, 0x49e2a952aa04e858)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u15_tcp_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Tcp", tcp, 0x0, 0x20, true, 0x1ba45378f41e07ca)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Encapsulation.TenantId", tenant_id, 0x0, 0x20, true, 0xc75fdb840053142a)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Encapsulation.GreProtocol", gre_protocol, 0x20, 0x10, true, 0x7fa1e3414ce75fb4)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Encapsulation.Entropy", entropy, 0x30, 0x10, true, 0x8ac1df7d7085ce83)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u18_encapsulation_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation.Encapsulation", encapsulation, 0x0, 0x40, true, 0xbf9f098da2990ba6)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_transport_or_encapsulation_t), "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION.TransportOrEncapsulation", transport_or_encapsulation, 0x280, 0x40, true, 0x6997ea70e6df4b2d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#endif