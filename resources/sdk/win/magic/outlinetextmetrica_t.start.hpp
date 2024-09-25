#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmSize", otm_size, 0x0, 0x20, true, 0x30ffb99acfa10aee)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::textmetrica_t), "_OUTLINETEXTMETRICA.otmTextMetrics", otm_text_metrics, 0x20, 0xc0, true, 0x68f6b139af6d514d)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_OUTLINETEXTMETRICA.otmFiller", otm_filler, 0x1e0, 0x8, true, 0xc2db04c69ac691f9)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::panose_t), "_OUTLINETEXTMETRICA.otmPanoseNumber", otm_panose_number, 0x1e8, 0x50, true, 0x138d758fc29f117)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmfsSelection", otmfs_selection, 0x240, 0x20, true, 0x9f7d5ca9d351990f)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmfsType", otmfs_type, 0x260, 0x20, true, 0x8eae64ab3bf4e04b)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmsCharSlopeRise", otms_char_slope_rise, 0x280, 0x20, true, 0xfdcf8b52ecc5c305)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmsCharSlopeRun", otms_char_slope_run, 0x2a0, 0x20, true, 0xf853db2e62f05352)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmItalicAngle", otm_italic_angle, 0x2c0, 0x20, true, 0xe75a321faea16a88)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmEMSquare", otm_em_square, 0x2e0, 0x20, true, 0x228d4c0393b2cca4)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmAscent", otm_ascent, 0x300, 0x20, true, 0x89ee7d9190ab5e29)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmDescent", otm_descent, 0x320, 0x20, true, 0x27fdb46df9899569)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmLineGap", otm_line_gap, 0x340, 0x20, true, 0xda6575a54ca746e4)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmsCapEmHeight", otms_cap_em_height, 0x360, 0x20, true, 0xf86386aeb9f953e9)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmsXHeight", otms_x_height, 0x380, 0x20, true, 0xd2047b29dd5d3a23)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_OUTLINETEXTMETRICA.otmrcFontBox", otmrc_font_box, 0x3a0, 0x80, true, 0xe1b17af4e5993d54)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmMacAscent", otm_mac_ascent, 0x420, 0x20, true, 0x756c3bcf27abeab7)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmMacDescent", otm_mac_descent, 0x440, 0x20, true, 0x83247bd9b54ae176)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmMacLineGap", otm_mac_line_gap, 0x460, 0x20, true, 0x2075e245b4cff60a)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmusMinimumPPEM", otmus_minimum_ppem, 0x480, 0x20, true, 0x72cbd1706eda6f2d)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_OUTLINETEXTMETRICA.otmptSubscriptSize", otmpt_subscript_size, 0x4a0, 0x40, true, 0xa0a8f85a7e762cfb)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_OUTLINETEXTMETRICA.otmptSubscriptOffset", otmpt_subscript_offset, 0x4e0, 0x40, true, 0x891d4764bb309b7)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_OUTLINETEXTMETRICA.otmptSuperscriptSize", otmpt_superscript_size, 0x520, 0x40, true, 0x1f9f67fcf22f218c)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_OUTLINETEXTMETRICA.otmptSuperscriptOffset", otmpt_superscript_offset, 0x560, 0x40, true, 0x6365fa21188bac9)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTLINETEXTMETRICA.otmsStrikeoutSize", otms_strikeout_size, 0x5a0, 0x20, true, 0xe5a2742a3f38d791)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmsStrikeoutPosition", otms_strikeout_position, 0x5c0, 0x20, true, 0x87b7534478d74c34)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmsUnderscoreSize", otms_underscore_size, 0x5e0, 0x20, true, 0xc1f727c9785a732c)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_OUTLINETEXTMETRICA.otmsUnderscorePosition", otms_underscore_position, 0x600, 0x20, true, 0x46bc192e13b17d3b)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTLINETEXTMETRICA.otmpFamilyName", otmp_family_name, 0x640, 0x40, true, 0xea026080e78b8ee4)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTLINETEXTMETRICA.otmpFaceName", otmp_face_name, 0x680, 0x40, true, 0xedaad7fec8d39583)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTLINETEXTMETRICA.otmpStyleName", otmp_style_name, 0x6c0, 0x40, true, 0x2c738e88b8a734c9)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_OUTLINETEXTMETRICA.otmpFullName", otmp_full_name, 0x700, 0x40, true, 0x50f8871058419d37)
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