#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::xepalobj
{
    // [DecShareRefCountAndInvalidatePalette@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x182ce4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) dec_share_ref_count_and_invalidate_palette;
    
    // [FreePaletteMemory@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x182d08, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) free_palette_memory;
    
    // [ulBitfieldToRGB@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdd05c, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) ul_bitfield_to_rgb;
    
    // [vRefPalette@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x77c8c, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) v_ref_palette;
    
    // [vUpdateTime@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x77c60, 0x13864 bytes
    //
    _m4(sdk::unknown_ptr) v_update_time;
    
    // [CorrectColors@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2866f8, 0x13864 bytes
    // win32kfull.sys .text:0x293f5c, 0x1596d bytes
    // win32kfull.sys .text:0x293ecc, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) correct_colors;
    
    // [apalColorSet@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x261774, 0x13864 bytes
    // win32kfull.sys .text:0x277004, 0x1596d bytes
    // win32kfull.sys .text:0x276c60, 0x1659e bytes
    // win32kfull.sys .text:0x276f74, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) apal_color_set;
    
    // [apalResetColorTable@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5adb8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1c5f4, 0x243e0 bytes
    // win32kbase.sys .text:0xd6b84, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc29c, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) apal_reset_color_table;
    
    // [bDeletePalette@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5abd4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ab88, 0x243e0 bytes
    // win32kbase.sys .text:0x93428, 0x27ef0 bytes
    // win32kbase.sys .text:0x45628, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) b_delete_palette;
    
    // [bEqualEntries@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb0d8, 0x13864 bytes
    // win32kfull.sys .text:0xb19c, 0x1596d bytes
    // win32kfull.sys .text:0xeeac8, 0x1659e bytes
    // win32kfull.sys .text:0xb54c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) b_equal_entries;
    
    // [bGenColorXlate555@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1282b0, 0x13864 bytes
    // win32kfull.sys .text:0x143724, 0x1596d bytes
    // win32kfull.sys .text:0x1351e0, 0x1659e bytes
    // win32kfull.sys .text:0x144664, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) b_gen_color_xlate555;
    
    // [bIsMonochrome@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x77c40, 0x13864 bytes
    // win32kfull.sys .text:0x10ec20, 0x1596d bytes
    // win32kfull.sys .text:0xfc58c, 0x1659e bytes
    // win32kfull.sys .text:0x10fb50, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) b_is_monochrome;
    
    // [bSwap@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b60ac, 0x13864 bytes
    // win32kfull.sys .text:0x2bc850, 0x1596d bytes
    // win32kfull.sys .text:0x2bdca4, 0x1659e bytes
    // win32kfull.sys .text:0x2bc7c0, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) b_swap;
    
    // [pGetRGBXlate@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x128324, 0x13864 bytes
    // win32kfull.sys .text:0x1436d4, 0x1596d bytes
    // win32kfull.sys .text:0x135190, 0x1659e bytes
    // win32kfull.sys .text:0x144614, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) p_get_rgb_xlate;
    
    // [ulAnimatePalette@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b62d4, 0x13864 bytes
    // win32kfull.sys .text:0x2bcad0, 0x1596d bytes
    // win32kfull.sys .text:0x2bdf38, 0x1659e bytes
    // win32kfull.sys .text:0x2bca40, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) ul_animate_palette;
    
    // [ulDispatchGFPEFunction@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5a980, 0x1eb80 bytes
    // win32kbase.sys .text:0x322b0, 0x243e0 bytes
    // win32kbase.sys .text:0x94f20, 0x27ef0 bytes
    // win32kbase.sys .text:0x45d80, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) ul_dispatch_gfpe_function;
    
    // [ulGetEntries@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x77ca4, 0x13864 bytes
    // win32kfull.sys .text:0x11189c, 0x1596d bytes
    // win32kfull.sys .text:0x10413c, 0x1659e bytes
    // win32kfull.sys .text:0x1127cc, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) ul_get_entries;
    
    // [ulGetMatchFromPalentry@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb8520, 0x1eb80 bytes
    // win32kbase.sys .text:0x14fd70, 0x243e0 bytes
    // win32kbase.sys .text:0x182d48, 0x27ef0 bytes
    // win32kbase.sys .text:0x14dc10, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) ul_get_match_from_palentry;
    
    // [ulGetNearestFromPalentry@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2996ac, 0x13864 bytes
    // win32kbase.sys .text:0xa5580, 0x243e0 bytes
    // win32kbase.sys .text:0xb30b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x94880, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) ul_get_nearest_from_palentry;
    
    // [ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc54e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x32490, 0x243e0 bytes
    // win32kbase.sys .text:0xdc400, 0x27ef0 bytes
    // win32kbase.sys .text:0x483b0, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) ul_get_nearest_from_palentry_no_exact_match_first;
    
    // [ulIndexToRGB@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5ab00, 0x1eb80 bytes
    // win32kbase.sys .text:0x98fd0, 0x243e0 bytes
    // win32kbase.sys .text:0x97ae0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7d150, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) ul_index_to_rgb;
    
    // [ulSetEntries@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b6504, 0x13864 bytes
    // win32kfull.sys .text:0x2bcd38, 0x1596d bytes
    // win32kfull.sys .text:0x2be1a4, 0x1659e bytes
    // win32kfull.sys .text:0x2bcca8, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) ul_set_entries;
    
    // [ulTime@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x77df8, 0x13864 bytes
    // win32kfull.sys .text:0xe2bdc, 0x1596d bytes
    // win32kfull.sys .text:0xdce10, 0x1659e bytes
    // win32kfull.sys .text:0xe389c, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) ul_time;
    
    // [vAddToList@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5a8a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xaf6c4, 0x243e0 bytes
    // win32kbase.sys .text:0x93010, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5724, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) v_add_to_list;
    
    // [vComputeCallTables@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5aa80, 0x1eb80 bytes
    // win32kbase.sys .text:0x9ea30, 0x243e0 bytes
    // win32kbase.sys .text:0x95b80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d880, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) v_compute_call_tables;
    
    // [vCopy_cmykquad@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b65ec, 0x13864 bytes
    // win32kfull.sys .text:0x2bce6c, 0x1596d bytes
    // win32kfull.sys .text:0x2be2d8, 0x1659e bytes
    // win32kfull.sys .text:0x2bcddc, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) v_copy_cmykquad;
    
    // [vCopy_rgbquad@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x77d1c, 0x13864 bytes
    // win32kfull.sys .text:0xfa76c, 0x1596d bytes
    // win32kfull.sys .text:0xc768, 0x1659e bytes
    // win32kfull.sys .text:0xfb69c, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) v_copy_rgbquad;
    
    // [vFill_rgbquads@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x77d80, 0x13864 bytes
    // win32kfull.sys .text:0x10760, 0x1596d bytes
    // win32kfull.sys .text:0x5e568, 0x1659e bytes
    // win32kfull.sys .text:0x10b10, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) v_fill_rgbquads;
    
    // [vFill_triples@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b6620, 0x13864 bytes
    // win32kfull.sys .text:0x2bcec8, 0x1596d bytes
    // win32kfull.sys .text:0x2be334, 0x1659e bytes
    // win32kfull.sys .text:0x2bce38, 0x1596d bytes
    //
    _o8(sdk::unknown_ptr) v_fill_triples;
    
    // [vGetEntriesFrom@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b6678, 0x13864 bytes
    // win32kfull.sys .text:0x2bcf28, 0x1596d bytes
    // win32kfull.sys .text:0x2be398, 0x1659e bytes
    // win32kfull.sys .text:0x2bce98, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) v_get_entries_from;
    
    // [vInit256Default@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x128370, 0x13864 bytes
    // win32kfull.sys .text:0xe2bf8, 0x1596d bytes
    // win32kfull.sys .text:0xdce2c, 0x1659e bytes
    // win32kfull.sys .text:0xe38b8, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) v_init256_default;
    
    // [vInit256Rainbow@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1283c8, 0x13864 bytes
    // win32kfull.sys .text:0xe295c, 0x1596d bytes
    // win32kfull.sys .text:0xdcbb0, 0x1659e bytes
    // win32kfull.sys .text:0xe361c, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) v_init256_rainbow;
    
    // [vMakeNoXlate@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5a940, 0x1eb80 bytes
    // win32kbase.sys .text:0xb63f0, 0x243e0 bytes
    // win32kbase.sys .text:0x93730, 0x27ef0 bytes
    // win32kbase.sys .text:0xafd30, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) v_make_no_xlate;
    
    // [vRemoveFromList@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5a800, 0x1eb80 bytes
    // win32kbase.sys .text:0xaf768, 0x243e0 bytes
    // win32kbase.sys .text:0x930b4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa57c8, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) v_remove_from_list;
    
    // [vUnrefPalette@XEPALOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc55c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4c4b0, 0x243e0 bytes
    // win32kbase.sys .text:0x4e580, 0x27ef0 bytes
    // win32kbase.sys .text:0x33980, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) v_unref_palette;
};
#include "magic/api.end.hpp"
