#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace xhal
{
    // [xHalAllocatePmcCounterSetEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) allocate_pmc_counter_set_ex;
    
    // [xHalGetIommuInterfaceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) get_iommu_interface_ex;
    
    // [xHalIommuCreateAtsDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) iommu_create_ats_device;
    
    // [xHalIommuDeleteAtsDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) iommu_delete_ats_device;
    
    // [xHalIommuGetAtsSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) iommu_get_ats_settings;
    
    // [xHalIommuGetDomainTransitionSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) iommu_get_domain_transition_support;
    
    // [xHalNotifyIommuDomainPolicyChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) notify_iommu_domain_policy_change;
    
    // [xHalPciGetDeviceLocationFromPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) pci_get_device_location_from_physical_address;
    
    // [xHalPciLateRestore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    //
    _m8(sdk::unknown_ptr) pci_late_restore;
    
    // [xHalStartProfileInterruptEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) start_profile_interrupt_ex;
    
    // [xHalCaptureLastBranchRecordStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) capture_last_branch_record_stack;
    
    // [xHalClearLastBranchRecordStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) clear_last_branch_record_stack;
    
    // [xHalConfigureLastBranchRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) configure_last_branch_record;
    
    // [xHalConnectSyntheticInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) connect_synthetic_interrupt;
    
    // [xHalEnumerateEnvironmentVariablesWithFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) enumerate_environment_variables_with_filter;
    
    // [xHalGetIommuInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) get_iommu_interface;
    
    // [xHalGetLastBranchInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) get_last_branch_information;
    
    // [xHalGetProcessorStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) get_processor_stats;
    
    // [xHalIommuBeginDeviceReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) iommu_begin_device_reset;
    
    // [xHalIommuBlockDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) iommu_block_device;
    
    // [xHalIommuDmaRemappingCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) iommu_dma_remapping_capable;
    
    // [xHalIommuFinalizeDeviceReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) iommu_finalize_device_reset;
    
    // [xHalIommuUnblockDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) iommu_unblock_device;
    
    // [xHalRequestGenericErrorRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) request_generic_error_recovery;
    
    // [xHalResumeLastBranchRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) resume_last_branch_record;
    
    // [xHalStartLastBranchRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) start_last_branch_record;
    
    // [xHalStopLastBranchRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) stop_last_branch_record;
    
    // [xHalTimerGetReferencePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) timer_get_reference_page;
    
    // [xHalTimerQueryHostPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) timer_query_host_performance_counter;
    
    // [xHalTimerWatchdogQueryDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) timer_watchdog_query_due_time;
    
    // [xHalTopologyQueryProcessorRelationships]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) topology_query_processor_relationships;
    
    // [xHalAcpiAoacCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) acpi_aoac_capable;
    
    // [xHalAcpiGetMultiNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) acpi_get_multi_node;
    
    // [xHalAcpiLateRestore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) acpi_late_restore;
    
    // [xHalAddInterruptRemapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) add_interrupt_remapping;
    
    // [xHalAllocateGsivForSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) allocate_gsiv_for_secondary_interrupt;
    
    // [xHalAllocateMapRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) allocate_map_registers;
    
    // [xHalAllocateMessageTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) allocate_message_target;
    
    // [xHalAllocatePmcCounterSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) allocate_pmc_counter_set;
    
    // [xHalAssignSlotResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdae8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb580, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) assign_slot_resources;
    
    // [xHalClockTimerActivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) clock_timer_activate;
    
    // [xHalClockTimerArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) clock_timer_arm;
    
    // [xHalClockTimerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) clock_timer_initialize;
    
    // [xHalClockTimerStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) clock_timer_stop;
    
    // [xHalCollectPmcCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) collect_pmc_counters;
    
    // [xHalConnectThermalInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) connect_thermal_interrupt;
    
    // [xHalConvertAuxiliaryCounterToPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) convert_auxiliary_counter_to_performance_counter;
    
    // [xHalConvertPerformanceCounterToAuxiliaryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) convert_performance_counter_to_auxiliary_counter;
    
    // [xHalDmaCheckAdapterToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) dma_check_adapter_token;
    
    // [xHalDmaFreeCrashDumpRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) dma_free_crash_dump_registers;
    
    // [xHalDmaLinkDeviceObjectByToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) dma_link_device_object_by_token;
    
    // [xHalDpGetInterruptReplayState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d9ed8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a8180, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa85880, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a70f0, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) dp_get_interrupt_replay_state;
    
    // [xHalDpMaskLevelTriggeredInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d310, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c320, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) dp_mask_level_triggered_interrupts;
    
    // [xHalDpReplaceBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) dp_replace_begin;
    
    // [xHalDpReplaceControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d310, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c320, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) dp_replace_control;
    
    // [xHalDpReplaceEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) dp_replace_end;
    
    // [xHalDpReplaceTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65f4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d320, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74700, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c330, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) dp_replace_target;
    
    // [xHalDpReplayInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d310, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c320, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) dp_replay_interrupts;
    
    // [xHalDpUnmaskLevelTriggeredInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d310, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c320, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) dp_unmask_level_triggered_interrupts;
    
    // [xHalEndMirroring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) end_mirroring;
    
    // [xHalEndOfBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) end_of_boot;
    
    // [xHalEnumerateUnmaskedInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) enumerate_unmasked_interrupts;
    
    // [xHalFlushAndInvalidatePageExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) flush_and_invalidate_page_external_cache;
    
    // [xHalFlushExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) flush_external_cache;
    
    // [xHalFlushIoBuffersExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) flush_io_buffers_external_cache;
    
    // [xHalFlushIoRectangleExternalCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) flush_io_rectangle_external_cache;
    
    // [xHalFreeMessageTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) free_message_target;
    
    // [xHalFreePmcCounterSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) free_pmc_counter_set;
    
    // [xHalGetClockConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) get_clock_configuration;
    
    // [xHalGetInterruptTranslator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) get_interrupt_translator;
    
    // [xHalGetInterruptVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) get_interrupt_vector;
    
    // [xHalGetProcessorId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) get_processor_id;
    
    // [xHalGetVectorInput]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) get_vector_input;
    
    // [xHalHaltSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ee8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x361570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3913b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3629a0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) halt_system;
    
    // [xHalHandlerForBus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) handler_for_bus;
    
    // [xHalInitPnpDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) init_pnp_driver;
    
    // [xHalInitPowerManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) init_power_management;
    
    // [xHalInterruptGetHighestPriorityInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) interrupt_get_highest_priority_interrupt;
    
    // [xHalInterruptSetDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) interrupt_set_destination;
    
    // [xHalInterruptVectorDataToGsiv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) interrupt_vector_data_to_gsiv;
    
    // [xHalIommuDereferenceAsid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) iommu_dereference_asid;
    
    // [xHalIommuDevicePowerChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) iommu_device_power_change;
    
    // [xHalIommuDisableDevicePasid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) iommu_disable_device_pasid;
    
    // [xHalIommuEnableDevicePasid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) iommu_enable_device_pasid;
    
    // [xHalIommuFaultRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) iommu_fault_routine;
    
    // [xHalIommuFlushAllPasid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) iommu_flush_all_pasid;
    
    // [xHalIommuFlushTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) iommu_flush_tb;
    
    // [xHalIommuFreeLibraryContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) iommu_free_library_context;
    
    // [xHalIommuGetConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9c44, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa366d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb21170, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36070, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) iommu_get_configuration;
    
    // [xHalIommuGetLibraryContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) iommu_get_library_context;
    
    // [xHalIommuMapDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) iommu_map_device;
    
    // [xHalIommuProcessPageRequestQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) iommu_process_page_request_queue;
    
    // [xHalIommuReferenceAsid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) iommu_reference_asid;
    
    // [xHalIommuRegisterDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9c4c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa366e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb21180, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36080, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) iommu_register_dispatch_table;
    
    // [xHalIommuServicePageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) iommu_service_page_fault;
    
    // [xHalIommuSetAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) iommu_set_address_space;
    
    // [xHalIommuSupportEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) iommu_support_enabled;
    
    // [xHalIommuUnmapDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) iommu_unmap_device;
    
    // [xHalIsEFIRuntimeActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) is_efi_runtime_active;
    
    // [xHalLoadMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) load_microcode;
    
    // [xHalLocateHiberRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65f4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d320, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74700, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c330, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) locate_hiber_ranges;
    
    // [xHalMaskInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) mask_interrupt;
    
    // [xHalMirrorPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) mirror_physical_memory;
    
    // [xHalMirrorVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) mirror_verify;
    
    // [xHalNotifyProcessorFreeze]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) notify_processor_freeze;
    
    // [xHalPciEarlyRestore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65f0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c2e0, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) pci_early_restore;
    
    // [xHalPciMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65f4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d320, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74700, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c330, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) pci_mark_hiber_phase;
    
    // [xHalPciMultiStageResumeCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65f8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d330, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74710, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c340, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) pci_multi_stage_resume_capable;
    
    // [xHalPostMicrocodeUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) post_microcode_update;
    
    // [xHalPowerEarlyRestore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65f4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d320, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74700, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c330, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) power_early_restore;
    
    // [xHalPowerSetRebootHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) power_set_reboot_handler;
    
    // [xHalPrepareForBugcheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) prepare_for_bugcheck;
    
    // [xHalPrepareProcessorForIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) prepare_processor_for_idle;
    
    // [xHalPreprocessNmi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) preprocess_nmi;
    
    // [xHalProcessorFreeze]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) processor_freeze;
    
    // [xHalProcessorHalt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ee90, 0x32828 bytes
    // ntoskrnl.exe .text:0x361580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3913c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3629b0, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) processor_halt;
    
    // [xHalProcessorOff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) processor_off;
    
    // [xHalProcessorOn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) processor_on;
    
    // [xHalQueryAuxiliaryCounterFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) query_auxiliary_counter_frequency;
    
    // [xHalQueryBusSlots]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) query_bus_slots;
    
    // [xHalQueryCapsuleCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) query_capsule_capabilities;
    
    // [xHalQueryIoPortAccessSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ee9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x361280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3626b0, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) query_io_port_access_supported;
    
    // [xHalQueryProcessorRestartEntryPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16eea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x361260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362690, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) query_processor_restart_entry_point;
    
    // [xHalQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711940, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) query_system_information;
    
    // [xHalQueryWakeTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) query_wake_time;
    
    // [xHalReadWheaPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) read_whea_physical_memory;
    
    // [xHalReferenceHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) reference_handler;
    
    // [xHalRegisterBusHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) register_bus_handler;
    
    // [xHalRegisterLogRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) register_log_routine;
    
    // [xHalRemoveInterruptRemapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) remove_interrupt_remapping;
    
    // [xHalReportIdleStateUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) report_idle_state_usage;
    
    // [xHalRequestInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) request_interrupt;
    
    // [xHalRestoreHvEnlightenment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) restore_hv_enlightenment;
    
    // [xHalResumeProcessorFromIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) resume_processor_from_idle;
    
    // [xHalSaveAndDisableHvEnlightenment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) save_and_disable_hv_enlightenment;
    
    // [xHalSecondaryInterruptQueryPrimaryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) secondary_interrupt_query_primary_information;
    
    // [xHalSetSystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711940, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) set_system_information;
    
    // [xHalSetWakeAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d310, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c320, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) set_wake_alarm;
    
    // [xHalStartMirroring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) start_mirroring;
    
    // [xHalStopLegacyUsbInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) stop_legacy_usb_interrupts;
    
    // [xHalTimerOnlyClockInterruptPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) timer_only_clock_interrupt_pending;
    
    // [xHalTimerQueryAndResetRtcErrors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) timer_query_and_reset_rtc_errors;
    
    // [xHalTimerQueryCycleCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) timer_query_cycle_counter;
    
    // [xHalTimerWatchdogGeneratedLastReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571d04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711950, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) timer_watchdog_generated_last_reset;
    
    // [xHalTimerWatchdogResetCountdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) timer_watchdog_reset_countdown;
    
    // [xHalTimerWatchdogStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) timer_watchdog_start;
    
    // [xHalTimerWatchdogStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) timer_watchdog_stop;
    
    // [xHalTimerWatchdogTriggerSystemReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) timer_watchdog_trigger_system_reset;
    
    // [xHalTranslateBusAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdae8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb580, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) translate_bus_address;
    
    // [xHalTscSynchronization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bdb08, 0x32828 bytes
    // ntoskrnl.exe .text:0x4eb6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52cb30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4eb5b0, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) tsc_synchronization;
    
    // [xHalUnloadMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) unload_microcode;
    
    // [xHalUnmaskInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) unmask_interrupt;
    
    // [xHalUpdateCapsule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) update_capsule;
    
    // [xHalVectorToIDTEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd56d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x361590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3913d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3629c0, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) vector_to_idt_entry;
    
    // [xHalVectorToIDTEntryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16eeac, 0x32828 bytes
    // ntoskrnl.exe .text:0x3615a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318990, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) vector_to_idt_entry_ex;
    
    // [xHalWheaInitProcessorGenericSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) whea_init_processor_generic_section;
    
    // [xHalWriteWheaPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) write_whea_physical_memory;
};
#include "magic/api.end.hpp"
