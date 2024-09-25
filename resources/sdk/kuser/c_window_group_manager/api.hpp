#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_window_group_manager
{
    // [Cleanup@CWindowGroupManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x240ba4, 0x1596d bytes
    // win32kfull.sys .text:0x240a54, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) cleanup;
    
    // [CreateGroup@CWindowGroupManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x240cc8, 0x1596d bytes
    // win32kfull.sys .text:0x240b78, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) create_group;
    
    // [GetGroupActiveWindow@CWindowGroupManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241060, 0x1596d bytes
    // win32kfull.sys .text:0x240f10, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) get_group_active_window;
    
    // [Initialize@CWindowGroupManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2411e0, 0x1596d bytes
    // win32kfull.sys .text:0x241090, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [IsPolicySet@CWindowGroupManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241294, 0x1596d bytes
    // win32kfull.sys .text:0x241144, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) is_policy_set;
    
    // [NotifyTemplateApplied@CWindowGroupManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2412e0, 0x1596d bytes
    // win32kfull.sys .text:0x241190, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) notify_template_applied;
    
    // [Uninitialize@CWindowGroupManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241738, 0x1596d bytes
    // win32kfull.sys .text:0x2415e8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) uninitialize;
};
#include "magic/api.end.hpp"
