#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_host_virtualgpu_vmbus
{
    // [ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x361fbc, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) convert_host_vid_pn_target_id_to_vid_pn_source_id;
    
    // [CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2335f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x362f5c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x233724, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) create_vm_bus_channel;
    
    // [DestroyVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23388c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36322c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2339bc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_vm_bus_channel;
    
    // [VmBusAdapterStop@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2369d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x367870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x236b00, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) vm_bus_adapter_stop;
    
    // [VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x236a60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x367920, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x236b90, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) vm_bus_blt;
    
    // [VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x236e00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x367d70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x236f30, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) vm_bus_cdd_gdi_command;
    
    // [VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237af0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x368cc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x237c20, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) vm_bus_cdd_sync_gpu_access;
    
    // [VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237bb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x368db0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x237ce0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) vm_bus_change_video_memory_reservation;
    
    // [VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237e90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3690f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x237fc0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) vm_bus_channel_closed;
    
    // [VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237f90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3691f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2380c0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) vm_bus_channel_opened;
    
    // [VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2380f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369350, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238220, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) vm_bus_channel_post_started;
    
    // [VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3e970, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5d930, 0x84380 bytes
    // dxgkrnl.sys .text:0x3eb60, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) vm_bus_channel_process_packet;
    
    // [VmBusChannelProcessingComplete@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) vm_bus_channel_processing_complete;
    
    // [VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2381f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369450, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238320, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) vm_bus_channel_started;
    
    // [VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369580, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238450, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) vm_bus_channel_suspend;
    
    // [VmBusCloseAdapter@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238360, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3695c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238490, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) vm_bus_close_adapter;
    
    // [VmBusCommandTableVgpuToHost@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x70620, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x871d0, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x70620, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) vm_bus_command_table_vgpu_to_host;
    
    // [VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2384c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369730, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2385f0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) vm_bus_create_allocation;
    
    // [VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238db0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36a240, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238ee0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) vm_bus_create_context_virtual;
    
    // [VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238f40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36a440, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x239070, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) vm_bus_create_device;
    
    // [VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x239330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36a900, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x239460, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) vm_bus_create_hw_queue;
    
    // [VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2398b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36b060, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2399e0, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) vm_bus_create_paging_queue;
    
    // [VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x239dc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36b700, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x239ef0, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) vm_bus_create_sync_object;
    
    // [VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23a0d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36baf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23a200, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) vm_bus_ddi_get_node_metadata;
    
    // [VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23a2c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36bcf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23a3f0, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) vm_bus_ddi_get_standard_allocation_driver_data;
    
    // [VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23a760, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36c200, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23a890, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) vm_bus_ddi_query_adapter_info;
    
    // [VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23ac90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36c930, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23adc0, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) vm_bus_destroy_allocation;
    
    // [VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23adb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36ca90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23aee0, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) vm_bus_destroy_context;
    
    // [VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23ae80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36cb90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23afb0, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) vm_bus_destroy_device;
    
    // [VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23af50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36cc90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23b080, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) vm_bus_destroy_hw_queue;
    
    // [VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23b210, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36cff0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23b340, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) vm_bus_destroy_paging_queue;
    
    // [VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23b850, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36d840, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23b980, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) vm_bus_escape;
    
    // [VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23ba20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36dab0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23bb50, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) vm_bus_evict;
    
    // [VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23bde0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36dfa0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23bf10, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) vm_bus_flush_adapter;
    
    // [VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23c030, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36e280, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23c160, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) vm_bus_flush_device;
    
    // [VmBusFlushHeapTransitions@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23c250, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36e530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23c380, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) vm_bus_flush_heap_transitions;
    
    // [VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23c360, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36e680, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23c490, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) vm_bus_free_gpu_virtual_address;
    
    // [VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23c420, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36e770, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23c550, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) vm_bus_get_allocation_priority;
    
    // [VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23c6c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36ea60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23c7f0, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) vm_bus_get_context_scheduling_priority;
    
    // [VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23c7a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36eb70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23c8d0, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) vm_bus_get_device_state;
    
    // [VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23c890, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36ed20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23c9c0, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) vm_bus_get_driver_store_file;
    
    // [VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23cb10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36efb0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23cc40, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) vm_bus_get_internal_adapter_info;
    
    // [VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23ccb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36f1f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23cde0, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) vm_bus_get_next_hard_link;
    
    // [VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23ce50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36f3c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23cf80, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) vm_bus_get_registry_keys;
    
    // [VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23d4d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36fdf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23d600, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) vm_bus_is_sync_object_signaled;
    
    // [VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23d790, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x370120, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23d8c0, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) vm_bus_lock2;
    
    // [VmBusLogEvent@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23d8b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x370270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23d9e0, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) vm_bus_log_event;
    
    // [VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23db70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x370650, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23dca0, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) vm_bus_make_resident;
    
    // [VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23e170, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x370da0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23e2a0, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) vm_bus_map_gpu_virtual_address;
    
    // [VmBusMarkDeviceAsError@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23e6e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x371440, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23e810, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) vm_bus_mark_device_as_error;
    
    // [VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23e850, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3715e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23e980, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) vm_bus_offer_allocations;
    
    // [VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23e9a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x371790, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23ead0, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) vm_bus_open_adapter;
    
    // [VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23eef0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x371e10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23f020, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) vm_bus_open_resource;
    
    // [VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23ff90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x373620, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2400c0, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) vm_bus_query_adapter_info;
    
    // [VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240140, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x373870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x240270, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) vm_bus_query_allocation_residency;
    
    // [VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240360, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x373b10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x240490, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) vm_bus_query_clock_calibration;
    
    // [VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240510, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x373d60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x240640, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) vm_bus_query_statistics;
    
    // [VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x373f10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2407c0, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) vm_bus_query_video_memory_info;
    
    // [VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2407c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x374070, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2408f0, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) vm_bus_read_driver_store_file;
    
    // [VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240990, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x374270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x240ac0, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) vm_bus_reclaim_allocations;
    
    // [VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240c90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x374600, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x240dc0, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) vm_bus_reserve_gpu_virtual_address;
    
    // [VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x249110, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x380e40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x249240, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) vm_bus_set_allocation_priority;
    
    // [VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2493c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x381130, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2494f0, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) vm_bus_set_context_scheduling_priority;
    
    // [VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2494f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3812b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x249620, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) vm_bus_set_existing_sys_mem_store;
    
    // [VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x249950, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x381820, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x249a80, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) vm_bus_set_queued_limit;
    
    // [VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x249a30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x381940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x249b60, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) vm_bus_set_redirected_flip_fence_value;
    
    // [VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x249ef0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x382000, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24a020, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) vm_bus_signal_fence_nt_shared_by_ref;
    
    // [VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24a250, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x382480, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24a380, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) vm_bus_signal_sync_object;
    
    // [VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24a860, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x382c50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24a9a0, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) vm_bus_submit_command;
    
    // [VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24aa00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x382ea0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24ab40, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) vm_bus_submit_command_to_hw_queue;
    
    // [VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24ab70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3830d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24acb0, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) vm_bus_submit_present_history_token;
    
    // [VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24af50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x383600, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24b090, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) vm_bus_submit_vail_present_history_token;
    
    // [VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24b260, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3839b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24b3a0, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) vm_bus_unlock2;
    
    // [VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24b350, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x383ad0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24b490, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) vm_bus_update_allocation_property;
    
    // [VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24b470, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x383c50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24b5b0, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) vm_bus_update_gpu_virtual_address;
    
    // [VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24b640, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x383ee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24b780, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) vm_bus_wait_for_sync_object_from_cpu;
    
    // [VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24b900, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3841f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24ba40, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) vm_bus_wait_for_sync_object_from_gpu;
};
#include "magic/api.end.hpp"
