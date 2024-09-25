#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::header_t), "_EVENT_TRACE.Header", header, 0x0, 0x80, true, 0x8d403fa2c91c20af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE.InstanceId", instance_id, 0x180, 0x20, true, 0x78ce448a40ca05f3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE.ParentInstanceId", parent_instance_id, 0x1a0, 0x20, true, 0xc1623df61d6ee40d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EVENT_TRACE.ParentGuid", parent_guid, 0x1c0, 0x80, true, 0xe752ab27bdcf455f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EVENT_TRACE.MofData", mof_data, 0x240, 0x40, true, 0xd32244200f07168)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE.MofLength", mof_length, 0x280, 0x20, true, 0xd8ced522b748a088)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE.ClientContext", client_context, 0x2a0, 0x20, true, 0xf1c233733b7bd09e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::buffer_context_t), "_EVENT_TRACE.BufferContext", buffer_context, 0x2a0, 0x20, true, 0x3c900f1d1bc29d61)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif