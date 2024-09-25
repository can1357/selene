#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PANEL_SET_BRIGHTNESS_STATE.Smooth", smooth, 0x0, 0x1, true, 0xa433e323e1418d13, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PANEL_SET_BRIGHTNESS_STATE.Value", value, 0x0, 0x20, true, 0x57b7dd0039fa4da)
#else
#define _m00
#define _m01
#endif