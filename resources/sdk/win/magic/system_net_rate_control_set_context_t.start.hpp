#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(system_net_rate_control_context_header_t ), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.Header", header, 0x0, 0x80, true, 0xcb2f321a68dd8eca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.MaxBandwidth", max_bandwidth, 0x80, 0x40, true, 0x1db5beedb6edb70d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.ContainerId", container_id, 0xc0, 0x40, true, 0x5a3976c72ae8ec54)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.Flags", flags, 0x100, 0x20, true, 0x9fa361dfeb0952fa)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.Set", set, 0x100, 0x1, true, 0xdf3c9f10336fcf1b, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.Update", update, 0x101, 0x1, true, 0x296e6aeed3d7c524, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.Clear", clear, 0x102, 0x1, true, 0x5f2a366a07a0c5e1, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.DscpTagEnabled", dscp_tag_enabled, 0x103, 0x1, true, 0x8b08b5931f308c3, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.MaxBandwidthEnabled", max_bandwidth_enabled, 0x104, 0x1, true, 0xefdc9dc4e690b4d8, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_NET_RATE_CONTROL_SET_CONTEXT.DscpTag", dscp_tag, 0x120, 0x8, true, 0x9f258272acd4949c)
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