#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::xepathobj
{
    // [??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27a85c, 0x13864 bytes
    // win32kfull.sys .text:0x134750, 0x1596d bytes
    // win32kfull.sys .text:0x12b8a0, 0x1659e bytes
    // win32kfull.sys .text:0x135690, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27a984, 0x13864 bytes
    // win32kfull.sys .text:0x2869bc, 0x1596d bytes
    // win32kfull.sys .text:0x28570c, 0x1659e bytes
    // win32kfull.sys .text:0x28692c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1XEPATHOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27aa08, 0x13864 bytes
    // win32kfull.sys .text:0x134714, 0x1596d bytes
    // win32kfull.sys .text:0x12b864, 0x1659e bytes
    // win32kfull.sys .text:0x135654, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
