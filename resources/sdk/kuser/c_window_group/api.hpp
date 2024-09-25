#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_window_group
{
    // [AddWindow@CWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2408a8, 0x1596d bytes
    // win32kfull.sys .text:0x240758, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) add_window;
    
    // [_FreeWindow@CWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x24178c, 0x1596d bytes
    // win32kfull.sys .text:0x24163c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) free_window;
    
    // [_GetWindowFromRole@CWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2417d8, 0x1596d bytes
    // win32kfull.sys .text:0x241688, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) get_window_from_role;
    
    // [RemoveAll@CWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241364, 0x1596d bytes
    // win32kfull.sys .text:0x241214, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) remove_all;
    
    // [_RemoveWindowAction@CWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241818, 0x1596d bytes
    // win32kfull.sys .text:0x2416c8, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) remove_window_action;
    
    // [_TemplateWindow@CWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x24192c, 0x1596d bytes
    // win32kfull.sys .text:0x2417dc, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) template_window;
    
    // [_UpdateWindowInternal@CWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2419ac, 0x1596d bytes
    // win32kfull.sys .text:0x24185c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) update_window_internal;
    
    // [_UpdateWindowRole@CWindowGroup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241aa8, 0x1596d bytes
    // win32kfull.sys .text:0x241958, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) update_window_role;
};
#include "magic/api.end.hpp"
