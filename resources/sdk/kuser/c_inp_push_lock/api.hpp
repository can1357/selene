#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_inp_push_lock
{
    // [LockExclusive@CInpPushLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6acd0, 0x243e0 bytes
    // win32kbase.sys .text:0x22120, 0x27ef0 bytes
    // win32kbase.sys .text:0x5ea90, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) lock_exclusive;
    
    // [LockShared@CInpPushLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa0650, 0x243e0 bytes
    // win32kbase.sys .text:0xc9aa0, 0x27ef0 bytes
    // win32kbase.sys .text:0x82fe0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) lock_shared;
    
    // [UnLockExclusive@CInpPushLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd200, 0x243e0 bytes
    // win32kbase.sys .text:0x7c4c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5cd00, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) un_lock_exclusive;
    
    // [UnLockShared@CInpPushLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa1320, 0x243e0 bytes
    // win32kbase.sys .text:0xcb640, 0x27ef0 bytes
    // win32kbase.sys .text:0x84510, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) un_lock_shared;
};
#include "magic/api.end.hpp"
