#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::w32pidlock
{
    // [vLockSimple@W32PIDLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x2e348, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) v_lock_simple;
    
    // [bIsLocked@W32PIDLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e280, 0x1eb80 bytes
    // win32kbase.sys .text:0x150290, 0x243e0 bytes
    // win32kbase.sys .text:0x183270, 0x27ef0 bytes
    // win32kbase.sys .text:0x14e130, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) b_is_locked;
    
    // [vCleanUp@W32PIDLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e248, 0x1eb80 bytes
    // win32kbase.sys .text:0xb5208, 0x243e0 bytes
    // win32kbase.sys .text:0xc8190, 0x27ef0 bytes
    // win32kbase.sys .text:0xaeacc, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) v_clean_up;
    
    // [vInit@W32PIDLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e1c8, 0x1eb80 bytes
    // win32kbase.sys .text:0xb31b0, 0x243e0 bytes
    // win32kbase.sys .text:0xc6304, 0x27ef0 bytes
    // win32kbase.sys .text:0xa9820, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) v_init;
    
    // [vLockSingleThread@W32PIDLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e3e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e1f0, 0x243e0 bytes
    // win32kbase.sys .text:0xa77b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d070, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) v_lock_single_thread;
    
    // [vUnlockSimple@W32PIDLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e2d8, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f2a4, 0x243e0 bytes
    // win32kbase.sys .text:0xabc70, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e274, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) v_unlock_simple;
    
    // [vUnlockSingleThread@W32PIDLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e410, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e430, 0x243e0 bytes
    // win32kbase.sys .text:0xaa2d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d440, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) v_unlock_single_thread;
};
#include "magic/api.end.hpp"
