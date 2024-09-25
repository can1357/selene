#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_TRACE_HEADER.Size", size, 0x0, 0x10, true, 0x84331b6cc5a90c81)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_TRACE_HEADER.FieldTypeFlags", field_type_flags, 0x10, 0x10, true, 0x5335cfca2029ead5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_HEADER.HeaderType", header_type, 0x10, 0x8, true, 0xf9c29de2ab89291e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_HEADER.MarkerFlags", marker_flags, 0x18, 0x8, true, 0xb3d7fa861ebff46d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_HEADER.Version", version, 0x20, 0x20, true, 0x8cc9ca52a3e19239)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_HEADER.Class.Type", type, 0x0, 0x8, true, 0x8afbe3d0751e7a5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_HEADER.Class.Level", level, 0x8, 0x8, true, 0xf7b05d571ad811b3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_TRACE_HEADER.Class.Version", version, 0x10, 0x10, true, 0x9e141c0a08c3bc86)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0__class_t), "_EVENT_TRACE_HEADER.Class", _class, 0x20, 0x20, true, 0x7ef7ab3897cb0ed7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_HEADER.ThreadId", thread_id, 0x40, 0x20, true, 0xcee6841373764d00)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_HEADER.ProcessId", process_id, 0x60, 0x20, true, 0xb8ac4f50bee1cf45)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EVENT_TRACE_HEADER.TimeStamp", time_stamp, 0x80, 0x40, true, 0xd972111de7c32fc3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EVENT_TRACE_HEADER.Guid", guid, 0xc0, 0x80, true, 0x5de0dd096d0bd131)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_HEADER.GuidPtr", guid_ptr, 0xc0, 0x40, true, 0xc9f63d69513f35a6)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_HEADER.KernelTime", kernel_time, 0x140, 0x20, true, 0x93f796faaa079cf2)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_HEADER.UserTime", user_time, 0x160, 0x20, true, 0xc191b01ab7e28e0e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_HEADER.ProcessorTime", processor_time, 0x140, 0x40, true, 0xc99df5476db6e92)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_HEADER.ClientContext", client_context, 0x140, 0x20, true, 0xddb57f222629268)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_HEADER.Flags", flags, 0x160, 0x20, true, 0xd6996ed2fdf52727)
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
#define _m17
#define _m18
#endif