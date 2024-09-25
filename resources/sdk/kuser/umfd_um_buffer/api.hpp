#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umfd_um_buffer
{
    // [CommitBuffer@UmfdUMBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2d8f70, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) commit_buffer;
    
    // [CommitReservedBuffer@UmfdUMBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2d8ff8, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) commit_reserved_buffer;
    
    // [AlignSizeTo@UmfdUMBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d8e60, 0x13864 bytes
    // win32kfull.sys .text:0xdf110, 0x1596d bytes
    // win32kfull.sys .text:0x696dc, 0x1659e bytes
    // win32kfull.sys .text:0xdfdd0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) align_size_to;
    
    // [AllocTemporaryBuffer@UmfdUMBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d8e7c, 0x13864 bytes
    // win32kfull.sys .text:0x2dedd4, 0x1596d bytes
    // win32kfull.sys .text:0x2deac4, 0x1659e bytes
    // win32kfull.sys .text:0x2dede4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) alloc_temporary_buffer;
    
    // [Create@UmfdUMBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9090, 0x13864 bytes
    // win32kfull.sys .text:0x122dc0, 0x1596d bytes
    // win32kfull.sys .text:0x69374, 0x1659e bytes
    // win32kfull.sys .text:0x123d00, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) create;
    
    // [Destroy@UmfdUMBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9110, 0x13864 bytes
    // win32kfull.sys .text:0x10ad30, 0x1596d bytes
    // win32kfull.sys .text:0x69560, 0x1659e bytes
    // win32kfull.sys .text:0x10bc60, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) destroy;
};
#include "magic/api.end.hpp"
