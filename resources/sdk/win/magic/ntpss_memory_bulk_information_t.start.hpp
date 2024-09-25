#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTPSS_MEMORY_BULK_INFORMATION.QueryFlags", query_flags, 0x0, 0x20, true, 0xcb366cbf1f4de5b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NTPSS_MEMORY_BULK_INFORMATION.NumberOfEntries", number_of_entries, 0x20, 0x20, true, 0xdc1e7ab10a7622f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NTPSS_MEMORY_BULK_INFORMATION.NextValidAddress", next_valid_address, 0x40, 0x40, true, 0x4f0b7a56ae045cfb)
#else
#define _m00
#define _m01
#define _m02
#endif