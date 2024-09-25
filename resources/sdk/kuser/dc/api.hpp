#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dc
{
    // [bShareAccess@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x56424, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) b_share_access;
    
    // [eptlOrigin@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x6bbf8, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) eptl_origin;
    
    // [bDpiScaleTransform@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1374d0, 0x1596d bytes
    // win32kfull.sys .text:0x110bd0, 0x1659e bytes
    // win32kfull.sys .text:0x138410, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_dpi_scale_transform;
    
    // [bDpiScaledSurface@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117328, 0x1596d bytes
    // win32kfull.sys .text:0x10bf18, 0x1659e bytes
    // win32kfull.sys .text:0x118258, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_dpi_scaled_surface;
    
    // [GetCachedDpiScaleValue@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfca38, 0x1596d bytes
    // win32kfull.sys .text:0x75cc, 0x1659e bytes
    // win32kfull.sys .text:0xfd968, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) get_cached_dpi_scale_value;
    
    // [pSurface@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1172f0, 0x1596d bytes
    // win32kfull.sys .text:0x10bee0, 0x1659e bytes
    // win32kfull.sys .text:0x118220, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) p_surface;
    
    // [prgnRao@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8951c, 0x1596d bytes
    // win32kfull.sys .text:0x12d2c, 0x1659e bytes
    // win32kfull.sys .text:0x8a08c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) prgn_rao;
    
    // [prgnVisSnap@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x88e10, 0x1596d bytes
    // win32kfull.sys .text:0x130cc, 0x1659e bytes
    // win32kfull.sys .text:0x89980, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) prgn_vis_snap;
    
    // [RestoreAttributes@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x59d80, 0x243e0 bytes
    // win32kbase.sys .text:0x45850, 0x27ef0 bytes
    // win32kbase.sys .text:0x231c0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) restore_attributes;
    
    // [SaveAttributes@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x59cd0, 0x243e0 bytes
    // win32kbase.sys .text:0x3d100, 0x27ef0 bytes
    // win32kbase.sys .text:0x23110, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) save_attributes;
    
    // [SetCachedDpiScaleValue@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14e3c0, 0x243e0 bytes
    // win32kbase.sys .text:0x181460, 0x27ef0 bytes
    // win32kbase.sys .text:0x14bc20, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_cached_dpi_scale_value;
    
    // [vClearDpiScaling@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14e4a8, 0x243e0 bytes
    // win32kbase.sys .text:0x3c5d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x14bd08, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) v_clear_dpi_scaling;
    
    // [vGet_sizlWindow@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14dfa8, 0x1596d bytes
    // win32kfull.sys .text:0x142694, 0x1659e bytes
    // win32kfull.sys .text:0x14eee8, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_get_sizl_window;
    
    // [vMarkTransformDirty@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26f4b4, 0x1596d bytes
    // win32kfull.sys .text:0x26f6b0, 0x1659e bytes
    // win32kfull.sys .text:0x26f404, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) v_mark_transform_dirty;
    
    // [vSetDpiScaling@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x273f10, 0x1596d bytes
    // win32kfull.sys .text:0x15de26, 0x1659e bytes
    // win32kfull.sys .text:0x273e80, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) v_set_dpi_scaling;
    
    // [vUpdateCachedDPIScaleValue@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x273fdc, 0x1596d bytes
    // win32kfull.sys .text:0x15de74, 0x1659e bytes
    // win32kfull.sys .text:0x273f4c, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) v_update_cached_dpi_scale_value;
    
    // [vUpdateScaledRegions@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9fb80, 0x243e0 bytes
    // win32kbase.sys .text:0xac090, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e970, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) v_update_scaled_regions;
    
    // [bCompute@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x55c70, 0x1eb80 bytes
    // win32kbase.sys .text:0x4add0, 0x243e0 bytes
    // win32kbase.sys .text:0x30990, 0x27ef0 bytes
    // win32kbase.sys .text:0x324b0, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) b_compute;
    
    // [bInactive@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a5d30, 0x13864 bytes
    // win32kfull.sys .text:0x135594, 0x1596d bytes
    // win32kfull.sys .text:0x12c6c4, 0x1659e bytes
    // win32kfull.sys .text:0x1364d4, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) b_inactive;
    
    // [bIsCMYKColor@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12bbb0, 0x13864 bytes
    // win32kfull.sys .text:0x1095dc, 0x1596d bytes
    // win32kfull.sys .text:0xa68c, 0x1659e bytes
    // win32kfull.sys .text:0x10a50c, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) b_is_cmyk_color;
    
    // [bMakeInfoDC@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc3ec0, 0x1eb80 bytes
    // win32kbase.sys .text:0x3d2e0, 0x243e0 bytes
    // win32kbase.sys .text:0xdc1b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3f290, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) b_make_info_dc;
    
    // [bOldPenNominal@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x56660, 0x1eb80 bytes
    // win32kbase.sys .text:0xcba5c, 0x243e0 bytes
    // win32kbase.sys .text:0xb7ccc, 0x27ef0 bytes
    // win32kbase.sys .text:0xca3fc, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) b_old_pen_nominal;
    
    // [bReset@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4400, 0x13864 bytes
    // win32kfull.sys .text:0xd1bb0, 0x1596d bytes
    // win32kfull.sys .text:0xb6f28, 0x1659e bytes
    // win32kfull.sys .text:0xd2870, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) b_reset;
    
    // [bSetDefaultRegion@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x566d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x57d40, 0x243e0 bytes
    // win32kbase.sys .text:0x3a0c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f8c0, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) b_set_default_region;
    
    // [bTightenRao@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6c3b0, 0x13864 bytes
    // win32kfull.sys .text:0x437b8, 0x1596d bytes
    // win32kfull.sys .text:0xbfec, 0x1659e bytes
    // win32kfull.sys .text:0x43bc8, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) b_tighten_rao;
    
    // [bUseMetaPtoD@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6bbc0, 0x13864 bytes
    // win32kfull.sys .text:0x467f0, 0x1596d bytes
    // win32kfull.sys .text:0x765a4, 0x1659e bytes
    // win32kfull.sys .text:0x46c00, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) b_use_meta_pto_d;
    
    // [dwSetLayout@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x558d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa97c0, 0x243e0 bytes
    // win32kbase.sys .text:0x524d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x65680, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) dw_set_layout;
    
    // [hpath@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb8480, 0x1eb80 bytes
    // win32kbase.sys .text:0xcb8c0, 0x243e0 bytes
    // win32kbase.sys .text:0xdc4e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xca260, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) hpath;
    
    // [iCombine@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc67a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1517c0, 0x243e0 bytes
    // win32kbase.sys .text:0x184a10, 0x27ef0 bytes
    // win32kbase.sys .text:0x14f660, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) i_combine;
    
    // [iSelect@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6bfcc, 0x13864 bytes
    // win32kfull.sys .text:0x88e3c, 0x1596d bytes
    // win32kfull.sys .text:0x176a4, 0x1659e bytes
    // win32kfull.sys .text:0x899ac, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) i_select;
    
    // [iSelectTightenRao@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6bea8, 0x13864 bytes
    // win32kfull.sys .text:0x43b10, 0x1596d bytes
    // win32kfull.sys .text:0xc34c, 0x1659e bytes
    // win32kfull.sys .text:0x43f20, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) i_select_tighten_rao;
    
    // [iSetMapMode@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4464, 0x13864 bytes
    // win32kfull.sys .text:0x1002f0, 0x1596d bytes
    // win32kfull.sys .text:0x131e70, 0x1659e bytes
    // win32kfull.sys .text:0x101220, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) i_set_map_mode;
    
    // [iSetMetaRgn@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6c29c, 0x13864 bytes
    // win32kfull.sys .text:0xf6ef0, 0x1596d bytes
    // win32kfull.sys .text:0xea280, 0x1659e bytes
    // win32kfull.sys .text:0xf7d80, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) i_set_meta_rgn;
    
    // [MirrorWindowOrg@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12bbc8, 0x13864 bytes
    // win32kfull.sys .text:0x11f49c, 0x1596d bytes
    // win32kfull.sys .text:0x141888, 0x1659e bytes
    // win32kfull.sys .text:0x12039c, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) mirror_window_org;
    
    // [vCalcFillOrigin@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x56fc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4c778, 0x243e0 bytes
    // win32kbase.sys .text:0x54090, 0x27ef0 bytes
    // win32kbase.sys .text:0x172c4, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) v_calc_fill_origin;
    
    // [vClearRendering@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6bc10, 0x13864 bytes
    // win32kfull.sys .text:0x8efc0, 0x1596d bytes
    // win32kfull.sys .text:0x1da60, 0x1659e bytes
    // win32kfull.sys .text:0x8fb30, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) v_clear_rendering;
    
    // [vComputePageXform@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b2568, 0x13864 bytes
    // win32kfull.sys .text:0x14eaec, 0x1596d bytes
    // win32kfull.sys .text:0x1322e4, 0x1659e bytes
    // win32kfull.sys .text:0x14fa2c, 0x1596d bytes
    //
    _p6(sdk::unknown_ptr) v_compute_page_xform;
    
    // [vCopyTo@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x56d60, 0x1eb80 bytes
    // win32kbase.sys .text:0x4c868, 0x243e0 bytes
    // win32kbase.sys .text:0x4be04, 0x27ef0 bytes
    // win32kbase.sys .text:0x17138, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) v_copy_to;
    
    // [vMakeIso@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc8640, 0x1eb80 bytes
    // win32kbase.sys .text:0x153338, 0x243e0 bytes
    // win32kbase.sys .text:0x186598, 0x27ef0 bytes
    // win32kbase.sys .text:0x1511d8, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) v_make_iso;
    
    // [vRealizeLineAttrs@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x56ee0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9ecd4, 0x243e0 bytes
    // win32kbase.sys .text:0x331cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x17ee8, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) v_realize_line_attrs;
    
    // [vReleaseRao@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x56450, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d2d0, 0x243e0 bytes
    // win32kbase.sys .text:0x3c620, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c250, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) v_release_rao;
    
    // [vReleaseVis@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x559ac, 0x1eb80 bytes
    // win32kbase.sys .text:0x51a78, 0x243e0 bytes
    // win32kbase.sys .text:0xb720c, 0x27ef0 bytes
    // win32kbase.sys .text:0x17d94, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) v_release_vis;
    
    // [vSetRendering@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x565a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e100, 0x243e0 bytes
    // win32kbase.sys .text:0xa76c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8cf80, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) v_set_rendering;
    
    // [vUpdate_VisRect@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x56a80, 0x1eb80 bytes
    // win32kbase.sys .text:0x61270, 0x243e0 bytes
    // win32kbase.sys .text:0x3cdd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2a710, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) v_update_vis_rect;
    
    // [vUpdateWtoDXform@DC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x55320, 0x1eb80 bytes
    // win32kbase.sys .text:0x4d130, 0x243e0 bytes
    // win32kbase.sys .text:0x34520, 0x27ef0 bytes
    // win32kbase.sys .text:0x183d0, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) v_update_wto_d_xform;
};
#include "magic/api.end.hpp"
