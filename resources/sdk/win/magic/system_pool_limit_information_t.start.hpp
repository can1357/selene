#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOL_LIMIT_INFORMATION.Version", version, 0x0, 0x0, false, 0xd59a088aca6ce623)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOL_LIMIT_INFORMATION.EntryCount", entry_count, 0x0, 0x0, false, 0x3a55e1ad9a60e742)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_pool_limit_info_t, 1>), "_SYSTEM_POOL_LIMIT_INFORMATION.LimitEntries", limit_entries, 0x0, 0x0, false, 0x8a9eeb7b48a164c9)
#else
#define _m00
#define _m01
#define _m02
#endif