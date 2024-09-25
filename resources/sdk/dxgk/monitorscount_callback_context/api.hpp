#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitorscount_callback_context
{
    // [??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1468e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d3ab4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1497f8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbd3e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14a93c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d9830, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14daac, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) update_emergency_monitor_context;
};
#include "magic/api.end.hpp"
