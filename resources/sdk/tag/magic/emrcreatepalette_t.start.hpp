#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRCREATEPALETTE.emr", emr, 0x0, 0x40, true, 0x2141804d83025119)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEPALETTE.ihPal", ih_pal, 0x40, 0x20, true, 0x3df88c97781ba409)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logpalette_t), "tagEMRCREATEPALETTE.lgpl", lgpl, 0x60, 0x40, true, 0x1150bb49f5605ad6)
#else
#define _m00
#define _m01
#define _m02
#endif