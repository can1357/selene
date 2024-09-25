#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_POOL_INFORMATION.TotalSize", total_size, 0x0, 0x40, true, 0x143847f8a2f61c68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_POOL_INFORMATION.FirstEntry", first_entry, 0x40, 0x40, true, 0xd3e8a4edf5d35158)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_POOL_INFORMATION.EntryOverhead", entry_overhead, 0x80, 0x10, true, 0x411473086ead6dbd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POOL_INFORMATION.PoolTagPresent", pool_tag_present, 0x90, 0x8, true, 0xfdb09b6d8435e4b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOL_INFORMATION.NumberOfEntries", number_of_entries, 0xa0, 0x20, true, 0xf220c99cf97155cf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_pool_entry_t, 1>), "_SYSTEM_POOL_INFORMATION.Entries", entries, 0xc0, 0x80, true, 0xe3cbccef49e49618)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif