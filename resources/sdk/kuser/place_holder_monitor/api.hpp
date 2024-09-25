#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::place_holder_monitor
{
    // [Reset@PlaceHolderMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x4ac74, 0x1596d bytes
    // win32kfull.sys .text:0x4b084, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) reset;
};
#include "magic/api.end.hpp"
