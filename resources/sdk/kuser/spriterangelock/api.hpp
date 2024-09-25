#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::spriterangelock
{
    // [vLockExclusive@SPRITERANGELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x60158, 0x13864 bytes
    // win32kfull.sys .text:0xf0e54, 0x1596d bytes
    // win32kfull.sys .text:0x3fae4, 0x1659e bytes
    // win32kfull.sys .text:0xf1c74, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_lock_exclusive;
    
    // [vLockShared@SPRITERANGELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x60188, 0x13864 bytes
    // win32kfull.sys .text:0xf002c, 0x1596d bytes
    // win32kfull.sys .text:0xba6a0, 0x1659e bytes
    // win32kfull.sys .text:0xf0e4c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_lock_shared;
    
    // [vUnlock@SPRITERANGELOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5dc20, 0x13864 bytes
    // win32kfull.sys .text:0x470e8, 0x1596d bytes
    // win32kfull.sys .text:0x3fa88, 0x1659e bytes
    // win32kfull.sys .text:0x474f8, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
