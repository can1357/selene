#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::query_advance_widths_request
{
    // [Hff@QueryAdvanceWidthsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1296d0, 0x1596d bytes
    // win32kfull.sys .text:0x119c90, 0x1659e bytes
    // win32kfull.sys .text:0x12a610, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) hff;
    
    // [CaptureUsermodeParameters@QueryAdvanceWidthsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d96b0, 0x13864 bytes
    // win32kfull.sys .text:0x9d3a0, 0x1596d bytes
    // win32kfull.sys .text:0x74090, 0x1659e bytes
    // win32kfull.sys .text:0x9df10, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) capture_usermode_parameters;
    
    // [CreateUsermodeParameters@QueryAdvanceWidthsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2da3b0, 0x13864 bytes
    // win32kfull.sys .text:0x3c210, 0x1596d bytes
    // win32kfull.sys .text:0x6aa10, 0x1659e bytes
    // win32kfull.sys .text:0x3c620, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) create_usermode_parameters;
    
    // [GetDrvType@QueryAdvanceWidthsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a500, 0x13864 bytes
    // win32kfull.sys .text:0x129660, 0x1596d bytes
    // win32kfull.sys .text:0x119c20, 0x1659e bytes
    // win32kfull.sys .text:0x12a5a0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) get_drv_type;
    
    // [Zombied@QueryAdvanceWidthsRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a560, 0x13864 bytes
    // win32kfull.sys .text:0x129740, 0x1596d bytes
    // win32kfull.sys .text:0x119cf0, 0x1659e bytes
    // win32kfull.sys .text:0x12a680, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) zombied;
};
#include "magic/api.end.hpp"
