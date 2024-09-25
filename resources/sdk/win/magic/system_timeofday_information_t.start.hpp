#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_TIMEOFDAY_INFORMATION.BootTime", boot_time, 0x0, 0x40, true, 0x6b28a0b7408fa4dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_TIMEOFDAY_INFORMATION.CurrentTime", current_time, 0x40, 0x40, true, 0x72d97c320eae91ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_TIMEOFDAY_INFORMATION.TimeZoneBias", time_zone_bias, 0x80, 0x40, true, 0xbdbabd64b53bd2a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_TIMEOFDAY_INFORMATION.TimeZoneId", time_zone_id, 0xc0, 0x20, true, 0x6538dc2ff579c6d9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_TIMEOFDAY_INFORMATION.BootTimeBias", boot_time_bias, 0x100, 0x40, true, 0x367d2e361430a4ed)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_TIMEOFDAY_INFORMATION.SleepTimeBias", sleep_time_bias, 0x140, 0x40, true, 0xe7716f464d6e43e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif