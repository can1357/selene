#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_auto_push_lock_sh
{
    // [??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x104f24, 0x1596d bytes
    // win32kfull.sys .text:0xfcf98, 0x1659e bytes
    // win32kfull.sys .text:0x105e54, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CAutoPushLockSh@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226214, 0x13864 bytes
    // win32kfull.sys .text:0x1d8d44, 0x1596d bytes
    // win32kfull.sys .text:0x1d16b8, 0x1659e bytes
    // win32kfull.sys .text:0x1d8be4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
