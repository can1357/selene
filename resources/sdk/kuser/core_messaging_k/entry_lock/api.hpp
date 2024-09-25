#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::entry_lock
{
    // [Acquire@EntryLock@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8c6e4, 0x243e0 bytes
    // win32kbase.sys .text:0x23d68, 0x27ef0 bytes
    // win32kbase.sys .text:0x69db4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) acquire;
    
    // [Initialize@EntryLock@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9a40, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3c90, 0x243e0 bytes
    // win32kbase.sys .text:0xbdf84, 0x27ef0 bytes
    // win32kbase.sys .text:0xab8d4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [s_Initialized@EntryLock@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9e0, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ae10, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc18, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e40, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) s_initialized;
};
#include "magic/api.end.hpp"
