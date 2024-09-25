#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::handlelock
{
    // [??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x4c2e0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x48fac, 0x243e0 bytes
    // win32kbase.sys .text:0x45960, 0x27ef0 bytes
    // win32kbase.sys .text:0x303c0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1HANDLELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5e89c, 0x243e0 bytes
    // win32kbase.sys .text:0x45b70, 0x27ef0 bytes
    // win32kbase.sys .text:0x27cdc, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [ShareCount@HANDLELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3e7f0, 0x243e0 bytes
    // win32kbase.sys .text:0x513ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x42960, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) share_count;
    
    // [bLockHobj@HANDLELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4c5a4, 0x1eb80 bytes
    // win32kbase.sys .text:0x3ea40, 0x243e0 bytes
    // win32kbase.sys .text:0x45610, 0x27ef0 bytes
    // win32kbase.sys .text:0x42bb0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) b_lock_hobj;
    
    // [Pid@HANDLELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4c618, 0x1eb80 bytes
    // win32kbase.sys .text:0x56b5c, 0x243e0 bytes
    // win32kbase.sys .text:0xc9724, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1e8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) pid;
    
    // [vLockHandle@HANDLELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4c320, 0x1eb80 bytes
    // win32kbase.sys .text:0x5bd30, 0x243e0 bytes
    // win32kbase.sys .text:0x41ba0, 0x27ef0 bytes
    // win32kbase.sys .text:0x25170, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) v_lock_handle;
    
    // [vUnlock@HANDLELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4bf90, 0x1eb80 bytes
    // win32kbase.sys .text:0x5b3c0, 0x243e0 bytes
    // win32kbase.sys .text:0x3d4f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x24800, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) v_unlock;
    
    // [vUnlockAndRelease@HANDLELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4c0e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x53310, 0x243e0 bytes
    // win32kbase.sys .text:0x46110, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d850, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) v_unlock_and_release;
};
#include "magic/api.end.hpp"
