#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/recovery_context_t.hpp"

#include "magic/api.start.hpp"
namespace hvl
{
    // [HvlCalculateLivedumpBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1c4ebc, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) calculate_livedump_buffer_size;
    
    // [HvlChangeIsolatedMemoryVisibility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x662c58, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) change_isolated_memory_visibility;
    
    // [HvlConfigureDynamicMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x662978, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) configure_dynamic_memory;
    
    // [HvlDmaConfigureDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52fcb0, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) dma_configure_device_domain;
    
    // [HvlDmaFlushDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52fe40, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) dma_flush_device_domain;
    
    // [HvlDmaFlushDeviceDomainVaList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52fed0, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) dma_flush_device_domain_va_list;
    
    // [HvlDmaGetHybridPassthroughReservedRegions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52fff0, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) dma_get_hybrid_passthrough_reserved_regions;
    
    // [HvlFlushSingleTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1c4188, 0x32828 bytes
    //
    _m7(sdk::unknown_ptr) flush_single_tb;
    
    // [HvlGetApicIdFromLpIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52d550, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) get_apic_id_from_lp_index;
    
    // [HvlGetDeviceCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5309a0, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) get_device_capabilities;
    
    // [HvlGetEncryptedDataDomains]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14ab24, 0x32828 bytes
    //
    _n0(sdk::unknown_ptr) get_encrypted_data_domains;
    
    // [HvlGetHypervisorEncryptionDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x130438, 0x32828 bytes
    //
    _n1(sdk::unknown_ptr) get_hypervisor_encryption_domain;
    
    // [HvlIsAnyHypervisorPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe .text:0x4eba10, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) is_any_hypervisor_present;
    
    // [HvlIsPartitionCpuManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe .text:0x3a2ca0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) is_partition_cpu_manager;
    
    // [HvlIsSchedulerAssistAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52f9f0, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) is_scheduler_assist_available;
    
    // [HvlIsSingleGroupRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3de79c, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) is_single_group_required;
    
    // [HvlNmiCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1c335c, 0x32828 bytes
    //
    _n6(sdk::unknown_ptr) nmi_callback_routine;
    
    // [HvlQueryDmaProtectionInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6255e8, 0x32828 bytes
    //
    _n7(sdk::unknown_ptr) query_dma_protection_info;
    
    // [HvlQueryHvHwpPerfSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x533c30, 0x1fd000 bytes
    //
    _n8(sdk::unknown_ptr) query_hv_hwp_perf_support;
    
    // [HvlQueryMinrootInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52d6b0, 0x1fd000 bytes
    //
    _n9(sdk::unknown_ptr) query_minroot_info;
    
    // [HvlQuerySetBootPagesInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x93c5c4, 0x1fd000 bytes
    //
    _o0(sdk::unknown_ptr) query_set_boot_pages_info;
    
    // [HvlRequestProcessorHalt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x533d40, 0x1fd000 bytes
    //
    _o1(sdk::unknown_ptr) request_processor_halt;
    
    // [HvlRestoreTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4221d0, 0x1fd000 bytes
    //
    _o2(sdk::unknown_ptr) restore_time;
    
    // [HvlResumeFromRootCrashdump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x531d54, 0x1fd000 bytes
    //
    _o3(sdk::unknown_ptr) resume_from_root_crashdump;
    
    // [HvlRouteInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1bdf64, 0x32828 bytes
    //
    _o4(sdk::unknown_ptr) route_interrupt;
    
    // [HvlSchedulerAssistAcknowledgeEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52fa10, 0x1fd000 bytes
    //
    _o5(sdk::unknown_ptr) scheduler_assist_acknowledge_events;
    
    // [HvlSetDeviceAtsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5320a0, 0x1fd000 bytes
    //
    _o6(sdk::unknown_ptr) set_device_ats_enabled;
    
    // [HvlSetDeviceCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x532170, 0x1fd000 bytes
    //
    _o7(sdk::unknown_ptr) set_device_capabilities;
    
    // [HvlSetGuestSchedulerEventRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52dba0, 0x1fd000 bytes
    //
    _o8(sdk::unknown_ptr) set_guest_scheduler_event_register;
    
    // [HvlSetLogicalProcessorHwpRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x533d90, 0x1fd000 bytes
    //
    _o9(sdk::unknown_ptr) set_logical_processor_hwp_request;
    
    // [HvlSkNmiCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1c3420, 0x32828 bytes
    //
    _p0(sdk::unknown_ptr) sk_nmi_callback_routine;
    
