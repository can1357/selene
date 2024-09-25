#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_visual_reference_marshaler
{
    // [Create@CSharedReadVisualReferenceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200c10, 0x243e0 bytes
    // win32kbase.sys .text:0x250248, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe9e0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [InitializeFromSharedResource@CSharedReadVisualReferenceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb1540, 0x243e0 bytes
    // win32kbase.sys .text:0xc3750, 0x27ef0 bytes
    // win32kbase.sys .text:0xa79d0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [IsOfType@CSharedReadVisualReferenceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200da0, 0x243e0 bytes
    // win32kbase.sys .text:0x2505b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1feb70, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
