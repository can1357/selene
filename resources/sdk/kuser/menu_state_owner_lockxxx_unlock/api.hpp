#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::menu_state_owner_lockxxx_unlock
{
    // [??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1300b0, 0x13864 bytes
    // win32kfull.sys .text:0x1e0648, 0x1596d bytes
    // win32kfull.sys .text:0x1ddde8, 0x1659e bytes
    // win32kfull.sys .text:0x1e04b4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1300a0, 0x13864 bytes
    // win32kfull.sys .text:0x1e06ac, 0x1596d bytes
    // win32kfull.sys .text:0x1dde14, 0x1659e bytes
    // win32kfull.sys .text:0x1e0518, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
