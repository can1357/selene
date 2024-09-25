#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V1.IPv4.Encapsulation", encapsulation, 0x0, 0x20, true, 0x200af45abd40f598)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V1.IPv4.MaxOffLoadSize", max_off_load_size, 0x20, 0x20, true, 0x4dd30590c8f59b6e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V1.IPv4.MinSegmentCount", min_segment_count, 0x40, 0x20, true, 0x4652cbe38f50e172)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V1.IPv4.TcpOptions", tcp_options, 0x60, 0x2, true, 0x8299abd910693afd, 2, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V1.IPv4.IpOptions", ip_options, 0x62, 0x2, true, 0x1dc3a1c5c9129a29, 2, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_i_pv4_t), "_NDIS_TCP_LARGE_SEND_OFFLOAD_V1.IPv4", i_pv4, 0x0, 0x80, true, 0x6d7e8cf88d998cc8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif