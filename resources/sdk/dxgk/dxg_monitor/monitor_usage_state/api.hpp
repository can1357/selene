#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_usage_state
{
    // [_EvaluateUsageState@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x211004, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) evaluate_usage_state;
    
    // [GetAppOverride@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x211114, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) get_app_override;
    
    // [_GetAppOverrideKey@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b9ee8, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) get_app_override_key;
    
    // [_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x211218, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) get_intended_usage_from_descriptor;
    
    // [GetPseudoSpecializedState@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1dd79c, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) get_pseudo_specialized_state;
    
    // [_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2110a0, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) read_app_overrides_from_monitor_data_store;
    
    // [_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2111b0, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) read_usage_overrides_from_registry;
    
    // [_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba114, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) save_usage_overrides_to_monitor_store;
    
    // [SetAppOverride@MonitorUsageState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b9d1c, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) set_app_override;
};
#include "magic/api.end.hpp"
