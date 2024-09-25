#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::xebrushobj
{
    // [bSaveAttributes@XEBRUSHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9f4, 0x13864 bytes
    // win32kfull.sys .text:0xf9eac, 0x1596d bytes
    // win32kfull.sys .text:0x91e98, 0x1659e bytes
    // win32kfull.sys .text:0xfaddc, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_save_attributes;
    
    // [RestoreAttributes@XEBRUSHOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d9ac, 0x13864 bytes
    // win32kfull.sys .text:0xf9e10, 0x1596d bytes
    // win32kfull.sys .text:0x91dfc, 0x1659e bytes
    // win32kfull.sys .text:0xfad40, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) restore_attributes;
};
#include "magic/api.end.hpp"
