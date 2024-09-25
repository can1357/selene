#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::protocol_block
{
    // [NotifyBindComplete@_NDIS_PROTOCOL_BLOCK]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa9360, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1052a0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1067a0, 0x1e858 bytes
    // ndis.sys PAGE:0x1057c0, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) notify_bind_complete;
};
#include "magic/api.end.hpp"
