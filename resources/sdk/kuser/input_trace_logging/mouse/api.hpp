#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::mouse
{
    // [SendToUserMode@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb50c, 0x243e0 bytes
    // win32kbase.sys .text:0x1c92ec, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) send_to_user_mode;
    
    // [BufferMouseInput@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbb20, 0x243e0 bytes
    // win32kbase.sys .text:0x2041ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9900, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) buffer_mouse_input;
    
    // [CallInterceptor@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8584, 0x243e0 bytes
    // win32kbase.sys .text:0x2116a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6364, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) call_interceptor;
    
    // [CoalesceInput@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7740, 0x243e0 bytes
    // win32kbase.sys .text:0xd9d20, 0x27ef0 bytes
    // win32kbase.sys .text:0xc02e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) coalesce_input;
    
    // [DropButton@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8d48, 0x243e0 bytes
    // win32kbase.sys .text:0x212158, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6b28, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) drop_button;
    
    // [DropInput@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213f5c, 0x1596d bytes
    // win32kbase.sys .text:0x1f6144, 0x27ef0 bytes
    // win32kfull.sys .text:0x213dcc, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) drop_input;
    
    // [DropMove@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc1104, 0x243e0 bytes
    // win32kbase.sys .text:0xd65bc, 0x27ef0 bytes
    // win32kbase.sys .text:0xba834, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) drop_move;
    
    // [DropWheel@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8f80, 0x243e0 bytes
    // win32kbase.sys .text:0x2121c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6d60, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) drop_wheel;
    
    // [FlushHoldingBuffer@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbcf4, 0x243e0 bytes
    // win32kbase.sys .text:0x2042dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9ad4, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) flush_holding_buffer;
    
    // [HandleInterception@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c9b08, 0x243e0 bytes
    // win32kbase.sys .text:0x212c78, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c78e8, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) handle_interception;
    
    // [HandleLowLevelHook@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e4f8, 0x1596d bytes
    // win32kfull.sys .text:0x21b430, 0x1659e bytes
    // win32kfull.sys .text:0x21e380, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) handle_low_level_hook;
    
    // [InformUMObservers@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c9e48, 0x243e0 bytes
    // win32kbase.sys .text:0x212f90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c7c28, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) inform_um_observers;
    
    // [InjectInput@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x13b250, 0x243e0 bytes
    // win32kbase.sys .text:0x16cb8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1389a0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) inject_input;
    
    // [MouseReportRateLimitingTimerFired@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbf40, 0x243e0 bytes
    // win32kbase.sys .text:0x2043d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9d20, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) mouse_report_rate_limiting_timer_fired;
    
    // [ProcessInput@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6bbe4, 0x243e0 bytes
    // win32kbase.sys .text:0x222d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x60750, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) process_input;
    
    // [ProcessInputWithRateLimitingIfEnabled@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bc1a8, 0x243e0 bytes
    // win32kbase.sys .text:0xf7c00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9f88, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) process_input_with_rate_limiting_if_enabled;
    
    // [ProcessWheel@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb220, 0x243e0 bytes
    // win32kbase.sys .text:0x214678, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c9000, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) process_wheel;
    
    // [RerouteWheel@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb358, 0x243e0 bytes
    // win32kbase.sys .text:0x2147b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c9138, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) reroute_wheel;
    
    // [SecondaryHitTest@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb1078, 0x1596d bytes
    // win32kfull.sys .text:0xa8510, 0x1659e bytes
    // win32kfull.sys .text:0xb1be8, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) secondary_hit_test;
    
    // [SetCapture@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x33344, 0x1596d bytes
    // win32kfull.sys .text:0xa8388, 0x1659e bytes
    // win32kfull.sys .text:0x33754, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) set_capture;
    
    // [SetShellClip@Mouse@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac328, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2fb8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aaa48, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) set_shell_clip;
};
#include "magic/api.end.hpp"
