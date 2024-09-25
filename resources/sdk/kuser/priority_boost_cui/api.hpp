#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::priority_boost_cui
{
    // [TransitionForegroundPriority@PriorityBoostCUI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x32118, 0x1596d bytes
    // win32kfull.sys .text:0x32528, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) transition_foreground_priority;
    
    // [UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x4b08, 0x1596d bytes
    // win32kfull.sys .text:0x4eb8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) update_process_priority_when_component_added;
    
    // [UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x224044, 0x1596d bytes
    // win32kfull.sys .text:0x223f04, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) update_process_priority_when_component_removed;
    
    // [UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x322b4, 0x1596d bytes
    // win32kfull.sys .text:0x326c4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) update_process_priority_when_enable_state_is_changing;
};
#include "magic/api.end.hpp"
