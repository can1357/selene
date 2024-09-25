#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pansurflock
{
    // [??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x287364, 0x13864 bytes
    // win32kfull.sys .text:0x294b48, 0x1596d bytes
    // win32kfull.sys .text:0x294c38, 0x1659e bytes
    // win32kfull.sys .text:0x294ab8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1PANSURFLOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28748c, 0x13864 bytes
    // win32kfull.sys .text:0x294c78, 0x1596d bytes
    // win32kfull.sys .text:0x294d68, 0x1659e bytes
    // win32kfull.sys .text:0x294be8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [vLockBmpAndPrepareForPunt@PANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28968c, 0x13864 bytes
    // win32kfull.sys .text:0x296f44, 0x1596d bytes
    // win32kfull.sys .text:0x297050, 0x1659e bytes
    // win32kfull.sys .text:0x296eb4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) v_lock_bmp_and_prepare_for_punt;
    
    // [vLockShadow@PANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289724, 0x13864 bytes
    // win32kfull.sys .text:0x296ffc, 0x1596d bytes
    // win32kfull.sys .text:0x297108, 0x1659e bytes
    // win32kfull.sys .text:0x296f6c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) v_lock_shadow;
    
    // [vUnLockBmpAndRemovePunt@PANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289d94, 0x13864 bytes
    // win32kfull.sys .text:0x2976a8, 0x1596d bytes
    // win32kfull.sys .text:0x29780c, 0x1659e bytes
    // win32kfull.sys .text:0x297618, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) v_un_lock_bmp_and_remove_punt;
    
    // [vUnLockShadow@PANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289ed4, 0x13864 bytes
    // win32kfull.sys .text:0x297824, 0x1596d bytes
    // win32kfull.sys .text:0x297988, 0x1659e bytes
    // win32kfull.sys .text:0x297794, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) v_un_lock_shadow;
};
#include "magic/api.end.hpp"
