#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_TRACE_HEADER.Marker", marker, 0x0, 0x20, true, 0xac1e57fca55ad487)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_TRACE_HEADER.Version", version, 0x0, 0x10, true, 0xfb3e7c05fa166340)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_TRACE_HEADER.HeaderType", header_type, 0x10, 0x8, true, 0xda2be7d67c52fab4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_TRACE_HEADER.Flags", flags, 0x18, 0x8, true, 0xd7f245c185d57ead)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_TRACE_HEADER.Header", header, 0x20, 0x20, true, 0x14ef98cc9324a014)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::trace_packet_t), "_SYSTEM_TRACE_HEADER.Packet", packet, 0x20, 0x20, true, 0x6856a34a8e13b3ed)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_TRACE_HEADER.ThreadId", thread_id, 0x40, 0x20, true, 0x64836b3b348b118)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_TRACE_HEADER.ProcessId", process_id, 0x60, 0x20, true, 0x5232a2ad74f9c32b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_TRACE_HEADER.SystemTime", system_time, 0x80, 0x40, true, 0xd5a616e68023a772)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_TRACE_HEADER.KernelTime", kernel_time, 0xc0, 0x20, true, 0xa0633a6ac700168d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_TRACE_HEADER.UserTime", user_time, 0xe0, 0x20, true, 0xf90efd3a2a35b7)
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
#endif