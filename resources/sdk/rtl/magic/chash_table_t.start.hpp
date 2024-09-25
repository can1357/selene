#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::chash_entry_t*), "_RTL_CHASH_TABLE.Table", table, 0x0, 0x40, true, 0x4da652214cd13bb9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CHASH_TABLE.EntrySizeShift", entry_size_shift, 0x40, 0x20, true, 0x9f76404ba4e22494)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CHASH_TABLE.EntryMax", entry_max, 0x60, 0x20, true, 0x3495f78e08c7e268)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CHASH_TABLE.EntryCount", entry_count, 0x80, 0x20, true, 0x54a1d64bfc87a57)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif