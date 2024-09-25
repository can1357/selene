#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_POLICY.Version", version, 0x0, 0x20, true, 0x3715a8ba736fc790)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_THERMAL_POLICY.WaitForUpdate", wait_for_update, 0x20, 0x8, true, 0xee0cbffbe04a718)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_THERMAL_POLICY.Hibernate", hibernate, 0x28, 0x8, true, 0xda13d5901355c61d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_THERMAL_POLICY.Critical", critical, 0x30, 0x8, true, 0xb054ef12b756c6a6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_THERMAL_POLICY.ThermalStandby", thermal_standby, 0x38, 0x8, true, 0x8784829499377f29)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_POLICY.ActivationReasons", activation_reasons, 0x40, 0x20, true, 0x194b0d5c4d9464cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_POLICY.PassiveLimit", passive_limit, 0x60, 0x20, true, 0xf59763e06e27c5e5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_POLICY.ActiveLevel", active_level, 0x80, 0x20, true, 0x91100b1fb7f68a0c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_THERMAL_POLICY.OverThrottled", over_throttled, 0xa0, 0x8, true, 0x1a6f6e273543f497)
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
#endif