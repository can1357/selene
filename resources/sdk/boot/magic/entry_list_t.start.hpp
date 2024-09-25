#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTRY_LIST.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x331edc1284b3538e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct boot::entry_t), "_BOOT_ENTRY_LIST.BootEntry", boot_entry, 0x20, 0x0, true, 0x44f4a8f49060dfa3)
#else
#define _m00
#define _m01
#endif