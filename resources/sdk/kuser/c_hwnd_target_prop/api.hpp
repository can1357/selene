#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_hwnd_target_prop
{
    // [ReNotifyDwm@CHwndTargetProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0xd298, 0x13864 bytes
    // win32kfull.sys .text:0x89b68, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) re_notify_dwm;
    
    // [Delete@CHwndTargetProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149250, 0x13864 bytes
    // win32kfull.sys .text:0x153f40, 0x1596d bytes
    // win32kfull.sys .text:0x14a970, 0x1659e bytes
    // win32kfull.sys .text:0x154e80, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) _delete;
    
    // [ClearSystemVisual@CHwndTargetProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x728f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb8130, 0x243e0 bytes
    // win32kbase.sys .text:0xc8c50, 0x27ef0 bytes
    // win32kbase.sys .text:0xb22c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) clear_system_visual;
    
    // [GetAtom@CHwndTargetProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xcf90, 0x13864 bytes
    // win32kfull.sys .text:0x129390, 0x1596d bytes
    // win32kfull.sys .text:0x1199a0, 0x1659e bytes
    // win32kfull.sys .text:0x12a2d0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_atom;
    
    // [s_atom@CHwndTargetProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x12517c, 0x1eb80 bytes
    // win32kbase.sys .data:0x262308, 0x243e0 bytes
    // win32kbase.sys .data:0x2b70d4, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f348, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) s_atom;
    
    // [SetSystemVisual@CHwndTargetProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x729a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb65a0, 0x243e0 bytes
    // win32kbase.sys .text:0xc98a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xafee0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_system_visual;
};
#include "magic/api.end.hpp"
