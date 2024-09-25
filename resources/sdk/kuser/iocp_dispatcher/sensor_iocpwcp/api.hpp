#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iocp_dispatcher::sensor_iocpwcp
{
    // [Cleanup@SensorIOCPWCP@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba738, 0x243e0 bytes
    // win32kbase.sys .text:0x88fc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4058, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) cleanup;
};
#include "magic/api.end.hpp"
