#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::knob_descriptor
{
    // [GetCurrentValue@KnobDescriptor]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0x317b4, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) get_current_value;
    
    // [SetCurrentValue@KnobDescriptor]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0x3178c, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) set_current_value;
};
#include "magic/api.end.hpp"
