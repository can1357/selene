#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::mouse_input_data_ex
{
    // [ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ac18, 0x243e0 bytes
    // win32kbase.sys .text:0x22064, 0x27ef0 bytes
    // win32kbase.sys .text:0x63674, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) compute_mouse_data_input_source;
    
    // [ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a8d0, 0x243e0 bytes
    // win32kbase.sys .text:0x21c70, 0x27ef0 bytes
    // win32kbase.sys .text:0x60e14, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) compute_raw_mouse_processing_options;
    
    // [Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c9f14, 0x243e0 bytes
    // win32kbase.sys .text:0x21305c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c7cf4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) interceptor_update_input_report;
    
    // [TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb23bc, 0x243e0 bytes
    // win32kbase.sys .text:0xc4184, 0x27ef0 bytes
    // win32kbase.sys .text:0x5e2fc, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) test_commit_mouse_and_cursor_position_result;
    
    // [TestProcessingOption@MouseInputDataEx@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6aa20, 0x243e0 bytes
    // win32kbase.sys .text:0x21dc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x60f64, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) test_processing_option;
};
#include "magic/api.end.hpp"
