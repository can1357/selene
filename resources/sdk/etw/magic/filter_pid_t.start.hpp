#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_FILTER_PID.Count", count, 0x0, 0x20, true, 0xc0fbc4c0da1e95ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_ETW_FILTER_PID.Pids", pids, 0x20, 0x0, true, 0x1a31972cb2c6dce0)
#else
#define _m00
#define _m01
#endif