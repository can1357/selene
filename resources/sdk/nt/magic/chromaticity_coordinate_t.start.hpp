#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_CHROMATICITY_COORDINATE.x", x, 0x0, 0x20, true, 0xafcb81b127dc6472)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_CHROMATICITY_COORDINATE.y", y, 0x20, 0x20, true, 0x7fd3ef70a48441a5)
#else
#define _m00
#define _m01
#endif