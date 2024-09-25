#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_TIME_ZONE_INFORMATION.Bias", bias, 0x0, 0x20, true, 0x2d5f76e94ff73950)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_RTL_TIME_ZONE_INFORMATION.StandardName", standard_name, 0x20, 0x0, true, 0xec9f56ee31427dc6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::time_fields_t), "_RTL_TIME_ZONE_INFORMATION.StandardStart", standard_start, 0x220, 0x80, true, 0x5532ed3f68be2866)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_TIME_ZONE_INFORMATION.StandardBias", standard_bias, 0x2a0, 0x20, true, 0xeff2ccebce99f34)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_RTL_TIME_ZONE_INFORMATION.DaylightName", daylight_name, 0x2c0, 0x0, true, 0xbb6a69efd681e773)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::time_fields_t), "_RTL_TIME_ZONE_INFORMATION.DaylightStart", daylight_start, 0x4c0, 0x80, true, 0x52e0994a6e4fc613)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_TIME_ZONE_INFORMATION.DaylightBias", daylight_bias, 0x540, 0x20, true, 0x6675339e28dae75d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif