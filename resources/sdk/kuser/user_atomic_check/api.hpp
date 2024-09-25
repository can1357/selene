#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::user_atomic_check
{
    // [RegisterStack@UserAtomicCheck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x99b9c, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) register_stack;
    
    // [UnregisterStack@UserAtomicCheck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x99a78, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) unregister_stack;
    
    // [??0UserAtomicCheck@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x99abc, 0x13864 bytes
    // win32kfull.sys .text:0x7ccf4, 0x1596d bytes
    // win32kfull.sys .text:0x7d864, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1UserAtomicCheck@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x99c58, 0x13864 bytes
    // win32kfull.sys .text:0x7cca0, 0x1596d bytes
    // win32kfull.sys .text:0x7d810, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [Detach@UserAtomicCheck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x144ad8, 0x13864 bytes
    // win32kfull.sys .text:0x4ddf4, 0x1596d bytes
    // win32kfull.sys .text:0x4e214, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) detach;
};
#include "magic/api.end.hpp"
