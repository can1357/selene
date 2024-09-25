#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::resetfcobj
{
    // [??1RESETFCOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x742d0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117b7c, 0x13864 bytes
    // win32kfull.sys .text:0xf456c, 0x1596d bytes
    // win32kfull.sys .text:0x742f8, 0x1659e bytes
    // win32kfull.sys .text:0xf53fc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
