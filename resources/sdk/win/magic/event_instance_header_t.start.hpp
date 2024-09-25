#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_INSTANCE_HEADER.Size", size, 0x0, 0x10, true, 0x9ac50c9812acd19e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_INSTANCE_HEADER.FieldTypeFlags", field_type_flags, 0x10, 0x10, true, 0x595117c9446fa6d1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_INSTANCE_HEADER.HeaderType", header_type, 0x10, 0x8, true, 0x268f47fc755342b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_INSTANCE_HEADER.MarkerFlags", marker_flags, 0x18, 0x8, true, 0x4ab17dd52400d7af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.Version", version, 0x20, 0x20, true, 0xd03bfc027b8958cb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_INSTANCE_HEADER.Class.Type", type, 0x0, 0x8, true, 0x1c2c8fb17ad9d239)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_INSTANCE_HEADER.Class.Level", level, 0x8, 0x8, true, 0x4012c4a58b785d6c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_INSTANCE_HEADER.Class.Version", version, 0x10, 0x10, true, 0xfb8c12f64ebcbc4e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0__class_t), "_EVENT_INSTANCE_HEADER.Class", _class, 0x20, 0x20, true, 0x8c8512d7718c7460)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.ThreadId", thread_id, 0x40, 0x20, true, 0x920b056fbefbb18a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.ProcessId", process_id, 0x60, 0x20, true, 0xae118d1fc9fe1119)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EVENT_INSTANCE_HEADER.TimeStamp", time_stamp, 0x80, 0x40, true, 0x55b561bb8ab165df)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_INSTANCE_HEADER.RegHandle", reg_handle, 0xc0, 0x40, true, 0x37f63060a8b480ba)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.InstanceId", instance_id, 0x100, 0x20, true, 0x42391ed32fc6874d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.ParentInstanceId", parent_instance_id, 0x120, 0x20, true, 0xfd8abb743cfa5296)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.KernelTime", kernel_time, 0x140, 0x20, true, 0x5448c7d78a5a66d0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.UserTime", user_time, 0x160, 0x20, true, 0xc793bb1922487d62)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_INSTANCE_HEADER.ProcessorTime", processor_time, 0x140, 0x40, true, 0xbff0de7dd64f3b85)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.EventId", event_id, 0x140, 0x20, true, 0xec4491023b86b8f4)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_HEADER.Flags", flags, 0x160, 0x20, true, 0x7bdc547851efc714)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_INSTANCE_HEADER.ParentRegHandle", parent_reg_handle, 0x180, 0x40, true, 0xa069725072c2461a)
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
#define _m19
#define _m20
#endif