#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagICONMETRICSW.cbSize", cb_size, 0x0, 0x20, true, 0xa2036238347b4d78)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagICONMETRICSW.iHorzSpacing", i_horz_spacing, 0x20, 0x20, true, 0xd491358005bea732)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagICONMETRICSW.iVertSpacing", i_vert_spacing, 0x40, 0x20, true, 0x6d5bb655f7c196cd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagICONMETRICSW.iTitleWrap", i_title_wrap, 0x60, 0x20, true, 0x23229e7c64c4c5be)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagICONMETRICSW.lfFont", lf_font, 0x80, 0xe0, true, 0x9883bb38f42f5a1d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif