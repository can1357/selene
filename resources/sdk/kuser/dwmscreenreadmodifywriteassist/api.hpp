#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dwmscreenreadmodifywriteassist
{
    // [bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8fc54, 0x13864 bytes
    // win32kfull.sys .text:0x1354c8, 0x1596d bytes
    // win32kfull.sys .text:0x12c5f8, 0x1659e bytes
    // win32kfull.sys .text:0x136408, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_dwm_desktop;
    
    // [bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290e20, 0x13864 bytes
    // win32kfull.sys .text:0x29f2b0, 0x1596d bytes
    // win32kfull.sys .text:0x2a02c8, 0x1659e bytes
    // win32kfull.sys .text:0x29f220, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_in_path_bracket;
    
    // [bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12bd1c, 0x13864 bytes
    // win32kfull.sys .text:0x1374f0, 0x1596d bytes
    // win32kfull.sys .text:0x1269d4, 0x1659e bytes
    // win32kfull.sys .text:0x138430, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_read_back_rect;
    
    // [bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290e40, 0x13864 bytes
    // win32kfull.sys .text:0x29f2d8, 0x1596d bytes
    // win32kfull.sys .text:0x2a02f0, 0x1659e bytes
    // win32kfull.sys .text:0x29f248, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_read_from_accumulated_bounds;
    
    // [??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148428, 0x13864 bytes
    // win32kfull.sys .text:0x156418, 0x1596d bytes
    // win32kfull.sys .text:0x14e478, 0x1659e bytes
    // win32kfull.sys .text:0x157318, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290ee0, 0x13864 bytes
    // win32kfull.sys .text:0x29f39c, 0x1596d bytes
    // win32kfull.sys .text:0x2a03b4, 0x1659e bytes
    // win32kfull.sys .text:0x29f30c, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) v_restore_accum_bounds_and_enable_sprite_updates;
    
    // [vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x290fc0, 0x13864 bytes
    // win32kfull.sys .text:0x29f4b8, 0x1596d bytes
    // win32kfull.sys .text:0x2a04d0, 0x1659e bytes
    // win32kfull.sys .text:0x29f428, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_save_accum_bounds_and_disable_sprite_updates;
};
#include "magic/api.end.hpp"
