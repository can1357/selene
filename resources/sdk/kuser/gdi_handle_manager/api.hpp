#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::gdi_handle_manager
{
    // [ReleaseLockAndEntry@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x37560, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) release_lock_and_entry;
    
    // [SetEntryObject@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x4d01c, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) set_entry_object;
    
    // [GetEntryObject@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x4d410, 0x1eb80 bytes
    // win32kbase.sys .text:0x5d810, 0x243e0 bytes
    // win32kbase.sys .text:0x26c50, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_entry_object;
    
    // [ReleaseEntryLock@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5b510, 0x243e0 bytes
    // win32kbase.sys .text:0x43090, 0x27ef0 bytes
    // win32kbase.sys .text:0x24950, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_entry_lock;
    
    // [AcquireEntryIndex@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d07c, 0x1eb80 bytes
    // win32kbase.sys .text:0x56d10, 0x243e0 bytes
    // win32kbase.sys .text:0x48130, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f650, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) acquire_entry_index;
    
    // [Create@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x75e8c, 0x1eb80 bytes
    // win32kbase.sys .text:0x6a9c, 0x243e0 bytes
    // win32kbase.sys .text:0x9ac68, 0x27ef0 bytes
    // win32kbase.sys .text:0x78a50, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) create;
    
    // [DecodeIndex@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d330, 0x1eb80 bytes
    // win32kbase.sys .text:0x5def0, 0x243e0 bytes
    // win32kbase.sys .text:0x41420, 0x27ef0 bytes
    // win32kbase.sys .text:0x27330, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) decode_index;
    
    // [Destroy@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb488, 0x1eb80 bytes
    // win32kbase.sys .text:0x82230, 0x243e0 bytes
    // win32kbase.sys .text:0x967bc, 0x27ef0 bytes
    // win32kbase.sys .text:0xc6440, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) destroy;
    
    // [GetEntryFromObject@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d170, 0x1eb80 bytes
    // win32kbase.sys .text:0x5c380, 0x243e0 bytes
    // win32kbase.sys .text:0x3d390, 0x27ef0 bytes
    // win32kbase.sys .text:0x257c0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) get_entry_from_object;
    
    // [GetNextEntryIndex@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d2d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x192d0, 0x243e0 bytes
    // win32kbase.sys .text:0x979d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x45280, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) get_next_entry_index;
    
    // [_IncrementOrDecrementUniqueness@GdiHandleManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d360, 0x1eb80 bytes
    // win32kbase.sys .text:0x61f8, 0x243e0 bytes
    // win32kbase.sys .text:0x5e3f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x85558, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) increment_or_decrement_uniqueness;
};
#include "magic/api.end.hpp"
