#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_critical_section
{
    // [AcquireShared@CCriticalSection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x2ece0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) acquire_shared;
    
    // [AcquireExclusive@CCriticalSection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kbase.sys .text:0x2ecc0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcfc94, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_exclusive;
    
    // [TryAcquireExclusive@CCriticalSection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2ec94, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ff30, 0x243e0 bytes
    // win32kbase.sys .text:0xcfc54, 0x27ef0 bytes
    // win32kbase.sys .text:0x816a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) try_acquire_exclusive;
};
#include "magic/api.end.hpp"
