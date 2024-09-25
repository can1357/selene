#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::wo_cleanup
{
    // [??1WO_CLEANUP@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27ae9c, 0x13864 bytes
    // win32kfull.sys .text:0x286e78, 0x1596d bytes
    // win32kfull.sys .text:0x286044, 0x1659e bytes
    // win32kfull.sys .text:0x286de8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
