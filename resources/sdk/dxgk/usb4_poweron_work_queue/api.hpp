#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::usb4_poweron_work_queue
{
    // [_HandlePowerOn@USB4_POWERON_WORK_QUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b7000, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) handle_power_on;
    
    // [_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b70a0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) handle_power_on_internal;
    
    // [QueueWorkItem@USB4_POWERON_WORK_QUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x157b68, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) queue_work_item;
};
#include "magic/api.end.hpp"
