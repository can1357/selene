#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_YIELD_PROCESSOR_INFORMATION.YieldReason", yield_reason, 0x0, 0x20, true, 0xd94a2a890ac7d899)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_YIELD_PROCESSOR_INFORMATION.DpcWatchdogCount", dpc_watchdog_count, 0x20, 0x20, true, 0xb53e4a1933102427)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_YIELD_PROCESSOR_INFORMATION.DpcTimeCount", dpc_time_count, 0x40, 0x20, true, 0x922c2d2ab7da0af0)
#else
#define _m00
#define _m01
#define _m02
#endif