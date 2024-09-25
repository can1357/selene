#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_inp_lock_guard_shared
{
    // [??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004
    // win32kbase.sys .text:0x193fe4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf62b6, 0x27ef0 bytes
    // win32kbase.sys .text:0xd45bc, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1CInpLockGuardShared@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd5b08, 0x243e0 bytes
    // win32kbase.sys .text:0xd2e10, 0x27ef0 bytes
    // win32kbase.sys .text:0xd4658, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
