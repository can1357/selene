#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor
{
    // [CreateMonitorDriverInterface@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1feaa0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) create_monitor_driver_interface;
};
#include "magic/api.end.hpp"
