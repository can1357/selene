#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::shell_window_pos
{
    // [FreePositionEvent@ShellWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2391c0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) free_position_event;
    
    // [MigrateWindowAsync@ShellWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2392c8, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) migrate_window_async;
    
    // [NotifyPosAndStateApplied@ShellWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23944c, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) notify_pos_and_state_applied;
    
    // [PositionWindowAsync@ShellWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2395dc, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) position_window_async;
    
    // [xxxProcessPositionEvent@ShellWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23a5c0, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) xxx_process_position_event;
};
#include "magic/api.end.hpp"
