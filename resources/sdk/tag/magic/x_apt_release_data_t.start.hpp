#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagXAptReleaseData.cIfs", c_ifs, 0x0, 0x10, true, 0x8da1b2d3143d5c98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::reminterfaceref_t*), "tagXAptReleaseData.pIfRefs", p_if_refs, 0x40, 0x40, true, 0x489ba86a82b1752a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_remote_unknown_t*), "tagXAptReleaseData.pRemUnk", p_rem_unk, 0x80, 0x40, true, 0x92c64e4c58eab750)
#else
#define _m00
#define _m01
#define _m02
#endif