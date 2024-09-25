#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::execution_context_library
{
    // [Initialize@ExecutionContextLibrary]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133a84, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
