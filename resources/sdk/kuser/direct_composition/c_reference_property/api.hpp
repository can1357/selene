#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_reference_property
{
    // [FreeValue@CReferenceProperty@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff500, 0x243e0 bytes
    // win32kbase.sys .text:0x237db0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fd2d0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) free_value;
};
#include "magic/api.end.hpp"
