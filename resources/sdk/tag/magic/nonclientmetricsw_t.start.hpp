#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNONCLIENTMETRICSW.cbSize", cb_size, 0x0, 0x20, true, 0x21b927494dc1e456)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iBorderWidth", i_border_width, 0x20, 0x20, true, 0x47929291335c321b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iScrollWidth", i_scroll_width, 0x40, 0x20, true, 0x7a346d5405623061)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iScrollHeight", i_scroll_height, 0x60, 0x20, true, 0x4618678167b15c80)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iCaptionWidth", i_caption_width, 0x80, 0x20, true, 0xf76d9d8199c54a62)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iCaptionHeight", i_caption_height, 0xa0, 0x20, true, 0x5b8413aec5be43b0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagNONCLIENTMETRICSW.lfCaptionFont", lf_caption_font, 0xc0, 0xe0, true, 0xe6c1e61bba481067)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iSmCaptionWidth", i_sm_caption_width, 0x3a0, 0x20, true, 0x1121b27e6e163376)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iSmCaptionHeight", i_sm_caption_height, 0x3c0, 0x20, true, 0x40d38e56e58e999a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagNONCLIENTMETRICSW.lfSmCaptionFont", lf_sm_caption_font, 0x3e0, 0xe0, true, 0x2cbc6b922384bad6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iMenuWidth", i_menu_width, 0x6c0, 0x20, true, 0x21a74b9e32e14d3a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iMenuHeight", i_menu_height, 0x6e0, 0x20, true, 0xa194798ecf900a97)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagNONCLIENTMETRICSW.lfMenuFont", lf_menu_font, 0x700, 0xe0, true, 0xd79c5e40820611cd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagNONCLIENTMETRICSW.lfStatusFont", lf_status_font, 0x9e0, 0xe0, true, 0xe818eba901ec1f3c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagNONCLIENTMETRICSW.lfMessageFont", lf_message_font, 0xcc0, 0xe0, true, 0x18575ae23fb3d990)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSW.iPaddedBorderWidth", i_padded_border_width, 0xfa0, 0x20, true, 0xc812c5c270419fe4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif