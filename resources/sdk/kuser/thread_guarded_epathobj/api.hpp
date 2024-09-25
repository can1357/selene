#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::thread_guarded_epathobj
{
    // [vThreadCleanup@THREAD_GUARDED_EPATHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27ad90, 0x13864 bytes
    // win32kfull.sys .text:0x147500, 0x1596d bytes
    // win32kfull.sys .text:0x13c2d0, 0x1659e bytes
    // win32kfull.sys .text:0x148440, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_thread_cleanup;
};
#include "magic/api.end.hpp"
