#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::deadzone_palm_telemetry
{
    // [ClearSession@DeadzonePalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe5528, 0x1eb80 bytes
    // win32kbase.sys .text:0x18d7e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1cdf28, 0x27ef0 bytes
    // win32kbase.sys .text:0x18bbd0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) clear_session;
    
    // [UpdateTelemetryBuffer@DeadzonePalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe5674, 0x1eb80 bytes
    // win32kbase.sys .text:0x18da38, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce174, 0x27ef0 bytes
    // win32kbase.sys .text:0x18be28, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) update_telemetry_buffer;
    
    // [_UploadTelemetryData@DeadzonePalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe5bc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x18e0b8, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce804, 0x27ef0 bytes
    // win32kbase.sys .text:0x18c4a8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) upload_telemetry_data;
};
#include "magic/api.end.hpp"
