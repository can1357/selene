#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ebox
{
    // [??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8548, 0x13864 bytes
    // win32kfull.sys .text:0x1326d4, 0x1596d bytes
    // win32kfull.sys .text:0x2b1218, 0x1659e bytes
    // win32kfull.sys .text:0x133614, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0EBOX@@QEAA@AEAVERECTL@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbd508, 0x13864 bytes
    // win32kfull.sys .text:0x46588, 0x1596d bytes
    // win32kfull.sys .text:0xfab50, 0x1659e bytes
    // win32kfull.sys .text:0x46998, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a9674, 0x13864 bytes
    // win32kfull.sys .text:0x2b02a4, 0x1596d bytes
    // win32kfull.sys .text:0x2b16d0, 0x1659e bytes
    // win32kfull.sys .text:0x2b0214, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) construct_instance__;
    
    // [ptlXform@EBOX]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a9e1c, 0x13864 bytes
    // win32kfull.sys .text:0x2b0aa4, 0x1596d bytes
    // win32kfull.sys .text:0x2b1ec0, 0x1659e bytes
    // win32kfull.sys .text:0x2b0a14, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) ptl_xform;
};
#include "magic/api.end.hpp"
