#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rtp_pathmemobj
{
    // [bFetchSubPath@RTP_PATHMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2ba6e4, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_fetch_sub_path;
    
    // [bDiagonalizePath@RTP_PATHMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ba34c, 0x13864 bytes
    // win32kfull.sys .text:0x2c0990, 0x1596d bytes
    // win32kfull.sys .text:0x2c21d0, 0x1659e bytes
    // win32kfull.sys .text:0x2c0900, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_diagonalize_path;
    
    // [bDiagonalizeSubPath@RTP_PATHMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ba39c, 0x13864 bytes
    // win32kfull.sys .text:0x2c0a2c, 0x1596d bytes
    // win32kfull.sys .text:0x2c226c, 0x1659e bytes
    // win32kfull.sys .text:0x2c099c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_diagonalize_sub_path;
    
    // [bFetchNextPoint@RTP_PATHMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ba5d0, 0x13864 bytes
    // win32kfull.sys .text:0x2c0c8c, 0x1596d bytes
    // win32kfull.sys .text:0x2c24cc, 0x1659e bytes
    // win32kfull.sys .text:0x2c0bfc, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_fetch_next_point;
    
    // [bWritePoint@RTP_PATHMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ba760, 0x13864 bytes
    // win32kfull.sys .text:0x2c0db4, 0x1596d bytes
    // win32kfull.sys .text:0x2c25e0, 0x1659e bytes
    // win32kfull.sys .text:0x2c0d24, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_write_point;
};
#include "magic/api.end.hpp"
