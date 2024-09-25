#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "BRIGHTNESS_NIT_RANGES.NormalRangeCount", normal_range_count, 0x0, 0x20, true, 0x9a8c683884144ab1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "BRIGHTNESS_NIT_RANGES.RangeCount", range_count, 0x20, 0x20, true, 0x44ff530e20b17c20)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "BRIGHTNESS_NIT_RANGES.PreferredMaximumBrightness", preferred_maximum_brightness, 0x40, 0x20, true, 0x745fbe22f2c4c702)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::brightness_nit_range_t, 16>), "BRIGHTNESS_NIT_RANGES.SupportedRanges", supported_ranges, 0x60, 0x0, true, 0x2cb8c9f64fc934aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif