#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::server_port_info
{
    // [GetSize@ServerPortInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca270, 0x243e0 bytes
    // win32kbase.sys .text:0xdb2e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8c10, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_size;
    
    // [GetType@ServerPortInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [OnDelete@ServerPortInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc2f90, 0x243e0 bytes
    // win32kbase.sys .text:0xbc520, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa450, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) on_delete;
    
    // [s_Vtbl@ServerPortInfo@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x20d938, 0x243e0 bytes
    // win32kbase.sys .rdata:0x25cc58, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x20b190, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) s_vtbl;
};
#include "magic/api.end.hpp"
