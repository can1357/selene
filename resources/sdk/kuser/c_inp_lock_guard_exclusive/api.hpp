#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_inp_lock_guard_exclusive
{
    // [??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004
    // win32kfull.sys .text:0x1e0614, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4818, 0x1659e bytes
    // win32kfull.sys .text:0x155674, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1CInpLockGuardExclusive@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x154734, 0x1596d bytes
    // win32kfull.sys .text:0x14b274, 0x1659e bytes
    // win32kfull.sys .text:0x1556b0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
