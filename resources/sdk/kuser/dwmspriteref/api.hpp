#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dwmspriteref
{
    // [bValid@DWMSPRITEREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x5cfd0, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_valid;
    
    // [??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5cfdc, 0x13864 bytes
    // win32kfull.sys .text:0x7305c, 0x1596d bytes
    // win32kfull.sys .text:0x3c324, 0x1659e bytes
    // win32kfull.sys .text:0x73bcc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5cf7c, 0x13864 bytes
    // win32kfull.sys .text:0x73858, 0x1596d bytes
    // win32kfull.sys .text:0x3bd98, 0x1659e bytes
    // win32kfull.sys .text:0x743c8, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [hspLookupWindow@DWMSPRITEREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x61fb4, 0x13864 bytes
    // win32kfull.sys .text:0x738bc, 0x1596d bytes
    // win32kfull.sys .text:0x3bdfc, 0x1659e bytes
    // win32kfull.sys .text:0x7442c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) hsp_lookup_window;
    
    // [LockSpriteObj@DWMSPRITEREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5cfa8, 0x13864 bytes
    // win32kfull.sys .text:0x73888, 0x1596d bytes
    // win32kfull.sys .text:0x3bdc8, 0x1659e bytes
    // win32kfull.sys .text:0x743f8, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) lock_sprite_obj;
};
#include "magic/api.end.hpp"
