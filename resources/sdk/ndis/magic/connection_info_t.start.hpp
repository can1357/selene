#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_CONNECTION_INFO.MacAddress", mac_address, 0x0, 0x30, true, 0x5d0e4f53f4366b29)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CONNECTION_INFO.IPv4Info.SourceIPv4Address", source_i_pv4_address, 0x0, 0x20, true, 0xf90ebbf55b937a71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CONNECTION_INFO.IPv4Info.DestinationIPv4Address", destination_i_pv4_address, 0x20, 0x20, true, 0x3d31cbe78945dcdb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_CONNECTION_INFO.IPv4Info.Protocol", protocol, 0x40, 0x8, true, 0xdceffe443f228f5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_i_pv4_info_t), "_NDIS_CONNECTION_INFO.IPv4Info", i_pv4_info, 0x40, 0x60, true, 0xb72afb8d99dda641)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_CONNECTION_INFO.IPv6Info.SourceIPv6Address", source_i_pv6_address, 0x0, 0x80, true, 0x7e8d1c41a076f75c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_CONNECTION_INFO.IPv6Info.DestinationIPv6Address", destination_i_pv6_address, 0x80, 0x80, true, 0x10bdcb4b8f308d0f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_CONNECTION_INFO.IPv6Info.Protocol", protocol, 0x100, 0x8, true, 0x662563fa913b7c01)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_i_pv6_info_t), "_NDIS_CONNECTION_INFO.IPv6Info", i_pv6_info, 0x40, 0x8, true, 0xba2b70b0189a0e47)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_CONNECTION_INFO.TcpPortInfo.SourceTcpPort", source_tcp_port, 0x0, 0x10, true, 0xc8a93fc00f4b5855)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_CONNECTION_INFO.TcpPortInfo.DestinationTcpPort", destination_tcp_port, 0x10, 0x10, true, 0xc4e9a74b14d8c292)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_tcp_port_info_t), "_NDIS_CONNECTION_INFO.TcpPortInfo", tcp_port_info, 0x160, 0x20, true, 0x491d4ef06e3aeff7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_CONNECTION_INFO.UdpPortInfo.SourceUdpPort", source_udp_port, 0x0, 0x10, true, 0x84eb8b7445f1e696)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_CONNECTION_INFO.UdpPortInfo.DestinationUdpPort", destination_udp_port, 0x10, 0x10, true, 0xa9c42b8e5927205b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_udp_port_info_t), "_NDIS_CONNECTION_INFO.UdpPortInfo", udp_port_info, 0x160, 0x20, true, 0xaabf1f48021f132d)
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
#endif