#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COUNTERS.GuidCount", guid_count, 0x0, 0x20, true, 0x5f5f92b7146989a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 2>), "_ETW_COUNTERS.PoolUsage", pool_usage, 0x20, 0x40, true, 0xcf7b27ea35686ee4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_COUNTERS.SessionCount", session_count, 0x60, 0x20, true, 0xd04e82ffb3213034)
#else
#define _m00
#define _m01
#define _m02
#endif