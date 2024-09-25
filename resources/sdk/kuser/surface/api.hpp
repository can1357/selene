#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::surface
{
    // [bUndoStockSurfaceDelayed@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x52d74, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) b_undo_stock_surface_delayed;
    
    // [pSurfobj@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x8d6b0, 0x13864 bytes
    // win32kfull.sys .text:0x5fb24, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) p_surfobj;
    
    // [pfnTextOut@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x8d6d8, 0x13864 bytes
    // win32kfull.sys .text:0x299584, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) pfn_text_out;
    
    // [Free@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x150238, 0x243e0 bytes
    // win32kbase.sys .text:0x18321c, 0x27ef0 bytes
    // win32kbase.sys .text:0x14e0d8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) free;
    
    // [pdcoAA@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x8d6f4, 0x13864 bytes
    // win32kfull.sys .text:0x106308, 0x1596d bytes
    // win32kfull.sys .text:0x107238, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) pdco_aa;
    
    // [AddLSurf@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x52450, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3b70, 0x243e0 bytes
    // win32kbase.sys .text:0xc7b30, 0x27ef0 bytes
    // win32kbase.sys .text:0xac070, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) add_l_surf;
    
    // [bDeleteSurface@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x52500, 0x1eb80 bytes
    // win32kbase.sys .text:0x4b940, 0x243e0 bytes
    // win32kbase.sys .text:0x317a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x32e10, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) b_delete_surface;
    
    // [bDIBSection@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8d6c0, 0x13864 bytes
    // win32kfull.sys .text:0x3f514, 0x1596d bytes
    // win32kfull.sys .text:0xadc4, 0x1659e bytes
    // win32kfull.sys .text:0x3f924, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_dib_section;
    
    // [bIncludeSprites@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x51f70, 0x1eb80 bytes
    // win32kbase.sys .text:0xc0b40, 0x243e0 bytes
    // win32kbase.sys .text:0xd4f70, 0x27ef0 bytes
    // win32kbase.sys .text:0xba270, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) b_include_sprites;
    
    // [bRedirHooked@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8d724, 0x13864 bytes
    // win32kfull.sys .text:0xe9ce4, 0x1596d bytes
    // win32kfull.sys .text:0xe1650, 0x1659e bytes
    // win32kfull.sys .text:0xeaa24, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) b_redir_hooked;
    
    // [bRedirectionBitmap@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8d694, 0x13864 bytes
    // win32kfull.sys .text:0xf0068, 0x1596d bytes
    // win32kfull.sys .text:0xba6dc, 0x1659e bytes
    // win32kfull.sys .text:0xf0e88, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) b_redirection_bitmap;
    
    // [bStockSurface@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28d928, 0x13864 bytes
    // win32kfull.sys .text:0x29b344, 0x1596d bytes
    // win32kfull.sys .text:0x29c340, 0x1659e bytes
    // win32kfull.sys .text:0x29b2b4, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) b_stock_surface;
    
    // [bUnMap@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x520d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9a040, 0x243e0 bytes
    // win32kbase.sys .text:0xa3a30, 0x27ef0 bytes
    // win32kbase.sys .text:0x82d20, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) b_un_map;
    
    // [bUnMapImmediate@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x51ff4, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f10c, 0x243e0 bytes
    // win32kbase.sys .text:0xabafc, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e0dc, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) b_un_map_immediate;
    
    // [GetFirstLSurf@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x52370, 0x1eb80 bytes
    // win32kbase.sys .text:0x1b820, 0x243e0 bytes
    // win32kbase.sys .text:0x94170, 0x27ef0 bytes
    // win32kbase.sys .text:0x417b0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) get_first_l_surf;
    
    // [Map@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x52120, 0x1eb80 bytes
    // win32kbase.sys .text:0x39510, 0x243e0 bytes
    // win32kbase.sys .text:0xa3260, 0x27ef0 bytes
    // win32kbase.sys .text:0x3f640, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) map;
    
    // [pdibDefault@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11e910, 0x1eb80 bytes
    // win32kbase.sys .data:0x259fa8, 0x243e0 bytes
    // win32kbase.sys .data:0x2aedd8, 0x27ef0 bytes
    // win32kbase.sys .data:0x256fd0, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) pdib_default;
    
    // [pfnBitBlt@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8d628, 0x13864 bytes
    // win32kfull.sys .text:0x3f90c, 0x1596d bytes
    // win32kfull.sys .text:0xaf98, 0x1659e bytes
    // win32kfull.sys .text:0x3fd1c, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) pfn_bit_blt;
    
    // [RemoveLSurf@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x523e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb4740, 0x243e0 bytes
    // win32kbase.sys .text:0xc8fa0, 0x27ef0 bytes
    // win32kbase.sys .text:0xadda0, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) remove_l_surf;
    
    // [tSize@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11daf0, 0x1eb80 bytes
    // win32kbase.sys .data:0x2585d0, 0x243e0 bytes
    // win32kbase.sys .data:0x2ad370, 0x27ef0 bytes
    // win32kbase.sys .data:0x2555e0, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) t_size;
    
    // [vAppContainerOwner@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8d644, 0x13864 bytes
    // win32kfull.sys .text:0x11ad9c, 0x1596d bytes
    // win32kfull.sys .text:0x10b300, 0x1659e bytes
    // win32kfull.sys .text:0x11bccc, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) v_app_container_owner;
    
    // [vClearIncludeSprites@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x51fa0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc37f0, 0x243e0 bytes
    // win32kbase.sys .text:0xd7450, 0x27ef0 bytes
    // win32kbase.sys .text:0xbcb00, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) v_clear_include_sprites;
    
    // [vDec_cRef@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8d748, 0x13864 bytes
    // win32kfull.sys .text:0x27c9cc, 0x1596d bytes
    // win32kfull.sys .text:0x27cb2c, 0x1659e bytes
    // win32kfull.sys .text:0x27c93c, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) v_dec_c_ref;
    
    // [vSetIncludeSprites@SURFACE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x51fd0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3820, 0x243e0 bytes
    // win32kbase.sys .text:0xd7480, 0x27ef0 bytes
    // win32kbase.sys .text:0xbcb30, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) v_set_include_sprites;
};
#include "magic/api.end.hpp"
