#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pdev
{
    // [Allocate@PDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbd170, 0x243e0 bytes
    // win32kbase.sys .text:0x92fa0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb7160, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) allocate;
    
    // [DecrementClientReferenceCount@PDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x38790, 0x243e0 bytes
    // win32kbase.sys .text:0x182570, 0x27ef0 bytes
    // win32kbase.sys .text:0x40900, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) decrement_client_reference_count;
    
    // [Free@PDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17bd0, 0x243e0 bytes
    // win32kbase.sys .text:0x90f60, 0x27ef0 bytes
    // win32kbase.sys .text:0x43b80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) free;
    
    // [IncrementClientReferenceCount@PDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x387c0, 0x243e0 bytes
    // win32kbase.sys .text:0xe81a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x408d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) increment_client_reference_count;
    
    // [InitializeClientReferenceCount@PDEV]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x836d0, 0x243e0 bytes
    // win32kbase.sys .text:0x92ed8, 0x27ef0 bytes
    // win32kbase.sys .text:0xc79c0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize_client_reference_count;
};
#include "magic/api.end.hpp"
