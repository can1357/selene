#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_batch::c_batch_list_proxy
{
    // [GetNext@CBatchListProxy@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de2a0, 0x243e0 bytes
    // win32kbase.sys .text:0x22cb90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc060, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_next;
    
    // [ReturnToApplication@CBatchListProxy@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de7f0, 0x243e0 bytes
    // win32kbase.sys .text:0x22cd80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc5b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) return_to_application;
};
#include "magic/api.end.hpp"
