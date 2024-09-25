#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO.UniqueProcessId", unique_process_id, 0x0, 0x10, true, 0x6e94d75ada4782d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO.CreatorBackTraceIndex", creator_back_trace_index, 0x10, 0x10, true, 0xf72468fdcc9cd02f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO.ObjectTypeIndex", object_type_index, 0x20, 0x8, true, 0xeadeb8d9e0996b22)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO.HandleAttributes", handle_attributes, 0x28, 0x8, true, 0x48030f541b69cfde)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO.HandleValue", handle_value, 0x30, 0x10, true, 0x93c906c022e046bb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO.Object", object, 0x40, 0x40, true, 0x6c400b1649a62de6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_HANDLE_TABLE_ENTRY_INFO.GrantedAccess", granted_access, 0x80, 0x20, true, 0x39a68a5a3bd9587f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif