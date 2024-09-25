#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_thread::input_thread_state
{
    // [Init@InputThreadState@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb30e0, 0x243e0 bytes
    // win32kbase.sys .text:0xa9750, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) init;
    
    // [IsEmpty@InputThreadState@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb2ff0, 0x243e0 bytes
    // win32kbase.sys .text:0xa9660, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_empty;
};
#include "magic/api.end.hpp"
