#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::ndis::initmode
{
    // [CheckAllDriversRunning@Initmode@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xab8f4, 0x1c8a8 bytes
    // ndis.sys PAGE:0x107a20, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10d140, 0x1e858 bytes
    // ndis.sys PAGE:0x107fc0, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) check_all_drivers_running;
    
    // [DisableIfNeeded@Initmode@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xabaa4, 0x1c8a8 bytes
    // ndis.sys PAGE:0x10798c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10d0ac, 0x1e858 bytes
    // ndis.sys PAGE:0x107f2c, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) disable_if_needed;
};
#include "magic/api.end.hpp"
