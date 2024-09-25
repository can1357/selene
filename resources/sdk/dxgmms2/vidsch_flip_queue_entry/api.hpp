#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidsch_flip_queue_entry
{
    // [??1_VIDSCH_FLIP_QUEUE_ENTRY@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x1ab30, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [FillVmState@_VIDSCH_FLIP_QUEUE_ENTRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x33b5c, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) fill_vm_state;
    
    // [InitializeFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x1aa20, 0x20ba bytes
    //
    _m2(sdk::unknown_ptr) initialize_flip_queue_entry;
    
    // [ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x1b88c, 0x20ba bytes
    //
    _m3(sdk::unknown_ptr) zero_flip_queue_entry;
    
    // [ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x2cf60, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cee0, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) zero_flip_queue_entry_;
    
    // [??1VIDSCH_FLIP_QUEUE_ENTRY@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x3520, 0x158b bytes
    // dxgmms2.sys .text:0x29e20, 0x1c52 bytes
    // dxgmms2.sys .text:0x29da0, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance_;
    
    // [InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x3540, 0x158b bytes
    // dxgmms2.sys .text:0x2a02c, 0x1c52 bytes
    // dxgmms2.sys .text:0x29fac, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) initialize_flip_queue_entry_;
};
#include "magic/api.end.hpp"
