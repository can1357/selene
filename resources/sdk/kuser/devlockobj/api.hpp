#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::devlockobj
{
    // [bDisposeTrgDco@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x70110, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_dispose_trg_dco;
    
    // [vLockGammaRamp@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb83a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb2680, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) v_lock_gamma_ramp;
    
    // [bDisposeTrgDcoWorker@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xec3dc, 0x1596d bytes
    // win32kfull.sys .text:0x14dff0, 0x1659e bytes
    // win32kfull.sys .text:0xed11c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_dispose_trg_dco_worker;
    
    // [bLock@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x54ca0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4a0f0, 0x243e0 bytes
    // win32kbase.sys .text:0x2fe00, 0x27ef0 bytes
    // win32kbase.sys .text:0x317d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) b_lock;
    
    // [bMapTrgSurfaceView@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70380, 0x13864 bytes
    // win32kfull.sys .text:0xe4120, 0x1596d bytes
    // win32kfull.sys .text:0xdde10, 0x1659e bytes
    // win32kfull.sys .text:0xe4de0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_map_trg_surface_view;
    
    // [bPrepareTrgDco@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x55218, 0x1eb80 bytes
    // win32kbase.sys .text:0x3ca98, 0x243e0 bytes
    // win32kbase.sys .text:0x55608, 0x27ef0 bytes
    // win32kbase.sys .text:0x3bf78, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) b_prepare_trg_dco;
    
    // [bTightBoundsToRegion@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x148168, 0x13864 bytes
    // win32kfull.sys .text:0x155bd0, 0x1596d bytes
    // win32kfull.sys .text:0x10008, 0x1659e bytes
    // win32kfull.sys .text:0x156aa0, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_tight_bounds_to_region;
    
    // [bUnMapTrgSurfaceView@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70330, 0x13864 bytes
    // win32kfull.sys .text:0xec460, 0x1596d bytes
    // win32kfull.sys .text:0x14e084, 0x1659e bytes
    // win32kfull.sys .text:0xed1a0, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_un_map_trg_surface_view;
    
    // [??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70140, 0x13864 bytes
    // win32kfull.sys .text:0x155abc, 0x1596d bytes
    // win32kfull.sys .text:0x14db78, 0x1659e bytes
    // win32kfull.sys .text:0x15698c, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) construct_instance;
    
    // [??0DEVLOCKOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x70438, 0x13864 bytes
    // win32kfull.sys .text:0x3f930, 0x1596d bytes
    // win32kfull.sys .text:0xcf84, 0x1659e bytes
    // win32kfull.sys .text:0x3fd40, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) construct_instance_;
    
    // [??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6fd28, 0x13864 bytes
    // win32kfull.sys .text:0x155b3c, 0x1596d bytes
    // win32kfull.sys .text:0x14dbf8, 0x1659e bytes
    // win32kfull.sys .text:0x156a0c, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) construct_instance__;
    
    // [??1DEVLOCKOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6fd4c, 0x13864 bytes
    // win32kfull.sys .text:0xf0b38, 0x1596d bytes
    // win32kfull.sys .text:0xf4584, 0x1659e bytes
    // win32kfull.sys .text:0xf1958, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) destroy_instance;
    
    // [vClearRenderState@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6fc64, 0x13864 bytes
    // win32kfull.sys .text:0x8cfd0, 0x1596d bytes
    // win32kfull.sys .text:0x1a66c, 0x1659e bytes
    // win32kfull.sys .text:0x8db40, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_clear_render_state;
    
    // [vDestructor@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6fd60, 0x13864 bytes
    // win32kfull.sys .text:0x8cbc0, 0x1596d bytes
    // win32kfull.sys .text:0x1a2a0, 0x1659e bytes
    // win32kfull.sys .text:0x8d730, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) v_destructor;
    
    // [vDestructorNULL@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2684ec, 0x13864 bytes
    // win32kfull.sys .text:0x27ca30, 0x1596d bytes
    // win32kfull.sys .text:0x27cb90, 0x1659e bytes
    // win32kfull.sys .text:0x27c9a0, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) v_destructor_null;
    
    // [vFlushSpriteUpdates@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x701a8, 0x13864 bytes
    // win32kfull.sys .text:0xec4b8, 0x1596d bytes
    // win32kfull.sys .text:0xe9f1c, 0x1659e bytes
    // win32kfull.sys .text:0xed1f8, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) v_flush_sprite_updates;
    
    // [vInit@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x54b78, 0x1eb80 bytes
    // win32kbase.sys .text:0x3a288, 0x243e0 bytes
    // win32kbase.sys .text:0x555c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x3e54c, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) v_init;
    
    // [vLock@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x551ac, 0x1eb80 bytes
    // win32kbase.sys .text:0x1bf2c, 0x243e0 bytes
    // win32kbase.sys .text:0x584b4, 0x27ef0 bytes
    // win32kbase.sys .text:0xae734, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) v_lock;
    
    // [vLockNoDrawing@DEVLOCKOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x54bb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x3c9d0, 0x243e0 bytes
    // win32kbase.sys .text:0x55670, 0x27ef0 bytes
    // win32kbase.sys .text:0x3beb0, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) v_lock_no_drawing;
};
#include "magic/api.end.hpp"
