#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.Header", header, 0x0, 0x20, true, 0x178f3f0bb86e8925)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.Flags", flags, 0x20, 0x20, true, 0x83e49cc6e569a498)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.ProfileId", profile_id, 0x40, 0x20, true, 0x31c2d3aa70a6df9f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.HeadersPresent", headers_present, 0x60, 0x20, true, 0xc38a02d2dc5344cf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.MatchFields", match_fields, 0x80, 0x40, true, 0x4b0f033762c438ed)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ethernet_header_fields_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.EthernetFields", ethernet_fields, 0xc0, 0xa0, true, 0x41d8405d52629f39)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::gfp_ip_src_and_dest_address_wildcard_match_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.IPSrcAndDestAddress", ip_src_and_dest_address, 0x160, 0x80, true, 0xfa88337f16cafc52)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.Dscp", dscp, 0x2e0, 0x8, true, 0xfea113fd2ec03338)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.IPProtocol", ip_protocol, 0x2e8, 0x8, true, 0xcbebbb663d3ab29f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_transport_src_and_dest_port_wildcard_match_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.UdpHeader.UdpSrcAndDestPort", udp_src_and_dest_port, 0x0, 0x80, true, 0xbcd36fd1761112be)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_udp_header_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.UdpHeader", udp_header, 0x0, 0x80, true, 0x20d13f13b713de6a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_transport_src_and_dest_port_wildcard_match_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.TcpHeader.TcpSrcAndDestPort", tcp_src_and_dest_port, 0x0, 0x80, true, 0x3ecd4b26c87cdeda)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.TcpHeader.TcpFlags", tcp_flags, 0x80, 0x8, true, 0xbcd1ea7a2c79b272)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_tcp_header_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.TcpHeader", tcp_header, 0x0, 0xa0, true, 0x285f41ae7043cc9e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.IcmpHeader.Type", type, 0x0, 0x8, true, 0xa05c78abced58fc3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.IcmpHeader.Code", code, 0x8, 0x8, true, 0x68498399f7fa8b09)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_icmp_header_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.IcmpHeader", icmp_header, 0x0, 0x10, true, 0x4774fdfeae0d3cc9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.Encapsulation.TenantId", tenant_id, 0x0, 0x20, true, 0x9fd3e09fd29fc798)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.Encapsulation.GreProtocol", gre_protocol, 0x20, 0x10, true, 0xb2702ff377632e2f)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_encapsulation_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation.Encapsulation", encapsulation, 0x0, 0x40, true, 0x8bea353b71464e5f)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transport_or_encapsulation_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH.TransportOrEncapsulation", transport_or_encapsulation, 0x300, 0xa0, true, 0x9e3243e127ded860)
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
#endif