#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_HEADER.Size", size, 0x0, 0x10, true, 0x746d57fa4b5d1d8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_HEADER.HeaderType", header_type, 0x10, 0x10, true, 0xa15bf1e9b2dffa5c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_HEADER.Flags", flags, 0x20, 0x10, true, 0x51cb3bd46d467703)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_HEADER.EventProperty", event_property, 0x30, 0x10, true, 0x95000d0666f9687a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_HEADER.ThreadId", thread_id, 0x40, 0x20, true, 0x6f0835f4f0d17540)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_HEADER.ProcessId", process_id, 0x60, 0x20, true, 0x6bb42d750e39f81d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EVENT_HEADER.TimeStamp", time_stamp, 0x80, 0x40, true, 0xfa982c13c313c959)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EVENT_HEADER.ProviderId", provider_id, 0xc0, 0x80, true, 0xc717fa848b41906)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_descriptor_t), "_EVENT_HEADER.EventDescriptor", event_descriptor, 0x140, 0x80, true, 0xf8c31bd610115f4a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_HEADER.KernelTime", kernel_time, 0x1c0, 0x20, true, 0xded1bab61c31af6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_HEADER.UserTime", user_time, 0x1e0, 0x20, true, 0x6ab6824dc121c2c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_HEADER.ProcessorTime", processor_time, 0x1c0, 0x40, true, 0x31a714404ec43d06)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EVENT_HEADER.ActivityId", activity_id, 0x200, 0x80, true, 0x58d11d9dd7ced7f2)
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
#endif