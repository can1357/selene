#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::singlereaderlock
{
    // [vLock@SINGLEREADERLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x272498, 0x13864 bytes
    // win32kfull.sys .text:0x28289c, 0x1596d bytes
    // win32kfull.sys .text:0x2829e0, 0x1659e bytes
    // win32kfull.sys .text:0x28280c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_lock;
    
    // [vUnlock@SINGLEREADERLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x279b8c, 0x13864 bytes
    // win32kfull.sys .text:0x285968, 0x1596d bytes
    // win32kfull.sys .text:0x148030, 0x1659e bytes
    // win32kfull.sys .text:0x2858d8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
