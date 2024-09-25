#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::qdc_cache
{
    // [FreeAllocationsForEntry@QDC_CACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x8bf10, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) free_allocations_for_entry;
    
    // [GetCahcedBufferSizes@QDC_CACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x8c29c, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) get_cahced_buffer_sizes;
    
    // [CompareEntry@QDC_CACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x179bc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28fdfc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x28fe9c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) compare_entry;
    
    // [??0QDC_CACHE@@QEAA@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf3140, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a8a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b754, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [GetCachedBufferSizes@QDC_CACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x127a08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ad118, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe1ba8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_cached_buffer_sizes;
    
    // [InvalidateCache@QDC_CACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xde0bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1670fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f17c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) invalidate_cache;
    
    // [AddToCache@QDC_CACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8bf70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x127194, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x173368, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe1338, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) add_to_cache;
    
    // [??1QDC_CACHE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x179b78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28fda4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f0b58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28fe44, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) destroy_instance;
    
    // [FindCacheEntry@QDC_CACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8bf48, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x127304, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x173514, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe14a8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) find_cache_entry;
    
    // [GetCachedData@QDC_CACHE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8c134, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x127bb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a2ce8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe1d58, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_cached_data;
};
#include "magic/api.end.hpp"
