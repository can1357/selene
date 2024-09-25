#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::hostvmmonitormapping
{
    // [AddMapping@HOSTVMMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x58f28, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_mapping;
    
    // [RemoveMapping@HOSTVMMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x59454, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) remove_mapping;
    
    // [SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2374c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) send_host_monitor_power_msg;
    
    // [TriggerRemoteVsync@HOSTVMMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2f404, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) trigger_remote_vsync;
};
#include "magic/api.end.hpp"
