#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmHeight", tm_height, 0x0, 0x20, true, 0x244570c8fa9fc7fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmAscent", tm_ascent, 0x20, 0x20, true, 0xb578a9f7a6224a34)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmDescent", tm_descent, 0x40, 0x20, true, 0xf3e88ac4b4d7da1e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmInternalLeading", tm_internal_leading, 0x60, 0x20, true, 0xf268332b3cf4686c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmExternalLeading", tm_external_leading, 0x80, 0x20, true, 0xf6248d201987849)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmAveCharWidth", tm_ave_char_width, 0xa0, 0x20, true, 0x2d07741822b66de4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmMaxCharWidth", tm_max_char_width, 0xc0, 0x20, true, 0xf4477b0b9374b2c6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmWeight", tm_weight, 0xe0, 0x20, true, 0x92c8650ed46ce558)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmOverhang", tm_overhang, 0x100, 0x20, true, 0x74669d8c757f111)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmDigitizedAspectX", tm_digitized_aspect_x, 0x120, 0x20, true, 0x3fb776373a9c609)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagNEWTEXTMETRICA.tmDigitizedAspectY", tm_digitized_aspect_y, 0x140, 0x20, true, 0xe3afa16b055e74a3)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmFirstChar", tm_first_char, 0x160, 0x8, true, 0x7f447d93c2806cff)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmLastChar", tm_last_char, 0x168, 0x8, true, 0x6754ac65c46dfef7)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmDefaultChar", tm_default_char, 0x170, 0x8, true, 0x9699d89358af3041)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmBreakChar", tm_break_char, 0x178, 0x8, true, 0x143898eae14072f6)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmItalic", tm_italic, 0x180, 0x8, true, 0x84ea7aa6ade4f01e)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmUnderlined", tm_underlined, 0x188, 0x8, true, 0x2ddb9f1646bec653)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmStruckOut", tm_struck_out, 0x190, 0x8, true, 0xff47816c57a50897)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmPitchAndFamily", tm_pitch_and_family, 0x198, 0x8, true, 0xc15f1e02940935c8)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagNEWTEXTMETRICA.tmCharSet", tm_char_set, 0x1a0, 0x8, true, 0xa1dbeb48fc232724)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNEWTEXTMETRICA.ntmFlags", ntm_flags, 0x1c0, 0x20, true, 0xa6caacfa4b630148)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNEWTEXTMETRICA.ntmSizeEM", ntm_size_em, 0x1e0, 0x20, true, 0xb8cbd604deb97285)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNEWTEXTMETRICA.ntmCellHeight", ntm_cell_height, 0x200, 0x20, true, 0x7d659934992d5621)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNEWTEXTMETRICA.ntmAvgWidth", ntm_avg_width, 0x220, 0x20, true, 0x97fd1b165c8224b)
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