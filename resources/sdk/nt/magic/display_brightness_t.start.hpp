#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPLAY_BRIGHTNESS.ucDisplayPolicy", uc_display_policy, 0x0, 0x8, true, 0xf24e1c9022cf50a0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPLAY_BRIGHTNESS.ucACBrightness", uc_ac_brightness, 0x8, 0x8, true, 0x7daa3b1d3d2d2c9c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPLAY_BRIGHTNESS.ucDCBrightness", uc_dc_brightness, 0x10, 0x8, true, 0x62d69a12ba344fa2)
#else
#define _m00
#define _m01
#define _m02
#endif