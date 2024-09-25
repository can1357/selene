#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::devlockbltobj
{
    // [bMapTrgSurfaceView@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x6f1f4, 0x13864 bytes
    // win32kfull.sys .text:0x44414, 0x1596d bytes
    // win32kfull.sys .text:0x44824, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) b_map_trg_surface_view;
    
    // [bDisposeSrcDco@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f2ac, 0x13864 bytes
    // win32kfull.sys .text:0x273da4, 0x1596d bytes
    // win32kfull.sys .text:0xcc10, 0x1659e bytes
    // win32kfull.sys .text:0x273cf4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_dispose_src_dco;
    
    // [bDisposeTrgDco@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f3b0, 0x13864 bytes
    // win32kfull.sys .text:0x273e48, 0x1596d bytes
    // win32kfull.sys .text:0xe6ffc, 0x1659e bytes
    // win32kfull.sys .text:0x273d98, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_dispose_trg_dco;
    
    // [bLock@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6e070, 0x13864 bytes
    // win32kfull.sys .text:0x8bc40, 0x1596d bytes
    // win32kfull.sys .text:0x188a0, 0x1659e bytes
    // win32kfull.sys .text:0x8c7b0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) b_lock;
    
    // [bMapSrcSurfaceView@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6d74c, 0x13864 bytes
    // win32kfull.sys .text:0xf31b0, 0x1596d bytes
    // win32kfull.sys .text:0x12d58, 0x1659e bytes
    // win32kfull.sys .text:0xf4040, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_map_src_surface_view;
    
    // [bPrepareSrcDco@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f318, 0x13864 bytes
    // win32kfull.sys .text:0xf310c, 0x1596d bytes
    // win32kfull.sys .text:0x16954, 0x1659e bytes
    // win32kfull.sys .text:0xf3f9c, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) b_prepare_src_dco;
    
    // [bPrepareTrgDco@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f3f8, 0x13864 bytes
    // win32kfull.sys .text:0x44354, 0x1596d bytes
    // win32kfull.sys .text:0x16a90, 0x1659e bytes
    // win32kfull.sys .text:0x44764, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_prepare_trg_dco;
    
    // [bUnMapSrcSurfaceView@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f124, 0x13864 bytes
    // win32kfull.sys .text:0xf2720, 0x1596d bytes
    // win32kfull.sys .text:0xe85b0, 0x1659e bytes
    // win32kfull.sys .text:0xf35b0, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_un_map_src_surface_view;
    
    // [bUnMapTrgSurfaceView@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f178, 0x13864 bytes
    // win32kfull.sys .text:0xf3218, 0x1596d bytes
    // win32kfull.sys .text:0x16a0c, 0x1659e bytes
    // win32kfull.sys .text:0xf40a8, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) b_un_map_trg_surface_view;
    
    // [??0DEVLOCKBLTOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6d7a0, 0x13864 bytes
    // win32kfull.sys .text:0x42dd4, 0x1596d bytes
    // win32kfull.sys .text:0x62c68, 0x1659e bytes
    // win32kfull.sys .text:0x431e4, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) construct_instance;
    
    // [??1DEVLOCKBLTOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6d810, 0x13864 bytes
    // win32kfull.sys .text:0x8b5b0, 0x1596d bytes
    // win32kfull.sys .text:0x17140, 0x1659e bytes
    // win32kfull.sys .text:0x8c120, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) destroy_instance;
    
    // [vClearRenderState@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f4a4, 0x13864 bytes
    // win32kfull.sys .text:0x8ce38, 0x1596d bytes
    // win32kfull.sys .text:0x1a500, 0x1659e bytes
    // win32kfull.sys .text:0x8d9a8, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) v_clear_render_state;
    
    // [vFlushSpriteUpdates@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f5d4, 0x13864 bytes
    // win32kfull.sys .text:0x273eb8, 0x1596d bytes
    // win32kfull.sys .text:0x273ef4, 0x1659e bytes
    // win32kfull.sys .text:0x273e08, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_flush_sprite_updates;
    
    // [vUnLock@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x262e20, 0x13864 bytes
    // win32kfull.sys .text:0x278890, 0x1596d bytes
    // win32kfull.sys .text:0x2785c0, 0x1659e bytes
    // win32kfull.sys .text:0x278800, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) v_un_lock;
    
    // [vUnMap@DEVLOCKBLTOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6f614, 0x13864 bytes
    // win32kfull.sys .text:0x273f60, 0x1596d bytes
    // win32kfull.sys .text:0x273f6c, 0x1659e bytes
    // win32kfull.sys .text:0x273ed0, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) v_un_map;
};
#include "magic/api.end.hpp"
