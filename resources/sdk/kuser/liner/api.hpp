#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::liner
{
    // [vNextEvent@LINER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe8d4, 0x13864 bytes
    // win32kfull.sys .text:0x12ff54, 0x1596d bytes
    // win32kfull.sys .text:0x125578, 0x1659e bytes
    // win32kfull.sys .text:0x130e94, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_next_event;
    
    // [vNextPoint@LINER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe740, 0x13864 bytes
    // win32kfull.sys .text:0x130034, 0x1596d bytes
    // win32kfull.sys .text:0x125658, 0x1659e bytes
    // win32kfull.sys .text:0x130f74, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_next_point;
};
#include "magic/api.end.hpp"
