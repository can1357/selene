#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRSETARCDIRECTION.emr", emr, 0x0, 0x40, true, 0xd4a3bc8fa19ea1f8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRSETARCDIRECTION.iArcDirection", i_arc_direction, 0x40, 0x20, true, 0xa5d289c0b97684bb)
#else
#define _m00
#define _m01
#endif