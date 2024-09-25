#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ptp_telemetry
{
    // [GetDeviceData@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1afc48, 0x243e0 bytes
    // win32kbase.sys .text:0x1f64d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad9f8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_device_data;
    
    // [OnSettingsAvailable@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b06d0, 0x243e0 bytes
    // win32kbase.sys .text:0xe8fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ae480, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) on_settings_available;
    
    // [OnUserLogin@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b0a10, 0x243e0 bytes
    // win32kbase.sys .text:0x1f71a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ae7c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) on_user_login;
    
    // [PTPConfigUpdateEx@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b0a48, 0x243e0 bytes
    // win32kbase.sys .text:0x1f71d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ae7f8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) ptp_config_update_ex;
    
    // [s_HasTpDevice@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x262488, 0x243e0 bytes
    // win32kbase.sys .data:0x2b74a8, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f4c8, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) s_has_tp_device;
    
    // [s_SettingsFired@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x262489, 0x243e0 bytes
    // win32kbase.sys .data:0x2b74a9, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f4c9, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) s_settings_fired;
    
    // [s_SettingsReady@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25acb8, 0x243e0 bytes
    // win32kbase.sys .data:0x2afac8, 0x27ef0 bytes
    // win32kbase.sys .data:0x257ce0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) s_settings_ready;
    
    // [ShouldPtpSettingFire@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b15e8, 0x243e0 bytes
    // win32kbase.sys .text:0x1f800c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1af390, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) should_ptp_setting_fire;
};
#include "magic/api.end.hpp"
