#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_leak_tracking_allocator
{
    // [AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xa75e8, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) allocate_quota_z_init;
    
    // [AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dcf6c, 0x1596d bytes
    // win32kbase.sys .text:0xb1d04, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dcf7c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) allocate_from_paged_lookaside_list;
    
    // [AllocatePriority@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dd080, 0x1596d bytes
    // win32kbase.sys .text:0x190ecc, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd090, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) allocate_priority;
    
    // [AllocateQuota@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dd0d0, 0x1596d bytes
    // win32kbase.sys .text:0x2e838, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd0e0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) allocate_quota;
    
    // [Destroy@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x119bbc, 0x13864 bytes
    // win32kfull.sys .text:0x126334, 0x1596d bytes
    // win32kfull.sys .text:0x127274, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) destroy;
    
    // [FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11f528, 0x1596d bytes
    // win32kbase.sys .text:0xa6374, 0x27ef0 bytes
    // win32kfull.sys .text:0x120428, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) free_paged_lookaside_list;
    
    // [FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dd36c, 0x1596d bytes
    // win32kbase.sys .text:0xac0e8, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd37c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) free_to_paged_lookaside_list;
    
    // [Allocate@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119d0c, 0x13864 bytes
    // win32kfull.sys .text:0x11b224, 0x1596d bytes
    // win32kbase.sys .text:0x2e7c8, 0x27ef0 bytes
    // win32kfull.sys .text:0x11c154, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) allocate;
    
    // [AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119d6c, 0x13864 bytes
    // win32kfull.sys .text:0x11b174, 0x1596d bytes
    // win32kbase.sys .text:0xd05d4, 0x27ef0 bytes
    // win32kfull.sys .text:0x11c0a4, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) allocate_paged_lookaside_list;
    
    // [CleanupCallback@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6760, 0x13864 bytes
    // win32kfull.sys .text:0x2dd120, 0x1596d bytes
    // win32kbase.sys .text:0x190f40, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd130, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) cleanup_callback;
    
    // [Dump@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d67ac, 0x13864 bytes
    // win32kfull.sys .text:0x2dd18c, 0x1596d bytes
    // win32kbase.sys .text:0x191040, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd19c, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) dump;
    
    // [Empty@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119cd0, 0x13864 bytes
    // win32kfull.sys .text:0x12639c, 0x1596d bytes
    // win32kbase.sys .text:0x89d28, 0x27ef0 bytes
    // win32kfull.sys .text:0x1272dc, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) empty;
    
    // [Free@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119c6c, 0x13864 bytes
    // win32kfull.sys .text:0x11f56c, 0x1596d bytes
    // win32kbase.sys .text:0xa63b8, 0x27ef0 bytes
    // win32kfull.sys .text:0x12046c, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) free;
    
    // [FreeAll@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6910, 0x13864 bytes
    // win32kfull.sys .text:0x2dd320, 0x1596d bytes
    // win32kbase.sys .text:0x1911d4, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd330, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) free_all;
    
    // [InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6954, 0x13864 bytes
    // win32kfull.sys .text:0x2dd420, 0x1596d bytes
    // win32kbase.sys .text:0x191220, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd430, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) initialize_back_trace_store;
    
    // [InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d69b4, 0x13864 bytes
    // win32kfull.sys .text:0x2dd490, 0x1596d bytes
    // win32kbase.sys .text:0x191270, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd4a0, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) initialize_pointer_hash_table;
    
    // [InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d69e0, 0x13864 bytes
    // win32kfull.sys .text:0x2dd4c4, 0x1596d bytes
    // win32kbase.sys .text:0x1912a4, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd4d4, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) initialize_sorted_vector;
    
    // [IsTagTracked@CLeakTrackingAllocator@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119cc0, 0x13864 bytes
    // win32kfull.sys .text:0x11b294, 0x1596d bytes
    // win32kbase.sys .text:0x2e9dc, 0x27ef0 bytes
    // win32kfull.sys .text:0x11c1c4, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) is_tag_tracked;
};
#include "magic/api.end.hpp"
