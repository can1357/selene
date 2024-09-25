#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::cd_comp_mapped_shared_section_marshaler
{
    // [CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb3710, 0x243e0 bytes
    // win32kbase.sys .text:0xab300, 0x27ef0 bytes
    // win32kbase.sys .text:0x40c30, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create_dwm_handle;
    
    // [InitializeSection@CDCompMappedSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb1b04, 0x243e0 bytes
    // win32kbase.sys .text:0xc3e90, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7f44, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize_section;
};
#include "magic/api.end.hpp"
