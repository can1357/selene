#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_sensor::mouse_rate_limit_holding_frame
{
    // [CanCombineMouseReportBatches@MouseRateLimitHoldingFrame@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbbb4, 0x243e0 bytes
    // win32kbase.sys .text:0x204280, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9994, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) can_combine_mouse_report_batches;
    
    // [CopyMouseInputToHoldingBuffer@MouseRateLimitHoldingFrame@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbc10, 0x243e0 bytes
    // win32kbase.sys .text:0xf7956, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b99f0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) copy_mouse_input_to_holding_buffer;
    
    // [HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbe28, 0x243e0 bytes
    // win32kbase.sys .text:0x204370, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9c08, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) handle_mouse_report_rate_limiting_timer;
    
    // [InitializeHoldingFrame@MouseRateLimitHoldingFrame@CMouseSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bbe90, 0x243e0 bytes
    // win32kbase.sys .text:0xf7ad8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b9c70, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize_holding_frame;
};
#include "magic/api.end.hpp"
