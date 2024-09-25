#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_material_properties_table
{
    // [Shutdown@CMaterialPropertiesTable@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x8bb18, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) shutdown;
    
    // [Initialize@CMaterialPropertiesTable@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbe058, 0x243e0 bytes
    // win32kbase.sys .text:0x87898, 0x27ef0 bytes
    // win32kbase.sys .text:0x7d8d8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
