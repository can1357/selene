#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::devlockobj_wndobj
{
    // [??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2666a0, 0x13864 bytes
    // win32kfull.sys .text:0x27bb14, 0x1596d bytes
    // win32kfull.sys .text:0x27bbe4, 0x1659e bytes
    // win32kfull.sys .text:0x27ba84, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2667b8, 0x13864 bytes
    // win32kfull.sys .text:0x27bc88, 0x1596d bytes
    // win32kfull.sys .text:0x27bd54, 0x1659e bytes
    // win32kfull.sys .text:0x27bbf8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [vConstructor@DEVLOCKOBJ_WNDOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26844c, 0x13864 bytes
    // win32kfull.sys .text:0x27c908, 0x1596d bytes
    // win32kfull.sys .text:0x27ca68, 0x1659e bytes
    // win32kfull.sys .text:0x27c878, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) v_constructor;
};
#include "magic/api.end.hpp"
