#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::vptp_contact
{
    // [??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20acc0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1VPTPContact@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20ad98, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
