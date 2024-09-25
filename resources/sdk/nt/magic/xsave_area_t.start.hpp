#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::xsave_format), "_XSAVE_AREA.LegacyState", legacy_state, 0x0, 0x0, true, 0x16da3fee513f2791)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::xsave_area_header_t), "_XSAVE_AREA.Header", header, 0x1000, 0x0, true, 0xef25547feac71169)
#else
#define _m00
#define _m01
#endif