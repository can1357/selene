#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_space::iter
{
    // [ModifiableRegion@Iter@CInputSpace]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4dc, 0x243e0 bytes
    // win32kbase.sys .text:0x64d5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x58d00, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) modifiable_region;
};
#include "magic/api.end.hpp"
