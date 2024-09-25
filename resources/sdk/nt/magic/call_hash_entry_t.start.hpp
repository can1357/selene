#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CALL_HASH_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0x43ed42a30f18cee3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CALL_HASH_ENTRY.CallersAddress", callers_address, 0x80, 0x40, true, 0x9da97a813b661b00)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CALL_HASH_ENTRY.CallersCaller", callers_caller, 0xc0, 0x40, true, 0x1cd2880dc5634895)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CALL_HASH_ENTRY.CallCount", call_count, 0x100, 0x20, true, 0xd71480a981fa38ec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif