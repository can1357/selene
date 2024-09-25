#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::bind_link_base
{
    // [??0NDIS_BIND_LINK_BASE@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa4dac, 0x1c8a8 bytes
    // ndis.sys PAGE:0x102ba4, 0x1d2c0 bytes
    // ndis.sys PAGE:0x110c20, 0x1e858 bytes
    // ndis.sys PAGE:0x1030c4, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1NDIS_BIND_LINK_BASE@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa4e30, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1226d0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12d64c, 0x1e858 bytes
    // ndis.sys PAGE:0x122bd0, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [LinkToDriver@NDIS_BIND_LINK_BASE]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa4dd0, 0x1c8a8 bytes
    // ndis.sys PAGE:0x103094, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10ecc4, 0x1e858 bytes
    // ndis.sys PAGE:0x1035b4, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) link_to_driver;
};
#include "magic/api.end.hpp"
