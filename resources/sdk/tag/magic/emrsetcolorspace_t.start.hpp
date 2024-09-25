#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETCOLORSPACE.emr", emr, 0x0, 0x40, true, 0xc3b2df81e07c9823)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETCOLORSPACE.ihCS", ih_cs, 0x40, 0x20, true, 0xfae4c6be4afbb9ae)
#else
#define _m00
#define _m01
#endif