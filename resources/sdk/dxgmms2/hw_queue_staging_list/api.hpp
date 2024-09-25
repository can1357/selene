#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::hw_queue_staging_list
{
    // [??1HwQueueStagingList@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xb660, 0x1c52 bytes
    // dxgmms2.sys .text:0xb5b0, 0x20ba bytes
    // dxgmms2.sys .text:0xb660, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [ProcessHwQueue@HwQueueStagingList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x35b0c, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dfd6, 0x20ba bytes
    // dxgmms2.sys .text:0x35a8c, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) process_hw_queue;
    
    // [ProcessHwQueues@HwQueueStagingList]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0xb6b0, 0x1c52 bytes
    // dxgmms2.sys .text:0xb600, 0x20ba bytes
    // dxgmms2.sys .text:0xb6b0, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) process_hw_queues;
};
#include "magic/api.end.hpp"
