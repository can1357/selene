#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umfd_allocation
{
    // [UpdateKernelmodeAllocation@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2de4ec, 0x1596d bytes
    // win32kfull.sys .text:0x2de2ac, 0x1659e bytes
    // win32kfull.sys .text:0x2de4fc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) update_kernelmode_allocation;
    
    // [_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d8d84, 0x13864 bytes
    // win32kfull.sys .text:0xdfa24, 0x1596d bytes
    // win32kfull.sys .text:0x6eeb4, 0x1659e bytes
    // win32kfull.sys .text:0xe06e4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) find_and_reference_existing_kernelmode_allocation;
    
    // [Initialize@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a3f8, 0x13864 bytes
    // win32kfull.sys .text:0x10a848, 0x1596d bytes
    // win32kfull.sys .text:0x688f4, 0x1659e bytes
    // win32kfull.sys .text:0x10b778, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [ObtainKernelmodeAllocation@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d8aac, 0x13864 bytes
    // win32kfull.sys .text:0xdf83c, 0x1596d bytes
    // win32kfull.sys .text:0x6ecc8, 0x1659e bytes
    // win32kfull.sys .text:0xe04fc, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) obtain_kernelmode_allocation;
    
    // [ReleaseKernelmodeAllocation@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d8c88, 0x13864 bytes
    // win32kfull.sys .text:0x6f170, 0x1596d bytes
    // win32kfull.sys .text:0xfa73c, 0x1659e bytes
    // win32kfull.sys .text:0x6fce0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) release_kernelmode_allocation;
    
    // [_RemoveAllocationFromLookup@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d8dc0, 0x13864 bytes
    // win32kfull.sys .text:0x116a40, 0x1596d bytes
    // win32kfull.sys .text:0xfa7d8, 0x1659e bytes
    // win32kfull.sys .text:0x117970, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) remove_allocation_from_lookup;
    
    // [s_allocationLookup@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x328b08, 0x13864 bytes
    // win32kfull.sys .data:0x33aa30, 0x1596d bytes
    // win32kfull.sys .data:0x338c60, 0x1659e bytes
    // win32kfull.sys .data:0x33aa68, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) s_allocation_lookup;
    
    // [s_allocationLookupLock@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x328b10, 0x13864 bytes
    // win32kfull.sys .data:0x33aa38, 0x1596d bytes
    // win32kfull.sys .data:0x338c68, 0x1659e bytes
    // win32kfull.sys .data:0x33aa70, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) s_allocation_lookup_lock;
    
    // [TryBufferHasSameContent@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d8d10, 0x13864 bytes
    // win32kfull.sys .text:0x11b0f0, 0x1596d bytes
    // win32kfull.sys .text:0x10b1a0, 0x1659e bytes
    // win32kfull.sys .text:0x11c020, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) try_buffer_has_same_content;
    
    // [Uninitialize@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1254fc, 0x13864 bytes
    // win32kfull.sys .text:0x1243cc, 0x1596d bytes
    // win32kfull.sys .text:0x113abc, 0x1659e bytes
    // win32kfull.sys .text:0x12530c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) uninitialize;
    
    // [_ValidateAllocationPair@UmfdAllocation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d8df0, 0x13864 bytes
    // win32kfull.sys .text:0xdf13c, 0x1596d bytes
    // win32kfull.sys .text:0x1068c8, 0x1659e bytes
    // win32kfull.sys .text:0xdfdfc, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) validate_allocation_pair;
};
#include "magic/api.end.hpp"
