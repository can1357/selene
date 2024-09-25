#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umfd_host_life_time_manager::auto_attach_fon_drv_process
{
    // [Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x146c48, 0x13864 bytes
    // win32kfull.sys .text:0x289628, 0x1596d bytes
    // win32kfull.sys .text:0xe5338, 0x1659e bytes
    // win32kfull.sys .text:0x289598, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) attach;
};
#include "magic/api.end.hpp"
