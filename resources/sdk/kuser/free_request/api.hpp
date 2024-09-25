#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::free_request
{
    // [Hff@FreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@FreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d560, 0x13864 bytes
    // win32kfull.sys .text:0x1291d0, 0x1596d bytes
    // win32kfull.sys .text:0x1198f0, 0x1659e bytes
    // win32kfull.sys .text:0x12a110, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@FreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2da1f0, 0x13864 bytes
    // win32kfull.sys .text:0x2deb80, 0x1596d bytes
    // win32kfull.sys .text:0x1105a0, 0x1659e bytes
    // win32kfull.sys .text:0x2deb90, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@FreeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a4e0, 0x13864 bytes
    // win32kfull.sys .text:0x129630, 0x1596d bytes
    // win32kfull.sys .text:0x119bf0, 0x1659e bytes
    // win32kfull.sys .text:0x12a570, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@FreeRequest]
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
