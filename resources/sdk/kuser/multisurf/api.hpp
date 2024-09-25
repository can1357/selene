#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::multisurf
{
    // [??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x26a690, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [bCreateDIB@MULTISURF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x298da4, 0x13864 bytes
    // win32kfull.sys .text:0x2a65ac, 0x1596d bytes
    // win32kfull.sys .text:0x2a6990, 0x1659e bytes
    // win32kfull.sys .text:0x2a651c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_create_dib;
    
    // [bLoadSource@MULTISURF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x299194, 0x13864 bytes
    // win32kfull.sys .text:0x2a69cc, 0x1596d bytes
    // win32kfull.sys .text:0x2a6b14, 0x1659e bytes
    // win32kfull.sys .text:0x2a693c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_load_source;
    
    // [bLoadSourceNotMetaDEVBITMAP@MULTISURF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29924c, 0x13864 bytes
    // win32kfull.sys .text:0x2a6a94, 0x1596d bytes
    // win32kfull.sys .text:0x2a6bdc, 0x1659e bytes
    // win32kfull.sys .text:0x2a6a04, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_load_source_not_meta_devbitmap;
    
    // [??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293dc8, 0x13864 bytes
    // win32kfull.sys .text:0x2a1280, 0x1596d bytes
    // win32kfull.sys .text:0x15e2f6, 0x1659e bytes
    // win32kfull.sys .text:0x2a11f0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) construct_instance_;
    
    // [??1MULTISURF@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26a7b8, 0x13864 bytes
    // win32kfull.sys .text:0x27e440, 0x1596d bytes
    // win32kfull.sys .text:0x27e5b0, 0x1659e bytes
    // win32kfull.sys .text:0x27e3b0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [vInit@MULTISURF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29986c, 0x13864 bytes
    // win32kfull.sys .text:0x2a70c4, 0x1596d bytes
    // win32kfull.sys .text:0x2a720c, 0x1659e bytes
    // win32kfull.sys .text:0x2a7034, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_init;
};
#include "magic/api.end.hpp"
