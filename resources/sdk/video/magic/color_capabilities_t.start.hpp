#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_COLOR_CAPABILITIES.Length", length, 0x0, 0x20, true, 0xa3f61c2fb91f3996)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_COLOR_CAPABILITIES.AttributeFlags", attribute_flags, 0x20, 0x20, true, 0x3d665d883418ec25)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.RedPhosphoreDecay", red_phosphore_decay, 0x40, 0x20, true, 0xdc4159a2caab0692)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.GreenPhosphoreDecay", green_phosphore_decay, 0x60, 0x20, true, 0x7c3f96b811642f7e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.BluePhosphoreDecay", blue_phosphore_decay, 0x80, 0x20, true, 0xf4fd29475c725adb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.WhiteChromaticity_x", white_chromaticity_x, 0xa0, 0x20, true, 0xaa7b2235930d0ee)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.WhiteChromaticity_y", white_chromaticity_y, 0xc0, 0x20, true, 0x9f08cb2fba56f805)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.WhiteChromaticity_Y", white_chromaticity_y_, 0xe0, 0x20, true, 0x16fd211bc4c33680)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.RedChromaticity_x", red_chromaticity_x, 0x100, 0x20, true, 0x161fbf1cdec37e8d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.RedChromaticity_y", red_chromaticity_y, 0x120, 0x20, true, 0x941ad734e8fe3892)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.GreenChromaticity_x", green_chromaticity_x, 0x140, 0x20, true, 0x99a27cdfab2b8419)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.GreenChromaticity_y", green_chromaticity_y, 0x160, 0x20, true, 0x9e2e468299ffd10f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.BlueChromaticity_x", blue_chromaticity_x, 0x180, 0x20, true, 0x903588af4a635f59)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.BlueChromaticity_y", blue_chromaticity_y, 0x1a0, 0x20, true, 0x7849c5af895d9061)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.WhiteGamma", white_gamma, 0x1c0, 0x20, true, 0xa96590b1044c7e23)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.RedGamma", red_gamma, 0x1e0, 0x20, true, 0x6e8219a7b1d7a0f9)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.GreenGamma", green_gamma, 0x200, 0x20, true, 0x41fd10da271374e4)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VIDEO_COLOR_CAPABILITIES.BlueGamma", blue_gamma, 0x220, 0x20, true, 0x1484829ba2fec5f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif