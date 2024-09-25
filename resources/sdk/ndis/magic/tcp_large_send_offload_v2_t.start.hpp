#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv4.Encapsulation", encapsulation, 0x0, 0x20, true, 0x5b025923a5bdc67d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv4.MaxOffLoadSize", max_off_load_size, 0x20, 0x20, true, 0x262db2a948e60e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv4.MinSegmentCount", min_segment_count, 0x40, 0x20, true, 0x7e01fea31d36decc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_i_pv4_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv4", i_pv4, 0x0, 0x60, true, 0x6e1bc36855b5017d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv6.Encapsulation", encapsulation, 0x0, 0x20, true, 0xbee9e186e23166dc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv6.MaxOffLoadSize", max_off_load_size, 0x20, 0x20, true, 0xa51574dc253269ac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv6.MinSegmentCount", min_segment_count, 0x40, 0x20, true, 0xc6d40e9ce693b277)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv6.IpExtensionHeadersSupported", ip_extension_headers_supported, 0x60, 0x2, true, 0xb303cba879a91c37, 2, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv6.TcpOptionsSupported", tcp_options_supported, 0x62, 0x2, true, 0xe7768cc8ecd3151c, 2, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_i_pv6_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V2.IPv6", i_pv6, 0x60, 0x80, true, 0xdbed168c0cea5d)
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
#endif