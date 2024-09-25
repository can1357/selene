#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_system_metrics
{
    // [GetHardwareType@CInputSystemMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c7460, 0x243e0 bytes
    // win32kbase.sys .text:0x2105f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c5240, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_hardware_type;
    
    // [Initialize@CInputSystemMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x27420, 0x243e0 bytes
    // win32kbase.sys .text:0x85c54, 0x27ef0 bytes
    // win32kbase.sys .text:0x79f7c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [UpdatePointerDeviceSystemMetrics@CInputSystemMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c74b8, 0x243e0 bytes
    // win32kbase.sys .text:0x210648, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c5298, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) update_pointer_device_system_metrics;
    
    // [WritePointerDevicePresenceKey@CInputSystemMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x27640, 0x243e0 bytes
    // win32kbase.sys .text:0x85b28, 0x27ef0 bytes
    // win32kbase.sys .text:0x7a1a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) write_pointer_device_presence_key;
    
    // [WriteSystemMetricsKey@CInputSystemMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x274f4, 0x243e0 bytes
    // win32kbase.sys .text:0x85d44, 0x27ef0 bytes
    // win32kbase.sys .text:0x7a054, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) write_system_metrics_key;
};
#include "magic/api.end.hpp"
