#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::pd_bm_domain
{
    // [??1NDIS_PD_BM_DOMAIN@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1237b4, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Deref@NDIS_PD_BM_DOMAIN]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xde784, 0x1c8a8 bytes
    // ndis.sys PAGE:0x118fe4, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1239a0, 0x1e858 bytes
    // ndis.sys PAGE:0x1194e4, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) deref;
};
#include "magic/api.end.hpp"
