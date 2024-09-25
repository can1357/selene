#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::foreground_management
{
    // [ActivationObjectCallout@ForegroundManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd7b88, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) activation_object_callout;
    
    // [CheckProcessForeground@ForegroundManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15cb60, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) check_process_foreground;
    
    // [GetForegroundWindow@ForegroundManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15ce90, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) get_foreground_window;
};
#include "magic/api.end.hpp"
