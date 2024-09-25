#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.Header", header, 0x0, 0x20, true, 0xce0f34f50d71a04b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.Flags", flags, 0x20, 0x20, true, 0x25d37e1c89d467a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.HeadersPresent", headers_present, 0x40, 0x20, true, 0xed660ed4ee10a19b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.MatchFields", match_fields, 0x80, 0x40, true, 0xb28bfc31adea043e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ethernet_header_fields_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.EthernetFields", ethernet_fields, 0xc0, 0xa0, true, 0xcb1f70fac344928c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in_addr_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.IPv4Address.SourceIPAddress", source_ip_address, 0x0, 0x20, true, 0x38fff27c34fcb290)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in_addr_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.IPv4Address.DestinationIPAddress", destination_ip_address, 0x20, 0x20, true, 0x7ef8d1cc9deb12b7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_i_pv4_address_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.IPv4Address", i_pv4_address, 0x0, 0x40, true, 0x4003296c0068260a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in6_addr_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.IPv6Address.SourceIPAddress", source_ip_address, 0x0, 0x80, true, 0x949b89a84fec6df9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in6_addr_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.IPv6Address.DestinationIPAddress", destination_ip_address, 0x80, 0x80, true, 0x2be7fce422b07254)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_i_pv6_address_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress.IPv6Address", i_pv6_address, 0x0, 0x0, true, 0xe48115b9f9f3dbd5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_ip_address_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPAddress", ip_address, 0x160, 0x0, true, 0x966edfa76e02758e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.Dscp", dscp, 0x260, 0x8, true, 0x7a4af38c0fc10789)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.IPProtocol", ip_protocol, 0x268, 0x8, true, 0x3d5242638d901a03)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Udp.SourcePort", source_port, 0x0, 0x10, true, 0x46df57d8b45b7fc3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Udp.DestinationPort", destination_port, 0x10, 0x10, true, 0xcaa3d3c78502d67a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_udp_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Udp", udp, 0x0, 0x20, true, 0x97a6833158c1d41e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Tcp.SourcePort", source_port, 0x0, 0x10, true, 0xc410aee3c6692d56)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Tcp.DestinationPort", destination_port, 0x10, 0x10, true, 0x4b1dcc440ed69a4a)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Tcp.TcpFlags", tcp_flags, 0x20, 0x8, true, 0xabcbe914e3b4e73)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u15_tcp_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Tcp", tcp, 0x0, 0x30, true, 0x9e020f4734a8fc7)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Icmp.Type", type, 0x0, 0x8, true, 0xc90645378c74dafd)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Icmp.Code", code, 0x8, 0x8, true, 0xaf33c1f552888237)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u18_icmp_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Icmp", icmp, 0x0, 0x10, true, 0xb8d7b8297489eb19)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Encapsulation.TenantId", tenant_id, 0x0, 0x20, true, 0x7b4f8fcfb1048328)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Encapsulation.GreProtocol", gre_protocol, 0x20, 0x10, true, 0x278cc5cd108d217b)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u21_encapsulation_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation.Encapsulation", encapsulation, 0x0, 0x40, true, 0x8c9d1592c4540b21)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_transport_or_encapsulation_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH.TransportOrEncapsulation", transport_or_encapsulation, 0x280, 0x40, true, 0x560d4207310e3f19)
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
#define _m27
#endif