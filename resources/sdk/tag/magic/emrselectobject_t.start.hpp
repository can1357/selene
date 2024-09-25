#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSELECTOBJECT.emr", emr, 0x0, 0x40, true, 0xc4e3e6959dca5e3a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSELECTOBJECT.ihObject", ih_object, 0x40, 0x20, true, 0xc95d11ed4e760fd2)
#else
#define _m00
#define _m01
#endif