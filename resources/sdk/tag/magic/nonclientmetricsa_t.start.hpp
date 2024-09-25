#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNONCLIENTMETRICSA.cbSize", cb_size, 0x0, 0x20, true, 0xc3029b132d1191c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iBorderWidth", i_border_width, 0x20, 0x20, true, 0xb20cc4ceaa4dc62b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iScrollWidth", i_scroll_width, 0x40, 0x20, true, 0xf322b78074d4778b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iScrollHeight", i_scroll_height, 0x60, 0x20, true, 0xdbd0712151eb400f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iCaptionWidth", i_caption_width, 0x80, 0x20, true, 0x141e72d05bdeedb9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iCaptionHeight", i_caption_height, 0xa0, 0x20, true, 0x92b3bbb0ca70ca91)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagNONCLIENTMETRICSA.lfCaptionFont", lf_caption_font, 0xc0, 0xe0, true, 0xed0ea7506a9a3e32)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iSmCaptionWidth", i_sm_caption_width, 0x2a0, 0x20, true, 0x6b1e84a1044fdc7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iSmCaptionHeight", i_sm_caption_height, 0x2c0, 0x20, true, 0x7eee2cf3601d2fb3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagNONCLIENTMETRICSA.lfSmCaptionFont", lf_sm_caption_font, 0x2e0, 0xe0, true, 0x8c642e8344ce5b2a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iMenuWidth", i_menu_width, 0x4c0, 0x20, true, 0xe70bdb620c0fff11)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iMenuHeight", i_menu_height, 0x4e0, 0x20, true, 0xa89f658c481d6062)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagNONCLIENTMETRICSA.lfMenuFont", lf_menu_font, 0x500, 0xe0, true, 0x8a8637c258e0cbdd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagNONCLIENTMETRICSA.lfStatusFont", lf_status_font, 0x6e0, 0xe0, true, 0xb42773783f92b2c6)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagNONCLIENTMETRICSA.lfMessageFont", lf_message_font, 0x8c0, 0xe0, true, 0xa15d1b7026cc00f8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagNONCLIENTMETRICSA.iPaddedBorderWidth", i_padded_border_width, 0xaa0, 0x20, true, 0xc31f384ff5b3b7ae)
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