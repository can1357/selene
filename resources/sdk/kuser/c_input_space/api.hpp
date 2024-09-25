#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_space
{
    // [AddRegion@CInputSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d540, 0x243e0 bytes
    // win32kbase.sys .text:0x64410, 0x27ef0 bytes
    // win32kbase.sys .text:0x5694c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_region;
    
    // [??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d224, 0x243e0 bytes
    // win32kbase.sys .text:0x640f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x56630, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [FreeRegions@CInputSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x271fc, 0x243e0 bytes
    // win32kbase.sys .text:0x67e5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x53a20, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) free_regions;
    
    // [Reset@CInputSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf48, 0x243e0 bytes
    // win32kbase.sys .text:0x64dd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x56354, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) reset;
};
#include "magic/api.end.hpp"
