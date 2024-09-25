#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidsch_flip_queue_history_entry
{
    // [??1VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3b0c0, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x132bc, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) update_history;
    
    // [UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x10f6c, 0x1c52 bytes
    // dxgmms2.sys .text:0x10f6c, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) update_history_;
};
#include "magic/api.end.hpp"
