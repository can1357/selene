#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_sensor
{
    // [CreateInstance@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x87f54, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create_instance;
    
    // [??0CMouseSensor@@IEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26a10, 0x243e0 bytes
    // win32kbase.sys .text:0x87fd8, 0x27ef0 bytes
    // win32kbase.sys .text:0x79630, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [dispatcherObjects@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x218728, 0x243e0 bytes
    // win32kbase.sys .rdata:0x269820, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x216548, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) dispatcher_objects;
    
    // [FlushMouseReports@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbd88, 0x243e0 bytes
    // win32kbase.sys .text:0xf7a38, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9b68, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) flush_mouse_reports;
    
    // [GetCursorUpdateHandle@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x28390, 0x243e0 bytes
    // win32kbase.sys .text:0xbe980, 0x27ef0 bytes
    // win32kbase.sys .text:0x7aef0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_cursor_update_handle;
    
    // [GetDispatchersName@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc8170, 0x243e0 bytes
    // win32kbase.sys .text:0xd98d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0d50, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_dispatchers_name;
    
    // [GetProcessor@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9bc0, 0x243e0 bytes
    // win32kbase.sys .text:0xada00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8560, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_processor;
    
    // [OnMouseCursorUpdateNotification@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe2c0, 0x243e0 bytes
    // win32kbase.sys .text:0x7adc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x58c70, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) on_mouse_cursor_update_notification;
    
    // [OnMouseReportRateLimitingTimerNotification@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbfe0, 0x243e0 bytes
    // win32kbase.sys .text:0x204470, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9dc0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) on_mouse_report_rate_limiting_timer_notification;
    
    // [PostInitialize@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x27df0, 0x243e0 bytes
    // win32kbase.sys .text:0x88080, 0x27ef0 bytes
    // win32kbase.sys .text:0x7a950, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) post_initialize;
    
    // [PreUninitialize@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26f10, 0x243e0 bytes
    // win32kbase.sys .text:0x88a50, 0x27ef0 bytes
    // win32kbase.sys .text:0x79b30, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) pre_uninitialize;
    
    // [ProcessInput@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bc010, 0x243e0 bytes
    // win32kbase.sys .text:0xf7b90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9df0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) process_input;
    
    // [ProcessInputWithRateLimitingIfEnabled@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bc080, 0x243e0 bytes
    // win32kbase.sys .text:0x20449c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9e60, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) process_input_with_rate_limiting_if_enabled;
    
    // [SetInputRateLimitingTime@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2a3ac, 0x243e0 bytes
    // win32kbase.sys .text:0x880f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x7d05c, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_input_rate_limiting_time;
};
#include "magic/api.end.hpp"
