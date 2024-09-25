#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_window
{
    // [CanTransferForeground@CWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x240b6c, 0x1596d bytes
    // win32kfull.sys .text:0x240a1c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) can_transfer_foreground;
    
    // [ForceForeground@CWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x240f78, 0x1596d bytes
    // win32kfull.sys .text:0x240e28, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) force_foreground;
    
    // [GetWindowToForegroundActivate@CWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2410b0, 0x1596d bytes
    // win32kfull.sys .text:0x240f60, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) get_window_to_foreground_activate;
    
    // [TemplateWindow@CWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241628, 0x1596d bytes
    // win32kfull.sys .text:0x2414d8, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) template_window;
};
#include "magic/api.end.hpp"
