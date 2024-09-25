#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rfontobj
{
    // [dtHelper@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x868d4, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) dt_helper;
    
    // [gTables@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .rdata:0x2e8390, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) g_tables;
    
    // [SelectStorageTable@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xf2ba4, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) select_storage_table;
    
    // [bEnsureAuxCacheBuffer@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d4eec, 0x1596d bytes
    // win32kfull.sys .text:0x2d68cc, 0x1659e bytes
    // win32kfull.sys .text:0x2d4e5c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_ensure_aux_cache_buffer;
    
    // [bEnsureGlyphCacheBuffer@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9d188, 0x1596d bytes
    // win32kfull.sys .text:0x73e68, 0x1659e bytes
    // win32kfull.sys .text:0x9dcf8, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_ensure_glyph_cache_buffer;
    
    // [bMatchRealization@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf8ed8, 0x1596d bytes
    // win32kfull.sys .text:0x2a8fc4, 0x1659e bytes
    // win32kfull.sys .text:0xf9e0c, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_match_realization;
    
    // [bSkipCHSFontSegUISymFallback@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10cf18, 0x1596d bytes
    // win32kfull.sys .text:0x2a7fa8, 0x1659e bytes
    // win32kfull.sys .text:0x10de48, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_skip_chs_font_seg_ui_sym_fallback;
    
    // [cGetGlyphData@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x86038, 0x13864 bytes
    // win32kfull.sys .text:0x2a7784, 0x1596d bytes
    // win32kfull.sys .text:0x2a76f4, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) c_get_glyph_data;
    
    // [dtorHelper@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf3df0, 0x1596d bytes
    // win32kfull.sys .text:0x143180, 0x1659e bytes
    // win32kfull.sys .text:0xf4c80, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) dtor_helper;
    
    // [vLockEUDCFontsGlyphCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1135fc, 0x1596d bytes
    // win32kfull.sys .text:0x142eb4, 0x1659e bytes
    // win32kfull.sys .text:0x11452c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) v_lock_eudc_fonts_glyph_cache;
    
    // [vLockSystemTTGlyphCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1136e8, 0x1596d bytes
    // win32kfull.sys .text:0x142f58, 0x1659e bytes
    // win32kfull.sys .text:0x114618, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) v_lock_system_tt_glyph_cache;
    
    // [vUnlockEUDCFontsGlyphCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf3ec4, 0x1596d bytes
    // win32kfull.sys .text:0x143254, 0x1659e bytes
    // win32kfull.sys .text:0xf4d54, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) v_unlock_eudc_fonts_glyph_cache;
    
    // [AddUFIToBuffer@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29a0fc, 0x13864 bytes
    // win32kfull.sys .text:0x1299f0, 0x1596d bytes
    // win32kfull.sys .text:0x11a570, 0x1659e bytes
    // win32kfull.sys .text:0x12a930, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) add_ufi_to_buffer;
    
    // [bAllocateCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x84c50, 0x13864 bytes
    // win32kfull.sys .text:0x1828c, 0x1596d bytes
    // win32kfull.sys .text:0xe72cc, 0x1659e bytes
    // win32kfull.sys .text:0x1863c, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) b_allocate_cache;
    
    // [bCalcEscapementP@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29ae2c, 0x13864 bytes
    // win32kfull.sys .text:0x2a7f98, 0x1596d bytes
    // win32kfull.sys .text:0x2a8b14, 0x1659e bytes
    // win32kfull.sys .text:0x2a7f08, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) b_calc_escapement_p;
    
    // [bCalcLayoutUnits@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x84a04, 0x13864 bytes
    // win32kfull.sys .text:0x6d328, 0x1596d bytes
    // win32kfull.sys .text:0x76a18, 0x1659e bytes
    // win32kfull.sys .text:0x6de98, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) b_calc_layout_units;
    
    // [bCheckEudcFontCaps@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7ae4, 0x13864 bytes
    // win32kfull.sys .text:0xf910c, 0x1596d bytes
    // win32kfull.sys .text:0x2a7de8, 0x1659e bytes
    // win32kfull.sys .text:0xfa040, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) b_check_eudc_font_caps;
    
    // [bCheckMetricsCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87ea4, 0x13864 bytes
    // win32kfull.sys .text:0x69210, 0x1596d bytes
    // win32kfull.sys .text:0x73934, 0x1659e bytes
    // win32kfull.sys .text:0x69d80, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) b_check_metrics_cache;
    
    // [bFindRFONT@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8538c, 0x13864 bytes
    // win32kfull.sys .text:0xf8d10, 0x1596d bytes
    // win32kfull.sys .text:0x2a8da0, 0x1659e bytes
    // win32kfull.sys .text:0xf9c44, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) b_find_rfont;
    
    // [bGetDEVICEMETRICS@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x84608, 0x13864 bytes
    // win32kfull.sys .text:0x6c0b8, 0x1596d bytes
    // win32kfull.sys .text:0x70604, 0x1659e bytes
    // win32kfull.sys .text:0x6cc28, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) b_get_devicemetrics;
    
    // [bGetGlyphMetrics@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87fe4, 0x13864 bytes
    // win32kfull.sys .text:0x6bbf0, 0x1596d bytes
    // win32kfull.sys .text:0x7327c, 0x1659e bytes
    // win32kfull.sys .text:0x6c760, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) b_get_glyph_metrics;
    
    // [bGetGlyphMetricsPlus@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x88204, 0x13864 bytes
    // win32kfull.sys .text:0x10c300, 0x1596d bytes
    // win32kfull.sys .text:0x12fd60, 0x1659e bytes
    // win32kfull.sys .text:0x10d230, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) b_get_glyph_metrics_plus;
    
    // [bGetWidthData@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x873cc, 0x13864 bytes
    // win32kfull.sys .text:0x687dc, 0x1596d bytes
    // win32kfull.sys .text:0x72930, 0x1659e bytes
    // win32kfull.sys .text:0x6934c, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) b_get_width_data;
    
    // [bGetWidthTable@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x874c0, 0x13864 bytes
    // win32kfull.sys .text:0x69d14, 0x1596d bytes
    // win32kfull.sys .text:0x72f58, 0x1659e bytes
    // win32kfull.sys .text:0x6a884, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) b_get_width_table;
    
    // [bInit@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x88400, 0x13864 bytes
    // win32kfull.sys .text:0x90d90, 0x1596d bytes
    // win32kfull.sys .text:0x1f2f0, 0x1659e bytes
    // win32kfull.sys .text:0x91900, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) b_init;
    
    // [bInitCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x84378, 0x13864 bytes
    // win32kfull.sys .text:0x6c37c, 0x1596d bytes
    // win32kfull.sys .text:0x703d4, 0x1659e bytes
    // win32kfull.sys .text:0x6ceec, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) b_init_cache;
    
    // [bInitSystemTT@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29a640, 0x13864 bytes
    // win32kfull.sys .text:0x2a76c4, 0x1596d bytes
    // win32kfull.sys .text:0x2a7e80, 0x1659e bytes
    // win32kfull.sys .text:0x2a7634, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) b_init_system_tt;
    
    // [bInsertGlyphbits@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87e5c, 0x13864 bytes
    // win32kfull.sys .text:0x6bb9c, 0x1596d bytes
    // win32kfull.sys .text:0x7135c, 0x1659e bytes
    // win32kfull.sys .text:0x6c70c, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) b_insert_glyphbits;
    
    // [bInsertGlyphbitsLookaside@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d1654, 0x13864 bytes
    // win32kfull.sys .text:0x2d4f7c, 0x1596d bytes
    // win32kfull.sys .text:0x2d696c, 0x1659e bytes
    // win32kfull.sys .text:0x2d4eec, 0x1596d bytes
    //
    _o8(sdk::unknown_ptr) b_insert_glyphbits_lookaside;
    
    // [bInsertGlyphbitsPath@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d174c, 0x13864 bytes
    // win32kfull.sys .text:0x2d5124, 0x1596d bytes
    // win32kfull.sys .text:0x2d6b04, 0x1659e bytes
    // win32kfull.sys .text:0x2d5094, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) b_insert_glyphbits_path;
    
    // [bInsertMetrics@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c2368, 0x13864 bytes
    // win32kfull.sys .text:0x6ace4, 0x1596d bytes
    // win32kfull.sys .text:0x2a7f50, 0x1659e bytes
    // win32kfull.sys .text:0x6b854, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) b_insert_metrics;
    
    // [bInsertMetricsPlus@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x84fb4, 0x13864 bytes
    // win32kfull.sys .text:0x6903c, 0x1596d bytes
    // win32kfull.sys .text:0x71798, 0x1659e bytes
    // win32kfull.sys .text:0x69bac, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) b_insert_metrics_plus;
    
    // [bInsertMetricsPlusPath@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d185c, 0x13864 bytes
    // win32kfull.sys .text:0x141fc0, 0x1596d bytes
    // win32kfull.sys .text:0x134918, 0x1659e bytes
    // win32kfull.sys .text:0x142f00, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) b_insert_metrics_plus_path;
    
    // [bInsertPathLookaside@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d1a44, 0x13864 bytes
    // win32kfull.sys .text:0x2d5258, 0x1596d bytes
    // win32kfull.sys .text:0x2d6c34, 0x1659e bytes
    // win32kfull.sys .text:0x2d51c8, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) b_insert_path_lookaside;
    
    // [bIsLinkedGlyph@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x86060, 0x13864 bytes
    // win32kfull.sys .text:0x6e19c, 0x1596d bytes
    // win32kfull.sys .text:0x11a1d0, 0x1659e bytes
    // win32kfull.sys .text:0x6ed0c, 0x1596d bytes
    //
    _p4(sdk::unknown_ptr) b_is_linked_glyph;
    
    // [bMakeInactiveHelper@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x879b4, 0x13864 bytes
    // win32kfull.sys .text:0x6eb50, 0x1596d bytes
    // win32kfull.sys .text:0x6fc90, 0x1659e bytes
    // win32kfull.sys .text:0x6f6c0, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) b_make_inactive_helper;
    
    // [bRealizeFont@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x857e0, 0x13864 bytes
    // win32kfull.sys .text:0x6c5b8, 0x1596d bytes
    // win32kfull.sys .text:0x74ae0, 0x1659e bytes
    // win32kfull.sys .text:0x6d128, 0x1596d bytes
    //
    _p6(sdk::unknown_ptr) b_realize_font;
    
    // [bSetNewFDX@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29b088, 0x13864 bytes
    // win32kfull.sys .text:0x2a822c, 0x1596d bytes
    // win32kfull.sys .text:0x2a90f0, 0x1659e bytes
    // win32kfull.sys .text:0x2a819c, 0x1596d bytes
    //
    _p7(sdk::unknown_ptr) b_set_new_fdx;
    
    // [bTextExtent@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x877c0, 0x13864 bytes
    // win32kfull.sys .text:0x29200, 0x1596d bytes
    // win32kfull.sys .text:0xc97e0, 0x1659e bytes
    // win32kfull.sys .text:0x29610, 0x1596d bytes
    //
    _p8(sdk::unknown_ptr) b_text_extent;
    
    // [cGetGlyphDataCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x85fb0, 0x13864 bytes
    // win32kfull.sys .text:0xf1d0, 0x1596d bytes
    // win32kfull.sys .text:0x12e088, 0x1659e bytes
    // win32kfull.sys .text:0xf580, 0x1596d bytes
    //
    _p9(sdk::unknown_ptr) c_get_glyph_data_cache;
    
    // [chglyGetAllHandles@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c209c, 0x13864 bytes
    // win32kfull.sys .text:0x2c839c, 0x1596d bytes
    // win32kfull.sys .text:0x2c9b24, 0x1659e bytes
    // win32kfull.sys .text:0x2c830c, 0x1596d bytes
    //
    _q0(sdk::unknown_ptr) chgly_get_all_handles;
    
    // [ComputeEUDCLogfont@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x78cc, 0x13864 bytes
    // win32kfull.sys .text:0xf92a0, 0x1596d bytes
    // win32kfull.sys .text:0x2a77fc, 0x1659e bytes
    // win32kfull.sys .text:0xfa1d4, 0x1596d bytes
    //
    _q1(sdk::unknown_ptr) compute_eudc_logfont;
    
    // [??1RFONTOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x86f70, 0x13864 bytes
    // win32kfull.sys .text:0x9858c, 0x1596d bytes
    // win32kfull.sys .text:0x72898, 0x1659e bytes
    // win32kfull.sys .text:0x990fc, 0x1596d bytes
    //
    _q2(sdk::unknown_ptr) destroy_instance;
    
    // [FindLinkedGlyphDataPlus@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x86d2c, 0x13864 bytes
    // win32kfull.sys .text:0x10cd54, 0x1596d bytes
    // win32kfull.sys .text:0x142dfc, 0x1659e bytes
    // win32kfull.sys .text:0x10dc84, 0x1596d bytes
    //
    _q3(sdk::unknown_ptr) find_linked_glyph_data_plus;
    
    // [GetEUDCDefaultFontPFE@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29a15c, 0x13864 bytes
    // win32kfull.sys .text:0x1437a0, 0x1596d bytes
    // win32kfull.sys .text:0x11a5c8, 0x1659e bytes
    // win32kfull.sys .text:0x1446e0, 0x1596d bytes
    //
    _q4(sdk::unknown_ptr) get_eudc_default_font_pfe;
    
    // [GetLinkedFontUFIs@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29a1fc, 0x13864 bytes
    // win32kfull.sys .text:0x1297c0, 0x1596d bytes
    // win32kfull.sys .text:0x11a390, 0x1659e bytes
    // win32kfull.sys .text:0x12a700, 0x1596d bytes
    //
    _q5(sdk::unknown_ptr) get_linked_font_uf_is;
    
    // [GetRealizationInfo@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x88124, 0x13864 bytes
    // win32kfull.sys .text:0x91be4, 0x1596d bytes
    // win32kfull.sys .text:0x20110, 0x1659e bytes
    // win32kfull.sys .text:0x92754, 0x1596d bytes
    //
    _q6(sdk::unknown_ptr) get_realization_info;
    
    // [gprunFindRun@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x85000, 0x13864 bytes
    // win32kfull.sys .text:0x6a1d4, 0x1596d bytes
    // win32kfull.sys .text:0x73420, 0x1659e bytes
    // win32kfull.sys .text:0x6ad44, 0x1596d bytes
    //
    _q7(sdk::unknown_ptr) gprun_find_run;
    
    // [lOverhang@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87f48, 0x13864 bytes
    // win32kfull.sys .text:0x685f8, 0x1596d bytes
    // win32kfull.sys .text:0x72a24, 0x1659e bytes
    // win32kfull.sys .text:0x69168, 0x1596d bytes
    //
    _q8(sdk::unknown_ptr) l_overhang;
    
    // [pchTranslate@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29b250, 0x13864 bytes
    // win32kfull.sys .text:0x2a843c, 0x1596d bytes
    // win32kfull.sys .text:0x2a9300, 0x1659e bytes
    // win32kfull.sys .text:0x2a83ac, 0x1596d bytes
    //
    _q9(sdk::unknown_ptr) pch_translate;
    
    // [pchTranslateUMPD@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29b3a0, 0x13864 bytes
    // win32kfull.sys .text:0x2a85a4, 0x1596d bytes
    // win32kfull.sys .text:0x2a9468, 0x1659e bytes
    // win32kfull.sys .text:0x2a8514, 0x1596d bytes
    //
    _r0(sdk::unknown_ptr) pch_translate_umpd;
    
    // [pgbCheckGlyphCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x84244, 0x13864 bytes
    // win32kfull.sys .text:0x9d238, 0x1596d bytes
    // win32kfull.sys .text:0x73f18, 0x1659e bytes
    // win32kfull.sys .text:0x9dda8, 0x1596d bytes
    //
    _r1(sdk::unknown_ptr) pgb_check_glyph_cache;
    
    // [pgdDefault@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141f40, 0x13864 bytes
    // win32kfull.sys .text:0x142250, 0x1596d bytes
    // win32kfull.sys .text:0x11a164, 0x1659e bytes
    // win32kfull.sys .text:0x143190, 0x1596d bytes
    //
    _r2(sdk::unknown_ptr) pgd_default;
    
    // [pgdGetEudcMetrics@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29a700, 0x13864 bytes
    // win32kfull.sys .text:0x147810, 0x1596d bytes
    // win32kfull.sys .text:0x2a7fe8, 0x1659e bytes
    // win32kfull.sys .text:0x148750, 0x1596d bytes
    //
    _r3(sdk::unknown_ptr) pgd_get_eudc_metrics;
    
    // [pgdGetEudcMetricsPlus@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x86ebc, 0x13864 bytes
    // win32kfull.sys .text:0x10cf44, 0x1596d bytes
    // win32kfull.sys .text:0x1438b0, 0x1659e bytes
    // win32kfull.sys .text:0x10de74, 0x1596d bytes
    //
    _r4(sdk::unknown_ptr) pgd_get_eudc_metrics_plus;
    
    // [pjTable@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29b4e0, 0x13864 bytes
    // win32kfull.sys .text:0x2a8708, 0x1596d bytes
    // win32kfull.sys .text:0x2a95cc, 0x1659e bytes
    // win32kfull.sys .text:0x2a8678, 0x1596d bytes
    //
    _r5(sdk::unknown_ptr) pj_table;
    
    // [PostTextOut@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87e04, 0x13864 bytes
    // win32kfull.sys .text:0x5ea0, 0x1596d bytes
    // win32kfull.sys .text:0x2a874c, 0x1659e bytes
    // win32kfull.sys .text:0x6250, 0x1596d bytes
    //
    _r6(sdk::unknown_ptr) post_text_out;
    
    // [PreTextOut@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87e30, 0x13864 bytes
    // win32kfull.sys .text:0x5ec8, 0x1596d bytes
    // win32kfull.sys .text:0x2a87d4, 0x1659e bytes
    // win32kfull.sys .text:0x6278, 0x1596d bytes
    //
    _r7(sdk::unknown_ptr) pre_text_out;
    
    // [pvFile@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29b58c, 0x13864 bytes
    // win32kfull.sys .text:0x2a87b8, 0x1596d bytes
    // win32kfull.sys .text:0x2a967c, 0x1659e bytes
    // win32kfull.sys .text:0x2a8728, 0x1596d bytes
    //
    _r8(sdk::unknown_ptr) pv_file;
    
    // [pvFileUMPD@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29b610, 0x13864 bytes
    // win32kfull.sys .text:0x2a883c, 0x1596d bytes
    // win32kfull.sys .text:0x2a9700, 0x1659e bytes
    // win32kfull.sys .text:0x2a87ac, 0x1596d bytes
    //
    _r9(sdk::unknown_ptr) pv_file_umpd;
    
    // [ulSimpleOrientation@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8488c, 0x13864 bytes
    // win32kfull.sys .text:0x70198, 0x1596d bytes
    // win32kfull.sys .text:0x7fa34, 0x1659e bytes
    // win32kfull.sys .text:0x70d08, 0x1596d bytes
    //
    _s0(sdk::unknown_ptr) ul_simple_orientation;
    
    // [UpdateFontLinksLockOrder@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x74d0, 0x13864 bytes
    // win32kfull.sys .text:0xf915c, 0x1596d bytes
    // win32kfull.sys .text:0x2a8908, 0x1659e bytes
    // win32kfull.sys .text:0xfa090, 0x1596d bytes
    //
    _s1(sdk::unknown_ptr) update_font_links_lock_order;
    
    // [vDeleteCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x84568, 0x13864 bytes
    // win32kfull.sys .text:0x6df40, 0x1596d bytes
    // win32kfull.sys .text:0x6f6c8, 0x1659e bytes
    // win32kfull.sys .text:0x6eab0, 0x1596d bytes
    //
    _s2(sdk::unknown_ptr) v_delete_cache;
    
    // [vDeleteRFONT@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x870ec, 0x13864 bytes
    // win32kfull.sys .text:0x6dbf8, 0x1596d bytes
    // win32kfull.sys .text:0x6f368, 0x1659e bytes
    // win32kfull.sys .text:0x6e768, 0x1596d bytes
    //
    _s3(sdk::unknown_ptr) v_delete_rfont;
    
    // [vDestroyFont@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29b6f4, 0x13864 bytes
    // win32kfull.sys .text:0x2a8934, 0x1596d bytes
    // win32kfull.sys .text:0x2a97f8, 0x1659e bytes
    // win32kfull.sys .text:0x2a88a4, 0x1596d bytes
    //
    _s4(sdk::unknown_ptr) v_destroy_font;
    
    // [vFixUpGlyphIndices@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87f24, 0x13864 bytes
    // win32kfull.sys .text:0xed318, 0x1596d bytes
    // win32kfull.sys .text:0xfc9b4, 0x1659e bytes
    // win32kfull.sys .text:0xee058, 0x1596d bytes
    //
    _s5(sdk::unknown_ptr) v_fix_up_glyph_indices;
    
    // [vFlushCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d1be0, 0x13864 bytes
    // win32kfull.sys .text:0x2d53b8, 0x1596d bytes
    // win32kfull.sys .text:0x2d6d90, 0x1659e bytes
    // win32kfull.sys .text:0x2d5328, 0x1596d bytes
    //
    _s6(sdk::unknown_ptr) v_flush_cache;
    
    // [vGetInfo@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29b74c, 0x13864 bytes
    // win32kfull.sys .text:0x2a8998, 0x1596d bytes
    // win32kfull.sys .text:0x2a985c, 0x1659e bytes
    // win32kfull.sys .text:0x2a8908, 0x1596d bytes
    //
    _s7(sdk::unknown_ptr) v_get_info;
    
    // [vInit@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x75b0, 0x13864 bytes
    // win32kfull.sys .text:0xf8988, 0x1596d bytes
    // win32kfull.sys .text:0x15f24e, 0x1659e bytes
    // win32kfull.sys .text:0xf98bc, 0x1596d bytes
    //
    _s8(sdk::unknown_ptr) v_init;
    
    // [vInitEUDC@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x86208, 0x13864 bytes
    // win32kfull.sys .text:0xf8550, 0x1596d bytes
    // win32kfull.sys .text:0x1437dc, 0x1659e bytes
    // win32kfull.sys .text:0xf9484, 0x1596d bytes
    //
    _s9(sdk::unknown_ptr) v_init_eudc;
    
    // [vInitEUDCRemote@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29a8cc, 0x13864 bytes
    // win32kfull.sys .text:0x2a78e8, 0x1596d bytes
    // win32kfull.sys .text:0x2a81d0, 0x1659e bytes
    // win32kfull.sys .text:0x2a7858, 0x1596d bytes
    //
    _t0(sdk::unknown_ptr) v_init_eudc_remote;
    
    // [vInsert@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87084, 0x13864 bytes
    // win32kfull.sys .text:0x6cf3c, 0x1596d bytes
    // win32kfull.sys .text:0x75458, 0x1659e bytes
    // win32kfull.sys .text:0x6daac, 0x1596d bytes
    //
    _t1(sdk::unknown_ptr) v_insert;
    
    // [vMakeInactive@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x852a0, 0x13864 bytes
    // win32kfull.sys .text:0x6ea1c, 0x1596d bytes
    // win32kfull.sys .text:0x6fb7c, 0x1659e bytes
    // win32kfull.sys .text:0x6f58c, 0x1596d bytes
    //
    _t2(sdk::unknown_ptr) v_make_inactive;
    
    // [vReleaseCache@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x86fa8, 0x13864 bytes
    // win32kfull.sys .text:0xf4510, 0x1596d bytes
    // win32kfull.sys .text:0x728d4, 0x1659e bytes
    // win32kfull.sys .text:0xf53a0, 0x1596d bytes
    //
    _t3(sdk::unknown_ptr) v_release_cache;
    
    // [vRemove@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x86ff4, 0x13864 bytes
    // win32kfull.sys .text:0x6de68, 0x1596d bytes
    // win32kfull.sys .text:0x6f5f0, 0x1659e bytes
    // win32kfull.sys .text:0x6e9d8, 0x1596d bytes
    //
    _t4(sdk::unknown_ptr) v_remove;
    
    // [vSetNotionalToDevice@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x87310, 0x13864 bytes
    // win32kfull.sys .text:0x6d8b0, 0x1596d bytes
    // win32kfull.sys .text:0x77014, 0x1659e bytes
    // win32kfull.sys .text:0x6e420, 0x1596d bytes
    //
    _t5(sdk::unknown_ptr) v_set_notional_to_device;
    
    // [vXlatGlyphArray@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x88e78, 0x13864 bytes
    // win32kfull.sys .text:0x6a510, 0x1596d bytes
    // win32kfull.sys .text:0x739c0, 0x1659e bytes
    // win32kfull.sys .text:0x6b080, 0x1596d bytes
    //
    _t6(sdk::unknown_ptr) v_xlat_glyph_array;
    
    // [wpgdGetLinkMetricsPlus@RFONTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x86a18, 0x13864 bytes
    // win32kfull.sys .text:0x6f31c, 0x1596d bytes
    // win32kfull.sys .text:0x119e94, 0x1659e bytes
    // win32kfull.sys .text:0x6fe8c, 0x1596d bytes
    //
    _t7(sdk::unknown_ptr) wpgd_get_link_metrics_plus;
};
#include "magic/api.end.hpp"
