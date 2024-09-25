#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::undorenderlockcounts
{
    // [??0UNDORENDERLOCKCOUNTS@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117100, 0x13864 bytes
    // win32kfull.sys .text:0x11c5e4, 0x1596d bytes
    // win32kfull.sys .text:0x10e360, 0x1659e bytes
    // win32kfull.sys .text:0x11d514, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1UNDORENDERLOCKCOUNTS@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117140, 0x13864 bytes
    // win32kfull.sys .text:0x11e714, 0x1596d bytes
    // win32kfull.sys .text:0x1105fc, 0x1659e bytes
    // win32kfull.sys .text:0x11f614, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
