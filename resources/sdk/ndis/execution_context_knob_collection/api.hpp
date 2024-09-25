#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::execution_context_knob_collection
{
    // [Open@ExecutionContextKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x10d6d0, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) open;
    
    // [ReadKnobFromKey@ExecutionContextKnobCollection]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1129d0, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) read_knob_from_key;
};
#include "magic/api.end.hpp"
