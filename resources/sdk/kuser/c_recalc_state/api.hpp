#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_recalc_state
{
    // [??0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14cdc0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CRecalcState@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x10a280, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [GetRestoreRectForMigrate@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) get_restore_rect_for_migrate;
    
    // [GetStateString@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x239ec4, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) get_state_string;
    
    // [HasWindowMoved@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc65c4, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) has_window_moved;
    
    // [IsRdpVariant@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x119980, 0x1659e bytes
    //
    _m5(sdk::unknown_ptr) is_rdp_variant;
    
    // [IsRotation@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14d308, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) is_rotation;
    
    // [IsWindowEligibleForMinimize@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1157a4, 0x1659e bytes
    //
    _m7(sdk::unknown_ptr) is_window_eligible_for_minimize;
    
    // [s_GetRestoreRect@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x107780, 0x1659e bytes
    //
    _m8(sdk::unknown_ptr) s_get_restore_rect;
    
    // [ShouldRestoreWindowToState@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x117a60, 0x1659e bytes
    //
    _m9(sdk::unknown_ptr) should_restore_window_to_state;
    
    // [ShouldStoreAfterProcessing@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc5414, 0x1659e bytes
    //
    _n0(sdk::unknown_ptr) should_store_after_processing;
    
    // [xxxFullscreenRestore@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23e0cc, 0x1659e bytes
    //
    _n1(sdk::unknown_ptr) xxx_fullscreen_restore;
    
    // [xxxMigrate@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc551c, 0x1659e bytes
    //
    _n2(sdk::unknown_ptr) xxx_migrate;
    
    // [xxxRestore@CRecalcState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23e364, 0x1659e bytes
    //
    _n3(sdk::unknown_ptr) xxx_restore;
};
#include "magic/api.end.hpp"
