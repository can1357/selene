#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::bind_protocol_driver
{
    // [??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x120b44, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa3e58, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1061dc, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10f1b0, 0x1e858 bytes
    // ndis.sys PAGE:0x1066fc, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) set_running_driver;
};
#include "magic/api.end.hpp"
