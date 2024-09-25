#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::escape_request
{
    // [Hff@EscapeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@EscapeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d94e0, 0x13864 bytes
    // win32kfull.sys .text:0x2de610, 0x1596d bytes
    // win32kfull.sys .text:0x2de3c0, 0x1659e bytes
    // win32kfull.sys .text:0x2de620, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@EscapeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9f60, 0x13864 bytes
    // win32kfull.sys .text:0x2de8f0, 0x1596d bytes
    // win32kfull.sys .text:0x2de690, 0x1659e bytes
    // win32kfull.sys .text:0x2de900, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@EscapeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a4d0, 0x13864 bytes
    // win32kfull.sys .text:0x129620, 0x1596d bytes
    // win32kfull.sys .text:0x119be0, 0x1659e bytes
    // win32kfull.sys .text:0x12a560, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@EscapeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a550, 0x13864 bytes
    // win32kfull.sys .text:0x129720, 0x1596d bytes
    // win32kfull.sys .text:0x119980, 0x1659e bytes
    // win32kfull.sys .text:0x12a660, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
