#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_guest_global_vmbus
{
    // [VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x36fb50, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) vm_bus_host_monitor_power;
    
    // [VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37777c, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) vm_bus_send_destroy_keyed_mutex;
    
    // [VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3779f4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) vm_bus_send_destroy_process;
    
    // [VmBusSendLogEventGlobal@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37a5d4, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) vm_bus_send_log_event_global;
    
    // [VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37ac9c, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) vm_bus_send_notify_process_freeze;
    
    // [VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37ad68, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) vm_bus_send_notify_process_thaw;
    
    // [VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3801c0, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) vm_bus_send_update_monitor_mapping;
    
    // [CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232c60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x362420, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232d90, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) create_gpadl_from_buffer;
    
    // [CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232cec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3624ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232e1c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) create_gpadl_from_mdl;
    
    // [CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23301c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36283c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23314c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) create_vm_bus_channel;
    
    // [DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x233764, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3630fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x233894, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) delete_gpadl;
    
    // [DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x233808, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3631a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x233938, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) destroy_vm_bus_channel;
    
    // [EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x235464, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3656b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235594, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) ensure_vm_bus_channel;
    
    // [GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2355d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3658bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235708, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) get_mmio_space_info;
    
    // [VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237c90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x368ec0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x237dc0, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) vm_bus_channel_closed;
    
    // [VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237ed0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369130, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238000, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) vm_bus_channel_opened;
    
    // [VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237fd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369230, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238100, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) vm_bus_channel_post_started;
    
    // [VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3e5d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5d140, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e7c0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) vm_bus_channel_process_packet;
    
    // [VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238130, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369390, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238260, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) vm_bus_channel_started;
    
    // [VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238230, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369490, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238360, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) vm_bus_channel_suspend;
    
    // [VmBusCommandTableHostToVm@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x705c0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x87160, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x705c0, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) vm_bus_command_table_host_to_vm;
    
    // [VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23b500, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36d3a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23b630, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) vm_bus_duplicate_handle;
    
    // [VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3eb8c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5de2c, 0x84380 bytes
    // dxgkrnl.sys .text:0x3ed7c, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) vm_bus_propagate_present_history_token;
    
    // [VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240d84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x374724, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x240eb4, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) vm_bus_send_acquire_keyed_mutex_sync;
    
    // [VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2421c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x376558, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2422f0, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) vm_bus_send_create_nt_shared_object;
    
    // [VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2423a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3768bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2424d0, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) vm_bus_send_create_process;
    
    // [VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242bc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x377854, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242cf0, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) vm_bus_send_destroy_nt_shared_object;
    
    // [VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242c08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x377ac0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242d38, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) vm_bus_send_destroy_sync_object;
    
    // [VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x244f8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37b4a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2450bc, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) vm_bus_send_open_keyed_mutex;
    
    // [VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x245298, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37b904, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2453c8, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) vm_bus_send_open_sync_object;
    
    // [VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2453f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37bb5c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x245528, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) vm_bus_send_opm_request;
    
    // [VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x245c04, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37c66c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x245d34, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) vm_bus_send_query_etw_session;
    
    // [VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24632c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37cf18, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24645c, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) vm_bus_send_release_keyed_mutex_sync;
    
    // [VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x246880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37d608, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2469b0, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) vm_bus_send_set_io_space_region;
    
    // [VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x246a68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37d9c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246b98, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) vm_bus_send_signal_fence;
    
    // [VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2488d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3802fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x248a08, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) vm_bus_send_vsync_control;
    
    // [VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3f044, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5e8ec, 0x84380 bytes
    // dxgkrnl.sys .text:0x3f234, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) vm_bus_set_guest_data;
    
    // [VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3f098, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5e940, 0x84380 bytes
    // dxgkrnl.sys .text:0x3f288, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) vm_bus_signal_guest_event;
    
    // [VmBusSignalGuestEventPassive@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24a0c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x382280, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24a1f0, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) vm_bus_signal_guest_event_passive;
    
    // [VmBusWnfNotification@DXG_GUEST_GLOBAL_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24bbc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x384670, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24bd00, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) vm_bus_wnf_notification;
};
#include "magic/api.end.hpp"
