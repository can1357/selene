#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::surfrefdc
{
    // [vLock@SURFREFDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x77fc8, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) v_lock;
    
    // [vUnlock@SURFREFDC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x7802c, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
