#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::enumareas
{
    // [bAdvanceToTopMostOpaqueLayer@ENUMAREAS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26dc9c, 0x13864 bytes
    // win32kfull.sys .text:0x152f9c, 0x1596d bytes
    // win32kfull.sys .text:0x147d3c, 0x1659e bytes
    // win32kfull.sys .text:0x153edc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_advance_to_top_most_opaque_layer;
    
    // [bEnum@ENUMAREAS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xebc68, 0x13864 bytes
    // win32kfull.sys .text:0xf00cc, 0x1596d bytes
    // win32kfull.sys .text:0xf7fb8, 0x1659e bytes
    // win32kfull.sys .text:0xf0eec, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_enum;
    
    // [bEnumLayers@ENUMAREAS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26dda4, 0x13864 bytes
    // win32kfull.sys .text:0x152e58, 0x1596d bytes
    // win32kfull.sys .text:0x147b64, 0x1659e bytes
    // win32kfull.sys .text:0x153d98, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_enum_layers;
    
    // [??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xebdb8, 0x13864 bytes
    // win32kfull.sys .text:0xeff14, 0x1596d bytes
    // win32kfull.sys .text:0xba5a4, 0x1659e bytes
    // win32kfull.sys .text:0xf0d34, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [??1ENUMAREAS@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xebbf4, 0x13864 bytes
    // win32kfull.sys .text:0xefeac, 0x1596d bytes
    // win32kfull.sys .text:0xf7f7c, 0x1659e bytes
    // win32kfull.sys .text:0xf0ccc, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
