#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSTRETCHBLT.emr", emr, 0x0, 0x40, true, 0x3a58504336337a1d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRSTRETCHBLT.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x70aeb0db1a407fc1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHBLT.xDest", x_dest, 0xc0, 0x20, true, 0xca24bed77c543905)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHBLT.yDest", y_dest, 0xe0, 0x20, true, 0x3adc3d5a5d314983)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHBLT.cxDest", cx_dest, 0x100, 0x20, true, 0x6e749e9681c969cb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHBLT.cyDest", cy_dest, 0x120, 0x20, true, 0xfc2d16b8e0dbe49b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHBLT.dwRop", dw_rop, 0x140, 0x20, true, 0x22c2e7a9c0d41a9b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHBLT.xSrc", x_src, 0x160, 0x20, true, 0xccd87ee97e942fc8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHBLT.ySrc", y_src, 0x180, 0x20, true, 0xd904a104a1b0a1e0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::xform_t), "tagEMRSTRETCHBLT.xformSrc", xform_src, 0x1a0, 0xc0, true, 0x6847ef89e8eded4)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHBLT.crBkColorSrc", cr_bk_color_src, 0x260, 0x20, true, 0x68915488268a92)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHBLT.iUsageSrc", i_usage_src, 0x280, 0x20, true, 0x4464377ac472f5d5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHBLT.offBmiSrc", off_bmi_src, 0x2a0, 0x20, true, 0x38bbb70c149e988f)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHBLT.cbBmiSrc", cb_bmi_src, 0x2c0, 0x20, true, 0x3a545f58d5195966)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHBLT.offBitsSrc", off_bits_src, 0x2e0, 0x20, true, 0x53080487c782a6e9)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHBLT.cbBitsSrc", cb_bits_src, 0x300, 0x20, true, 0x9117124c70ebd716)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHBLT.cxSrc", cx_src, 0x320, 0x20, true, 0x1fd1ef7ee792222d)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHBLT.cySrc", cy_src, 0x340, 0x20, true, 0x9267c9b8aa45502a)
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