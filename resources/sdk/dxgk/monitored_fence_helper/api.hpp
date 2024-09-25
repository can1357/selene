#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitored_fence_helper
{
    // [CreateSynchObject@MonitoredFenceHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7170, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x345434, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7210, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) create_synch_object;
    
    // [DestroySynchObject@MonitoredFenceHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b727c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x345530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b731c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_synch_object;
    
    // [Update@MonitoredFenceHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7de4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x346690, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7e84, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) update;
};
#include "magic/api.end.hpp"
