#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pfeobj
{
    // [bCheckFamilyName@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81b8c, 0x13864 bytes
    // win32kfull.sys .text:0x3b45c, 0x1596d bytes
    // win32kfull.sys .text:0x7d838, 0x1659e bytes
    // win32kfull.sys .text:0x3b86c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_check_family_name;
    
    // [bFilteredOut@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81a70, 0x13864 bytes
    // win32kfull.sys .text:0x6f73c, 0x1596d bytes
    // win32kfull.sys .text:0x7d0f8, 0x1659e bytes
    // win32kfull.sys .text:0x702ac, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_filtered_out;
    
    // [bSetFontXform@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x818f0, 0x13864 bytes
    // win32kfull.sys .text:0xf9024, 0x1596d bytes
    // win32kfull.sys .text:0x103fd4, 0x1659e bytes
    // win32kfull.sys .text:0xf9f58, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_set_font_xform;
    
    // [cKernPairs@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb2a0, 0x13864 bytes
    // win32kfull.sys .text:0x12f960, 0x1596d bytes
    // win32kfull.sys .text:0x125060, 0x1659e bytes
    // win32kfull.sys .text:0x1308a0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) c_kern_pairs;
    
    // [dpNtmi@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x819c4, 0x13864 bytes
    // win32kfull.sys .text:0x39e34, 0x1596d bytes
    // win32kfull.sys .text:0x7e5c0, 0x1659e bytes
    // win32kfull.sys .text:0x3a244, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) dp_ntmi;
    
    // [efstyCompute@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81a3c, 0x13864 bytes
    // win32kfull.sys .text:0x10e608, 0x1596d bytes
    // win32kfull.sys .text:0x78140, 0x1659e bytes
    // win32kfull.sys .text:0x10f538, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) efsty_compute;
    
    // [flFontType@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x819ec, 0x13864 bytes
    // win32kfull.sys .text:0x6d980, 0x1596d bytes
    // win32kfull.sys .text:0x780ec, 0x1659e bytes
    // win32kfull.sys .text:0x6e4f0, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) fl_font_type;
    
    // [pGetLinkedFontList@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81b70, 0x13864 bytes
    // win32kfull.sys .text:0x6e964, 0x1596d bytes
    // win32kfull.sys .text:0x11a54c, 0x1659e bytes
    // win32kfull.sys .text:0x6f4d4, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) p_get_linked_font_list;
    
    // [pfdg@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81c8c, 0x13864 bytes
    // win32kfull.sys .text:0x6da04, 0x1596d bytes
    // win32kfull.sys .text:0x6f8cc, 0x1659e bytes
    // win32kfull.sys .text:0x6e574, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) pfdg;
    
    // [pql@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5420, 0x13864 bytes
    // win32kfull.sys .text:0x6e988, 0x1596d bytes
    // win32kfull.sys .text:0x12ee04, 0x1659e bytes
    // win32kfull.sys .text:0x6f4f8, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) pql;
    
    // [SameProccess@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x267600, 0x13864 bytes
    // win32kfull.sys .text:0x13dd8c, 0x1596d bytes
    // win32kfull.sys .text:0x12edd0, 0x1659e bytes
    // win32kfull.sys .text:0x13eccc, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) same_proccess;
    
    // [vDelete@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81e5c, 0x13864 bytes
    // win32kfull.sys .text:0x3bb74, 0x1596d bytes
    // win32kfull.sys .text:0x6b4bc, 0x1659e bytes
    // win32kfull.sys .text:0x3bf84, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) v_delete;
    
    // [vFreePql@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81b48, 0x13864 bytes
    // win32kfull.sys .text:0x3a3d0, 0x1596d bytes
    // win32kfull.sys .text:0x7d4c8, 0x1659e bytes
    // win32kfull.sys .text:0x3a7e0, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_free_pql;
    
    // [vFreepfdg@PFEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x81d98, 0x13864 bytes
    // win32kfull.sys .text:0x6db24, 0x1596d bytes
    // win32kfull.sys .text:0x6f7f4, 0x1659e bytes
    // win32kfull.sys .text:0x6e694, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) v_freepfdg;
};
#include "magic/api.end.hpp"
