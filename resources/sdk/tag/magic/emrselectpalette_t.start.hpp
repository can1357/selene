#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSELECTPALETTE.emr", emr, 0x0, 0x40, true, 0x3c48e1c5277a240f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSELECTPALETTE.ihPal", ih_pal, 0x40, 0x20, true, 0xc9d328c8d710d8e)
#else
#define _m00
#define _m01
#endif