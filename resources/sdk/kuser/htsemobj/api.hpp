#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::htsemobj
{
    // [??1HTSEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c2360, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [vAcquire@HTSEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xe2308, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) v_acquire;
    
    // [vRelease@HTSEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe22d0, 0x13864 bytes
    // win32kfull.sys .text:0x15070, 0x1596d bytes
    // win32kfull.sys .text:0x5d048, 0x1659e bytes
    // win32kfull.sys .text:0x15420, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) v_release;
};
#include "magic/api.end.hpp"
