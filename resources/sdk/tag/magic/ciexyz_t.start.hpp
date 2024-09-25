#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagCIEXYZ.ciexyzX", ciexyz_x, 0x0, 0x20, true, 0xe6ccf8b7f2afb00c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagCIEXYZ.ciexyzY", ciexyz_y, 0x20, 0x20, true, 0x540abcf3b0da6d2d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagCIEXYZ.ciexyzZ", ciexyz_z, 0x40, 0x20, true, 0xf5788c9a3bd3d0e5)
#else
#define _m00
#define _m01
#define _m02
#endif