#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::miniport_hook_driver
{
    // [??1MINIPORT_HOOK_DRIVER@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x125c80, 0x1d2c0 bytes
    // ndis.sys PAGE:0x130e74, 0x1e858 bytes
    // ndis.sys PAGE:0x126180, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Register@MINIPORT_HOOK_DRIVER]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xe4d88, 0x1c8a8 bytes
    // ndis.sys PAGE:0x125dc4, 0x1d2c0 bytes
    // ndis.sys PAGE:0x130fb4, 0x1e858 bytes
    // ndis.sys PAGE:0x1262c4, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) _register;
    
    // [??0MINIPORT_HOOK_DRIVER@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xaec1c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x10b214, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1149ac, 0x1e858 bytes
    // ndis.sys PAGE:0x10b734, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [Deregister@MINIPORT_HOOK_DRIVER]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xe4cec, 0x1c8a8 bytes
    // ndis.sys PAGE:0x125cf8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x130eec, 0x1e858 bytes
    // ndis.sys PAGE:0x1261f8, 0x1d2c0 bytes
    //
    _m3(sdk::unknown_ptr) deregister;
    
    // [DeregisterAsync@MINIPORT_HOOK_DRIVER]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xe4d70, 0x1c8a8 bytes
    // ndis.sys PAGE:0x125da0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x130f90, 0x1e858 bytes
    // ndis.sys PAGE:0x1262a0, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) deregister_async;
    
    // [FillDefaultHandlers@MINIPORT_HOOK_DRIVER]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xaec90, 0x1c8a8 bytes
    // ndis.sys PAGE:0x108324, 0x1d2c0 bytes
    // ndis.sys PAGE:0x11249c, 0x1e858 bytes
    // ndis.sys PAGE:0x108844, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) fill_default_handlers;
    
    // [WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xe4e54, 0x1c8a8 bytes
    // ndis.sys PAGE:0x125ea8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x131098, 0x1e858 bytes
    // ndis.sys PAGE:0x1263a8, 0x1d2c0 bytes
    //
    _m6(sdk::unknown_ptr) wait_for_all_hooked_drivers_to_deregister;
};
#include "magic/api.end.hpp"
