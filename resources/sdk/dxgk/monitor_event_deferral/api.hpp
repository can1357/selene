#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitor_event_deferral
{
    // [DeferMonitorEvent@MonitorEventDeferral]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x215e50, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) defer_monitor_event;
    
    // [??1MonitorEventDeferral@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20083c, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [FlushEventsWithContext@MonitorEventDeferral]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x200868, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) flush_events_with_context;
};
#include "magic/api.end.hpp"
