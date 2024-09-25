#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_TRIVERTEX.x", x, 0x0, 0x20, true, 0x5486aefee1fe86ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_TRIVERTEX.y", y, 0x20, 0x20, true, 0x1de02f9faafb3f8b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRIVERTEX.Red", red, 0x40, 0x10, true, 0x9a946aab747c0ae7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRIVERTEX.Green", green, 0x50, 0x10, true, 0x987228809fd5613f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRIVERTEX.Blue", blue, 0x60, 0x10, true, 0xaf97e94c24bec6e6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRIVERTEX.Alpha", alpha, 0x70, 0x10, true, 0xb127c6dd0e4fa416)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif