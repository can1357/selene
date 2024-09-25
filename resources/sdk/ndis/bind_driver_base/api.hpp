#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::bind_driver_base
{
    // [ForEachLink@NDIS_BIND_DRIVER_BASE]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa51ec, 0x1c8a8 bytes
    // ndis.sys PAGE:0x105198, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10f28c, 0x1e858 bytes
    // ndis.sys PAGE:0x1056b8, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) for_each_link;
    
    // [SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa52ac, 0x1c8a8 bytes
    // ndis.sys PAGE:0x105140, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10f234, 0x1e858 bytes
    // ndis.sys PAGE:0x105660, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) set_running_driver_is_ready;
};
#include "magic/api.end.hpp"
