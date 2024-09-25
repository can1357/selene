#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::i_blt_queue_v_sync_source
{
    // [GetThreadPriority@IBltQueueVSyncSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a8a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20350, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af20, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_thread_priority;
    
    // [PrepareNextVSync@IBltQueueVSyncSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) prepare_next_v_sync;
    
    // [ResetTdrTimer@IBltQueueVSyncSource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) reset_tdr_timer;
};
#include "magic/api.end.hpp"
