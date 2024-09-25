#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::needgrelock
{
    // [??1NEEDGRELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x26da60, 0x1596d bytes
    // win32kfull.sys .text:0x26d970, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [vLock@NEEDGRELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x43ee0, 0x1eb80 bytes
    // win32kbase.sys .text:0x6a2a0, 0x243e0 bytes
    // win32kbase.sys .text:0x53020, 0x27ef0 bytes
    // win32kbase.sys .text:0x46f70, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) v_lock;
    
    // [vUnlock@NEEDGRELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x43e20, 0x1eb80 bytes
    // win32kbase.sys .text:0xa75d0, 0x243e0 bytes
    // win32kbase.sys .text:0xb4cf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x46fe0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
