#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace hvlp
{
    // [HvlpAffinityToVirtualAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1c2d5c, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) affinity_to_virtual_affinity;
    
    // [HvlpAllPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5ee79, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) all_pages;
    
    // [HvlpAllSkPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5ee78, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) all_sk_pages;
    
    // [HvlpAllocateEarlyPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1c2da0, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) allocate_early_pages;
    
    // [HvlpBootPagesInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5efe0, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) boot_pages_info;
    
    // [HvlpDetectHypervisorSchedulerType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe .text:0x4f2700, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) detect_hypervisor_scheduler_type;
    
    // [HvlpEndPageListIteration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x536e98, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) end_page_list_iteration;
    
    // [HvlpForceAllPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5efb8, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) force_all_pages;
    
    // [HvlpGetLpIndexFromProcessorIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1be9a8, 0x32828 bytes
    //
    _m8(sdk::unknown_ptr) get_lp_index_from_processor_index;
    
    // [HvlpGetNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x16eec8, 0x32828 bytes
    //
    _m9(sdk::unknown_ptr) get_node;
    
    // [HvlpGetSecurePageList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1c4bfc, 0x32828 bytes
    //
    _n0(sdk::unknown_ptr) get_secure_page_list;
    
    // [HvlpGetVpRegisterSelfFast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23c408, 0x32828 bytes
    //
    _n1(sdk::unknown_ptr) get_vp_register_self_fast;
    
    // [HvlpMapEarlyPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1c2e5c, 0x32828 bytes
    //
    _n2(sdk::unknown_ptr) map_early_pages;
    
    // [HvlpMaximumProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab674, 0x32828 bytes
    //
    _n3(sdk::unknown_ptr) maximum_processors;
    
    // [HvlpNodeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab484, 0x32828 bytes
    //
    _n4(sdk::unknown_ptr) node_count;
    
    // [HvlpNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ae180, 0x32828 bytes
    //
    _n5(sdk::unknown_ptr) nodes;
    
    // [HvlpQueryApicIdAndNumaNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1bed10, 0x32828 bytes
    //
    _n6(sdk::unknown_ptr) query_apic_id_and_numa_node;
    
    // [HvlpWithdrawPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x52f724, 0x1fd000 bytes
    //
    _n7(sdk::unknown_ptr) withdraw_pages;
    
    // [HvlpCondenseMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88bd88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x88a538, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) condense_microcode;
    
    // [HvlpQueryHypervisorSchedulerType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52fa34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebda0, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) query_hypervisor_scheduler_type;
    
    // [HvlpActiveProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5bc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dba4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5bc, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) active_processor_count;
    
    // [HvlpAddPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23c494, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c456c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5c33cc, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) add_physical_memory;
    
    // [HvlpAllowFastFlushList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4214, 0x32828 bytes
    // ntoskrnl.exe .text:0x38bebc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38cf5c, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) allow_fast_flush_list;
    
    // [HvlpAttachRootSvmDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1618, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1378, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1238, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) attach_root_svm_device;
    
    // [HvlpCompareActiveLpcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ec940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52dda0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec800, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) compare_active_lpcbs;
    
    // [HvlpConfigureLegacyPowerPolicySetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c23c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2100, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) configure_legacy_power_policy_setting;
    
    // [HvlpDetachRootSvmDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c16d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f12f0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) detach_root_svm_device;
    
    // [HvlpDynamicUpdateMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88bdfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93cbe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a5ac, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) dynamic_update_microcode;
    
    // [HvlpFastFlushAddressSpaceTbEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f4d94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5367b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4b54, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) fast_flush_address_space_tb_ex;
    
    // [HvlpGetLpcbByLpIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38c618, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397828, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d6a8, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) get_lpcb_by_lp_index;
    
    // [HvlpGetVtlCallVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c44bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6628c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c331c, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) get_vtl_call_va;
    
    // [HvlpGuestStateScrubbingStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb478, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1daa4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb478, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) guest_state_scrubbing_status;
    
    // [HvlpHandleInsufficientMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ebf88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d438, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebe48, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) handle_insufficient_memory;
    
    // [HvlpHandleIommuFaultMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f3614, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53513c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f33d4, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) handle_iommu_fault_message;
    
    // [HvlpHibernateScratchPageCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47440, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5efc8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47400, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) hibernate_scratch_page_count;
    
    // [HvlpHvStatusIsInsufficientMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f4cd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d9ce, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4a98, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) hv_status_is_insufficient_memory;
    
    // [HvlpInitializeHvCrashdumpPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f35c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5350e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3380, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) initialize_hv_crashdump_phase2;
    
    // [HvlpInitializePartitionInfoPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) initialize_partition_info_page;
    
    // [HvlpInitializeSvmIommuSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f36ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5351d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f346c, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) initialize_svm_iommu_support;
    
    // [HvlpIommuPrqDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f37d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5352d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3590, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) iommu_prq_dpc_routine;
    
    // [HvlpLegacyPowerPolicySettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c24fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f23b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2270, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) legacy_power_policy_setting_callback;
    
    // [HvlpLegacyPowerSettingList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2560, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96cf0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa95ee0, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) legacy_power_setting_list;
    
    // [HvlpLogGuestStateScrubbingStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f3a88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5354dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3848, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) log_guest_state_scrubbing_status;
    
    // [HvlpLogIommuEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3c00, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f3dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3b90, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) log_iommu_event;
    
    // [HvlpLogMicrocodeUpdateStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88ba74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c7c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a224, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) log_microcode_update_status;
    
    // [HvlpMinrootConfigurationError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb43d, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da4c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb43d, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) minroot_configuration_error;
    
    // [HvlpPhase0Enlightenments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f4890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536304, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f465c, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) phase0_enlightenments;
    
    // [HvlpProcessIommuPrq]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f38b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3670, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) process_iommu_prq;
    
    // [HvlpQueryExtendedCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f49ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4778, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) query_extended_capabilities;
    
    // [HvlpRootSchedulerEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb5b3, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db54, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b3, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) root_scheduler_enabled;
    
    // [HvlpSchedulerType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb620, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc80, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb620, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) scheduler_type;
    
    // [HvlpSetupSchedulerAssist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ee010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52f444, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eded0, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) setup_scheduler_assist;
    
    // [HvlpSlowFlushAddressSpaceTbEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f5108, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536b4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4ec8, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) slow_flush_address_space_tb_ex;
    
    // [HvlpStartPageListIteration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4dfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f584c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f560c, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) start_page_list_iteration;
    
    // [HvlpSwitchToVsmVtl1RetpolineHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3f0320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1c00, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) switch_to_vsm_vtl1_retpoline_helper;
    
    // [HvlpVtlCallExceptionHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4f4d2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4aec, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) vtl_call_exception_handler;
    
    // [HvlpAcquireHypercallPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be37c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec620, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) acquire_hypercall_page;
    
    // [HvlpAffinityToHvProcessorSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2c54, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5365a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f48f0, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) affinity_to_hv_processor_set;
    
    // [HvlpAllocateOverlayPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2da8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4c4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5366cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4a0c, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) allocate_overlay_pages;
    
    // [HvlpAllocatePageListResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625908, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88bee8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93cce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a698, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) allocate_page_list_resources;
    
    // [HvlpCheckTscSync]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3938, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f3900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f36c0, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) check_tsc_sync;
    
    // [HvlpComponentName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa324, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa350, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c454, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa350, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) component_name;
    
    // [HvlpComputeLpComparisonMetrics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be4f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52ddd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec840, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) compute_lp_comparison_metrics;
    
    // [HvlpCopyFlushVaList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4238, 0x32828 bytes
    // ntoskrnl.exe .text:0x38be6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396058, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38cf0c, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) copy_flush_va_list;
    
    // [HvlpCoreCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab51c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb930, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1defc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb930, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) core_count;
    
    // [HvlpCountFlushVaList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c42f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x38bee8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38cf88, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) count_flush_va_list;
    
    // [HvlpCpuVendor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2d4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb536, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db55, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb536, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) cpu_vendor;
    
    // [HvlpCrashdumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x322fe0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ee80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc472c0, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) crashdump_data;
    
    // [HvlpCrashdumpIterationState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3230e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47400, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ef80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc473c0, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) crashdump_iteration_state;
    
    // [HvlpDepositPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be67c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ecb28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52df64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ec9e8, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) deposit_pages;
    
    // [HvlpDetermineEnlightenments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2860, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f43e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535e54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f41a4, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) determine_enlightenments;
    
    // [HvlpDiscoverTopologyAmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bacd0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8da4c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7ecd4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8cccc, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) discover_topology_amd;
    
    // [HvlpDiscoverTopologyComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7badbc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8db7c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7edf4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8cdfc, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) discover_topology_complete;
    
    // [HvlpDiscoverTopologyIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7baec4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8dc98, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7ef10, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8cf18, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) discover_topology_intel;
    
    // [HvlpDiscoverTopologyLocal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62584c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88bca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a450, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) discover_topology_local;
    
    // [HvlpEndSecurePageListIteration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4ab4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f55bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536ec4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f537c, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) end_secure_page_list_iteration;
    
    // [HvlpEnlightenments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab31c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb57c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbe0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb57c, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) enlightenments;
    
    // [HvlpEtwRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3a60, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f3a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535494, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3800, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) etw_register;
    
    // [HvlpFallbackScratchPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323108, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47430, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5efb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc473f0, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) fallback_scratch_page;
    
    // [HvlpFastAcknowledgePageRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1730, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f14a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1360, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) fast_acknowledge_page_request;
    
    // [HvlpFastFlushAddressSpaceTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4338, 0x32828 bytes
    // ntoskrnl.exe .text:0x38bba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395cf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38cc40, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) fast_flush_address_space_tb;
    
    // [HvlpFastFlushListTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4398, 0x32828 bytes
    // ntoskrnl.exe .text:0x38b954, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c9f4, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) fast_flush_list_tb;
    
    // [HvlpFastFlushListTbEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4464, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4c10, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) fast_flush_list_tb_ex;
    
    // [HvlpFastFlushPasidAddressList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1778, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f14fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533068, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f13bc, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) fast_flush_pasid_address_list;
    
    // [HvlpFastSendSyntheticClusterIpiEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1818, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f15bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533128, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f147c, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) fast_send_synthetic_cluster_ipi_ex;
    
    // [HvlpFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab20c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb40c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da10, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb40c, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) flags;
    
    // [HvlpFlushPasidAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c18ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1664, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5331d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1524, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) flush_pasid_address_space;
    
    // [HvlpFlushRangeListTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4580, 0x32828 bytes
    // ntoskrnl.exe .text:0x38b8bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c95c, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) flush_range_list_tb;
    
    // [HvlpFlushRangeListTbEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4604, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4f7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5369bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4d3c, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) flush_range_list_tb_ex;
    
    // [HvlpFreeOverlayPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111030, 0x32828 bytes
    // ntoskrnl.exe .text:0x368bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369f70, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) free_overlay_pages;
    
    // [HvlpGetEncryptedDataFromHypervisor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3488, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f30b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534ba8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2e78, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) get_encrypted_data_from_hypervisor;
    
    // [HvlpGetEncryptedDataFromSecureKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c369c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f32a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3064, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) get_encrypted_data_from_secure_kernel;
    
    // [HvlpGetLogicalProcessorProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be87c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ece2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52e278, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eccec, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) get_logical_processor_property;
    
    // [HvlpGetPageList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4b2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f5668, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f5428, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) get_page_list;
    
    // [HvlpGetRegister128]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3fa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f41a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3f60, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) get_register128;
    
    // [HvlpGetRegister64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4024, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535bd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3ff0, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) get_register64;
    
    // [HvlpGetVpIndexFromApicId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bea34, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ecf30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52e38c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ecdf0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) get_vp_index_from_apic_id;
    
    // [HvlpHibernateScratchPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323118, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47438, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5efc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc473f8, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) hibernate_scratch_page;
    
    // [HvlpHvIdentityInfoCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdfe4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ebfb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebe70, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) hv_identity_info_callback;
    
    // [HvlpHvIdentityInfoCallbackRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab8e0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbde0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e680, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbde0, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) hv_identity_info_callback_record;
    
    // [HvlpHvToNtStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2e30, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4cf4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d9f6, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4ab4, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) hv_to_nt_status;
    
    // [HvlpHypercallCodeVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab588, 0x32828 bytes
    // ntoskrnl.exe CFGRO:0xe01848, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01850, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01848, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) hypercall_code_va;
    
    // [HvlpHypervisorStatsPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa2c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa308, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c338, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa308, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) hypervisor_stats_page;
    
    // [HvlpHypervisorVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab818, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbcb0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e4f0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbcb0, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) hypervisor_version;
    
    // [HvlpInitializeBootProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1beaf4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ed010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52e470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eced0, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) initialize_boot_processor;
    
    // [HvlpInitializeHvCrashdump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3758, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f33bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534ee4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f317c, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) initialize_hv_crashdump;
    
    // [HvlpInitializePowerStatistics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c242c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f22b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533e3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2170, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) initialize_power_statistics;
    
    // [HvlpInterruptCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa558, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa430, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c560, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa430, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) interrupt_callback;
    
    // [HvlpIteratorCrashdump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x322fc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc472e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ee60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc472a0, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) iterator_crashdump;
    
    // [HvlpIteratorHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x322fa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc472c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ee40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47280, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) iterator_hibernate;
    
    // [HvlpLogHypervisorLaunchError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f3cfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535774, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3abc, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) log_hypervisor_launch_error;
    
    // [HvlpLogHypervisorSchedulerType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3b10, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f3d74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5357ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3b34, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) log_hypervisor_scheduler_type;
    
    // [HvlpLogIommuInitStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3d20, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f3ed8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535848, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3c98, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) log_iommu_init_status;
    
    // [HvlpLogProcessorStartupFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c3ebc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f408c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535a30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f3e4c, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) log_processor_startup_failure;
    
    // [HvlpLogicalProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2a0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4c0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dadc, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4c0, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) logical_processor_count;
    
    // [HvlpLogicalProcessorRegions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3b0190, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xd03290, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd299b0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd03290, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) logical_processor_regions;
    
    // [HvlpLpComparison]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bebb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ed124, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52e594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ecfe4, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) lp_comparison;
    
    // [HvlpLpCpuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bb03c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8de10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93caa0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8d090, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) lp_cpuid;
    
    // [HvlpMapStatisticsPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bec30, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ed190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52e604, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ed050, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) map_statistics_page;
    
    // [HvlpMarkHvlPagesForHibernation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c252c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f23e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f22a8, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) mark_hvl_pages_for_hibernation;
    
    // [HvlpMarkHypervisorPagesForHibernation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c25c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f24bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534004, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f237c, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) mark_hypervisor_pages_for_hibernation;
    
    // [HvlpPackageCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab518, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb934, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df00, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb934, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) package_count;
    
    // [HvlpPowerPolicySettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c262c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2400, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) power_policy_setting_callback;
    
    // [HvlpPowerSettingList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2390, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96b30, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a5d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95d20, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) power_setting_list;
    
    // [HvlpPowerStateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1be088, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ec060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52d530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ebf20, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) power_state_callback;
    
    // [HvlpPreallocatePageListResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x625950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88bf54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93cd30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88a704, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) preallocate_page_list_resources;
    
    // [HvlpPrepareFlushHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c46bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x38bca8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395e7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38cd48, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) prepare_flush_header;
    
    // [HvlpProcessIommu]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c27c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f37f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3820dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f35b8, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) process_iommu;
    
    // [HvlpQueryNodeDistance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab580, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9a8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df68, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9a8, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) query_node_distance;
    
    // [HvlpQueryProcessorNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab568, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb778, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dde8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb778, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) query_processor_node;
    
    // [HvlpQueryProximityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab570, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9b0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df78, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9b0, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) query_proximity_id;
    
    // [HvlpQueryProximityNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab578, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9a0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df60, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9a0, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) query_proximity_node;
    
    // [HvlpReferenceTscPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4d8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb670, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcd0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb670, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) reference_tsc_page;
    
    // [HvlpRegisterPowerPolicyCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2674, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f25a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5340e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f2464, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) register_power_policy_callbacks;
    
    // [HvlpReleaseHypercallPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bed60, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ed360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ed220, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) release_hypercall_page;
    
    // [HvlpRescindedEnlightenments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab514, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb92c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1def8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb92c, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) rescinded_enlightenments;
    
    // [HvlpRootFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab24c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb438, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da48, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb438, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) root_flags;
    
    // [HvlpSecondaryDumpDataGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286818, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x301c8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e5e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x30508, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) secondary_dump_data_guid;
    
    // [HvlpSelectLpSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1beddc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ed444, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52e7cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ed304, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) select_lp_set;
    
    // [HvlpSelectVpSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bf21c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ed8b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52ec20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ed770, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) select_vp_set;
    
    // [HvlpSetLogicalProcessorProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bf430, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ede4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52f288, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4edd0c, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) set_logical_processor_property;
    
    // [HvlpSetPowerProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2704, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f2638, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x534140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f24f8, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) set_power_property;
    
    // [HvlpSetRegister64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c40c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x535d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f40e0, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) set_register64;
    
    // [HvlpSetupBootProcessorEarlyHypercallPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bf51c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ededc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52f310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4edd9c, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) setup_boot_processor_early_hypercall_pages;
    
    // [HvlpSetupCachedHypercallPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bf588, 0x32828 bytes
    // ntoskrnl.exe .text:0x4edf5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52f390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ede1c, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) setup_cached_hypercall_pages;
    
    // [HvlpSetupPageListIteration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4d88, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f57cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5370e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f558c, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) setup_page_list_iteration;
    
    // [HvlpSlowAcknowledgePageRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c18ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f16ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x533218, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f156c, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) slow_acknowledge_page_request;
    
    // [HvlpSlowFlushAddressSpaceTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c470c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f5064, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536aa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4e24, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) slow_flush_address_space_tb;
    
    // [HvlpSlowFlushListTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4794, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f521c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395a5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4fdc, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) slow_flush_list_tb;
    
    // [HvlpSlowFlushListTbEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c48e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f539c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x536c64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f515c, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) slow_flush_list_tb_ex;
    
    // [HvlpSlowFlushPasidAddressList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c199c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f1768, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5332dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f1628, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) slow_flush_pasid_address_list;
    
    // [HvlpSlowSendSyntheticClusterIpiEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c1a44, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f183c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5333b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f16fc, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) slow_send_synthetic_cluster_ipi_ex;
    
    // [HvlpStartSecurePageListIteration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c4e1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f5874, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x537178, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f5634, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) start_secure_page_list_iteration;
    
    // [HvlpStartVirtualProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bf75c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4ee1f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52f628, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ee0b8, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) start_virtual_processor;
    
    // [HvlpTryConfigureInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149178, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a4614, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c3900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9f80, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) try_configure_interface;
    
    // [HvlpTryToLockCpuManagementVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2b8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4f4a4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5364c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f4818, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) try_to_lock_cpu_management_version;
    
    // [HvlpUseExtendedProcessorSetHypercalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c2e68, 0x32828 bytes
    // ntoskrnl.exe .text:0x38bd9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396208, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ce3c, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) use_extended_processor_set_hypercalls;
    
    // [HvlpVirtualProcessorMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3adc80, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcff680, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd23fa0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcff680, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) virtual_processor_mapping;
    
    // [HvlpVirtualProcessorsIdentityMapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa02c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa017, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c01e, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa017, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) virtual_processors_identity_mapped;
    
    // [HvlpVsmVtlCallVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa2b8, 0x32828 bytes
    // ntoskrnl.exe CFGRO:0xe01860, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01868, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01860, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) vsm_vtl_call_va;
    
    // [HvlpWheaErrorNotificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343088, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5088, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5088, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) whea_error_notification_callback;
};
#include "magic/api.end.hpp"
