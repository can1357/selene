#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_batch_shared_memory_pool
{
    // [Reset@CBatchSharedMemoryPool@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x41200, 0x1eb80 bytes
    // win32kbase.sys .text:0x74d5c, 0x243e0 bytes
    // win32kbase.sys .text:0xce6c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) reset;
    
    // [BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x411dc, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a1c8, 0x243e0 bytes
    // win32kbase.sys .text:0xa243c, 0x27ef0 bytes
    // win32kbase.sys .text:0xa474, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) begin_dynamic_allocation;
    
    // [Create@CBatchSharedMemoryPool@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79320, 0x1eb80 bytes
    // win32kbase.sys .text:0x7aac8, 0x243e0 bytes
    // win32kbase.sys .text:0xa2534, 0x27ef0 bytes
    // win32kbase.sys .text:0x81c60, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) create;
    
    // [GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x41248, 0x1eb80 bytes
    // win32kbase.sys .text:0x9b398, 0x243e0 bytes
    // win32kbase.sys .text:0xa0704, 0x27ef0 bytes
    // win32kbase.sys .text:0x84198, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_user_mode_view_at_offset;
    
    // [UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x411ac, 0x1eb80 bytes
    // win32kbase.sys .text:0x74d84, 0x243e0 bytes
    // win32kbase.sys .text:0x2aa4c, 0x27ef0 bytes
    // win32kbase.sys .text:0xce94, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) unmap_user_mode_view;
    
    // [UseSpace@CBatchSharedMemoryPool@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x41220, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a108, 0x243e0 bytes
    // win32kbase.sys .text:0xa2310, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3b4, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) use_space;
};
#include "magic/api.end.hpp"
