#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::synchronization_object
{
    // [ObjectInit@SynchronizationObject@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dd0c0, 0x243e0 bytes
    // win32kbase.sys .text:0x22b8a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dae80, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) object_init;
    
    // [ResolveHandle@SynchronizationObject@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dd0f4, 0x243e0 bytes
    // win32kbase.sys .text:0x22b8d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1daeb4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) resolve_handle;
};
#include "magic/api.end.hpp"
