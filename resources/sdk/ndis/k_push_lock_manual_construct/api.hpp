#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_push_lock_manual_construct
{
    // [Initialize@KPushLockManualConstruct]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x9d264, 0x1c8a8 bytes
    // ndis.sys PAGE:0xf8488, 0x1d2c0 bytes
    // ndis.sys PAGE:0x100064, 0x1e858 bytes
    // ndis.sys PAGE:0xf8988, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
