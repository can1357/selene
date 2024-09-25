#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RESOURCE_HASH_ENTRY.ListEntry", list_entry, 0x0, 0x80, true, 0xbe7c4755488850b4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RESOURCE_HASH_ENTRY.Address", address, 0x80, 0x40, true, 0xe42a66d8612aa0f0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_HASH_ENTRY.ContentionCount", contention_count, 0xc0, 0x20, true, 0xb8853906ae0b1622)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RESOURCE_HASH_ENTRY.Number", number, 0xe0, 0x20, true, 0x85b9f91ddecefa1f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif