#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DFSS_START_NEW_INTERVAL.CurrentGeneration", current_generation, 0x0, 0x20, true, 0x510f4f0dad698f3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_DFSS_START_NEW_INTERVAL.SessionCount", session_count, 0x20, 0x20, true, 0xceb4e7179058079f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DFSS_START_NEW_INTERVAL.TotalCycleCredit", total_cycle_credit, 0x40, 0x40, true, 0xfd2b8e9f5235291b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_DFSS_START_NEW_INTERVAL.TotalCyclesAccumulated", total_cycles_accumulated, 0x80, 0x40, true, 0xb9260b003ba6f78c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct etw::per_session_quota_t, 1>), "_ETW_DFSS_START_NEW_INTERVAL.SessionQuota", session_quota, 0xc0, 0xc0, true, 0x26935a22edf0dc7b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif