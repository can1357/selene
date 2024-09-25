#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_surface_marshaler
{
    // [Create@CSharedReadSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x252fb8, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [InitializeFromSharedResource@CSharedReadSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xc3750, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [IsOfType@CSharedReadSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x253350, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
