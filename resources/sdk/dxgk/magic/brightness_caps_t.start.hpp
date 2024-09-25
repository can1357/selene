#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_BRIGHTNESS_CAPS.SmoothBrightness", smooth_brightness, 0x0, 0x1, true, 0xf80a2d6738c0a06b, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_BRIGHTNESS_CAPS.AdaptiveBrightness", adaptive_brightness, 0x1, 0x1, true, 0x12976bddaeb8bbe6, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_BRIGHTNESS_CAPS.NitsBrightness", nits_brightness, 0x2, 0x1, true, 0x6d8625492f36a5dc, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_CAPS.Value", value, 0x0, 0x20, true, 0x407c1e3fb3b7ef0c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif