#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::event_time
{
    // [Now@EventTime@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ac00, 0x243e0 bytes
    // win32kbase.sys .text:0xeef8, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f4a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) now;
};
#include "magic/api.end.hpp"
