#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::runtime
{
    // [Alloc@Runtime@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9744, 0x243e0 bytes
    // win32kbase.sys .text:0xbe218, 0x27ef0 bytes
    // win32kbase.sys .text:0xab6c4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) alloc;
    
    // [AllocUninitialized@Runtime@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb978c, 0x243e0 bytes
    // win32kbase.sys .text:0xbe2f8, 0x27ef0 bytes
    // win32kbase.sys .text:0xab70c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) alloc_uninitialized;
    
    // [CopyString@Runtime@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb95bc, 0x243e0 bytes
    // win32kbase.sys .text:0xbe254, 0x27ef0 bytes
    // win32kbase.sys .text:0xab53c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) copy_string;
    
    // [BugCheck@Runtime@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc1b8, 0x1eb80 bytes
    // win32kbase.sys .text:0x207984, 0x243e0 bytes
    // win32kbase.sys .text:0x2584c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x205784, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) bug_check;
};
#include "magic/api.end.hpp"
