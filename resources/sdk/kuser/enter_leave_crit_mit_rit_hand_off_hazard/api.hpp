#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::enter_leave_crit_mit_rit_hand_off_hazard
{
    // [Enter@EnterLeaveCritMitRitHandOffHazard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x7180, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) enter;
    
    // [ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd9ac0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_waiters;
    
    // [_slSemWaiters@EnterLeaveCritMitRitHandOffHazard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2b36e0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) sl_sem_waiters;
    
    // [_spkSem@EnterLeaveCritMitRitHandOffHazard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2af580, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) spk_sem;
    
    // [UnInitialize@EnterLeaveCritMitRitHandOffHazard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x89680, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) un_initialize;
};
#include "magic/api.end.hpp"
