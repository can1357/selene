#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMROFFSETCLIPRGN.emr", emr, 0x0, 0x40, true, 0x95687c4db73b41b0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMROFFSETCLIPRGN.ptlOffset", ptl_offset, 0x40, 0x40, true, 0x4272fd8b95d1c7e7)
#else
#define _m00
#define _m01
#endif