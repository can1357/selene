#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::exlateobj
{
    // [bSearchCache@EXLATEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x13c144, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_search_cache;
    
    // [??1EXLATEOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c2358, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [bInitXlateObj@EXLATEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x77098, 0x13864 bytes
    // win32kfull.sys .text:0x99000, 0x1596d bytes
    // win32kfull.sys .text:0x19fa0, 0x1659e bytes
    // win32kfull.sys .text:0x99b70, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_init_xlate_obj;
    
    // [bMakeXlate@EXLATEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b8de8, 0x13864 bytes
    // win32kfull.sys .text:0x2bf168, 0x1596d bytes
    // win32kfull.sys .text:0x2c09a8, 0x1659e bytes
    // win32kfull.sys .text:0x2bf0d8, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_make_xlate;
    
    // [vAddToCache@EXLATEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x77348, 0x13864 bytes
    // win32kfull.sys .text:0xe2a50, 0x1596d bytes
    // win32kfull.sys .text:0xdcca8, 0x1659e bytes
    // win32kfull.sys .text:0xe3710, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) v_add_to_cache;
    
    // [vAltUnlock@EXLATEOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x77060, 0x13864 bytes
    // win32kfull.sys .text:0x42d90, 0x1596d bytes
    // win32kfull.sys .text:0x63cc0, 0x1659e bytes
    // win32kfull.sys .text:0x431a0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) v_alt_unlock;
};
#include "magic/api.end.hpp"
