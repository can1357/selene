#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSCALEVIEWPORTEXTEX.emr", emr, 0x0, 0x40, true, 0x8a07e6a12667d32d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSCALEVIEWPORTEXTEX.xNum", x_num, 0x40, 0x20, true, 0x3ec35aeb27893098)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSCALEVIEWPORTEXTEX.xDenom", x_denom, 0x60, 0x20, true, 0xf0fd131c5baf3398)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSCALEVIEWPORTEXTEX.yNum", y_num, 0x80, 0x20, true, 0xb156704cf6e303a9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagEMRSCALEVIEWPORTEXTEX.yDenom", y_denom, 0xa0, 0x20, true, 0x8cbd33bea61d42a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif