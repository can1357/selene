#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::semobj
{
    // [??1SEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1c2328, 0x13864 bytes
    // win32kfull.sys .text:0x26e0d4, 0x1596d bytes
    // win32kfull.sys .text:0x26e024, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [vUnlock@SEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf8a68, 0x13864 bytes
    // win32kfull.sys .text:0x3734c, 0x1596d bytes
    // win32kfull.sys .text:0x692d0, 0x1659e bytes
    // win32kfull.sys .text:0x3775c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
