#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Version", version, 0x0, 0x0, false, 0x560576fe9be74b49, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.AllFlags", all_flags, 0x0, 0x0, false, 0x6452922724a88347, 24, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.Dummy", dummy, 0x0, 0x0, false, 0x5156c3aecd97d065, 8, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.SingleDpcTimeLimitPresent", single_dpc_time_limit_present, 0x0, 0x0, false, 0x56bb665e798733f0, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.CumulativeDpcTimeLimitPresent", cumulative_dpc_time_limit_present, 0x0, 0x0, false, 0x48ddf05b5e3b8cf2, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.SingleDpcSoftTimeLimitPresent", single_dpc_soft_time_limit_present, 0x0, 0x0, false, 0xe369b325acab41d4, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.CumulativeDpcSoftTimeLimitPresent", cumulative_dpc_soft_time_limit_present, 0x0, 0x0, false, 0x6320b4a88443277b, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.SingleDpcProfileThresholdPresent", single_dpc_profile_threshold_present, 0x0, 0x0, false, 0xdd73ca8b502dbce4, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.CumulativeDpcProfileThresholdPresent", cumulative_dpc_profile_threshold_present, 0x0, 0x0, false, 0xa62e73d30cd70c5c, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags.ProfileBufferSizePresent", profile_buffer_size_present, 0x0, 0x0, false, 0x299d9a77e6af22ee, 1, uint32_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.Flags", flags, 0x0, 0x0, false, 0xe5dd4e6216fd84de)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.SingleDpcTimeLimitMs", single_dpc_time_limit_ms, 0x0, 0x0, false, 0x65b4a161ede6ac63)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.CumulativeDpcTimeLimitMs", cumulative_dpc_time_limit_ms, 0x0, 0x0, false, 0x370ec3cea7522962)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.SingleDpcSoftTimeLimitMs", single_dpc_soft_time_limit_ms, 0x0, 0x0, false, 0xff2d0f176cc11353)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.CumulativeDpcSoftTimeLimitMs", cumulative_dpc_soft_time_limit_ms, 0x0, 0x0, false, 0xcef28f0777487778)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.SingleDpcProfileThresholdMs", single_dpc_profile_threshold_ms, 0x0, 0x0, false, 0xde27235553559141)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.CumulativeDpcProfileThresholdMs", cumulative_dpc_profile_threshold_ms, 0x0, 0x0, false, 0xbb8cb50454828c7)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2.ProfileBufferSizeBytes", profile_buffer_size_bytes, 0x0, 0x0, false, 0x7ecb9d4a404409e5)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif