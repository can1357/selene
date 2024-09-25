#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::palm_telemetry
{
    // [_ProcessTouchPacket@PalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18dc9c, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce3d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x18c08c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) process_touch_packet;
    
    // [_BufferPenPacket@PalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe56c8, 0x1eb80 bytes
    // win32kbase.sys .text:0x18daa8, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce1e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x18be98, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) buffer_pen_packet;
    
    // [_DiscardOldTouchPackets@PalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe5728, 0x1eb80 bytes
    // win32kbase.sys .text:0x18db18, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce254, 0x27ef0 bytes
    // win32kbase.sys .text:0x18bf08, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) discard_old_touch_packets;
    
    // [_ProcessPenPacket@PalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe57b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x18dbb8, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce2f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x18bfa8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) process_pen_packet;
    
    // [_Report@PalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe5864, 0x1eb80 bytes
    // win32kbase.sys .text:0x18dd20, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce44c, 0x27ef0 bytes
    // win32kbase.sys .text:0x18c110, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) report;
    
    // [_ResetTelemetryData@PalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f430, 0x1eb80 bytes
    // win32kbase.sys .text:0x18df94, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce6e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x18c384, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) reset_telemetry_data;
    
    // [_TryBuffer@PalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe5af8, 0x1eb80 bytes
    // win32kbase.sys .text:0x18dfec, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce738, 0x27ef0 bytes
    // win32kbase.sys .text:0x18c3dc, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) try_buffer;
    
    // [Update@PalmTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe557c, 0x1eb80 bytes
    // win32kbase.sys .text:0x18d94c, 0x243e0 bytes
    // win32kbase.sys .text:0x1ce088, 0x27ef0 bytes
    // win32kbase.sys .text:0x18bd3c, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) update;
};
#include "magic/api.end.hpp"
