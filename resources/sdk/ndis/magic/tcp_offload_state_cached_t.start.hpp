#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_state_header_t), "_TCP_OFFLOAD_STATE_CACHED.Header", header, 0x0, 0x40, true, 0xd8aa63ebf0c54e64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TCP_OFFLOAD_STATE_CACHED.Flags", flags, 0x40, 0x10, true, 0x6dd2cebd38d4d1f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_CACHED.InitialRcvWnd", initial_rcv_wnd, 0x60, 0x20, true, 0xf7495a26658bc5ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_CACHED.RcvIndicationSize", rcv_indication_size, 0x80, 0x20, true, 0xe36e0783fa8b4d50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TCP_OFFLOAD_STATE_CACHED.KaProbeCount", ka_probe_count, 0xa0, 0x8, true, 0x9b8a23e602f1537b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_CACHED.KaTimeout", ka_timeout, 0xc0, 0x20, true, 0xc762d0e0d3cafef4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_CACHED.KaInterval", ka_interval, 0xe0, 0x20, true, 0x641df1861fc2252b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_CACHED.MaxRT", max_rt, 0x100, 0x20, true, 0x7f0c2807012f6b7)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_TCP_OFFLOAD_STATE_CACHED.FlowLabel", flow_label, 0x120, 0x14, true, 0xab4f61bf8d51777b, 20, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TCP_OFFLOAD_STATE_CACHED.TtlOrHopLimit", ttl_or_hop_limit, 0x140, 0x8, true, 0xdc46f8e1ef7f7ccd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TCP_OFFLOAD_STATE_CACHED.TosOrTrafficClass", tos_or_traffic_class, 0x148, 0x8, true, 0x9d598eff7514866a)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_TCP_OFFLOAD_STATE_CACHED.UserPriority", user_priority, 0x150, 0x3, true, 0x70f20a6b2b290310, 3, uint8_t)
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
#endif