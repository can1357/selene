#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::opm
{
    // [INVALID_MONITOR_HANDLE@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22d208, 0x243e0 bytes
    // win32kbase.sys .rdata:0x280da8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22b250, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) invalid_monitor_handle;
    
    // [NOT_ALERTABLE@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22d210, 0x243e0 bytes
    // win32kbase.sys .rdata:0x280db0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22b258, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) not_alertable;
    
    // [OPMAllocateMemory@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1511b0, 0x243e0 bytes
    // win32kbase.sys .text:0x184400, 0x27ef0 bytes
    // win32kbase.sys .text:0x14f050, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) opm_allocate_memory;
    
    // [OPMFreeMemory@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7c60, 0x243e0 bytes
    // win32kbase.sys .text:0xd99d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0870, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) opm_free_memory;
};
#include "magic/api.end.hpp"
