#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Transmit.IsIPv4", is_i_pv4, 0x0, 0x1, true, 0xb7eacac1180aa094, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Transmit.IsIPv6", is_i_pv6, 0x1, 0x1, true, 0x62354ee6bbe41ce8, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Transmit.TcpChecksum", tcp_checksum, 0x2, 0x1, true, 0xdcfbf8caa4e187a9, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Transmit.UdpChecksum", udp_checksum, 0x3, 0x1, true, 0x81bdc7e6d0e2b56b, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Transmit.IpHeaderChecksum", ip_header_checksum, 0x4, 0x1, true, 0xed00e408f97b6d07, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Transmit.TcpHeaderOffset", tcp_header_offset, 0x10, 0xa, true, 0x394f3fd84a658821, 10, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transmit_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Transmit", transmit, 0x0, 0x20, true, 0x9be93bcbe7986a23)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.TcpChecksumFailed", tcp_checksum_failed, 0x0, 0x1, true, 0x84e2d9261a6734c5, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.UdpChecksumFailed", udp_checksum_failed, 0x1, 0x1, true, 0x8819826d3509ca0, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.IpChecksumFailed", ip_checksum_failed, 0x2, 0x1, true, 0x7d1bc1dadd6a00d5, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.TcpChecksumSucceeded", tcp_checksum_succeeded, 0x3, 0x1, true, 0x3c6ccea31f039d1f, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.UdpChecksumSucceeded", udp_checksum_succeeded, 0x4, 0x1, true, 0xbda9b2d24258d8e4, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.IpChecksumSucceeded", ip_checksum_succeeded, 0x5, 0x1, true, 0x66f582652fe53045, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.Loopback", loopback, 0x6, 0x1, true, 0xcd9beb2239e061dd, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.TcpChecksumValueInvalid", tcp_checksum_value_invalid, 0x7, 0x1, true, 0xc6aef056240c078d, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive.IpChecksumValueInvalid", ip_checksum_value_invalid, 0x8, 0x1, true, 0x16c71f2032ce0ae1, 1, uint32_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_receive_t), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Receive", receive, 0x0, 0x20, true, 0x74baacd93e979c5)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_TCP_IP_CHECKSUM_NET_BUFFER_LIST_INFO.Value", value, 0x0, 0x40, true, 0x1df6d719dad0f566)
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
#endif