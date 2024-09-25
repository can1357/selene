#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace video
{
    // [VideoPortCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8aa10, 0x1eb80 bytes
    // win32kbase.sys .text:0x12f020, 0x243e0 bytes
    // win32kbase.sys .text:0xe4380, 0x27ef0 bytes
    // win32kbase.sys .text:0x12c8a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) port_callout;
    
    // [VideoPortCalloutThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba174, 0x1eb80 bytes
    // win32kbase.sys .text:0x12fa54, 0x243e0 bytes
    // win32kbase.sys .text:0xe1c68, 0x27ef0 bytes
    // win32kbase.sys .text:0x12d2d4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) port_callout_thread;
    
    // [VideoMemoryBudgetCallback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70330, 0x17e70 bytes
    // dxgi.dll .text:0x70440, 0x17e70 bytes
    // dxgi.dll .text:0x7bb60, 0x18b10 bytes
    // dxgi.dll .text:0x71870, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) memory_budget_callback;
};
#include "magic/api.end.hpp"
