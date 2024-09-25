#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::epalobj
{
    // [??1EPALOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x481d4, 0x13864 bytes
    // win32kfull.sys .text:0x155a38, 0x1596d bytes
    // win32kfull.sys .text:0x156908, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xdf058, 0x13864 bytes
    // win32kfull.sys .text:0x1081c, 0x1596d bytes
    // win32kfull.sys .text:0x5e534, 0x1659e bytes
    // win32kfull.sys .text:0x10bcc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
