#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::knob_collection
{
    // [CommitSingleKnob@KnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x112d58, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) commit_single_knob;
    
    // [CommitUpdatedKnobValues@KnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x11310c, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) commit_updated_knob_values;
    
    // [Create@KnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1131b4, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) create;
    
    // [FindKnobByName@KnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1333e4, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) find_knob_by_name;
    
    // [PrepareUpdatedKnobValues@KnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x112fa0, 0x1e858 bytes
    //
    _m4(sdk::unknown_ptr) prepare_updated_knob_values;
    
    // [ReadKnobFromStore@KnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x11304c, 0x1e858 bytes
    //
    _m5(sdk::unknown_ptr) read_knob_from_store;
    
    // [ValidateKnobValue@KnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x112ba0, 0x1e858 bytes
    //
    _m6(sdk::unknown_ptr) validate_knob_value;
};
#include "magic/api.end.hpp"
