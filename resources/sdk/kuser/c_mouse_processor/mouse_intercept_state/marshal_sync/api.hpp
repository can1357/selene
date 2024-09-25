#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::mouse_intercept_state::marshal_sync
{
    // [FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26ee0, 0x243e0 bytes
    // win32kbase.sys .text:0x88a2c, 0x27ef0 bytes
    // win32kbase.sys .text:0x79b00, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) free_marshaling_event;
    
    // [WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb7dc, 0x243e0 bytes
    // win32kbase.sys .text:0x214da4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c95bc, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) wait_for_callout;
};
#include "magic/api.end.hpp"
