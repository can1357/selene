#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_CLUTDATA.Red", red, 0x0, 0x8, true, 0xb66b702d27a560c3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_CLUTDATA.Green", green, 0x8, 0x8, true, 0xf8a98830ea06580b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_CLUTDATA.Blue", blue, 0x10, 0x8, true, 0x515d0ad06c93c43d)
#else
#define _m00
#define _m01
#define _m02
#endif