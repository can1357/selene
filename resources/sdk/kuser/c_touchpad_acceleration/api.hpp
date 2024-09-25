#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_touchpad_acceleration
{
    // [CreateInstance@CTouchpadAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd7880, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create_instance;
    
    // [BuildAccelerationCurve@CTouchpadAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb6880, 0x243e0 bytes
    // win32kbase.sys .text:0xcaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb0770, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) build_acceleration_curve;
    
    // [GetDeviceSpecificAccelerationData@CTouchpadAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9c10, 0x243e0 bytes
    // win32kbase.sys .text:0xdac10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc85b0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_device_specific_acceleration_data;
};
#include "magic/api.end.hpp"
