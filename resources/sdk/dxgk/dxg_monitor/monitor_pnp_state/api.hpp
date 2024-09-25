#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_pnp_state
{
    // [GetDeviceObject@MonitorPnpState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1b961c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_device_object;
    
    // [HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b79fc, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) handle_device_remove_cancelled;
    
    // [RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x204f5c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) register_pn_p_target_device_notification;
    
    // [SetPnpDeviceProperty@MonitorPnpState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2052dc, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) set_pnp_device_property;
    
    // [UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b7aa0, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) unregister_pn_p_target_device_notification;
    
    // [UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x205144, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) update_pn_p_device_interface_properties;
    
    // [UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x205234, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) update_pn_p_device_properties;
};
#include "magic/api.end.hpp"
