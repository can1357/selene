#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::monitor_mipi_dsi_state
{
    // [_DsiReset@MonitorMipiDsiState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3babcc, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) dsi_reset;
    
    // [_DsiTransmission@MonitorMipiDsiState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bade8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) dsi_transmission;
    
    // [_IsValidPacket@MonitorMipiDsiState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb0cc, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) is_valid_packet;
    
    // [OnInitialized@MonitorMipiDsiState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3ba9f4, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) on_initialized;
    
    // [OnIoctl@MonitorMipiDsiState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bab3c, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) on_ioctl;
    
    // [_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb170, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) query_mipi_dsi_caps;
    
    // [_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bb26c, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) validate_mipi_dsi_packets;
};
#include "magic/api.end.hpp"
