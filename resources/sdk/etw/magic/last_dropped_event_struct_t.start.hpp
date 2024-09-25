#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_LAST_DROPPED_EVENT_STRUCT.Count", count, 0x0, 0x20, true, 0xf5a9bd1a378935d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 1>), "_ETW_LAST_DROPPED_EVENT_STRUCT.Times", times, 0x40, 0x40, true, 0x3ee6452b381fa58)
#else
#define _m00
#define _m01
#endif