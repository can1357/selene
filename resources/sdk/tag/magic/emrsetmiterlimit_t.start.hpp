#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETMITERLIMIT.emr", emr, 0x0, 0x40, true, 0xf3efe3a3c5c9f1f6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "tagEMRSETMITERLIMIT.eMiterLimit", e_miter_limit, 0x40, 0x20, true, 0xc91b53ec9d2b26fe)
#else
#define _m00
#define _m01
#endif