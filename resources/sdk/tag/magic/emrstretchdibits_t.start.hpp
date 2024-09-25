#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSTRETCHDIBITS.emr", emr, 0x0, 0x40, true, 0x2eaeb514c0801c2d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRSTRETCHDIBITS.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xe35cea6af1af112)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHDIBITS.xDest", x_dest, 0xc0, 0x20, true, 0xdeb95be490c10021)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHDIBITS.yDest", y_dest, 0xe0, 0x20, true, 0x2d6f70ad4a34345d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHDIBITS.xSrc", x_src, 0x100, 0x20, true, 0x14587c455daec32f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHDIBITS.ySrc", y_src, 0x120, 0x20, true, 0x8427c3fb1b9a82b3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHDIBITS.cxSrc", cx_src, 0x140, 0x20, true, 0x6d18365ab8672991)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHDIBITS.cySrc", cy_src, 0x160, 0x20, true, 0x676a91e65bd178bf)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHDIBITS.offBmiSrc", off_bmi_src, 0x180, 0x20, true, 0xea17437931582443)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHDIBITS.cbBmiSrc", cb_bmi_src, 0x1a0, 0x20, true, 0x19fa5e2e40844435)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHDIBITS.offBitsSrc", off_bits_src, 0x1c0, 0x20, true, 0xfdfd9e97d8dbab3b)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHDIBITS.cbBitsSrc", cb_bits_src, 0x1e0, 0x20, true, 0x8c5a5e8491163022)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHDIBITS.iUsageSrc", i_usage_src, 0x200, 0x20, true, 0x7bd44d838f878ce6)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSTRETCHDIBITS.dwRop", dw_rop, 0x220, 0x20, true, 0xe4d4a8dbb57c05f6)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHDIBITS.cxDest", cx_dest, 0x240, 0x20, true, 0xfeaaa1098022b2d1)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSTRETCHDIBITS.cyDest", cy_dest, 0x260, 0x20, true, 0x5211920d6f0ae957)
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