#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_user_play_sound
{
    // [Connect@CUserPlaySound]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11fd5c, 0x1596d bytes
    // win32kfull.sys .text:0xec364, 0x1659e bytes
    // win32kfull.sys .text:0x120c9c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) connect;
    
    // [Disconnect@CUserPlaySound]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11fe10, 0x1596d bytes
    // win32kfull.sys .text:0xec418, 0x1659e bytes
    // win32kfull.sys .text:0x120d50, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) disconnect;
    
    // [PlaySync@CUserPlaySound]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7b80, 0x1596d bytes
    // win32kfull.sys .text:0xf7624, 0x1659e bytes
    // win32kfull.sys .text:0xf8a10, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) play_sync;
    
    // [s_pUserPlaySound@CUserPlaySound]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33ae88, 0x1596d bytes
    // win32kfull.sys .data:0x3391a8, 0x1659e bytes
    // win32kfull.sys .data:0x33aeb8, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) s_p_user_play_sound;
};
#include "magic/api.end.hpp"
