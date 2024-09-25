#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::undow32threadpidlocks
{
    // [bRedo@UNDOW32THREADPIDLOCKS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xeb5c4, 0x13864 bytes
    // win32kfull.sys .text:0xef904, 0x1596d bytes
    // win32kfull.sys .text:0xf7e98, 0x1659e bytes
    // win32kfull.sys .text:0xf0724, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_redo;
    
    // [vUndo@UNDOW32THREADPIDLOCKS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xeb540, 0x13864 bytes
    // win32kfull.sys .text:0xef954, 0x1596d bytes
    // win32kfull.sys .text:0xf7ee8, 0x1659e bytes
    // win32kfull.sys .text:0xf0774, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_undo;
};
#include "magic/api.end.hpp"
