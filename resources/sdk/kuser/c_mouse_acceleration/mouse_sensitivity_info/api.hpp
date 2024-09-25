#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_acceleration::mouse_sensitivity_info
{
    // [GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb69a0, 0x243e0 bytes
    // win32kbase.sys .text:0xcac10, 0x27ef0 bytes
    // win32kbase.sys .text:0xb0890, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_mouse_sensitivity;
    
    // [UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x96f4, 0x243e0 bytes
    // win32kbase.sys .text:0xd32b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x8b584, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) update_mouse_sensitivity;
};
#include "magic/api.end.hpp"
