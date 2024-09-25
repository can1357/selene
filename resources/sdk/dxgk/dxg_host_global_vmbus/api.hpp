#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_host_global_vmbus
{
    // [VmBusDummy@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x36d370, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) vm_bus_dummy;
    
    // [VmBusLogEventGlobal@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x370570, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) vm_bus_log_event_global;
    
    // [VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5e23c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) vm_bus_send_host_monitor_power;
    
    // [VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5e6f8, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) vm_bus_send_signal_guest_event_single_packet;
    
    // [VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x383e00, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) vm_bus_update_monitor_mapping;
    
    // [CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x233480, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x362db4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2335b0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) create_vm_bus_channel;
    
    // [DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23388c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36322c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2339bc, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_vm_bus_channel;
    
    // [VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2368c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x367760, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2369f0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) vm_bus_acquire_keyed_mutex_sync;
    
    // [VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237e50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3690b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x237f80, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) vm_bus_channel_closed;
    
    // [VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237f50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3691b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238080, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) vm_bus_channel_opened;
    
    // [VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2380b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369310, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2381e0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) vm_bus_channel_post_started;
    
    // [VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3e790, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5d390, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e980, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) vm_bus_channel_process_packet;
    
    // [VmBusChannelProcessingComplete@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) vm_bus_channel_processing_complete;
    
    // [VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2381b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369410, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2382e0, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) vm_bus_channel_started;
    
    // [VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2382e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369540, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238410, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) vm_bus_channel_suspend;
    
    // [VmBusCommandTableVmToHost@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x70a40, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x875f0, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x70a40, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) vm_bus_command_table_vm_to_host;
    
    // [VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238410, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3696a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238540, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) vm_bus_complete_transaction;
    
    // [VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2394c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36ab10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2395f0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) vm_bus_create_nt_shared_object;
    
    // [VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2399e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36b1c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x239b10, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) vm_bus_create_process;
    
    // [VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23b020, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36cd90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23b150, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) vm_bus_destroy_keyed_mutex;
    
    // [VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23b070, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36cde0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23b1a0, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) vm_bus_destroy_nt_shared_object;
    
    // [VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23b2e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36d0f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23b410, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) vm_bus_destroy_process;
    
    // [VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23b4b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36d320, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23b5e0, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) vm_bus_destroy_sync_object;
    
    // [VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23e7a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x371530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23e8d0, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) vm_bus_notify_process_freeze;
    
    // [VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23e7f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x371580, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23e920, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) vm_bus_notify_process_thaw;
    
    // [VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23ede0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x371cb0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23ef10, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) vm_bus_open_keyed_mutex;
    
    // [VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23f260, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x372260, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23f390, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) vm_bus_open_sync_object;
    
    // [VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23fb60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x372d30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23fc90, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) vm_bus_opm_request;
    
    // [VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240460, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x373c80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x240590, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) vm_bus_query_etw_session;
    
    // [VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240bb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x374530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x240ce0, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) vm_bus_release_keyed_mutex_sync;
    
    // [VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242c4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x377b98, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242d7c, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) vm_bus_send_duplicate_handle;
    
    // [VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3edf0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5e340, 0x84380 bytes
    // dxgkrnl.sys .text:0x3efe0, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) vm_bus_send_propagate_present_history_token;
    
    // [VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3ee8c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5e440, 0x84380 bytes
    // dxgkrnl.sys .text:0x3f07c, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) vm_bus_send_set_guest_data;
    
    // [VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3ef50, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5e560, 0x84380 bytes
    // dxgkrnl.sys .text:0x3f140, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) vm_bus_send_set_guest_data_dword;
    
    // [VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3ef70, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5e580, 0x84380 bytes
    // dxgkrnl.sys .text:0x3f160, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) vm_bus_send_signal_guest_event;
    
    // [VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24905c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x380cb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24918c, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) vm_bus_send_wnf_notification;
    
    // [VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x249880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x381710, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2499b0, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) vm_bus_set_io_space_region;
    
    // [VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x249c70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x381c50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x249da0, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) vm_bus_signal_fence;
    
    // [VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24b5d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x383e70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24b710, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) vm_bus_vsync_control;
};
#include "magic/api.end.hpp"
