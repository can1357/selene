#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::usb4_host_router_po_fx_ref
{
    // [AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1578a4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_usb4hr_power_ref;
    
    // [AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x15796c, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) add_usb4hr_power_ref_from_context;
    
    // [OnInitialized@Usb4HostRouterPoFxRef@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b6da4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) on_initialized;
    
    // [RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b6ed8, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) remove_usb4hr_power_ref;
};
#include "magic/api.end.hpp"
