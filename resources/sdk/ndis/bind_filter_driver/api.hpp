#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::bind_filter_driver
{
    // [??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1206c8, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [SetRunningDriver@NDIS_BIND_FILTER_DRIVER]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa253c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x106638, 0x1d2c0 bytes
    // ndis.sys PAGE:0x111140, 0x1e858 bytes
    // ndis.sys PAGE:0x106b58, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) set_running_driver;
};
#include "magic/api.end.hpp"
