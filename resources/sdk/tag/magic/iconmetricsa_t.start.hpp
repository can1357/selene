#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagICONMETRICSA.cbSize", cb_size, 0x0, 0x20, true, 0x67336c7ec7c485a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagICONMETRICSA.iHorzSpacing", i_horz_spacing, 0x20, 0x20, true, 0xff0a2724a5d03ab8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagICONMETRICSA.iVertSpacing", i_vert_spacing, 0x40, 0x20, true, 0x2ef7d00cfab2c5df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagICONMETRICSA.iTitleWrap", i_title_wrap, 0x60, 0x20, true, 0xba8a85f8281ae709)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagICONMETRICSA.lfFont", lf_font, 0x80, 0xe0, true, 0x971902620005d88d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif