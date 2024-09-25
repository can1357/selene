#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DCOLORVALUE.r", r, 0x0, 0x20, true, 0x57b6a5af191a6cd7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DCOLORVALUE.g", g, 0x20, 0x20, true, 0x59ba925eef508010)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DCOLORVALUE.b", b, 0x40, 0x20, true, 0x7db238f9babbd49)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DCOLORVALUE.a", a, 0x60, 0x20, true, 0xdf626b5abe84e2a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif