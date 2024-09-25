#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_push_lock
{
    // [IsLockValid@CPushLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x8f790, 0x1eb80 bytes
    // win32kfull.sys .text:0x1291c0, 0x1596d bytes
    // win32kfull.sys .text:0x12a100, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) is_lock_valid;
    
    // [AcquireLockExclusive@CPushLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x413f8, 0x1eb80 bytes
    // win32kbase.sys .text:0xa7180, 0x243e0 bytes
    // win32kbase.sys .text:0xafdc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x96240, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_lock_exclusive;
    
    // [AcquireLockShared@CPushLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4139c, 0x1eb80 bytes
    // win32kbase.sys .text:0x73590, 0x243e0 bytes
    // win32kbase.sys .text:0xafed0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb6a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_lock_shared;
    
    // [ReleaseLock@CPushLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x41464, 0x1eb80 bytes
    // win32kfull.sys .text:0xfe980, 0x1596d bytes
    // win32kfull.sys .text:0xf0ce4, 0x1659e bytes
    // win32kfull.sys .text:0xff8b0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) release_lock;
};
#include "magic/api.end.hpp"
