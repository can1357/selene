#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_acceleration
{
    // [CreateInstance@CMouseAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd3180, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create_instance;
    
    // [BuildAccelerationCurve@CMouseAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb6820, 0x243e0 bytes
    // win32kbase.sys .text:0xcaa90, 0x27ef0 bytes
    // win32kbase.sys .text:0xb0710, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) build_acceleration_curve;
    
    // [??0CMouseAcceleration@@IEAA@I@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7b34, 0x243e0 bytes
    // win32kbase.sys .text:0xd3218, 0x27ef0 bytes
    // win32kbase.sys .text:0x8ac64, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [GetDeviceSpecificAccelerationData@CMouseAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9be0, 0x243e0 bytes
    // win32kbase.sys .text:0xdabe0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8580, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_device_specific_acceleration_data;
};
#include "magic/api.end.hpp"
