#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::efsmemobj
{
    // [??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfec04, 0x13864 bytes
    // win32kfull.sys .text:0x392d4, 0x1596d bytes
    // win32kfull.sys .text:0xf8284, 0x1659e bytes
    // win32kfull.sys .text:0x396e4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1EFSMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfecd0, 0x13864 bytes
    // win32kfull.sys .text:0x3928c, 0x1596d bytes
    // win32kfull.sys .text:0xffe08, 0x1659e bytes
    // win32kfull.sys .text:0x3969c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
