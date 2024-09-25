#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_inp_lock_exclusive_if_needed
{
    // [??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x90c30, 0x243e0 bytes
    // win32kbase.sys .text:0x6df30, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
