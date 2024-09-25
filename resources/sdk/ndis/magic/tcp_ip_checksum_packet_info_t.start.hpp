#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Transmit.NdisPacketChecksumV4", ndis_packet_checksum_v4, 0x0, 0x1, true, 0xafded5db17ed85f1, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Transmit.NdisPacketChecksumV6", ndis_packet_checksum_v6, 0x1, 0x1, true, 0x420fa37503fee263, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Transmit.NdisPacketTcpChecksum", ndis_packet_tcp_checksum, 0x2, 0x1, true, 0x6bdd3d2a5d384301, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Transmit.NdisPacketUdpChecksum", ndis_packet_udp_checksum, 0x3, 0x1, true, 0x540ea46eda35272a, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Transmit.NdisPacketIpChecksum", ndis_packet_ip_checksum, 0x4, 0x1, true, 0x9eae4cfebbb91dc5, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transmit_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Transmit", transmit, 0x0, 0x20, true, 0xb75934819c502282)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive.NdisPacketTcpChecksumFailed", ndis_packet_tcp_checksum_failed, 0x0, 0x1, true, 0x65ae702f943f6c48, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive.NdisPacketUdpChecksumFailed", ndis_packet_udp_checksum_failed, 0x1, 0x1, true, 0x70b16ef7db77d7ef, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive.NdisPacketIpChecksumFailed", ndis_packet_ip_checksum_failed, 0x2, 0x1, true, 0x5353e96429830af5, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive.NdisPacketTcpChecksumSucceeded", ndis_packet_tcp_checksum_succeeded, 0x3, 0x1, true, 0xc0bde90c110f0e3e, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive.NdisPacketUdpChecksumSucceeded", ndis_packet_udp_checksum_succeeded, 0x4, 0x1, true, 0xd472dc55ace9f50, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive.NdisPacketIpChecksumSucceeded", ndis_packet_ip_checksum_succeeded, 0x5, 0x1, true, 0x4e3e707bb536684, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive.NdisPacketLoopback", ndis_packet_loopback, 0x6, 0x1, true, 0x18c7a0d42488d78d, 1, uint32_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_receive_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Receive", receive, 0x0, 0x20, true, 0x6c9efc86c9c3aabf)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_IP_CHECKSUM_PACKET_INFO.Value", value, 0x0, 0x20, true, 0x583e00310de21699)
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