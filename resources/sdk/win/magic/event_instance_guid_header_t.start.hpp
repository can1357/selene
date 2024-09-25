#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_INSTANCE_GUID_HEADER.Size", size, 0x0, 0x10, true, 0xe34dd9c73e013dad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_INSTANCE_GUID_HEADER.FieldTypeFlags", field_type_flags, 0x10, 0x10, true, 0x150f74bf0d6b5bf4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_INSTANCE_GUID_HEADER.HeaderType", header_type, 0x10, 0x8, true, 0x62c60f768eabba07)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_INSTANCE_GUID_HEADER.MarkerFlags", marker_flags, 0x18, 0x8, true, 0xc20a0b90c18a404e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.Version", version, 0x20, 0x20, true, 0xbc94b299f9e8f338)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_INSTANCE_GUID_HEADER.Class.Type", type, 0x0, 0x8, true, 0xf44f441fb5c2cb07)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_INSTANCE_GUID_HEADER.Class.Level", level, 0x8, 0x8, true, 0x96b6e03b5b14cc6c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_INSTANCE_GUID_HEADER.Class.Version", version, 0x10, 0x10, true, 0xace85fc30b7f7f9f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0__class_t), "_EVENT_INSTANCE_GUID_HEADER.Class", _class, 0x20, 0x20, true, 0xb5ce197c31d11cd1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.ThreadId", thread_id, 0x40, 0x20, true, 0x75ac12125fb1727e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.ProcessId", process_id, 0x60, 0x20, true, 0x9652c2ead80502ab)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EVENT_INSTANCE_GUID_HEADER.TimeStamp", time_stamp, 0x80, 0x40, true, 0x475dbc3e9fd97e01)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EVENT_INSTANCE_GUID_HEADER.Guid", guid, 0xc0, 0x80, true, 0x9543edd8a83b6f6f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_INSTANCE_GUID_HEADER.GuidPtr", guid_ptr, 0xc0, 0x40, true, 0x4e492cf79ca9e4de)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.ClientContext", client_context, 0x140, 0x20, true, 0x4e4bdbc528811473)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.Flags", flags, 0x160, 0x20, true, 0x52f8d3f35c69652f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.KernelTime", kernel_time, 0x140, 0x20, true, 0xb2be02059bb535d4)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.UserTime", user_time, 0x160, 0x20, true, 0xc3b7bb6b962ecd20)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_INSTANCE_GUID_HEADER.ProcessorTime", processor_time, 0x140, 0x40, true, 0x95c95525a1fa7ff5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.InstanceId", instance_id, 0x180, 0x20, true, 0xf462acd6165a652b)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_INSTANCE_GUID_HEADER.ParentInstanceId", parent_instance_id, 0x1a0, 0x20, true, 0xa6928266844ce3fc)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EVENT_INSTANCE_GUID_HEADER.ParentGuid", parent_guid, 0x1c0, 0x80, true, 0x31f0e87c3c9f25bf)
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
#define _m21
#endif