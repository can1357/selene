#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rgnmemobjtmp
{
    // [??0RGNMEMOBJTMP@@QEAA@K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x5c460, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0RGNMEMOBJTMP@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x658e0, 0x13864 bytes
    // win32kfull.sys .text:0x155a88, 0x1596d bytes
    // win32kfull.sys .text:0x14db44, 0x1659e bytes
    // win32kfull.sys .text:0x156958, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??0RGNMEMOBJTMP@@QEAA@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148120, 0x13864 bytes
    // win32kfull.sys .text:0x155e4c, 0x1596d bytes
    // win32kfull.sys .text:0x14e150, 0x1659e bytes
    // win32kfull.sys .text:0x156d1c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) construct_instance__;
    
    // [??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12bd54, 0x13864 bytes
    // win32kfull.sys .text:0x156270, 0x1596d bytes
    // win32kfull.sys .text:0x14e298, 0x1659e bytes
    // win32kfull.sys .text:0x157170, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) construct_instance___;
    
    // [??1RGNMEMOBJTMP@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x658b8, 0x13864 bytes
    // win32kfull.sys .text:0x45288, 0x1596d bytes
    // win32kfull.sys .text:0xc494, 0x1659e bytes
    // win32kfull.sys .text:0x45698, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
