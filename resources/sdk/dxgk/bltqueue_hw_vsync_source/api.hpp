#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::bltqueue_hw_vsync_source
{
    // [??0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb5a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0624, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb310, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [GetWaitableTdrEvent@BLTQUEUE_HW_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1563a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4cf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1591f0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_waitable_tdr_event;
    
    // [GetWaitableVSyncEvent@BLTQUEUE_HW_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1563b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4d00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159200, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_waitable_v_sync_event;
    
    // [ResetTdrTimer@BLTQUEUE_HW_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb620, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c06a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb390, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) reset_tdr_timer;
    
    // [StartVSync@BLTQUEUE_HW_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb660, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c06e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb3d0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) start_v_sync;
    
    // [StopVSync@BLTQUEUE_HW_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb6b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0730, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb420, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) stop_v_sync;
};
#include "magic/api.end.hpp"
