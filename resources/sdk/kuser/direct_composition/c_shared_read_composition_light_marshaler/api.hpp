#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_composition_light_marshaler
{
    // [Create@CSharedReadCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa9c0c, 0x243e0 bytes
    // win32kbase.sys .text:0xb9a8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f41c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [InitializeFromSharedResource@CSharedReadCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb1540, 0x243e0 bytes
    // win32kbase.sys .text:0xc3750, 0x27ef0 bytes
    // win32kbase.sys .text:0xa79d0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [IsCompositionLight@CSharedReadCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa9f98, 0x243e0 bytes
    // win32kbase.sys .text:0xb9ed8, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f7a8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_composition_light;
    
    // [IsOfType@CSharedReadCompositionLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa9f80, 0x243e0 bytes
    // win32kbase.sys .text:0xb9ec0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f790, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
