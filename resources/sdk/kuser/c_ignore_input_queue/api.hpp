#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_ignore_input_queue
{
    // [GetBaseWindow@CIgnoreInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xca100, 0x243e0 bytes
    // win32kbase.sys .text:0xc8aa0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_base_window;
    
    // [GetInputFlags@CIgnoreInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca120, 0x243e0 bytes
    // win32kbase.sys .text:0xdb1a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8ac0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_input_flags;
    
    // [AddRef@CIgnoreInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) add_ref;
    
    // [GetArgs@CIgnoreInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6110, 0x1eb80 bytes
    // win32kbase.sys .text:0xb7870, 0x243e0 bytes
    // win32kbase.sys .text:0x8800, 0x27ef0 bytes
    // win32kbase.sys .text:0xb18e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_args;
    
    // [GetType@CIgnoreInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_type;
    
    // [GetWindow@CIgnoreInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f8c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xca100, 0x243e0 bytes
    // win32kbase.sys .text:0xdb1c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8aa0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_window;
    
    // [MarkInvalid@CIgnoreInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) mark_invalid;
    
    // [Release@CIgnoreInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
