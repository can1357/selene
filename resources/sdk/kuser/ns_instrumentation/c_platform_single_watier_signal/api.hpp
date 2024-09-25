#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_platform_single_watier_signal
{
    // [Wait@CPlatformSingleWatierSignal@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6d70, 0x13864 bytes
    // win32kfull.sys .text:0x2dcb48, 0x1596d bytes
    // win32kfull.sys .text:0x2ddf30, 0x1659e bytes
    // win32kfull.sys .text:0x2dcb58, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) wait;
};
#include "magic/api.end.hpp"
