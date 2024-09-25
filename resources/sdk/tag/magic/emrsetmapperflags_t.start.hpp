#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETMAPPERFLAGS.emr", emr, 0x0, 0x40, true, 0x6c769d04f3b9d686)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETMAPPERFLAGS.dwFlags", dw_flags, 0x40, 0x20, true, 0xfe7255f296faf2c8)
#else
#define _m00
#define _m01
#endif