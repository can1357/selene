#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mutex
{
    // [??0CMutex@@QEAA@PEAJ@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x91f0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CMutex@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x91a0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Lock@CMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x91d0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) lock;
    
    // [Unlock@CMutex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xb8550, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) unlock;
};
#include "magic/api.end.hpp"
