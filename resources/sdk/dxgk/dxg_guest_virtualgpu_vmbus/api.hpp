#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_guest_virtualgpu_vmbus
{
    // [VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37498c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) vm_bus_send_adapter_stop;
    
    // [VmBusSendCloseAdapter@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x375358, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) vm_bus_send_close_adapter;
    
    // [VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37750c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) vm_bus_send_destroy_context;
    
    // [VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3775dc, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) vm_bus_send_destroy_device;
    
    // [VmBusSendDestroyHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3776ac, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) vm_bus_send_destroy_hw_queue;
    
    // [VmBusSendDestroyPagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x377924, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) vm_bus_send_destroy_paging_queue;
    
    // [VmBusSendFlushAdapter@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x378298, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) vm_bus_send_flush_adapter;
    
    // [VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37a4f0, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) vm_bus_send_log_event;
    
    // [VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37f41c, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) vm_bus_send_sync_message;
    
    // [VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x37f820, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) vm_bus_send_sync_or_async_message;
    
    // [CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23323c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x362ac0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x23336c, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) create_vm_bus_channel;
    
    // [DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x23388c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x36322c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2339bc, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) destroy_vm_bus_channel;
    
    // [InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2356f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x365dc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235820, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) invalidate_adapter_work_item;
    
    // [VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237d10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x368f40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x237e40, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) vm_bus_channel_closed;
    
    // [VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x237f10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x369170, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238040, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) vm_bus_channel_opened;
    
    // [VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238040, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3692a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x238170, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) vm_bus_channel_post_started;
    
    // [VmBusChannelProcessPacket@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) vm_bus_channel_process_packet;
    
    // [VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238170, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3693d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2382a0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) vm_bus_channel_started;
    
    // [VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x238290, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3694f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2383c0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) vm_bus_channel_suspend;
    
    // [VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x240f44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x374a40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x241074, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) vm_bus_send_blt;
    
    // [VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x241180, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x374d90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2412b0, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) vm_bus_send_cdd_gdi_command;
    
    // [VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x241428, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x375124, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x241558, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) vm_bus_send_cdd_sync_gpu_access;
    
    // [VmBusSendChangeVideoMemoryReservation@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x241470, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x375218, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2415a0, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) vm_bus_send_change_video_memory_reservation;
    
    // [VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2414fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37541c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24162c, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) vm_bus_send_create_allocation;
    
    // [VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x241d38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x375f4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x241e68, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) vm_bus_send_create_context_virtual;
    
    // [VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x241efc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37617c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24202c, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) vm_bus_send_create_device;
    
    // [VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x241fac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37629c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2420dc, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) vm_bus_send_create_hw_queue;
    
    // [VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2422e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37674c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242418, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) vm_bus_send_create_paging_queue;
    
    // [VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242508, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x376aac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242638, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) vm_bus_send_create_sync_object;
    
    // [VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242628, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x376c70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242758, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) vm_bus_send_ddi_get_node_metadata;
    
    // [VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242724, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x376e08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242854, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) vm_bus_send_ddi_get_standard_allocation_driver_data;
    
    // [VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242968, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37715c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242a98, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) vm_bus_send_ddi_query_adapter_info;
    
    // [VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242a78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x377340, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242ba8, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) vm_bus_send_destroy_allocation;
    
    // [VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x242ec4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x377e24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x242ff4, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) vm_bus_send_escape;
    
    // [VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243088, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x378054, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2431b8, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) vm_bus_send_evict;
    
    // [VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243234, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x378388, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243364, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) vm_bus_send_flush_device;
    
    // [VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243288, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37847c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2433b8, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) vm_bus_send_flush_heap_transitions;
    
    // [VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2432e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x378598, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243418, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) vm_bus_send_free_gpu_virtual_address;
    
    // [VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243350, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x378690, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243480, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) vm_bus_send_get_allocation_priority;
    
    // [VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243664, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3789d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243794, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) vm_bus_send_get_context_scheduling_priority;
    
    // [VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24372c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x378b04, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24385c, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) vm_bus_send_get_device_state;
    
    // [VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243844, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x378ee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243974, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) vm_bus_send_get_driver_store_file;
    
    // [VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243a68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3791c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243b98, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) vm_bus_send_get_internal_adapter_info;
    
    // [VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2439a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x379074, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243ad0, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) vm_bus_send_get_internal_adapter_info19h1;
    
    // [VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243ba8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x379484, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243cd8, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) vm_bus_send_get_next_hard_link;
    
    // [VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x243cd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3795e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x243e08, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) vm_bus_send_get_registry_keys;
    
    // [VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x244140, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x379c0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x244270, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) vm_bus_send_is_sync_object_signaled;
    
    // [VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2441c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x379d24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2442f0, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) vm_bus_send_lock2;
    
    // [VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x244728, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37a6f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x244858, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) vm_bus_send_make_resident;
    
    // [VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x244910, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37a970, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x244a40, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) vm_bus_send_map_gpu_virtual_address;
    
    // [VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x244a2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37ab50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x244b5c, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) vm_bus_send_mark_device_as_error;
    
    // [VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x244ac8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37ae34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x244bf8, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) vm_bus_send_offer_allocations;
    
    // [VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x244e50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37b2bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x244f80, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) vm_bus_send_open_adapter;
    
    // [VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24511c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37b6c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24524c, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) vm_bus_send_open_resource;
    
    // [VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2455a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37bdd4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2456d4, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) vm_bus_send_query_adapter_info;
    
    // [VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2456e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37bf98, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x245810, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) vm_bus_send_query_allocation_residency;
    
    // [VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x245b54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37c558, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x245c84, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) vm_bus_send_query_clock_calibration;
    
    // [VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x245c94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37c770, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x245dc4, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) vm_bus_send_query_statistics;
    
    // [VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x245e64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37c964, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x245f94, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) vm_bus_send_query_video_memory_info;
    
    // [VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x245f44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37cab0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246074, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) vm_bus_send_reclaim_allocations;
    
    // [VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x246420, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37d04c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246550, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) vm_bus_send_reserve_gpu_virtual_address;
    
    // [VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x246510, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37d1e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246640, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) vm_bus_send_set_allocation_priority;
    
    // [VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x246808, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37d508, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246938, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) vm_bus_send_set_context_scheduling_priority;
    
    // [VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2468f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37d74c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246a20, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) vm_bus_send_set_queued_limit;
    
    // [VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2469d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37d88c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246b04, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) vm_bus_send_set_redirected_flip_fence_value;
    
    // [VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x246ad8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37db08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246c08, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) vm_bus_send_signal_fence_nt_shared_by_ref;
    
    // [VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x246b7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37dc50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x246cac, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) vm_bus_send_signal_sync_object;
    
    // [VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x247280, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37e578, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2473b0, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) vm_bus_send_submit_command;
    
    // [VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x247844, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37ebb0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x247974, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) vm_bus_send_submit_command_to_hw_queue;
    
    // [VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd3ef4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37f0a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd408c, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) vm_bus_send_submit_present_history_token;
    
    // [VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x247cac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37f1d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x247ddc, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) vm_bus_send_submit_vail_present_history_token;
    
    // [VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2481f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37f880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x248328, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) vm_bus_send_unlock2;
    
    // [VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24844c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37fc00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24857c, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) vm_bus_send_update_allocation_property;
    
    // [VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x248548, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37fda8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x248678, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) vm_bus_send_update_gpu_virtual_address;
    
    // [VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24896c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x380420, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x248a9c, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) vm_bus_send_wait_for_sync_object_from_cpu;
    
    // [VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x248d8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3808ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x248ebc, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) vm_bus_send_wait_for_sync_object_from_gpu;
};
#include "magic/api.end.hpp"
