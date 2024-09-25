#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_monitor_pdo
{
    // [??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x86440, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Destroy@CMonitorPDO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x86370, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) destroy;
    
    // [??1CMonitorPDO@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xc3c20, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [DoesCurrentProcessOwnProtectedOutput@CMonitorPDO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x86420, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) does_current_process_own_protected_output;
    
    // [DoesProcessOwnProtectedOutput@CMonitorPDO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x86310, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) does_process_own_protected_output;
    
    // [IsDestroyed@CMonitorPDO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x149330, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) is_destroyed;
    
    // [MonitorInterfaceCallback@CMonitorPDO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xc3d10, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) monitor_interface_callback;
    
    // [MonitorInterfaceCallbackInternal@CMonitorPDO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xc3d20, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) monitor_interface_callback_internal;
    
    // [MonitorPDORemovalCallback@CMonitorPDO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xc3dc0, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) monitor_pdo_removal_callback;
};
#include "magic/api.end.hpp"
