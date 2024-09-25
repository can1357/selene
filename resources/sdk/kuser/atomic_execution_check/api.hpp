#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::atomic_execution_check
{
    // [??0AtomicExecutionCheck@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x50bc0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Disarm@AtomicExecutionCheck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x9d46c, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) disarm;
    
    // [GetCount@AtomicExecutionCheck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x67bd4, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) get_count;
};
#include "magic/api.end.hpp"
