#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_EXTENDED_ITEM_INSTANCE.InstanceId", instance_id, 0x0, 0x20, true, 0x41548819a5db0978)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_EXTENDED_ITEM_INSTANCE.ParentInstanceId", parent_instance_id, 0x20, 0x20, true, 0xd2e3988f66416187)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_EVENT_EXTENDED_ITEM_INSTANCE.ParentGuid", parent_guid, 0x40, 0x80, true, 0x4d51e0386dd46e4e)
#else
#define _m00
#define _m01
#define _m02
#endif