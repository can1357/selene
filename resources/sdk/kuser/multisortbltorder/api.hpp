#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::multisortbltorder
{
    // [??1MULTISORTBLTORDER@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x293e50, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x293cf0, 0x13864 bytes
    // win32kfull.sys .text:0x2a11a0, 0x1596d bytes
    // win32kfull.sys .text:0x2a2328, 0x1659e bytes
    // win32kfull.sys .text:0x2a1110, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
