#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_async_key_event_monitor
{
    // [OnKeyEvent@CAsyncKeyEventMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ca84, 0x243e0 bytes
    // win32kbase.sys .text:0x12a5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x6a154, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) on_key_event;
    
    // [OnKeyStateRequested@CAsyncKeyEventMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10b10, 0x243e0 bytes
    // win32kbase.sys .text:0x13bec, 0x27ef0 bytes
    // win32kbase.sys .text:0x715f0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) on_key_state_requested;
    
    // [ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f7e8, 0x243e0 bytes
    // win32kbase.sys .text:0xcf944, 0x27ef0 bytes
    // win32kbase.sys .text:0x6d64c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) report_get_async_key_state_anomaly;
};
#include "magic/api.end.hpp"
