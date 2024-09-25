#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TIME_DYNAMIC_ZONE_INFORMATION.Bias", bias, 0x0, 0x20, true, 0x774cd47ef579fec7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_TIME_DYNAMIC_ZONE_INFORMATION.StandardName", standard_name, 0x20, 0x0, true, 0x4e2053f20db09ee1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::systemtime_t), "_TIME_DYNAMIC_ZONE_INFORMATION.StandardDate", standard_date, 0x220, 0x80, true, 0xbb8a93e64ed0502b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TIME_DYNAMIC_ZONE_INFORMATION.StandardBias", standard_bias, 0x2a0, 0x20, true, 0x5cad1fe3e8cdcbab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_TIME_DYNAMIC_ZONE_INFORMATION.DaylightName", daylight_name, 0x2c0, 0x0, true, 0xc808e0c9ddfe2b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::systemtime_t), "_TIME_DYNAMIC_ZONE_INFORMATION.DaylightDate", daylight_date, 0x4c0, 0x80, true, 0xd712c1524357cea8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TIME_DYNAMIC_ZONE_INFORMATION.DaylightBias", daylight_bias, 0x540, 0x20, true, 0x42bbec8a8c87a7a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_TIME_DYNAMIC_ZONE_INFORMATION.TimeZoneKeyName", time_zone_key_name, 0x560, 0x0, true, 0xd1ae811b61cde6ae)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TIME_DYNAMIC_ZONE_INFORMATION.DynamicDaylightTimeDisabled", dynamic_daylight_time_disabled, 0xd60, 0x8, true, 0x7af3f7bffe3e9ded)
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