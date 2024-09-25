#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_BRIGHTNESS_STATE.SmoothBrightness", smooth_brightness, 0x0, 0x1, true, 0xf4841192a076505e, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BRIGHTNESS_STATE.Value", value, 0x0, 0x20, true, 0xadbeac8372fa2a1)
#else
#define _m00
#define _m01
#endif