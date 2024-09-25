#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::bltqueue_emulated_vsync_source
{
    // [??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x153d58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db2b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x157008, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fbbd4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0c2c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb944, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [GetThreadPriority@BLTQUEUE_EMULATED_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155070, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4810, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158290, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_thread_priority;
    
    // [GetWaitableTdrEvent@BLTQUEUE_EMULATED_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1563e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4d30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159230, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_waitable_tdr_event;
    
    // [GetWaitableVSyncEvent@BLTQUEUE_EMULATED_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1563f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4d40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159240, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_waitable_v_sync_event;
    
    // [PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4f00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d94c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd5590, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) prepare_next_v_sync;
    
    // [StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd5ac0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4650, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd6370, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) start_v_sync;
    
    // [StopVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fbbf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0c50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb960, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) stop_v_sync;
};
#include "magic/api.end.hpp"
