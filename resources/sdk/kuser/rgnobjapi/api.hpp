#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rgnobjapi
{
    // [bCopy@RGNOBJAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4da00, 0x1eb80 bytes
    // win32kbase.sys .text:0x40190, 0x243e0 bytes
    // win32kbase.sys .text:0x53f90, 0x27ef0 bytes
    // win32kbase.sys .text:0x8bf70, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) b_copy;
    
    // [bDeleteHandle@RGNOBJAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4dbd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1aac0, 0x243e0 bytes
    // win32kbase.sys .text:0x35138, 0x27ef0 bytes
    // win32kbase.sys .text:0x175ac, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) b_delete_handle;
    
    // [bDeleteRGNOBJAPI@RGNOBJAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4db20, 0x1eb80 bytes
    // win32kbase.sys .text:0x19cd0, 0x243e0 bytes
    // win32kbase.sys .text:0x573f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x178b0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) b_delete_rgnobjapi;
    
    // [bSubtract@RGNOBJAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6b3d0, 0x13864 bytes
    // win32kfull.sys .text:0x44ba4, 0x1596d bytes
    // win32kfull.sys .text:0x39488, 0x1659e bytes
    // win32kfull.sys .text:0x44fb4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_subtract;
    
    // [bSwap@RGNOBJAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4dad0, 0x1eb80 bytes
    // win32kbase.sys .text:0x48d00, 0x243e0 bytes
    // win32kbase.sys .text:0x2f350, 0x27ef0 bytes
    // win32kbase.sys .text:0x2f160, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) b_swap;
    
    // [??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4dd70, 0x1eb80 bytes
    // win32kbase.sys .text:0x56240, 0x243e0 bytes
    // win32kbase.sys .text:0x3c1c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x21680, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [??1RGNOBJAPI@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6bb10, 0x13864 bytes
    // win32kfull.sys .text:0x44b6c, 0x1596d bytes
    // win32kfull.sys .text:0x14a68, 0x1659e bytes
    // win32kfull.sys .text:0x44f7c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [iCombine@RGNOBJAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d960, 0x1eb80 bytes
    // win32kbase.sys .text:0x48470, 0x243e0 bytes
    // win32kbase.sys .text:0x2f6a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x30860, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) i_combine;
};
#include "magic/api.end.hpp"
