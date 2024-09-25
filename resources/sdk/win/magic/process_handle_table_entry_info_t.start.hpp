#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_HANDLE_TABLE_ENTRY_INFO.HandleValue", handle_value, 0x0, 0x40, true, 0x1f2b6d6655cfe09a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_HANDLE_TABLE_ENTRY_INFO.HandleCount", handle_count, 0x40, 0x40, true, 0x2707bb13037f429e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_HANDLE_TABLE_ENTRY_INFO.PointerCount", pointer_count, 0x80, 0x40, true, 0xee1b362d9d9ac4ec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_TABLE_ENTRY_INFO.GrantedAccess", granted_access, 0xc0, 0x20, true, 0x845a9ad7267962ff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_TABLE_ENTRY_INFO.ObjectTypeIndex", object_type_index, 0xe0, 0x20, true, 0x64281e80588ea383)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_TABLE_ENTRY_INFO.HandleAttributes", handle_attributes, 0x100, 0x20, true, 0x244bc0631029e81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif