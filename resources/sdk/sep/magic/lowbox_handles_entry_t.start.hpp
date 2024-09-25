#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_entry_t), "_SEP_LOWBOX_HANDLES_ENTRY.HashEntry", hash_entry, 0x0, 0x0, false, 0x1208a731080a7e3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SEP_LOWBOX_HANDLES_ENTRY.ReferenceCount", reference_count, 0x0, 0x0, false, 0x487ee2a662892147)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_LOWBOX_HANDLES_ENTRY.PackageSid", package_sid, 0x0, 0x0, false, 0x8b279ba02eb12a08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEP_LOWBOX_HANDLES_ENTRY.HandleCount", handle_count, 0x0, 0x0, false, 0x9006ca3021a2c124)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_SEP_LOWBOX_HANDLES_ENTRY.Handles", handles, 0x0, 0x0, false, 0x35405a6d6a6ff5fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif