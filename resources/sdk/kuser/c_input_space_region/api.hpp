#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_space_region
{
    // [??0CInputSpaceRegion@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d294, 0x243e0 bytes
    // win32kbase.sys .text:0x64164, 0x27ef0 bytes
    // win32kbase.sys .text:0x566a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [MapToDisplayPath@CInputSpaceRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24470, 0x243e0 bytes
    // win32kbase.sys .text:0xc47a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x745d8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) map_to_display_path;
    
    // [PopulatePanelId@CInputSpaceRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x245a8, 0x243e0 bytes
    // win32kbase.sys .text:0xc54fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x74710, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) populate_panel_id;
};
#include "magic/api.end.hpp"
