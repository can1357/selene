#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::hmg_insert_object_helper
{
    // [??1HmgInsertObjectHelper@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x25a0e0, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Insert@HmgInsertObjectHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a0f0, 0x13864 bytes
    // win32kfull.sys .text:0x71f3c, 0x1596d bytes
    // win32kfull.sys .text:0x3aaac, 0x1659e bytes
    // win32kfull.sys .text:0x72aac, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) insert;
};
#include "magic/api.end.hpp"
