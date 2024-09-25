#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pushlockex
{
    // [??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62150, 0x13864 bytes
    // win32kfull.sys .text:0x72124, 0x1596d bytes
    // win32kfull.sys .text:0x3ab28, 0x1659e bytes
    // win32kfull.sys .text:0x72c94, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1PUSHLOCKEX@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6217c, 0x13864 bytes
    // win32kfull.sys .text:0x720f0, 0x1596d bytes
    // win32kfull.sys .text:0x3aaf4, 0x1659e bytes
    // win32kfull.sys .text:0x72c60, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
