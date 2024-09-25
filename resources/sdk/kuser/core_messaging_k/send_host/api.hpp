#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::send_host
{
    // [AddRef@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_ref;
    
    // [AllocateBuffer@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc3e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x8f8e0, 0x243e0 bytes
    // win32kbase.sys .text:0xc6ed0, 0x27ef0 bytes
    // win32kbase.sys .text:0xaf920, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) allocate_buffer;
    
    // [CancelBuffer@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc4b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x207b80, 0x243e0 bytes
    // win32kbase.sys .text:0x2586c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x205980, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) cancel_buffer;
    
    // [NotifyInvalid@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc4d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x207ba0, 0x243e0 bytes
    // win32kbase.sys .text:0x2586e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2059a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) notify_invalid;
    
    // [QueryInterface@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f9d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xca1c0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb250, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8b60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) query_interface;
    
    // [Release@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release;
    
    // [s_Vtbl@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x103a20, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x213498, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2633f8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x211480, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) s_vtbl;
    
    // [SubmitBuffer@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc4f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x8f1c0, 0x243e0 bytes
    // win32kbase.sys .text:0xc6d80, 0x27ef0 bytes
    // win32kbase.sys .text:0xaf7d0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) submit_buffer;
    
    // [ValidateReceiveBuffer@SendHost@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc620, 0x1eb80 bytes
    // win32kbase.sys .text:0x8f850, 0x243e0 bytes
    // win32kbase.sys .text:0xc6cf8, 0x27ef0 bytes
    // win32kbase.sys .text:0xaf744, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) validate_receive_buffer;
};
#include "magic/api.end.hpp"
