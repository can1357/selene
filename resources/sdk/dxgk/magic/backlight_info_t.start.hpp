#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_BACKLIGHT_INFO.BacklightUsersetting", backlight_usersetting, 0x0, 0x10, true, 0x5fe0dfc21b2ba441)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_BACKLIGHT_INFO.BacklightEffective", backlight_effective, 0x10, 0x10, true, 0xe82b90d5923f088d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::gamma_ramp_rgb256x3x16_t), "_DXGK_BACKLIGHT_INFO.GammaRamp", gamma_ramp, 0x20, 0x0, true, 0x5a1db9e1b455c59f)
#else
#define _m00
#define _m01
#define _m02
#endif