#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRCREATEMONOBRUSH.emr", emr, 0x0, 0x40, true, 0x747208e80a137fa9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEMONOBRUSH.ihBrush", ih_brush, 0x40, 0x20, true, 0xfbdd3dc2c838963c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEMONOBRUSH.iUsage", i_usage, 0x60, 0x20, true, 0x382631e7b2385ce3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEMONOBRUSH.offBmi", off_bmi, 0x80, 0x20, true, 0x4c4bd49f31a27cd2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEMONOBRUSH.cbBmi", cb_bmi, 0xa0, 0x20, true, 0x9fbcf8a04d962df6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEMONOBRUSH.offBits", off_bits, 0xc0, 0x20, true, 0xe967c3dc83a69c6a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEMONOBRUSH.cbBits", cb_bits, 0xe0, 0x20, true, 0x50bfe795db36cc90)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif