#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::undowndobjspriteoverlapclip
{
    // [vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2724d8, 0x13864 bytes
    // win32kfull.sys .text:0x2828e8, 0x1596d bytes
    // win32kfull.sys .text:0x282858, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_redo;
    
    // [vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x279a40, 0x13864 bytes
    // win32kfull.sys .text:0x285838, 0x1596d bytes
    // win32kfull.sys .text:0x147fcc, 0x1659e bytes
    // win32kfull.sys .text:0x2857a8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_undo;
};
#include "magic/api.end.hpp"
