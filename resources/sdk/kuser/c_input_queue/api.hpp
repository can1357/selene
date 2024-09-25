#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_queue
{
    // [GetBaseWindow@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xca160, 0x243e0 bytes
    // win32kbase.sys .text:0xc8b00, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_base_window;
    
    // [GetInputFlags@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca180, 0x243e0 bytes
    // win32kbase.sys .text:0xdb210, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8b20, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_input_flags;
    
    // [AddRef@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f8e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xca140, 0x243e0 bytes
    // win32kbase.sys .text:0xdb1f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8ae0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) add_ref;
    
    // [Create@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x333c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6e64, 0x243e0 bytes
    // win32kbase.sys .text:0xb0324, 0x27ef0 bytes
    // win32kbase.sys .text:0x95f24, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) create;
    
    // [GetArgs@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf67c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb03e0, 0x243e0 bytes
    // win32kbase.sys .text:0xc6180, 0x27ef0 bytes
    // win32kbase.sys .text:0xa6d60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_args;
    
    // [GetType@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33980, 0x1eb80 bytes
    // win32kbase.sys .text:0xca190, 0x243e0 bytes
    // win32kbase.sys .text:0xdb220, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8b30, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_type;
    
    // [GetWindow@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x339a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xca160, 0x243e0 bytes
    // win32kbase.sys .text:0xdb230, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8b00, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_window;
    
    // [Initialize@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x339fc, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6f60, 0x243e0 bytes
    // win32kbase.sys .text:0xb0408, 0x27ef0 bytes
    // win32kbase.sys .text:0x96020, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [MarkInvalid@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x339b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb16d0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9c20, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7be0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) mark_invalid;
    
    // [Release@CInputQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33950, 0x1eb80 bytes
    // win32kbase.sys .text:0xb61b0, 0x243e0 bytes
    // win32kbase.sys .text:0xcda90, 0x27ef0 bytes
    // win32kbase.sys .text:0xafaf0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
