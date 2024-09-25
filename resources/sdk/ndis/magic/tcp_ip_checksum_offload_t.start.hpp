#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Transmit.Encapsulation", encapsulation, 0x0, 0x20, true, 0xc2bcaf8aff974903)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Transmit.IpOptionsSupported", ip_options_supported, 0x20, 0x2, true, 0x40718824e43a7665, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Transmit.TcpOptionsSupported", tcp_options_supported, 0x22, 0x2, true, 0xf69dd93a725e43fe, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Transmit.TcpChecksum", tcp_checksum, 0x24, 0x2, true, 0xe866e90d08b2e7b8, 2, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Transmit.UdpChecksum", udp_checksum, 0x26, 0x2, true, 0xe1f9b8eda0b32a9, 2, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Transmit.IpChecksum", ip_checksum, 0x28, 0x2, true, 0xc25695508ff3e806, 2, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_i_pv4_transmit_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Transmit", i_pv4_transmit, 0x0, 0x40, true, 0x21e3d366d2d3cb36)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Receive.Encapsulation", encapsulation, 0x0, 0x20, true, 0x55928295e8b11d0e)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Receive.IpOptionsSupported", ip_options_supported, 0x20, 0x2, true, 0x4efbebb1fa69f0a, 2, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Receive.TcpOptionsSupported", tcp_options_supported, 0x22, 0x2, true, 0x6dfb0d89a5fc0ae, 2, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Receive.TcpChecksum", tcp_checksum, 0x24, 0x2, true, 0xcab7c3891f893d3b, 2, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Receive.UdpChecksum", udp_checksum, 0x26, 0x2, true, 0x2b589f9d57745b38, 2, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Receive.IpChecksum", ip_checksum, 0x28, 0x2, true, 0x3062bd6f635ef346, 2, uint32_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_i_pv4_receive_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv4Receive", i_pv4_receive, 0x40, 0x40, true, 0x35994efc4b20326e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Transmit.Encapsulation", encapsulation, 0x0, 0x20, true, 0x6150b9782e4e579d)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Transmit.IpExtensionHeadersSupported", ip_extension_headers_supported, 0x20, 0x2, true, 0x3e69e294020028b5, 2, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Transmit.TcpOptionsSupported", tcp_options_supported, 0x22, 0x2, true, 0xfc85adac190c4011, 2, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Transmit.TcpChecksum", tcp_checksum, 0x24, 0x2, true, 0xbf92d5407e325644, 2, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Transmit.UdpChecksum", udp_checksum, 0x26, 0x2, true, 0x4cc0d56d4cca29cb, 2, uint32_t)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_i_pv6_transmit_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Transmit", i_pv6_transmit, 0x80, 0x40, true, 0xe6c3a3e3b8bbc9bf)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Receive.Encapsulation", encapsulation, 0x0, 0x20, true, 0xbe8d1a4a789ab621)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Receive.IpExtensionHeadersSupported", ip_extension_headers_supported, 0x20, 0x2, true, 0x8f25a512b7531f1d, 2, uint32_t)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Receive.TcpOptionsSupported", tcp_options_supported, 0x22, 0x2, true, 0x7d54e804b55985ae, 2, uint32_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Receive.TcpChecksum", tcp_checksum, 0x24, 0x2, true, 0x205f83b9370055f8, 2, uint32_t)
#define _m24 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Receive.UdpChecksum", udp_checksum, 0x26, 0x2, true, 0xec0773405b71e42f, 2, uint32_t)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_i_pv6_receive_t), "_NDIS_TCP_IP_CHECKSUM_OFFLOAD.IPv6Receive", i_pv6_receive, 0xc0, 0x40, true, 0x523d0988fe52fe9c)
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
#endif