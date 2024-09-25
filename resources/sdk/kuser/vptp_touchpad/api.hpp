#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::vptp_touchpad
{
    // [??0VPTPTouchpad@@QEAA@PEAU_LIST_ENTRY@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20ad34, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1VPTPTouchpad@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20adf4, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [IsActive@VPTPTouchpad]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20bc8c, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) is_active;
};
#include "magic/api.end.hpp"
