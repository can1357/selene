#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pfememobj
{
    // [bInit@PFEMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf5294, 0x13864 bytes
    // win32kfull.sys .text:0x397d4, 0x1596d bytes
    // win32kfull.sys .text:0x7df64, 0x1659e bytes
    // win32kfull.sys .text:0x39be4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_init;
};
#include "magic/api.end.hpp"
