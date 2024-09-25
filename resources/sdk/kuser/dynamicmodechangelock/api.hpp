#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dynamicmodechangelock
{
    // [??0DYNAMICMODECHANGELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf9d48, 0x13864 bytes
    // win32kfull.sys .text:0x147c18, 0x1596d bytes
    // win32kfull.sys .text:0x2b9c1c, 0x1659e bytes
    // win32kfull.sys .text:0x148b58, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DYNAMICMODECHANGELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x60ba8, 0x13864 bytes
    // win32kfull.sys .text:0xd1738, 0x1596d bytes
    // win32kfull.sys .text:0xb6abc, 0x1659e bytes
    // win32kfull.sys .text:0xd23f8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
