#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRMASKBLT.emr", emr, 0x0, 0x40, true, 0xe5be5424fcbdec13)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRMASKBLT.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xa5b26854cebd2c21)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRMASKBLT.xDest", x_dest, 0xc0, 0x20, true, 0x1d96ebed2fd9eb86)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRMASKBLT.yDest", y_dest, 0xe0, 0x20, true, 0xa8fccdd8cbbd204b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRMASKBLT.cxDest", cx_dest, 0x100, 0x20, true, 0xd800347c92f5842d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRMASKBLT.cyDest", cy_dest, 0x120, 0x20, true, 0x6c9c9f6f1084a958)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.dwRop", dw_rop, 0x140, 0x20, true, 0xac1da6e6bc02c3a4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRMASKBLT.xSrc", x_src, 0x160, 0x20, true, 0x4a9dea5e4669590a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRMASKBLT.ySrc", y_src, 0x180, 0x20, true, 0x25049f8b821937b4)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::xform_t), "tagEMRMASKBLT.xformSrc", xform_src, 0x1a0, 0xc0, true, 0x5a69758d16cf9f27)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.crBkColorSrc", cr_bk_color_src, 0x260, 0x20, true, 0x33cc3eb194698592)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.iUsageSrc", i_usage_src, 0x280, 0x20, true, 0x29696b972f6252b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.offBmiSrc", off_bmi_src, 0x2a0, 0x20, true, 0x4a8e5b3465ee82d6)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.cbBmiSrc", cb_bmi_src, 0x2c0, 0x20, true, 0x6fcbe55ebdb3a95c)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.offBitsSrc", off_bits_src, 0x2e0, 0x20, true, 0x9ad3e07128eb9790)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.cbBitsSrc", cb_bits_src, 0x300, 0x20, true, 0x83dd6bfe8760580e)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRMASKBLT.xMask", x_mask, 0x320, 0x20, true, 0x7f9bdf3e23df7632)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRMASKBLT.yMask", y_mask, 0x340, 0x20, true, 0xcab3a1e3f9362863)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.iUsageMask", i_usage_mask, 0x360, 0x20, true, 0x88e76ae0f96b76e)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.offBmiMask", off_bmi_mask, 0x380, 0x20, true, 0x5a0a2ae3bb4774ad)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.cbBmiMask", cb_bmi_mask, 0x3a0, 0x20, true, 0x1458ca683158da5)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.offBitsMask", off_bits_mask, 0x3c0, 0x20, true, 0xf908da4f81c06405)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRMASKBLT.cbBitsMask", cb_bits_mask, 0x3e0, 0x20, true, 0xb14509860b7a9250)
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
#define _m21
#define _m22
#endif