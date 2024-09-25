#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_BATTERY_STATE.AcOnLine", ac_on_line, 0x0, 0x8, true, 0x5a1204f1804cb453)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_BATTERY_STATE.BatteryPresent", battery_present, 0x8, 0x8, true, 0xa8bf7cc92493c0cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_BATTERY_STATE.Charging", charging, 0x10, 0x8, true, 0xde6b00d74746822e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_BATTERY_STATE.Discharging", discharging, 0x18, 0x8, true, 0x8e3c0a3e6a62ed87)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SYSTEM_BATTERY_STATE.Tag", tag, 0x38, 0x8, true, 0x1d2f76bedb0672fc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SYSTEM_BATTERY_STATE.MaxCapacity", max_capacity, 0x40, 0x20, true, 0x32b63df3e073cf09)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SYSTEM_BATTERY_STATE.RemainingCapacity", remaining_capacity, 0x60, 0x20, true, 0x1118943d981b020f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SYSTEM_BATTERY_STATE.Rate", rate, 0x80, 0x20, true, 0xbf5511defbc96976)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SYSTEM_BATTERY_STATE.EstimatedTime", estimated_time, 0xa0, 0x20, true, 0xfe4347ba5742e666)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SYSTEM_BATTERY_STATE.DefaultAlert1", default_alert1, 0xc0, 0x20, true, 0xecdec7b67b54803b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SYSTEM_BATTERY_STATE.DefaultAlert2", default_alert2, 0xe0, 0x20, true, 0x49a3feed492b19ea)
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
#endif