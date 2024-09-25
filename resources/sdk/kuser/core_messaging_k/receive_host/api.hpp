#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::receive_host
{
    // [AddRef@ReceiveHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_ref;
    
    // [NotifyInvalid@ReceiveHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc730, 0x1eb80 bytes
    // win32kbase.sys .text:0x207d30, 0x243e0 bytes
    // win32kbase.sys .text:0x258870, 0x27ef0 bytes
    // win32kbase.sys .text:0x205b30, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) notify_invalid;
    
    // [NotifyProtocolViolation@ReceiveHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc750, 0x1eb80 bytes
    // win32kbase.sys .text:0x207d50, 0x243e0 bytes
    // win32kbase.sys .text:0x258890, 0x27ef0 bytes
    // win32kbase.sys .text:0x205b50, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) notify_protocol_violation;
    
    // [QueryInterface@ReceiveHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f9d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xca1c0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb250, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8b60, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) query_interface;
    
    // [Release@ReceiveHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release;
    
    // [s_Vtbl@ReceiveHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x105820, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x213470, 0x243e0 bytes
    // win32kbase.sys .rdata:0x263430, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x2114b8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) s_vtbl;
};
#include "magic/api.end.hpp"
