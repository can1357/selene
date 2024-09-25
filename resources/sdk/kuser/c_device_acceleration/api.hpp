#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_device_acceleration
{
    // [Accelerate@CDeviceAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec10, 0x243e0 bytes
    // win32kbase.sys .text:0xc8544, 0x27ef0 bytes
    // win32kbase.sys .text:0x59088, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) accelerate;
    
    // [_BuildAccelerationCurve@CDeviceAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb68bc, 0x243e0 bytes
    // win32kbase.sys .text:0xcab2c, 0x27ef0 bytes
    // win32kbase.sys .text:0xb07ac, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) build_acceleration_curve;
    
    // [CreateDefaultAcceleratorCurve@CDeviceAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e398, 0x243e0 bytes
    // win32kbase.sys .text:0x80210, 0x27ef0 bytes
    // win32kbase.sys .text:0x6da04, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) create_default_accelerator_curve;
    
    // [ResetAccelerationCurves@CDeviceAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e530, 0x243e0 bytes
    // win32kbase.sys .text:0x64bc8, 0x27ef0 bytes
    // win32kbase.sys .text:0x58d54, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) reset_acceleration_curves;
};
#include "magic/api.end.hpp"
