#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::surfref
{
    // [bValid@SURFREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v20H2
    // win32kfull.sys .text:0x26db68, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_valid;
    
    // [??0SURFREF@@QEAA@PEAVSURFACE@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x26e304, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??0SURFREF@@QEAA@PEAUHSURF__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v20H2
    // win32kfull.sys .text:0x26dff4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [vUnlock@SURFREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v20H2
    // win32kfull.sys .text:0x156908, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) v_unlock;
    
    // [vKeepIt@SURFREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x273f4c, 0x1659e bytes
    // win32kfull.sys .text:0x273e60, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) v_keep_it;
    
    // [bDeleteSurface@SURFREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200c0, 0x1eb80 bytes
    // win32kfull.sys .text:0x11d0a8, 0x1596d bytes
    // win32kbase.sys .text:0x2fdc8, 0x27ef0 bytes
    // win32kfull.sys .text:0x1570a0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_delete_surface;
    
    // [??1SURFREF@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x481d4, 0x13864 bytes
    // win32kfull.sys .text:0x155a38, 0x1596d bytes
    // win32kfull.sys .text:0x14daf4, 0x1659e bytes
    // win32kfull.sys .text:0x156908, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
