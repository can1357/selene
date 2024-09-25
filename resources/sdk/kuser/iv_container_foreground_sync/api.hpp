#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_container_foreground_sync
{
    // [windowToForeground@IVContainerForegroundSync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .data:0x33acf0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) window_to_foreground;
    
    // [xxxIVSyncForeground@IVContainerForegroundSync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1d10fc, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) xxx_iv_sync_foreground;
};
#include "magic/api.end.hpp"
