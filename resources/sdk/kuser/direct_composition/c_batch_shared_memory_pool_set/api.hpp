#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_batch_shared_memory_pool_set
{
    // [BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x690ac, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a138, 0x243e0 bytes
    // win32kbase.sys .text:0xa2340, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3e4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) begin_dynamic_allocation;
    
    // [FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6926c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7c9e8, 0x243e0 bytes
    // win32kbase.sys .text:0xa2a44, 0x27ef0 bytes
    // win32kbase.sys .text:0x812b8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) free_all_pools;
    
    // [ReservePools@CBatchSharedMemoryPoolSet@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x691f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x7aa48, 0x243e0 bytes
    // win32kbase.sys .text:0xa24b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x81be0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) reserve_pools;
    
    // [SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x691a8, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ada0, 0x243e0 bytes
    // win32kbase.sys .text:0xa2894, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e914, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_retrieving_process;
    
    // [StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x692dc, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a0c8, 0x243e0 bytes
    // win32kbase.sys .text:0xa2294, 0x27ef0 bytes
    // win32kbase.sys .text:0xa374, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) static_allocate;
};
#include "magic/api.end.hpp"
