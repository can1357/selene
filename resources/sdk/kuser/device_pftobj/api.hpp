#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::device_pftobj
{
    // [??0DEVICE_PFTOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x14ed18, 0x243e0 bytes
    // win32kbase.sys .text:0x14c848, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [bLoadFonts@DEVICE_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25c49c, 0x13864 bytes
    // win32kfull.sys .text:0x27323c, 0x1596d bytes
    // win32kfull.sys .text:0x273394, 0x1659e bytes
    // win32kfull.sys .text:0x27318c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_load_fonts;
    
    // [pPFFGet@DEVICE_PFTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x820a0, 0x13864 bytes
    // win32kfull.sys .text:0x393ac, 0x1596d bytes
    // win32kfull.sys .text:0x7da54, 0x1659e bytes
    // win32kfull.sys .text:0x397bc, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) p_pff_get;
};
#include "magic/api.end.hpp"
