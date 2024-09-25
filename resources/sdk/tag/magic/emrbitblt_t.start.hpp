#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRBITBLT.emr", emr, 0x0, 0x40, true, 0xd7de808ae412fd31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRBITBLT.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xf2b28dc543e278a6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRBITBLT.xDest", x_dest, 0xc0, 0x20, true, 0x98d9045ea050537f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRBITBLT.yDest", y_dest, 0xe0, 0x20, true, 0x2995b67bb127e34f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRBITBLT.cxDest", cx_dest, 0x100, 0x20, true, 0xac6fbfebabc6f36d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRBITBLT.cyDest", cy_dest, 0x120, 0x20, true, 0x92bc941256cefa06)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRBITBLT.dwRop", dw_rop, 0x140, 0x20, true, 0xb66550e9e1aecee3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRBITBLT.xSrc", x_src, 0x160, 0x20, true, 0x9e9abc7d13d6e6a8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRBITBLT.ySrc", y_src, 0x180, 0x20, true, 0xc73fab1909d7a890)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::xform_t), "tagEMRBITBLT.xformSrc", xform_src, 0x1a0, 0xc0, true, 0x801ff515b44a6395)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRBITBLT.crBkColorSrc", cr_bk_color_src, 0x260, 0x20, true, 0xcd61f5a4fa15506e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRBITBLT.iUsageSrc", i_usage_src, 0x280, 0x20, true, 0xfd439ed55f0f63e6)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRBITBLT.offBmiSrc", off_bmi_src, 0x2a0, 0x20, true, 0x5e3688771022056b)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRBITBLT.cbBmiSrc", cb_bmi_src, 0x2c0, 0x20, true, 0x6a70e716c9ae583e)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRBITBLT.offBitsSrc", off_bits_src, 0x2e0, 0x20, true, 0x9ede6a865db95dff)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRBITBLT.cbBitsSrc", cb_bits_src, 0x300, 0x20, true, 0x2a2fab11a026a0e9)
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
#endif