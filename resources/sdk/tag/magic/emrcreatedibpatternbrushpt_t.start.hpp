#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRCREATEDIBPATTERNBRUSHPT.emr", emr, 0x0, 0x40, true, 0x99674603ad21e83d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEDIBPATTERNBRUSHPT.ihBrush", ih_brush, 0x40, 0x20, true, 0x8eb37c3c2f6e2db6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEDIBPATTERNBRUSHPT.iUsage", i_usage, 0x60, 0x20, true, 0xabdb99b3ccee76e9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEDIBPATTERNBRUSHPT.offBmi", off_bmi, 0x80, 0x20, true, 0x3604c929ec9752c5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEDIBPATTERNBRUSHPT.cbBmi", cb_bmi, 0xa0, 0x20, true, 0x111c8ed625efd5f0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEDIBPATTERNBRUSHPT.offBits", off_bits, 0xc0, 0x20, true, 0x47c2b70cfc302165)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEDIBPATTERNBRUSHPT.cbBits", cb_bits, 0xe0, 0x20, true, 0x5d0a134be69b92b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif