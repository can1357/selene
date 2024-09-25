#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::opm::c_monitor_pdo
{
    // [Destroy@CMonitorPDO@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14e140, 0x243e0 bytes
    // win32kbase.sys .text:0x181070, 0x27ef0 bytes
    // win32kbase.sys .text:0x14b9a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) destroy;
    
    // [DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcced0, 0x243e0 bytes
    // win32kbase.sys .text:0xde3c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb870, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) does_current_process_own_protected_output;
    
    // [DoesProcessOwnProtectedOutput@CMonitorPDO@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14e230, 0x243e0 bytes
    // win32kbase.sys .text:0x181160, 0x27ef0 bytes
    // win32kbase.sys .text:0x14ba90, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) does_process_own_protected_output;
    
    // [IsDestroyed@CMonitorPDO@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x154040, 0x1596d bytes
    // win32kfull.sys .text:0x14aa70, 0x1659e bytes
    // win32kfull.sys .text:0x154f80, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) is_destroyed;
    
    // [MonitorInterfaceCallback@CMonitorPDO@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14e240, 0x243e0 bytes
    // win32kbase.sys .text:0x181170, 0x27ef0 bytes
    // win32kbase.sys .text:0x14baa0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) monitor_interface_callback;
    
    // [MonitorInterfaceCallbackInternal@CMonitorPDO@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14e260, 0x243e0 bytes
    // win32kbase.sys .text:0x181190, 0x27ef0 bytes
    // win32kbase.sys .text:0x14bac0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) monitor_interface_callback_internal;
    
    // [MonitorPDORemovalCallback@CMonitorPDO@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14e320, 0x243e0 bytes
    // win32kbase.sys .text:0x181250, 0x27ef0 bytes
    // win32kbase.sys .text:0x14bb80, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) monitor_pdo_removal_callback;
};
#include "magic/api.end.hpp"
