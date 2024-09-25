#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX.Object", object, 0x0, 0x40, true, 0xc1992b823ebaff9c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX.UniqueProcessId", unique_process_id, 0x40, 0x40, true, 0x74438979a76914a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX.HandleValue", handle_value, 0x80, 0x40, true, 0x270cb7dde22f507c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX.GrantedAccess", granted_access, 0xc0, 0x20, true, 0x3cecccba384e2ff7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX.CreatorBackTraceIndex", creator_back_trace_index, 0xe0, 0x10, true, 0xdb84f673630bb334)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX.ObjectTypeIndex", object_type_index, 0xf0, 0x10, true, 0xf8b38b7ca85e2d1e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX.HandleAttributes", handle_attributes, 0x100, 0x20, true, 0x4d907fd488cdcdd3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif