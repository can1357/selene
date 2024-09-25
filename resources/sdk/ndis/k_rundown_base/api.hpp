#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_rundown_base
{
    // [TryAcquire@KRundownBase]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0xabcc0, 0x1d2c0 bytes
    // ndis.sys .text:0xad330, 0x1e858 bytes
    // ndis.sys .text:0xac7f0, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) try_acquire;
};
#include "magic/api.end.hpp"
