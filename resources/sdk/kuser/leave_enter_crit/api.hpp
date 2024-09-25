#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::leave_enter_crit
{
    // [??0LeaveEnterCrit@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x154344, 0x1596d bytes
    // win32kfull.sys .text:0x14ad74, 0x1659e bytes
    // win32kfull.sys .text:0x155284, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1LeaveEnterCrit@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x15436c, 0x1596d bytes
    // win32kfull.sys .text:0x14ad9c, 0x1659e bytes
    // win32kfull.sys .text:0x1552ac, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
