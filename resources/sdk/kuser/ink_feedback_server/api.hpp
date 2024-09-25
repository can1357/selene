#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ink_feedback_server
{
    // [AddInkFeedbackProvider@InkFeedbackServer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124c54, 0x1596d bytes
    // win32kfull.sys .text:0xec66c, 0x1659e bytes
    // win32kfull.sys .text:0x125b94, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) add_ink_feedback_provider;
    
    // [OnPointerMessagePosted@InkFeedbackServer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25491c, 0x1596d bytes
    // win32kfull.sys .text:0x253ccc, 0x1659e bytes
    // win32kfull.sys .text:0x25482c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) on_pointer_message_posted;
    
    // [OnThreadExit@InkFeedbackServer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7d64, 0x1596d bytes
    // win32kfull.sys .text:0xec584, 0x1659e bytes
    // win32kfull.sys .text:0xf8bf4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) on_thread_exit;
    
    // [RemoveInkFeedbackProvider@InkFeedbackServer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11feac, 0x1596d bytes
    // win32kfull.sys .text:0xec5d4, 0x1659e bytes
    // win32kfull.sys .text:0x120dec, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) remove_ink_feedback_provider;
    
    // [RunForAllProviders@InkFeedbackServer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2550c0, 0x1596d bytes
    // win32kfull.sys .text:0x2543f4, 0x1659e bytes
    // win32kfull.sys .text:0x254fd0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) run_for_all_providers;
};
#include "magic/api.end.hpp"
