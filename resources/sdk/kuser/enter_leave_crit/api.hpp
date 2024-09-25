#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::enter_leave_crit
{
    // [??0EnterLeaveCrit@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xb82e4, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1EnterLeaveCrit@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c217c, 0x13864 bytes
    // win32kfull.sys .text:0x1244f0, 0x1596d bytes
    // win32kfull.sys .text:0x1142c0, 0x1659e bytes
    // win32kfull.sys .text:0x125430, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