    // [HvlUnblockDefaultDma]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x532e80, 0x1fd000 bytes
    //
    _p1(sdk::unknown_ptr) unblock_default_dma;
    
    // [HvlSetEnlightenmentInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88ba00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x88a1b0, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) set_enlightenment_info;
    
    // [HvlConfigureMemoryZeroingOnReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4eb6ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cb4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb5cc, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) configure_memory_zeroing_on_reset;
    
    // [HvlConfigurePcc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1bdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f19f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f18b4, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) configure_pcc;
    
    // [HvlConfigurePerfStateCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1c28, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1930, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) configure_perf_state_cap;
    
    // [HvlConfigurePerfStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1c58, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1ad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1990, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) configure_perf_states;
    
    // [HvlConfigureThrottleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1cec, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f19f0, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) configure_throttle_states;
    
    // [HvlCrashdumpCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f2e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5348d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2bc0, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) crashdump_callback_routine;
    
    // [HvlDmaAllocateDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ee370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52fb20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ee230, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) dma_allocate_device_domain;
    
    // [HvlDmaAttachDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ee420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52fbf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ee2e0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) dma_attach_device_domain;
    
    // [HvlDmaDeleteDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ee530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52fd50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ee3f0, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) dma_delete_device_domain;
    
    // [HvlDmaDetachDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ee5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52fde0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ee480, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) dma_detach_device_domain;
    
    // [HvlDmaGetDmaGuardEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ee630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52fef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ee4f0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) dma_get_dma_guard_enabled;
    
    // [HvlDmaMapDeviceLogicalRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ee730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ee5f0, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) dma_map_device_logical_range;
    
    // [HvlDmaMapDeviceSparsePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ee9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5303f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ee890, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) dma_map_device_sparse_pages;
    
    // [HvlDmaUnmapDeviceLogicalRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4eebe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eeaa0, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) dma_unmap_device_logical_range;
    
    // [HvlDmaUnmapDeviceSparsePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4eed10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eebd0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) dma_unmap_device_sparse_pages;
    
    // [HvlGetImplementedPhysicalBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a3f40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad0ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a98c0, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) get_implemented_physical_bits;
    
    // [HvlGetLpIndexFromProcessorIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebf70, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) get_lp_index_from_processor_index;
    
    // [HvlGetQpcBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3615c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3913f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3629e0, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) get_qpc_bias;
    
    // [HvlGetSharedPageVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26e580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37b2b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2deb80, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) get_shared_page_va;
    
    // [HvlGetSparseGpaPagesAccessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c491c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x662d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c377c, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) get_sparse_gpa_pages_access_state;
    
    // [HvlGetStatsUpdateCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f1cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5336d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1b70, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) get_stats_update_counter;
    
    // [HvlIsCoreSharingPossible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4eba28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52ce80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb8f0, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) is_core_sharing_possible;
    
    // [HvlIsHypervisorPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a3160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208c50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4690, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) is_hypervisor_present;
    
    // [HvlIsRootPowerSchedulerQosPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4eba84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cedc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb94c, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) is_root_power_scheduler_qos_present;
    
    // [HvlIsStibpPairingRecommended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4eba94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52ceec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb95c, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) is_stibp_pairing_recommended;
    
    // [HvlMapSparseGpaPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c4bc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x66305c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c3a28, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) map_sparse_gpa_pages;
    
    // [HvlNotifyAllProcessorsStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4efbdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531744, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4efa9c, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) notify_all_processors_started;
    
    // [HvlNotifyPageHeat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c46a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6631bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c3500, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) notify_page_heat;
    
    // [HvlQueryL1tfMitigationInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ebba8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d134, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eba70, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) query_l1tf_mitigation_information;
    
    // [HvlQueryStartedProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52da60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec300, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) query_started_processors;
    
    // [HvlQueryVsmProtectionInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88b894, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7164, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a044, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) query_vsm_protection_info;
    
    // [HvlReadPerfIoPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52daf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec390, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) read_perf_io_port;
    
    // [HvlReadPerfMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52db70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec410, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) read_perf_msr;
    
    // [HvlRegisterDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f0060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531bd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eff20, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) register_device_id;
    
    // [HvlRegisterLogicalProcessorFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f20fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533c44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1fbc, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) register_logical_processor_frequency;
    
    // [HvlSetApicVirtualizationAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ebdf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d37c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebcb8, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) set_apic_virtualization_available;
    
    // [HvlSetHardwareMbecAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ebe08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebcc8, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) set_hardware_mbec_available;
    
    // [HvlSetQpcBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f06c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0580, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) set_qpc_bias;
    
    // [HvlSetRootFaultReportingReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eac20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5324e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebd20, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) set_root_fault_reporting_ready;
    
    // [HvlSetupPhysicalFaultNotificationQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52dbc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec440, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) setup_physical_fault_notification_queue;
    
    // [HvlSharedIsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ebe20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebce0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) shared_isr;
    
    // [HvlSkCrashdumpCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f2fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2d90, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) sk_crashdump_callback_routine;
    
    // [HvlSvmGetDeviceCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c11c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0cf0, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) svm_get_device_capabilities;
    
    // [HvlSvmSetDeviceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c147c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0ff0, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) svm_set_device_enabled;
    
    // [HvlUnregisterDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f1310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f11d0, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) unregister_device_id;
    
    // [HvlUpdateMicrocodeDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88bd60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93cbd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a510, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) update_microcode_database;
    
    // [HvlUpdatePerformanceStateCountersForLp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38ba80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3960b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38cb20, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) update_performance_state_counters_for_lp;
    
    // [HvlWritePerfIoPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec6c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52dd00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec580, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) write_perf_io_port;
    
    // [HvlWritePerfMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52dd70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec5f0, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) write_perf_msr;
    
    // [HvlAddPagesCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2e88, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f25c0, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) add_pages_callback_routine;
    
    // [HvlAddSecureHvPagesCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f28d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2690, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) add_secure_hv_pages_callback_routine;
    
    // [HvlAddSecurePagesCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2f58, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f28f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534388, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f26b0, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) add_secure_pages_callback_routine;
    
    // [HvlAddSecureSkPagesCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c30b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2b20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5345b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f28e0, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) add_secure_sk_pages_callback_routine;
    
    // [HvlBugCheckCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c30cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2900, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) bug_check_callback_routine;
    
    // [HvlCalculateLivedumpSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3108, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2940, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) calculate_livedump_size;
    
    // [HvlCollectLivedump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3170, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2c38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534724, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f29f8, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) collect_livedump;
    
    // [HvlConfigureIdleStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1b5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1964, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5334e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1824, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) configure_idle_states;
    
    // [HvlCrashdumpGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280628, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32f00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e928, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33240, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) crashdump_guid;
    
    // [HvlDebuggerSupportInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14aa94, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca4cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9c64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb5cc, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) debugger_support_initialize;
    
    // [HvlDeleteProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88bb10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c84c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a2c0, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) delete_processor;
    
    // [HvlDisableEnlightenment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdb14, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb71c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cb7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb5fc, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) disable_enlightenment;
    
    // [HvlDiscardPagesFromHibernation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1d8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1b6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53358c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1a2c, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) discard_pages_from_hibernation;
    
    // [HvlDiscardSecurePagesFromHibernation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1de8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1bd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5335f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1a94, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) discard_secure_pages_from_hibernation;
    
    // [HvlDummyInterruptCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb620, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) dummy_interrupt_callback;
    
    // [HvlEnableIdleYield]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa039, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa042, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c063, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa043, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) enable_idle_yield;
    
    // [HvlEnableVsmCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9abc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70f90, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60f5c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa70240, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) enable_vsm_calls;
    
    // [HvlEndSystemInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157c90, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f01a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1a80, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) end_system_interrupt;
    
    // [HvlEnlightenProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a558, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2f08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4438, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) enlighten_processor;
    
    // [HvlEnlightenments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab224, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb41c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da28, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb41c, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) enlightenments;
    
    // [HvlEnterSleepState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bf84c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eeee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eeda0, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) enter_sleep_state;
    
    // [HvlFlushAddressSpaceTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4144, 0x32828 bytes
    // ntoskrnl.exe .text:0x38bcfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395cb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38cd9c, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) flush_address_space_tb;
    
    // [HvlFlushRangeListTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4158, 0x32828 bytes
    // ntoskrnl.exe .text:0x38b86c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c90c, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) flush_range_list_tb;
    
    // [HvlGetCoverageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdb2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb758, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cbb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb638, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) get_coverage_data;
    
    // [HvlGetCoverageInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdc68, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb8b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cd18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb790, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) get_coverage_info;
    
