#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umpdref
{
    // [??1UMPDREF@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aabf8, 0x13864 bytes
    // win32kfull.sys .text:0x2b16a0, 0x1596d bytes
    // win32kfull.sys .text:0x2b2a5c, 0x1659e bytes
    // win32kfull.sys .text:0x2b1610, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
