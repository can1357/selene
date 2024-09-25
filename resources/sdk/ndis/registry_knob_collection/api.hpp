#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::registry_knob_collection
{
    // [ClearKnobInStore@RegistryKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133490, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) clear_knob_in_store;
    
    // [Open@RegistryKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x10e390, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) open;
    
    // [ReadKnobFromKey@RegistryKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x112a00, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) read_knob_from_key;
    
    // [SetKnobInStore@RegistryKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133500, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) set_knob_in_store;
};
#include "magic/api.end.hpp"
