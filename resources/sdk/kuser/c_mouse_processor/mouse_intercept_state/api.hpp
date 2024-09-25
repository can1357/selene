#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::mouse_intercept_state
{
    // [CallInterceptor@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8618, 0x243e0 bytes
    // win32kbase.sys .text:0x211738, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c63f8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) call_interceptor;
    
    // [Disable@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc56d0, 0x243e0 bytes
    // win32kbase.sys .text:0xd8b48, 0x27ef0 bytes
    // win32kbase.sys .text:0xbe6c0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) disable;
    
    // [Enable@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8ff0, 0x243e0 bytes
    // win32kbase.sys .text:0x212238, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6dd0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) enable;
    
    // [GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c994c, 0x243e0 bytes
    // win32kbase.sys .text:0x212abc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c772c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_intercept_state_and_behavior;
    
    // [InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ca020, 0x243e0 bytes
    // win32kbase.sys .text:0x213168, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c7e00, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) invoke_marshaled_intercept_request;
    
    // [IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ca134, 0x243e0 bytes
    // win32kbase.sys .text:0x21327c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c7f14, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_current_input_desktop_interceptable;
    
    // [Marshal@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ca16c, 0x243e0 bytes
    // win32kbase.sys .text:0x2132b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c7f4c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) marshal;
    
    // [PerformMarashlingCheck@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ca280, 0x243e0 bytes
    // win32kbase.sys .text:0x2133d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c8060, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) perform_marashling_check;
    
    // [PrepareForMarshaling@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ca5ac, 0x243e0 bytes
    // win32kbase.sys .text:0x2137e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c838c, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) prepare_for_marshaling;
    
    // [UserModeCallout@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb6d0, 0x243e0 bytes
    // win32kbase.sys .text:0x214c40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c94b0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) user_mode_callout;
};
#include "magic/api.end.hpp"
