#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_content_rects_sync
{
    // [BroadcastUpdateToAllContainers@IVContentRectsSync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x209f4c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) broadcast_update_to_all_containers;
    
    // [ivOnChildPartitionConnected@IVContentRectsSync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x20a004, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) iv_on_child_partition_connected;
};
#include "magic/api.end.hpp"
