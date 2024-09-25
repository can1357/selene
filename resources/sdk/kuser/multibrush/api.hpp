#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::multibrush
{
    // [??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293b98, 0x13864 bytes
    // win32kfull.sys .text:0x2a1030, 0x1596d bytes
    // win32kfull.sys .text:0x2a2244, 0x1659e bytes
    // win32kfull.sys .text:0x2a0fa0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [DestroyTable@MULTIBRUSH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293e68, 0x13864 bytes
    // win32kfull.sys .text:0x2a1320, 0x1596d bytes
    // win32kfull.sys .text:0x2a2414, 0x1659e bytes
    // win32kfull.sys .text:0x2a1290, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_table;
    
    // [LoadElement@MULTIBRUSH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293fc8, 0x13864 bytes
    // win32kfull.sys .text:0x2a1470, 0x1596d bytes
    // win32kfull.sys .text:0x2a252c, 0x1659e bytes
    // win32kfull.sys .text:0x2a13e0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) load_element;
    
    // [StoreElement@MULTIBRUSH]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x298278, 0x13864 bytes
    // win32kfull.sys .text:0x2a5a64, 0x1596d bytes
    // win32kfull.sys .text:0x15ef20, 0x1659e bytes
    // win32kfull.sys .text:0x2a59d4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) store_element;
};
#include "magic/api.end.hpp"
