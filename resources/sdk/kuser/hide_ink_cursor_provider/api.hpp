#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::hide_ink_cursor_provider
{
    // [DoHideInkCursorStart@HideInkCursorProvider]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2545fc, 0x1596d bytes
    // win32kfull.sys .text:0x2539ac, 0x1659e bytes
    // win32kfull.sys .text:0x25450c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) do_hide_ink_cursor_start;
    
    // [DoHideInkCursorStop@HideInkCursorProvider]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2546a8, 0x1596d bytes
    // win32kfull.sys .text:0x253a58, 0x1659e bytes
    // win32kfull.sys .text:0x2545b8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) do_hide_ink_cursor_stop;
    
    // [PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2549f0, 0x1596d bytes
    // win32kfull.sys .text:0x253da0, 0x1659e bytes
    // win32kfull.sys .text:0x254900, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) pre_process_ink_feedback_command_no_lock;
    
    // [ProcessInkFeedbackCommand@HideInkCursorProvider]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x254bb0, 0x1596d bytes
    // win32kfull.sys .text:0x253f60, 0x1659e bytes
    // win32kfull.sys .text:0x254ac0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) process_ink_feedback_command;
    
    // [TerminateActiveCommand@HideInkCursorProvider]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x255190, 0x1596d bytes
    // win32kfull.sys .text:0x2544c0, 0x1659e bytes
    // win32kfull.sys .text:0x2550a0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) terminate_active_command;
    
    // [ValidatePointer@HideInkCursorProvider]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2551ac, 0x1596d bytes
    // win32kfull.sys .text:0x2544dc, 0x1659e bytes
    // win32kfull.sys .text:0x2550bc, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) validate_pointer;
};
#include "magic/api.end.hpp"
