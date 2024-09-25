#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::surfmem
{
    // [pSurfobj@SURFMEM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x8eab4, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) p_surfobj;
    
    // [vAltUnlockFast@SURFMEM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x481d4, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) v_alt_unlock_fast;
    
    // [bCreateDIB@SURFMEM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x59820, 0x1eb80 bytes
    // win32kbase.sys .text:0x53630, 0x243e0 bytes
    // win32kbase.sys .text:0x48300, 0x27ef0 bytes
    // win32kbase.sys .text:0x1db70, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) b_create_dib;
    
    // [??1SURFMEM@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x595c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x440c0, 0x243e0 bytes
    // win32kbase.sys .text:0x4dc50, 0x27ef0 bytes
    // win32kbase.sys .text:0x33d20, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
