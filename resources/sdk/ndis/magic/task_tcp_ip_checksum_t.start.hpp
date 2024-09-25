#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Transmit.IpOptionsSupported", ip_options_supported, 0x0, 0x1, true, 0xdd28aba708e013c, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Transmit.TcpOptionsSupported", tcp_options_supported, 0x1, 0x1, true, 0x7ff2c5db2a0ce332, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Transmit.TcpChecksum", tcp_checksum, 0x2, 0x1, true, 0xb42f96318a3d4179, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Transmit.UdpChecksum", udp_checksum, 0x3, 0x1, true, 0xeb0874ed3837427c, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Transmit.IpChecksum", ip_checksum, 0x4, 0x1, true, 0x546343b07c542dd7, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_v4_transmit_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Transmit", v4_transmit, 0x0, 0x20, true, 0x700ea8b7242097c2)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Receive.IpOptionsSupported", ip_options_supported, 0x0, 0x1, true, 0xfb1dddc7e0332f21, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Receive.TcpOptionsSupported", tcp_options_supported, 0x1, 0x1, true, 0xd11efd10c2ae26a, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Receive.TcpChecksum", tcp_checksum, 0x2, 0x1, true, 0x46c2434669feb78, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Receive.UdpChecksum", udp_checksum, 0x3, 0x1, true, 0xe9cd04f35902ac24, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Receive.IpChecksum", ip_checksum, 0x4, 0x1, true, 0xc317de6f03b0f9cf, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_v4_receive_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V4Receive", v4_receive, 0x20, 0x20, true, 0xf1d36ebba7885929)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Transmit.IpOptionsSupported", ip_options_supported, 0x0, 0x1, true, 0x6086b71e61353a5e, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Transmit.TcpOptionsSupported", tcp_options_supported, 0x1, 0x1, true, 0x7d22ebb3ec18cacb, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Transmit.TcpChecksum", tcp_checksum, 0x2, 0x1, true, 0x28f5f25dc5f2cc45, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Transmit.UdpChecksum", udp_checksum, 0x3, 0x1, true, 0x8308809971701e8a, 1, uint32_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_v6_transmit_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Transmit", v6_transmit, 0x40, 0x20, true, 0xd7fed583879c949f)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Receive.IpOptionsSupported", ip_options_supported, 0x0, 0x1, true, 0xfddd01e7bba0752b, 1, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Receive.TcpOptionsSupported", tcp_options_supported, 0x1, 0x1, true, 0xb843e054182d231b, 1, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Receive.TcpChecksum", tcp_checksum, 0x2, 0x1, true, 0xb9599ac01d4fb9d4, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Receive.UdpChecksum", udp_checksum, 0x3, 0x1, true, 0x70deef8a4cfca047, 1, uint32_t)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_v6_receive_t), "_NDIS_TASK_TCP_IP_CHECKSUM.V6Receive", v6_receive, 0x60, 0x20, true, 0x4143a38afe447ed1)
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
#endif