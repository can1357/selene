#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidsch_flip_queue_iterator
{
    // [GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x29f74, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ad84, 0x20ba bytes
    // dxgmms2.sys .text:0x29ef4, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) get_flip_queue;
    
    // [GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x29fa0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1b32c, 0x20ba bytes
    // dxgmms2.sys .text:0x29f20, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) get_flip_queue_ref;
};
#include "magic/api.end.hpp"
