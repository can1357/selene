#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRLINETO.emr", emr, 0x0, 0x40, true, 0x209d1f96ba1cb44c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "tagEMRLINETO.ptl", ptl, 0x40, 0x40, true, 0x739d83556aaf6114)
#else
#define _m00
#define _m01
#endif