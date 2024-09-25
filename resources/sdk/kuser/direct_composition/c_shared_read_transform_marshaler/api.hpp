#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_transform_marshaler
{
    // [Create@CSharedReadTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x701cc, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9dd4, 0x243e0 bytes
    // win32kbase.sys .text:0xb9cb8, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f5e4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [InitializeFromSharedResource@CSharedReadTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fe00, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1540, 0x243e0 bytes
    // win32kbase.sys .text:0xc3750, 0x27ef0 bytes
    // win32kbase.sys .text:0xa79d0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [IsOfType@CSharedReadTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x70260, 0x1eb80 bytes
    // win32kbase.sys .text:0xb7c30, 0x243e0 bytes
    // win32kbase.sys .text:0xcde00, 0x27ef0 bytes
    // win32kbase.sys .text:0xb1c30, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
