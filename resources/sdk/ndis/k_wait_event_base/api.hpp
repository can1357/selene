#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_wait_event_base
{
    // [Wait@KWaitEventBase]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0x9d26c, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) wait;
};
#include "magic/api.end.hpp"
