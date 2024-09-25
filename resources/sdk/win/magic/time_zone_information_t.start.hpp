#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TIME_ZONE_INFORMATION.Bias", bias, 0x0, 0x20, true, 0x497831cd18a40ee2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_TIME_ZONE_INFORMATION.StandardName", standard_name, 0x20, 0x0, true, 0x651ba3d10456d721)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::systemtime_t), "_TIME_ZONE_INFORMATION.StandardDate", standard_date, 0x220, 0x80, true, 0xf4160006b98b8ee1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TIME_ZONE_INFORMATION.StandardBias", standard_bias, 0x2a0, 0x20, true, 0xc39636dd63b2964e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_TIME_ZONE_INFORMATION.DaylightName", daylight_name, 0x2c0, 0x0, true, 0xcc5d44d0fea5bad)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::systemtime_t), "_TIME_ZONE_INFORMATION.DaylightDate", daylight_date, 0x4c0, 0x80, true, 0x6de28a0ce7468eb3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TIME_ZONE_INFORMATION.DaylightBias", daylight_bias, 0x540, 0x20, true, 0x740272632ea1f39d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif