#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::gdi_handle_entry_directory
{
    // [AcquireEntryIndex@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x4ab90, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_entry_index;
    
    // [_GetEntryTableIndexContainingEntry@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x418f0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_entry_table_index_containing_entry;
    
    // [ReleaseEntryLock@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x5b5f0, 0x243e0 bytes
    // win32kbase.sys .text:0x24a30, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_entry_lock;
    
    // [GetEntryObject@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5d8a0, 0x243e0 bytes
    // win32kbase.sys .text:0x41930, 0x27ef0 bytes
    // win32kbase.sys .text:0x26ce0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_entry_object;
    
    // [AcquireEntryLock@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4e1a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x5c010, 0x243e0 bytes
    // win32kbase.sys .text:0x44b74, 0x27ef0 bytes
    // win32kbase.sys .text:0x25450, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) acquire_entry_lock;
    
    // [Create@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7944c, 0x1eb80 bytes
    // win32kbase.sys .text:0x6b30, 0x243e0 bytes
    // win32kbase.sys .text:0x9ad08, 0x27ef0 bytes
    // win32kbase.sys .text:0x78ae4, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) create;
    
    // [Destroy@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb4bc, 0x1eb80 bytes
    // win32kbase.sys .text:0x8226c, 0x243e0 bytes
    // win32kbase.sys .text:0x967fc, 0x27ef0 bytes
    // win32kbase.sys .text:0xc647c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) destroy;
    
    // [GetEntry@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4e110, 0x1eb80 bytes
    // win32kbase.sys .text:0x5d950, 0x243e0 bytes
    // win32kbase.sys .text:0x44a10, 0x27ef0 bytes
    // win32kbase.sys .text:0x26d90, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) get_entry;
    
    // [ReleaseLockAndEntry@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4e2a4, 0x1eb80 bytes
    // win32kbase.sys .text:0x5194c, 0x243e0 bytes
    // win32kbase.sys .text:0xe95dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bde0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) release_lock_and_entry;
    
    // [_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4e0b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x5de90, 0x243e0 bytes
    // win32kbase.sys .text:0x41470, 0x27ef0 bytes
    // win32kbase.sys .text:0x272d0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) retrieve_table_and_table_entry_index;
};
#include "magic/api.end.hpp"
