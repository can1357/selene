#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmHeight", tm_height, 0x0, 0x20, true, 0xdb93d0bf2b14690)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmAscent", tm_ascent, 0x20, 0x20, true, 0xce75ff24b60a0416)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmDescent", tm_descent, 0x40, 0x20, true, 0xf9f27a7630100576)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmInternalLeading", tm_internal_leading, 0x60, 0x20, true, 0x247681e38f502608)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmExternalLeading", tm_external_leading, 0x80, 0x20, true, 0x8eef4532ea88ed60)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmAveCharWidth", tm_ave_char_width, 0xa0, 0x20, true, 0x7ed47da1c9964e46)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmMaxCharWidth", tm_max_char_width, 0xc0, 0x20, true, 0x48df5dd7998d7cc3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmWeight", tm_weight, 0xe0, 0x20, true, 0x3d6d289f3a4d3d9e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmOverhang", tm_overhang, 0x100, 0x20, true, 0xe3b5e15c6b119cd1)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmDigitizedAspectX", tm_digitized_aspect_x, 0x120, 0x20, true, 0x45ddb537f8cf2c52)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICW.tmDigitizedAspectY", tm_digitized_aspect_y, 0x140, 0x20, true, 0xa79be35401cacb7d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagNEWTEXTMETRICW.tmFirstChar", tm_first_char, 0x160, 0x10, true, 0x98a4bdcd9e380e36)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagNEWTEXTMETRICW.tmLastChar", tm_last_char, 0x170, 0x10, true, 0xcf99990123d355c6)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagNEWTEXTMETRICW.tmDefaultChar", tm_default_char, 0x180, 0x10, true, 0x27bce9be9bbca92c)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagNEWTEXTMETRICW.tmBreakChar", tm_break_char, 0x190, 0x10, true, 0xfd2addea0dad6625)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICW.tmItalic", tm_italic, 0x1a0, 0x8, true, 0x13c6deef72bf24ce)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICW.tmUnderlined", tm_underlined, 0x1a8, 0x8, true, 0x81329bf619e5ea70)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICW.tmStruckOut", tm_struck_out, 0x1b0, 0x8, true, 0x8a5999ddde6a7d32)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICW.tmPitchAndFamily", tm_pitch_and_family, 0x1b8, 0x8, true, 0x2df129bd03f5e927)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICW.tmCharSet", tm_char_set, 0x1c0, 0x8, true, 0x30b7e65851f9458)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNEWTEXTMETRICW.ntmFlags", ntm_flags, 0x1e0, 0x20, true, 0x4d4e949c3e30a096)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNEWTEXTMETRICW.ntmSizeEM", ntm_size_em, 0x200, 0x20, true, 0x966da9901a144c38)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNEWTEXTMETRICW.ntmCellHeight", ntm_cell_height, 0x220, 0x20, true, 0x6a658257913899df)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNEWTEXTMETRICW.ntmAvgWidth", ntm_avg_width, 0x240, 0x20, true, 0xa12f1d54e7d782e1)
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
#define _m20
#define _m21
#define _m22
#define _m23
#endif