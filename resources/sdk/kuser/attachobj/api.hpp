#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::attachobj
{
    // [??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xcbdbc, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6a468, 0x1596d bytes
    // win32kfull.sys .text:0x73880, 0x1659e bytes
    // win32kfull.sys .text:0x6afd8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1ATTACHOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xcbe20, 0x13864 bytes
    // win32kfull.sys .text:0x6f0c0, 0x1596d bytes
    // win32kfull.sys .text:0x719f4, 0x1659e bytes
    // win32kfull.sys .text:0x6fc30, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
