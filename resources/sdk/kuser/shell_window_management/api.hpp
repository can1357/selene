#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::shell_window_management
{
    // [EligibleWindow@ShellWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc21d0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) eligible_window;
    
    // [ExtendedBehaviorEnabled@ShellWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x107468, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) extended_behavior_enabled;
    
    // [GetWindowTrackState@ShellWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x239278, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) get_window_track_state;
    
    // [BehaviorEnabled@ShellWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xaca30, 0x1596d bytes
    // win32kfull.sys .text:0xacab4, 0x1659e bytes
    // win32kfull.sys .text:0xad5a0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) behavior_enabled;
    
    // [SetWindow@ShellWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc1360, 0x1596d bytes
    // win32kfull.sys .text:0x8bb10, 0x1659e bytes
    // win32kfull.sys .text:0xc1ed0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) set_window;
    
    // [TransformWindowTrackInfo@ShellWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ed24, 0x1596d bytes
    // win32kfull.sys .text:0xc2328, 0x1659e bytes
    // win32kfull.sys .text:0x2f134, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) transform_window_track_info;
    
    // [WindowSubjectToBehavior@ShellWindowManagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xac9ec, 0x1596d bytes
    // win32kfull.sys .text:0xaca6c, 0x1659e bytes
    // win32kfull.sys .text:0xad55c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) window_subject_to_behavior;
};
#include "magic/api.end.hpp"
