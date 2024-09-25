#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::backlight_optimization_level_t), "_PANEL_SET_BACKLIGHT_OPTIMIZATION.Level", level, 0x0, 0x20, true, 0x5bb3bd862415e2ec)
#else
#define _m00
#endif