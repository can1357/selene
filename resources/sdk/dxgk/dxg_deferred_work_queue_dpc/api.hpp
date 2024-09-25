#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_deferred_work_queue_dpc
{
    // [DeferredWorkQueueCallback@DXG_DEFERRED_WORK_QUEUE_DPC]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x57860, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) deferred_work_queue_callback;
    
    // [GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5ccc8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) get_num_work_items;
    
    // [QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5cf34, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) queue_work_item;
};
#include "magic/api.end.hpp"
