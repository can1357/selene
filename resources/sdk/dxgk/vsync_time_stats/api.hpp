#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vsync_time_stats
{
    // [??0VSYNC_TIME_STATS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2ae00, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [MonitorPowerStateChange@VSYNC_TIME_STATS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x25934, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) monitor_power_state_change;
    
    // [VSyncStateChange@VSYNC_TIME_STATS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x48f2c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) v_sync_state_change;
};
#include "magic/api.end.hpp"
