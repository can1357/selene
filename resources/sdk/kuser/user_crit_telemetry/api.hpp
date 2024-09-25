#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::user_crit_telemetry
{
    // [getInstance@UserCritTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x64d40, 0x243e0 bytes
    // win32kbase.sys .text:0x2e4b0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_instance;
    
    // [UpdateUserCritInfo@UserCritTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x64b50, 0x243e0 bytes
    // win32kbase.sys .text:0x2e2c0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) update_user_crit_info;
};
#include "magic/api.end.hpp"
