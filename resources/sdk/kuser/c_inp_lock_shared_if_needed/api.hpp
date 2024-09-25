#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_inp_lock_shared_if_needed
{
    // [??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb338, 0x243e0 bytes
    // win32kbase.sys .text:0x7be6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x55da8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
