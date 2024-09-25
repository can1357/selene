#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagXFORM.eM11", e_m11, 0x0, 0x20, true, 0x7805d95cf745eb72)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagXFORM.eM12", e_m12, 0x20, 0x20, true, 0xfbc5a75ee1a7bf92)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagXFORM.eM21", e_m21, 0x40, 0x20, true, 0x4a52bf2bdbf50405)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagXFORM.eM22", e_m22, 0x60, 0x20, true, 0x521e1e26855e9dc4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagXFORM.eDx", e_dx, 0x80, 0x20, true, 0x2a285f9832b3521f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagXFORM.eDy", e_dy, 0xa0, 0x20, true, 0x8a7747ddce1a80e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif