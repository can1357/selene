#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmSize", otm_size, 0x0, 0x20, true, 0xadbe0d039fb52a7a)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::textmetricw_t), "_OUTLINETEXTMETRICW.otmTextMetrics", otm_text_metrics, 0x20, 0xe0, true, 0x973816e8cb8b570c)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_OUTLINETEXTMETRICW.otmFiller", otm_filler, 0x200, 0x8, true, 0x74e2fed69014b535)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::panose_t), "_OUTLINETEXTMETRICW.otmPanoseNumber", otm_panose_number, 0x208, 0x50, true, 0xff325c30ada33659)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmfsSelection", otmfs_selection, 0x260, 0x20, true, 0x8bb0a8755c214c8c)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmfsType", otmfs_type, 0x280, 0x20, true, 0x6fa7548890aec0eb)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmsCharSlopeRise", otms_char_slope_rise, 0x2a0, 0x20, true, 0x8fe172f1840e92e8)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmsCharSlopeRun", otms_char_slope_run, 0x2c0, 0x20, true, 0x1fb6f0086d265563)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmItalicAngle", otm_italic_angle, 0x2e0, 0x20, true, 0xa29ab1fd18844879)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmEMSquare", otm_em_square, 0x300, 0x20, true, 0x32ebb73c0cf4aaa8)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmAscent", otm_ascent, 0x320, 0x20, true, 0x7425e5520fe9a6a2)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmDescent", otm_descent, 0x340, 0x20, true, 0xf28ef643bf59c3fb)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmLineGap", otm_line_gap, 0x360, 0x20, true, 0x9c097bb1225bb642)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmsCapEmHeight", otms_cap_em_height, 0x380, 0x20, true, 0xc3c6b80959b0898c)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmsXHeight", otms_x_height, 0x3a0, 0x20, true, 0xb598370ca890bb1a)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_OUTLINETEXTMETRICW.otmrcFontBox", otmrc_font_box, 0x3c0, 0x80, true, 0x45e563adb5c91a12)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmMacAscent", otm_mac_ascent, 0x440, 0x20, true, 0xc6aea2bf822e25d4)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmMacDescent", otm_mac_descent, 0x460, 0x20, true, 0xa5602f6850ec3558)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmMacLineGap", otm_mac_line_gap, 0x480, 0x20, true, 0x2cbeb88b1e8e8d5d)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmusMinimumPPEM", otmus_minimum_ppem, 0x4a0, 0x20, true, 0x7ca73b809a17f101)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_OUTLINETEXTMETRICW.otmptSubscriptSize", otmpt_subscript_size, 0x4c0, 0x40, true, 0xd2043102e6f2ea57)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_OUTLINETEXTMETRICW.otmptSubscriptOffset", otmpt_subscript_offset, 0x500, 0x40, true, 0x1862825020b0f779)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_OUTLINETEXTMETRICW.otmptSuperscriptSize", otmpt_superscript_size, 0x540, 0x40, true, 0x7e2722c107a2eb38)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_OUTLINETEXTMETRICW.otmptSuperscriptOffset", otmpt_superscript_offset, 0x580, 0x40, true, 0xe9fe3dce885e0fd4)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICW.otmsStrikeoutSize", otms_strikeout_size, 0x5c0, 0x20, true, 0x9752a47f4c06a01a)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmsStrikeoutPosition", otms_strikeout_position, 0x5e0, 0x20, true, 0x17a84f91946e4ac7)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmsUnderscoreSize", otms_underscore_size, 0x600, 0x20, true, 0xe63ddbca5453e9d8)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICW.otmsUnderscorePosition", otms_underscore_position, 0x620, 0x20, true, 0xb425438c331b25da)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTLINETEXTMETRICW.otmpFamilyName", otmp_family_name, 0x640, 0x40, true, 0x9b7f4e195e57935f)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTLINETEXTMETRICW.otmpFaceName", otmp_face_name, 0x680, 0x40, true, 0x6d3479d6d3ef845f)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTLINETEXTMETRICW.otmpStyleName", otmp_style_name, 0x6c0, 0x40, true, 0x26203fd27bc15b73)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTLINETEXTMETRICW.otmpFullName", otmp_full_name, 0x700, 0x40, true, 0x3d1e4f7d2235615c)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#endif