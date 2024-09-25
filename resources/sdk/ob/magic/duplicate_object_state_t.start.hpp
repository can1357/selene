#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_OB_DUPLICATE_OBJECT_STATE.SourceProcess", source_process, 0x0, 0x40, true, 0x72691574d7385524)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OB_DUPLICATE_OBJECT_STATE.SourceHandle", source_handle, 0x40, 0x40, true, 0x66678c67727a5219)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OB_DUPLICATE_OBJECT_STATE.Object", object, 0x80, 0x40, true, 0x183e9fa2130b9e72)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_DUPLICATE_OBJECT_STATE.TargetAccess", target_access, 0xc0, 0x20, true, 0xbda60fc06d402e2b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::handle_table_entry_info_t), "_OB_DUPLICATE_OBJECT_STATE.ObjectInfo", object_info, 0xe0, 0x40, true, 0xf74ca39d1a1261d1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_DUPLICATE_OBJECT_STATE.HandleAttributes", handle_attributes, 0x120, 0x20, true, 0x8f86b2f0d6c3334a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif