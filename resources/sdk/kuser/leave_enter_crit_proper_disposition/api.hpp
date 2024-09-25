#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::leave_enter_crit_proper_disposition
{
    // [??0LeaveEnterCritProperDisposition@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x570a8, 0x1596d bytes
    // win32kfull.sys .text:0x54080, 0x1659e bytes
    // win32kfull.sys .text:0x574c8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1LeaveEnterCritProperDisposition@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x57070, 0x1596d bytes
    // win32kfull.sys .text:0x5404c, 0x1659e bytes
    // win32kfull.sys .text:0x57490, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
