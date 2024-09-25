#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace sp
{
    // [SpRegOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x867d34, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) reg_open_key;
    
    // [SpRegOpenRedirectedKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x867c70, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) reg_open_redirected_key;
    
    // [SpCreateSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x110858, 0x1596d bytes
    // win32kfull.sys .text:0x81b10, 0x1659e bytes
    // win32kfull.sys .text:0x111788, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_surface;
    
    // [SpAlphaBlend]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe97b0, 0x13864 bytes
    // win32kfull.sys .text:0x102b30, 0x1596d bytes
    // win32kfull.sys .text:0xd8250, 0x1659e bytes
    // win32kfull.sys .text:0x103a60, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) alpha_blend;
    
    // [SpBitBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe9ff0, 0x13864 bytes
    // win32kfull.sys .text:0x96ea0, 0x1596d bytes
    // win32kfull.sys .text:0x24580, 0x1659e bytes
    // win32kfull.sys .text:0x97a10, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) bit_blt;
    
    // [SpCopyBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe9fa0, 0x13864 bytes
    // win32kfull.sys .text:0x99b20, 0x1596d bytes
    // win32kfull.sys .text:0xec870, 0x1659e bytes
    // win32kfull.sys .text:0x9a690, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) copy_bits;
    
    // [SpDdCreateFullscreenSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25ea14, 0x13864 bytes
    // win32kfull.sys .text:0x26e40c, 0x1596d bytes
    // win32kfull.sys .text:0x26e64c, 0x1659e bytes
    // win32kfull.sys .text:0x26e35c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) dd_create_fullscreen_sprite;
    
    // [SpDdDestroyFullscreenSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25efd8, 0x13864 bytes
    // win32kfull.sys .text:0x26e9dc, 0x1596d bytes
    // win32kfull.sys .text:0x26ec2c, 0x1659e bytes
    // win32kfull.sys .text:0x26e92c, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) dd_destroy_fullscreen_sprite;
    
    // [SpDdNotifyFullscreenSpriteUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25f0e8, 0x13864 bytes
    // win32kfull.sys .text:0x26eb14, 0x1596d bytes
    // win32kfull.sys .text:0x26ed70, 0x1659e bytes
    // win32kfull.sys .text:0x26ea64, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) dd_notify_fullscreen_sprite_update;
    
    // [SpDrawStream]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26c690, 0x13864 bytes
    // win32kfull.sys .text:0x27f7e0, 0x1596d bytes
    // win32kfull.sys .text:0x149960, 0x1659e bytes
    // win32kfull.sys .text:0x27f750, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) draw_stream;
    
    // [SpFillPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26c870, 0x13864 bytes
    // win32kfull.sys .text:0x27f9c0, 0x1596d bytes
    // win32kfull.sys .text:0x27f7a0, 0x1659e bytes
    // win32kfull.sys .text:0x27f930, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) fill_path;
    
    // [SpGradientFill]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x137b90, 0x13864 bytes
    // win32kfull.sys .text:0x143d30, 0x1596d bytes
    // win32kfull.sys .text:0xd7ac0, 0x1659e bytes
    // win32kfull.sys .text:0x144c70, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) gradient_fill;
    
    // [SpLineTo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x136ba0, 0x13864 bytes
    // win32kfull.sys .text:0x140a50, 0x1596d bytes
    // win32kfull.sys .text:0x13aa30, 0x1659e bytes
    // win32kfull.sys .text:0x141990, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) line_to;
    
    // [SpNotifyLSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x49ffc, 0x13864 bytes
    // win32kfull.sys .text:0xcfaf0, 0x1596d bytes
    // win32kfull.sys .text:0xb3658, 0x1659e bytes
    // win32kfull.sys .text:0xd07b0, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) notify_l_surface;
    
    // [SpNotifyLSurfaceRedirSurfAssoc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf2cc, 0x13864 bytes
    // win32kfull.sys .text:0xcfa24, 0x1596d bytes
    // win32kfull.sys .text:0xb358c, 0x1659e bytes
    // win32kfull.sys .text:0xd06e4, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) notify_l_surface_redir_surf_assoc;
    
    // [SpNotifyLSurfaceTracking]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25f28c, 0x13864 bytes
    // win32kfull.sys .text:0x26ece0, 0x1596d bytes
    // win32kfull.sys .text:0x26ef40, 0x1659e bytes
    // win32kfull.sys .text:0x26ec30, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) notify_l_surface_tracking;
    
    // [SpPlgBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26cd00, 0x13864 bytes
    // win32kfull.sys .text:0x27fe60, 0x1596d bytes
    // win32kfull.sys .text:0x27fc00, 0x1659e bytes
    // win32kfull.sys .text:0x27fdd0, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) plg_blt;
    
    // [SpRenderHint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf378, 0x13864 bytes
    // win32kfull.sys .text:0xce628, 0x1596d bytes
    // win32kfull.sys .text:0xb6f9c, 0x1659e bytes
    // win32kfull.sys .text:0xcf2e8, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) render_hint;
    
    // [SpSaveScreenBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26d1d0, 0x13864 bytes
    // win32kfull.sys .text:0x2802e0, 0x1596d bytes
    // win32kfull.sys .text:0x280080, 0x1659e bytes
    // win32kfull.sys .text:0x280250, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) save_screen_bits;
    
    // [SpStretchBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13c4f0, 0x13864 bytes
    // win32kfull.sys .text:0x146640, 0x1596d bytes
    // win32kfull.sys .text:0xd7e40, 0x1659e bytes
    // win32kfull.sys .text:0x147580, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) stretch_blt;
    
    // [SpStretchBltROP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26d380, 0x13864 bytes
    // win32kfull.sys .text:0x1461e0, 0x1596d bytes
    // win32kfull.sys .text:0x13b9f0, 0x1659e bytes
    // win32kfull.sys .text:0x147120, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) stretch_blt_rop;
    
    // [SpStrokeAndFillPath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26d7d0, 0x13864 bytes
    // win32kfull.sys .text:0x1318e0, 0x1596d bytes
    // win32kfull.sys .text:0x280240, 0x1659e bytes
    // win32kfull.sys .text:0x132820, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) stroke_and_fill_path;
    
    // [SpStrokePath]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1396d0, 0x13864 bytes
    // win32kfull.sys .text:0x133850, 0x1596d bytes
    // win32kfull.sys .text:0x12a780, 0x1659e bytes
    // win32kfull.sys .text:0x134790, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) stroke_path;
    
    // [SpTextOut]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe9b80, 0x13864 bytes
    // win32kfull.sys .text:0x96300, 0x1596d bytes
    // win32kfull.sys .text:0x22490, 0x1659e bytes
    // win32kfull.sys .text:0x96e70, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) text_out;
    
    // [SpTransparentBlt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe93e0, 0x13864 bytes
    // win32kfull.sys .text:0x1027b0, 0x1596d bytes
    // win32kfull.sys .text:0xd7730, 0x1659e bytes
    // win32kfull.sys .text:0x1036e0, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) transparent_blt;
    
    // [SpVerifierInitialization]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5eb60, 0x1b430 bytes
    // storport.sys PAGE:0x7986c, 0x2be18 bytes
    // storport.sys PAGE:0x8f690, 0x440c8 bytes
    // storport.sys PAGE:0x7986c, 0x2be18 bytes
    //
    _o5(sdk::unknown_ptr) verifier_initialization;
    
    // [SpVrfyLevel]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e6c8, 0x1b430 bytes
    // storport.sys .data:0x67e38, 0x2be18 bytes
    // storport.sys .data:0x7a080, 0x440c8 bytes
    // storport.sys .data:0x67e38, 0x2be18 bytes
    //
    _o6(sdk::unknown_ptr) vrfy_level;
};
#include "magic/api.end.hpp"
