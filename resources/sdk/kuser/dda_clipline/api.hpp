#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dda_clipline
{
    // [bInit@DDA_CLIPLINE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d61ec, 0x13864 bytes
    // win32kfull.sys .text:0x13aca0, 0x1596d bytes
    // win32kfull.sys .text:0x1375b0, 0x1659e bytes
    // win32kfull.sys .text:0x13bbe0, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_init;
    
    // [vUnflip@DDA_CLIPLINE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2caea8, 0x13864 bytes
    // win32kfull.sys .text:0x13ac2c, 0x1596d bytes
    // win32kfull.sys .text:0x13753c, 0x1659e bytes
    // win32kfull.sys .text:0x13bb6c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_unflip;
    
    // [yCompute@DDA_CLIPLINE]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2cb1ec, 0x13864 bytes
    // win32kfull.sys .text:0x13ac64, 0x1596d bytes
    // win32kfull.sys .text:0x137574, 0x1659e bytes
    // win32kfull.sys .text:0x13bba4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) y_compute;
};
#include "magic/api.end.hpp"
