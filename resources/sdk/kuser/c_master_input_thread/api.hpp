#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_master_input_thread
{
    // [Initialize@CMasterInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x85fd4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [IsInputThreadDesktopActive@CMasterInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x87054, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) is_input_thread_desktop_active;
};
#include "magic/api.end.hpp"
