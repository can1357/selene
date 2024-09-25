#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_primitive_group_layer_clip_marshaler
{
    // [GetType@CPrimitiveGroupLayerClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6ccc0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CPrimitiveGroupLayerClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6ccb0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
