#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::multifont
{
    // [??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293c70, 0x13864 bytes
    // win32kfull.sys .text:0x2a1114, 0x1596d bytes
    // win32kfull.sys .text:0x15e26c, 0x1659e bytes
    // win32kfull.sys .text:0x2a1084, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1MULTIFONT@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293e04, 0x13864 bytes
    // win32kfull.sys .text:0x2a12c4, 0x1596d bytes
    // win32kfull.sys .text:0x15e338, 0x1659e bytes
    // win32kfull.sys .text:0x2a1234, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyTable@MULTIFONT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293f0c, 0x13864 bytes
    // win32kfull.sys .text:0x2a13f8, 0x1596d bytes
    // win32kfull.sys .text:0x15e392, 0x1659e bytes
    // win32kfull.sys .text:0x2a1368, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_table;
};
#include "magic/api.end.hpp"
