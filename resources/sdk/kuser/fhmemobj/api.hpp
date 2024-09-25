#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::fhmemobj
{
    // [??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11fce4, 0x13864 bytes
    // win32kfull.sys .text:0x1200fc, 0x1596d bytes
    // win32kfull.sys .text:0x11013c, 0x1659e bytes
    // win32kfull.sys .text:0x12103c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
