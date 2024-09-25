#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_transform
{
    // [GetTransform@InputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2f1f0, 0x1596d bytes
    // win32kfull.sys .text:0xf6250, 0x1659e bytes
    // win32kfull.sys .text:0x2f600, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) get_transform;
    
    // [GetTransformList@InputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22638c, 0x13864 bytes
    // win32kfull.sys .text:0x1f6204, 0x1596d bytes
    // win32kfull.sys .text:0x15bb2a, 0x1659e bytes
    // win32kfull.sys .text:0x1f6064, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) get_transform_list;
    
    // [OnInput@InputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106430, 0x13864 bytes
    // win32kfull.sys .text:0x2f07c, 0x1596d bytes
    // win32kfull.sys .text:0xf60b0, 0x1659e bytes
    // win32kfull.sys .text:0x2f48c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) on_input;
    
    // [SetCompositionInput@InputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226580, 0x13864 bytes
    // win32kfull.sys .text:0x2cf4, 0x1596d bytes
    // win32kfull.sys .text:0x2974, 0x1659e bytes
    // win32kfull.sys .text:0x2cf4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) set_composition_input;
    
    // [StoreTransform@InputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2265d8, 0x13864 bytes
    // win32kfull.sys .text:0x2d74, 0x1596d bytes
    // win32kfull.sys .text:0x29e0, 0x1659e bytes
    // win32kfull.sys .text:0x2d74, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) store_transform;
};
#include "magic/api.end.hpp"
