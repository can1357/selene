#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_display_port_state
{
    // [GetAddress@MonitorDisplayPortState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1f904, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_address;
    
    // [IsAddressValid@MonitorDisplayPortState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1fa30, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) is_address_valid;
    
    // [OnInitialized@MonitorDisplayPortState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2705c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) on_initialized;
};
#include "magic/api.end.hpp"
