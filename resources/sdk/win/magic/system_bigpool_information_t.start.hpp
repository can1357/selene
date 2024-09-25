#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BIGPOOL_INFORMATION.Count", count, 0x0, 0x20, true, 0xfe8633e2bef8c3cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_bigpool_entry_t, 1>), "_SYSTEM_BIGPOOL_INFORMATION.AllocatedInfo", allocated_info, 0x40, 0xc0, true, 0x97a929010827e51f)
#else
#define _m00
#define _m01
#endif