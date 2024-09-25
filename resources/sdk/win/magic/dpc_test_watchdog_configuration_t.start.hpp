#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_TEST_WATCHDOG_CONFIGURATION.DpcProfilingBufferSize", dpc_profiling_buffer_size, 0x0, 0x0, false, 0x1d5fb312a8bc2f24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_TEST_WATCHDOG_CONFIGURATION.DpcTimeLimitTicks", dpc_time_limit_ticks, 0x0, 0x0, false, 0x763e7fd45a10cfcd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_TEST_WATCHDOG_CONFIGURATION.DpcWatchdogPeriodTicks", dpc_watchdog_period_ticks, 0x0, 0x0, false, 0xad836e22a43e6fc0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_TEST_WATCHDOG_CONFIGURATION.SingleDpcSoftTimeLimitTicks", single_dpc_soft_time_limit_ticks, 0x0, 0x0, false, 0x433cfdc196acd6e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_TEST_WATCHDOG_CONFIGURATION.CumulativeDpcSoftTimeLimitTicks", cumulative_dpc_soft_time_limit_ticks, 0x0, 0x0, false, 0x80b8857770a7b7cb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_TEST_WATCHDOG_CONFIGURATION.DpcWatchdogProfileSingleDpcThresholdTicks", dpc_watchdog_profile_single_dpc_threshold_ticks, 0x0, 0x0, false, 0xc2e7430e22f71eaa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPC_TEST_WATCHDOG_CONFIGURATION.DpcWatchdogProfileCumulativeDpcThresholdTicks", dpc_watchdog_profile_cumulative_dpc_threshold_ticks, 0x0, 0x0, false, 0x9b3987fcc81a07f5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_DPC_TEST_WATCHDOG_CONFIGURATION.DpcWatchdogProfile", dpc_watchdog_profile, 0x0, 0x0, false, 0xc29c7579957dac60)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif