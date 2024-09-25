#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_TCP_CONNECTION_OFFLOAD.Header", header, 0x0, 0x20, true, 0xf68cccda9ab4f007)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD.Encapsulation", encapsulation, 0x20, 0x20, true, 0x8e36a8394abf1093)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_CONNECTION_OFFLOAD.SupportIPv4", support_i_pv4, 0x40, 0x2, true, 0x2b4127e4a4c9e93c, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_CONNECTION_OFFLOAD.SupportIPv6", support_i_pv6, 0x42, 0x2, true, 0x110c60b7297d3c4a, 2, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_CONNECTION_OFFLOAD.SupportIPv6ExtensionHeaders", support_i_pv6_extension_headers, 0x44, 0x2, true, 0xff403eb9c4a80737, 2, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_CONNECTION_OFFLOAD.SupportSack", support_sack, 0x46, 0x2, true, 0xbe0525e2e6e9cbb4, 2, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_TCP_CONNECTION_OFFLOAD.CongestionAlgorithm", congestion_algorithm, 0x48, 0x4, true, 0x3adf9a070bf8e4ed, 4, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD.TcpConnectionOffloadCapacity", tcp_connection_offload_capacity, 0x60, 0x20, true, 0x89b4976afe99b681)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_CONNECTION_OFFLOAD.Flags", flags, 0x80, 0x20, true, 0xfdc971658543497c)
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
#endif