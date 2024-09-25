#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::brushselobj
{
    // [??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d94c, 0x13864 bytes
    // win32kfull.sys .text:0xf9e60, 0x1596d bytes
    // win32kfull.sys .text:0x91e4c, 0x1659e bytes
    // win32kfull.sys .text:0xfad90, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1BRUSHSELOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d988, 0x13864 bytes
    // win32kfull.sys .text:0xf9de0, 0x1596d bytes
    // win32kfull.sys .text:0x91dcc, 0x1659e bytes
    // win32kfull.sys .text:0xfad10, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [vDecShareRefCntLazy0@BRUSHSELOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12bbf4, 0x13864 bytes
    // win32kfull.sys .text:0x1364d0, 0x1596d bytes
    // win32kfull.sys .text:0x1271b8, 0x1659e bytes
    // win32kfull.sys .text:0x137410, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) v_dec_share_ref_cnt_lazy0;
};
#include "magic/api.end.hpp"
