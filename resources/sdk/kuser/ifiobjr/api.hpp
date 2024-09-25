#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ifiobjr
{
    // [??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbb8d4, 0x13864 bytes
    // win32kfull.sys .text:0x67428, 0x1596d bytes
    // win32kfull.sys .text:0x754c8, 0x1659e bytes
    // win32kfull.sys .text:0x67f98, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
