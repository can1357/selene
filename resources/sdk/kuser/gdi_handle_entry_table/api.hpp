#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::gdi_handle_entry_table
{
    // [_IsEntryInUse@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x4e2f0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) is_entry_in_use;
    
    // [SetEntryObject@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x4e374, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) set_entry_object;
    
    // [ReleaseLockAndEntry@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kbase.sys .text:0x4e4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xe9630, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) release_lock_and_entry;
    
    // [ReleaseEntryLock@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5b690, 0x243e0 bytes
    // win32kbase.sys .text:0x44c10, 0x27ef0 bytes
    // win32kbase.sys .text:0x24ad0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_entry_lock;
    
    // [AcquireEntryIndex@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4e308, 0x1eb80 bytes
    // win32kbase.sys .text:0x9dfbc, 0x243e0 bytes
    // win32kbase.sys .text:0x954c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bed4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) acquire_entry_index;
    
    // [AcquireEntryLock@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4e3d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x5c140, 0x243e0 bytes
    // win32kbase.sys .text:0x44a90, 0x27ef0 bytes
    // win32kbase.sys .text:0x25580, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) acquire_entry_lock;
    
    // [_Create@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x794e4, 0x1eb80 bytes
    // win32kbase.sys .text:0x6bc4, 0x243e0 bytes
    // win32kbase.sys .text:0x9ada8, 0x27ef0 bytes
    // win32kbase.sys .text:0x78b78, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) create;
    
    // [GetEntryObject@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4e3a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x5d920, 0x243e0 bytes
    // win32kbase.sys .text:0x419b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x26d60, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) get_entry_object;
};
#include "magic/api.end.hpp"
