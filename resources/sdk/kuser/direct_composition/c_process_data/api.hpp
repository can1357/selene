#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_process_data
{
    // [Initialize@CProcessData@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x2e694, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [Current@CProcessData@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2edb8, 0x1eb80 bytes
    // win32kbase.sys .text:0x7af60, 0x243e0 bytes
    // win32kbase.sys .text:0x27e28, 0x27ef0 bytes
    // win32kbase.sys .text:0x8113c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) current;
    
    // [OnProcessCreation@CProcessData@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e5d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x3fef8, 0x243e0 bytes
    // win32kbase.sys .text:0x25b68, 0x27ef0 bytes
    // win32kbase.sys .text:0x7de98, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) on_process_creation;
};
#include "magic/api.end.hpp"
