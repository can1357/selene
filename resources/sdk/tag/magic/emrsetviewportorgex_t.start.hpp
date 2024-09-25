#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETVIEWPORTORGEX.emr", emr, 0x0, 0x40, true, 0x8bd021f8f94c65b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMRSETVIEWPORTORGEX.ptlOrigin", ptl_origin, 0x40, 0x40, true, 0x384ea1c0309addc0)
#else
#define _m00
#define _m01
#endif