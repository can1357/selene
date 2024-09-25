#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::resource_information
{
    // [resourcePropertyInformation@ResourceInformation@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2a93c0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) resource_property_information;
    
    // [resourceTypeInformation@ResourceInformation@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2a8a10, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) resource_type_information;
};
#include "magic/api.end.hpp"
