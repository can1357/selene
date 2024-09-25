#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_pointer_hash_table
{
    // [Create@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a444, 0x13864 bytes
    // win32kfull.sys .text:0x10a974, 0x1596d bytes
    // win32kfull.sys .text:0x6894c, 0x1659e bytes
    // win32kfull.sys .text:0x10b8a4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [Destroy@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x125530, 0x13864 bytes
    // win32kfull.sys .text:0x124410, 0x1596d bytes
    // win32kfull.sys .text:0x113b00, 0x1659e bytes
    // win32kfull.sys .text:0x125350, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy;
    
    // [Enumerate@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6e04, 0x13864 bytes
    // win32kfull.sys .text:0x10b164, 0x1596d bytes
    // win32kfull.sys .text:0x68438, 0x1659e bytes
    // win32kfull.sys .text:0x10c094, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) enumerate;
    
    // [Insert@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6e7c, 0x13864 bytes
    // win32kfull.sys .text:0xdfb4c, 0x1596d bytes
    // win32kfull.sys .text:0x6f000, 0x1659e bytes
    // win32kfull.sys .text:0xe080c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) insert;
    
    // [InsertInternal@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7000, 0x13864 bytes
    // win32kfull.sys .text:0xdfc34, 0x1596d bytes
    // win32kfull.sys .text:0x6f0ec, 0x1659e bytes
    // win32kfull.sys .text:0xe08f4, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) insert_internal;
    
    // [InsertWithHash@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7064, 0x13864 bytes
    // win32kfull.sys .text:0xdfca4, 0x1596d bytes
    // win32kfull.sys .text:0x6f15c, 0x1659e bytes
    // win32kfull.sys .text:0xe0964, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) insert_with_hash;
    
    // [Lookup@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d70e0, 0x13864 bytes
    // win32kfull.sys .text:0xdfa60, 0x1596d bytes
    // win32kfull.sys .text:0x6eef0, 0x1659e bytes
    // win32kfull.sys .text:0xe0720, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) lookup;
    
    // [Remove@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d71e0, 0x13864 bytes
    // win32kfull.sys .text:0x6f22c, 0x1596d bytes
    // win32kfull.sys .text:0xfa808, 0x1659e bytes
    // win32kfull.sys .text:0x6fd9c, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) remove;
    
    // [Resize@CPointerHashTable@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d72e4, 0x13864 bytes
    // win32kfull.sys .text:0xdf1b4, 0x1596d bytes
    // win32kfull.sys .text:0x6b670, 0x1659e bytes
    // win32kfull.sys .text:0xdfe74, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) resize;
};
#include "magic/api.end.hpp"
