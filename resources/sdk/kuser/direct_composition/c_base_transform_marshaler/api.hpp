#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_base_transform_marshaler
{
    // [IsOfType@CBaseTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6bd60, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
