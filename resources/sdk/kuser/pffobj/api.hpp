#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pffobj
{
    // [bAttemptReload@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bac8c, 0x1596d bytes
    // win32kfull.sys .text:0x2bc100, 0x1659e bytes
    // win32kfull.sys .text:0x2babfc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_attempt_reload;
    
    // [bCheckFntFileInfo@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6a9d4, 0x1596d bytes
    // win32kfull.sys .text:0x744f8, 0x1659e bytes
    // win32kfull.sys .text:0x6b544, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_check_fnt_file_info;
    
    // [FontManagement@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c1ed0, 0x1596d bytes
    // win32kfull.sys .text:0x2c3704, 0x1659e bytes
    // win32kfull.sys .text:0x2c1e40, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) font_management;
    
    // [GetTrueTypeFile@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c1f84, 0x1596d bytes
    // win32kfull.sys .text:0x2c37b8, 0x1659e bytes
    // win32kfull.sys .text:0x2c1ef4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_true_type_file;
    
    // [QueryFontData@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x69c70, 0x1596d bytes
    // win32kfull.sys .text:0x714ac, 0x1659e bytes
    // win32kfull.sys .text:0x6a7e0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) query_font_data;
    
    // [QueryFontTree@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f020, 0x1596d bytes
    // win32kfull.sys .text:0x103ca4, 0x1659e bytes
    // win32kfull.sys .text:0x6fb90, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) query_font_tree;
    
    // [QueryGlyphAttrs@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c1ffc, 0x1596d bytes
    // win32kfull.sys .text:0x2c3830, 0x1659e bytes
    // win32kfull.sys .text:0x2c1f6c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) query_glyph_attrs;
    
    // [QueryGlyphMetricsPlusBits@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6972c, 0x1596d bytes
    // win32kfull.sys .text:0x71968, 0x1659e bytes
    // win32kfull.sys .text:0x6a29c, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) query_glyph_metrics_plus_bits;
    
    // [QueryTrueTypeOutline@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141b9c, 0x1596d bytes
    // win32kfull.sys .text:0x13428c, 0x1659e bytes
    // win32kfull.sys .text:0x142adc, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) query_true_type_outline;
    
    // [QueryTrueTypeTable@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6964c, 0x1596d bytes
    // win32kfull.sys .text:0x7108c, 0x1659e bytes
    // win32kfull.sys .text:0x6a1bc, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) query_true_type_table;
    
    // [bAddHash@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80808, 0x13864 bytes
    // win32kfull.sys .text:0x38614, 0x1596d bytes
    // win32kfull.sys .text:0x7769c, 0x1659e bytes
    // win32kfull.sys .text:0x38a24, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) b_add_hash;
    
    // [bAddPvtData@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b50a8, 0x13864 bytes
    // win32kfull.sys .text:0x2bab90, 0x1596d bytes
    // win32kfull.sys .text:0x2bbff8, 0x1659e bytes
    // win32kfull.sys .text:0x2bab00, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) b_add_pvt_data;
    
    // [bDeleteLoadRef@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80ad0, 0x13864 bytes
    // win32kfull.sys .text:0x3b218, 0x1596d bytes
    // win32kfull.sys .text:0x7d084, 0x1659e bytes
    // win32kfull.sys .text:0x3b628, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) b_delete_load_ref;
    
    // [bRemovePvtData@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b573c, 0x13864 bytes
    // win32kfull.sys .text:0x2bb40c, 0x1596d bytes
    // win32kfull.sys .text:0x2bc878, 0x1659e bytes
    // win32kfull.sys .text:0x2bb37c, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) b_remove_pvt_data;
    
    // [pPvtDataMatch@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b57d8, 0x13864 bytes
    // win32kfull.sys .text:0x2bb4c4, 0x1596d bytes
    // win32kfull.sys .text:0x2bc930, 0x1659e bytes
    // win32kfull.sys .text:0x2bb434, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) p_pvt_data_match;
    
    // [uGlobalUniqueness@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3291b8, 0x13864 bytes
    // win32kfull.sys .data:0x33b000, 0x1596d bytes
    // win32kfull.sys .data:0x339338, 0x1659e bytes
    // win32kfull.sys .data:0x33b030, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) u_global_uniqueness;
    
    // [vDeleteRFONTRef@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80cb0, 0x13864 bytes
    // win32kfull.sys .text:0x6dffc, 0x1596d bytes
    // win32kfull.sys .text:0x6f784, 0x1659e bytes
    // win32kfull.sys .text:0x6eb6c, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) v_delete_rfont_ref;
    
    // [vGetEUDC@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80708, 0x13864 bytes
    // win32kfull.sys .text:0x3b358, 0x1596d bytes
    // win32kfull.sys .text:0x7d734, 0x1659e bytes
    // win32kfull.sys .text:0x3b768, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) v_get_eudc;
    
    // [vKill@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80a90, 0x13864 bytes
    // win32kfull.sys .text:0x385cc, 0x1596d bytes
    // win32kfull.sys .text:0x69e8c, 0x1659e bytes
    // win32kfull.sys .text:0x389dc, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) v_kill;
    
    // [vPFFC_Delete@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80b3c, 0x13864 bytes
    // win32kfull.sys .text:0x3b9fc, 0x1596d bytes
    // win32kfull.sys .text:0x6b344, 0x1659e bytes
    // win32kfull.sys .text:0x3be0c, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) v_pffc_delete;
    
    // [vPFFC_DeleteAndCleanup@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b5840, 0x13864 bytes
    // win32kfull.sys .text:0x2bb51c, 0x1596d bytes
    // win32kfull.sys .text:0x2bc988, 0x1659e bytes
    // win32kfull.sys .text:0x2bb48c, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) v_pffc_delete_and_cleanup;
    
    // [vRemoveHash@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80960, 0x13864 bytes
    // win32kfull.sys .text:0x38a18, 0x1596d bytes
    // win32kfull.sys .text:0x779b8, 0x1659e bytes
    // win32kfull.sys .text:0x38e28, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) v_remove_hash;
    
    // [vSetUniqueness@PFFOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x806b8, 0x13864 bytes
    // win32kfull.sys .text:0x1139b4, 0x1596d bytes
    // win32kfull.sys .text:0x106aec, 0x1659e bytes
    // win32kfull.sys .text:0x1148e4, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) v_set_uniqueness;
};
#include "magic/api.end.hpp"
