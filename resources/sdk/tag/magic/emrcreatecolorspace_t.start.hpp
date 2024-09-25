#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRCREATECOLORSPACE.emr", emr, 0x0, 0x40, true, 0xc33b9cd2878d59d9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATECOLORSPACE.ihCS", ih_cs, 0x40, 0x20, true, 0x9d3fd5a63cceb47e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logcolorspacea_t), "tagEMRCREATECOLORSPACE.lcs", lcs, 0x60, 0x40, true, 0x4b0ec81208957981)
#else
#define _m00
#define _m01
#define _m02
#endif