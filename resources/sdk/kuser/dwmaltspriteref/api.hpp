#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dwmaltspriteref
{
    // [AltLockSpriteObj@DWMALTSPRITEREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25630, 0x13864 bytes
    // win32kfull.sys .text:0x4729c, 0x1596d bytes
    // win32kfull.sys .text:0x809c, 0x1659e bytes
    // win32kfull.sys .text:0x476ac, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) alt_lock_sprite_obj;
    
    // [??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25654, 0x13864 bytes
    // win32kfull.sys .text:0x4726c, 0x1596d bytes
    // win32kfull.sys .text:0x806c, 0x1659e bytes
    // win32kfull.sys .text:0x4767c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x255f8, 0x13864 bytes
    // win32kfull.sys .text:0xbb970, 0x1596d bytes
    // win32kfull.sys .text:0x802c, 0x1659e bytes
    // win32kfull.sys .text:0xbc4e0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [hspLookupWindow@DWMALTSPRITEREF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25680, 0x13864 bytes
    // win32kfull.sys .text:0x472d0, 0x1596d bytes
    // win32kfull.sys .text:0x80d0, 0x1659e bytes
    // win32kfull.sys .text:0x476e0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) hsp_lookup_window;
};
#include "magic/api.end.hpp"
