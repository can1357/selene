#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_COORD.X", x, 0x0, 0x10, true, 0x2a1c95bdb7a4a70d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_COORD.Y", y, 0x10, 0x10, true, 0x7e78986601fcd502)
#else
#define _m00
#define _m01
#endif