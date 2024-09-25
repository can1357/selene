#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::core_msg_object
{
    // [Open@CoreMsgObject@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfc384, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) open;
    
    // [Create@CoreMsgObject@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8fbb0, 0x243e0 bytes
    // win32kbase.sys .text:0xbd7a8, 0x27ef0 bytes
    // win32kbase.sys .text:0xaaf70, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [ReferenceByHandle@CoreMsgObject@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8c64c, 0x243e0 bytes
    // win32kbase.sys .text:0x23cd4, 0x27ef0 bytes
    // win32kbase.sys .text:0x69d1c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) reference_by_handle;
};
#include "magic/api.end.hpp"
