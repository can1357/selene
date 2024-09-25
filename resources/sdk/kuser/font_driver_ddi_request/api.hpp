#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::font_driver_ddi_request
{
    // [??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf13b4, 0x1596d bytes
    // win32kfull.sys .text:0x71ae4, 0x1659e bytes
    // win32kfull.sys .text:0xf21d4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [PrepareUsermodeFontObj@FontDriverDdiRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3c7d4, 0x1596d bytes
    // win32kfull.sys .text:0x6adf0, 0x1659e bytes
    // win32kfull.sys .text:0x3cbe4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) prepare_usermode_font_obj;
    
    // [CaptureUsermodeFontObj@FontDriverDdiRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d94bc, 0x13864 bytes
    // win32kfull.sys .text:0x9d5d8, 0x1596d bytes
    // win32kfull.sys .text:0x74264, 0x1659e bytes
    // win32kfull.sys .text:0x9e148, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) capture_usermode_font_obj;
};
#include "magic/api.end.hpp"
