#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::mdcobja
{
    // [??0MDCOBJA@@QEAA@PEAUHDC__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x6438, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd1cf0, 0x1596d bytes
    // win32kfull.sys .text:0x88d0, 0x1659e bytes
    // win32kfull.sys .text:0xd29b0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1MDCOBJA@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6d674, 0x13864 bytes
    // win32kfull.sys .text:0x155df0, 0x1596d bytes
    // win32kfull.sys .text:0x14e0f4, 0x1659e bytes
    // win32kfull.sys .text:0x156cc0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
