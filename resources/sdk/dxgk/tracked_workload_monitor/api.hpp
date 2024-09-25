#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::tracked_workload_monitor
{
    // [GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x81b98, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_current_effective_power_level;
    
    // [ReportState@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3462a8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) report_state;
    
    // [GetCurrentPowerLevel@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c278, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6c408, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_current_power_level;
    
    // [Boost@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c19c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81a94, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c32c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) boost;
    
    // [ChangeState@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c1d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81ad8, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c364, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) change_state;
    
    // [GetPowerLevel@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c290, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81bb0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c420, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_power_level;
    
    // [GetSafeStdDev@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c2d8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81bf8, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c468, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_safe_std_dev;
    
    // [GetTargetPowerLevel@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c3a8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81cc8, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c538, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_target_power_level;
    
    // [IsSaturated@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c578, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81eb0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c708, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) is_saturated;
    
    // [SetEffectivePowerLevel@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c5d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81f0c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c764, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) set_effective_power_level;
    
    // [ShouldDecreasePower@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c5f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81f28, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c780, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) should_decrease_power;
    
    // [ShouldIncreasePower@TrackedWorkloadMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c6c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81ff8, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c854, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) should_increase_power;
};
#include "magic/api.end.hpp"
