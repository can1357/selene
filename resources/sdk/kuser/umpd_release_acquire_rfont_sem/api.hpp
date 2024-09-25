#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umpd_release_acquire_rfont_sem
{
    // [??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1483b0, 0x13864 bytes
    // win32kfull.sys .text:0x1562ac, 0x1596d bytes
    // win32kfull.sys .text:0x14e2d4, 0x1659e bytes
    // win32kfull.sys .text:0x1571ac, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14835c, 0x13864 bytes
    // win32kfull.sys .text:0x15632c, 0x1596d bytes
    // win32kfull.sys .text:0x14e350, 0x1659e bytes
    // win32kfull.sys .text:0x15722c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
