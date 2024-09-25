#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dynamicmodechangesharelock
{
    // [??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x60b6c, 0x13864 bytes
    // win32kfull.sys .text:0xd1a64, 0x1596d bytes
    // win32kfull.sys .text:0xb6ddc, 0x1659e bytes
    // win32kfull.sys .text:0xd2724, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ]
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
