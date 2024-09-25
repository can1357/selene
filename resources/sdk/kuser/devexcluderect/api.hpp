#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::devexcluderect
{
    // [??1DEVEXCLUDERECT@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2666e4, 0x13864 bytes
    // win32kfull.sys .text:0x27bbc8, 0x1596d bytes
    // win32kfull.sys .text:0x27bc98, 0x1659e bytes
    // win32kfull.sys .text:0x27bb38, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [vExclude@DEVEXCLUDERECT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2685c4, 0x13864 bytes
    // win32kfull.sys .text:0x27cb28, 0x1596d bytes
    // win32kfull.sys .text:0x27cc88, 0x1659e bytes
    // win32kfull.sys .text:0x27ca98, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_exclude;
};
#include "magic/api.end.hpp"
