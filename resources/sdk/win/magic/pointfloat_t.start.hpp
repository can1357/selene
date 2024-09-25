#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_POINTFLOAT.x", x, 0x0, 0x20, true, 0xfdbb2e0c1028ee56)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_POINTFLOAT.y", y, 0x20, 0x20, true, 0xdfbb9a4017f85102)
#else
#define _m00
#define _m01
#endif