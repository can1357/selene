#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::bltqueue_remote_vsync_source
{
    // [LogStartStatus@BLTQUEUE_REMOTE_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3c082c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) log_start_status;
    
    // [LogUnexpectedStartFailure@BLTQUEUE_REMOTE_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb7ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2fb51c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) log_unexpected_start_failure;
    
    // [??0BLTQUEUE_REMOTE_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb6ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c076c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb45c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb774, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c07f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb4e4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetThreadPriority@BLTQUEUE_REMOTE_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1563c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4d10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159210, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_thread_priority;
    
    // [GetWaitableTdrEvent@BLTQUEUE_REMOTE_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1563d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4d20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159220, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_waitable_tdr_event;
    
    // [GetWaitableVSyncEvent@BLTQUEUE_REMOTE_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1562f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4960, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159140, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_waitable_v_sync_event;
    
    // [ResetTdrTimer@BLTQUEUE_REMOTE_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb8e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0920, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb650, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) reset_tdr_timer;
    
    // [StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb910, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0950, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb680, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) start_v_sync;
    
    // [StopVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fbb30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0ba0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb8a0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) stop_v_sync;
};
#include "magic/api.end.hpp"
