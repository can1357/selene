#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::watchdog_state
{
    // [??1NdisWatchdogState@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x104e18, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [CancelTimer@NdisWatchdogState]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x1b5d8, 0x1d2c0 bytes
    // ndis.sys .text:0x18980, 0x1e858 bytes
    // ndis.sys .text:0x1b5f8, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) cancel_timer;
    
    // [??0NdisWatchdogState@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xfddb8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x106c94, 0x1e858 bytes
    // ndis.sys PAGE:0xfe2d8, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [Disarm@NdisWatchdogState]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xfdf2c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x104ea4, 0x1e858 bytes
    // ndis.sys PAGE:0xfe44c, 0x1d2c0 bytes
    //
    _m3(sdk::unknown_ptr) disarm;
    
    // [ReportTimeout@NdisWatchdogState]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x121640, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12c6a0, 0x1e858 bytes
    // ndis.sys PAGE:0x121b40, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) report_timeout;
    
    // [WaitSynchronously@NdisWatchdogState]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x1216dc, 0x1d2c0 bytes
    // ndis.sys PAGE:0x103830, 0x1e858 bytes
    // ndis.sys PAGE:0x121bdc, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) wait_synchronously;
};
#include "magic/api.end.hpp"