    // [HvlGetEncryptedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3318, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2c30, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) get_encrypted_data;
    
    // [HvlGetEnlightenmentInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bf8c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eef70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eee30, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) get_enlightenment_info;
    
    // [HvlGetLpIndexFromApicId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be0a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebf40, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) get_lp_index_from_apic_id;
    
    // [HvlGetPpmStatsForProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1eb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x389804, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391da4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a8a0, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) get_ppm_stats_for_processor;
    
    // [HvlGetProcessorIndexFromVpIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2bec, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4880, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) get_processor_index_from_vp_index;
    
    // [HvlGetReferenceTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfbb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x38989c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391e3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a938, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) get_reference_time;
    
    // [HvlGetReferenceTimeUsingTscPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfbe4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3898d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a970, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) get_reference_time_using_tsc_page;
    
    // [HvlGlobalSystemEventsGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280638, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33000, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ea08, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33340, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) global_system_events_guid;
    
    // [HvlGlobalSystemEventsHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c340, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c320, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) global_system_events_handle;
    
    // [HvlHalGetVpIndexFromApicId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfc4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef220, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) hal_get_vp_index_from_apic_id;
    
    // [HvlHalStartVirtualProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfc6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef250, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) hal_start_virtual_processor;
    
    // [HvlHalVpStartEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfc74, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef3c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef280, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) hal_vp_start_enabled;
    
    // [HvlHvDebuggerPowerHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfc94, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef3f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x530fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef2b0, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) hv_debugger_power_handler;
    
    // [HvlHyperVRootPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3d8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5fb, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc1e, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5fb, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) hyper_v_root_partition;
    
    // [HvlHypervisorConnected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab221, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb40a, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da2c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb40a, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) hypervisor_connected;
    
    // [HvlInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x551328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77cbbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x831f3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7818cc, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) initialize_processor;
    
    // [HvlInvokeHypervisorDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdd5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52ce30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb8a0, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) invoke_hypervisor_debugger;
    
    // [HvlInvokeWheaErrorNotificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfd14, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef350, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) invoke_whea_error_notification_callback;
    
    // [HvlIsHypercallOverlayLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdda4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eba70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cec8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb938, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) is_hypercall_overlay_locked;
    
    // [HvlIterateSecurePagesForHibernation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1f78, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1bc0, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) iterate_secure_pages_for_hibernation;
    
    // [HvlLogGuestCrashInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bddb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ebae4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cf3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb9ac, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) log_guest_crash_information;
    
    // [HvlLongSpinCountMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1c4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa240, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c284, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa240, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) long_spin_count_mask;
    
    // [HvlLpGetMachineCheckContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfd34, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef4c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef380, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) lp_get_machine_check_context;
    
    // [HvlLpReadCpuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfd94, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef410, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) lp_read_cpuid;
    
    // [HvlLpReadMultipleMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bfe88, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef510, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) lp_read_multiple_msr;
    
    // [HvlLpWriteMultipleMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bffb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef650, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) lp_write_multiple_msr;
    
    // [HvlLpWritebackInvalidate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0098, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef740, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) lp_writeback_invalidate;
    
    // [HvlMapDeviceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0124, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ef910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5314d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ef7d0, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) map_device_interrupt;
    
    // [HvlMapGpaPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23c598, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c4a74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x662ee8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c38d4, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) map_gpa_pages;
    
    // [HvlMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1247c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5337f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1c90, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) mark_hiber_phase;
    
    // [HvlNotifyAcpiReenabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2010, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1e08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533828, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1cc8, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) notify_acpi_reenabled;
    
    // [HvlNotifyDebugDeviceAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c03b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4efc60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5317d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4efb20, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) notify_debug_device_available;
    
    // [HvlNotifyHpetEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0464, 0x32828 bytes
    // ntoskrnl.exe .text:0x4efd20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5318a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4efbe0, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) notify_hpet_enabled;
    
    // [HvlNotifyLongSpinWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be0cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x38ba50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38caf0, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) notify_long_spin_wait;
    
    // [HvlNotifyRootCrashdump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c04e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4efdb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531938, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4efc74, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) notify_root_crashdump;
    
    // [HvlParkedVirtualProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2068, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533894, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1d30, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) parked_virtual_processors;
    
    // [HvlPartitionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab660, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba08, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df70, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfba08, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) partition_id;
    
    // [HvlPerformEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c057c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4efe60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4efd20, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) perform_end_of_interrupt;
    
