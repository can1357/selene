#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETDIBITSTODEVICE.emr", emr, 0x0, 0x40, true, 0xa04459280f742463)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRSETDIBITSTODEVICE.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xede165899b6c60d8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSETDIBITSTODEVICE.xDest", x_dest, 0xc0, 0x20, true, 0xf8555891ba4058b7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSETDIBITSTODEVICE.yDest", y_dest, 0xe0, 0x20, true, 0x8945209ef12930d0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSETDIBITSTODEVICE.xSrc", x_src, 0x100, 0x20, true, 0x9ceb10105be8705)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSETDIBITSTODEVICE.ySrc", y_src, 0x120, 0x20, true, 0x21861c3f013b38c6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSETDIBITSTODEVICE.cxSrc", cx_src, 0x140, 0x20, true, 0x5e8d3433c2b00f29)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSETDIBITSTODEVICE.cySrc", cy_src, 0x160, 0x20, true, 0x681ec07f612a0dc9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETDIBITSTODEVICE.offBmiSrc", off_bmi_src, 0x180, 0x20, true, 0x8fa7976bb41d04a8)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETDIBITSTODEVICE.cbBmiSrc", cb_bmi_src, 0x1a0, 0x20, true, 0x1eaabcef4b8535c6)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETDIBITSTODEVICE.offBitsSrc", off_bits_src, 0x1c0, 0x20, true, 0x5e5a9d6460fdfc7e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETDIBITSTODEVICE.cbBitsSrc", cb_bits_src, 0x1e0, 0x20, true, 0xd99eb298302dd793)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETDIBITSTODEVICE.iUsageSrc", i_usage_src, 0x200, 0x20, true, 0x2da9cd7de5a83b3e)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETDIBITSTODEVICE.iStartScan", i_start_scan, 0x220, 0x20, true, 0x43d9af443cae8271)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETDIBITSTODEVICE.cScans", c_scans, 0x240, 0x20, true, 0xa16c0f0d485bdd33)
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
#endif