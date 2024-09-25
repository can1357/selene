#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMREXTCREATEPEN.emr", emr, 0x0, 0x40, true, 0xcb1b51b612f71b2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTCREATEPEN.ihPen", ih_pen, 0x40, 0x20, true, 0xdef50683f194e18d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTCREATEPEN.offBmi", off_bmi, 0x60, 0x20, true, 0x628b004fc104ad3f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTCREATEPEN.cbBmi", cb_bmi, 0x80, 0x20, true, 0x3266addd7c8f8235)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTCREATEPEN.offBits", off_bits, 0xa0, 0x20, true, 0x3e30fdd40e43b17f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMREXTCREATEPEN.cbBits", cb_bits, 0xc0, 0x20, true, 0x8480089f59d6173a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::extlogpen32_t), "tagEMREXTCREATEPEN.elp", elp, 0xe0, 0xe0, true, 0xbfce2f986d9dd1fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif