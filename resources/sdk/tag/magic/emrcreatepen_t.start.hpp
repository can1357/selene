#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRCREATEPEN.emr", emr, 0x0, 0x40, true, 0xfb0313ee48523db9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEPEN.ihPen", ih_pen, 0x40, 0x20, true, 0x7af98414b3bac9c1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logpen_t), "tagEMRCREATEPEN.lopn", lopn, 0x60, 0x80, true, 0xedabe8d870d0a33a)
#else
#define _m00
#define _m01
#define _m02
#endif