#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::reader
{
    // [bNextFigure@READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe9cc, 0x13864 bytes
    // win32kfull.sys .text:0x130e80, 0x1596d bytes
    // win32kfull.sys .text:0x12649c, 0x1659e bytes
    // win32kfull.sys .text:0x131dc0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_next_figure;
    
    // [bNextPoint@READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbea24, 0x13864 bytes
    // win32kfull.sys .text:0x13039c, 0x1596d bytes
    // win32kfull.sys .text:0x1257f4, 0x1659e bytes
    // win32kfull.sys .text:0x1312dc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_next_point;
};
#include "magic/api.end.hpp"
