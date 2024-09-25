#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pdevobj
{
    // [bValid@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x5cfd0, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_valid;
    
    // [FontManagement@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2ba928, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) font_management;
    
    // [Free@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x840c0, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) free;
    
    // [GetTrueTypeFile@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2ba9f0, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) get_true_type_file;
    
    // [QueryAdvanceWidths@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x83060, 0x13864 bytes
    //
    _m4(sdk::unknown_ptr) query_advance_widths;
    
    // [QueryFontData@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x82f9c, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) query_font_data;
    
    // [QueryFontTree@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x84018, 0x13864 bytes
    //
    _m6(sdk::unknown_ptr) query_font_tree;
    
    // [QueryGlyphAttrs@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2baa7c, 0x13864 bytes
    //
    _m7(sdk::unknown_ptr) query_glyph_attrs;
    
    // [QueryTrueTypeOutline@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2bab04, 0x13864 bytes
    //
    _m8(sdk::unknown_ptr) query_true_type_outline;
    
    // [QueryTrueTypeTable@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x8311c, 0x13864 bytes
    //
    _m9(sdk::unknown_ptr) query_true_type_table;
    
    // [UnloadFontFile@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x841c8, 0x13864 bytes
    //
    _n0(sdk::unknown_ptr) unload_font_file;
    
    // [vDeviceBitmapAdapterHint@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x27e81c, 0x13864 bytes
    //
    _n1(sdk::unknown_ptr) v_device_bitmap_adapter_hint;
    
    // [bGammaRampCapable@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x159824, 0x243e0 bytes
    // win32kbase.sys .text:0x1576c4, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) b_gamma_ramp_capable;
    
    // [ComposeDeviceGammaRampsUnsafe@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2b5600, 0x1596d bytes
    // win32kfull.sys .text:0x2b5570, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) compose_device_gamma_ramps_unsafe;
    
    // [GetAppliedGammaRampTable@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1594ec, 0x243e0 bytes
    // win32kbase.sys .text:0x15738c, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) get_applied_gamma_ramp_table;
    
    // [bDisableHalftone@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x111b38, 0x1596d bytes
    // win32kfull.sys .text:0x106178, 0x1659e bytes
    // win32kfull.sys .text:0x112a68, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) b_disable_halftone;
    
    // [CompletePDEV@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x44544, 0x1eb80 bytes
    // win32kbase.sys .text:0xc03a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb9e70, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) complete_pdev;
    
    // [bAllowShareAccess@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x44620, 0x1eb80 bytes
    // win32kbase.sys .text:0x663f0, 0x243e0 bytes
    // win32kbase.sys .text:0x53890, 0x27ef0 bytes
    // win32kbase.sys .text:0x30230, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) b_allow_share_access;
    
    // [bCreateDefaultBrushes@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x82ef0, 0x13864 bytes
    // win32kfull.sys .text:0x11d138, 0x1596d bytes
    // win32kfull.sys .text:0x10e0f8, 0x1659e bytes
    // win32kfull.sys .text:0x11e038, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) b_create_default_brushes;
    
    // [bCreateHalftoneBrushes@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27e634, 0x13864 bytes
    // win32kfull.sys .text:0x9a68, 0x1596d bytes
    // win32kfull.sys .text:0x130b28, 0x1659e bytes
    // win32kfull.sys .text:0x9e18, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) b_create_halftone_brushes;
    
    // [bDisabled@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4469c, 0x1eb80 bytes
    // win32kbase.sys .text:0x17ee4, 0x243e0 bytes
    // win32kbase.sys .text:0x91074, 0x27ef0 bytes
    // win32kbase.sys .text:0x43e94, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) b_disabled;
    
    // [bEnableHalftone@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x83510, 0x13864 bytes
    // win32kfull.sys .text:0xa054, 0x1596d bytes
    // win32kfull.sys .text:0xed974, 0x1659e bytes
    // win32kfull.sys .text:0xa404, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) b_enable_halftone;
    
    // [bGetDeviceFonts@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x83fd4, 0x13864 bytes
    // win32kfull.sys .text:0x377c8, 0x1596d bytes
    // win32kfull.sys .text:0x111d98, 0x1659e bytes
    // win32kfull.sys .text:0x37bd8, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) b_get_device_fonts;
    
    // [bLddmDriver@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x82f7c, 0x13864 bytes
    // win32kfull.sys .text:0x2da44, 0x1596d bytes
    // win32kfull.sys .text:0xc72d0, 0x1659e bytes
    // win32kfull.sys .text:0x2de54, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) b_lddm_driver;
    
    // [bMakeSurface@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x45310, 0x1eb80 bytes
    // win32kbase.sys .text:0x31a60, 0x243e0 bytes
    // win32kbase.sys .text:0x8fd90, 0x27ef0 bytes
    // win32kbase.sys .text:0x51390, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) b_make_surface;
    
    // [bRenderLddmDriver@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x44494, 0x1eb80 bytes
    // win32kbase.sys .text:0x3873c, 0x243e0 bytes
    // win32kbase.sys .text:0x51e84, 0x27ef0 bytes
    // win32kbase.sys .text:0x40930, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) b_render_lddm_driver;
    
    // [cFonts@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x44b20, 0x1eb80 bytes
    // win32kbase.sys .text:0x2af80, 0x243e0 bytes
    // win32kbase.sys .text:0x6c080, 0x27ef0 bytes
    // win32kbase.sys .text:0x8a3e0, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) c_fonts;
    
    // [cInactive@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x832c8, 0x13864 bytes
    // win32kfull.sys .text:0xf913c, 0x1596d bytes
    // win32kfull.sys .text:0x6b798, 0x1659e bytes
    // win32kfull.sys .text:0xfa070, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) c_inactive;
    
    // [??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x44b50, 0x1eb80 bytes
    // win32kbase.sys .text:0xc8c30, 0x243e0 bytes
    // win32kbase.sys .text:0x924e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x51700, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) construct_instance;
    
    // [??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc4830, 0x1eb80 bytes
    // win32kbase.sys .text:0x14ed74, 0x243e0 bytes
    // win32kbase.sys .text:0x181de8, 0x27ef0 bytes
    // win32kbase.sys .text:0x14c8a4, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) construct_instance_;
    
    // [DestroyFont@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x833a4, 0x13864 bytes
    // win32kfull.sys .text:0x6e108, 0x1596d bytes
    // win32kfull.sys .text:0x6fa90, 0x1659e bytes
    // win32kfull.sys .text:0x6ec78, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) destroy_font;
    
    // [EnablePDEV@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x444c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbbbf0, 0x243e0 bytes
    // win32kbase.sys .text:0x92f00, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5c20, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) enable_pdev;
    
    // [Escape@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ba870, 0x13864 bytes
    // win32kfull.sys .text:0x3d3b8, 0x1596d bytes
    // win32kfull.sys .text:0x1318e4, 0x1659e bytes
    // win32kfull.sys .text:0x3d7c8, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) escape;
    
    // [LoadFontFile@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x832e0, 0x13864 bytes
    // win32kfull.sys .text:0x3b978, 0x1596d bytes
    // win32kfull.sys .text:0x6b2c0, 0x1659e bytes
    // win32kfull.sys .text:0x3bd88, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) load_font_file;
    
    // [pAdapterLuid@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x445f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x387f0, 0x243e0 bytes
    // win32kbase.sys .text:0x51bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x40860, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) p_adapter_luid;
    
    // [pDevHTInfo@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x83478, 0x13864 bytes
    // win32kfull.sys .text:0x14fb8, 0x1596d bytes
    // win32kfull.sys .text:0x5cfb0, 0x1659e bytes
    // win32kfull.sys .text:0x15368, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) p_dev_ht_info;
    
    // [pRenderAdapter@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc8580, 0x1eb80 bytes
    // win32kbase.sys .text:0x1530c8, 0x243e0 bytes
    // win32kbase.sys .text:0x186318, 0x27ef0 bytes
    // win32kbase.sys .text:0x150f68, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) p_render_adapter;
    
    // [pRenderAdapterLuid@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x445a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x14fa00, 0x243e0 bytes
    // win32kbase.sys .text:0x182930, 0x27ef0 bytes
    // win32kbase.sys .text:0x14d780, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) p_render_adapter_luid;
    
    // [prfntActive@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x83298, 0x13864 bytes
    // win32kfull.sys .text:0x6cfd4, 0x1596d bytes
    // win32kfull.sys .text:0x76fc4, 0x1659e bytes
    // win32kfull.sys .text:0x6db44, 0x1596d bytes
    //
    _p8(sdk::unknown_ptr) prfnt_active;
    
    // [prfntInactive@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x832b0, 0x13864 bytes
    // win32kfull.sys .text:0x6efd8, 0x1596d bytes
    // win32kfull.sys .text:0x6fb28, 0x1659e bytes
    // win32kfull.sys .text:0x6fb48, 0x1596d bytes
    //
    _p9(sdk::unknown_ptr) prfnt_inactive;
    
    // [QueryFont@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x84130, 0x13864 bytes
    // win32kfull.sys .text:0x39eec, 0x1596d bytes
    // win32kfull.sys .text:0x7f75c, 0x1659e bytes
    // win32kfull.sys .text:0x3a2fc, 0x1596d bytes
    //
    _q0(sdk::unknown_ptr) query_font;
    
    // [QueryFontFile@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x83200, 0x13864 bytes
    // win32kfull.sys .text:0x117350, 0x1596d bytes
    // win32kfull.sys .text:0x109020, 0x1659e bytes
    // win32kfull.sys .text:0x118280, 0x1596d bytes
    //
    _q1(sdk::unknown_ptr) query_font_file;
    
    // [sizl@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2617cc, 0x13864 bytes
    // win32kfull.sys .text:0x27706c, 0x1596d bytes
    // win32kfull.sys .text:0x276cc8, 0x1659e bytes
    // win32kfull.sys .text:0x276fdc, 0x1596d bytes
    //
    _q2(sdk::unknown_ptr) sizl;
    
    // [StateFlags@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x261750, 0x13864 bytes
    // win32kfull.sys .text:0x276fd8, 0x1596d bytes
    // win32kfull.sys .text:0x276c34, 0x1659e bytes
    // win32kfull.sys .text:0x276f48, 0x1596d bytes
    //
    _q3(sdk::unknown_ptr) state_flags;
    
    // [ulLogPixelsX@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x839f4, 0x13864 bytes
    // win32kfull.sys .text:0x66e74, 0x1596d bytes
    // win32kfull.sys .text:0x758b4, 0x1659e bytes
    // win32kfull.sys .text:0x679e4, 0x1596d bytes
    //
    _q4(sdk::unknown_ptr) ul_log_pixels_x;
    
    // [ulLogPixelsY@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x83a28, 0x13864 bytes
    // win32kfull.sys .text:0x66e38, 0x1596d bytes
    // win32kfull.sys .text:0x75868, 0x1659e bytes
    // win32kfull.sys .text:0x679a8, 0x1596d bytes
    //
    _q5(sdk::unknown_ptr) ul_log_pixels_y;
    
    // [UpdateDisplayMode@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc50b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x14f6f4, 0x243e0 bytes
    // win32kbase.sys .text:0x182644, 0x27ef0 bytes
    // win32kbase.sys .text:0x14d470, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) update_display_mode;
    
    // [vClearSurface@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc5354, 0x1eb80 bytes
    // win32kbase.sys .text:0x14fa8c, 0x243e0 bytes
    // win32kbase.sys .text:0x1829b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x14d80c, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) v_clear_surface;
    
    // [vDeleteHTPATSIZEUSERAllocations@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x44560, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ad64, 0x243e0 bytes
    // win32kbase.sys .text:0x937dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x45874, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) v_delete_htpatsizeuser_allocations;
    
    // [vDisableSurface@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x448b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x19360, 0x243e0 bytes
    // win32kbase.sys .text:0x923b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x45310, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) v_disable_surface;
    
    // [vFilterDriverHooks@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x44974, 0x1eb80 bytes
    // win32kbase.sys .text:0x31c28, 0x243e0 bytes
    // win32kbase.sys .text:0x8ff40, 0x27ef0 bytes
    // win32kbase.sys .text:0x51558, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) v_filter_driver_hooks;
    
    // [vProfileDriver@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x83a5c, 0x13864 bytes
    // win32kfull.sys .text:0x11cad8, 0x1596d bytes
    // win32kfull.sys .text:0x80e08, 0x1659e bytes
    // win32kfull.sys .text:0x11da48, 0x1596d bytes
    //
    _r1(sdk::unknown_ptr) v_profile_driver;
    
    // [vReferencePdev@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x44880, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e290, 0x243e0 bytes
    // win32kbase.sys .text:0x8d2d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d110, 0x243e0 bytes
    //
    _r2(sdk::unknown_ptr) v_reference_pdev;
    
    // [vSync@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x44750, 0x1eb80 bytes
    // win32kbase.sys .text:0x374e0, 0x243e0 bytes
    // win32kbase.sys .text:0x60d30, 0x27ef0 bytes
    // win32kbase.sys .text:0x4c780, 0x243e0 bytes
    //
    _r3(sdk::unknown_ptr) v_sync;
    
    // [vUnreferencePdev@PDEVOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x447c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x50170, 0x243e0 bytes
    // win32kbase.sys .text:0x366e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a5b0, 0x243e0 bytes
    //
    _r4(sdk::unknown_ptr) v_unreference_pdev;
};
#include "magic/api.end.hpp"
