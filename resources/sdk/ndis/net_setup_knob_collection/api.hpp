#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::net_setup_knob_collection
{
    // [ClearKnobInStore@NetSetupKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x102d90, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) clear_knob_in_store;
    
    // [Open@NetSetupKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133630, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) open;
    
    // [ReadKnobFromKey@NetSetupKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133760, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) read_knob_from_key;
    
    // [SetKnobInStore@NetSetupKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x102d80, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) set_knob_in_store;
};
#include "magic/api.end.hpp"
