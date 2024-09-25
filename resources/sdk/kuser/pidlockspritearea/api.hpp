#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pidlockspritearea
{
    // [vLock@PIDLOCKSPRITEAREA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27243c, 0x13864 bytes
    // win32kfull.sys .text:0x15392c, 0x1596d bytes
    // win32kfull.sys .text:0x14871c, 0x1659e bytes
    // win32kfull.sys .text:0x15486c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_lock;
    
    // [vUnlock@PIDLOCKSPRITEAREA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x279b54, 0x13864 bytes
    // win32kfull.sys .text:0xf008c, 0x1596d bytes
    // win32kfull.sys .text:0xba700, 0x1659e bytes
    // win32kfull.sys .text:0xf0eac, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
