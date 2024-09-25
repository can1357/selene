#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::mark_accdrv_notification
{
    // [??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28b8fc, 0x13864 bytes
    // win32kfull.sys .text:0x299360, 0x1596d bytes
    // win32kfull.sys .text:0x29a300, 0x1659e bytes
    // win32kfull.sys .text:0x2992d0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
