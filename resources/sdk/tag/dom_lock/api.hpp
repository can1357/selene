#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace tag::dom_lock
{
    // [IsLockedShared@tagDomLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x484a4, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) is_locked_shared;
    
    // [IsLockedExclusive@tagDomLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66540, 0x243e0 bytes
    // win32kfull.sys .text:0x48480, 0x1659e bytes
    // win32kbase.sys .text:0x30380, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_locked_exclusive;
    
    // [LockExclusive@tagDomLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x66500, 0x243e0 bytes
    // win32kbase.sys .text:0x59920, 0x27ef0 bytes
    // win32kbase.sys .text:0x30340, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) lock_exclusive;
    
    // [LockInitialize@tagDomLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbde30, 0x243e0 bytes
    // win32kbase.sys .text:0xced80, 0x27ef0 bytes
    // win32kbase.sys .text:0xb7c40, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) lock_initialize;
    
    // [LockShared@tagDomLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9e340, 0x243e0 bytes
    // win32kbase.sys .text:0xa76a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1c0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) lock_shared;
    
    // [LockUnInitialize@tagDomLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbfa90, 0x243e0 bytes
    // win32kbase.sys .text:0x89640, 0x27ef0 bytes
    // win32kbase.sys .text:0xb91b0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) lock_un_initialize;
    
    // [UnLockExclusive@tagDomLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9e320, 0x243e0 bytes
    // win32kbase.sys .text:0xa6760, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1a0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) un_lock_exclusive;
    
    // [UnLockShared@tagDomLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9e320, 0x243e0 bytes
    // win32kbase.sys .text:0xa6760, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1a0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) un_lock_shared;
};
#include "magic/api.end.hpp"
