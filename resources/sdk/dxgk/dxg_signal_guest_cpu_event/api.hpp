#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_signal_guest_cpu_event
{
    // [AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x4b930, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) acquire_reference;
    
    // [ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x4ba00, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) release_reference;
};
#include "magic/api.end.hpp"
