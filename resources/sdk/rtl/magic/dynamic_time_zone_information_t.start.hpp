#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::time_zone_information_t), "_RTL_DYNAMIC_TIME_ZONE_INFORMATION.tzi", tzi, 0x0, 0x60, true, 0xc8c11252a772bacd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_RTL_DYNAMIC_TIME_ZONE_INFORMATION.TimeZoneKeyName", time_zone_key_name, 0x560, 0x0, true, 0xb58b218401608305)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_DYNAMIC_TIME_ZONE_INFORMATION.DynamicDaylightTimeDisabled", dynamic_daylight_time_disabled, 0xd60, 0x8, true, 0xa77b0c53572de3f2)
#else
#define _m00
#define _m01
#define _m02
#endif