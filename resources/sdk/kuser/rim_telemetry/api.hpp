#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rim_telemetry
{
    // [LogNonPointerDeviceStateChange@RimTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x7323c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) log_non_pointer_device_state_change;
    
    // [GetHidVidPidStrings@RimTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15f710, 0x243e0 bytes
    // win32kbase.sys .text:0x193230, 0x27ef0 bytes
    // win32kbase.sys .text:0x15db00, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_hid_vid_pid_strings;
    
    // [LogPointerDeviceStateChange@RimTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15f784, 0x243e0 bytes
    // win32kbase.sys .text:0x1932a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x15db74, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) log_pointer_device_state_change;
    
    // [PointerDeviceTypeToString@RimTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15fd2c, 0x243e0 bytes
    // win32kbase.sys .text:0x19384c, 0x27ef0 bytes
    // win32kbase.sys .text:0x15e11c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) pointer_device_type_to_string;
    
    // [ReportRimDevice@RimTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbd5d0, 0x243e0 bytes
    // win32kbase.sys .text:0x73024, 0x27ef0 bytes
    // win32kbase.sys .text:0xb739c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) report_rim_device;
};
#include "magic/api.end.hpp"
