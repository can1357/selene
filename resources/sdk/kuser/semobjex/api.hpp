#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::semobjex
{
    // [??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x144274, 0x13864 bytes
    // win32kfull.sys .text:0x151cf0, 0x1596d bytes
    // win32kfull.sys .text:0x146344, 0x1659e bytes
    // win32kfull.sys .text:0x152c30, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1SEMOBJEX@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x144368, 0x13864 bytes
    // win32kfull.sys .text:0x151c14, 0x1596d bytes
    // win32kfull.sys .text:0x146268, 0x1659e bytes
    // win32kfull.sys .text:0x152b54, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
