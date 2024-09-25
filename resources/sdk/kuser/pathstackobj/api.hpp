#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pathstackobj
{
    // [??0PATHSTACKOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13a3a8, 0x13864 bytes
    // win32kfull.sys .text:0x133aa8, 0x1596d bytes
    // win32kfull.sys .text:0x12a9c0, 0x1659e bytes
    // win32kfull.sys .text:0x1349e8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xba9a0, 0x13864 bytes
    // win32kfull.sys .text:0x134aac, 0x1596d bytes
    // win32kfull.sys .text:0x12bc1c, 0x1659e bytes
    // win32kfull.sys .text:0x1359ec, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1PATHSTACKOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xba980, 0x13864 bytes
    // win32kfull.sys .text:0x134714, 0x1596d bytes
    // win32kfull.sys .text:0x12bbdc, 0x1659e bytes
    // win32kfull.sys .text:0x135654, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
