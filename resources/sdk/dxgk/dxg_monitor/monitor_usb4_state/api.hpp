#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_usb4_state
{
    // [CancelSkippedDepartures@MonitorUsb4State@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x157ac8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) cancel_skipped_departures;
    
    // [DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b6cac, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) destroy_power_connection_with_usb4_stack;
    
    // [_OnChangePowerOff@MonitorUsb4State@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x157e8c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) on_change_power_off;
    
    // [_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x157f20, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) on_change_power_on_stage2;
    
    // [ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x157dec, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) report_hpd_departure_skipped;
    
    // [SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x216050, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) setup_power_connection_with_usb4_stack;
    
    // [_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b7860, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) usb4_target_device_change_notification;
};
#include "magic/api.end.hpp"
