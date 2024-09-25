#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_base_ptp_engine
{
    // [SendLastActionTelemetry@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x21bcd8, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) send_last_action_telemetry;
    
    // [SendTotalTimeTelemetry@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x21c204, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) send_total_time_telemetry;
    
    // [OnEvent@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf930, 0x243e0 bytes
    // win32kbase.sys .text:0x219bf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd710, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) on_event;
    
    // [OnInput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf960, 0x243e0 bytes
    // win32kbase.sys .text:0x219c20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd740, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) on_input;
    
    // [SendEtwOutput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d16a8, 0x243e0 bytes
    // win32kbase.sys .text:0x21ba10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf488, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) send_etw_output;
    
    // [SendGestureOutput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1704, 0x243e0 bytes
    // win32kbase.sys .text:0xf83ca, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf4e4, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) send_gesture_output;
    
    // [SendInertiaOutput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d178c, 0x243e0 bytes
    // win32kbase.sys .text:0x21ba6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf56c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) send_inertia_output;
    
    // [SendMouseOutput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1ba0, 0x243e0 bytes
    // win32kbase.sys .text:0x21beb4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf980, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) send_mouse_output;
    
    // [SendShellOutput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1d3c, 0x243e0 bytes
    // win32kbase.sys .text:0x21c050, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfb1c, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) send_shell_output;
    
    // [SendSqmOutput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1d88, 0x243e0 bytes
    // win32kbase.sys .text:0x21c09c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfb68, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) send_sqm_output;
    
    // [SendTelemetryOutput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1dcc, 0x243e0 bytes
    // win32kbase.sys .text:0x21c0e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfbac, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) send_telemetry_output;
    
    // [SendTimerOutput@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1e2c, 0x243e0 bytes
    // win32kbase.sys .text:0x21c1b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfc0c, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) send_timer_output;
    
    // [SendWarpbackTelemetry@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1e7c, 0x243e0 bytes
    // win32kbase.sys .text:0x21c248, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfc5c, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) send_warpback_telemetry;
    
    // [SetEnvironment@CBasePTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1f90, 0x243e0 bytes
    // win32kbase.sys .text:0x21c350, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfd70, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_environment;
};
#include "magic/api.end.hpp"
