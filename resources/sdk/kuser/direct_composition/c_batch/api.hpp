#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_batch
{
    // [SetSynchronizationObject@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1df1b8, 0x243e0 bytes
    // win32kbase.sys .text:0x9fd80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dcf78, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) set_synchronization_object;
    
    // [AddSystemResourceRef@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x41044, 0x1eb80 bytes
    // win32kbase.sys .text:0x75238, 0x243e0 bytes
    // win32kbase.sys .text:0x2b160, 0x27ef0 bytes
    // win32kbase.sys .text:0xd348, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) add_system_resource_ref;
    
    // [AllocateNewFragment@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6cc48, 0x1eb80 bytes
    // win32kbase.sys .text:0x79c64, 0x243e0 bytes
    // win32kbase.sys .text:0xaa250, 0x27ef0 bytes
    // win32kbase.sys .text:0xa300, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) allocate_new_fragment;
    
    // [Clear@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x40f18, 0x1eb80 bytes
    // win32kbase.sys .text:0x74a84, 0x243e0 bytes
    // win32kbase.sys .text:0x2a8d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcb94, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) clear;
    
    // [EnsureBatchBuffer@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b1b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x78608, 0x243e0 bytes
    // win32kbase.sys .text:0x29688, 0x27ef0 bytes
    // win32kbase.sys .text:0x9ef8, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) ensure_batch_buffer;
    
    // [GetPayloadWritePointer@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x40ee8, 0x1eb80 bytes
    // win32kbase.sys .text:0x79cd8, 0x243e0 bytes
    // win32kbase.sys .text:0xa22d4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa2c4, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_payload_write_pointer;
    
    // [ReturnToApplication@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x410d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7f4bc, 0x243e0 bytes
    // win32kbase.sys .text:0x9e818, 0x27ef0 bytes
    // win32kbase.sys .text:0x7fb34, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) return_to_application;
    
    // [ShouldDefer@CBatch@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4110c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d250, 0x243e0 bytes
    // win32kbase.sys .text:0xa16cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x80950, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) should_defer;
};
#include "magic/api.end.hpp"
