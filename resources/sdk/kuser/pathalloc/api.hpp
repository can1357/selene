#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pathalloc
{
    // [cAllocated@PATHALLOC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11e8d0, 0x1eb80 bytes
    // win32kbase.sys .data:0x259f60, 0x243e0 bytes
    // win32kbase.sys .data:0x2aed90, 0x27ef0 bytes
    // win32kbase.sys .data:0x256f94, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) c_allocated;
    
    // [cFree@PATHALLOC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11e8d4, 0x1eb80 bytes
    // win32kbase.sys .data:0x259f70, 0x243e0 bytes
    // win32kbase.sys .data:0x2aeda0, 0x27ef0 bytes
    // win32kbase.sys .data:0x256f90, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) c_free;
    
    // [freelist@PATHALLOC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11e8d8, 0x1eb80 bytes
    // win32kbase.sys .data:0x259f68, 0x243e0 bytes
    // win32kbase.sys .data:0x2aed98, 0x27ef0 bytes
    // win32kbase.sys .data:0x256fa0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) freelist;
    
    // [hsemFreelist@PATHALLOC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11e8e0, 0x1eb80 bytes
    // win32kbase.sys .data:0x259f78, 0x243e0 bytes
    // win32kbase.sys .data:0x2aeda8, 0x27ef0 bytes
    // win32kbase.sys .data:0x256f98, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) hsem_freelist;
};
#include "magic/api.end.hpp"
