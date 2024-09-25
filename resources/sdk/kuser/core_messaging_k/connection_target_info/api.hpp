#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::connection_target_info
{
    // [GetSize@ConnectionTargetInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca280, 0x243e0 bytes
    // win32kbase.sys .text:0xdb2f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8c20, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_size;
    
    // [GetType@ConnectionTargetInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [OnDelete@ConnectionTargetInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbe8b0, 0x243e0 bytes
    // win32kbase.sys .text:0xbe5c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xab370, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) on_delete;
    
    // [s_Vtbl@ConnectionTargetInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x20c140, 0x243e0 bytes
    // win32kbase.sys .rdata:0x25cc70, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x20b1a8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) s_vtbl;
};
#include "magic/api.end.hpp"
