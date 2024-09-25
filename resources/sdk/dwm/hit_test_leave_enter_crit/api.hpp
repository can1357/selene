#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dwm::hit_test_leave_enter_crit
{
    // [??0DwmHitTestLeaveEnterCrit@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x4910, 0x1eb80 bytes
    // win32kbase.sys .text:0x12a0a0, 0x243e0 bytes
    // win32kbase.sys .text:0x127920, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DwmHitTestLeaveEnterCrit@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x4820, 0x1eb80 bytes
    // win32kbase.sys .text:0x12a0d0, 0x243e0 bytes
    // win32kbase.sys .text:0x127950, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
