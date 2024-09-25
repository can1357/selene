#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_window_prop
{
    // [Delete@CWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x10b590, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) _delete;
    
    // [RemoveAndDeleteProp@CWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x46d44, 0x13864 bytes
    // win32kfull.sys .text:0xcd3c0, 0x1596d bytes
    // win32kfull.sys .text:0xbb1c8, 0x1659e bytes
    // win32kfull.sys .text:0xce080, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) remove_and_delete_prop;
    
    // [SetProp@CWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x46d88, 0x13864 bytes
    // win32kfull.sys .text:0xcea58, 0x1596d bytes
    // win32kfull.sys .text:0xb2830, 0x1659e bytes
    // win32kfull.sys .text:0xcf718, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) set_prop;
};
#include "magic/api.end.hpp"
