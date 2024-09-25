#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_entry_t), "_SEP_CACHED_HANDLES_ENTRY.HashEntry", hash_entry, 0x0, 0xc0, true, 0x5adb3785c232b4c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SEP_CACHED_HANDLES_ENTRY.ReferenceCount", reference_count, 0xc0, 0x40, true, 0x1e53eb35a9297193)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::cached_handles_entry_descriptor_t), "_SEP_CACHED_HANDLES_ENTRY.EntryDescriptor", entry_descriptor, 0x100, 0xc0, true, 0xa77bbcd7533672e9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEP_CACHED_HANDLES_ENTRY.HandleCount", handle_count, 0x1c0, 0x20, true, 0x7a778b51123c4130)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_SEP_CACHED_HANDLES_ENTRY.Handles", handles, 0x200, 0x40, true, 0xdeb83a5d144ee74e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif