#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::multidevlockobj
{
    // [??1MULTIDEVLOCKOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x5f70c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [vInit@MULTIDEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19308, 0x1eb80 bytes
    // win32kbase.sys .text:0x356c0, 0x243e0 bytes
    // win32kbase.sys .text:0x60884, 0x27ef0 bytes
    // win32kbase.sys .text:0x4f6c0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) v_init;
    
    // [vLock@MULTIDEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19220, 0x1eb80 bytes
    // win32kbase.sys .text:0x353d8, 0x243e0 bytes
    // win32kbase.sys .text:0x5f84c, 0x27ef0 bytes
    // win32kbase.sys .text:0x4f3d8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) v_lock;
    
    // [vUnlock@MULTIDEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x193ac, 0x1eb80 bytes
    // win32kbase.sys .text:0x352c0, 0x243e0 bytes
    // win32kbase.sys .text:0x5f734, 0x27ef0 bytes
    // win32kbase.sys .text:0x4f2c0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
