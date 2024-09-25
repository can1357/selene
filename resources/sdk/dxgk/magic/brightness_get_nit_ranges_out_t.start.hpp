#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT.NormalRangeCount", normal_range_count, 0x0, 0x20, true, 0xc5accd35df2d65c5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT.RangeCount", range_count, 0x20, 0x20, true, 0x378052f381a75aeb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT.PreferredMaximumBrightness", preferred_maximum_brightness, 0x40, 0x20, true, 0x79ef8f4a55e6da12)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::brightness_nit_range_t, 16>), "_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT.SupportedRanges", supported_ranges, 0x60, 0x0, true, 0x209128fe30ce7045)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif