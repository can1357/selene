#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::gdi_handle_entry_table::entry_data_lookup_table
{
    // [Create@EntryDataLookupTable@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79578, 0x1eb80 bytes
    // win32kbase.sys .text:0x6c5c, 0x243e0 bytes
    // win32kbase.sys .text:0x9ae50, 0x27ef0 bytes
    // win32kbase.sys .text:0x78c10, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [Initialize@EntryDataLookupTable@GdiHandleEntryTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4e510, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e038, 0x243e0 bytes
    // win32kbase.sys .text:0x95bdc, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e3a0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