    // [HvlPhase0Initialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56dcf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835318, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77f19c, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) phase0_initialize;
    
    // [HvlPhase2Initialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a81c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9c38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cab28, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) phase2_initialize;
    
    // [HvlPrepareForHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c20d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533a30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1dd0, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) prepare_for_hibernate;
    
    // [HvlPrepareForRootCrashdump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0590, 0x32828 bytes
    // ntoskrnl.exe .text:0x4efe7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5319c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4efd3c, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) prepare_for_root_crashdump;
    
    // [HvlPrepareForSecureHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c21e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2034, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533b58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1ef4, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) prepare_for_secure_hibernate;
    
    // [HvlPrepareLivedumpDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c33bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2ed4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5349a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2c94, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) prepare_livedump_descriptor;
    
    // [HvlQueryActiveHypervisorProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be0f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebfc0, 0x1fe000 bytes
    //
    _b1(sdk::function<int32_t(uint32_t*)>*) query_active_hypervisor_processor_count;
    
    // [HvlQueryActiveProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be10c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d5e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebff0, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) query_active_processors;
    
    // [HvlQueryAssociatedProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0630, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eff40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4efe00, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) query_associated_processors;
    
    // [HvlQueryConnection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ba04, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a48b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c38e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aada0, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) query_connection;
    
    // [HvlQueryDetailInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6254d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b778, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c4a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889f28, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) query_detail_info;
    
    // [HvlQueryEnlightenmentInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570798, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b486c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc4ac, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) query_enlightenment_info;
    
    // [HvlQueryHypervisorProcessorNodeNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be170, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec1c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec080, 0x1fe000 bytes
    //
    _b7(sdk::function<int32_t(uint32_t, wchar_t*)>*) query_hypervisor_processor_node_number;
    
    // [HvlQueryHypervisorTscAdjustment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1123e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37ed88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d038, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37fb90, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) query_hypervisor_tsc_adjustment;
    
    // [HvlQueryNumaDistance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be1ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec0c0, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) query_numa_distance;
    
    // [HvlQueryProcessorTopology]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be290, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec1d0, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) query_processor_topology;
    
    // [HvlQueryProcessorTopologyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be2a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec1f0, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) query_processor_topology_count;
    
    // [HvlQueryProcessorTopologyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be2d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec230, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) query_processor_topology_ex;
    
    // [HvlQueryProcessorTopologyHighestId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be34c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52da20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec2c0, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) query_processor_topology_highest_id;
    
    // [HvlQueryVsmConnection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9d48, 0x32828 bytes
    // ntoskrnl.exe .text:0x284c78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20f278, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32bbe8, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) query_vsm_connection;
    
    // [HvlReadPerformanceStateCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2284, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3977d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d650, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) read_performance_state_counters;
    
    // [HvlRegisterInterruptCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bde60, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ebc50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d1d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebb10, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) register_interrupt_callback;
    
    // [HvlRegisterPerfFeedbackCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c230c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2154, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533c9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2014, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) register_perf_feedback_counters;
    
    // [HvlRegisterWheaErrorNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6256a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88b9c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a170, 0x1fe000 bytes
    //
    _c8(sdk::function<int32_t(sdk::function<int32_t(struct whea::recovery_context_t*, uint8_t, uint8_t)>*)>*) register_whea_error_notification;
    
    // [HvlRescindEnlightenments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16eef8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2717e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385bfc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323378, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) rescind_enlightenments;
    
    // [HvlResetCoverageVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdea4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ebcac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d22c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebb6c, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) reset_coverage_vector;
    
    // [HvlRestoreEnlightenment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16eeb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ebd80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d304, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebc40, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) restore_enlightenment;
    
    // [HvlResumePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0724, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f00c0, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) resume_partition;
    
    // [HvlRetargetDeviceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c072c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x531e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f00e0, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) retarget_device_interrupt;
    
    // [HvlSendSyntheticClusterIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0958, 0x32828 bytes
    // ntoskrnl.exe .text:0x38bd40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3960f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38cde0, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) send_synthetic_cluster_ipi;
    
    // [HvlSetHpetConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c09e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0340, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) set_hpet_config;
    
    // [HvlSetPartitionProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0b60, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0628, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5323a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f04e8, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) set_partition_property;
    
    // [HvlSetPlatformIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2388, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f21ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533de8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f20ac, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) set_platform_idle_state;
    
    // [HvlSetSystemMachineCheckProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0be0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0620, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) set_system_machine_check_property;
    
    // [HvlSetSystemSleepProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0c6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f06c0, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) set_system_sleep_property;
    
    // [HvlSetupLiveDumpBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4f10, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f59b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5372a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f5770, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) setup_live_dump_buffer;
    
    // [HvlSkBugCheckCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c33f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2d50, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) sk_bug_check_callback_routine;
    
    // [HvlSkCrashdumpGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280618, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x32f10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e938, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33250, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) sk_crashdump_guid;
    
    // [HvlStartBootLogicalProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a32c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af774, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b6c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ab1d4, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) start_boot_logical_processors;
    
    // [HvlSuspendPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0d14, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f08c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5326d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0780, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) suspend_partition;
    
    // [HvlSvmAcknowledgePageRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0d20, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f08e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5326f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f07a0, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) svm_acknowledge_page_request;
    
    // [HvlSvmAttachPasidSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0db4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0850, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) svm_attach_pasid_space;
    
    // [HvlSvmClearPrqStalled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0e8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0940, 0x1fe000 bytes
    //
    _e7(sdk::unknown_ptr) svm_clear_prq_stalled;
    
    // [HvlSvmCreatePasidSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5328f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f09a0, 0x1fe000 bytes
    //
    _e8(sdk::unknown_ptr) svm_create_pasid_space;
    
    // [HvlSvmCreatePrQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c0f4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0a20, 0x1fe000 bytes
    //
    _e9(sdk::unknown_ptr) svm_create_pr_queue;
    
    // [HvlSvmDeletePrQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1044, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0b00, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) svm_delete_pr_queue;
    
    // [HvlSvmDetachPasidSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1084, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0b50, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) svm_detach_pasid_space;
    
    // [HvlSvmDisablePasid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c10f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0bd0, 0x1fe000 bytes
    //
    _f2(sdk::unknown_ptr) svm_disable_pasid;
    
    // [HvlSvmEnablePasid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1134, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532b70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0c30, 0x1fe000 bytes
    //
    _f3(sdk::unknown_ptr) svm_enable_pasid;
    
    // [HvlSvmFlushPasid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c11a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0cb0, 0x1fe000 bytes
    //
    _f4(sdk::unknown_ptr) svm_flush_pasid;
    
    // [HvlSvmGetSystemCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c12f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f0f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f0e40, 0x1fe000 bytes
    //
    _f5(sdk::unknown_ptr) svm_get_system_capabilities;
    
    // [HvlSvmSetPasidAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c150c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f11e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f10a0, 0x1fe000 bytes
    //
    _f6(sdk::unknown_ptr) svm_set_pasid_address_space;
    
    // [HvlSwitchToVsmVtl1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157cc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3f01d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1ab0, 0x1fe000 bytes
    //
    _f7(sdk::unknown_ptr) switch_to_vsm_vtl1;
    
    // [HvlSwitchVirtualAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c41f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4b20, 0x1fe000 bytes
    //
    _f8(sdk::function<void(uint64_t)>*) switch_virtual_address_space;
    
    // [HvlUnmapDeviceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c157c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x532f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1120, 0x1fe000 bytes
    //
    _f9(sdk::unknown_ptr) unmap_device_interrupt;
    
    // [HvlUnregisterInterruptCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdf74, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ebee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebda0, 0x1fe000 bytes
    //
    _g0(sdk::unknown_ptr) unregister_interrupt_callback;
    
    // [HvlUnregisterWheaErrorNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6256dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88ba40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a1f0, 0x1fe000 bytes
    //
    _g1(sdk::function<int32_t(sdk::function<int32_t(struct whea::recovery_context_t*, uint8_t, uint8_t)>*)>*) unregister_whea_error_notification;
    
    // [HvlVpStartDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323120, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47444, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5efcc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47404, 0x1fe000 bytes
    //
    _g2(sdk::unknown_ptr) vp_start_disabled;
    
    // [HvlWheaInUsePageOfflineNotificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdf90, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ebf10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d3c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebdd0, 0x1fe000 bytes
    //
    _g3(sdk::unknown_ptr) whea_in_use_page_offline_notification_callback;
    
    // [HvlWriteApicCommandRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16eed8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3615e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362a00, 0x1fe000 bytes
    //
    _g4(sdk::unknown_ptr) write_apic_command_register;
};
#include "magic/api.end.hpp"
