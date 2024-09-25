#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::std
{
    // [_Xbad_function_call@std]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2b630, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) xbad_function_call;
    
    // [adopt_lock@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb60a, 0x17e70 bytes
    // dxgi.dll .data:0xcb60a, 0x17e70 bytes
    // dxgi.dll .data:0xca69a, 0x18b10 bytes
    // dxgi.dll .data:0xcc64a, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) adopt_lock;
    
    // [defer_lock@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb60e, 0x17e70 bytes
    // dxgi.dll .data:0xcb60e, 0x17e70 bytes
    // dxgi.dll .data:0xca69e, 0x18b10 bytes
    // dxgi.dll .data:0xcc64e, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) defer_lock;
    
    // [_Syserror_map@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x241e8, 0x17e70 bytes
    // dxgi.dll .text:0x244e8, 0x17e70 bytes
    // dxgi.dll .text:0x2b6c0, 0x18b10 bytes
    // dxgi.dll .text:0x25308, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) syserror_map;
    
    // [try_to_lock@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb60d, 0x17e70 bytes
    // dxgi.dll .data:0xcb60d, 0x17e70 bytes
    // dxgi.dll .data:0xca69d, 0x18b10 bytes
    // dxgi.dll .data:0xcc64d, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) try_to_lock;
    
    // [_Winerror_map@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24218, 0x17e70 bytes
    // dxgi.dll .text:0x24518, 0x17e70 bytes
    // dxgi.dll .text:0x2b6f0, 0x18b10 bytes
    // dxgi.dll .text:0x25338, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) winerror_map;
    
    // [_Xbad_alloc@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24168, 0x17e70 bytes
    // dxgi.dll .text:0x24468, 0x17e70 bytes
    // dxgi.dll .text:0x2b608, 0x18b10 bytes
    // dxgi.dll .text:0x25288, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) xbad_alloc;
    
    // [_Xlength_error@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24190, 0x17e70 bytes
    // dxgi.dll .text:0x24490, 0x17e70 bytes
    // dxgi.dll .text:0x2b658, 0x18b10 bytes
    // dxgi.dll .text:0x252b0, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) xlength_error;
    
    // [_Xout_of_range@std]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x241bc, 0x17e70 bytes
    // dxgi.dll .text:0x244bc, 0x17e70 bytes
    // dxgi.dll .text:0x2b684, 0x18b10 bytes
    // dxgi.dll .text:0x252dc, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) xout_of_range;
};
#include "magic/api.end.hpp"
