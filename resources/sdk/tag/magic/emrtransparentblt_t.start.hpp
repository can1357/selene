#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRTRANSPARENTBLT.emr", emr, 0x0, 0x40, true, 0xa280874f3f25fc6b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRTRANSPARENTBLT.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x8b9d4b0d8138505e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRTRANSPARENTBLT.xDest", x_dest, 0xc0, 0x20, true, 0x4254acda153f4b1e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRTRANSPARENTBLT.yDest", y_dest, 0xe0, 0x20, true, 0xfdd2304b3e99bf19)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRTRANSPARENTBLT.cxDest", cx_dest, 0x100, 0x20, true, 0x62fb5ed81c6da959)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRTRANSPARENTBLT.cyDest", cy_dest, 0x120, 0x20, true, 0xa13f608b093fc512)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTRANSPARENTBLT.dwRop", dw_rop, 0x140, 0x20, true, 0x83eabbb41cffa200)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRTRANSPARENTBLT.xSrc", x_src, 0x160, 0x20, true, 0xb3772ec258759080)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRTRANSPARENTBLT.ySrc", y_src, 0x180, 0x20, true, 0xd14fa574125dd3f0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::xform_t), "tagEMRTRANSPARENTBLT.xformSrc", xform_src, 0x1a0, 0xc0, true, 0xccc70176bf879945)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTRANSPARENTBLT.crBkColorSrc", cr_bk_color_src, 0x260, 0x20, true, 0xfd0069b0f4cc4090)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTRANSPARENTBLT.iUsageSrc", i_usage_src, 0x280, 0x20, true, 0xf1ca93b6fd3e8807)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTRANSPARENTBLT.offBmiSrc", off_bmi_src, 0x2a0, 0x20, true, 0xac019fe33d6fbfba)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTRANSPARENTBLT.cbBmiSrc", cb_bmi_src, 0x2c0, 0x20, true, 0xe1585580cd462424)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTRANSPARENTBLT.offBitsSrc", off_bits_src, 0x2e0, 0x20, true, 0xa2e52fabf28133cd)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRTRANSPARENTBLT.cbBitsSrc", cb_bits_src, 0x300, 0x20, true, 0xb01c075de04b7abe)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRTRANSPARENTBLT.cxSrc", cx_src, 0x320, 0x20, true, 0x25beff98a0d2b1d4)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRTRANSPARENTBLT.cySrc", cy_src, 0x340, 0x20, true, 0x315f5edf5a416fad)
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