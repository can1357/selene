#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_TRACE_HEADER.Marker", marker, 0x0, 0x20, true, 0xba80c540d8bf9c46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_TRACE_HEADER.Version", version, 0x0, 0x10, true, 0x378767991056d09c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_TRACE_HEADER.HeaderType", header_type, 0x10, 0x8, true, 0x595d13a390fd1882)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_TRACE_HEADER.Flags", flags, 0x18, 0x8, true, 0x7bcaf06d0952fb73)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_TRACE_HEADER.Header", header, 0x20, 0x20, true, 0x1a907b1fc7408db9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::trace_packet_t), "_PERFINFO_TRACE_HEADER.Packet", packet, 0x20, 0x20, true, 0xabdcd46383d4186d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_TRACE_HEADER.TS", ts, 0x40, 0x40, true, 0x33c327aa967f2001)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PERFINFO_TRACE_HEADER.SystemTime", system_time, 0x40, 0x40, true, 0x70bfff2b7e054e95)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_PERFINFO_TRACE_HEADER.Data", data, 0x80, 0x8, true, 0xb459e002385e419b)
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