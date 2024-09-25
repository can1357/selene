#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ptp_telemetry::usage
{
    // [gTPTelemState@Usage@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x261a50, 0x243e0 bytes
    // win32kbase.sys .data:0x2b6800, 0x27ef0 bytes
    // win32kbase.sys .data:0x25ea90, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) g_tp_telem_state;
    
    // [gTPTelemTimings@Usage@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25acc0, 0x243e0 bytes
    // win32kbase.sys .data:0x2afad0, 0x27ef0 bytes
    // win32kbase.sys .data:0x257cf0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) g_tp_telem_timings;
    
    // [gmsLastTelemetrySentTime@Usage@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x262490, 0x243e0 bytes
    // win32kbase.sys .data:0x2b74b0, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f4d0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) gms_last_telemetry_sent_time;
    
    // [HandlePTPTelemetry@Usage@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2970, 0x243e0 bytes
    // win32kbase.sys .text:0xe3ca0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd1310, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) handle_ptp_telemetry;
    
    // [OnEndSession@Usage@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b0114, 0x243e0 bytes
    // win32kbase.sys .text:0x1f68b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1adec4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) on_end_session;
    
    // [OnNewSession@Usage@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b0678, 0x243e0 bytes
    // win32kbase.sys .text:0x1f6e1c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ae428, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) on_new_session;
    
    // [SetLastAction@Usage@PTPTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b11f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f7cd4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aef98, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_last_action;
};
#include "magic/api.end.hpp"
