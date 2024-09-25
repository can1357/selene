#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::epointfl
{
    // [bIsZero@EPOINTFL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14db4, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) b_is_zero;
    
    // [bToPOINTL@EPOINTFL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd014, 0x13864 bytes
    // win32kfull.sys .text:0x46c10, 0x1596d bytes
    // win32kfull.sys .text:0x769bc, 0x1659e bytes
    // win32kfull.sys .text:0x47020, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_to_pointl;
};
#include "magic/api.end.hpp"
