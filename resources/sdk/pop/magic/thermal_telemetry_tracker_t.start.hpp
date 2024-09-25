#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_TELEMETRY_TRACKER.AccountingDisabled", accounting_disabled, 0x0, 0x8, true, 0x62a71600aa64496e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_TELEMETRY_TRACKER.LastPassiveUpdateTime", last_passive_update_time, 0x40, 0x40, true, 0x2a6d1c47a8a9162f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 21>), "_POP_THERMAL_TELEMETRY_TRACKER.TotalPassiveTime", total_passive_time, 0xc0, 0x40, true, 0xa68226074f5b4522)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 21>), "_POP_THERMAL_TELEMETRY_TRACKER.PassiveTimeSnap", passive_time_snap, 0x600, 0x40, true, 0x295f78b5d113adc0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_THERMAL_TELEMETRY_TRACKER.ActiveLevels", active_levels, 0x8, 0x8, true, 0xcba91d99efcbf84d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_TELEMETRY_TRACKER.LastActiveUpdateTime", last_active_update_time, 0x80, 0x40, true, 0x249865f6b089547b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 10>), "_POP_THERMAL_TELEMETRY_TRACKER.TotalActiveTime", total_active_time, 0xb40, 0x80, true, 0x6df9af495d534069)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 10>), "_POP_THERMAL_TELEMETRY_TRACKER.ActiveTimeSnap", active_time_snap, 0xdc0, 0x80, true, 0x6f1af04368387839)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_TELEMETRY_TRACKER.TotalTime", total_time, 0x1040, 0x40, true, 0xd902da871ac97b40)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_THERMAL_TELEMETRY_TRACKER.TotalTimeSnap", total_time_snap, 0x1080, 0x40, true, 0x2e3c0d80f306a3b5)
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
#endif