#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_VIDEO_LUT_RGB256WORDS.Red", red, 0x0, 0x0, true, 0x38de7acdf029fc49)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_VIDEO_LUT_RGB256WORDS.Green", green, 0x1000, 0x0, true, 0xdb7c7fbf635033ff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 256>), "_VIDEO_LUT_RGB256WORDS.Blue", blue, 0x2000, 0x0, true, 0xc21127d2d273fa64)
#else
#define _m00
#define _m01
#define _m02
#endif