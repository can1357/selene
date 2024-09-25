#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRCREATEBRUSHINDIRECT.emr", emr, 0x0, 0x40, true, 0xb9694a650eacb3ee)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRCREATEBRUSHINDIRECT.ihBrush", ih_brush, 0x40, 0x20, true, 0x544e51b3f5a27673)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logbrush32_t), "tagEMRCREATEBRUSHINDIRECT.lb", lb, 0x60, 0x60, true, 0xe38c93a92d6f461b)
#else
#define _m00
#define _m01
#define _m02
#endif