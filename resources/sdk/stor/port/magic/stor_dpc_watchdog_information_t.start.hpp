#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_DPC_WATCHDOG_INFORMATION.DpcTimeLimit", dpc_time_limit, 0x0, 0x0, false, 0xee57fa6119d6788f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_DPC_WATCHDOG_INFORMATION.DpcTimeCount", dpc_time_count, 0x0, 0x0, false, 0x645725a8a1c9ff62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_DPC_WATCHDOG_INFORMATION.DpcWatchdogLimit", dpc_watchdog_limit, 0x0, 0x0, false, 0x528b9478187f6081)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_DPC_WATCHDOG_INFORMATION.DpcWatchdogCount", dpc_watchdog_count, 0x0, 0x0, false, 0x2ea96b59682ec766)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif