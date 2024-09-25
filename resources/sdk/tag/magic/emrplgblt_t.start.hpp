#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRPLGBLT.emr", emr, 0x0, 0x40, true, 0x1b01809e2617b902)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRPLGBLT.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x50acf07a2d983b17)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::pointl_t, 3>), "tagEMRPLGBLT.aptlDest", aptl_dest, 0xc0, 0xc0, true, 0x151cf5e27e034024)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRPLGBLT.xSrc", x_src, 0x180, 0x20, true, 0xb779a11ba1297a3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRPLGBLT.ySrc", y_src, 0x1a0, 0x20, true, 0xe49bc5a875277e33)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRPLGBLT.cxSrc", cx_src, 0x1c0, 0x20, true, 0x5490f6a2c54f8fe9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRPLGBLT.cySrc", cy_src, 0x1e0, 0x20, true, 0xc18b3d6ef7b99ba4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::xform_t), "tagEMRPLGBLT.xformSrc", xform_src, 0x200, 0xc0, true, 0x1d0791d0e9da4a33)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.crBkColorSrc", cr_bk_color_src, 0x2c0, 0x20, true, 0xab495f3c985eb9b2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.iUsageSrc", i_usage_src, 0x2e0, 0x20, true, 0x58f35036bf886043)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.offBmiSrc", off_bmi_src, 0x300, 0x20, true, 0x364687d3ccbb21f6)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.cbBmiSrc", cb_bmi_src, 0x320, 0x20, true, 0x640099dd36c4c6b6)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.offBitsSrc", off_bits_src, 0x340, 0x20, true, 0xfced6da879e4a2d2)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.cbBitsSrc", cb_bits_src, 0x360, 0x20, true, 0x7ffade3e87b6afbf)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRPLGBLT.xMask", x_mask, 0x380, 0x20, true, 0xd12668ee59da66)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRPLGBLT.yMask", y_mask, 0x3a0, 0x20, true, 0x4c7e2b7a55e7fb63)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.iUsageMask", i_usage_mask, 0x3c0, 0x20, true, 0x55068f6ee74f32f4)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.offBmiMask", off_bmi_mask, 0x3e0, 0x20, true, 0xb110b44c8202d522)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.cbBmiMask", cb_bmi_mask, 0x400, 0x20, true, 0x7d2733c58441ca2e)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.offBitsMask", off_bits_mask, 0x420, 0x20, true, 0x9ed830bda0ac6392)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRPLGBLT.cbBitsMask", cb_bits_mask, 0x440, 0x20, true, 0xa1cb8cd61d3566d5)
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
#define _m18
#define _m19
#define _m20
#endif