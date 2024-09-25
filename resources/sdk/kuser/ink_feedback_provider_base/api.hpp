#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ink_feedback_provider_base
{
    // [AddActiveCommand@InkFeedbackProviderBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x254534, 0x1596d bytes
    // win32kfull.sys .text:0x2538e4, 0x1659e bytes
    // win32kfull.sys .text:0x254444, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) add_active_command;
    
    // [EndActiveCommandsByOwnerThread@InkFeedbackProviderBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1074f0, 0x1596d bytes
    // win32kfull.sys .text:0xfefc0, 0x1659e bytes
    // win32kfull.sys .text:0x108420, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) end_active_commands_by_owner_thread;
    
    // [EndActiveCommandsByPointerId@InkFeedbackProviderBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x254750, 0x1596d bytes
    // win32kfull.sys .text:0x253b00, 0x1659e bytes
    // win32kfull.sys .text:0x254660, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) end_active_commands_by_pointer_id;
    
    // [FindActiveCommandByTargetPointerId@InkFeedbackProviderBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x254844, 0x1596d bytes
    // win32kfull.sys .text:0x253bf4, 0x1659e bytes
    // win32kfull.sys .text:0x254754, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) find_active_command_by_target_pointer_id;
    
    // [RemoveActiveCommand@InkFeedbackProviderBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x254fb4, 0x1596d bytes
    // win32kfull.sys .text:0x2542e8, 0x1659e bytes
    // win32kfull.sys .text:0x254ec4, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) remove_active_command;
    
    // [RemoveAndReleaseActiveCommand@InkFeedbackProviderBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x255088, 0x1596d bytes
    // win32kfull.sys .text:0x2543bc, 0x1659e bytes
    // win32kfull.sys .text:0x254f98, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) remove_and_release_active_command;
};
#include "magic/api.end.hpp"
