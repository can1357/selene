#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::brushmemobj
{
    // [??0BRUSHMEMOBJ@@QEAA@KKHH@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x20470, 0x1eb80 bytes
    // win32kbase.sys .text:0x3e200, 0x243e0 bytes
    // win32kbase.sys .text:0x13720, 0x27ef0 bytes
    // win32kbase.sys .text:0x42370, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x206a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xade30, 0x243e0 bytes
    // win32kbase.sys .text:0x66030, 0x27ef0 bytes
    // win32kbase.sys .text:0x42000, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1BRUSHMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b2b88, 0x13864 bytes
    // win32kfull.sys .text:0x14c370, 0x1596d bytes
    // win32kfull.sys .text:0x140b14, 0x1659e bytes
    // win32kfull.sys .text:0x14d2b0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [pbrAllocBrush@BRUSHMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x203a4, 0x1eb80 bytes
    // win32kbase.sys .text:0x3e3d8, 0x243e0 bytes
    // win32kbase.sys .text:0x1362c, 0x27ef0 bytes
    // win32kbase.sys .text:0x42548, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) pbr_alloc_brush;
    
    // [vGlobal@BRUSHMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2042c, 0x1eb80 bytes
    // win32kbase.sys .text:0x3753c, 0x243e0 bytes
    // win32kbase.sys .text:0x5c388, 0x27ef0 bytes
    // win32kbase.sys .text:0x8580c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) v_global;
};
#include "magic/api.end.hpp"
