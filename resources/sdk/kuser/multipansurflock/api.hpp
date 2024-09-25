#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::multipansurflock
{
    // [vUnLockShadowWAndWait@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2979d0, 0x1596d bytes
    // win32kfull.sys .text:0x297940, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_un_lock_shadow_w_and_wait;
    
    // [bTryLockShadowR@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28900c, 0x13864 bytes
    // win32kfull.sys .text:0x296a4c, 0x1596d bytes
    // win32kfull.sys .text:0x296b5c, 0x1659e bytes
    // win32kfull.sys .text:0x2969bc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_try_lock_shadow_r;
    
    // [??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x287170, 0x13864 bytes
    // win32kfull.sys .text:0x294950, 0x1596d bytes
    // win32kfull.sys .text:0x294a40, 0x1659e bytes
    // win32kfull.sys .text:0x2948c0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1MULTIPANSURFLOCK@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2873f8, 0x13864 bytes
    // win32kfull.sys .text:0x294be0, 0x1596d bytes
    // win32kfull.sys .text:0x294cd0, 0x1659e bytes
    // win32kfull.sys .text:0x294b50, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28952c, 0x13864 bytes
    // win32kfull.sys .text:0x296d98, 0x1596d bytes
    // win32kfull.sys .text:0x296ea4, 0x1659e bytes
    // win32kfull.sys .text:0x296d08, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) v_lock_bmp1_and_prepare_for_punt;
    
    // [vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2895dc, 0x13864 bytes
    // win32kfull.sys .text:0x296e6c, 0x1596d bytes
    // win32kfull.sys .text:0x296f78, 0x1659e bytes
    // win32kfull.sys .text:0x296ddc, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) v_lock_bmp2_and_prepare_for_punt;
    
    // [vLockShadowW@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289950, 0x13864 bytes
    // win32kfull.sys .text:0x297284, 0x1596d bytes
    // win32kfull.sys .text:0x297394, 0x1659e bytes
    // win32kfull.sys .text:0x2971f4, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) v_lock_shadow_w;
    
    // [vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289d94, 0x13864 bytes
    // win32kfull.sys .text:0x2976a8, 0x1596d bytes
    // win32kfull.sys .text:0x29780c, 0x1659e bytes
    // win32kfull.sys .text:0x297618, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) v_un_lock_bmp1_and_remove_punt;
    
    // [vUnLockBmp2AndRemovePunt@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289e34, 0x13864 bytes
    // win32kfull.sys .text:0x297764, 0x1596d bytes
    // win32kfull.sys .text:0x2978c8, 0x1659e bytes
    // win32kfull.sys .text:0x2976d4, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) v_un_lock_bmp2_and_remove_punt;
    
    // [vUnLockShadowR@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289f48, 0x13864 bytes
    // win32kfull.sys .text:0x2978a8, 0x1596d bytes
    // win32kfull.sys .text:0x297a04, 0x1659e bytes
    // win32kfull.sys .text:0x297818, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) v_un_lock_shadow_r;
    
    // [vUnLockShadowW@MULTIPANSURFLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289fd0, 0x13864 bytes
    // win32kfull.sys .text:0x29793c, 0x1596d bytes
    // win32kfull.sys .text:0x297a98, 0x1659e bytes
    // win32kfull.sys .text:0x2978ac, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) v_un_lock_shadow_w;
};
#include "magic/api.end.hpp"
