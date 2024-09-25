#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_REF_CLOCK.StartTime", start_time, 0x0, 0x40, true, 0xf67f4cdd9dd42182)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_REF_CLOCK.StartPerfClock", start_perf_clock, 0x40, 0x40, true, 0xc989030d4e64bbec)
#else
#define _m00
#define _m01
#endif