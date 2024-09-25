#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDPC_WATCHDOG_INFORMATION.DpcTimeLimit", dpc_time_limit, 0x0, 0x20, true, 0x5703383bd1e9b8ec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDPC_WATCHDOG_INFORMATION.DpcTimeCount", dpc_time_count, 0x20, 0x20, true, 0x7f90c6eba6af5c02)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDPC_WATCHDOG_INFORMATION.DpcWatchdogLimit", dpc_watchdog_limit, 0x40, 0x20, true, 0xdb348d7e83be8c6f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KDPC_WATCHDOG_INFORMATION.DpcWatchdogCount", dpc_watchdog_count, 0x60, 0x20, true, 0x40208a6202f15ee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif