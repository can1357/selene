#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PANEL_GET_BACKLIGHT_REDUCTION.BacklightUsersetting", backlight_usersetting, 0x0, 0x10, true, 0x219e09c63f49797e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PANEL_GET_BACKLIGHT_REDUCTION.BacklightEffective", backlight_effective, 0x10, 0x10, true, 0x5c0ffe894a43b872)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::backlight_reduction_gamma_ramp_t), "_PANEL_GET_BACKLIGHT_REDUCTION.GammaRamp", gamma_ramp, 0x20, 0x0, true, 0x87b053bc20faa7f3)
#else
#define _m00
#define _m01
#define _m02
#endif