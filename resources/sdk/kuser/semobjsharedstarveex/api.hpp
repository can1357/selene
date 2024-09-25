#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::semobjsharedstarveex
{
    // [??1SEMOBJSHAREDSTARVEEX@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5dc20, 0x13864 bytes
    // win32kfull.sys .text:0x470e8, 0x1596d bytes
    // win32kfull.sys .text:0x3fa88, 0x1659e bytes
    // win32kfull.sys .text:0x474f8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
