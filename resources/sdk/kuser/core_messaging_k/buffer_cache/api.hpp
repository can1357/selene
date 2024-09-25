#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::buffer_cache
{
    // [AllocUninitialized@BufferCache@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc1dc, 0x1eb80 bytes
    // win32kbase.sys .text:0x8c560, 0x243e0 bytes
    // win32kbase.sys .text:0x23b74, 0x27ef0 bytes
    // win32kbase.sys .text:0x69c30, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) alloc_uninitialized;
    
    // [Free@BufferCache@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc2a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x8c4bc, 0x243e0 bytes
    // win32kbase.sys .text:0x23c64, 0x27ef0 bytes
    // win32kbase.sys .text:0x69b8c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) free;
    
    // [Remove@BufferCache@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc340, 0x1eb80 bytes
    // win32kbase.sys .text:0x8c628, 0x243e0 bytes
    // win32kbase.sys .text:0x23c40, 0x27ef0 bytes
    // win32kbase.sys .text:0x69cf8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) remove;
    
    // [s_FreeList@BufferCache@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9f8, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ae38, 0x243e0 bytes
    // win32kbase.sys .data:0x2afc48, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e68, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) s_free_list;
};
#include "magic/api.end.hpp"
