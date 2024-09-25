#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmHeight", tm_height, 0x0, 0x20, true, 0x6963cadbbe8ab44)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmAscent", tm_ascent, 0x20, 0x20, true, 0x769a60a447da340b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmDescent", tm_descent, 0x40, 0x20, true, 0x13f069112644820e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmInternalLeading", tm_internal_leading, 0x60, 0x20, true, 0x4b1b757278ddc3d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmExternalLeading", tm_external_leading, 0x80, 0x20, true, 0xaf48c21282864299)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmAveCharWidth", tm_ave_char_width, 0xa0, 0x20, true, 0xc17d9e724845767e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmMaxCharWidth", tm_max_char_width, 0xc0, 0x20, true, 0x8abde429542cf522)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmWeight", tm_weight, 0xe0, 0x20, true, 0x812df2e018270b87)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmOverhang", tm_overhang, 0x100, 0x20, true, 0xad51ebad0dcf9b72)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmDigitizedAspectX", tm_digitized_aspect_x, 0x120, 0x20, true, 0x7d32994726553de9)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagTEXTMETRICW.tmDigitizedAspectY", tm_digitized_aspect_y, 0x140, 0x20, true, 0xb090eb24dbc5312d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagTEXTMETRICW.tmFirstChar", tm_first_char, 0x160, 0x10, true, 0x30b31f2b1aa6946a)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagTEXTMETRICW.tmLastChar", tm_last_char, 0x170, 0x10, true, 0xaa6edd39eb0a7846)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagTEXTMETRICW.tmDefaultChar", tm_default_char, 0x180, 0x10, true, 0x6366d9c8da1e3db2)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagTEXTMETRICW.tmBreakChar", tm_break_char, 0x190, 0x10, true, 0x30cce4db14bc046a)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagTEXTMETRICW.tmItalic", tm_italic, 0x1a0, 0x8, true, 0xfd0645bec86717ec)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagTEXTMETRICW.tmUnderlined", tm_underlined, 0x1a8, 0x8, true, 0x639c34c0062d0b8f)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagTEXTMETRICW.tmStruckOut", tm_struck_out, 0x1b0, 0x8, true, 0x1446ec11c1a8dcd0)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagTEXTMETRICW.tmPitchAndFamily", tm_pitch_and_family, 0x1b8, 0x8, true, 0x49a3189eae97f240)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagTEXTMETRICW.tmCharSet", tm_char_set, 0x1c0, 0x8, true, 0xd4ea36700b25774)
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
#define _m16
#define _m17
#define _m18
#define _m19
#endif