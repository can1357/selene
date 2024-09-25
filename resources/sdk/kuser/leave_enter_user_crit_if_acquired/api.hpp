#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::leave_enter_user_crit_if_acquired
{
    // [??1LeaveEnterUserCritIfAcquired@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2597fc, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0LeaveEnterUserCritIfAcquired@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x25a598, 0x1596d bytes
    // win32kfull.sys .text:0x25a4a8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
