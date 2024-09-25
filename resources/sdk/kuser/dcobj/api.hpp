#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dcobj
{
    // [??0DCOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6bbb0, 0x13864 bytes
    // win32kfull.sys .text:0x27bb00, 0x1596d bytes
    // win32kfull.sys .text:0x27bbd0, 0x1659e bytes
    // win32kfull.sys .text:0x27ba70, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DCOBJ@@QEAA@PEAUHDC__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6bb48, 0x13864 bytes
    // win32kfull.sys .text:0x89428, 0x1596d bytes
    // win32kfull.sys .text:0x17ca4, 0x1659e bytes
    // win32kfull.sys .text:0x89f98, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1DCOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6bb40, 0x13864 bytes
    // win32kfull.sys .text:0x127170, 0x1596d bytes
    // win32kfull.sys .text:0x14dc30, 0x1659e bytes
    // win32kfull.sys .text:0x1280b0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
