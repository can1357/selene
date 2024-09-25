#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_STATUS.ACLineStatus", ac_line_status, 0x0, 0x8, true, 0x35b079df285f5488)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_STATUS.BatteryFlag", battery_flag, 0x8, 0x8, true, 0x1e8e365d48f00863)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_STATUS.BatteryLifePercent", battery_life_percent, 0x10, 0x8, true, 0x8ceeba9c7bab45fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_STATUS.SystemStatusFlag", system_status_flag, 0x18, 0x8, true, 0x679b1f70ebf1726f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_STATUS.BatteryLifeTime", battery_life_time, 0x20, 0x20, true, 0xc98dd3747e9f5b5a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_STATUS.BatteryFullLifeTime", battery_full_life_time, 0x40, 0x20, true, 0x44b20e131217f6ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif