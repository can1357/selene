#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::foreground_launch
{
    // [OnDaemonTimer@ForegroundLaunch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xa4ac8, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) on_daemon_timer;
    
    // [OnFirstActivationAttempted@ForegroundLaunch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x103d94, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) on_first_activation_attempted;
    
    // [PopProcessLaunchForegroundPolicy@ForegroundLaunch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xa3f68, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) pop_process_launch_foreground_policy;
    
    // [PushProcessLaunchForegroundPolicy@ForegroundLaunch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xa408c, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) push_process_launch_foreground_policy;
};
#include "magic/api.end.hpp"
