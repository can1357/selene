#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvideopresenttarget
{
    // [SetUnplugHiding@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e1844, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e15b4, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) set_unplug_hiding;
    
    // [CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x154b90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e43b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x157ecc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) cancel_link_training_timer;
    
    // [ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e0f64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a0d28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e0cd4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) exchange_display_manager_object;
    
    // [GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x122670, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16f9b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe6540, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_target_link_training_status;
    
    // [Initialize@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17c45c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20d798, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17f99c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [IsLeafTarget@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x18c10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d624, 0x84380 bytes
    // dxgkrnl.sys .text:0x18fd4, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) is_leaf_target;
    
    // [IsMonitorConnected@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12ee80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a0d6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1270b0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) is_monitor_connected;
    
    // [IsTargetCurrentActive@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xab38, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2cd8, 0x84380 bytes
    // dxgkrnl.sys .text:0x2514, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) is_target_current_active;
    
    // [IsTargetForceable@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12f7cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1fe1f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xeb2bc, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) is_target_forceable;
    
    // [LinkTrainingTimeoutDpc@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5a3e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69890, 0x84380 bytes
    // dxgkrnl.sys .text:0x5a570, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) link_training_timeout_dpc;
    
    // [LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e0fb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a0e20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e0d20, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) link_training_timeout_work_item;
    
    // [NeedToBeActive@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12e530, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16f8f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12b218, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) need_to_be_active;
    
    // [ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x152320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e1020, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155590, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) reference_display_manager_object;
    
    // [RemoveChildTarget@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5a43c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x698ec, 0x84380 bytes
    // dxgkrnl.sys .text:0x5a5cc, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) remove_child_target;
    
    // [RemoveJoinedTarget@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5a4c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69970, 0x84380 bytes
    // dxgkrnl.sys .text:0x5a650, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) remove_joined_target;
    
    // [SetConnectedMonitor@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x22e7c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x29c58, 0x84380 bytes
    // dxgkrnl.sys .text:0x2380c, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) set_connected_monitor;
    
    // [SetPowerState@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x19a20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x157d4, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a100, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) set_power_state;
    
    // [SetTargetActivated@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1528e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c775c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155b30, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) set_target_activated;
    
    // [StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e189c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a15a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e160c, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) start_link_training_timer;
    
    // [??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xfa3c, 0x60098 bytes
    // dxgkrnl.sys .text:0x21e88, 0x762b0 bytes
    // dxgkrnl.sys .text:0x28820, 0x84380 bytes
    // dxgkrnl.sys .text:0x228e8, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) construct_instance;
    
    // [??1DMMVIDEOPRESENTTARGET@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1abbec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e02f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a02dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e0060, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) destroy_instance;
    
    // [LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x32f74, 0x60098 bytes
    // dxgkrnl.sys .text:0x59bdc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69568, 0x84380 bytes
    // dxgkrnl.sys .text:0x59d6c, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) log_monitor_plug_unplug_event;
};
#include "magic/api.end.hpp"
