#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.Transmit.Type", type, 0x1e, 0x1, true, 0x556de31a7f9a54e0, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transmit_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.Transmit", transmit, 0x0, 0x20, true, 0x1e846c88c671d530)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1Transmit.MSS", mss, 0x0, 0x14, true, 0xab1d831460ac542f, 20, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1Transmit.TcpHeaderOffset", tcp_header_offset, 0x14, 0xa, true, 0x15d06a3d1b775555, 10, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1Transmit.Type", type, 0x1e, 0x1, true, 0x206e1b47d0e91ced, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_lso_v1_transmit_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1Transmit", lso_v1_transmit, 0x0, 0x20, true, 0xf0a363ca5d7db446)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1TransmitComplete.TcpPayload", tcp_payload, 0x0, 0x1e, true, 0x1849aecc93a0bb01, 30, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1TransmitComplete.Type", type, 0x1e, 0x1, true, 0x48a3d18e86a25c86, 1, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_lso_v1_transmit_complete_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV1TransmitComplete", lso_v1_transmit_complete, 0x0, 0x20, true, 0x14f34622fb19bcdf)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2Transmit.MSS", mss, 0x0, 0x14, true, 0x59dd119a2f7cebda, 20, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2Transmit.TcpHeaderOffset", tcp_header_offset, 0x14, 0xa, true, 0x3f2c0eab46f0e38b, 10, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2Transmit.Type", type, 0x1e, 0x1, true, 0x600e81f57e7f9006, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2Transmit.IPVersion", ip_version, 0x1f, 0x1, true, 0x6890cdbf5b91c130, 1, uint32_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_lso_v2_transmit_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2Transmit", lso_v2_transmit, 0x0, 0x20, true, 0xfd4346436cbd1d76)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2TransmitComplete.Type", type, 0x1e, 0x1, true, 0x991c4007665932aa, 1, uint32_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_lso_v2_transmit_complete_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.LsoV2TransmitComplete", lso_v2_transmit_complete, 0x0, 0x20, true, 0x56e85846776de4bd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_TCP_LARGE_SEND_OFFLOAD_NET_BUFFER_LIST_INFO.Value", value, 0x0, 0x40, true, 0xd81b51474dfa1af5)
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
#endif