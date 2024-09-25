#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rim_drop_and_re_acquire_sync_lock
{
    // [??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb194, 0x243e0 bytes
    // win32kbase.sys .text:0x7bec8, 0x27ef0 bytes
    // win32kbase.sys .text:0x55c04, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1RIMDropAndReAcquireSyncLock@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb630, 0x243e0 bytes
    // win32kbase.sys .text:0x7bd38, 0x27ef0 bytes
    // win32kbase.sys .text:0x560a0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
