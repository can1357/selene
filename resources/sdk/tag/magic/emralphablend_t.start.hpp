#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRALPHABLEND.emr", emr, 0x0, 0x40, true, 0xbe32fd28e57f963)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRALPHABLEND.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x19ecf2aae3456f40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRALPHABLEND.xDest", x_dest, 0xc0, 0x20, true, 0x28a0e6a8dd586690)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRALPHABLEND.yDest", y_dest, 0xe0, 0x20, true, 0xa6d4608b9c9dcfd9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRALPHABLEND.cxDest", cx_dest, 0x100, 0x20, true, 0x9ca7a0d14797eaf8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRALPHABLEND.cyDest", cy_dest, 0x120, 0x20, true, 0x650b14335f02e2c8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRALPHABLEND.dwRop", dw_rop, 0x140, 0x20, true, 0xf7b50ac555a4ccdc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRALPHABLEND.xSrc", x_src, 0x160, 0x20, true, 0xa16f0bf0a67752ff)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRALPHABLEND.ySrc", y_src, 0x180, 0x20, true, 0x6bf134f513eabf2a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::xform_t), "tagEMRALPHABLEND.xformSrc", xform_src, 0x1a0, 0xc0, true, 0x8920b1c797ddc3a9)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRALPHABLEND.crBkColorSrc", cr_bk_color_src, 0x260, 0x20, true, 0xb4d91190a1402eb0)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRALPHABLEND.iUsageSrc", i_usage_src, 0x280, 0x20, true, 0x763a927f7bcda561)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRALPHABLEND.offBmiSrc", off_bmi_src, 0x2a0, 0x20, true, 0xc6603734f342452d)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRALPHABLEND.cbBmiSrc", cb_bmi_src, 0x2c0, 0x20, true, 0x2523dbd328e66278)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRALPHABLEND.offBitsSrc", off_bits_src, 0x2e0, 0x20, true, 0x215db4d80bc7e9b4)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRALPHABLEND.cbBitsSrc", cb_bits_src, 0x300, 0x20, true, 0xa2ac1d879c15d707)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRALPHABLEND.cxSrc", cx_src, 0x320, 0x20, true, 0x3350d88fc0174b71)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRALPHABLEND.cySrc", cy_src, 0x340, 0x20, true, 0xf48ebc2d34a04426)
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