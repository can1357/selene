#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::needdynamicmodechangesharelock
{
    // [??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x6fa3c, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xe2374, 0x13864 bytes
    // win32kfull.sys .text:0x6e0b4, 0x1596d bytes
    // win32kfull.sys .text:0x6ec24, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe23b4, 0x13864 bytes
    // win32kfull.sys .text:0x6e06c, 0x1596d bytes
    // win32kfull.sys .text:0x6f9f4, 0x1659e bytes
    // win32kfull.sys .text:0x6ebdc, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
