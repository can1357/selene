#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.Version", version, 0x0, 0x0, false, 0xacea9b7e27f81ab1, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.AllFlags", all_flags, 0x0, 0x0, false, 0xcec963f782b0df55, 24, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.Flags.Dummy", dummy, 0x0, 0x0, false, 0x979ef9bfb248f02d, 8, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.Flags.SingleDpcTimeLimitPresent", single_dpc_time_limit_present, 0x0, 0x0, false, 0xd172afc49e1ee681, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.Flags.CumulativeDpcTimeLimitPresent", cumulative_dpc_time_limit_present, 0x0, 0x0, false, 0x4cf1a2ee58e0fb42, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.Flags.SingleDpcSoftTimeLimitPresent", single_dpc_soft_time_limit_present, 0x0, 0x0, false, 0x1456860a54194122, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.Flags.CumulativeDpcSoftTimeLimitPresent", cumulative_dpc_soft_time_limit_present, 0x0, 0x0, false, 0xa6af5e4d56ca7874, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.Flags", flags, 0x0, 0x0, false, 0xb6dae4c453b7fa55)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.SingleDpcTimeLimitMs", single_dpc_time_limit_ms, 0x0, 0x0, false, 0x71bc04c4b32e7750)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.CumulativeDpcTimeLimitMs", cumulative_dpc_time_limit_ms, 0x0, 0x0, false, 0x7a54ac4d37096b1f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.SingleDpcSoftTimeLimitMs", single_dpc_soft_time_limit_ms, 0x0, 0x0, false, 0x99cc3d7429eec7ce)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION.CumulativeDpcSoftTimeLimitMs", cumulative_dpc_soft_time_limit_ms, 0x0, 0x0, false, 0x109774629273f478)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif