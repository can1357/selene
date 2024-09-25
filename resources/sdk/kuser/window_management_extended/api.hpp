#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::window_management_extended
{
    // [xxxCloseApplication@WindowManagementExtended]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x241b20, 0x1596d bytes
    // win32kfull.sys .text:0x2419d0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) xxx_close_application;
};
#include "magic/api.end.hpp"
