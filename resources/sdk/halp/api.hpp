#pragma once
#include <sdkgen/support_library.hpp>
#include "alloc_context_t.hpp"

#include "magic/api.start.hpp"
namespace halp
{
    // [HalpAcpiDetectPiix4]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb51a18, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) acpi_detect_piix4;
    
    // [HalpAcpiDetectPiix4Work]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x834420, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) acpi_detect_piix4_work;
    
    // [HalpAcpiGetPrmCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x390cd0, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) acpi_get_prm_cache;
    
    // [HalpAcpiLoaderBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61a38, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) acpi_loader_block;
    
    // [HalpAcpiPrmCacheInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb51b00, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) acpi_prm_cache_init;
    
    // [HalpAcpiPrmFirmwareList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xcf7de0, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) acpi_prm_firmware_list;
    
    // [HalpAcpiPrmInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6a350, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) acpi_prm_initialized;
    
    // [HalpAcpiPrmUpdateList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xcf7dc0, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) acpi_prm_update_list;
    
    // [HalpAcquireDrsPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5080cc, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) acquire_drs_pool;
    
    // [HalpAdjustWakeSecondsDue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa8292c, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) adjust_wake_seconds_due;
    
    // [HalpAllocPhysicalMemoryFromDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb3ef90, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) alloc_physical_memory_from_descriptor;
    
    // [HalpAllocateCommonBufferDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d0114, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) allocate_common_buffer_dma_thin;
    
    // [HalpAllocateCommonBufferDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5027a8, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) allocate_common_buffer_dmar_thin;
    
    // [HalpAllocateCommonBufferEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d02bc, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) allocate_common_buffer_entry;
    
    // [HalpAllocateCommonBufferVectorInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fe610, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) allocate_common_buffer_vector_internal;
    
    // [HalpAllocatePmcCounterSetEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f6e60, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) allocate_pmc_counter_set_ex;
    
    // [HalpArchLbrBranchFilteringCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5fb50, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) arch_lbr_branch_filtering_cap;
    
    // [HalpArchLbrCallstackModeCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5fb30, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) arch_lbr_callstack_mode_cap;
    
    // [HalpArchLbrCplFilteringCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5fb48, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) arch_lbr_cpl_filtering_cap;
    
    // [HalpArchLbrSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5fb40, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) arch_lbr_supported;
    
    // [HalpBuddyAllocatorAllocateLogicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51f640, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) buddy_allocator_allocate_logical_address;
    
    // [HalpBuddyAllocatorBltAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51faa0, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) buddy_allocator_blt_add;
    
    // [HalpBuddyAllocatorBltFindAndPop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51fb78, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) buddy_allocator_blt_find_and_pop;
    
    // [HalpBuddyAllocatorBltPopBuddy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51fce4, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) buddy_allocator_blt_pop_buddy;
    
    // [HalpBuddyAllocatorBltRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51fdd4, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) buddy_allocator_blt_remove;
    
    // [HalpBuddyAllocatorCleanUp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51feb0, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) buddy_allocator_clean_up;
    
    // [HalpBuddyAllocatorCreateAllocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51feec, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) buddy_allocator_create_allocator;
    
    // [HalpBuddyAllocatorDeleteSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x520098, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) buddy_allocator_delete_subtree;
    
    // [HalpBuddyAllocatorFreeLogicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45d480, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) buddy_allocator_free_logical_address;
    
    // [HalpBuddyAllocatorQueryCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) buddy_allocator_query_capabilities;
    
    // [HalpBuddyAllocatorReserveLogicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x520170, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) buddy_allocator_reserve_logical_address;
    
    // [HalpBuddyAllocatorSplitNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5203c8, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) buddy_allocator_split_node;
    
    // [HalpBuildScatterGatherListDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3442c4, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) build_scatter_gather_list_dma_thin;
    
    // [HalpBuildScatterGatherListDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5029b8, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) build_scatter_gather_list_dmar_thin;
    
    // [HalpCalculateDivisorRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x2b094, 0x11e8 bytes
    //
    _m34(sdk::unknown_ptr) calculate_divisor_rate;
    
    // [HalpCalculateTickCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x1860, 0x11e8 bytes
    //
    _m35(sdk::unknown_ptr) calculate_tick_count;
    
    // [HalpCheckLowMemoryPostSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa82a8c, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) check_low_memory_post_sleep;
    
    // [HalpCheckSratMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x509738, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) check_srat_memory_ranges;
    
    // [HalpCheckTestSigningEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x930ab0, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) check_test_signing_enabled;
    
    // [HalpCollectProfileCorruptionStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f720c, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) collect_profile_corruption_status;
    
    // [HalpCollectProfileOwnershipStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f7350, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) collect_profile_ownership_status;
    
    // [HalpCollectSamplingProfileCorruptionStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f7468, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) collect_sampling_profile_corruption_status;
    
    // [HalpCompareNumaMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5098e0, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) compare_numa_memory_ranges;
    
    // [HalpConstructScatterGatherListDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x344650, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) construct_scatter_gather_list_dma_thin;
    
    // [HalpConstructScatterGatherListDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502b5c, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) construct_scatter_gather_list_dmar_thin;
    
    // [HalpCounterStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62bc8, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) counter_status;
    
    // [HalpCreateCommonBufferFromMdlVerifyParams]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fed70, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) create_common_buffer_from_mdl_verify_params;
    
    // [HalpDmaAlwaysReserveLogicalAddressRangeInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3bf5bc, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) dma_always_reserve_logical_address_range_internal;
    
    // [HalpDmaDeleteDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x25df0, 0x11e8 bytes
    //
    _m48(sdk::unknown_ptr) dma_delete_domain;
    
    // [HalpDmaDomainHybridPassthroughReservedRegions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61848, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) dma_domain_hybrid_passthrough_reserved_regions;
    
    // [HalpDmaDomainHybridPassthroughReservedRegionsCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61838, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) dma_domain_hybrid_passthrough_reserved_regions_count;
    
    // [HalpDmaDomainObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll ALMOSTRO:0x3c008, 0x11e8 bytes
    //
    _m51(sdk::unknown_ptr) dma_domain_object_type;
    
    // [HalpDmaEnableNestedTranslation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61840, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) dma_enable_nested_translation;
    
    // [HalpDmaExtractFromVerifierShadowAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e2cd0, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) dma_extract_from_verifier_shadow_adapter;
    
    // [HalpDmaGetReservedRegionsForHybridPassthroughDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x501644, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) dma_get_reserved_regions_for_hybrid_passthrough_domain;
    
    // [HalpDmaGetReservedRegionsForTranslateDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5018d4, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) dma_get_reserved_regions_for_translate_domain;
    
    // [HalpDmaGuardEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd179d1, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) dma_guard_enabled;
    
    // [HalpDmaHybridPassthroughSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6183c, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) dma_hybrid_passthrough_support;
    
    // [HalpDmaInitEarly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb4eb68, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) dma_init_early;
    
    // [HalpDmaInitializeObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d1358, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) dma_initialize_object_type;
    
    // [HalpDmaIommuInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61880, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) dma_iommu_interface;
    
    // [HalpDmaIsThinDmaCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d99f4, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) dma_is_thin_dma_capable;
    
    // [HalpDmaIsThinDmarCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d99dc, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) dma_is_thin_dmar_capable;
    
    // [HalpDmaOperationsThinRemap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x97e0, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) dma_operations_thin_remap;
    
    // [HalpDmaReservedLaRegions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61870, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) dma_reserved_la_regions;
    
    // [HalpDmaReservedLaRegionsCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61878, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) dma_reserved_la_regions_count;
    
    // [HalpDmaShadowDumpAdapters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc63e00, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) dma_shadow_dump_adapters;
    
    // [HalpEfiCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61c90, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) efi_calls;
    
    // [HalpEfiDecrementEfiCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33a53c, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) efi_decrement_efi_call;
    
    // [HalpEfiIncrementEfiCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33a514, 0x1fd000 bytes
    //
    _m69(sdk::unknown_ptr) efi_increment_efi_call;
    
    // [HalpEfiInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb57fb4, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) efi_initialization;
    
    // [HalpExtMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa81e20, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) ext_mark_hiber_phase;
    
    // [HalpFreeDrsPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5081b0, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) free_drs_pool;
    
    // [HalpGenericGsivErrorSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4b570, 0x11e8 bytes
    //
    _m73(sdk::unknown_ptr) generic_gsiv_error_source_list_head;
    
    // [HalpGenericGsivInitDone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4ff50, 0x11e8 bytes
    //
    _m74(sdk::unknown_ptr) generic_gsiv_init_done;
    
    // [HalpGetIommuInterfaceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x869580, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) get_iommu_interface_ex;
    
    // [HalpGetNumberOfSGElementsDmaThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x344580, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) get_number_of_sg_elements_dma_thin;
    
    // [HalpGetNumberOfSGElementsDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45b470, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) get_number_of_sg_elements_dmar_thin;
    
    // [HalpGetProcessorStateByNtIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ae718, 0x1fd000 bytes
    //
    _m78(sdk::unknown_ptr) get_processor_state_by_nt_index;
    
    // [HalpHpetComparatorLatchDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5fd1c, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) hpet_comparator_latch_delay;
    
    // [HalpHpetSetMessageInterruptRouting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x360a0, 0x11e8 bytes
    //
    _m80(sdk::unknown_ptr) hpet_set_message_interrupt_routing;
    
    // [HalpHvIsX2ApicRecommended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb048, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) hv_is_x2_apic_recommended;
    
    // [HalpHvMapIoApicDeviceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll PAGELK:0x6400c, 0x11e8 bytes
    //
    _m82(sdk::unknown_ptr) hv_map_io_apic_device_interrupt;
    
    // [HalpHvQueryAssociatedProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x2e650, 0x11e8 bytes
    //
    _m83(sdk::unknown_ptr) hv_query_associated_processors;
    
    // [HalpHvUnmapIoApicDeviceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll PAGELK:0x64180, 0x11e8 bytes
    //
    _m84(sdk::unknown_ptr) hv_unmap_io_apic_device_interrupt;
    
    // [HalpInitializeTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x12728, 0x11e8 bytes
    //
    _m85(sdk::unknown_ptr) initialize_telemetry;
    
    // [HalpInitializeUncoreProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c2334, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) initialize_uncore_profiling;
    
    // [HalpInterruptAddTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x387528, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) interrupt_add_target;
    
    // [HalpInterruptAffinityIsSteerable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3886c4, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) interrupt_affinity_is_steerable;
    
    // [HalpInterruptForceClusterMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x28638, 0x11e8 bytes
    //
    _m89(sdk::unknown_ptr) interrupt_force_cluster_mode;
    
    // [HalpInterruptGetLocalIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x15060, 0x11e8 bytes
    //
    _m90(sdk::unknown_ptr) interrupt_get_local_identifier;
    
    // [HalpInterruptGlobalStartupBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc63d98, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) interrupt_global_startup_block;
    
    // [HalpInterruptGlobalStartupCodePhysical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc63d60, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) interrupt_global_startup_code_physical;
    
    // [HalpInterruptLastProblemController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc60880, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) interrupt_last_problem_controller;
    
    // [HalpInterruptLastProblemFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc60890, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) interrupt_last_problem_file;
    
    // [HalpInterruptLastProblemLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc60898, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) interrupt_last_problem_line;
    
    // [HalpInterruptLastProblemStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc60860, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) interrupt_last_problem_status;
    
    // [HalpInterruptProcessorStateByNtIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc63d78, 0x1fd000 bytes
    //
    _m97(sdk::unknown_ptr) interrupt_processor_state_by_nt_index;
    
    // [HalpInterruptRemapFixedLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e31a8, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) interrupt_remap_fixed_lines;
    
    // [HalpIommuAddDebuggerException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c11d8, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) iommu_add_debugger_exception;
    
    // [HalpIommuAtsDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61980, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) iommu_ats_device_list;
    
    // [HalpIommuAtsDeviceLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61998, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) iommu_ats_device_lock;
    
    // [HalpIommuConvertPciBusMasterDescriptorToDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fd7f4, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) iommu_convert_pci_bus_master_descriptor_to_device_id;
    
    // [HalpIommuDestroyDmarPageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x514a28, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) iommu_destroy_dmar_page_table;
    
    // [HalpIommuDeviceGetDomainTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fd8a8, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) iommu_device_get_domain_types;
    
    // [HalpIommuDomainFreeLogicalAddressRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45cb0e, 0x1fd000 bytes
    //
    _n05(sdk::unknown_ptr) iommu_domain_free_logical_address_range;
    
    // [HalpIommuDomainGetLogicalAddressRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x45cb46, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) iommu_domain_get_logical_address_range;
    
    // [HalpIommuDomainMapIdentityRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5067b4, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) iommu_domain_map_identity_range;
    
    // [HalpIommuDomainMaxInputBitWidth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc09964, 0x1fd000 bytes
    //
    _n08(sdk::unknown_ptr) iommu_domain_max_input_bit_width;
    
    // [HalpIommuDomainUnmapIdentityRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5069c8, 0x1fd000 bytes
    //
    _n09(sdk::unknown_ptr) iommu_domain_unmap_identity_range;
    
    // [HalpIommuFlushDomainTbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x506c4c, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) iommu_flush_domain_tbs;
    
    // [HalpIommuInvokeInterfaceStateChangeCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fd9f4, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) iommu_invoke_interface_state_change_callbacks;
    
    // [HalpIommuIsInPermanentPassthrough]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x506e8c, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) iommu_is_in_permanent_passthrough;
    
    // [HalpIommuIvtDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb3f594, 0x1fd000 bytes
    //
    _n13(sdk::unknown_ptr) iommu_ivt_discover;
    
    // [HalpIommuRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll INIT:0x6fb60, 0x11e8 bytes
    //
    _n14(sdk::unknown_ptr) iommu_register;
    
    // [HalpIommuX2ApicSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0ce8c, 0x1fd000 bytes
    //
    _n15(sdk::unknown_ptr) iommu_x2_apic_support;
    
    // [HalpIrtIndexBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4d030, 0x11e8 bytes
    //
    _n16(sdk::unknown_ptr) irt_index_bitmap;
    
    // [HalpIrtIndexBitmapSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4d044, 0x11e8 bytes
    //
    _n17(sdk::unknown_ptr) irt_index_bitmap_size;
    
    // [HalpIrtIndexCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4d04c, 0x11e8 bytes
    //
    _n18(sdk::unknown_ptr) irt_index_count;
    
    // [HalpIrtIndexStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4d040, 0x11e8 bytes
    //
    _n19(sdk::unknown_ptr) irt_index_start;
    
    // [HalpIvtCheckPathMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x3446c, 0x11e8 bytes
    //
    _n20(sdk::unknown_ptr) ivt_check_path_match;
    
    // [HalpIvtValidateDeviceScope]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x34900, 0x11e8 bytes
    //
    _n21(sdk::unknown_ptr) ivt_validate_device_scope;
    
    // [HalpLbrCtlFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5fb3c, 0x1fd000 bytes
    //
    _n22(sdk::unknown_ptr) lbr_ctl_flags;
    
    // [HalpLoadMicrocodeSerialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9306b8, 0x1fd000 bytes
    //
    _n23(sdk::unknown_ptr) load_microcode_serialized;
    
    // [HalpMcEnumerateAndSetPatchConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50a110, 0x1fd000 bytes
    //
    _n24(sdk::unknown_ptr) mc_enumerate_and_set_patch_config;
    
    // [HalpMcGetLoadConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50a524, 0x1fd000 bytes
    //
    _n25(sdk::unknown_ptr) mc_get_load_configuration;
    
    // [HalpMcLoadMicrocodeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50a5e0, 0x1fd000 bytes
    //
    _n26(sdk::unknown_ptr) mc_load_microcode_worker;
    
    // [HalpMcLoadSyncBarrier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc606c4, 0x1fd000 bytes
    //
    _n27(sdk::unknown_ptr) mc_load_sync_barrier;
    
    // [HalpMcParallelLoadSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50a67c, 0x1fd000 bytes
    //
    _n28(sdk::unknown_ptr) mc_parallel_load_supported;
    
    // [HalpMcPatchConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50a6b4, 0x1fd000 bytes
    //
    _n29(sdk::unknown_ptr) mc_patch_configuration;
    
    // [HalpMcResolveMicrocodeOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50a75c, 0x1fd000 bytes
    //
    _n30(sdk::unknown_ptr) mc_resolve_microcode_operation;
    
    // [HalpMcSyncBarrier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc606d8, 0x1fd000 bytes
    //
    _n31(sdk::unknown_ptr) mc_sync_barrier;
    
    // [HalpMcaProcessorBankClear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f5ddc, 0x1fd000 bytes
    //
    _n32(sdk::unknown_ptr) mca_processor_bank_clear;
    
    // [HalpMcaStuckErrorCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f37ac, 0x1fd000 bytes
    //
    _n33(sdk::unknown_ptr) mca_stuck_error_check;
    
    // [HalpMceDrsPoolEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4ee50, 0x11e8 bytes
    //
    _n34(sdk::unknown_ptr) mce_drs_pool_entries;
    
    // [HalpMceDrsPoolList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4ee40, 0x11e8 bytes
    //
    _n35(sdk::unknown_ptr) mce_drs_pool_list;
    
    // [HalpMceMemoryErrorDeferredHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x37370, 0x11e8 bytes
    //
    _n36(sdk::unknown_ptr) mce_memory_error_deferred_handler;
    
    // [HalpMceMemoryErrorDeferredRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x37418, 0x11e8 bytes
    //
    _n37(sdk::unknown_ptr) mce_memory_error_deferred_recovery;
    
    // [HalpMmUpdateTiledMemoryMapTargetStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50a088, 0x1fd000 bytes
    //
    _n38(sdk::unknown_ptr) mm_update_tiled_memory_map_target_stub;
    
    // [HalpNmiGenericErrorHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x3785c, 0x11e8 bytes
    //
    _n39(sdk::unknown_ptr) nmi_generic_error_handler;
    
    // [HalpNotifyIommuDomainPolicyChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fdac0, 0x1fd000 bytes
    //
    _n40(sdk::unknown_ptr) notify_iommu_domain_policy_change;
    
    // [HalpNumaSortProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb7d378, 0x1fd000 bytes
    //
    _n41(sdk::unknown_ptr) numa_sort_processors;
    
    // [HalpNumaSratMemoryRangeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc60830, 0x1fd000 bytes
    //
    _n42(sdk::unknown_ptr) numa_srat_memory_range_count;
    
    // [HalpNumaSratMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc607f8, 0x1fd000 bytes
    //
    _n43(sdk::unknown_ptr) numa_srat_memory_ranges;
    
    // [HalpNumberOfCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62b64, 0x1fd000 bytes
    //
    _n44(sdk::unknown_ptr) number_of_counters;
    
    // [HalpNumberOfFixedCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62bf0, 0x1fd000 bytes
    //
    _n45(sdk::unknown_ptr) number_of_fixed_counters;
    
    // [HalpNumberOfGpCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62b78, 0x1fd000 bytes
    //
    _n46(sdk::unknown_ptr) number_of_gp_counters;
    
    // [HalpParseCommonBufferExtendedConfigurations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4feeb8, 0x1fd000 bytes
    //
    _n47(sdk::unknown_ptr) parse_common_buffer_extended_configurations;
    
    // [HalpPciGetDeviceLocationFromPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50ae80, 0x1fd000 bytes
    //
    _n48(sdk::unknown_ptr) pci_get_device_location_from_physical_address;
    
    // [HalpPiix4Detected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5ffe0, 0x1fd000 bytes
    //
    _n49(sdk::unknown_ptr) piix4_detected;
    
    // [HalpPiix4Initialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5fffc, 0x1fd000 bytes
    //
    _n50(sdk::unknown_ptr) piix4_initialized;
    
    // [HalpPmuHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4a970, 0x11e8 bytes
    //
    _n51(sdk::unknown_ptr) pmu_handle;
    
    // [HalpPmuProcessorCallbackDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f7800, 0x1fd000 bytes
    //
    _n52(sdk::unknown_ptr) pmu_processor_callback_dpc_routine;
    
    // [HalpPmuReservedResourcesProcessorCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f7838, 0x1fd000 bytes
    //
    _n53(sdk::unknown_ptr) pmu_reserved_resources_processor_callback;
    
    // [HalpPopCommonBufferEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x391b44, 0x1fd000 bytes
    //
    _n54(sdk::unknown_ptr) pop_common_buffer_entry;
    
    // [HalpProfileIntervalLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62b70, 0x1fd000 bytes
    //
    _n55(sdk::unknown_ptr) profile_interval_limits;
    
    // [HalpProfileSourceDescriptorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62bc0, 0x1fd000 bytes
    //
    _n56(sdk::unknown_ptr) profile_source_descriptor_count;
    
    // [HalpProfileSourceDescriptorListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62be0, 0x1fd000 bytes
    //
    _n57(sdk::unknown_ptr) profile_source_descriptor_list_head;
    
    // [HalpProfileSourceDescriptorListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62b68, 0x1fd000 bytes
    //
    _n58(sdk::unknown_ptr) profile_source_descriptor_list_lock;
    
    // [HalpPutScatterGatherListDmarThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x502e04, 0x1fd000 bytes
    //
    _n59(sdk::unknown_ptr) put_scatter_gather_list_dmar_thin;
    
    // [HalpQueryProfileSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f7a1c, 0x1fd000 bytes
    //
    _n60(sdk::unknown_ptr) query_profile_source;
    
    // [HalpReadPartitionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll PAGE:0x5da10, 0x11e8 bytes
    //
    _n61(sdk::unknown_ptr) read_partition_table;
    
    // [HalpReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x29cc0, 0x11e8 bytes
    //
    _n62(sdk::unknown_ptr) reboot;
    
    // [HalpRebootControlled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62c00, 0x1fd000 bytes
    //
    _n63(sdk::unknown_ptr) reboot_controlled;
    
    // [HalpRegisterProcessorTraceInterruptHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50ffc4, 0x1fd000 bytes
    //
    _n64(sdk::unknown_ptr) register_processor_trace_interrupt_handler;
    
    // [HalpRegisterProfileSourceInterruptHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5100c8, 0x1fd000 bytes
    //
    _n65(sdk::unknown_ptr) register_profile_source_interrupt_handler;
    
    // [HalpRegisterTimerInterruptHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5101cc, 0x1fd000 bytes
    //
    _n66(sdk::unknown_ptr) register_timer_interrupt_handler;
    
    // [HalpRestoreLegacyDmaControllerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa822d0, 0x1fd000 bytes
    //
    _n67(sdk::unknown_ptr) restore_legacy_dma_controller_state;
    
    // [HalpRtcSetDivisor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x35bf0, 0x11e8 bytes
    //
    _n68(sdk::unknown_ptr) rtc_set_divisor;
    
    // [HalpSafeBootMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4c9e1, 0x11e8 bytes
    //
    _n69(sdk::unknown_ptr) safe_boot_mode;
    
    // [HalpSampleProfilingCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62b80, 0x1fd000 bytes
    //
    _n70(sdk::unknown_ptr) sample_profiling_counters;
    
    // [HalpScanForProfilingCorruption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x459ce4, 0x1fd000 bytes
    //
    _n71(sdk::unknown_ptr) scan_for_profiling_corruption;
    
    // [HalpSetMicrocodeSelfhostFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x50a850, 0x1fd000 bytes
    //
    _n72(sdk::unknown_ptr) set_microcode_selfhost_flag;
    
    // [HalpSetPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll PAGE:0x5da20, 0x11e8 bytes
    //
    _n73(sdk::unknown_ptr) set_partition_information;
    
    // [HalpSetProcessorStateByNtIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b736c, 0x1fd000 bytes
    //
    _n74(sdk::unknown_ptr) set_processor_state_by_nt_index;
    
    // [HalpShouldRecoveryBeAttempted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x507fdc, 0x1fd000 bytes
    //
    _n75(sdk::unknown_ptr) should_recovery_be_attempted;
    
    // [HalpSplitLargeNumaNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6a640, 0x1fd000 bytes
    //
    _n76(sdk::unknown_ptr) split_large_numa_nodes;
    
    // [HalpStartProfileInterruptEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f7eb0, 0x1fd000 bytes
    //
    _n77(sdk::unknown_ptr) start_profile_interrupt_ex;
    
    // [HalpStopOhciInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll PAGELK:0x63b20, 0x11e8 bytes
    //
    _n78(sdk::unknown_ptr) stop_ohci_interrupt;
    
    // [HalpStopUhciInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll PAGELK:0x63c28, 0x11e8 bytes
    //
    _n79(sdk::unknown_ptr) stop_uhci_interrupt;
    
    // [HalpStopXhciInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll PAGELK:0x620e8, 0x11e8 bytes
    //
    _n80(sdk::unknown_ptr) stop_xhci_interrupt;
    
    // [HalpSzDisableIommuPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .rdata:0x3de80, 0x11e8 bytes
    //
    _n81(sdk::unknown_ptr) sz_disable_iommu_policy;
    
    // [HalpSzEnableIommuPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .rdata:0x3de98, 0x11e8 bytes
    //
    _n82(sdk::unknown_ptr) sz_enable_iommu_policy;
    
    // [HalpSzProfileAcrossHaltOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .rdata:0x3de60, 0x11e8 bytes
    //
    _n83(sdk::unknown_ptr) sz_profile_across_halt_override;
    
    // [HalpTargetStubPtePa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc607c0, 0x1fd000 bytes
    //
    _n84(sdk::unknown_ptr) target_stub_pte_pa;
    
    // [HalpTiledCr3Address]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc61ad8, 0x1fd000 bytes
    //
    _n85(sdk::unknown_ptr) tiled_cr3_address;
    
    // [HalpTiledMemoryMapActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc63d80, 0x1fd000 bytes
    //
    _n86(sdk::unknown_ptr) tiled_memory_map_active;
    
    // [HalpTimerClockStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x11e78, 0x11e8 bytes
    //
    _n87(sdk::unknown_ptr) timer_clock_start;
    
    // [HalpTimerFinalizeAuxiliaryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e04e0, 0x1fd000 bytes
    //
    _n88(sdk::unknown_ptr) timer_finalize_auxiliary_counter;
    
    // [HalpTimerGetProfilingTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x5da4, 0x11e8 bytes
    //
    _n89(sdk::unknown_ptr) timer_get_profiling_target;
    
    // [HalpTimerIsReferenceTimeSaved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc64018, 0x1fd000 bytes
    //
    _n90(sdk::unknown_ptr) timer_is_reference_time_saved;
    
    // [HalpTimerMinIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc62308, 0x1fd000 bytes
    //
    _n91(sdk::unknown_ptr) timer_min_increment;
    
    // [HalpTimerSavedReferenceTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc63ef0, 0x1fd000 bytes
    //
    _n92(sdk::unknown_ptr) timer_saved_reference_time;
    
    // [HalpTimerSavedSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc63ee0, 0x1fd000 bytes
    //
    _n93(sdk::unknown_ptr) timer_saved_sequence_number;
    
    // [HalpTimerSetClockTimerMinimumInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f8464, 0x1fd000 bytes
    //
    _n94(sdk::unknown_ptr) timer_set_clock_timer_minimum_interval;
    
    // [HalpTimerWatchdogInitWakeTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x2acc0, 0x11e8 bytes
    //
    _n95(sdk::unknown_ptr) timer_watchdog_init_wake_timer;
    
    // [HalpTscCheckDisposition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f9f94, 0x1fd000 bytes
    //
    _n96(sdk::unknown_ptr) tsc_check_disposition;
    
    // [HalpWatchdoWakeTimerDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x2af90, 0x11e8 bytes
    //
    _n97(sdk::unknown_ptr) watchdo_wake_timer_dpc_routine;
    
    // [HalpWatchdogWakeTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4b980, 0x11e8 bytes
    //
    _n98(sdk::unknown_ptr) watchdog_wake_timer;
    
    // [HalpWatchdogWakeTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .text:0x2b060, 0x11e8 bytes
    //
    _n99(sdk::unknown_ptr) watchdog_wake_timer_callback;
    
    // [HalpWatchdogWakeTimerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4ba40, 0x11e8 bytes
    //
    _o00(sdk::unknown_ptr) watchdog_wake_timer_dpc;
    
    // [HalpWatchdogWakeTimerDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4ba08, 0x11e8 bytes
    //
    _o01(sdk::unknown_ptr) watchdog_wake_timer_due_time;
    
    // [HalpWatchdogWakeTimerInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll .data:0x4ba28, 0x11e8 bytes
    //
    _o02(sdk::unknown_ptr) watchdog_wake_timer_initialized;
    
    // [HalpWritePartitionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // hal.dll PAGE:0x5da30, 0x11e8 bytes
    //
    _o03(sdk::unknown_ptr) write_partition_table;
    
    // [HalpAllocateCommonBufferThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c58c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c57b0, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) allocate_common_buffer_thin;
    
    // [HalpBuildScatterGatherListThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5bfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c5aec, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) build_scatter_gather_list_thin;
    
    // [HalpConstructScatterGatherListThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c5de8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c5cd8, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) construct_scatter_gather_list_thin;
    
    // [HalpDmaAddReservedRangesToDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bf0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4befa0, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) dma_add_reserved_ranges_to_domain;
    
    // [HalpDmaAllocateAndPremapLa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b1440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b1310, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) dma_allocate_and_premap_la;
    
    // [HalpDmaIsThinApiCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c2540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c3350, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) dma_is_thin_api_capable;
    
    // [HalpDomainLaAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bf3b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4bf2a4, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) domain_la_allocate;
    
    // [HalpDomainLaDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bf494, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4bf384, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) domain_la_delete;
    
    // [HalpInterruptSetRemappedLineState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // hal.dll .text:0x282d8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4f4668, 0x1fd000 bytes
    //
    _o12(sdk::unknown_ptr) interrupt_set_remapped_line_state;
    
    // [HalpInterruptSetX2ApicPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b6fa8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b6e78, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) interrupt_set_x2_apic_policy;
    
    // [HalpIommuRegisterBuiltinPlugins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a7380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a5d40, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) iommu_register_builtin_plugins;
    
    // [HalpLaAddReservation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b7458, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7d08, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) la_add_reservation;
    
    // [HalpLaAllocateBlt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5304, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d51f4, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) la_allocate_blt;
    
    // [HalpLaBltAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d54f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d53e8, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) la_blt_add;
    
    // [HalpLaBltFindFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5534, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d5424, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) la_blt_find_free;
    
    // [HalpLaDeleteBlt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d55c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d54b4, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) la_delete_blt;
    
    // [HalpLaFreeState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d56c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d55b4, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) la_free_state;
    
    // [HalpLaInitializeState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d55f0, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) la_initialize_state;
    
    // [HalpLaReserveRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d58d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d57c4, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) la_reserve_range;
    
    // [HalpLaReservedRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc042f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04330, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) la_reserved_ranges;
    
    // [HalpLapDeleteSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d59e0, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) lap_delete_subtree;
    
    // [HalpLapSplitNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5bac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4d5a9c, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) lap_split_node;
    
    // [HalpMcInitializeMicrocodeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa3d52c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa364a8, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) mc_initialize_microcode_info;
    
    // [HalpMcRecordProcessorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a1be4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a30a4, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) mc_record_processor_info;
    
    // [HalpMcSetUpdateInfoInvalid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a62b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a4c74, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) mc_set_update_info_invalid;
    
    // [HalpMcUpdateInfoHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc495a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49580, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) mc_update_info_head;
    
    // [HalpMcUpdateInfoValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc495e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc495c0, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) mc_update_info_valid;
    
    // [HalpMcUpdateRecordingSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc495e1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc495c1, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) mc_update_recording_supported;
    
    // [HalpMcaAMDMapHwidAndMcaTypeToBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b78e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b77b0, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) mca_amd_map_hwid_and_mca_type_to_block;
    
    // [HalpMcaProcessorBankClearAMD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7998, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b7868, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) mca_processor_bank_clear_amd;
    
    // [HalpMcaReadErrorCorrectedAMD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7ab8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b7988, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) mca_read_error_corrected_amd;
    
    // [HalpMcaReadErrorUncorrectedIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7b6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b7a3c, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) mca_read_error_uncorrected_intel;
    
    // [HalpMcaReadErrorUncorrectedUnknown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7b6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b7a3c, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) mca_read_error_uncorrected_unknown;
    
    // [HalpPutScatterGatherListThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c605c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c5f4c, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) put_scatter_gather_list_thin;
    
    // [HalpReleaseHalCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b3800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b36d0, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) release_hal_counters;
    
    // [HalpAcpiGetAllTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b680c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b70bc, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) acpi_get_all_tables;
    
    // [HalpAcpiHmat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49668, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60818, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49648, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) acpi_hmat;
    
    // [HalpAcpiPopulateTableCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5e01c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb51a8c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5debc, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) acpi_populate_table_cache;
    
    // [HalpAcpiPopulateTableCacheWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b64c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6d70, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) acpi_populate_table_cache_work;
    
    // [HalpAddErrorEntryToPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c9e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5075a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9d30, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) add_error_entry_to_packet;
    
    // [HalpAddMcaExtendedLogToMemoryErrorSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b38f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1cd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b37c4, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) add_mca_extended_log_to_memory_error_section;
    
    // [HalpAllocPhysicalMemoryInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5d1d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3ed44, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d070, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) alloc_physical_memory_internal;
    
    // [HalpAllocateDmaResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x4700, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c4b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c4a80, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) allocate_dma_resources;
    
    // [HalpAllocateDmaResourcesInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c4bac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503adc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4a9c, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) allocate_dma_resources_internal;
    
    // [HalpAllocateDomainCommonBufferInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c6f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x501280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39dbb4, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) allocate_domain_common_buffer_internal;
    
    // [HalpAllocationDescriptorArraySize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11f08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f68, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) allocation_descriptor_array_size;
    
    // [HalpAllocationDescriptorStaticArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4ae20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4ae00, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) allocation_descriptor_static_array;
    
    // [HalpApicDirectedEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3911e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362840, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) apic_directed_end_of_interrupt;
    
    // [HalpApicDirectedEndOfInterruptModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a30, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) apic_directed_end_of_interrupt_mode_enabled;
    
    // [HalpApicGuestX2Mode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4b80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17360, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b80, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) apic_guest_x2_mode;
    
    // [HalpAreDriversDmarCompatible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x375234, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355728, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3765b4, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) are_drivers_dmar_compatible;
    
    // [HalpAuditQueryResults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x863994, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930d34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861dc4, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) audit_query_results;
    
    // [HalpBlkAddVirtualMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8c6cc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7d860, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b94c, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) blk_add_virtual_mapping;
    
    // [HalpBlkAlignmentFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16880, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00880, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15880, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) blk_alignment_fault;
    
    // [HalpBlkAllocateAndShadowMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8c808, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7d99c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8ba88, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) blk_allocate_and_shadow_memory;
    
    // [HalpBlkAllocatePageTablePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8c900, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7da94, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bb80, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) blk_allocate_page_table_page;
    
    // [HalpBlkAllocateShadowCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8c988, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7db1c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bc08, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) blk_allocate_shadow_code;
    
    // [HalpBlkAllocateShadowCodePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8ca10, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7dba4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bc90, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) blk_allocate_shadow_code_pages;
    
    // [HalpBlkAllocateShadowData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8ca60, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7dbf4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bce0, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) blk_allocate_shadow_data;
    
    // [HalpBlkApicEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17f90, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01f90, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16f90, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) blk_apic_end_of_interrupt;
    
    // [HalpBlkApicInitializeLocalUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17fb0, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01fb0, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16fb0, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) blk_apic_initialize_local_unit;
    
    // [HalpBlkApicRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa18104, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb02104, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa17104, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) blk_apic_read;
    
    // [HalpBlkApicWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa18148, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb02148, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa17148, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) blk_apic_write;
    
    // [HalpBlkBoundRangeExceededFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16300, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00300, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15300, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) blk_bound_range_exceeded_fault;
    
    // [HalpBlkBreakpointTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16200, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00200, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15200, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) blk_breakpoint_trap;
    
    // [HalpBlkCoprocessorSegmentOverrunFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16500, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00500, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15500, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) blk_coprocessor_segment_overrun_fault;
    
    // [HalpBlkDebugExceptionTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16180, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00180, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15180, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) blk_debug_exception_trap;
    
    // [HalpBlkDeviceNotAvailableFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16400, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00400, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15400, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) blk_device_not_available_fault;
    
    // [HalpBlkDivideErrorFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16100, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00100, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15100, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) blk_divide_error_fault;
    
    // [HalpBlkDoubleFaultAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16480, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00480, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15480, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) blk_double_fault_abort;
    
    // [HalpBlkFatalErrorHalt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa160b0, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb000b0, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa150b0, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) blk_fatal_error_halt;
    
    // [HalpBlkFloatingPointErrorFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16800, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00800, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15800, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) blk_floating_point_error_fault;
    
    // [HalpBlkFloatingPointFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16900, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00900, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15900, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) blk_floating_point_fault;
    
    // [HalpBlkGeneralProtectionFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16700, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00700, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15700, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) blk_general_protection_fault;
    
    // [HalpBlkHandleIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa18190, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb02190, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa17190, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) blk_handle_ipi;
    
    // [HalpBlkHandleMachineCheckAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa181b0, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb021b0, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa171b0, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) blk_handle_machine_check_abort;
    
    // [HalpBlkIdleHalt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16060, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00060, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15060, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) blk_idle_halt;
    
    // [HalpBlkIdleLoop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa18530, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb02520, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa17530, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) blk_idle_loop;
    
    // [HalpBlkIdleMonitorMWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16090, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00090, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15090, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) blk_idle_monitor_m_wait;
    
    // [HalpBlkIdlePortRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16080, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00080, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15080, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) blk_idle_port_read;
    
    // [HalpBlkIdlePortReadHalt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16070, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00070, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15070, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) blk_idle_port_read_halt;
    
    // [HalpBlkInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa3d4b4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f26c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36430, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) blk_init_system;
    
    // [HalpBlkInitializeIdt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a66e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa84270, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a5658, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) blk_initialize_idt;
    
    // [HalpBlkInitializeProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a67c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8434c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a5734, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) blk_initialize_processor_state;
    
    // [HalpBlkInitializeVirtualAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8caf4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7dc8c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bd74, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) blk_initialize_virtual_address_space;
    
    // [HalpBlkInvalidOpcodeFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16380, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00380, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15380, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) blk_invalid_opcode_fault;
    
    // [HalpBlkInvalidTssFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16580, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00580, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15580, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) blk_invalid_tss_fault;
    
    // [HalpBlkIpiInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17100, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01100, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16100, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) blk_ipi_interrupt;
    
    // [HalpBlkLocalErrorInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa171c0, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb011c0, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa161c0, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) blk_local_error_interrupt;
    
    // [HalpBlkMachineCheckAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17280, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01280, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16280, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) blk_machine_check_abort;
    
    // [HalpBlkMceExitMceTailMceBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa173b6, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb013b6, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa163b6, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) blk_mce_exit_mce_tail_mce_begin;
    
    // [HalpBlkMceExitMceTailMceEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa173bb, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb013bb, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa163bb, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) blk_mce_exit_mce_tail_mce_end;
    
    // [HalpBlkMceExitMceTailNmiBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa173e0, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb013e0, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa163e0, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) blk_mce_exit_mce_tail_nmi_begin;
    
    // [HalpBlkMceExitMceTailNmiEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa173e5, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb013e5, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa163e5, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) blk_mce_exit_mce_tail_nmi_end;
    
    // [HalpBlkMceFastForward]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa182b0, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb022a0, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa172b0, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) blk_mce_fast_forward;
    
    // [HalpBlkMceInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa184f0, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb024e0, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa174f0, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) blk_mce_initialize;
    
    // [HalpBlkNmiInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17400, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01400, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16400, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) blk_nmi_interrupt;
    
    // [HalpBlkNmiInterruptEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa174fc, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb014fc, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa164fc, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) blk_nmi_interrupt_end;
    
    // [HalpBlkNmiInterruptStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17400, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01400, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16400, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) blk_nmi_interrupt_start;
    
    // [HalpBlkNumberProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48b1c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fc2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48afc, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) blk_number_processors;
    
    // [HalpBlkOverflowTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16280, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00280, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15280, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) blk_overflow_trap;
    
    // [HalpBlkPageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16780, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00780, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15780, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) blk_page_fault;
    
    // [HalpBlkPageTableVaWindow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54748, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f738, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54748, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) blk_page_table_va_window;
    
    // [HalpBlkPcr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60728, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a38, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) blk_pcr;
    
    // [HalpBlkPoBusyWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d8d38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x518320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d8c28, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) blk_po_busy_wait;
    
    // [HalpBlkPoGetApicIdByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d8dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5183b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d8cc0, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) blk_po_get_apic_id_by_index;
    
    // [HalpBlkPoGetPackageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d8e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5183e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d8cf0, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) blk_po_get_package_id;
    
    // [HalpBlkPoGetPowerInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3cacd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbda0, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) blk_po_get_power_interface;
    
    // [HalpBlkPoGetProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c9f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8a70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cafb0, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) blk_po_get_processor_count;
    
    // [HalpBlkPoPerformPpmOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17dc4, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01dc4, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16dc4, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) blk_po_perform_ppm_operation;
    
    // [HalpBlkPoPerformPpmOperationForIoPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17e50, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01e4c, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16e50, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) blk_po_perform_ppm_operation_for_io_port;
    
    // [HalpBlkPoPerformPpmOperationForMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17ee0, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01ee4, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16ee0, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) blk_po_perform_ppm_operation_for_msr;
    
    // [HalpBlkPoReadPerfIoPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d8e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x518430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d8d40, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) blk_po_read_perf_io_port;
    
    // [HalpBlkPoReadPerfMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d9040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x518620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d8f30, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) blk_po_read_perf_msr;
    
    // [HalpBlkPoReadPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17f4c, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01f4c, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16f4c, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) blk_po_read_port;
    
    // [HalpBlkPoRegisterIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d9210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5187f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d9100, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) blk_po_register_idle_state;
    
    // [HalpBlkPoWritePerfIoPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d93c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5189a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d92b0, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) blk_po_write_perf_io_port;
    
    // [HalpBlkPoWritePerfMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d9590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x518b70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d9480, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) blk_po_write_perf_msr;
    
    // [HalpBlkProcessorStartup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16010, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00010, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15010, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) blk_processor_startup;
    
    // [HalpBlkReservedVector21]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16a00, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00a00, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15a00, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) blk_reserved_vector21;
    
    // [HalpBlkReservedVector22]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16a80, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00a80, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15a80, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) blk_reserved_vector22;
    
    // [HalpBlkReservedVector23]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16b00, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00b00, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15b00, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) blk_reserved_vector23;
    
    // [HalpBlkReservedVector24]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16b80, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00b80, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15b80, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) blk_reserved_vector24;
    
    // [HalpBlkReservedVector25]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16c00, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00c00, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15c00, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) blk_reserved_vector25;
    
    // [HalpBlkReservedVector26]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16c80, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00c80, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15c80, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) blk_reserved_vector26;
    
    // [HalpBlkReservedVector27]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16d00, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00d00, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15d00, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) blk_reserved_vector27;
    
    // [HalpBlkReservedVector28]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16d80, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00d80, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15d80, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) blk_reserved_vector28;
    
    // [HalpBlkReservedVector29]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16e00, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00e00, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15e00, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) blk_reserved_vector29;
    
    // [HalpBlkReservedVector30]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16e80, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00e80, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15e80, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) blk_reserved_vector30;
    
    // [HalpBlkReservedVector31]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16f00, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00f00, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15f00, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) blk_reserved_vector31;
    
    // [HalpBlkRootPageTablePa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60730, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a40, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) blk_root_page_table_pa;
    
    // [HalpBlkSegmentNotPresentFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16600, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00600, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15600, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) blk_segment_not_present_fault;
    
    // [HalpBlkShadowApic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8cb88, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7dd20, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8be08, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) blk_shadow_apic;
    
    // [HalpBlkShadowStartupBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8cbdc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7dd74, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8be5c, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) blk_shadow_startup_block;
    
    // [HalpBlkSpuriousInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17040, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01040, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16040, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) blk_spurious_interrupt;
    
    // [HalpBlkStackSegmentFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16680, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00680, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15680, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) blk_stack_segment_fault;
    
    // [HalpBlkStartBlockedProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a69b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa84544, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a5928, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) blk_start_blocked_processor;
    
    // [HalpBlkStubInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16f80, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00f80, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15f80, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) blk_stub_interrupt;
    
    // [HalpBlkTiledMemoryMapPa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60738, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a48, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) blk_tiled_memory_map_pa;
    
    // [HalpBlkUnexpectedInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17500, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01500, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16500, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) blk_unexpected_interrupt;
    
    // [HalpBlkUnexpectedInterruptCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa17d00, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb01d00, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa16d00, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) blk_unexpected_interrupt_common;
    
    // [HalpBlkVirtualizationFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe MINIEX:0xa16980, 0x1fe000 bytes
    // ntoskrnl.exe MINIEX:0xb00980, 0x1fd000 bytes
    // ntoskrnl.exe MINIEX:0xa15980, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) blk_virtualization_fault;
    
    // [HalpBlkWdFatalExceptionCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d9740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x518d24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d9630, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) blk_wd_fatal_exception_check;
    
    // [HalpBlkWdInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8cf60, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7eb58, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c1e0, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) blk_wd_initialize;
    
    // [HalpBlkWdPollingInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc489e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f9c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc489c0, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) blk_wd_polling_in_progress;
    
    // [HalpBlkWdTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48920, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48900, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) blk_wd_timer;
    
    // [HalpBlkWdTimerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d9790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x518d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d9680, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) blk_wd_timer_routine;
    
    // [HalpBlkWdWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc489c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f920, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc489a0, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) blk_wd_work_item;
    
    // [HalpBlkWdWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d97d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x518db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d96c0, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) blk_wd_worker_routine;
    
    // [HalpCheckAndReportGhes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c9f18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3099ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9e08, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) check_and_report_ghes;
    
    // [HalpClockTickLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48ca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fde0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48c80, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) clock_tick_log;
    
    // [HalpClockTickLogIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc10f54, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b714, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10fb4, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) clock_tick_log_index;
    
    // [HalpCmcIsDpcTimeRunningLow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b40a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f24cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3f74, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) cmc_is_dpc_time_running_low;
    
    // [HalpCmcLogPollingTimeoutEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b40fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2524, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3fcc, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) cmc_log_polling_timeout_event;
    
    // [HalpCmciResetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x36e84, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b73a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4b7270, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) cmci_reset_state;
    
    // [HalpCmciResetStateAMD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b73f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f58bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b72c0, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) cmci_reset_state_amd;
    
    // [HalpCompleteInitializeProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x99a974, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7be2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996c24, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) complete_initialize_profiling;
    
    // [HalpCounterSetInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4adc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62bd8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4ada8, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) counter_set_info;
    
    // [HalpDeferredErrorInterruptPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4f09, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17989, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f09, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) deferred_error_interrupt_present;
    
    // [HalpDeviceBlockUnblockPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c60, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) device_block_unblock_push_lock;
    
    // [HalpDmaDereferenceDomainObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bf198, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391bec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bf088, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) dma_dereference_domain_object;
    
    // [HalpDmaFindAdapterByDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ea644, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef474, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3eb714, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) dma_find_adapter_by_device_id;
    
    // [HalpDmaFreeLa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b1fc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef894, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1e98, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) dma_free_la;
    
    // [HalpDmaGetIommuInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b2054, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef914, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1f24, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) dma_get_iommu_interface;
    
    // [HalpDmaGetNextWcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b20b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef974, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1f84, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) dma_get_next_wcb;
    
    // [HalpDmaGetRemappingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b63f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fb48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdfc8, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) dma_get_remapping_information;
    
    // [HalpDmaInitializeDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll INIT:0x6c078, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5e38c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa5e22c, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) dma_initialize_domain;
    
    // [HalpDmaOperationsThin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5e90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6130, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5e80, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) dma_operations_thin;
    
    // [HalpDmaReferenceDomainObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c914, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355b78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ddd4, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) dma_reference_domain_object;
    
    // [HalpDmaRemoveFromEmergencyLogicalAddressQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b2830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0114, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2700, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) dma_remove_from_emergency_logical_address_queue;
    
    // [HalpDmaReturnEmergencyLogicalAddressResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b2a38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f031c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2908, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) dma_return_emergency_logical_address_resources;
    
    // [HalpDmaUseEmergencyLogicalAddressResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b2c78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f055c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2b48, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) dma_use_emergency_logical_address_resources;
    
    // [HalpEfiLockOutRuntimeCallsForSystemSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x387964, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fcff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x388214, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) efi_lock_out_runtime_calls_for_system_sleep;
    
    // [HalpEfiStartRuntimeCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4be624, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be514, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) efi_start_runtime_code;
    
    // [HalpEnumerateEnvironmentVariablesWithFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b65f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d1c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b64c0, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) enumerate_environment_variables_with_filter;
    
    // [HalpErrataApplyPerProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x995fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7a868, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x995340, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) errata_apply_per_processor;
    
    // [HalpErrorDeferredHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca180, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) error_deferred_handler;
    
    // [HalpExtEnvAllocationPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc507fc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507fc, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) ext_env_allocation_phase;
    
    // [HalpExtEnvInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x99d5e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c660, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) ext_env_init_system;
    
    // [HalpExtEnvLoaderBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49d90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61a58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d70, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) ext_env_loader_block;
    
    // [HalpExtEnvMarkHiberRegions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x383c94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e268, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x384a54, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) ext_env_mark_hiber_regions;
    
    // [HalpFindGhesEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c9fc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c09e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9eb8, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) find_ghes_entry;
    
    // [HalpFullPmuHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12280, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) full_pmu_handle;
    
    // [HalpGenInitialRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a4a6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7b278, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a39dc, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) gen_initial_read;
    
    // [HalpGenericAssistErrorSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49bd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61790, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49bb0, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) generic_assist_error_source_list_head;
    
    // [HalpGenericErrorSourceRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca2e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5081e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca1d8, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) generic_error_source_recovery;
    
    // [HalpGenericPeiErrorSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49a40, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) generic_pei_error_source_list_head;
    
    // [HalpGenericPeiInitDone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4f90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f90, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) generic_pei_init_done;
    
    // [HalpGenericSdeiErrorSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49bb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61770, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49b90, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) generic_sdei_error_source_list_head;
    
    // [HalpGetAvailableProximityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8b9a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7cee0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8ac20, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) get_available_proximity_id;
    
    // [HalpGetCpuVendor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c43c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c05c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d8fc, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) get_cpu_vendor;
    
    // [HalpGetFullPmuOwnership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b37b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1b4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3684, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) get_full_pmu_ownership;
    
    // [HalpGetIommuInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b46f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930db0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc330, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) get_iommu_interface;
    
    // [HalpGetMcaExtendedLogStatusBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b47e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2d04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b46b0, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) get_mca_extended_log_status_block;
    
    // [HalpGetMcaLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x861964, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f23c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85fd94, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) get_mca_log;
    
    // [HalpGetMceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) get_mce_information;
    
    // [HalpGetProfileDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x373ca8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bbaf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375028, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) get_profile_descriptor;
    
    // [HalpGetPteAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362450, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) get_pte_address;
    
    // [HalpGhesMemoryErrorHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca408, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50830c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca2f8, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) ghes_memory_error_handler;
    
    // [HalpHandleMachineCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b48bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b478c, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) handle_machine_check;
    
    // [HalpHmaConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49660, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60810, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49640, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) hma_config;
    
    // [HalpHsaAllocateReservedDomainList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4db9d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51bd54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4db8c0, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) hsa_allocate_reserved_domain_list;
    
    // [HalpHsaCreateReservedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dba68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51bdc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4db958, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) hsa_create_reserved_device;
    
    // [HalpHsaFindReservedDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dbb58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51be98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dba48, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) hsa_find_reserved_domain;
    
    // [HalpHsapInitializeReservedDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dbbb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51bef4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dbaa4, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) hsap_initialize_reserved_domain;
    
    // [HalpHvIommuDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c0e, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617de, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49bee, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) hv_iommu_device_domain;
    
    // [HalpHvLogicalId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4fe8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17ae8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4fe8, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) hv_logical_id;
    
    // [HalpHvMapDeviceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a4588, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8167c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a34f8, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) hv_map_device_interrupt;
    
    // [HalpHvParaVirtIommuDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c0d, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617dd, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49bed, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) hv_para_virt_iommu_domain;
    
    // [HalpHvQueryHyperlaunchEntrypoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cc60c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509e98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cc4fc, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) hv_query_hyperlaunch_entrypoint;
    
    // [HalpHvUnmapDeviceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a4754, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa81880, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a36c4, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) hv_unmap_device_interrupt;
    
    // [HalpHvWatchdogArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3910e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362740, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) hv_watchdog_arm;
    
    // [HalpHvWatchdogDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aa240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1614, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8c00, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) hv_watchdog_discover;
    
    // [HalpHvWatchdogInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362760, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) hv_watchdog_initialize;
    
    // [HalpHvWatchdogStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362780, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) hv_watchdog_stop;
    
    // [HalpHvciEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48bd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48bb0, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) hvci_enabled;
    
    // [HalpInitializeDeferredErrorVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39f448, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc088, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a0908, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) initialize_deferred_error_vector;
    
    // [HalpInitializeGhesRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c0b7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2098, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c198c, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) initialize_ghes_recovery;
    
    // [HalpInitializeLateSystemActions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a383c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea2f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a91bc, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) initialize_late_system_actions;
    
    // [HalpInitializePmcCounterSetInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa3d600, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40014, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36570, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) initialize_pmc_counter_set_info;
    
    // [HalpInsertProfileSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b94d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f772c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b93a0, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) insert_profile_source;
    
    // [HalpInterruptBlockHyperthreading]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc496d5, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6089d, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496b5, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) interrupt_block_hyperthreading;
    
    // [HalpInterruptBlockSmtSiblings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cbd00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbbf0, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) interrupt_block_smt_siblings;
    
    // [HalpInterruptBlockedProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc496f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496d0, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) interrupt_blocked_processors;
    
    // [HalpInterruptBuildKnownResourceIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a9a6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b95b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a842c, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) interrupt_build_known_resource_id_string;
    
    // [HalpInterruptDeferredErrorService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ccba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ad70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cca90, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) interrupt_deferred_error_service;
    
    // [HalpInterruptDirectedEoiModeDetermined]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc496c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60878, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496a8, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) interrupt_directed_eoi_mode_determined;
    
    // [HalpInterruptDirectedEoiModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc496d6, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6089e, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496b6, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) interrupt_directed_eoi_mode_enabled;
    
    // [HalpInterruptFirstBlockedProcessorIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc496b4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60868, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49694, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) interrupt_first_blocked_processor_index;
    
    // [HalpInterruptGetIdentifiers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c4bb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bcb40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5920, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) interrupt_get_identifiers;
    
    // [HalpInterruptGetRemappedLineState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b5de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3873b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5cb0, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) interrupt_get_remapped_line_state;
    
    // [HalpInterruptIsDeferredErrorSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b6d68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4fb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6c38, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) interrupt_is_deferred_error_supported;
    
    // [HalpInterruptIsHvLineBasedIntRemappingSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a710, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) interrupt_is_hv_line_based_int_remapping_supported;
    
    // [HalpInterruptLastProcessorStartupInMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4bca4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63d84, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc84, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) interrupt_last_processor_startup_in_ms;
    
    // [HalpInterruptOverridesLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc496f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496d8, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) interrupt_overrides_lock;
    
    // [HalpInterruptPerDeviceMsiLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0f29c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0995c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f2ec, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) interrupt_per_device_msi_limit;
    
    // [HalpInterruptPerformDirectedEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b81f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6628, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b80c8, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) interrupt_perform_directed_end_of_interrupt;
    
    // [HalpInterruptProcessorHidden]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4bca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63d70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc80, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) interrupt_processor_hidden;
    
    // [HalpInterruptRemapUpdateDeliveryMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c8c24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9af4, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) interrupt_remap_update_delivery_mode;
    
    // [HalpInterruptSetLineSpecificOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ea6f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f530c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3eb7c4, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) interrupt_set_line_specific_override;
    
    // [HalpInterruptStartBlockedProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cc04c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbf3c, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) interrupt_start_blocked_processors;
    
    // [HalpInterruptStartHyperthreadSiblings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc496d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6089c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496b4, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) interrupt_start_hyperthread_siblings;
    
    // [HalpInterruptWaitForProcessorStartUp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39ca0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7434, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39decc, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) interrupt_wait_for_processor_start_up;
    
    // [HalpIommuAcquireNewDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c6114, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3de100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6004, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) iommu_acquire_new_domain;
    
    // [HalpIommuAllocateAndZeroPageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5c98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bdcec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d5b88, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) iommu_allocate_and_zero_page_table;
    
    // [HalpIommuAllocateDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aa548, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3de1bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8f08, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) iommu_allocate_dma_domain;
    
    // [HalpIommuAllocateRemappingTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bf9b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd688, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bf8a8, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) iommu_allocate_remapping_table_entry;
    
    // [HalpIommuAttachDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c6220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503f14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6110, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) iommu_attach_device_domain;
    
    // [HalpIommuBlockDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c34b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c33a0, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) iommu_block_device;
    
    // [HalpIommuBypassDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c58, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) iommu_bypass_domain;
    
    // [HalpIommuCheckDpptException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3738, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df554, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3628, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) iommu_check_dppt_exception;
    
    // [HalpIommuCheckExceptionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bfa9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd7b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bf98c, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) iommu_check_exception_list;
    
    // [HalpIommuCleanupPageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5148b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d5c40, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) iommu_cleanup_page_table;
    
    // [HalpIommuCloneDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ea888, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3eb958, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) iommu_clone_device_id;
    
    // [HalpIommuConstructReservedPageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a48c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7a4ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3838, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) iommu_construct_reserved_page_table;
    
    // [HalpIommuConstructReservedPageTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a49e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7a5bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3950, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) iommu_construct_reserved_page_tables;
    
    // [HalpIommuCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x861ca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x861ca4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8600d4, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) iommu_create_device;
    
    // [HalpIommuCreateDeviceInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bfae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df4b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bf9d0, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) iommu_create_device_internal;
    
    // [HalpIommuCreateDmarPageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5ebc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf804, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d5dac, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) iommu_create_dmar_page_table;
    
    // [HalpIommuCreateIncreaseAliasTrack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ea8fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3eb9cc, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) iommu_create_increase_alias_track;
    
    // [HalpIommuDecreaseAliasTrack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eaa08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506614, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebad8, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) iommu_decrease_alias_track;
    
    // [HalpIommuDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x861f1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f7dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86034c, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) iommu_delete_device;
    
    // [HalpIommuDereferenceHardwareDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3754, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5066bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3644, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) iommu_dereference_hardware_domain;
    
    // [HalpIommuDetermineReservedPciRid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3854, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d2174, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3744, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) iommu_determine_reserved_pci_rid;
    
    // [HalpIommuDeviceCreatedList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61950, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c70, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) iommu_device_created_list;
    
    // [HalpIommuDeviceCreatedListPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61948, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c68, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) iommu_device_created_list_push_lock;
    
    // [HalpIommuDmaGuardTableOptIn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c00, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) iommu_dma_guard_table_opt_in;
    
    // [HalpIommuDmaRemappingCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eaa90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebb60, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) iommu_dma_remapping_capable;
    
    // [HalpIommuDmarPageTableMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d5f8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x514a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d5e7c, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) iommu_dmar_page_table_mark_hiber_phase;
    
    // [HalpIommuDomainId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4f80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f80, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) iommu_domain_id;
    
    // [HalpIommuDomainMapLogical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c38b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c37a8, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) iommu_domain_map_logical;
    
    // [HalpIommuDomainMapLogicalRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c391c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50697c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c380c, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) iommu_domain_map_logical_range;
    
    // [HalpIommuDomainUnmapLogicalRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c397c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506a94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c386c, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) iommu_domain_unmap_logical_range;
    
    // [HalpIommuEnableGpuIdentityMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49cd2, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cb2, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) iommu_enable_gpu_identity_mapping;
    
    // [HalpIommuEnableInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aa4ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9174, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8e6c, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) iommu_enable_interrupts;
    
    // [HalpIommuExceptionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49bf0, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) iommu_exception_list;
    
    // [HalpIommuFlushDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3a8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506b6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c397c, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) iommu_flush_dma_domain;
    
    // [HalpIommuFlushDomainTB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c642c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45b4ca, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c631c, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) iommu_flush_domain_tb;
    
    // [HalpIommuFreeDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3755dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fd71c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37695c, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) iommu_free_device_id;
    
    // [HalpIommuFreeDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3b70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506cd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3a60, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) iommu_free_dma_domain;
    
    // [HalpIommuFreeDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c646c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503f9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c635c, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) iommu_free_domain;
    
    // [HalpIommuFreeRemappingTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bfc0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bfafc, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) iommu_free_remapping_table_entry;
    
    // [HalpIommuGetAcpiDeviceMapCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eaaf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebbc8, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) iommu_get_acpi_device_map_count;
    
    // [HalpIommuGetDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3755f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fd534, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376974, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) iommu_get_device_id;
    
    // [HalpIommuGetDmarptRootAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d6138, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf76c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6028, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) iommu_get_dmarpt_root_address;
    
    // [HalpIommuGetExceptionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c653c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504098, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c642c, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) iommu_get_exception_list;
    
    // [HalpIommuGetHardwareDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3bf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ddfe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3ae8, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) iommu_get_hardware_domain;
    
    // [HalpIommuGetPageTableType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf7ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3cb0, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) iommu_get_page_table_type;
    
    // [HalpIommuGetReservedRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3e18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506de4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3d08, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) iommu_get_reserved_ranges;
    
    // [HalpIommuGetRootIommuFaultPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2718ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385cb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32343c, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) iommu_get_root_iommu_fault_policy;
    
    // [HalpIommuGetSecurityPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2717bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32334c, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) iommu_get_security_policy;
    
    // [HalpIommuGlobalEventBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4c2b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17668, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c298, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) iommu_global_event_buffer;
    
    // [HalpIommuInitInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x99af78, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa79d6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x997228, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) iommu_init_interrupts;
    
    // [HalpIommuInitializeDmaGuardPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a72e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8e64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5ca8, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) iommu_initialize_dma_guard_policy;
    
    // [HalpIommuInitializeDmar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aa4e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ddf34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8ea8, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) iommu_initialize_dmar;
    
    // [HalpIommuInitializeDmarPageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d619c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d608c, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) iommu_initialize_dmar_page_table;
    
    // [HalpIommuJoinDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3db0, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) iommu_join_dma_domain;
    
    // [HalpIommuLeaveDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c3f98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3e88, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) iommu_leave_dma_domain;
    
    // [HalpIommuLogEarlyFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aa628, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8398, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8fe8, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) iommu_log_early_fault;
    
    // [HalpIommuMapLogical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d6324, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x514bfc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6214, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) iommu_map_logical;
    
    // [HalpIommuMapLogicalRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d670c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d65fc, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) iommu_map_logical_range;
    
    // [HalpIommuMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x992cdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa81f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x991cec, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) iommu_mark_hiber_phase;
    
    // [HalpIommuMaxPageTableDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49cc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61968, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49ca8, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) iommu_max_page_table_depth;
    
    // [HalpIommuMinPageTableDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49ccc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6196c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cac, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) iommu_min_page_table_depth;
    
    // [HalpIommuPageTableCacheCoherent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49cd1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61990, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cb1, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) iommu_page_table_cache_coherent;
    
    // [HalpIommuParaVirtDeviceCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48b20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fc50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b00, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) iommu_para_virt_device_cache;
    
    // [HalpIommuParaVirtDeviceCacheLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48b30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fc60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b10, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) iommu_para_virt_device_cache_lock;
    
    // [HalpIommuPopulateExceptionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ca2a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0a04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb3a0, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) iommu_populate_exception_list;
    
    // [HalpIommuProcessDeviceEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dbc7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51bfd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dbb6c, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) iommu_process_device_entries;
    
    // [HalpIommuProcessIvhdEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dbf88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51c290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dbe78, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) iommu_process_ivhd_entry;
    
    // [HalpIommuProcessMemoryErrata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c40b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d2260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c3fa8, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) iommu_process_memory_errata;
    
    // [HalpIommuProcessReservations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3aa468, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d2054, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8e28, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) iommu_process_reservations;
    
    // [HalpIommuProcessReservationsInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c41a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d20b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4094, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) iommu_process_reservations_internal;
    
    // [HalpIommuQueryAcpiDeviceMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c4268, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e80b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4158, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) iommu_query_acpi_device_mapping;
    
    // [HalpIommuReportIommuFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c42f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c41e0, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) iommu_report_iommu_fault;
    
    // [HalpIommuRootIommuFaultPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49cc4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61964, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49ca4, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) iommu_root_iommu_fault_policy;
    
    // [HalpIommuSecurityPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49c08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49be8, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) iommu_security_policy;
    
    // [HalpIommuTraceFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c433c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5071ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c422c, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) iommu_trace_fault;
    
    // [HalpIommuUnblockDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c4480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5072f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4370, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) iommu_unblock_device;
    
    // [HalpIommuUnmapLogicalRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d6b2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x515008, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6a1c, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) iommu_unmap_logical_range;
    
    // [HalpIommuUpdatePageTableLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a2814, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3d64, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) iommu_update_page_table_level;
    
    // [HalpIommuUpdatePageWalkCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a2844, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1b38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3d94, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) iommu_update_page_walk_capability;
    
    // [HalpIrtAllocateDeviceAperture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x862af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930084, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860f20, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) irt_allocate_device_aperture;
    
    // [HalpIrtAllocatedApertures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49734, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608f4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49714, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) irt_allocated_apertures;
    
    // [HalpIrtAllocatedDeviceAperturesHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49720, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49700, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) irt_allocated_device_apertures_head;
    
    // [HalpIrtAllocatedRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4996c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4994c, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) irt_allocated_ranges;
    
    // [HalpIrtAllocationFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49940, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49920, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) irt_allocation_flags;
    
    // [HalpIrtAperturesPerRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49730, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49710, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) irt_apertures_per_range;
    
    // [HalpIrtDefaultDeviceAperture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc499c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc499a0, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) irt_default_device_aperture;
    
    // [HalpIrtEntriesPerDeviceAperture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49968, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49948, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) irt_entries_per_device_aperture;
    
    // [HalpIrtEntriesPerRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49964, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49944, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) irt_entries_per_range;
    
    // [HalpIrtExtendApertureRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x862e9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9301d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8612cc, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) irt_extend_aperture_range;
    
    // [HalpIrtExtendRemappingRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x862fc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86827c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8613f8, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) irt_extend_remapping_range;
    
    // [HalpIrtFreeDeviceAperturesHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49950, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49930, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) irt_free_device_apertures_head;
    
    // [HalpIrtInitializeDeviceApertures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86317c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9303c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8615ac, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) irt_initialize_device_apertures;
    
    // [HalpIrtLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49980, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49960, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) irt_lock;
    
    // [HalpIrtRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49740, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60900, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49720, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) irt_ranges;
    
    // [HalpIrtReleaseDeviceAperture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8631e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930434, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861618, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) irt_release_device_aperture;
    
    // [HalpIrtTotalApertures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49960, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49940, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) irt_total_apertures;
    
    // [HalpIrtTotalRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49970, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49950, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) irt_total_ranges;
    
    // [HalpIsCmciImplementedAMD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a43b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8151c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3324, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) is_cmci_implemented_amd;
    
    // [HalpIsHeap64KRegionExecutable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f54d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6f00, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) is_heap64k_region_executable;
    
    // [HalpIsHvIptSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bca5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc92c, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) is_hv_ipt_supported;
    
    // [HalpIsHvRemappingInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b3a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb5f4, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) is_hv_remapping_interrupts;
    
    // [HalpIsLmceSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c248, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d708, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) is_lmce_supported;
    
    // [HalpIvtAllocateReservedDomainList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e1ec8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf2c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e1db8, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) ivt_allocate_reserved_domain_list;
    
    // [HalpIvtCheckIdPathMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e15f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3770f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e14e0, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) ivt_check_id_path_match;
    
    // [HalpIvtCreateReservedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e1f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf3e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e1e50, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) ivt_create_reserved_device;
    
    // [HalpIvtFindReservedDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e204c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522618, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e1f3c, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) ivt_find_reserved_domain;
    
    // [HalpIvtpInitializeReservedDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a8078, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa85798, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a6fe8, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) ivtp_initialize_reserved_domain;
    
    // [HalpKsrCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8639c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861df0, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) ksr_callback_routine;
    
    // [HalpLbrAreOperationsAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb4c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a00, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) lbr_are_operations_allowed;
    
    // [HalpLbrCaptureStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d75d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45cfe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d74c0, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) lbr_capture_stack;
    
    // [HalpLbrClearStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d76e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45d120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d75d0, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) lbr_clear_stack;
    
    // [HalpLbrConfigurationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86405c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86248c, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) lbr_configuration_worker;
    
    // [HalpLbrConfigureProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d7840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x516250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d7730, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) lbr_configure_processor;
    
    // [HalpLbrConfigureRecording]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8640d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862500, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) lbr_configure_recording;
    
    // [HalpLbrCurrentHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a14, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb34, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc489f4, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) lbr_current_handle;
    
    // [HalpLbrGetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ca5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e99a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb6f0, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) lbr_get_information;
    
    // [HalpLbrInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x99aac4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7b6e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996d74, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) lbr_initialize;
    
    // [HalpLbrIsFreezeLegacy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0f2ba, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09975, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f30a, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) lbr_is_freeze_legacy;
    
    // [HalpLbrIsInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc489f0, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) lbr_is_in_use;
    
    // [HalpLbrIsInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb51, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a04, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) lbr_is_initialized;
    
    // [HalpLbrMostSignificantFromAddrBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0f2b9, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cea8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f309, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) lbr_most_significant_from_addr_bit;
    
    // [HalpLbrMostSignificantToAddrBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc122a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cea9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12308, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) lbr_most_significant_to_addr_bit;
    
    // [HalpLbrResumeRecording]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x248950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f40f0, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) lbr_resume_recording;
    
    // [HalpLbrSelectFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc489ec, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) lbr_select_flags;
    
    // [HalpLbrStackSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc489f8, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) lbr_stack_size;
    
    // [HalpLbrStartRecording]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x864110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862540, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) lbr_start_recording;
    
    // [HalpLbrStopRecording]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8641c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8625f0, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) lbr_stop_recording;
    
    // [HalpLbrSyncBarrier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48a1c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb44, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc489fc, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) lbr_sync_barrier;
    
    // [HalpLeaveDmaDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bf54c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x501aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bf43c, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) leave_dma_domain;
    
    // [HalpLMStubEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eff72, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423ff2, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1852, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) lm_stub_end;
    
    // [HalpLmceNotSupportedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc505f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a380, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505f8, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) lmce_not_supported_count;
    
    // [HalpLmceSupportedCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4ef8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17978, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ef8, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) lmce_supported_count;
    
    // [HalpMcExportAllData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7790e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86aae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77b380, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) mc_export_all_data;
    
    // [HalpMcExportAndChargeNeededData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x779018, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86aa74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77b2b8, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) mc_export_and_charge_needed_data;
    
    // [HalpMcUpdateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49608, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60708, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495e8, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) mc_update_data;
    
    // [HalpMcUpdateDataCharged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60700, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495e0, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) mc_update_data_charged;
    
    // [HalpMcUpdateDataSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49618, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60718, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495f8, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) mc_update_data_size;
    
    // [HalpMcUpdateExportDataFunc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc495e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc606e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495c8, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) mc_update_export_data_func;
    
    // [HalpMcUpdateMicrocodeFuncEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc495d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc606d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495b8, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) mc_update_microcode_func_ex;
    
    // [HalpMcUpdateMinVerSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49591, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc606c3, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49571, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) mc_update_min_ver_supported;
    
    // [HalpMcUpdateSelfHosting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49590, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc606c2, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49570, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) mc_update_self_hosting;
    
    // [HalpMcaAMDIsMemoryError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7864, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5d44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7734, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) mca_amd_is_memory_error;
    
    // [HalpMcaExtendedLogGetL1DirectoryBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b4a24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2ecc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b48f4, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) mca_extended_log_get_l1_directory_base;
    
    // [HalpMcaExtendedLogInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b4b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2fdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b4a00, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) mca_extended_log_initialize;
    
    // [HalpMcaExtendedLoggingSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4bea, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17642, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4bea, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) mca_extended_logging_supported;
    
    // [HalpMcaInitializeErrorSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b4cb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3158, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b4b80, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) mca_initialize_error_section;
    
    // [HalpMcaOverflowRecoverySupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4ddc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17835, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ddc, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) mca_overflow_recovery_supported;
    
    // [HalpMcaPopulateErrorData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b4d4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f322c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b4c1c, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) mca_populate_error_data;
    
    // [HalpMcaProcessorBankConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c3b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c04c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d878, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) mca_processor_bank_config;
    
    // [HalpMcaProcessorBankConfigAmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b79ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5e68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b78bc, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) mca_processor_bank_config_amd;
    
    // [HalpMcaReadErrorCorrected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5ebc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7910, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) mca_read_error_corrected;
    
    // [HalpMcaReadErrorUncorrectedAMD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5f48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b79e0, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) mca_read_error_uncorrected_amd;
    
    // [HalpMcaScalableRasSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4f08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17988, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f08, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) mca_scalable_ras_supported;
    
    // [HalpMceLocalHandlingLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4dd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17828, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4dd0, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) mce_local_handling_lock;
    
    // [HalpMceMemoryErrorRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca828, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca718, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) mce_memory_error_recovery;
    
    // [HalpMceRecoveryMemoryErrorAmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507b70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca830, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) mce_recovery_memory_error_amd;
    
    // [HalpMceRecoveryMemoryErrorIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4caa2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507c8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca91c, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) mce_recovery_memory_error_intel;
    
    // [HalpMceRecoveryNotRequiredAmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cab6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507e04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4caa5c, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) mce_recovery_not_required_amd;
    
    // [HalpMceRecoveryNotRequiredIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cac34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cab24, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) mce_recovery_not_required_intel;
    
    // [HalpMceRecoveryRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cad28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507f4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cac18, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) mce_recovery_required;
    
    // [HalpMemoryErrorDeferredHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca47c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca36c, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) memory_error_deferred_handler;
    
    // [HalpMemoryErrorDeferredRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508454, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca3f0, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) memory_error_deferred_recovery;
    
    // [HalpMiscInitializeKsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aa7fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8343cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b217c, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) misc_initialize_ksr;
    
    // [HalpMmAllocateAndInsertPageTablePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b66f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6fa0, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) mm_allocate_and_insert_page_table_page;
    
    // [HalpMmEarlyPhysicalPagesAllocated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4b820, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63860, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4b800, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) mm_early_physical_pages_allocated;
    
    // [HalpMmFreeTiledMemoryMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll PAGELK:0x607a4, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x996420, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0x9957c0, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) mm_free_tiled_memory_map;
    
    // [HalpMmGetPteAddressSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b6e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3be0dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7700, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) mm_get_pte_address_safe;
    
    // [HalpMmIsInsideHalVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b70f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6fc4, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) mm_is_inside_hal_va;
    
    // [HalpMmReservePageTablePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b655c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb8d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6e0c, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) mm_reserve_page_table_pages;
    
    // [HalpMmZeroPageWithTemporaryMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b6778, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3be1c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7028, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) mm_zero_page_with_temporary_mapping;
    
    // [HalpNumaCompareMemorySideCacheEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8bc40, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7d180, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8aec0, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) numa_compare_memory_side_cache_entries;
    
    // [HalpNumaCompareMemorySideCacheNodeAndLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x863294, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9304e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8616c4, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) numa_compare_memory_side_cache_node_and_level;
    
    // [HalpNumaParseHmat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8bc64, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7d1a4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8aee4, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) numa_parse_hmat;
    
    // [HalpNumaQueryMemorySideCacheInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b6b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be710, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) numa_query_memory_side_cache_info;
    
    // [HalpOriginalHeapEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc50728, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50728, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) original_heap_end;
    
    // [HalpOriginalHeapStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc50710, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50710, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) original_heap_start;
    
    // [HalpPCIAcquireConfigSpaceLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x253794, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a1f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3035d4, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) pci_acquire_config_space_lock;
    
    // [HalpPciConvertDevicePathToRid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c6b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d21d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6a20, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) pci_convert_device_path_to_rid;
    
    // [HalpPciMultiBaseAddressSegmentAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49260, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6039c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49240, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) pci_multi_base_address_segment_allowed;
    
    // [HalpPciReadSecondaryBusNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c6bec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6adc, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) pci_read_secondary_bus_number;
    
    // [HalpPeiInterruptHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9f90, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) pei_interrupt_handler;
    
    // [HalpPerfInterruptHandlerRegistrationLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4add0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62bf8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4adb0, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) perf_interrupt_handler_registration_lock;
    
    // [HalpPmemErrorDeferredHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca61c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50855c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca50c, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) pmem_error_deferred_handler;
    
    // [HalpPmemErrorDeferredRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca718, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50865c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca608, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) pmem_error_deferred_recovery;
    
    // [HalpPmuInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .data:0x4fc78, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf482c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf482c, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) pmu_in_use;
    
    // [HalpProcBlkInterruptInitTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc05480, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc08d90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc054c0, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) proc_blk_interrupt_init_table;
    
    // [HalpProcIsSmtDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa69d1c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3fb90, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa693f4, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) proc_is_smt_disabled;
    
    // [HalpProcessorFence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x173a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efcb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f1590, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) processor_fence;
    
    // [HalpProcessorTraceInterruptHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4f18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17990, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f18, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) processor_trace_interrupt_handler;
    
    // [HalpProfileFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4adc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62bd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4ada0, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) profile_features;
    
    // [HalpPteReserveResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x12738, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b77e0, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) pte_reserve_resources;
    
    // [HalpQueryHeterogeneousMemoryAttributesInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67453c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e78d0, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) query_heterogeneous_memory_attributes_interface;
    
    // [HalpQueryPerDeviceMsiLimitInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x674550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e78e4, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) query_per_device_msi_limit_information;
    
    // [HalpQueryProfileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x756fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fa14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e9f8, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) query_profile_information;
    
    // [HalpReadExtendedMcaRegistersAMD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7bdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5fa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7aac, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) read_extended_mca_registers_amd;
    
    // [HalpReadExtendedMcaRegistersIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b7d58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6128, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7c28, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) read_extended_mca_registers_intel;
    
    // [HalpReadGenericErrorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x428c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ca0c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4c9fb8, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) read_generic_error_info;
    
    // [HalpRegisterPeiErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca154, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507728, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca044, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) register_pei_error_source;
    
    // [HalpReleaseHighLevelLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0xf088, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cad8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4cac7c, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) release_high_level_lock;
    
    // [HalpReleaseSecondaryIcEntryExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4cb9f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508fd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb8e0, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) release_secondary_ic_entry_exclusive;
    
    // [HalpRemapVirtualAddress64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2538b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a4dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3036f8, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) remap_virtual_address64;
    
    // [HalpRemoveProfileSourceFromList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b97ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f7d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b96bc, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) remove_profile_source_from_list;
    
    // [HalpRequestGenericErrorRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ca810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca700, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) request_generic_error_recovery;
    
    // [HalpRidAliasList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc49ce0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cc0, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) rid_alias_list;
    
    // [HalpRtcSkipApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4150, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e060, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4150, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) rtc_skip_api;
    
    // [HalpSetShutdownResetHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b8af8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b89c8, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) set_shutdown_reset_handler;
    
    // [HalpSfiTimerAcknowledgeInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x357c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cfcd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4cfbc0, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) sfi_timer_acknowledge_interrupt;
    
    // [HalpSfiTimerArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x357e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cfd00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4cfbf0, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) sfi_timer_arm;
    
    // [HalpSfiTimerDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x13204, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a860c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6fcc, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) sfi_timer_discover;
    
    // [HalpSfiTimerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x358e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cfe00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4cfcf0, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) sfi_timer_initialize;
    
    // [HalpSfiTimerQueryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x35a00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cff20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4cfe10, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) sfi_timer_query_counter;
    
    // [HalpSfiTimerStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x35a30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cff50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4cfe40, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) sfi_timer_stop;
    
    // [HalpShutdownReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b8d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8bf0, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) shutdown_reset;
    
    // [HalpStartPccCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x863ec8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8622f8, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) start_pcc_command;
    
    // [HalpSzBlockedHaltProfPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xe618, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12000, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe0c8, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) sz_blocked_halt_prof_policy;
    
    // [HalpSzDmaSecurityEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb1f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x132b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa9a8, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) sz_dma_security_enabled;
    
    // [HalpSzEnhancedTscSyncPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .rdata:0x3df78, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe728, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe1d8, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) sz_enhanced_tsc_sync_policy;
    
    // [HalpSzLegacyTscSyncPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .rdata:0x3df90, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe740, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe1f0, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) sz_legacy_tsc_sync_policy;
    
    // [HalpSzRelaxedHaltProfPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xe5f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12020, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe0a8, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) sz_relaxed_halt_prof_policy;
    
    // [HalpSzRestrictedHaltProfPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xe5d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12060, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe088, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) sz_restricted_halt_prof_policy;
    
    // [HalpSzWatchdogPhysicalOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xe6e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12080, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe190, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) sz_watchdog_physical_only;
    
    // [HalpTiledCr3Addresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .data:0x4bb88, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49df0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49dd0, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) tiled_cr3_addresses;
    
    // [HalpTimerBuildKnownResourceIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a9dd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9914, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8794, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) timer_build_known_resource_id_string;
    
    // [HalpTimerClockStatePeriodic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .data:0x4d738, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c2b2, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4c292, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) timer_clock_state_periodic;
    
    // [HalpTimerCreateReferencePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a769c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c16ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a605c, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) timer_create_reference_page;
    
    // [HalpTimerGetProfilingHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x17d7c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bbef8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4bbdc8, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) timer_get_profiling_handler;
    
    // [HalpTimerGetReferencePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x360f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390cb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3623d0, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) timer_get_reference_page;
    
    // [HalpTimerGetSkip]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eab60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebc30, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) timer_get_skip;
    
    // [HalpTimerInitializeVpptClockTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3822b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8a64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x383070, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) timer_initialize_vppt_clock_timer;
    
    // [HalpTimerMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b1074, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee284, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0f44, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) timer_mark_hiber_phase;
    
    // [HalpTimerPropagateQpcBiasUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a137c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3baca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a283c, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) timer_propagate_qpc_bias_update;
    
    // [HalpTimerQueryHostPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b1130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1000, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) timer_query_host_performance_counter;
    
    // [HalpTimerQueryProfileAvailability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x2a6e8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bbf64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4bbe34, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) timer_query_profile_availability;
    
    // [HalpTimerQueryWatchdogType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b11a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1070, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) timer_query_watchdog_type;
    
    // [HalpTimerReferencePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4bf18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64020, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bef8, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) timer_reference_page;
    
    // [HalpTimerSetProfilingHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x17d84, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc064, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4bbf34, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) timer_set_profiling_handler;
    
    // [HalpTimerSetSkip]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eab80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x422060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebc50, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) timer_set_skip;
    
    // [HalpTimerSkipApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2d28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1ce8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2a40, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) timer_skip_api;
    
    // [HalpTimerWatchdogPhysicalOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4a401, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62199, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a3e1, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) timer_watchdog_physical_only;
    
    // [HalpTimerWatchdogQueryDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3610a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bcbd0, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) timer_watchdog_query_due_time;
    
    // [HalpTimerWatchdogWakeSetDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38f4ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39af5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3904fc, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) timer_watchdog_wake_set_due_time;
    
    // [HalpTopologyInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x98d2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c2e0, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) topology_init_system;
    
    // [HalpTscAdjustToLeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0xaed4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x398518, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3999d8, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) tsc_adjust_to_leader;
    
    // [HalpTscAdjustToTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x6d70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bb648, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4bb518, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) tsc_adjust_to_target;
    
    // [HalpTscAdvSynchComputeMinimumDelta]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x34e14, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bb70c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4bb5dc, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) tsc_adv_synch_compute_minimum_delta;
    
    // [HalpTscFenceRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48bd4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd14, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48bb4, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) tsc_fence_required;
    
    // [HalpTscQueryCounterOrdered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3613d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3911a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362800, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) tsc_query_counter_ordered;
    
    // [HalpTscSyncPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .data:0x4b75c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4ac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4a48c, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) tsc_sync_policy;
    
    // [HalpUpdatePerDeviceMsiLimitInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6eb54, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5b510, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e10c, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) update_per_device_msi_limit_information;
    
    // [HalpUsbLegacyDeviceHandoff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c5168, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0fb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5ed8, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) usb_legacy_device_handoff;
    
    // [HalpUsbLegacyScanBusForHandoff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b5bac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ca344, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b645c, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) usb_legacy_scan_bus_for_handoff;
    
    // [HalpUsbLegacyStopOhciInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d191c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fbb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d180c, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) usb_legacy_stop_ohci_interrupt;
    
    // [HalpUsbLegacyStopUhciInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d1a48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fcdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1938, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) usb_legacy_stop_uhci_interrupt;
    
    // [HalpVerifyGenericError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4b57f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3dd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b56c8, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) verify_generic_error;
    
    // [HalpVerifyHmatEntryValidity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8c0f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7d6d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b378, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) verify_hmat_entry_validity;
    
    // [HalpVpptInitializePhysicalTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bb164, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f98d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bb034, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) vppt_initialize_physical_timer;
    
    // [HalpVpptRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4a510, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc622b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4f0, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) vppt_registered;
    
    // [HalpVpptSkipApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4a4f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62290, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4d0, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) vppt_skip_api;
    
    // [HalpWatchdogCheckPreResetNMI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bcf00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb7a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bce00, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) watchdog_check_pre_reset_nmi;
    
    // [HalpWatchdogWakeDueTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4a430, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc621c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a410, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) watchdog_wake_due_time;
    
    // [HalpWheaReadMsrAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c9d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5074f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9c80, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) whea_read_msr_address;
    
    // [HalpWheaReadMsrMisc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4c9de8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507548, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9cd8, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) whea_read_msr_misc;
    
    // [HalpWheaReadMsrStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c31c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c056c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d7dc, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) whea_read_msr_status;
    
    // [HalpWheaWriteMsrControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c3e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c046c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d8a8, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) whea_write_msr_control;
    
    // [HalpWheaWriteMsrStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39c370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0424, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d830, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) whea_write_msr_status;
    
    // [HalpAcpiAccessSecureAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3adc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cd100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45cd20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccff0, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) acpi_access_secure_address;
    
    // [HalpAcpiAllocateMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x123bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6b58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bdbb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7408, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) acpi_allocate_memory;
    
    // [HalpAcpiAoacCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ac30, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b6cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be850, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) acpi_aoac_capable;
    
    // [HalpAcpiCacheOverrideTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6fa54, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8b380, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7cce4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8a600, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) acpi_cache_override_tables;
    
    // [HalpAcpiCacheTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1228c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bdc84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b72c0, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) acpi_cache_table;
    
    // [HalpAcpiCalculateCacheSizeForOverrideTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6faec, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8b420, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7cd84, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8a6a0, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) acpi_calculate_cache_size_for_override_tables;
    
    // [HalpAcpiCheckAndMapTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3c18, 0x11e8 bytes
    // ntoskrnl.exe .text:0x35dc78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30aacc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f8c68, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) acpi_check_and_map_table;
    
    // [HalpAcpiCopyBiosTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x122f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6a78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bdb2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7328, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) acpi_copy_bios_table;
    
    // [HalpAcpiDetectMachineSpecificActions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b288, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5d4dc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb52228, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d37c, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) acpi_detect_machine_specific_actions;
    
    // [HalpAcpiFacsMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d790, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a360, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505d8, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) acpi_facs_mapping;
    
    // [HalpAcpiFallbackOnLegacyConfigMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d4e0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa366b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb21160, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36050, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) acpi_fallback_on_legacy_config_method;
    
    // [HalpAcpiFindRsdp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6a8b4, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c930, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f674, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c7d0, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) acpi_find_rsdp;
    
    // [HalpAcpiFlushCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3b890, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37df30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f2b0, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) acpi_flush_cache;
    
    // [HalpAcpiGetAllTablesWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x120cc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6844, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd958, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b70f4, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) acpi_get_all_tables_work;
    
    // [HalpAcpiGetCachedTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x409c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x35fa84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30cb24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f88a4, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) acpi_get_cached_table;
    
    // [HalpAcpiGetFacsMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa338, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b5b18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c23c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b63c8, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) acpi_get_facs_mapping;
    
    // [HalpAcpiGetRsdt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3dd4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x35f7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30c860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f85d8, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) acpi_get_rsdt;
    
    // [HalpAcpiGetTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3f10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x35f8f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30c990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f8710, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) acpi_get_table;
    
    // [HalpAcpiGetTableFromBios]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a74, 0x11e8 bytes
    // ntoskrnl.exe .text:0x35dad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30a920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f8ac0, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) acpi_get_table_from_bios;
    
    // [HalpAcpiGetTableWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3f8c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x35f970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30ca10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f8790, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) acpi_get_table_work;
    
    // [HalpAcpiIBMExaMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x70a40, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8cc40, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e830, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bec0, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) acpi_ibm_exa_match;
    
    // [HalpAcpiIBMVigilMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x70a70, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8cc80, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e870, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bf00, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) acpi_ibm_vigil_match;
    
    // [HalpAcpiInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b684, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c208, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb519e4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c0a8, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) acpi_init_discard;
    
    // [HalpAcpiInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x613b0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99c2b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7cf40, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b330, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) acpi_init_system;
    
    // [HalpAcpiInitializePmRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b34c, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5d578, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb51d84, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d418, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) acpi_initialize_pm_registers;
    
    // [HalpAcpiIsCachedTableCompromised]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x411c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x35fb0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30cbac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f892c, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) acpi_is_cached_table_compromised;
    
    // [HalpAcpiMpst]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d740, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c2c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2a8, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) acpi_mpst;
    
    // [HalpAcpiMsct]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db28, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49688, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60840, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49668, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) acpi_msct;
    
    // [HalpAcpiMultiNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d788, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a358, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505d0, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) acpi_multi_node;
    
    // [HalpAcpiPmRegisterAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14e60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x378840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d4020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379bc0, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) acpi_pm_register_available;
    
    // [HalpAcpiPmRegisterRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14e80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x394fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396020, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) acpi_pm_register_read;
    
    // [HalpAcpiPmRegisterReadPciConfigSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) acpi_pm_register_read_pci_config_space;
    
    // [HalpAcpiPmRegisterReadPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14ee0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x395a20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3da4e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396a80, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) acpi_pm_register_read_port;
    
    // [HalpAcpiPmRegisterReadRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3ae40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cd060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccf50, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) acpi_pm_register_read_register;
    
    // [HalpAcpiPmRegisterWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14470, 0x11e8 bytes
    // ntoskrnl.exe .text:0x378580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379900, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) acpi_pm_register_write;
    
    // [HalpAcpiPmRegisterWritePciConfigSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) acpi_pm_register_write_pci_config_space;
    
    // [HalpAcpiPmRegisterWritePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x144d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x379b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d5840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37af10, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) acpi_pm_register_write_port;
    
    // [HalpAcpiPmRegisterWriteRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3ae80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cd0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b3e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccfa0, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) acpi_pm_register_write_register;
    
    // [HalpAcpiPostSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f32c, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99237c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82480, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99138c, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) acpi_post_sleep;
    
    // [HalpAcpiPreSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f6a0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99274c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82720, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99175c, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) acpi_pre_sleep;
    
    // [HalpAcpiRealTimeToUtcTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d4e0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x86110c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92eb04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85f544, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) acpi_real_time_to_utc_time;
    
    // [HalpAcpiSetupPmRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b544, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5d77c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb51f88, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d61c, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) acpi_setup_pm_register;
    
    // [HalpAcpiSetupPmRegisterLegacy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b4f0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5d720, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb51f2c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d5c0, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) acpi_setup_pm_register_legacy;
    
    // [HalpAcpiSlit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff60, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49678, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60828, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49658, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) acpi_slit;
    
    // [HalpAcpiSrat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db38, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49648, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc607e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49628, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) acpi_srat;
    
    // [HalpAcpiTableCacheInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6ab28, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5cd30, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f06c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5cbd0, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) acpi_table_cache_init;
    
    // [HalpAcpiTableCacheList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dbc0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcdb300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7dd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb300, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) acpi_table_cache_list;
    
    // [HalpAcpiTableCacheLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d700, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bd80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63e80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bd60, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) acpi_table_cache_lock;
    
    // [HalpAcpiTableMatchList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x70b20, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa973e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8ad30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa965d0, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) acpi_table_match_list;
    
    // [HalpAcpiTablePointers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d780, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a348, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505c8, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) acpi_table_pointers;
    
    // [HalpAcpiValidateAcpiTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1236c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6b00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bdc30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b73b0, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) acpi_validate_acpi_table;
    
    // [HalpAcpiVerifiedTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e360, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x11c50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x16c10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x11990, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) acpi_verified_table;
    
    // [HalpAcquireCmosSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1344, 0x11e8 bytes
    // ntoskrnl.exe .text:0x25517c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38fb44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20215c, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) acquire_cmos_spin_lock;
    
    // [HalpAcquireCmosSpinLockAndWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x131c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x25514c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38fb10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20212c, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) acquire_cmos_spin_lock_and_wait;
    
    // [HalpAcquireHighLevelLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf668, 0x11e8 bytes
    // ntoskrnl.exe .text:0x374850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc5e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375bd0, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) acquire_high_level_lock;
    
    // [HalpAcquirePccInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5db7c, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863ac4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930f88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861ef4, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) acquire_pcc_interface;
    
    // [HalpAcquireSecondaryIcEntryExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x289e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cae00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cacf0, 0x1fe000 bytes
    //
    _t68(sdk::unknown_ptr) acquire_secondary_ic_entry_exclusive;
    
    // [HalpAcquiredInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4acc8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fc28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48ae8, 0x1fe000 bytes
    //
    _t69(sdk::unknown_ptr) acquired_interface;
    
    // [HalpAddAdapterToList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbf28, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37547c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3558dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3767fc, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) add_adapter_to_list;
    
    // [HalpAddAdapterToSystemList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x24ec4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c871c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504cbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c860c, 0x1fe000 bytes
    //
    _t71(sdk::unknown_ptr) add_adapter_to_system_list;
    
    // [HalpAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59050, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x78bfd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x833530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x795d70, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) add_device;
    
    // [HalpAddMcaToMemoryErrorSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x37964, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1d4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3830, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) add_mca_to_memory_error_section;
    
    // [HalpAddMcaToProcessorGenericSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x379f8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b39f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1ddc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b38c8, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) add_mca_to_processor_generic_section;
    
    // [HalpAddMcaToProcessorSpecificSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x37b6c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3ba8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3a78, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) add_mca_to_processor_specific_section;
    
    // [HalpAddressUsageList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INITDATA:0x710d0, 0x11e8 bytes
    // ntoskrnl.exe INITDATA:0xd54698, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f680, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54698, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) address_usage_list;
    
    // [HalpAllocPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6a1d8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5d160, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3ecd4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d000, 0x1fe000 bytes
    //
    _t77(sdk::unknown_ptr) alloc_physical_memory;
    
    // [HalpAllocateAdapterCallbackV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16e20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c7120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ba80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7010, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) allocate_adapter_callback_v2;
    
    // [HalpAllocateAdapterCallbackV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x139a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39ab10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39bfd0, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) allocate_adapter_callback_v3;
    
    // [HalpAllocateAdapterChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x45b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c49a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5038e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4890, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) allocate_adapter_channel;
    
    // [HalpAllocateCR3Root]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10280, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c6678, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dce14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7548, 0x1fe000 bytes
    //
    _t81(sdk::unknown_ptr) allocate_cr3_root;
    
    // [HalpAllocateDmaChannels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x24f50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c885c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c874c, 0x1fe000 bytes
    //
    _t82(sdk::unknown_ptr) allocate_dma_channels;
    
    // [HalpAllocateEarlyPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29910, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6e90, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) allocate_early_pages;
    
    // [HalpAllocateGsivForSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28a60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4caee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cadd0, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) allocate_gsiv_for_secondary_interrupt;
    
    // [HalpAllocateHalCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x277a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3784, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1b18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3654, 0x1fe000 bytes
    //
    _t85(sdk::unknown_ptr) allocate_hal_counters;
    
    // [HalpAllocateKInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10e00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39dd98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd08c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f258, 0x1fe000 bytes
    //
    _t86(sdk::unknown_ptr) allocate_k_interrupt;
    
    // [HalpAllocateMapRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c100, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8619a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85fdd0, 0x1fe000 bytes
    //
    _t87(sdk::unknown_ptr) allocate_map_registers;
    
    // [HalpAllocateNumaConfigData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6a730, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5cb8c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb525e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ca2c, 0x1fe000 bytes
    //
    _t88(sdk::unknown_ptr) allocate_numa_config_data;
    
    // [HalpAllocatePmcCounterSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27910, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8e00, 0x1fe000 bytes
    //
    _t89(sdk::unknown_ptr) allocate_pmc_counter_set;
    
    // [HalpAllocateScratchMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGEKD:0x678cc, 0x11e8 bytes
    // ntoskrnl.exe PAGEKD:0x9b3e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9f920, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b2e90, 0x1fe000 bytes
    //
    _t90(sdk::unknown_ptr) allocate_scratch_memory;
    
    // [HalpAllocationDescriptorArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4be20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc04e10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc07110, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04e50, 0x1fe000 bytes
    //
    _t91(sdk::unknown_ptr) allocation_descriptor_array;
    
    // [HalpAlwaysOnCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fca8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64080, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf60, 0x1fe000 bytes
    //
    _t92(sdk::unknown_ptr) always_on_counter;
    
    // [HalpAlwaysOnTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcb0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64048, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf20, 0x1fe000 bytes
    //
    _t93(sdk::unknown_ptr) always_on_timer;
    
    // [HalpApic1EndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17640, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3eff90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1870, 0x1fe000 bytes
    //
    _t94(sdk::unknown_ptr) apic1_end_of_interrupt;
    
    // [HalpApic1ReadRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3510, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3611e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362610, 0x1fe000 bytes
    //
    _t95(sdk::unknown_ptr) apic1_read_register;
    
    // [HalpApic1WaitForIcr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe150, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a2c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4160, 0x1fe000 bytes
    //
    _t96(sdk::unknown_ptr) apic1_wait_for_icr;
    
    // [HalpApic1WriteIcr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3260, 0x11e8 bytes
    // ntoskrnl.exe .text:0x23fff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed580, 0x1fe000 bytes
    //
    _t97(sdk::unknown_ptr) apic1_write_icr;
    
    // [HalpApic1WriteRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1850, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362630, 0x1fe000 bytes
    //
    _t98(sdk::unknown_ptr) apic1_write_register;
    
    // [HalpApicClearLocalUnitError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe290, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a30e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4610, 0x1fe000 bytes
    //
    _t99(sdk::unknown_ptr) apic_clear_local_unit_error;
    
    // [HalpApicClusterModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8f8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50890, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17af0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50890, 0x1fe000 bytes
    //
    _u00(sdk::unknown_ptr) apic_cluster_mode_enabled;
    
    // [HalpApicConvertFromRte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f9c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d701c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5154ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6f0c, 0x1fe000 bytes
    //
    _u01(sdk::unknown_ptr) apic_convert_from_rte;
    
    // [HalpApicConvertId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2fb70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d71e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e63d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d70d0, 0x1fe000 bytes
    //
    _u02(sdk::unknown_ptr) apic_convert_id;
    
    // [HalpApicConvertToRte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf300, 0x11e8 bytes
    // ntoskrnl.exe .text:0x379198, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8964, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a518, 0x1fe000 bytes
    //
    _u03(sdk::unknown_ptr) apic_convert_to_rte;
    
    // [HalpApicCpuApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b870, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48a40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a20, 0x1fe000 bytes
    //
    _u04(sdk::unknown_ptr) apic_cpu_api;
    
    // [HalpApicDeinitializeLocalUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2fbe0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d7290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5156b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d7180, 0x1fe000 bytes
    //
    _u05(sdk::unknown_ptr) apic_deinitialize_local_unit;
    
    // [HalpApicDescribeLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc12c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8cd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9c2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a7698, 0x1fe000 bytes
    //
    _u06(sdk::unknown_ptr) apic_describe_lines;
    
    // [HalpApicDescribeLocalLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc3f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8d64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9cb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a7724, 0x1fe000 bytes
    //
    _u07(sdk::unknown_ptr) apic_describe_local_lines;
    
    // [HalpApicDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12e18, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0f18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a7440, 0x1fe000 bytes
    //
    _u08(sdk::unknown_ptr) apic_discover;
    
    // [HalpApicEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d938, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50850, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a638, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50850, 0x1fe000 bytes
    //
    _u09(sdk::unknown_ptr) apic_end_of_interrupt;
    
    // [HalpApicGenerateMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd090, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37ca90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384e50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37de10, 0x1fe000 bytes
    //
    _u10(sdk::unknown_ptr) apic_generate_message;
    
    // [HalpApicGetCpuInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15bbc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c8aa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e633c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9970, 0x1fe000 bytes
    //
    _u11(sdk::unknown_ptr) apic_get_cpu_info;
    
    // [HalpApicGetLocalUnitError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe2b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a3110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4640, 0x1fe000 bytes
    //
    _u12(sdk::unknown_ptr) apic_get_local_unit_error;
    
    // [HalpApicHvUpdateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ff90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc0d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbfc0, 0x1fe000 bytes
    //
    _u13(sdk::unknown_ptr) apic_hv_update_callback;
    
    // [HalpApicInitializeIoUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11cd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a0da0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a2260, 0x1fe000 bytes
    //
    _u14(sdk::unknown_ptr) apic_initialize_io_unit;
    
    // [HalpApicInitializeLocalUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe8d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39cfe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b80d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e4a0, 0x1fe000 bytes
    //
    _u15(sdk::unknown_ptr) apic_initialize_local_unit;
    
    // [HalpApicIsCmciImplemented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15b44, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c8a00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e629c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c98d0, 0x1fe000 bytes
    //
    _u16(sdk::unknown_ptr) apic_is_cmci_implemented;
    
    // [HalpApicQueryAndGetSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2fc30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x24fe70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fd640, 0x1fe000 bytes
    //
    _u17(sdk::unknown_ptr) apic_query_and_get_source;
    
    // [HalpApicRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d908, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50820, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50820, 0x1fe000 bytes
    //
    _u18(sdk::unknown_ptr) apic_read;
    
    // [HalpApicRegisterIoUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12bd8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a74f0, 0x1fe000 bytes
    //
    _u19(sdk::unknown_ptr) apic_register_io_unit;
    
    // [HalpApicReplayLocalInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2fe40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5204c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df2f0, 0x1fe000 bytes
    //
    _u20(sdk::unknown_ptr) apic_replay_local_interrupts;
    
    // [HalpApicReplaySendSelfIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2fecc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df380, 0x1fe000 bytes
    //
    _u21(sdk::unknown_ptr) apic_replay_send_self_ipi;
    
    // [HalpApicRequestInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x23b280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x348ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e8f50, 0x1fe000 bytes
    //
    _u22(sdk::unknown_ptr) apic_request_interrupt;
    
    // [HalpApicRestoreNonX2ModeOnReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fde8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4fa4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a631, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4fa4, 0x1fe000 bytes
    //
    _u23(sdk::unknown_ptr) apic_restore_non_x2_mode_on_reset;
    
    // [HalpApicSaveLocalInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ff10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5205a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df3d0, 0x1fe000 bytes
    //
    _u24(sdk::unknown_ptr) apic_save_local_interrupts;
    
    // [HalpApicSetLineState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf250, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3790d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a450, 0x1fe000 bytes
    //
    _u25(sdk::unknown_ptr) apic_set_line_state;
    
    // [HalpApicSetLogicalId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe850, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a2690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x515700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3be0, 0x1fe000 bytes
    //
    _u26(sdk::unknown_ptr) apic_set_logical_id;
    
    // [HalpApicSetPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe820, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b91e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e6c0, 0x1fe000 bytes
    //
    _u27(sdk::unknown_ptr) apic_set_priority;
    
    // [HalpApicSetupRegisterAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf918, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d254, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b876c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e714, 0x1fe000 bytes
    //
    _u28(sdk::unknown_ptr) apic_setup_register_access;
    
    // [HalpApicStartProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe060, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a1eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3370, 0x1fe000 bytes
    //
    _u29(sdk::unknown_ptr) apic_start_processor;
    
    // [HalpApicTimerAcknowledgeInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _u30(sdk::unknown_ptr) apic_timer_acknowledge_interrupt;
    
    // [HalpApicTimerArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x255db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305150, 0x1fe000 bytes
    //
    _u31(sdk::unknown_ptr) apic_timer_arm;
    
    // [HalpApicTimerCpuApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ecc0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4170, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e080, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4170, 0x1fe000 bytes
    //
    _u32(sdk::unknown_ptr) apic_timer_cpu_api;
    
    // [HalpApicTimerDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1326c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a87dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0c9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a719c, 0x1fe000 bytes
    //
    _u33(sdk::unknown_ptr) apic_timer_discover;
    
    // [HalpApicTimerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x2689c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319860, 0x1fe000 bytes
    //
    _u34(sdk::unknown_ptr) apic_timer_initialize;
    
    // [HalpApicTimerIsInvariant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x133d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3aa034, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e75a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a89f4, 0x1fe000 bytes
    //
    _u35(sdk::unknown_ptr) apic_timer_is_invariant;
    
    // [HalpApicTimerQueryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb820, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c6650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e1da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7520, 0x1fe000 bytes
    //
    _u36(sdk::unknown_ptr) apic_timer_query_counter;
    
    // [HalpApicTimerSetInterruptVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5d70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3613c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3627f0, 0x1fe000 bytes
    //
    _u37(sdk::unknown_ptr) apic_timer_set_interrupt_vector;
    
    // [HalpApicTimerStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1530, 0x11e8 bytes
    // ntoskrnl.exe .text:0x268990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319830, 0x1fe000 bytes
    //
    _u38(sdk::unknown_ptr) apic_timer_stop;
    
    // [HalpApicUsingMsrs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d920, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50838, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50838, 0x1fe000 bytes
    //
    _u39(sdk::unknown_ptr) apic_using_msrs;
    
    // [HalpApicValidateSelfIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d930, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50848, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a630, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50848, 0x1fe000 bytes
    //
    _u40(sdk::unknown_ptr) apic_validate_self_ipi;
    
    // [HalpApicWaitForCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d900, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50818, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50818, 0x1fe000 bytes
    //
    _u41(sdk::unknown_ptr) apic_wait_for_command;
    
    // [HalpApicWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d910, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50828, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a618, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50828, 0x1fe000 bytes
    //
    _u42(sdk::unknown_ptr) apic_write;
    
    // [HalpApicWriteCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d928, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a628, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50840, 0x1fe000 bytes
    //
    _u43(sdk::unknown_ptr) apic_write_command;
    
    // [HalpApicWriteEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2fcd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d72e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x515850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d71d0, 0x1fe000 bytes
    //
    _u44(sdk::unknown_ptr) apic_write_end_of_interrupt;
    
    // [HalpApicX2EndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17660, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3effb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1890, 0x1fe000 bytes
    //
    _u45(sdk::unknown_ptr) apic_x2_end_of_interrupt;
    
    // [HalpApicX2Mode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcc8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf48b9, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a632, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48b9, 0x1fe000 bytes
    //
    _u46(sdk::unknown_ptr) apic_x2_mode;
    
    // [HalpApicX2ReadRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17eb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362650, 0x1fe000 bytes
    //
    _u47(sdk::unknown_ptr) apic_x2_read_register;
    
    // [HalpApicX2WaitForCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _u48(sdk::unknown_ptr) apic_x2_wait_for_command;
    
    // [HalpApicX2WriteCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ffa0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc0f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350c10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbfe0, 0x1fe000 bytes
    //
    _u49(sdk::unknown_ptr) apic_x2_write_command;
    
    // [HalpApicX2WriteRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17ed0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362670, 0x1fe000 bytes
    //
    _u50(sdk::unknown_ptr) apic_x2_write_register;
    
    // [HalpArmAcpiWakeAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58358, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x75c248, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x763bd8, 0x1fe000 bytes
    //
    _u51(sdk::unknown_ptr) arm_acpi_wake_alarm;
    
    // [HalpArtAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x130bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3aa2fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8cbc, 0x1fe000 bytes
    //
    _u52(sdk::unknown_ptr) art_available;
    
    // [HalpArtDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13074, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3aa29c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1918, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8c5c, 0x1fe000 bytes
    //
    _u53(sdk::unknown_ptr) art_discover;
    
    // [HalpArtInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35cb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b82a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0100, 0x1fe000 bytes
    //
    _u54(sdk::unknown_ptr) art_initialize;
    
    // [HalpArtQueryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35d50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d02c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21cd50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d01b0, 0x1fe000 bytes
    //
    _u55(sdk::unknown_ptr) art_query_counter;
    
    // [HalpAssignSlotResourcesStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5aca0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _u56(sdk::unknown_ptr) assign_slot_resources_stub;
    
    // [HalpAuditAcpiTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b768, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5d9f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb52048, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d890, 0x1fe000 bytes
    //
    _u57(sdk::unknown_ptr) audit_acpi_tables;
    
    // [HalpAuditAllocateRsdtArrayTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6bce8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5df7c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7ddd4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5de1c, 0x1fe000 bytes
    //
    _u58(sdk::unknown_ptr) audit_allocate_rsdt_array_table;
    
    // [HalpAuditEnumerateRsdts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6ba64, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5dcd8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7de7c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5db78, 0x1fe000 bytes
    //
    _u59(sdk::unknown_ptr) audit_enumerate_rsdts;
    
    // [HalpAuditEnumerateRsdtsInRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6baf8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5dd6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7df28, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5dc0c, 0x1fe000 bytes
    //
    _u60(sdk::unknown_ptr) audit_enumerate_rsdts_in_range;
    
    // [HalpAuditGetExtendedBiosDataArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6bc7c, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5df0c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e014, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ddac, 0x1fe000 bytes
    //
    _u61(sdk::unknown_ptr) audit_get_extended_bios_data_area;
    
    // [HalpAuditQuerySlicAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b8dc, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5db68, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e08c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5da08, 0x1fe000 bytes
    //
    _u62(sdk::unknown_ptr) audit_query_slic_addresses;
    
    // [HalpAuditResults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ac18, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48bb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fcf8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b98, 0x1fe000 bytes
    //
    _u63(sdk::unknown_ptr) audit_results;
    
    // [HalpAuditSelectRsdtOrXsdt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6bbcc, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5de48, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e228, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5dce8, 0x1fe000 bytes
    //
    _u64(sdk::unknown_ptr) audit_select_rsdt_or_xsdt;
    
    // [HalpAuditSlicTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b824, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5dab0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e2f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d950, 0x1fe000 bytes
    //
    _u65(sdk::unknown_ptr) audit_slic_tables;
    
    // [HalpAuditStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a91c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f2b4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cea4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f304, 0x1fe000 bytes
    //
    _u66(sdk::unknown_ptr) audit_status;
    
    // [HalpAuxiliaryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd08, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64070, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf50, 0x1fe000 bytes
    //
    _u67(sdk::unknown_ptr) auxiliary_counter;
    
    // [HalpAvoidMmConfigAccessMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d739, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c2c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2a0, 0x1fe000 bytes
    //
    _u68(sdk::unknown_ptr) avoid_mm_config_access_method;
    
    // [HalpBarrier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4aa00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48a28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb54, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a08, 0x1fe000 bytes
    //
    _u69(sdk::unknown_ptr) barrier;
    
    // [HalpBiosCallCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b8b8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bdb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63eb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bd98, 0x1fe000 bytes
    //
    _u70(sdk::unknown_ptr) bios_call_count;
    
    // [HalpBiosDisplayReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2d6c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b13f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4eea60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b12c0, 0x1fe000 bytes
    //
    _u71(sdk::unknown_ptr) bios_display_reset;
    
    // [HalpBroken440BX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c829, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49de8, 0x1fe000 bytes
    //
    _u72(sdk::unknown_ptr) broken440bx;
    
    // [HalpBugcheckInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9f0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a1e9, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61f41, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a1c9, 0x1fe000 bytes
    //
    _u73(sdk::unknown_ptr) bugcheck_in_progress;
    
    // [HalpBuildResumeStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5fe3c, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9949bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa81d78, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9939cc, 0x1fe000 bytes
    //
    _u74(sdk::unknown_ptr) build_resume_structures;
    
    // [HalpBuildScatterGatherList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x137ec, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39a934, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fea94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39bdf4, 0x1fe000 bytes
    //
    _u75(sdk::unknown_ptr) build_scatter_gather_list;
    
    // [HalpCachingRequirements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bdf8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4ae08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4ade8, 0x1fe000 bytes
    //
    _u76(sdk::unknown_ptr) caching_requirements;
    
    // [HalpCachingRequirementsEntryCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4be00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4ae10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4adf0, 0x1fe000 bytes
    //
    _u77(sdk::unknown_ptr) caching_requirements_entry_count;
    
    // [HalpCalculateScatterGatherListSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x30c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x23ab90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e8200, 0x1fe000 bytes
    //
    _u78(sdk::unknown_ptr) calculate_scatter_gather_list_size;
    
    // [HalpCallWakeAlarmDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d258, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9308dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861930, 0x1fe000 bytes
    //
    _u79(sdk::unknown_ptr) call_wake_alarm_driver;
    
    // [HalpChannelAscendingSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x708c0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8c550, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e6a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b7d0, 0x1fe000 bytes
    //
    _u80(sdk::unknown_ptr) channel_ascending_sort;
    
    // [HalpChannelAssignmentSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x708e0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8c570, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e6c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b7f0, 0x1fe000 bytes
    //
    _u81(sdk::unknown_ptr) channel_assignment_sort;
    
    // [HalpChannelInitializeStaticConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b008, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c8e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb52590, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c780, 0x1fe000 bytes
    //
    _u82(sdk::unknown_ptr) channel_initialize_static_configuration;
    
    // [HalpChannelMemoryRangeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4acd8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48af8, 0x1fe000 bytes
    //
    _u83(sdk::unknown_ptr) channel_memory_range_count;
    
    // [HalpChannelMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4acd0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48af0, 0x1fe000 bytes
    //
    _u84(sdk::unknown_ptr) channel_memory_ranges;
    
    // [HalpChannelMpnIdSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x70920, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8c5a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e700, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b820, 0x1fe000 bytes
    //
    _u85(sdk::unknown_ptr) channel_mpn_id_sort;
    
    // [HalpChannelPowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5dc68, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863bc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861ff8, 0x1fe000 bytes
    //
    _u86(sdk::unknown_ptr) channel_power_request;
    
    // [HalpCheckFixedWakeSources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f838, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x992900, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8297c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x991910, 0x1fe000 bytes
    //
    _u87(sdk::unknown_ptr) check_fixed_wake_sources;
    
    // [HalpCheckInterruptType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28ac4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4caf4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6f38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cae3c, 0x1fe000 bytes
    //
    _u88(sdk::unknown_ptr) check_interrupt_type;
    
    // [HalpCheckLowMemoryPreSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x639a8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a54bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82bc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a442c, 0x1fe000 bytes
    //
    _u89(sdk::unknown_ptr) check_low_memory_pre_sleep;
    
    // [HalpCheckNumaConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3aa18, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509698, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cc020, 0x1fe000 bytes
    //
    _u90(sdk::unknown_ptr) check_numa_configuration;
    
    // [HalpCheckPowerButton]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29ae0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ea7e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x421f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3eb8b0, 0x1fe000 bytes
    //
    _u91(sdk::unknown_ptr) check_power_button;
    
    // [HalpCheckSecondaryInterruptSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58354, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x67a484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed7f8, 0x1fe000 bytes
    //
    _u92(sdk::unknown_ptr) check_secondary_interrupt_supported;
    
    // [HalpCheckWakeupTimeAndAdjust]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29eb8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cce18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50aec4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccd08, 0x1fe000 bytes
    //
    _u93(sdk::unknown_ptr) check_wakeup_time_and_adjust;
    
    // [HalpChipHackCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8d0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc5087c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a668, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5087c, 0x1fe000 bytes
    //
    _u94(sdk::unknown_ptr) chip_hack_count;
    
    // [HalpChipHacksTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8d8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50888, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a670, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50888, 0x1fe000 bytes
    //
    _u95(sdk::unknown_ptr) chip_hacks_table;
    
    // [HalpClaimDebugResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29788, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9868, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f7f8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9738, 0x1fe000 bytes
    //
    _u96(sdk::unknown_ptr) claim_debug_resource;
    
    // [HalpClockTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d870, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64030, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf08, 0x1fe000 bytes
    //
    _u97(sdk::unknown_ptr) clock_timer;
    
    // [HalpClockWorkUnion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4baa0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a568, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62318, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a548, 0x1fe000 bytes
    //
    _u98(sdk::unknown_ptr) clock_work_union;
    
    // [HalpCmcContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d990, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50630, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a3c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50630, 0x1fe000 bytes
    //
    _u99(sdk::unknown_ptr) cmc_context;
    
    // [HalpCmcDeferredRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36270, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b4070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3f40, 0x1fe000 bytes
    //
    _v00(sdk::unknown_ptr) cmc_deferred_routine;
    
    // [HalpCmcErrorPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d960, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a370, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505e8, 0x1fe000 bytes
    //
    _v01(sdk::unknown_ptr) cmc_error_packet;
    
    // [HalpCmcErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d948, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a378, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505f0, 0x1fe000 bytes
    //
    _v02(sdk::unknown_ptr) cmc_error_source;
    
    // [HalpCmcErrorSourceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d96c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50614, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a39c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50614, 0x1fe000 bytes
    //
    _v03(sdk::unknown_ptr) cmc_error_source_id;
    
    // [HalpCmcFallbackLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ecd0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xced440, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0ccc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xced440, 0x1fe000 bytes
    //
    _v04(sdk::unknown_ptr) cmc_fallback_lock;
    
    // [HalpCmcInitializeErrorPacketContents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60d5c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0848, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0648, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1658, 0x1fe000 bytes
    //
    _v05(sdk::unknown_ptr) cmc_initialize_error_packet_contents;
    
    // [HalpCmcInitializePolling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa67c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c06e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7e88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c14f0, 0x1fe000 bytes
    //
    _v06(sdk::unknown_ptr) cmc_initialize_polling;
    
    // [HalpCmcLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4dc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1781c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4dc8, 0x1fe000 bytes
    //
    _v07(sdk::unknown_ptr) cmc_lock;
    
    // [HalpCmcPollCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a90c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f294, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09954, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f2e4, 0x1fe000 bytes
    //
    _v08(sdk::unknown_ptr) cmc_poll_count;
    
    // [HalpCmcPollProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd64c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39c010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0364, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d4d0, 0x1fe000 bytes
    //
    _v09(sdk::unknown_ptr) cmc_poll_processor;
    
    // [HalpCmcPollingInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d969, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50611, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a399, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50611, 0x1fe000 bytes
    //
    _v10(sdk::unknown_ptr) cmc_polling_initialized;
    
    // [HalpCmcPollingStartDeferred]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd2c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4be8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17834, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4be8, 0x1fe000 bytes
    //
    _v11(sdk::unknown_ptr) cmc_polling_start_deferred;
    
    // [HalpCmcPollingStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe29, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4dcd, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a384, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4dcd, 0x1fe000 bytes
    //
    _v12(sdk::unknown_ptr) cmc_polling_started;
    
    // [HalpCmcReserveErrorPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ece0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xced450, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0ccd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xced450, 0x1fe000 bytes
    //
    _v13(sdk::unknown_ptr) cmc_reserve_error_packet;
    
    // [HalpCmcStartPolling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa728, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0a98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8458, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c18a8, 0x1fe000 bytes
    //
    _v14(sdk::unknown_ptr) cmc_start_polling;
    
    // [HalpCmcWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5daa0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x861730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x832d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85fb60, 0x1fe000 bytes
    //
    _v15(sdk::unknown_ptr) cmc_worker_routine;
    
    // [HalpCmciConfigurationLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ee38, 0x11e8 bytes
    // ntoskrnl.exe .data:0xced5b4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0ce48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xced5b4, 0x1fe000 bytes
    //
    _v16(sdk::unknown_ptr) cmci_configuration_loaded;
    
    // [HalpCmciDeferredRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7210, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3893f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389f10, 0x1fe000 bytes
    //
    _v17(sdk::unknown_ptr) cmci_deferred_routine;
    
    // [HalpCmciEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d959, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505e1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a36d, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505e1, 0x1fe000 bytes
    //
    _v18(sdk::unknown_ptr) cmci_enabled;
    
    // [HalpCmciHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36d74, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b7178, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f564c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7048, 0x1fe000 bytes
    //
    _v19(sdk::unknown_ptr) cmci_handler;
    
    // [HalpCmciImplementationChecked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4da41, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50744, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50744, 0x1fe000 bytes
    //
    _v20(sdk::unknown_ptr) cmci_implementation_checked;
    
    // [HalpCmciImplementationPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4da54, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50745, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4d5, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50745, 0x1fe000 bytes
    //
    _v21(sdk::unknown_ptr) cmci_implementation_present;
    
    // [HalpCmciInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60b50, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d104, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7a6ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c184, 0x1fe000 bytes
    //
    _v22(sdk::unknown_ptr) cmci_init;
    
    // [HalpCmciInitProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60c2c, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x995ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0174, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x995390, 0x1fe000 bytes
    //
    _v23(sdk::unknown_ptr) cmci_init_processor;
    
    // [HalpCmciInitializeErrorPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60cd8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d22c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c00b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c2ac, 0x1fe000 bytes
    //
    _v24(sdk::unknown_ptr) cmci_initialize_error_packet;
    
    // [HalpCmciLoadThresholdConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc1b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c08b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e4ea8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c16c8, 0x1fe000 bytes
    //
    _v25(sdk::unknown_ptr) cmci_load_threshold_configuration;
    
    // [HalpCmciPollProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd628, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39bfac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0264, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d46c, 0x1fe000 bytes
    //
    _v26(sdk::unknown_ptr) cmci_poll_processor;
    
    // [HalpCmciRevertToPolledMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd28, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4be4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a368, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4be4, 0x1fe000 bytes
    //
    _v27(sdk::unknown_ptr) cmci_revert_to_polled_mode;
    
    // [HalpCmciSetProcessorConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd714, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39c0f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0064, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d5b8, 0x1fe000 bytes
    //
    _v28(sdk::unknown_ptr) cmci_set_processor_config;
    
    // [HalpCmciSetProcessorConfigAMD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36ee4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b74d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f59a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b73a0, 0x1fe000 bytes
    //
    _v29(sdk::unknown_ptr) cmci_set_processor_config_amd;
    
    // [HalpCmciSetProcessorConfigIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd768, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39c160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c06b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d620, 0x1fe000 bytes
    //
    _v30(sdk::unknown_ptr) cmci_set_processor_config_intel;
    
    // [HalpCmciSetProcessorMiscConfigAMD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36ff4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b772c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5c14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b75fc, 0x1fe000 bytes
    //
    _v31(sdk::unknown_ptr) cmci_set_processor_misc_config_amd;
    
    // [HalpCmciThresholdCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4da50, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc5061c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a3a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5061c, 0x1fe000 bytes
    //
    _v32(sdk::unknown_ptr) cmci_threshold_count;
    
    // [HalpCmciThresholdTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4da48, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50608, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a390, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50608, 0x1fe000 bytes
    //
    _v33(sdk::unknown_ptr) cmci_threshold_time;
    
    // [HalpCmosBusParameterTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x491e8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc05078, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc046b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc050b8, 0x1fe000 bytes
    //
    _v34(sdk::unknown_ptr) cmos_bus_parameter_table;
    
    // [HalpCmosCenturyOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4aa0c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49bf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49bd0, 0x1fe000 bytes
    //
    _v35(sdk::unknown_ptr) cmos_century_offset;
    
    // [HalpCmosNullReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _v36(sdk::unknown_ptr) cmos_null_reference;
    
    // [HalpCmosRangeHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2d6f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d05bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ea0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d04ac, 0x1fe000 bytes
    //
    _v37(sdk::unknown_ptr) cmos_range_handler;
    
    // [HalpCmosReadByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x18000, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3611a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3625d0, 0x1fe000 bytes
    //
    _v38(sdk::unknown_ptr) cmos_read_byte;
    
    // [HalpCmosWriteByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x18010, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3611c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3625f0, 0x1fe000 bytes
    //
    _v39(sdk::unknown_ptr) cmos_write_byte;
    
    // [HalpCollectPmcCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27aa0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b91e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459a30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b90b0, 0x1fe000 bytes
    //
    _v40(sdk::unknown_ptr) collect_pmc_counters;
    
    // [HalpComPortIrqMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3f278, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2f910, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3de60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2fc50, 0x1fe000 bytes
    //
    _v41(sdk::unknown_ptr) com_port_irq_mapping;
    
    // [HalpCommitCR3Worker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x62404, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9958c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c168, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994c5c, 0x1fe000 bytes
    //
    _v42(sdk::unknown_ptr) commit_cr3_worker;
    
    // [HalpConnectThermalInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29200, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbb80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc7c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cba70, 0x1fe000 bytes
    //
    _v43(sdk::unknown_ptr) connect_thermal_interrupt;
    
    // [HalpConsumeLowMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c7e4, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5cb24, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb513ac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c9c4, 0x1fe000 bytes
    //
    _v44(sdk::unknown_ptr) consume_low_memory;
    
    // [HalpConvertEfiToNtStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26d90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be4e0, 0x1fe000 bytes
    //
    _v45(sdk::unknown_ptr) convert_efi_to_nt_status;
    
    // [HalpCopyDebugDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c914, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa6a8d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3fc74, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6a1d0, 0x1fe000 bytes
    //
    _v46(sdk::unknown_ptr) copy_debug_descriptor;
    
    // [HalpCoreDmaAlignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a8f8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f298, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09958, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f2e8, 0x1fe000 bytes
    //
    _v47(sdk::unknown_ptr) core_dma_alignment;
    
    // [HalpCorrectErrSrc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x601c0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d670, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7bc80, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c6f0, 0x1fe000 bytes
    //
    _v48(sdk::unknown_ptr) correct_err_src;
    
    // [HalpCorrectGenericErrSrc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xaa1c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c7844, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c20e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8714, 0x1fe000 bytes
    //
    _v49(sdk::unknown_ptr) correct_generic_err_src;
    
    // [HalpCorrectMachineCheckErrSrc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x601f0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d6b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7bcc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c734, 0x1fe000 bytes
    //
    _v50(sdk::unknown_ptr) correct_machine_check_err_src;
    
    // [HalpCorrectNMIErrSrc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa9f8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c7868, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2108, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8738, 0x1fe000 bytes
    //
    _v51(sdk::unknown_ptr) correct_nmi_err_src;
    
    // [HalpCpuID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5880, 0x11e8 bytes
    // ntoskrnl.exe .text:0x271300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322cd0, 0x1fe000 bytes
    //
    _v52(sdk::unknown_ptr) cpu_id;
    
    // [HalpCR3Root]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bdd0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49628, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc607c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49608, 0x1fe000 bytes
    //
    _v53(sdk::unknown_ptr) cr3_root;
    
    // [HalpCreateErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x362a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b4180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f25b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b4050, 0x1fe000 bytes
    //
    _v54(sdk::unknown_ptr) create_error_record;
    
    // [HalpCreateInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10d34, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39dbe4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bcfdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f0a4, 0x1fe000 bytes
    //
    _v55(sdk::unknown_ptr) create_interrupt;
    
    // [HalpCreateMachineCheckErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38060, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b41c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b4090, 0x1fe000 bytes
    //
    _v56(sdk::unknown_ptr) create_machine_check_error_record;
    
    // [HalpCreateMcaMemoryErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38198, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b4328, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2768, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b41f8, 0x1fe000 bytes
    //
    _v57(sdk::unknown_ptr) create_mca_memory_error_record;
    
    // [HalpCreateMcaProcessorErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x383e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b459c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b446c, 0x1fe000 bytes
    //
    _v58(sdk::unknown_ptr) create_mca_processor_error_record;
    
    // [HalpCreateNMIErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x37200, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b7f78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6384, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b7e48, 0x1fe000 bytes
    //
    _v59(sdk::unknown_ptr) create_nmi_error_record;
    
    // [HalpCreateSecondaryIcEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28ae0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4caf70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3d28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cae60, 0x1fe000 bytes
    //
    _v60(sdk::unknown_ptr) create_secondary_ic_entry;
    
    // [HalpDbgInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61640, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7bd20, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c550, 0x1fe000 bytes
    //
    _v61(sdk::unknown_ptr) dbg_init_system;
    
    // [HalpDeallocateMsiLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27df4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _v62(sdk::unknown_ptr) deallocate_msi_lines;
    
    // [HalpDebugPortTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4aa38, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cf0, 0x1fe000 bytes
    //
    _v63(sdk::unknown_ptr) debug_port_table;
    
    // [HalpDefaultPcIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INITDATA:0x71000, 0x11e8 bytes
    // ntoskrnl.exe INITDATA:0xd54190, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f1a0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54190, 0x1fe000 bytes
    //
    _v64(sdk::unknown_ptr) default_pc_io_space;
    
    // [HalpDeleteSecondaryIcEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28bf4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb0f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50882c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cafe0, 0x1fe000 bytes
    //
    _v65(sdk::unknown_ptr) delete_secondary_ic_entry;
    
    // [HalpDeviceEquals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGEKD:0x673e8, 0x11e8 bytes
    // ntoskrnl.exe PAGEKD:0x9b3f68, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9e0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b2f68, 0x1fe000 bytes
    //
    _v66(sdk::unknown_ptr) device_equals;
    
    // [HalpDiagnosticEventHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c820, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a3f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62190, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a3d8, 0x1fe000 bytes
    //
    _v67(sdk::unknown_ptr) diagnostic_event_handle;
    
    // [HalpDiagnosticEventsRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c828, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a400, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62198, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a3e0, 0x1fe000 bytes
    //
    _v68(sdk::unknown_ptr) diagnostic_events_registered;
    
    // [HalpDisableCmciOnProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x370a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b7810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b76e0, 0x1fe000 bytes
    //
    _v69(sdk::unknown_ptr) disable_cmci_on_processor;
    
    // [HalpDisableHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9f4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fd4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61cf8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49fb4, 0x1fe000 bytes
    //
    _v70(sdk::unknown_ptr) disable_hibernate;
    
    // [HalpDisableNvsSaveRestore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a908, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f104, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cea0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f298, 0x1fe000 bytes
    //
    _v71(sdk::unknown_ptr) disable_nvs_save_restore;
    
    // [HalpDisableSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28c88, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb17c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5088b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb06c, 0x1fe000 bytes
    //
    _v72(sdk::unknown_ptr) disable_secondary_interrupt;
    
    // [HalpDispatchPnp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58580, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x746550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e190, 0x1fe000 bytes
    //
    _v73(sdk::unknown_ptr) dispatch_pnp;
    
    // [HalpDispatchPower]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5fc90, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x994800, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa81a60, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x993810, 0x1fe000 bytes
    //
    _v74(sdk::unknown_ptr) dispatch_power;
    
    // [HalpDispatchSystemStateTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6c50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3878c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd074, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x388170, 0x1fe000 bytes
    //
    _v75(sdk::unknown_ptr) dispatch_system_state_transition;
    
    // [HalpDispatchWmi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5abb0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b6960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8701a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be540, 0x1fe000 bytes
    //
    _v76(sdk::unknown_ptr) dispatch_wmi;
    
    // [HalpDmaAcquireBufferMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16bec, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c0bf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45a184, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0ae8, 0x1fe000 bytes
    //
    _v77(sdk::unknown_ptr) dma_acquire_buffer_mappings;
    
    // [HalpDmaAdapterList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d640, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bd60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63e60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bd40, 0x1fe000 bytes
    //
    _v78(sdk::unknown_ptr) dma_adapter_list;
    
    // [HalpDmaAdapterListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d6a8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bd70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63e70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bd50, 0x1fe000 bytes
    //
    _v79(sdk::unknown_ptr) dma_adapter_list_lock;
    
    // [HalpDmaAdapterObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll ALMOSTRO:0x3c000, 0x11e8 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb648, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dca0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb648, 0x1fe000 bytes
    //
    _v80(sdk::unknown_ptr) dma_adapter_object_type;
    
    // [HalpDmaAdapters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d798, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50808, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50808, 0x1fe000 bytes
    //
    _v81(sdk::unknown_ptr) dma_adapters;
    
    // [HalpDmaAllocateChildAdapterV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58b9c, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x74605c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a84b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74dc9c, 0x1fe000 bytes
    //
    _v82(sdk::unknown_ptr) dma_allocate_child_adapter_v2;
    
    // [HalpDmaAllocateChildAdapterV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59b24, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7a54d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855a48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ad5e8, 0x1fe000 bytes
    //
    _v83(sdk::unknown_ptr) dma_allocate_child_adapter_v3;
    
    // [HalpDmaAllocateContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x23758, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c0e48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ff2d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0d38, 0x1fe000 bytes
    //
    _v84(sdk::unknown_ptr) dma_allocate_contiguous_memory;
    
    // [HalpDmaAllocateContiguousPagesFromContiguousPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21e78, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b31c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45977a, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3094, 0x1fe000 bytes
    //
    _v85(sdk::unknown_ptr) dma_allocate_contiguous_pages_from_contiguous_pool;
    
    // [HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21ea4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3218, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b30e8, 0x1fe000 bytes
    //
    _v86(sdk::unknown_ptr) dma_allocate_contiguous_pages_from_contiguous_pool_at_high_level;
    
    // [HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22780, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c76a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504738, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7598, 0x1fe000 bytes
    //
    _v87(sdk::unknown_ptr) dma_allocate_contiguous_pages_from_contiguous_pool_at_high_level_v2;
    
    // [HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22f80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4eeab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b13d0, 0x1fe000 bytes
    //
    _v88(sdk::unknown_ptr) dma_allocate_contiguous_pages_from_contiguous_pool_at_high_level_v3;
    
    // [HalpDmaAllocateContiguousPagesFromContiguousPoolV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22814, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c7734, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45c01e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7624, 0x1fe000 bytes
    //
    _v89(sdk::unknown_ptr) dma_allocate_contiguous_pages_from_contiguous_pool_v2;
    
    // [HalpDmaAllocateContiguousPagesFromContiguousPoolV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x23024, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1598, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4eeb48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1468, 0x1fe000 bytes
    //
    _v90(sdk::unknown_ptr) dma_allocate_contiguous_pages_from_contiguous_pool_v3;
    
    // [HalpDmaAllocateDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbf84, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c2638, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d97e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3448, 0x1fe000 bytes
    //
    _v91(sdk::unknown_ptr) dma_allocate_domain;
    
    // [HalpDmaAllocateEmergencyResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c380, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5e5c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ef8c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e468, 0x1fe000 bytes
    //
    _v92(sdk::unknown_ptr) dma_allocate_emergency_resources;
    
    // [HalpDmaAllocateLocalContiguousPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c238, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x86204c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f934, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86047c, 0x1fe000 bytes
    //
    _v93(sdk::unknown_ptr) dma_allocate_local_contiguous_pool;
    
    // [HalpDmaAllocateLocalScatterPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c52c, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x862334, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92fc1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860764, 0x1fe000 bytes
    //
    _v94(sdk::unknown_ptr) dma_allocate_local_scatter_pool;
    
    // [HalpDmaAllocateMapRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16874, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c0f4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45a3be, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0e3c, 0x1fe000 bytes
    //
    _v95(sdk::unknown_ptr) dma_allocate_map_registers;
    
    // [HalpDmaAllocateMapRegistersAtHighLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x23854, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c133c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ff3c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c122c, 0x1fe000 bytes
    //
    _v96(sdk::unknown_ptr) dma_allocate_map_registers_at_high_level;
    
    // [HalpDmaAllocateMappingResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c188, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5e448, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f060, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e2e8, 0x1fe000 bytes
    //
    _v97(sdk::unknown_ptr) dma_allocate_mapping_resources;
    
    // [HalpDmaAllocateNewTranslationBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x23b2c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c1628, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ff6a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c1518, 0x1fe000 bytes
    //
    _v98(sdk::unknown_ptr) dma_allocate_new_translation_buffer;
    
    // [HalpDmaAllocateReservedMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c328, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5e56c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f184, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e40c, 0x1fe000 bytes
    //
    _v99(sdk::unknown_ptr) dma_allocate_reserved_mapping;
    
    // [HalpDmaAllocateReservedMappingArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c270, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8b474, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7cde4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8a6f4, 0x1fe000 bytes
    //
    _w00(sdk::unknown_ptr) dma_allocate_reserved_mapping_array;
    
    // [HalpDmaAllocateScatterMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c748, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x862564, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92fe4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860994, 0x1fe000 bytes
    //
    _w01(sdk::unknown_ptr) dma_allocate_scatter_memory;
    
    // [HalpDmaAllocateScatterPagesFromContiguousPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21ecc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3244, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0aac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3114, 0x1fe000 bytes
    //
    _w02(sdk::unknown_ptr) dma_allocate_scatter_pages_from_contiguous_pool;
    
    // [HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x228f4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c78f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5047c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c77e0, 0x1fe000 bytes
    //
    _w03(sdk::unknown_ptr) dma_allocate_scatter_pages_from_contiguous_pool_at_high_level_v2;
    
    // [HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2312c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1778, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4eed30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1648, 0x1fe000 bytes
    //
    _w04(sdk::unknown_ptr) dma_allocate_scatter_pages_from_contiguous_pool_at_high_level_v3;
    
    // [HalpDmaAllocateScatterPagesFromContiguousPoolV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x229b8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c79b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50488c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c78a8, 0x1fe000 bytes
    //
    _w05(sdk::unknown_ptr) dma_allocate_scatter_pages_from_contiguous_pool_v2;
    
    // [HalpDmaAllocateScatterPagesFromContiguousPoolV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x231fc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b184c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4eee04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b171c, 0x1fe000 bytes
    //
    _w06(sdk::unknown_ptr) dma_allocate_scatter_pages_from_contiguous_pool_v3;
    
    // [HalpDmaAllocateScatterPagesFromScatterPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5aa0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b329c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4597ce, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b316c, 0x1fe000 bytes
    //
    _w07(sdk::unknown_ptr) dma_allocate_scatter_pages_from_scatter_pool;
    
    // [HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x21ef8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b32f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0b04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b31c4, 0x1fe000 bytes
    //
    _w08(sdk::unknown_ptr) dma_allocate_scatter_pages_from_scatter_pool_at_high_level;
    
    // [HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22ad4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c7bac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504a84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7a9c, 0x1fe000 bytes
    //
    _w09(sdk::unknown_ptr) dma_allocate_scatter_pages_from_scatter_pool_at_high_level_v2;
    
    // [HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x23324, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1a48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef008, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1918, 0x1fe000 bytes
    //
    _w10(sdk::unknown_ptr) dma_allocate_scatter_pages_from_scatter_pool_at_high_level_v3;
    
    // [HalpDmaAllocateScatterPagesFromScatterPoolV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5b98, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c7c4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45c1e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7b3c, 0x1fe000 bytes
    //
    _w11(sdk::unknown_ptr) dma_allocate_scatter_pages_from_scatter_pool_v2;
    
    // [HalpDmaAllocateScatterPagesFromScatterPoolV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5ac0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1b00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b19d0, 0x1fe000 bytes
    //
    _w12(sdk::unknown_ptr) dma_allocate_scatter_pages_from_scatter_pool_v3;
    
    // [HalpDmaAllocateTranslationBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6bff8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5e304, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ef04, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e1a4, 0x1fe000 bytes
    //
    _w13(sdk::unknown_ptr) dma_allocate_translation_buffer;
    
    // [HalpDmaCheckAdapterToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22060, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b35e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b34b0, 0x1fe000 bytes
    //
    _w14(sdk::unknown_ptr) dma_check_adapter_token;
    
    // [HalpDmaCheckMdlAccessibility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13ccc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39aeb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef284, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39c378, 0x1fe000 bytes
    //
    _w15(sdk::unknown_ptr) dma_check_mdl_accessibility;
    
    // [HalpDmaCommitContiguousMapBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x144f4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b705c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d13f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b790c, 0x1fe000 bytes
    //
    _w16(sdk::unknown_ptr) dma_commit_contiguous_map_buffers;
    
    // [HalpDmaCommitScatterMapBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x23d6c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c1884, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ff904, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c1774, 0x1fe000 bytes
    //
    _w17(sdk::unknown_ptr) dma_commit_scatter_map_buffers;
    
    // [HalpDmaConfigureInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25f48, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d6d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51520c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6c20, 0x1fe000 bytes
    //
    _w18(sdk::unknown_ptr) dma_configure_interrupt;
    
    // [HalpDmaControllerCancelTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25034, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c8a4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50500c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c893c, 0x1fe000 bytes
    //
    _w19(sdk::unknown_ptr) dma_controller_cancel_transfer;
    
    // [HalpDmaControllerDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17040, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d6dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5152a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6cc0, 0x1fe000 bytes
    //
    _w20(sdk::unknown_ptr) dma_controller_dpc_routine;
    
    // [HalpDmaControllerFlushChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25100, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c8be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5051b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c8ad0, 0x1fe000 bytes
    //
    _w21(sdk::unknown_ptr) dma_controller_flush_channel;
    
    // [HalpDmaControllerInitializeController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x251d8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c8d78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505364, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c8c68, 0x1fe000 bytes
    //
    _w22(sdk::unknown_ptr) dma_controller_initialize_controller;
    
    // [HalpDmaControllerInterruptRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25fe0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d6e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x515320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6d40, 0x1fe000 bytes
    //
    _w23(sdk::unknown_ptr) dma_controller_interrupt_routine;
    
    // [HalpDmaControllerProgramChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x252b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c8e54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c8d44, 0x1fe000 bytes
    //
    _w24(sdk::unknown_ptr) dma_controller_program_channel;
    
    // [HalpDmaControllerQueryMaxFragments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x253d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c9084, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505684, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c8f74, 0x1fe000 bytes
    //
    _w25(sdk::unknown_ptr) dma_controller_query_max_fragments;
    
    // [HalpDmaControllerReadDmaCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25470, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c91e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5057f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c90d0, 0x1fe000 bytes
    //
    _w26(sdk::unknown_ptr) dma_controller_read_dma_counter;
    
    // [HalpDmaControllerValidateRequestLineBinding]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25520, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c934c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505974, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c923c, 0x1fe000 bytes
    //
    _w27(sdk::unknown_ptr) dma_controller_validate_request_line_binding;
    
    // [HalpDmaControllers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d280, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49be0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49bc0, 0x1fe000 bytes
    //
    _w28(sdk::unknown_ptr) dma_controllers;
    
    // [HalpDmaDequeueAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4c78, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c1a48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45a7b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c1938, 0x1fe000 bytes
    //
    _w29(sdk::unknown_ptr) dma_dequeue_adapter;
    
    // [HalpDmaDomainList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d270, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49cb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61860, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c90, 0x1fe000 bytes
    //
    _w30(sdk::unknown_ptr) dma_domain_list;
    
    // [HalpDmaDomainListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d268, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49ca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61850, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c80, 0x1fe000 bytes
    //
    _w31(sdk::unknown_ptr) dma_domain_list_lock;
    
    // [HalpDmaDomainMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3ec10, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x1f8e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x25680, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1f868, 0x1fe000 bytes
    //
    _w32(sdk::unknown_ptr) dma_domain_mapping;
    
    // [HalpDmaFinalizeDoubleBufferingDisposition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6ca60, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c044, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f1e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5bee4, 0x1fe000 bytes
    //
    _w33(sdk::unknown_ptr) dma_finalize_double_buffering_disposition;
    
    // [HalpDmaFindAdapterByDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbe94, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37552c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3557f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3768ac, 0x1fe000 bytes
    //
    _w34(sdk::unknown_ptr) dma_find_adapter_by_device_object;
    
    // [HalpDmaFindDeviceObjectByToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbdc8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x375390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355554, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376710, 0x1fe000 bytes
    //
    _w35(sdk::unknown_ptr) dma_find_device_object_by_token;
    
    // [HalpDmaFlushBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x23ec0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c1bac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ffad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c1a9c, 0x1fe000 bytes
    //
    _w36(sdk::unknown_ptr) dma_flush_buffer;
    
    // [HalpDmaFlushBufferWithEmergencyResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2405c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c1de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ffd08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c1cd0, 0x1fe000 bytes
    //
    _w37(sdk::unknown_ptr) dma_flush_buffer_with_emergency_resources;
    
    // [HalpDmaFlushContiguousTransferV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22b70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c7dfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45c396, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7cec, 0x1fe000 bytes
    //
    _w38(sdk::unknown_ptr) dma_flush_contiguous_transfer_v2;
    
    // [HalpDmaFlushContiguousTransferV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x233d4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1cbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef584, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1b8c, 0x1fe000 bytes
    //
    _w39(sdk::unknown_ptr) dma_flush_contiguous_transfer_v3;
    
    // [HalpDmaFlushDriverMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x234d4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1dcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef694, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1c9c, 0x1fe000 bytes
    //
    _w40(sdk::unknown_ptr) dma_flush_driver_mdl;
    
    // [HalpDmaFlushScatterTransferV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4f08, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c7f18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45c4ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7e08, 0x1fe000 bytes
    //
    _w41(sdk::unknown_ptr) dma_flush_scatter_transfer_v2;
    
    // [HalpDmaFlushScatterTransferV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4fa0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1e0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ef6d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b1cdc, 0x1fe000 bytes
    //
    _w42(sdk::unknown_ptr) dma_flush_scatter_transfer_v3;
    
    // [HalpDmaForceAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x241d4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c1fc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ffef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c1eb4, 0x1fe000 bytes
    //
    _w43(sdk::unknown_ptr) dma_force_allocation;
    
    // [HalpDmaFreeChildAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x24310, 0x11e8 bytes
    // ntoskrnl.exe .text:0x368db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x500030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a160, 0x1fe000 bytes
    //
    _w44(sdk::unknown_ptr) dma_free_child_adapter;
    
    // [HalpDmaFreeCrashDumpRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6d10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3894d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389ff0, 0x1fe000 bytes
    //
    _w45(sdk::unknown_ptr) dma_free_crash_dump_registers;
    
    // [HalpDmaFreeMapRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x55b4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c2108, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45a916, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c1ff8, 0x1fe000 bytes
    //
    _w46(sdk::unknown_ptr) dma_free_map_registers;
    
    // [HalpDmaFreeTranslationBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6fb40, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8b548, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7ceb8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8a7c8, 0x1fe000 bytes
    //
    _w47(sdk::unknown_ptr) dma_free_translation_buffer;
    
    // [HalpDmaGetAdapterCacheAlignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5dfc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355aec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b31f0, 0x1fe000 bytes
    //
    _w48(sdk::unknown_ptr) dma_get_adapter_cache_alignment;
    
    // [HalpDmaGetAdapterVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa50c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x255300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355b14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3045f0, 0x1fe000 bytes
    //
    _w49(sdk::unknown_ptr) dma_get_adapter_version;
    
    // [HalpDmaGetMasterAdapterVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5d74, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b335c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459824, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b322c, 0x1fe000 bytes
    //
    _w50(sdk::unknown_ptr) dma_get_master_adapter_version;
    
    // [HalpDmaGetTranslationEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14790, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b7330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d1668, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7be0, 0x1fe000 bytes
    //
    _w51(sdk::unknown_ptr) dma_get_translation_entries;
    
    // [HalpDmaGrowContiguousMapBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c800, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x862620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92ff04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860a50, 0x1fe000 bytes
    //
    _w52(sdk::unknown_ptr) dma_grow_contiguous_map_buffers;
    
    // [HalpDmaGrowMapBufferWorkerQueued]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d688, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63de8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bcd8, 0x1fe000 bytes
    //
    _w53(sdk::unknown_ptr) dma_grow_map_buffer_worker_queued;
    
    // [HalpDmaGrowScatterMapBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5c8f0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x862724, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930008, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860b54, 0x1fe000 bytes
    //
    _w54(sdk::unknown_ptr) dma_grow_scatter_map_buffers;
    
    // [HalpDmaHibernateAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d658, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63db8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bcb0, 0x1fe000 bytes
    //
    _w55(sdk::unknown_ptr) dma_hibernate_adapter;
    
    // [HalpDmaHibernateAdapters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d690, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bd00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63df0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bce0, 0x1fe000 bytes
    //
    _w56(sdk::unknown_ptr) dma_hibernate_adapters;
    
    // [HalpDmaHibernatePhase1RegisterSetIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d680, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63de0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bcd0, 0x1fe000 bytes
    //
    _w57(sdk::unknown_ptr) dma_hibernate_phase1_register_set_index;
    
    // [HalpDmaHibernateRegisterPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d660, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcd8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63dc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bcb8, 0x1fe000 bytes
    //
    _w58(sdk::unknown_ptr) dma_hibernate_register_phase;
    
    // [HalpDmaHibernateRegisterSetIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d684, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcf4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63de4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bcd4, 0x1fe000 bytes
    //
    _w59(sdk::unknown_ptr) dma_hibernate_register_set_index;
    
    // [HalpDmaHibernateRegisterSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d6c0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bd20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63e20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bd00, 0x1fe000 bytes
    //
    _w60(sdk::unknown_ptr) dma_hibernate_register_sets;
    
    // [HalpDmaIndexToTranslationEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x244f8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c22e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45aafe, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c21d8, 0x1fe000 bytes
    //
    _w61(sdk::unknown_ptr) dma_index_to_translation_entry;
    
    // [HalpDmaInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6bd84, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5e068, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ec8c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5df08, 0x1fe000 bytes
    //
    _w62(sdk::unknown_ptr) dma_init;
    
    // [HalpDmaInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b6b0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c160, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ebe4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c000, 0x1fe000 bytes
    //
    _w63(sdk::unknown_ptr) dma_init_discard;
    
    // [HalpDmaInitMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6a01c, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5cf74, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3eafc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ce14, 0x1fe000 bytes
    //
    _w64(sdk::unknown_ptr) dma_init_memory;
    
    // [HalpDmaInitPowerManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16144, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d12c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6ce0, 0x1fe000 bytes
    //
    _w65(sdk::unknown_ptr) dma_init_power_management;
    
    // [HalpDmaInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x611c0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99c200, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b280, 0x1fe000 bytes
    //
    _w66(sdk::unknown_ptr) dma_init_system;
    
    // [HalpDmaInitializeControllers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14890, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b74f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d17f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7da4, 0x1fe000 bytes
    //
    _w67(sdk::unknown_ptr) dma_initialize_controllers;
    
    // [HalpDmaInitializeMasterAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6beb8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5e1cc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4edc0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5e06c, 0x1fe000 bytes
    //
    _w68(sdk::unknown_ptr) dma_initialize_master_adapter;
    
    // [HalpDmaInsertDeviceObjectByToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbcec, 0x11e8 bytes
    // ntoskrnl.exe .text:0x375294, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376614, 0x1fe000 bytes
    //
    _w69(sdk::unknown_ptr) dma_insert_device_object_by_token;
    
    // [HalpDmaIsAutomaticDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25e3c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bf2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355b3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bf1e0, 0x1fe000 bytes
    //
    _w70(sdk::unknown_ptr) dma_is_automatic_domain;
    
    // [HalpDmaIsDomainCompatible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25e9c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bf33c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x501a28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bf22c, 0x1fe000 bytes
    //
    _w71(sdk::unknown_ptr) dma_is_domain_compatible;
    
    // [HalpDmaLastControllerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd50, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f88, 0x1fe000 bytes
    //
    _w72(sdk::unknown_ptr) dma_last_controller_id;
    
    // [HalpDmaLinkContiguousTranslations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2452c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c2324, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ab38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c2214, 0x1fe000 bytes
    //
    _w73(sdk::unknown_ptr) dma_link_contiguous_translations;
    
    // [HalpDmaLinkDeviceObjectByToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x597c0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x745db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a7d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d9f0, 0x1fe000 bytes
    //
    _w74(sdk::unknown_ptr) dma_link_device_object_by_token;
    
    // [HalpDmaMapContiguousTransferV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22c4c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c807c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45c608, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c7f6c, 0x1fe000 bytes
    //
    _w75(sdk::unknown_ptr) dma_map_contiguous_transfer_v2;
    
    // [HalpDmaMapContiguousTransferV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2350c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b219c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4efa5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b206c, 0x1fe000 bytes
    //
    _w76(sdk::unknown_ptr) dma_map_contiguous_transfer_v3;
    
    // [HalpDmaMapScatterTransferV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x50a8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c81d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45c748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c80c4, 0x1fe000 bytes
    //
    _w77(sdk::unknown_ptr) dma_map_scatter_transfer_v2;
    
    // [HalpDmaMapScatterTransferV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x51cc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b22c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4efb80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2190, 0x1fe000 bytes
    //
    _w78(sdk::unknown_ptr) dma_map_scatter_transfer_v3;
    
    // [HalpDmaMarkHiberAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x67e4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x383be8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f102c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3849a8, 0x1fe000 bytes
    //
    _w79(sdk::unknown_ptr) dma_mark_hiber_adapter;
    
    // [HalpDmaNextContiguousPiece]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5084, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459848, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3250, 0x1fe000 bytes
    //
    _w80(sdk::unknown_ptr) dma_next_contiguous_piece;
    
    // [HalpDmaNextContiguousPieceV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1663c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c8360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45c8d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c8250, 0x1fe000 bytes
    //
    _w81(sdk::unknown_ptr) dma_next_contiguous_piece_v2;
    
    // [HalpDmaNextContiguousPieceV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b2470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4efd40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2340, 0x1fe000 bytes
    //
    _w82(sdk::unknown_ptr) dma_next_contiguous_piece_v3;
    
    // [HalpDmaOperationsV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d0e0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x5fd0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2c60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5fc0, 0x1fe000 bytes
    //
    _w83(sdk::unknown_ptr) dma_operations_v2;
    
    // [HalpDmaOperationsV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d240, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x5d50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5ff0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5d40, 0x1fe000 bytes
    //
    _w84(sdk::unknown_ptr) dma_operations_v3;
    
    // [HalpDmaPdoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d670, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bce0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63dd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bcc0, 0x1fe000 bytes
    //
    _w85(sdk::unknown_ptr) dma_pdo_list;
    
    // [HalpDmaPdoListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d6a0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bd10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63e10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bcf0, 0x1fe000 bytes
    //
    _w86(sdk::unknown_ptr) dma_pdo_list_lock;
    
    // [HalpDmaPowerCriticalTransitionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x255c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c94a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9390, 0x1fe000 bytes
    //
    _w87(sdk::unknown_ptr) dma_power_critical_transition_callback;
    
    // [HalpDmaPrependTranslations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x245bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c23c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45abd6, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c22b0, 0x1fe000 bytes
    //
    _w88(sdk::unknown_ptr) dma_prepend_translations;
    
    // [HalpDmaProcessMapRegisterQueueV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x44d4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c72b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45bc0e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c71a8, 0x1fe000 bytes
    //
    _w89(sdk::unknown_ptr) dma_process_map_register_queue_v2;
    
    // [HalpDmaProcessMapRegisterQueueV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x46c8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c09a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fee74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c0898, 0x1fe000 bytes
    //
    _w90(sdk::unknown_ptr) dma_process_map_register_queue_v3;
    
    // [HalpDmaQueueAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x245d8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c23e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x500290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c22d4, 0x1fe000 bytes
    //
    _w91(sdk::unknown_ptr) dma_queue_adapter;
    
    // [HalpDmaReleaseBufferMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x57ac, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c24dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45abf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c23cc, 0x1fe000 bytes
    //
    _w92(sdk::unknown_ptr) dma_release_buffer_mappings;
    
    // [HalpDmaRemoveAdapterFromChannelQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x255e4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c94d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505b14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c93c4, 0x1fe000 bytes
    //
    _w93(sdk::unknown_ptr) dma_remove_adapter_from_channel_queue;
    
    // [HalpDmaRemoveAdapterFromMasterQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x23620, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b2710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4efff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b25e0, 0x1fe000 bytes
    //
    _w94(sdk::unknown_ptr) dma_remove_adapter_from_master_queue;
    
    // [HalpDmaRemoveWcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x236c4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b2934, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0218, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2804, 0x1fe000 bytes
    //
    _w95(sdk::unknown_ptr) dma_remove_wcb;
    
    // [HalpDmaReturnPageToOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x56dc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c259c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45acb6, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c248c, 0x1fe000 bytes
    //
    _w96(sdk::unknown_ptr) dma_return_page_to_owner;
    
    // [HalpDmaReturnPageToSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x24660, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c2614, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50038c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c2504, 0x1fe000 bytes
    //
    _w97(sdk::unknown_ptr) dma_return_page_to_source;
    
    // [HalpDmaReturnToContiguousPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x246b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c2664, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ad2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c2554, 0x1fe000 bytes
    //
    _w98(sdk::unknown_ptr) dma_return_to_contiguous_pool;
    
    // [HalpDmaReturnToScatterPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5734, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c275c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45ae28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c264c, 0x1fe000 bytes
    //
    _w99(sdk::unknown_ptr) dma_return_to_scatter_pool;
    
    // [HalpDmaStartWcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4ca4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b2b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f0460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b2a50, 0x1fe000 bytes
    //
    _x00(sdk::unknown_ptr) dma_start_wcb;
    
    // [HalpDmaSyncMapBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5308, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c2844, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45af12, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c2734, 0x1fe000 bytes
    //
    _x01(sdk::unknown_ptr) dma_sync_map_buffers;
    
    // [HalpDmaSyncMapBuffersWithEmergencyResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x24734, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c2bbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5003dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c2aac, 0x1fe000 bytes
    //
    _x02(sdk::unknown_ptr) dma_sync_map_buffers_with_emergency_resources;
    
    // [HalpDmaTranslationEntryToIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14730, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b72c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d1798, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7b78, 0x1fe000 bytes
    //
    _x03(sdk::unknown_ptr) dma_translation_entry_to_index;
    
    // [HalpDmaZeroMapBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x24a2c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c2f24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x500748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c2e14, 0x1fe000 bytes
    //
    _x04(sdk::unknown_ptr) dma_zero_map_buffers;
    
    // [HalpDoingCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9e0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61a30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d50, 0x1fe000 bytes
    //
    _x05(sdk::unknown_ptr) doing_crash_dump;
    
    // [HalpDpGetInterruptReplayState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x65260, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5640, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa831c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a45b0, 0x1fe000 bytes
    //
    _x06(sdk::unknown_ptr) dp_get_interrupt_replay_state;
    
    // [HalpDpInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d2cc, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa69f70, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb569b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa69648, 0x1fe000 bytes
    //
    _x07(sdk::unknown_ptr) dp_init_discard;
    
    // [HalpDpInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x614d0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d420, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d4b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c4a0, 0x1fe000 bytes
    //
    _x08(sdk::unknown_ptr) dp_init_system;
    
    // [HalpDpOfflineProcessorForReplace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x652b8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a569c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83218, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a460c, 0x1fe000 bytes
    //
    _x09(sdk::unknown_ptr) dp_offline_processor_for_replace;
    
    // [HalpDpPostReplace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x6534c, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a578c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83308, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a46fc, 0x1fe000 bytes
    //
    _x10(sdk::unknown_ptr) dp_post_replace;
    
    // [HalpDpPostReplaceInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x654b0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a58f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83474, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a4868, 0x1fe000 bytes
    //
    _x11(sdk::unknown_ptr) dp_post_replace_initialization;
    
    // [HalpDpPreReplace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x655d8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5a7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83600, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a49ec, 0x1fe000 bytes
    //
    _x12(sdk::unknown_ptr) dp_pre_replace;
    
    // [HalpDpQueryMaxHotPlugMemoryAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d18, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b83e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6818, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b82b8, 0x1fe000 bytes
    //
    _x13(sdk::unknown_ptr) dp_query_max_hot_plug_memory_address;
    
    // [HalpDpReplaceBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5e090, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861b80, 0x1fe000 bytes
    //
    _x14(sdk::unknown_ptr) dp_replace_begin;
    
    // [HalpDpReplaceControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x656f0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83720, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a4b10, 0x1fe000 bytes
    //
    _x15(sdk::unknown_ptr) dp_replace_control;
    
    // [HalpDpReplaceEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5e250, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861d40, 0x1fe000 bytes
    //
    _x16(sdk::unknown_ptr) dp_replace_end;
    
    // [HalpDpReplaceTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x658c0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5d70, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa838f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a4ce0, 0x1fe000 bytes
    //
    _x17(sdk::unknown_ptr) dp_replace_target;
    
    // [HalpDpReplayInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x65960, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83990, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a4d80, 0x1fe000 bytes
    //
    _x18(sdk::unknown_ptr) dp_replay_interrupts;
    
    // [HalpDpSortApicList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5e284, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863948, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930ce8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861d78, 0x1fe000 bytes
    //
    _x19(sdk::unknown_ptr) dp_sort_apic_list;
    
    // [HalpDpStartProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x659bc, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5e74, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa839f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a4de4, 0x1fe000 bytes
    //
    _x20(sdk::unknown_ptr) dp_start_processor;
    
    // [HalpDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x584e0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x78bc20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x833490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7959c0, 0x1fe000 bytes
    //
    _x21(sdk::unknown_ptr) driver_entry;
    
    // [HalpDriverObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bdc0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f80, 0x1fe000 bytes
    //
    _x22(sdk::unknown_ptr) driver_object;
    
    // [HalpDynamicDeviceInterfaceLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bda0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49f80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f60, 0x1fe000 bytes
    //
    _x23(sdk::unknown_ptr) dynamic_device_interface_lock;
    
    // [HalpDynamicDeviceInterfaceNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d160, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x861ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85ffd0, 0x1fe000 bytes
    //
    _x24(sdk::unknown_ptr) dynamic_device_interface_notification;
    
    // [HalpDynamicDeviceInterfaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3daf8, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x89e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x96a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x89d0, 0x1fe000 bytes
    //
    _x25(sdk::unknown_ptr) dynamic_device_interfaces;
    
    // [HalpDynamicDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4ba8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ba8, 0x1fe000 bytes
    //
    _x26(sdk::unknown_ptr) dynamic_devices;
    
    // [HalpDynamicDevicesReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d850, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507f8, 0x1fe000 bytes
    //
    _x27(sdk::unknown_ptr) dynamic_devices_ready;
    
    // [HalpECmosReadByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3af00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c67c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c66b0, 0x1fe000 bytes
    //
    _x28(sdk::unknown_ptr) e_cmos_read_byte;
    
    // [HalpECmosWriteByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3af40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5043b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c66f0, 0x1fe000 bytes
    //
    _x29(sdk::unknown_ptr) e_cmos_write_byte;
    
    // [HalpEfiBugCheckAddPagesCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26dc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be570, 0x1fe000 bytes
    //
    _x30(sdk::unknown_ptr) efi_bug_check_add_pages_callback;
    
    // [HalpEfiBugcheckCallbackNextRuntimeServiceIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d228, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61a60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d78, 0x1fe000 bytes
    //
    _x31(sdk::unknown_ptr) efi_bugcheck_callback_next_runtime_service_index;
    
    // [HalpEfiCapsuleCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d250, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fb4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f94, 0x1fe000 bytes
    //
    _x32(sdk::unknown_ptr) efi_capsule_calls;
    
    // [HalpEfiCapsuleWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d24c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c94, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f90, 0x1fe000 bytes
    //
    _x33(sdk::unknown_ptr) efi_capsule_writes;
    
    // [HalpEfiInitializeOnResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26e98, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be764, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be654, 0x1fe000 bytes
    //
    _x34(sdk::unknown_ptr) efi_initialize_on_resume;
    
    // [HalpEfiRuntimeCallbackRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd58, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f50, 0x1fe000 bytes
    //
    _x35(sdk::unknown_ptr) efi_runtime_callback_record;
    
    // [HalpEfiTimeCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d244, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fa8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f88, 0x1fe000 bytes
    //
    _x36(sdk::unknown_ptr) efi_time_calls;
    
    // [HalpEfiTimeWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d254, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c9c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f98, 0x1fe000 bytes
    //
    _x37(sdk::unknown_ptr) efi_time_writes;
    
    // [HalpEfiVariableCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d258, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fbc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ca0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f9c, 0x1fe000 bytes
    //
    _x38(sdk::unknown_ptr) efi_variable_calls;
    
    // [HalpEfiVariableWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d248, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c8c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f8c, 0x1fe000 bytes
    //
    _x39(sdk::unknown_ptr) efi_variable_writes;
    
    // [HalpEnableSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5cdd8, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8627a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c7a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860bd0, 0x1fe000 bytes
    //
    _x40(sdk::unknown_ptr) enable_secondary_interrupt;
    
    // [HalpEndOfBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ac20, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b6dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be970, 0x1fe000 bytes
    //
    _x41(sdk::unknown_ptr) end_of_boot;
    
    // [HalpEnlightenment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4cb80, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61f60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a1e0, 0x1fe000 bytes
    //
    _x42(sdk::unknown_ptr) enlightenment;
    
    // [HalpEnlightenmentHbSaved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ca00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61d00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49fc0, 0x1fe000 bytes
    //
    _x43(sdk::unknown_ptr) enlightenment_hb_saved;
    
    // [HalpErrataChipHacksInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8d4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50880, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a66c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50880, 0x1fe000 bytes
    //
    _x44(sdk::unknown_ptr) errata_chip_hacks_initialized;
    
    // [HalpErrataInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6902c, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa36684, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb21130, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36028, 0x1fe000 bytes
    //
    _x45(sdk::unknown_ptr) errata_init_discard;
    
    // [HalpErrataInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61730, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99c020, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7a7f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b0a0, 0x1fe000 bytes
    //
    _x46(sdk::unknown_ptr) errata_init_system;
    
    // [HalpExtBuildResourceIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15334, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a9e28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9968, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a87e8, 0x1fe000 bytes
    //
    _x47(sdk::unknown_ptr) ext_build_resource_id_string;
    
    // [HalpExtGetAcpiTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x274d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be7f0, 0x1fe000 bytes
    //
    _x48(sdk::unknown_ptr) ext_get_acpi_table;
    
    // [HalpExtGetNextResourceDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x274e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd3c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be810, 0x1fe000 bytes
    //
    _x49(sdk::unknown_ptr) ext_get_next_resource_descriptor;
    
    // [HalpExtGetRegisteredResourceIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27558, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be99c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd43c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be88c, 0x1fe000 bytes
    //
    _x50(sdk::unknown_ptr) ext_get_registered_resource_id_string;
    
    // [HalpExtHandleArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d1c8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61a40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d58, 0x1fe000 bytes
    //
    _x51(sdk::unknown_ptr) ext_handle_array;
    
    // [HalpExtHandleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d1d0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61a48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d60, 0x1fe000 bytes
    //
    _x52(sdk::unknown_ptr) ext_handle_count;
    
    // [HalpExtInitExtensions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d3a0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa6b9b4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5a480, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b2ac, 0x1fe000 bytes
    //
    _x53(sdk::unknown_ptr) ext_init_extensions;
    
    // [HalpExtLoaderBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d1d8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61a50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d68, 0x1fe000 bytes
    //
    _x54(sdk::unknown_ptr) ext_loader_block;
    
    // [HalpExtRegisterResourceDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x275b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4be9f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fd490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4be8e0, 0x1fe000 bytes
    //
    _x55(sdk::unknown_ptr) ext_register_resource_descriptor;
    
    // [HalpExtensionImports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x49630, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc05030, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc073d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc05070, 0x1fe000 bytes
    //
    _x56(sdk::unknown_ptr) extension_imports;
    
    // [HalpExtractGenericErrorData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x37810, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c9f74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5076a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9e64, 0x1fe000 bytes
    //
    _x57(sdk::unknown_ptr) extract_generic_error_data;
    
    // [HalpFallbackPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d880, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64000, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bee0, 0x1fe000 bytes
    //
    _x58(sdk::unknown_ptr) fallback_performance_counter;
    
    // [HalpFeatureBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4cb70, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a1e4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61f3c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a1c4, 0x1fe000 bytes
    //
    _x59(sdk::unknown_ptr) feature_bits;
    
    // [HalpFindAdapterByRequestLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x256ac, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c9668, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505cb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9558, 0x1fe000 bytes
    //
    _x60(sdk::unknown_ptr) find_adapter_by_request_line;
    
    // [HalpFindBusAddressTranslation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15fd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ca070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e95b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb170, 0x1fe000 bytes
    //
    _x61(sdk::unknown_ptr) find_bus_address_translation;
    
    // [HalpFindDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGEKD:0x6715c, 0x11e8 bytes
    // ntoskrnl.exe PAGEKD:0x9b4158, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9e380, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3158, 0x1fe000 bytes
    //
    _x62(sdk::unknown_ptr) find_device;
    
    // [HalpFindDmaControllerByRequestLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2573c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c97a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9694, 0x1fe000 bytes
    //
    _x63(sdk::unknown_ptr) find_dma_controller_by_request_line;
    
    // [HalpFindInterruptController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12484, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a72ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7e4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5c6c, 0x1fe000 bytes
    //
    _x64(sdk::unknown_ptr) find_interrupt_controller;
    
    // [HalpFindSecondaryIcEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28d20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb228, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc0f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb118, 0x1fe000 bytes
    //
    _x65(sdk::unknown_ptr) find_secondary_ic_entry;
    
    // [HalpFindSecondaryIcEntryFromObjectAndRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28d90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb2fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508954, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb1ec, 0x1fe000 bytes
    //
    _x66(sdk::unknown_ptr) find_secondary_ic_entry_from_object_and_range;
    
    // [HalpFindTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xcd28, 0x11e8 bytes
    // ntoskrnl.exe .text:0x398958, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb588, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399e18, 0x1fe000 bytes
    //
    _x67(sdk::unknown_ptr) find_timer;
    
    // [HalpFirmwareInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d1e8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa6b6dc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb57f64, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6afd4, 0x1fe000 bytes
    //
    _x68(sdk::unknown_ptr) firmware_init_discard;
    
    // [HalpFirmwareInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61930, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d540, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d560, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c5c0, 0x1fe000 bytes
    //
    _x69(sdk::unknown_ptr) firmware_init_system;
    
    // [HalpFixedAcpiDescTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c880, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61b20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e40, 0x1fe000 bytes
    //
    _x70(sdk::unknown_ptr) fixed_acpi_desc_table;
    
    // [HalpFlushAndWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17790, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3f00e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f19c0, 0x1fe000 bytes
    //
    _x71(sdk::unknown_ptr) flush_and_wait;
    
    // [HalpFlushBarrier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4aa08, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48a30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb5c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a10, 0x1fe000 bytes
    //
    _x72(sdk::unknown_ptr) flush_barrier;
    
    // [HalpFlushMapBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x24b54, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c310c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x500938, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c2ffc, 0x1fe000 bytes
    //
    _x73(sdk::unknown_ptr) flush_map_buffers;
    
    // [HalpFlushTLB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12b7c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3be18c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b77b0, 0x1fe000 bytes
    //
    _x74(sdk::unknown_ptr) flush_tlb;
    
    // [HalpFrameBufferBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b8c8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bdc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63ec8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bda8, 0x1fe000 bytes
    //
    _x75(sdk::unknown_ptr) frame_buffer_base;
    
    // [HalpFreeDmaChannels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25764, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c97d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x505e2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c96c0, 0x1fe000 bytes
    //
    _x76(sdk::unknown_ptr) free_dma_channels;
    
    // [HalpFreeNvsBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x6004c, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x995518, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82d04, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994528, 0x1fe000 bytes
    //
    _x77(sdk::unknown_ptr) free_nvs_buffers;
    
    // [HalpFreePmcCounterSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27b10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f7560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b91f0, 0x1fe000 bytes
    //
    _x78(sdk::unknown_ptr) free_pmc_counter_set;
    
    // [HalpFreeResumeStructures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5fdc8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99493c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa81df4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99394c, 0x1fe000 bytes
    //
    _x79(sdk::unknown_ptr) free_resume_structures;
    
    // [HalpFwBootPerformanceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd98, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4adf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4add8, 0x1fe000 bytes
    //
    _x80(sdk::unknown_ptr) fw_boot_performance_table;
    
    // [HalpFwBootPerformanceTableMaximumLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd8c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4adec, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4adcc, 0x1fe000 bytes
    //
    _x81(sdk::unknown_ptr) fw_boot_performance_table_maximum_length;
    
    // [HalpFwS3PerformanceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd90, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4adf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4add0, 0x1fe000 bytes
    //
    _x82(sdk::unknown_ptr) fw_s3_performance_table;
    
    // [HalpFwS3PerformanceTableMaximumLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd88, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4ade8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4adc8, 0x1fe000 bytes
    //
    _x83(sdk::unknown_ptr) fw_s3_performance_table_maximum_length;
    
    // [HalpGenericConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x49288, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc02db8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04648, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02df8, 0x1fe000 bytes
    //
    _x84(sdk::unknown_ptr) generic_configuration;
    
    // [HalpGenericInitDone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dae0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f9c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5fc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f9c, 0x1fe000 bytes
    //
    _x85(sdk::unknown_ptr) generic_init_done;
    
    // [HalpGenericNmiErrorSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b690, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49bc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61780, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49ba0, 0x1fe000 bytes
    //
    _x86(sdk::unknown_ptr) generic_nmi_error_source_list_head;
    
    // [HalpGenericNmiInitDone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dad8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f8c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5f4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f8c, 0x1fe000 bytes
    //
    _x87(sdk::unknown_ptr) generic_nmi_init_done;
    
    // [HalpGenericPolledContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b580, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49aa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49a80, 0x1fe000 bytes
    //
    _x88(sdk::unknown_ptr) generic_polled_context;
    
    // [HalpGenericPolledDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4310, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c9ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376f50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9ee0, 0x1fe000 bytes
    //
    _x89(sdk::unknown_ptr) generic_polled_dpc_routine;
    
    // [HalpGenericPolledErrorSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b680, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49ba0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61760, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49b80, 0x1fe000 bytes
    //
    _x90(sdk::unknown_ptr) generic_polled_error_source_list_head;
    
    // [HalpGenericPolledWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x41c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ca030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x309940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c9f20, 0x1fe000 bytes
    //
    _x91(sdk::unknown_ptr) generic_polled_worker_routine;
    
    // [HalpGenericPollingInitDone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dadc, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f94, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f94, 0x1fe000 bytes
    //
    _x92(sdk::unknown_ptr) generic_polling_init_done;
    
    // [HalpGenericSeaErrorSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b560, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49a80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49a60, 0x1fe000 bytes
    //
    _x93(sdk::unknown_ptr) generic_sea_error_source_list_head;
    
    // [HalpGenericSeaInitDone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff58, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4fa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4fa0, 0x1fe000 bytes
    //
    _x94(sdk::unknown_ptr) generic_sea_init_done;
    
    // [HalpGenericSeiErrorSourceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b550, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49a70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61630, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49a50, 0x1fe000 bytes
    //
    _x95(sdk::unknown_ptr) generic_sei_error_source_list_head;
    
    // [HalpGenericSeiInitDone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff54, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179e4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f98, 0x1fe000 bytes
    //
    _x96(sdk::unknown_ptr) generic_sei_init_done;
    
    // [HalpGetAcpiStaticNumaTopology]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a9c0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b5a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ecb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd65c, 0x1fe000 bytes
    //
    _x97(sdk::unknown_ptr) get_acpi_static_numa_topology;
    
    // [HalpGetAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59790, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x745d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a7c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d950, 0x1fe000 bytes
    //
    _x98(sdk::unknown_ptr) get_adapter;
    
    // [HalpGetCacheCoherency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59aa0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7462cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c5d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74df0c, 0x1fe000 bytes
    //
    _x99(sdk::unknown_ptr) get_cache_coherency;
    
    // [HalpGetChipHacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69bec, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa675ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3fc18, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa66ba4, 0x1fe000 bytes
    //
    _y00(sdk::unknown_ptr) get_chip_hacks;
    
    // [HalpGetCmosData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1000, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6730, 0x1fe000 bytes
    //
    _y01(sdk::unknown_ptr) get_cmos_data;
    
    // [HalpGetCpuInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd850, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39c470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c05f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d930, 0x1fe000 bytes
    //
    _y02(sdk::unknown_ptr) get_cpu_info;
    
    // [HalpGetDisplayBiosInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16214, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ca2d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb3d0, 0x1fe000 bytes
    //
    _y03(sdk::unknown_ptr) get_display_bios_information;
    
    // [HalpGetDynamicDevicePointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x583a0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x75c294, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x763c24, 0x1fe000 bytes
    //
    _y04(sdk::unknown_ptr) get_dynamic_device_pointer;
    
    // [HalpGetIrtEntryCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d38, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbb38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385cc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cba28, 0x1fe000 bytes
    //
    _y05(sdk::unknown_ptr) get_irt_entry_count;
    
    // [HalpGetMcaPcrContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd894, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39c0c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d588, 0x1fe000 bytes
    //
    _y06(sdk::unknown_ptr) get_mca_pcr_context;
    
    // [HalpGetNumaProcMemoryCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x703a0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8ba2c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7cf6c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8acac, 0x1fe000 bytes
    //
    _y07(sdk::unknown_ptr) get_numa_proc_memory_count;
    
    // [HalpGetPCIData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xdb10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x399ed4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1da4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b394, 0x1fe000 bytes
    //
    _y08(sdk::unknown_ptr) get_pci_data;
    
    // [HalpGetPlatformTimerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4370, 0x11e8 bytes
    // ntoskrnl.exe .text:0x26e6d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fd650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31fd94, 0x1fe000 bytes
    //
    _y09(sdk::unknown_ptr) get_platform_timer_information;
    
    // [HalpGetProcessorBrandString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a508, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7a9b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85dfa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b14d0, 0x1fe000 bytes
    //
    _y10(sdk::unknown_ptr) get_processor_brand_string;
    
    // [HalpGetResourceSortValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69880, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa36d40, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb39b04, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa371ec, 0x1fe000 bytes
    //
    _y11(sdk::unknown_ptr) get_resource_sort_value;
    
    // [HalpGetSetCmosData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1014, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c685c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d963c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c674c, 0x1fe000 bytes
    //
    _y12(sdk::unknown_ptr) get_set_cmos_data;
    
    // [HalpGlobalVolatile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b918, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a550, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc622f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a530, 0x1fe000 bytes
    //
    _y13(sdk::unknown_ptr) global_volatile;
    
    // [HalpGrowMapBufferWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22080, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b3630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f1420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b3500, 0x1fe000 bytes
    //
    _y14(sdk::unknown_ptr) grow_map_buffer_worker;
    
    // [HalpHalExtInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61580, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d590, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c610, 0x1fe000 bytes
    //
    _y15(sdk::unknown_ptr) hal_ext_init_system;
    
    // [HalpHandleMaskUnmaskSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5c84, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb3ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508a44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb2dc, 0x1fe000 bytes
    //
    _y16(sdk::unknown_ptr) handle_mask_unmask_secondary_interrupt;
    
    // [HalpHandlePreviousMcaErrors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x64d88, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a40d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa80d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3048, 0x1fe000 bytes
    //
    _y17(sdk::unknown_ptr) handle_previous_mca_errors;
    
    // [HalpHandlePreviousMcaErrorsOnProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x64e98, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a4214, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa80e70, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3188, 0x1fe000 bytes
    //
    _y18(sdk::unknown_ptr) handle_previous_mca_errors_on_processor;
    
    // [HalpHeapEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d830, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50718, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50718, 0x1fe000 bytes
    //
    _y19(sdk::unknown_ptr) heap_end;
    
    // [HalpHeapStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a900, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50720, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50720, 0x1fe000 bytes
    //
    _y20(sdk::unknown_ptr) heap_start;
    
    // [HalpHiberInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ccf0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a1e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61f38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a1c0, 0x1fe000 bytes
    //
    _y21(sdk::unknown_ptr) hiber_in_progress;
    
    // [HalpHiberProcState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bb98, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ad0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49de0, 0x1fe000 bytes
    //
    _y22(sdk::unknown_ptr) hiber_proc_state;
    
    // [HalpHpetAcknowledgeInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x170d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e7b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0250, 0x1fe000 bytes
    //
    _y23(sdk::unknown_ptr) hpet_acknowledge_interrupt;
    
    // [HalpHpetArmTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16f90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d03a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e7f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0290, 0x1fe000 bytes
    //
    _y24(sdk::unknown_ptr) hpet_arm_timer;
    
    // [HalpHpetBaseAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b6c0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48be0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48bc0, 0x1fe000 bytes
    //
    _y25(sdk::unknown_ptr) hpet_base_address;
    
    // [HalpHpetDebugTimerArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b6e0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48c00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48be0, 0x1fe000 bytes
    //
    _y26(sdk::unknown_ptr) hpet_debug_timer_arm;
    
    // [HalpHpetDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10380, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a92fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a7cbc, 0x1fe000 bytes
    //
    _y27(sdk::unknown_ptr) hpet_discover;
    
    // [HalpHpetGsiOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe18, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4fc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4fc0, 0x1fe000 bytes
    //
    _y28(sdk::unknown_ptr) hpet_gsi_offset;
    
    // [HalpHpetInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa950, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3aa110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8ad0, 0x1fe000 bytes
    //
    _y29(sdk::unknown_ptr) hpet_initialize;
    
    // [HalpHpetLegacyInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d940, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50878, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50878, 0x1fe000 bytes
    //
    _y30(sdk::unknown_ptr) hpet_legacy_interrupts;
    
    // [HalpHpetPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b6c8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48be8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48bc8, 0x1fe000 bytes
    //
    _y31(sdk::unknown_ptr) hpet_physical_address;
    
    // [HalpHpetQueryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1ba0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3627a0, 0x1fe000 bytes
    //
    _y32(sdk::unknown_ptr) hpet_query_counter;
    
    // [HalpHpetSetMatchValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x58e8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d03ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e83c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d02dc, 0x1fe000 bytes
    //
    _y33(sdk::unknown_ptr) hpet_set_match_value;
    
    // [HalpHpetStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17f40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3627c0, 0x1fe000 bytes
    //
    _y34(sdk::unknown_ptr) hpet_stop;
    
    // [HalpHvBuildDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x63e58, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a44e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa815d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3458, 0x1fe000 bytes
    //
    _y35(sdk::unknown_ptr) hv_build_device_id;
    
    // [HalpHvComIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a9a8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc12268, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc122c8, 0x1fe000 bytes
    //
    _y36(sdk::unknown_ptr) hv_com_io_space;
    
    // [HalpHvCounterInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _y37(sdk::unknown_ptr) hv_counter_initialize;
    
    // [HalpHvCounterQueryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35db0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x389b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38abf0, 0x1fe000 bytes
    //
    _y38(sdk::unknown_ptr) hv_counter_query_counter;
    
    // [HalpHvCounterUpdateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35de0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ceef0, 0x1fe000 bytes
    //
    _y39(sdk::unknown_ptr) hv_counter_update_callback;
    
    // [HalpHvCpuManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4cb74, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a3f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62188, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a3d0, 0x1fe000 bytes
    //
    _y40(sdk::unknown_ptr) hv_cpu_manager;
    
    // [HalpHvCpuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17e88, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc51c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fad2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc3ec, 0x1fe000 bytes
    //
    _y41(sdk::unknown_ptr) hv_cpuid;
    
    // [HalpHvDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13184, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3aa3ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8dac, 0x1fe000 bytes
    //
    _y42(sdk::unknown_ptr) hv_discover;
    
    // [HalpHvEnterSleepState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e5c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd088, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bcf7c, 0x1fe000 bytes
    //
    _y43(sdk::unknown_ptr) hv_enter_sleep_state;
    
    // [HalpHvEpCpuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ef60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fad80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc440, 0x1fe000 bytes
    //
    _y44(sdk::unknown_ptr) hv_ep_cpuid;
    
    // [HalpHvEpReadMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2eff0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc4f0, 0x1fe000 bytes
    //
    _y45(sdk::unknown_ptr) hv_ep_read_msr;
    
    // [HalpHvEpWriteMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f060, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fae30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc560, 0x1fe000 bytes
    //
    _y46(sdk::unknown_ptr) hv_ep_write_msr;
    
    // [HalpHvGetApicFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f0c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fae90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc5c0, 0x1fe000 bytes
    //
    _y47(sdk::unknown_ptr) hv_get_apic_frequency;
    
    // [HalpHvGetMachineCheckContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e5e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bcfa4, 0x1fe000 bytes
    //
    _y48(sdk::unknown_ptr) hv_get_machine_check_context;
    
    // [HalpHvGetTscFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f0f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4faec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc5f0, 0x1fe000 bytes
    //
    _y49(sdk::unknown_ptr) hv_get_tsc_frequency;
    
    // [HalpHvInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d330, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa6b938, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5a404, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b230, 0x1fe000 bytes
    //
    _y50(sdk::unknown_ptr) hv_init_discard;
    
    // [HalpHvInitMcaPcrContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd8bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c07f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c02b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1600, 0x1fe000 bytes
    //
    _y51(sdk::unknown_ptr) hv_init_mca_pcr_context;
    
    // [HalpHvInitMcaStatusMsrCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f11c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4faef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc620, 0x1fe000 bytes
    //
    _y52(sdk::unknown_ptr) hv_init_mca_status_msr_cache;
    
    // [HalpHvInitSegRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f5b8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc54c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509dd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cc43c, 0x1fe000 bytes
    //
    _y53(sdk::unknown_ptr) hv_init_seg_register;
    
    // [HalpHvInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61950, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d570, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d590, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c5f0, 0x1fe000 bytes
    //
    _y54(sdk::unknown_ptr) hv_init_system;
    
    // [HalpHvIommu]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b83c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49c0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49bec, 0x1fe000 bytes
    //
    _y55(sdk::unknown_ptr) hv_iommu;
    
    // [HalpHvIsFrequencyAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11544, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ca018, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ba24c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb118, 0x1fe000 bytes
    //
    _y56(sdk::unknown_ptr) hv_is_frequency_available;
    
    // [HalpHvIsReferenceTscConfigured]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc9d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a2c8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a41dc, 0x1fe000 bytes
    //
    _y57(sdk::unknown_ptr) hv_is_reference_tsc_configured;
    
    // [HalpHvLpReadMcaStatusMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f234, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc8a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb094, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc778, 0x1fe000 bytes
    //
    _y58(sdk::unknown_ptr) hv_lp_read_mca_status_msr;
    
    // [HalpHvLpReadMultipleMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f2d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc96c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc83c, 0x1fe000 bytes
    //
    _y59(sdk::unknown_ptr) hv_lp_read_multiple_msr;
    
    // [HalpHvMapDeviceMsiRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x63f08, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a4668, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8175c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a35d8, 0x1fe000 bytes
    //
    _y60(sdk::unknown_ptr) hv_map_device_msi_range;
    
    // [HalpHvMcaBankCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b884, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a468, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62208, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a448, 0x1fe000 bytes
    //
    _y61(sdk::unknown_ptr) hv_mca_bank_count;
    
    // [HalpHvMcaLpCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b888, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a46c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6220c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a44c, 0x1fe000 bytes
    //
    _y62(sdk::unknown_ptr) hv_mca_lp_count;
    
    // [HalpHvMcaStatusCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b890, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a478, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62218, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a458, 0x1fe000 bytes
    //
    _y63(sdk::unknown_ptr) hv_mca_status_cache;
    
    // [HalpHvMcaStatusCacheInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b88c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a470, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62210, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a450, 0x1fe000 bytes
    //
    _y64(sdk::unknown_ptr) hv_mca_status_cache_initialized;
    
    // [HalpHvMcaStatusMsrIndices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b898, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a480, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62220, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a460, 0x1fe000 bytes
    //
    _y65(sdk::unknown_ptr) hv_mca_status_msr_indices;
    
    // [HalpHvMceConsumedMemoryErrorRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f308, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc9ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc87c, 0x1fe000 bytes
    //
    _y66(sdk::unknown_ptr) hv_mce_consumed_memory_error_recovery;
    
    // [HalpHvNotifyDebugDeviceAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e630, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb9b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd004, 0x1fe000 bytes
    //
    _y67(sdk::unknown_ptr) hv_notify_debug_device_available;
    
    // [HalpHvPhysicalMemoryApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe10, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4fa8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17ab0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4fa8, 0x1fe000 bytes
    //
    _y68(sdk::unknown_ptr) hv_physical_memory_api;
    
    // [HalpHvPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4cb75, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a3f1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62189, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a3d1, 0x1fe000 bytes
    //
    _y69(sdk::unknown_ptr) hv_present;
    
    // [HalpHvRetargetDeviceMsiInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e670, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd138, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb9d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd02c, 0x1fe000 bytes
    //
    _y70(sdk::unknown_ptr) hv_retarget_device_msi_interrupt;
    
    // [HalpHvRetargetIoApicDeviceInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e6ec, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd1b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fba54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd0a8, 0x1fe000 bytes
    //
    _y71(sdk::unknown_ptr) hv_retarget_io_apic_device_interrupt;
    
    // [HalpHvSetMachineCheckHandlerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e7bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd27c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fbb1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd170, 0x1fe000 bytes
    //
    _y72(sdk::unknown_ptr) hv_set_machine_check_handler_state;
    
    // [HalpHvSetMachineCheckRecoveryState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e7f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd2bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fbb5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd1b0, 0x1fe000 bytes
    //
    _y73(sdk::unknown_ptr) hv_set_machine_check_recovery_state;
    
    // [HalpHvSetSleepStateProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e824, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd2f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fbb94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd1e8, 0x1fe000 bytes
    //
    _y74(sdk::unknown_ptr) hv_set_sleep_state_property;
    
    // [HalpHvSleepEnlightenedCpuManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9f2, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a1d1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61f39, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a1b1, 0x1fe000 bytes
    //
    _y75(sdk::unknown_ptr) hv_sleep_enlightened_cpu_manager;
    
    // [HalpHvStartProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f688, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc61c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509ea8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cc50c, 0x1fe000 bytes
    //
    _y76(sdk::unknown_ptr) hv_start_processor;
    
    // [HalpHvStartVirtualProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f398, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd31c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fbbbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd210, 0x1fe000 bytes
    //
    _y77(sdk::unknown_ptr) hv_start_virtual_processor;
    
    // [HalpHvTimerAcknowledgeInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35e20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x38c520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d5b0, 0x1fe000 bytes
    //
    _y78(sdk::unknown_ptr) hv_timer_acknowledge_interrupt;
    
    // [HalpHvTimerApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ecb8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4140, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e050, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4140, 0x1fe000 bytes
    //
    _y79(sdk::unknown_ptr) hv_timer_api;
    
    // [HalpHvTimerArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35e70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x389ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391f50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ab60, 0x1fe000 bytes
    //
    _y80(sdk::unknown_ptr) hv_timer_arm;
    
    // [HalpHvTimerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35f00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x38c4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d570, 0x1fe000 bytes
    //
    _y81(sdk::unknown_ptr) hv_timer_initialize;
    
    // [HalpHvTimerSetInterruptVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36020, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cef30, 0x1fe000 bytes
    //
    _y82(sdk::unknown_ptr) hv_timer_set_interrupt_vector;
    
    // [HalpHvTimerStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17f10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x38ea90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38fae0, 0x1fe000 bytes
    //
    _y83(sdk::unknown_ptr) hv_timer_stop;
    
    // [HalpHvUnmapDeviceMsiRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x640dc, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a47c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa818ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3730, 0x1fe000 bytes
    //
    _y84(sdk::unknown_ptr) hv_unmap_device_msi_range;
    
    // [HalpHvUsedForReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9f1, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a1d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61f28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a1b0, 0x1fe000 bytes
    //
    _y85(sdk::unknown_ptr) hv_used_for_reboot;
    
    // [HalpHvVpMcaPcrContextData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fc98, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4840, 0x1fe000 bytes
    //
    _y86(sdk::unknown_ptr) hv_vp_mca_pcr_context_data;
    
    // [HalpHvVpStartEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe198, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39ce80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b80a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e340, 0x1fe000 bytes
    //
    _y87(sdk::unknown_ptr) hv_vp_start_enabled;
    
    // [HalpHvWheaEnlightenedCpuManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9f3, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a1e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61f40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a1c8, 0x1fe000 bytes
    //
    _y88(sdk::unknown_ptr) hv_whea_enlightened_cpu_manager;
    
    // [HalpHwPerfCntInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x618c0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99a900, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7bd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996bb0, 0x1fe000 bytes
    //
    _y89(sdk::unknown_ptr) hw_perf_cnt_init_system;
    
    // [HalpHwToSwIrqlMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d010, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc496a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60850, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49680, 0x1fe000 bytes
    //
    _y90(sdk::unknown_ptr) hw_to_sw_irql_map;
    
    // [HalpHypervisorHpet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd18, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64050, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf28, 0x1fe000 bytes
    //
    _y91(sdk::unknown_ptr) hypervisor_hpet;
    
    // [HalpIDTUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INITDATA:0x711e0, 0x11e8 bytes
    // ntoskrnl.exe INITDATA:0xd54d60, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7fae0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54d60, 0x1fe000 bytes
    //
    _y92(sdk::unknown_ptr) idt_usage;
    
    // [HalpIDTUsageFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INITDATA:0x710e0, 0x11e8 bytes
    // ntoskrnl.exe INITDATA:0xd54960, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f8e0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54960, 0x1fe000 bytes
    //
    _y93(sdk::unknown_ptr) idt_usage_flags;
    
    // [HalpInitBootTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b240, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5d490, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5207c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d330, 0x1fe000 bytes
    //
    _y94(sdk::unknown_ptr) init_boot_table;
    
    // [HalpInitChipHacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69044, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5b05c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f934, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5aefc, 0x1fe000 bytes
    //
    _y95(sdk::unknown_ptr) init_chip_hacks;
    
    // [HalpInitGenericErrorSourceEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60488, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a4b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7b054, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3a70, 0x1fe000 bytes
    //
    _y96(sdk::unknown_ptr) init_generic_error_source_entry;
    
    // [HalpInitGenericErrorSourceEntryV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x64f74, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a4d98, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82004, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3d08, 0x1fe000 bytes
    //
    _y97(sdk::unknown_ptr) init_generic_error_source_entry_v2;
    
    // [HalpInitGenericErrorSourcePollingRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x600f8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5088, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d9d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3ff8, 0x1fe000 bytes
    //
    _y98(sdk::unknown_ptr) init_generic_error_source_polling_routine;
    
    // [HalpInitMemoryCachingRequirementsTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x62514, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99c96c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7ceb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b9ec, 0x1fe000 bytes
    //
    _y99(sdk::unknown_ptr) init_memory_caching_requirements_table;
    
    // [HalpInitNonBusHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69000, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa36650, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb210fc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35ff4, 0x1fe000 bytes
    //
    _z00(sdk::unknown_ptr) init_non_bus_handler;
    
    // [HalpInitSystemHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61124, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x997fd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa75824, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x997708, 0x1fe000 bytes
    //
    _z01(sdk::unknown_ptr) init_system_helper;
    
    // [HalpInitSystemPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d460, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa70f28, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60f34, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa70218, 0x1fe000 bytes
    //
    _z02(sdk::unknown_ptr) init_system_phase0;
    
    // [HalpInitSystemPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60840, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x997f9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa757e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9976cc, 0x1fe000 bytes
    //
    _z03(sdk::unknown_ptr) init_system_phase1;
    
    // [HalpInitializeCmc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x6072c, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d078, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7accc, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c0f8, 0x1fe000 bytes
    //
    _z04(sdk::unknown_ptr) initialize_cmc;
    
    // [HalpInitializeCmciVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xeadc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39f4b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc914, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a0978, 0x1fe000 bytes
    //
    _z05(sdk::unknown_ptr) initialize_cmci_vector;
    
    // [HalpInitializeConfigurationFromMadt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6add4, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c634, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb522e4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c4d4, 0x1fe000 bytes
    //
    _z06(sdk::unknown_ptr) initialize_configuration_from_madt;
    
    // [HalpInitializeErrSrc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60650, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99cca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7ac80, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99bd20, 0x1fe000 bytes
    //
    _z07(sdk::unknown_ptr) initialize_err_src;
    
    // [HalpInitializeGenericErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x602c4, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5154, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7ae3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a40c4, 0x1fe000 bytes
    //
    _z08(sdk::unknown_ptr) initialize_generic_error_source;
    
    // [HalpInitializeInterruptRemappingBspLate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d000, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8629f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868198, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860e20, 0x1fe000 bytes
    //
    _z09(sdk::unknown_ptr) initialize_interrupt_remapping_bsp_late;
    
    // [HalpInitializeInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69cd4, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa3d66c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3e728, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa365dc, 0x1fe000 bytes
    //
    _z10(sdk::unknown_ptr) initialize_interrupts;
    
    // [HalpInitializeInterruptsBspLate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11f54, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c86bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c958c, 0x1fe000 bytes
    //
    _z11(sdk::unknown_ptr) initialize_interrupts_bsp_late;
    
    // [HalpInitializeInterruptsPn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10c0c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bce90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5a40, 0x1fe000 bytes
    //
    _z12(sdk::unknown_ptr) initialize_interrupts_pn;
    
    // [HalpInitializeMce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60684, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99ccdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7ad40, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99bd5c, 0x1fe000 bytes
    //
    _z13(sdk::unknown_ptr) initialize_mce;
    
    // [HalpInitializeNMI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbc88, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0a68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c09b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1878, 0x1fe000 bytes
    //
    _z14(sdk::unknown_ptr) initialize_nmi;
    
    // [HalpInitializePnTimers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xca14, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a6970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb6ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5330, 0x1fe000 bytes
    //
    _z15(sdk::unknown_ptr) initialize_pn_timers;
    
    // [HalpInitializeProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61b14, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99a99c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7be54, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996c4c, 0x1fe000 bytes
    //
    _z16(sdk::unknown_ptr) initialize_profiling;
    
    // [HalpInitializeSecondaryInterruptServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69270, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5af6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f844, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ae0c, 0x1fe000 bytes
    //
    _z17(sdk::unknown_ptr) initialize_secondary_interrupt_services;
    
    // [HalpInitializeTimers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa1d4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1378, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5ec0, 0x1fe000 bytes
    //
    _z18(sdk::unknown_ptr) initialize_timers;
    
    // [HalpInsertSecondarySignalList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28e14, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508b28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb3c0, 0x1fe000 bytes
    //
    _z19(sdk::unknown_ptr) insert_secondary_signal_list;
    
    // [HalpInterruptApplyOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf5e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x374754, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc518, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375ad4, 0x1fe000 bytes
    //
    _z20(sdk::unknown_ptr) interrupt_apply_overrides;
    
    // [HalpInterruptBuildGlobalStartupStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dcd8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _z21(sdk::unknown_ptr) interrupt_build_global_startup_stub;
    
    // [HalpInterruptBuildStartupStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xfe10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39ca80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dce74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39df40, 0x1fe000 bytes
    //
    _z22(sdk::unknown_ptr) interrupt_build_startup_stub;
    
    // [HalpInterruptClusterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fc80, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4830, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a550, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4830, 0x1fe000 bytes
    //
    _z23(sdk::unknown_ptr) interrupt_cluster_data;
    
    // [HalpInterruptClusterDataCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd90, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a568, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f0c, 0x1fe000 bytes
    //
    _z24(sdk::unknown_ptr) interrupt_cluster_data_count;
    
    // [HalpInterruptClusterDataEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fc88, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4838, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a560, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4838, 0x1fe000 bytes
    //
    _z25(sdk::unknown_ptr) interrupt_cluster_data_end;
    
    // [HalpInterruptClusterDataLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd98, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a570, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f10, 0x1fe000 bytes
    //
    _z26(sdk::unknown_ptr) interrupt_cluster_data_limit;
    
    // [HalpInterruptClusterModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fca1, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49718, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496f8, 0x1fe000 bytes
    //
    _z27(sdk::unknown_ptr) interrupt_cluster_mode_enabled;
    
    // [HalpInterruptClusterModeForced]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fce4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c2b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c290, 0x1fe000 bytes
    //
    _z28(sdk::unknown_ptr) interrupt_cluster_mode_forced;
    
    // [HalpInterruptCmciService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29540, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ccba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ad70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cca90, 0x1fe000 bytes
    //
    _z29(sdk::unknown_ptr) interrupt_cmci_service;
    
    // [HalpInterruptConnect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27dfc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5b08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f40c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b59d8, 0x1fe000 bytes
    //
    _z30(sdk::unknown_ptr) interrupt_connect;
    
    // [HalpInterruptController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7d0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc506f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a488, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc506f8, 0x1fe000 bytes
    //
    _z31(sdk::unknown_ptr) interrupt_controller;
    
    // [HalpInterruptControllerCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d748, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c640, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64780, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c640, 0x1fe000 bytes
    //
    _z32(sdk::unknown_ptr) interrupt_controller_count;
    
    // [HalpInterruptControllerInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29364, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbe3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50924c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbd2c, 0x1fe000 bytes
    //
    _z33(sdk::unknown_ptr) interrupt_controller_in_use;
    
    // [HalpInterruptCreateGdtEntry32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10128, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39ccc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dd078, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e188, 0x1fe000 bytes
    //
    _z34(sdk::unknown_ptr) interrupt_create_gdt_entry32;
    
    // [HalpInterruptDeferredRecoveryService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29550, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ccbc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ad90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccab0, 0x1fe000 bytes
    //
    _z35(sdk::unknown_ptr) interrupt_deferred_recovery_service;
    
    // [HalpInterruptDestinationToTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf4f8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x374660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387464, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3759e0, 0x1fe000 bytes
    //
    _z36(sdk::unknown_ptr) interrupt_destination_to_target;
    
    // [HalpInterruptDpReplaceBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3b308, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0ffc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50f47c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0eec, 0x1fe000 bytes
    //
    _z37(sdk::unknown_ptr) interrupt_dp_replace_begin;
    
    // [HalpInterruptDynamicProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcd0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcbc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63da4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc9c, 0x1fe000 bytes
    //
    _z38(sdk::unknown_ptr) interrupt_dynamic_processor_count;
    
    // [HalpInterruptDynamicProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7c0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bc98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63d68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc78, 0x1fe000 bytes
    //
    _z39(sdk::unknown_ptr) interrupt_dynamic_processor_state;
    
    // [HalpInterruptEnableNmi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe2c4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39ec6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bbbbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a012c, 0x1fe000 bytes
    //
    _z40(sdk::unknown_ptr) interrupt_enable_nmi;
    
    // [HalpInterruptEnablePerformanceEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe4a8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39eea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc65c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a0360, 0x1fe000 bytes
    //
    _z41(sdk::unknown_ptr) interrupt_enable_performance_events;
    
    // [HalpInterruptEnsureLineSwapComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x65acc, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a5f88, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83af4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a4ef8, 0x1fe000 bytes
    //
    _z42(sdk::unknown_ptr) interrupt_ensure_line_swap_complete;
    
    // [HalpInterruptEnumerateUnmaskedInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27c80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b57f0, 0x1fe000 bytes
    //
    _z43(sdk::unknown_ptr) interrupt_enumerate_unmasked_interrupts;
    
    // [HalpInterruptEnumerateUnmaskedSecondaryInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28ea0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508c18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb4b0, 0x1fe000 bytes
    //
    _z44(sdk::unknown_ptr) interrupt_enumerate_unmasked_secondary_interrupts;
    
    // [HalpInterruptFindBestRouting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf3fc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x374550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bcab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3758d0, 0x1fe000 bytes
    //
    _z45(sdk::unknown_ptr) interrupt_find_best_routing;
    
    // [HalpInterruptFindControllerAndLineState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27ffc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5d04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3875d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5bd4, 0x1fe000 bytes
    //
    _z46(sdk::unknown_ptr) interrupt_find_controller_and_line_state;
    
    // [HalpInterruptFindLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf478, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3745d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387668, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375950, 0x1fe000 bytes
    //
    _z47(sdk::unknown_ptr) interrupt_find_lines;
    
    // [HalpInterruptFindLinesForGsiRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf6e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3748d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387744, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375c58, 0x1fe000 bytes
    //
    _z48(sdk::unknown_ptr) interrupt_find_lines_for_gsi_range;
    
    // [HalpInterruptFixedLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcdc, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4bf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17648, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4bf0, 0x1fe000 bytes
    //
    _z49(sdk::unknown_ptr) interrupt_fixed_lines;
    
    // [HalpInterruptGenerateMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xcf50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x373d78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x386650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3750f8, 0x1fe000 bytes
    //
    _z50(sdk::unknown_ptr) interrupt_generate_message;
    
    // [HalpInterruptGetApicVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xed80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x373ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3871a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375250, 0x1fe000 bytes
    //
    _z51(sdk::unknown_ptr) interrupt_get_apic_version;
    
    // [HalpInterruptGetHighestPriorityInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28650, 0x11e8 bytes
    // ntoskrnl.exe .text:0x254580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3704e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3042d0, 0x1fe000 bytes
    //
    _z52(sdk::unknown_ptr) interrupt_get_highest_priority_interrupt;
    
    // [HalpInterruptGetIrtInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59fa8, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x79acd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x832c1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2254, 0x1fe000 bytes
    //
    _z53(sdk::unknown_ptr) interrupt_get_irt_info;
    
    // [HalpInterruptGetNextProcessorLocalId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x101b4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d7b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b74a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ec74, 0x1fe000 bytes
    //
    _z54(sdk::unknown_ptr) interrupt_get_next_processor_local_id;
    
    // [HalpInterruptGetParkingPageInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _z55(sdk::unknown_ptr) interrupt_get_parking_page_information;
    
    // [HalpInterruptGetPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf784, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39f57c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bca80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a0a3c, 0x1fe000 bytes
    //
    _z56(sdk::unknown_ptr) interrupt_get_priority;
    
    // [HalpInterruptGetX2ApicPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xfbe4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d54c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b90fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ea0c, 0x1fe000 bytes
    //
    _z57(sdk::unknown_ptr) interrupt_get_x2_apic_policy;
    
    // [HalpInterruptGicVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d1c0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63da8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bca0, 0x1fe000 bytes
    //
    _z58(sdk::unknown_ptr) interrupt_gic_version;
    
    // [HalpInterruptGsiToLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf698, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37488c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3876f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375c0c, 0x1fe000 bytes
    //
    _z59(sdk::unknown_ptr) interrupt_gsi_to_line;
    
    // [HalpInterruptHyperThreading]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d800, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496e0, 0x1fe000 bytes
    //
    _z60(sdk::unknown_ptr) interrupt_hyper_threading;
    
    // [HalpInterruptInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d054, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa6f720, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5f5ec, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6eab0, 0x1fe000 bytes
    //
    _z61(sdk::unknown_ptr) interrupt_init_discard;
    
    // [HalpInterruptInitPowerManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x157a8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b9010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d65e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b99cc, 0x1fe000 bytes
    //
    _z62(sdk::unknown_ptr) interrupt_init_power_management;
    
    // [HalpInterruptInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61270, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99ac50, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa79a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996f00, 0x1fe000 bytes
    //
    _z63(sdk::unknown_ptr) interrupt_init_system;
    
    // [HalpInterruptInitializeController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11338, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39eb58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3be25c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a0018, 0x1fe000 bytes
    //
    _z64(sdk::unknown_ptr) interrupt_initialize_controller;
    
    // [HalpInterruptInitializeGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5dc8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x271818, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385c1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3233a8, 0x1fe000 bytes
    //
    _z65(sdk::unknown_ptr) interrupt_initialize_globals;
    
    // [HalpInterruptInitializeIpis]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10f2c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7194, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3be320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5b54, 0x1fe000 bytes
    //
    _z66(sdk::unknown_ptr) interrupt_initialize_ipis;
    
    // [HalpInterruptInitializeLocalUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe5c8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39f20c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bbdf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a06cc, 0x1fe000 bytes
    //
    _z67(sdk::unknown_ptr) interrupt_initialize_local_unit;
    
    // [HalpInterruptIoApic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d808, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc496c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60870, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496a0, 0x1fe000 bytes
    //
    _z68(sdk::unknown_ptr) interrupt_io_apic;
    
    // [HalpInterruptIoApicCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d804, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc496cc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6087c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496ac, 0x1fe000 bytes
    //
    _z69(sdk::unknown_ptr) interrupt_io_apic_count;
    
    // [HalpInterruptIpiLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7e8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a558, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507c0, 0x1fe000 bytes
    //
    _z70(sdk::unknown_ptr) interrupt_ipi_lines;
    
    // [HalpInterruptIsCmciSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11f10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ca254, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb354, 0x1fe000 bytes
    //
    _z71(sdk::unknown_ptr) interrupt_is_cmci_supported;
    
    // [HalpInterruptIsGsiValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5cb80, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x861980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85fdb0, 0x1fe000 bytes
    //
    _z72(sdk::unknown_ptr) interrupt_is_gsi_valid;
    
    // [HalpInterruptIsMsiSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15260, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c4738, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c08dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c54a8, 0x1fe000 bytes
    //
    _z73(sdk::unknown_ptr) interrupt_is_msi_supported;
    
    // [HalpInterruptIsPicStateIntact]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x625c0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x98d2c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c2d0, 0x1fe000 bytes
    //
    _z74(sdk::unknown_ptr) interrupt_is_pic_state_intact;
    
    // [HalpInterruptIsRemappingRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf770, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37496c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3875b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375cec, 0x1fe000 bytes
    //
    _z75(sdk::unknown_ptr) interrupt_is_remapping_required;
    
    // [HalpInterruptLastProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fce8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49714, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496f4, 0x1fe000 bytes
    //
    _z76(sdk::unknown_ptr) interrupt_last_problem;
    
    // [HalpInterruptLineToGsi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28764, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6dd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5034, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6ca4, 0x1fe000 bytes
    //
    _z77(sdk::unknown_ptr) interrupt_line_to_gsi;
    
    // [HalpInterruptLocalErrorService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe1d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a1d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3240, 0x1fe000 bytes
    //
    _z78(sdk::unknown_ptr) interrupt_local_error_service;
    
    // [HalpInterruptLocalUnitErrorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d814, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50858, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a644, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50858, 0x1fe000 bytes
    //
    _z79(sdk::unknown_ptr) interrupt_local_unit_error_count;
    
    // [HalpInterruptLocalUnitErrorLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d008, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49588, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc603b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49568, 0x1fe000 bytes
    //
    _z80(sdk::unknown_ptr) interrupt_local_unit_error_lock;
    
    // [HalpInterruptLocalUnitErrorLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4cd00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49280, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc603c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49260, 0x1fe000 bytes
    //
    _z81(sdk::unknown_ptr) interrupt_local_unit_error_log;
    
    // [HalpInterruptLocalUnitErrorLogProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4cf00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49480, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc605c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49460, 0x1fe000 bytes
    //
    _z82(sdk::unknown_ptr) interrupt_local_unit_error_log_processor;
    
    // [HalpInterruptLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d0e0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d00, 0x1fe000 bytes
    //
    _z83(sdk::unknown_ptr) interrupt_lock;
    
    // [HalpInterruptLogicalFlatLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a94c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f2b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09970, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f300, 0x1fe000 bytes
    //
    _z84(sdk::unknown_ptr) interrupt_logical_flat_limit;
    
    // [HalpInterruptLogicalMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7f1, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49710, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496f0, 0x1fe000 bytes
    //
    _z85(sdk::unknown_ptr) interrupt_logical_mode;
    
    // [HalpInterruptLookupController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf4d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x374630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3876c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3759b0, 0x1fe000 bytes
    //
    _z86(sdk::unknown_ptr) interrupt_lookup_controller;
    
    // [HalpInterruptMapParkedPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x293b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbe90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5092a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbd80, 0x1fe000 bytes
    //
    _z87(sdk::unknown_ptr) interrupt_map_parked_page;
    
    // [HalpInterruptMarkProcessorStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf7ac, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39f5ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd268, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a0a6c, 0x1fe000 bytes
    //
    _z88(sdk::unknown_ptr) interrupt_mark_processor_started;
    
    // [HalpInterruptMaskAcpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5fd38, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99489c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa810c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9938ac, 0x1fe000 bytes
    //
    _z89(sdk::unknown_ptr) interrupt_mask_acpi;
    
    // [HalpInterruptMaskLevelTriggeredLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3b6e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50f8b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1520, 0x1fe000 bytes
    //
    _z90(sdk::unknown_ptr) interrupt_mask_level_triggered_lines;
    
    // [HalpInterruptMaxCluster]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d74c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c644, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64784, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c644, 0x1fe000 bytes
    //
    _z91(sdk::unknown_ptr) interrupt_max_cluster;
    
    // [HalpInterruptMaxClusterSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7e4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c648, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64788, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c648, 0x1fe000 bytes
    //
    _z92(sdk::unknown_ptr) interrupt_max_cluster_size;
    
    // [HalpInterruptMaxGroupStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcd4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63da0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc98, 0x1fe000 bytes
    //
    _z93(sdk::unknown_ptr) interrupt_max_group_started;
    
    // [HalpInterruptMaxProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7dc, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50704, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a494, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50704, 0x1fe000 bytes
    //
    _z94(sdk::unknown_ptr) interrupt_max_processors;
    
    // [HalpInterruptModel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xdfb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x377174, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3872c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3784f4, 0x1fe000 bytes
    //
    _z95(sdk::unknown_ptr) interrupt_model;
    
    // [HalpInterruptMsiOverrideFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fce0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4bf4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1764c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4bf4, 0x1fe000 bytes
    //
    _z96(sdk::unknown_ptr) interrupt_msi_override_flags;
    
    // [HalpInterruptMsiSupportDetermined]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7e1, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50709, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a499, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50709, 0x1fe000 bytes
    //
    _z97(sdk::unknown_ptr) interrupt_msi_support_determined;
    
    // [HalpInterruptMsiSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7e0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50708, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a498, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50708, 0x1fe000 bytes
    //
    _z98(sdk::unknown_ptr) interrupt_msi_supported;
    
    // [HalpInterruptNextCluster]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fda4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc496b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60864, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49690, 0x1fe000 bytes
    //
    _z99(sdk::unknown_ptr) interrupt_next_cluster;
    
    // [HalpInterruptNextClusterIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fda0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc496d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60888, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496b0, 0x1fe000 bytes
    //
    _a00(sdk::unknown_ptr) interrupt_next_cluster_index;
    
    // [HalpInterruptNmiRebootInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b880, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48e98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc606c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e78, 0x1fe000 bytes
    //
    _a01(sdk::unknown_ptr) interrupt_nmi_reboot_in_progress;
    
    // [HalpInterruptNmiSources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7f8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49708, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496e8, 0x1fe000 bytes
    //
    _a02(sdk::unknown_ptr) interrupt_nmi_sources;
    
    // [HalpInterruptNoShorthand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd8c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4efe, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1797e, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4efe, 0x1fe000 bytes
    //
    _a03(sdk::unknown_ptr) interrupt_no_shorthand;
    
    // [HalpInterruptOfflineProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3b820, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fa00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1670, 0x1fe000 bytes
    //
    _a04(sdk::unknown_ptr) interrupt_offline_processor;
    
    // [HalpInterruptOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d020, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc496e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc608a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc496c0, 0x1fe000 bytes
    //
    _a05(sdk::unknown_ptr) interrupt_overrides;
    
    // [HalpInterruptP0LocalId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d810, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc496b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6086c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49698, 0x1fe000 bytes
    //
    _a06(sdk::unknown_ptr) interrupt_p0_local_id;
    
    // [HalpInterruptPackagesStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd88, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcb4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63d94, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc94, 0x1fe000 bytes
    //
    _a07(sdk::unknown_ptr) interrupt_packages_started;
    
    // [HalpInterruptParseAcpiTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11b94, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a6a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5410, 0x1fe000 bytes
    //
    _a08(sdk::unknown_ptr) interrupt_parse_acpi_tables;
    
    // [HalpInterruptParseMadt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11588, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a6ac4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf8b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5484, 0x1fe000 bytes
    //
    _a09(sdk::unknown_ptr) interrupt_parse_madt;
    
    // [HalpInterruptPerfLinesFound]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7e2, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc5070a, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a49a, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5070a, 0x1fe000 bytes
    //
    _a10(sdk::unknown_ptr) interrupt_perf_lines_found;
    
    // [HalpInterruptPhysicalModeOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fca0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf48b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17643, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48b8, 0x1fe000 bytes
    //
    _a11(sdk::unknown_ptr) interrupt_physical_mode_only;
    
    // [HalpInterruptPhysicalTargets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d100, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4b860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc638a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4b840, 0x1fe000 bytes
    //
    _a12(sdk::unknown_ptr) interrupt_physical_targets;
    
    // [HalpInterruptPicLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11b78, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a3004, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bff00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4534, 0x1fe000 bytes
    //
    _a13(sdk::unknown_ptr) interrupt_pic_line;
    
    // [HalpInterruptPicStateIntact]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7a8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50430, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50430, 0x1fe000 bytes
    //
    _a14(sdk::unknown_ptr) interrupt_pic_state_intact;
    
    // [HalpInterruptPowerChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29420, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbf04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509314, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbdf4, 0x1fe000 bytes
    //
    _a15(sdk::unknown_ptr) interrupt_power_change;
    
    // [HalpInterruptPowerComponentActiveCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x294c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbfa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5093b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbe90, 0x1fe000 bytes
    //
    _a16(sdk::unknown_ptr) interrupt_power_component_active_callback;
    
    // [HalpInterruptPowerComponentIdleCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x294d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbfc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5093d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbeb0, 0x1fe000 bytes
    //
    _a17(sdk::unknown_ptr) interrupt_power_component_idle_callback;
    
    // [HalpInterruptPowerCriticalTransitionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29500, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbef0, 0x1fe000 bytes
    //
    _a18(sdk::unknown_ptr) interrupt_power_critical_transition_callback;
    
    // [HalpInterruptProcessorCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcd8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4bec, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17644, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4bec, 0x1fe000 bytes
    //
    _a19(sdk::unknown_ptr) interrupt_processor_cap;
    
    // [HalpInterruptProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7d8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a490, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50700, 0x1fe000 bytes
    //
    _a20(sdk::unknown_ptr) interrupt_processor_count;
    
    // [HalpInterruptProcessorPcr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d0e8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cf8, 0x1fe000 bytes
    //
    _a21(sdk::unknown_ptr) interrupt_processor_pcr;
    
    // [HalpInterruptProcessorRestarting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7b8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bca1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63d71, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc81, 0x1fe000 bytes
    //
    _a22(sdk::unknown_ptr) interrupt_processor_restarting;
    
    // [HalpInterruptProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7b0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bca8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63d88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc88, 0x1fe000 bytes
    //
    _a23(sdk::unknown_ptr) interrupt_processor_state;
    
    // [HalpInterruptProcessorStateInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7a9, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63d90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bc90, 0x1fe000 bytes
    //
    _a24(sdk::unknown_ptr) interrupt_processor_state_initialized;
    
    // [HalpInterruptProcessorsStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a930, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc113d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bed0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11440, 0x1fe000 bytes
    //
    _a25(sdk::unknown_ptr) interrupt_processors_started;
    
    // [HalpInterruptQueryControllerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59f0c, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b39fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e3ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb58c, 0x1fe000 bytes
    //
    _a26(sdk::unknown_ptr) interrupt_query_controller_info;
    
    // [HalpInterruptQueryProcessorRestartEntryPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362690, 0x1fe000 bytes
    //
    _a27(sdk::unknown_ptr) interrupt_query_processor_restart_entry_point;
    
    // [HalpInterruptRebootService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29570, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ccbe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50adb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccad0, 0x1fe000 bytes
    //
    _a28(sdk::unknown_ptr) interrupt_reboot_service;
    
    // [HalpInterruptRegisterController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10fb4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a9704, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9234, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a80c4, 0x1fe000 bytes
    //
    _a29(sdk::unknown_ptr) interrupt_register_controller;
    
    // [HalpInterruptRegisterDynamicProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2842c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6a88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4bdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6958, 0x1fe000 bytes
    //
    _a30(sdk::unknown_ptr) interrupt_register_dynamic_processor;
    
    // [HalpInterruptRegisterLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd1f4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a90a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a7a60, 0x1fe000 bytes
    //
    _a31(sdk::unknown_ptr) interrupt_register_line;
    
    // [HalpInterruptRegistrationAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a8fc, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f2b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09974, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f308, 0x1fe000 bytes
    //
    _a32(sdk::unknown_ptr) interrupt_registration_allowed;
    
    // [HalpInterruptReinitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f560, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9925c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8118c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9915d8, 0x1fe000 bytes
    //
    _a33(sdk::unknown_ptr) interrupt_reinitialize;
    
    // [HalpInterruptReinitializeThisProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xe168, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39ec38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a00f8, 0x1fe000 bytes
    //
    _a34(sdk::unknown_ptr) interrupt_reinitialize_this_processor;
    
    // [HalpInterruptRemap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xeb8c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x373f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3867fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375290, 0x1fe000 bytes
    //
    _a35(sdk::unknown_ptr) interrupt_remap;
    
    // [HalpInterruptRequestInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x287a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6cf0, 0x1fe000 bytes
    //
    _a36(sdk::unknown_ptr) interrupt_request_interrupt;
    
    // [HalpInterruptRequestSecondaryInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28fbc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb744, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508d9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb634, 0x1fe000 bytes
    //
    _a37(sdk::unknown_ptr) interrupt_request_secondary_interrupt;
    
    // [HalpInterruptResetAllProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f85c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cd17c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4c9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cd06c, 0x1fe000 bytes
    //
    _a38(sdk::unknown_ptr) interrupt_reset_all_processors;
    
    // [HalpInterruptResetThisProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x284f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6a20, 0x1fe000 bytes
    //
    _a39(sdk::unknown_ptr) interrupt_reset_this_processor;
    
    // [HalpInterruptRestoreAllControllerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5fc40, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x994300, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa813f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x993310, 0x1fe000 bytes
    //
    _a40(sdk::unknown_ptr) interrupt_restore_all_controller_state;
    
    // [HalpInterruptRestoreClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x61e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x38217c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f51f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x382f3c, 0x1fe000 bytes
    //
    _a41(sdk::unknown_ptr) interrupt_restore_clock;
    
    // [HalpInterruptRestoreController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6a74, 0x11e8 bytes
    // ntoskrnl.exe .text:0x386d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509428, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x387b30, 0x1fe000 bytes
    //
    _a42(sdk::unknown_ptr) interrupt_restore_controller;
    
    // [HalpInterruptSaveReplayState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x65b50, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a6010, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83b7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a4f80, 0x1fe000 bytes
    //
    _a43(sdk::unknown_ptr) interrupt_save_replay_state;
    
    // [HalpInterruptSelectController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12428, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7228, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7dc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5be8, 0x1fe000 bytes
    //
    _a44(sdk::unknown_ptr) interrupt_select_controller;
    
    // [HalpInterruptSendIpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1fdc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x303ca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b6040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26e120, 0x1fe000 bytes
    //
    _a45(sdk::unknown_ptr) interrupt_send_ipi;
    
    // [HalpInterruptServiceActiveBoth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x288c4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b826c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f669c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b813c, 0x1fe000 bytes
    //
    _a46(sdk::unknown_ptr) interrupt_service_active_both;
    
    // [HalpInterruptSetDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xefd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3742c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375640, 0x1fe000 bytes
    //
    _a47(sdk::unknown_ptr) interrupt_set_destination;
    
    // [HalpInterruptSetDestinationInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf0a4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37439c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f42bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37571c, 0x1fe000 bytes
    //
    _a48(sdk::unknown_ptr) interrupt_set_destination_internal;
    
    // [HalpInterruptSetIdtEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10d04, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39dbac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bcfa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39f06c, 0x1fe000 bytes
    //
    _a49(sdk::unknown_ptr) interrupt_set_idt_entry;
    
    // [HalpInterruptSetLineState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xedbc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39eff8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc184, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a04b8, 0x1fe000 bytes
    //
    _a50(sdk::unknown_ptr) interrupt_set_line_state;
    
    // [HalpInterruptSetLineStateInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xf1e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3744dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc4a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37585c, 0x1fe000 bytes
    //
    _a51(sdk::unknown_ptr) interrupt_set_line_state_internal;
    
    // [HalpInterruptSetMsiOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x288a4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f542c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6e50, 0x1fe000 bytes
    //
    _a52(sdk::unknown_ptr) interrupt_set_msi_override;
    
    // [HalpInterruptSetProblemEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29508, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc018, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509548, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cbf08, 0x1fe000 bytes
    //
    _a53(sdk::unknown_ptr) interrupt_set_problem_ex;
    
    // [HalpInterruptSetProcessorStartContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b73c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _a54(sdk::unknown_ptr) interrupt_set_processor_start_context;
    
    // [HalpInterruptSetRemappedDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x280b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5e98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3872f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5d68, 0x1fe000 bytes
    //
    _a55(sdk::unknown_ptr) interrupt_set_remapped_destination;
    
    // [HalpInterruptSetRemappedDestinationHv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x281a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f44bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5e60, 0x1fe000 bytes
    //
    _a56(sdk::unknown_ptr) interrupt_set_remapped_destination_hv;
    
    // [HalpInterruptSetRemappedLineStateInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10ae0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c6364, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc9d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7234, 0x1fe000 bytes
    //
    _a57(sdk::unknown_ptr) interrupt_set_remapped_line_state_internal;
    
    // [HalpInterruptSortProcessorTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11ad0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a703c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bfe24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a59fc, 0x1fe000 bytes
    //
    _a58(sdk::unknown_ptr) interrupt_sort_processor_table;
    
    // [HalpInterruptSpuriousService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x295c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ccc30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ae00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccb20, 0x1fe000 bytes
    //
    _a59(sdk::unknown_ptr) interrupt_spurious_service;
    
    // [HalpInterruptStandardEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x289a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b83a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f67d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8270, 0x1fe000 bytes
    //
    _a60(sdk::unknown_ptr) interrupt_standard_end_of_interrupt;
    
    // [HalpInterruptStartProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61968, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x996244, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa78ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9955e4, 0x1fe000 bytes
    //
    _a61(sdk::unknown_ptr) interrupt_start_processor;
    
    // [HalpInterruptStubService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x295e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ccc60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ae30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccb50, 0x1fe000 bytes
    //
    _a62(sdk::unknown_ptr) interrupt_stub_service;
    
    // [HalpInterruptSwapProcessorIdentifiers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x65bac, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a6074, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a4fe4, 0x1fe000 bytes
    //
    _a63(sdk::unknown_ptr) interrupt_swap_processor_identifiers;
    
    // [HalpInterruptTargets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7c8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc506f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc506f0, 0x1fe000 bytes
    //
    _a64(sdk::unknown_ptr) interrupt_targets;
    
    // [HalpInterruptThermalService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29600, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ccc90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ae60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccb80, 0x1fe000 bytes
    //
    _a65(sdk::unknown_ptr) interrupt_thermal_service;
    
    // [HalpInterruptThermalServiceRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d000, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49580, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc603b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49560, 0x1fe000 bytes
    //
    _a66(sdk::unknown_ptr) interrupt_thermal_service_routine;
    
    // [HalpInterruptUnmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5cba8, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x741b58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f298, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749798, 0x1fe000 bytes
    //
    _a67(sdk::unknown_ptr) interrupt_unmap;
    
    // [HalpInterruptUnmaskLevelTriggeredLines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3b880, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1710, 0x1fe000 bytes
    //
    _a68(sdk::unknown_ptr) interrupt_unmask_level_triggered_lines;
    
    // [HalpInterruptUpdateLinesPostSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x65d38, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a6224, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83d8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a5194, 0x1fe000 bytes
    //
    _a69(sdk::unknown_ptr) interrupt_update_lines_post_swap;
    
    // [HalpInterruptUpdateLocalUnitIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x65ea0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a639c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a530c, 0x1fe000 bytes
    //
    _a70(sdk::unknown_ptr) interrupt_update_local_unit_identifier;
    
    // [HalpInterruptVectorDataToGsiv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x28330, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6060, 0x1fe000 bytes
    //
    _a71(sdk::unknown_ptr) interrupt_vector_data_to_gsiv;
    
    // [HalpInterruptX2ApicPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a948, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc11f06, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb46, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f66, 0x1fe000 bytes
    //
    _a72(sdk::unknown_ptr) interrupt_x2_apic_policy;
    
    // [HalpInvokeIsrForGsiv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17000, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb6f0, 0x1fe000 bytes
    //
    _a73(sdk::unknown_ptr) invoke_isr_for_gsiv;
    
    // [HalpIoDelay]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x173b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efcc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f15a0, 0x1fe000 bytes
    //
    _a74(sdk::unknown_ptr) io_delay;
    
    // [HalpIoMemoryBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b8c0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bdc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63ec0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bda0, 0x1fe000 bytes
    //
    _a75(sdk::unknown_ptr) io_memory_base;
    
    // [HalpIommuConfigureInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x30088, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c19fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6140, 0x1fe000 bytes
    //
    _a76(sdk::unknown_ptr) iommu_configure_interrupt;
    
    // [HalpIommuCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b834, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49c04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49be4, 0x1fe000 bytes
    //
    _a77(sdk::unknown_ptr) iommu_count;
    
    // [HalpIommuExtMarkHiberMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x30214, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c63f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c62e0, 0x1fe000 bytes
    //
    _a78(sdk::unknown_ptr) iommu_ext_mark_hiber_memory;
    
    // [HalpIommuGetNextFlushDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x30238, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c654c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5040a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c643c, 0x1fe000 bytes
    //
    _a79(sdk::unknown_ptr) iommu_get_next_flush_device;
    
    // [HalpIommuHsaDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6cc68, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa3dc84, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f5f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36bf4, 0x1fe000 bytes
    //
    _a80(sdk::unknown_ptr) iommu_hsa_discover;
    
    // [HalpIommuInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6cb6c, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa3da58, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f350, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa369c8, 0x1fe000 bytes
    //
    _a81(sdk::unknown_ptr) iommu_init_discard;
    
    // [HalpIommuInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x613f0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99ad90, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa79b60, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x997040, 0x1fe000 bytes
    //
    _a82(sdk::unknown_ptr) iommu_init_system;
    
    // [HalpIommuInitializeAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x62484, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9976a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7b30c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996a44, 0x1fe000 bytes
    //
    _a83(sdk::unknown_ptr) iommu_initialize_all;
    
    // [HalpIommuInterruptRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x302a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c65c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c64b0, 0x1fe000 bytes
    //
    _a84(sdk::unknown_ptr) iommu_interrupt_routine;
    
    // [HalpIommuList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b840, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49c30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61800, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c10, 0x1fe000 bytes
    //
    _a85(sdk::unknown_ptr) iommu_list;
    
    // [HalpIommuLocateFromDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a4a0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x746ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e710, 0x1fe000 bytes
    //
    _a86(sdk::unknown_ptr) iommu_locate_from_device;
    
    // [HalpIommuPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b838, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49c40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61810, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c20, 0x1fe000 bytes
    //
    _a87(sdk::unknown_ptr) iommu_policy;
    
    // [HalpIommuRegisterDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d4b0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa71060, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60f90, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa702f0, 0x1fe000 bytes
    //
    _a88(sdk::unknown_ptr) iommu_register_dispatch_table;
    
    // [HalpIommuSetupMessageInterruptRouting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x64264, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a4a3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7b5e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a39ac, 0x1fe000 bytes
    //
    _a89(sdk::unknown_ptr) iommu_setup_message_interrupt_routing;
    
    // [HalpIommuSkipPciConfigDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b830, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49c00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49be0, 0x1fe000 bytes
    //
    _a90(sdk::unknown_ptr) iommu_skip_pci_config_disabled;
    
    // [HalpIommuSupportEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xdfe0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c6340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e27b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7210, 0x1fe000 bytes
    //
    _a91(sdk::unknown_ptr) iommu_support_enabled;
    
    // [HalpIommuUpdateRemappingDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x641e4, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a4840, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa81e78, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a37b0, 0x1fe000 bytes
    //
    _a92(sdk::unknown_ptr) iommu_update_remapping_destination;
    
    // [HalpIommuUpdateRemappingTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ffd4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bfc90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e5a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bfb80, 0x1fe000 bytes
    //
    _a93(sdk::unknown_ptr) iommu_update_remapping_table_entry;
    
    // [HalpIrtAllocateIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d07c, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x862c44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861074, 0x1fe000 bytes
    //
    _a94(sdk::unknown_ptr) irt_allocate_index;
    
    // [HalpIrtFreeIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d0c0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8630b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9302f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8614e8, 0x1fe000 bytes
    //
    _a95(sdk::unknown_ptr) irt_free_index;
    
    // [HalpIrtTotalEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d048, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc499b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60b78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49998, 0x1fe000 bytes
    //
    _a96(sdk::unknown_ptr) irt_total_entries;
    
    // [HalpIsCmciImplemented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x606f8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x995f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7b698, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9952d4, 0x1fe000 bytes
    //
    _a97(sdk::unknown_ptr) is_cmci_implemented;
    
    // [HalpIsEFIRuntimeActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc340, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c6fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7ea0, 0x1fe000 bytes
    //
    _a98(sdk::unknown_ptr) is_efi_runtime_active;
    
    // [HalpIsHvPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xfb7c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d4d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8acc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e998, 0x1fe000 bytes
    //
    _a99(sdk::unknown_ptr) is_hv_present;
    
    // [HalpIsHvUsedForReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f4f4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bcac4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb2b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc994, 0x1fe000 bytes
    //
    _b00(sdk::unknown_ptr) is_hv_used_for_reboot;
    
    // [HalpIsInterruptTypeSecondary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14990, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ffb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c13a0, 0x1fe000 bytes
    //
    _b01(sdk::unknown_ptr) is_interrupt_type_secondary;
    
    // [HalpIsMicrosoftCompatibleHvLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xfb40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d498, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8a8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e958, 0x1fe000 bytes
    //
    _b02(sdk::unknown_ptr) is_microsoft_compatible_hv_loaded;
    
    // [HalpIsPartitionCpuManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x162cc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a60cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8a48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4a84, 0x1fe000 bytes
    //
    _b03(sdk::unknown_ptr) is_partition_cpu_manager;
    
    // [HalpIsUefiFirmwareResourceTablePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59390, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x78c398, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x796138, 0x1fe000 bytes
    //
    _b04(sdk::unknown_ptr) is_uefi_firmware_resource_table_present;
    
    // [HalpIsXboxNanovisorPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xfda4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b916c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ec00, 0x1fe000 bytes
    //
    _b05(sdk::unknown_ptr) is_xbox_nanovisor_present;
    
    // [HalpIumEfiWrapperTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x495e0, 0x11e8 bytes
    // ntoskrnl.exe CFGRO:0xe01a20, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01a30, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01a20, 0x1fe000 bytes
    //
    _b06(sdk::unknown_ptr) ium_efi_wrapper_table;
    
    // [HalpIumGetNextVariableName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x26f80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ed90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0800, 0x1fe000 bytes
    //
    _b07(sdk::unknown_ptr) ium_get_next_variable_name;
    
    // [HalpIumGetTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27080, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0a50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50eed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0940, 0x1fe000 bytes
    //
    _b08(sdk::unknown_ptr) ium_get_time;
    
    // [HalpIumGetVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27110, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ef60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d09d0, 0x1fe000 bytes
    //
    _b09(sdk::unknown_ptr) ium_get_variable;
    
    // [HalpIumQueryCapsuleCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3613f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3911c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362820, 0x1fe000 bytes
    //
    _b10(sdk::unknown_ptr) ium_query_capsule_capabilities;
    
    // [HalpIumQueryVariableInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27250, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50f0f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0b60, 0x1fe000 bytes
    //
    _b11(sdk::unknown_ptr) ium_query_variable_info;
    
    // [HalpIumResetSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x272d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50f180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0bf0, 0x1fe000 bytes
    //
    _b12(sdk::unknown_ptr) ium_reset_system;
    
    // [HalpIumSetTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27340, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50f1f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0c60, 0x1fe000 bytes
    //
    _b13(sdk::unknown_ptr) ium_set_time;
    
    // [HalpIumSetVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x273a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50f250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0cc0, 0x1fe000 bytes
    //
    _b14(sdk::unknown_ptr) ium_set_variable;
    
    // [HalpIumUpdateCapsule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3613f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3911c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362820, 0x1fe000 bytes
    //
    _b15(sdk::unknown_ptr) ium_update_capsule;
    
    // [HalpIvtProcessDmarTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34538, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e1680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bfe68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e1570, 0x1fe000 bytes
    //
    _b16(sdk::unknown_ptr) ivt_process_dmar_table;
    
    // [HalpIvtProcessDrhdEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x345ac, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e172c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3be524, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e161c, 0x1fe000 bytes
    //
    _b17(sdk::unknown_ptr) ivt_process_drhd_entry;
    
    // [HalpKInterruptHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dbf0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf2f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0ce50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf2f40, 0x1fe000 bytes
    //
    _b18(sdk::unknown_ptr) k_interrupt_heap;
    
    // [HalpKInterruptHeapUsed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d818, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc5085c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a648, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5085c, 0x1fe000 bytes
    //
    _b19(sdk::unknown_ptr) k_interrupt_heap_used;
    
    // [HalpKInterruptPostPhaseZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d828, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50868, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a658, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50868, 0x1fe000 bytes
    //
    _b20(sdk::unknown_ptr) k_interrupt_post_phase_zero;
    
    // [HalpKInterruptPostPhaseZeroTotal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d820, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50864, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a650, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50864, 0x1fe000 bytes
    //
    _b21(sdk::unknown_ptr) k_interrupt_post_phase_zero_total;
    
    // [HalpKInterruptPostPhaseZeroUsed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d81c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a64c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50860, 0x1fe000 bytes
    //
    _b22(sdk::unknown_ptr) k_interrupt_post_phase_zero_used;
    
    // [HalpKdComIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a978, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc12238, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12298, 0x1fe000 bytes
    //
    _b23(sdk::unknown_ptr) kd_com_io_space;
    
    // [HalpKdEnumerateDebuggingDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGEKD:0x672e0, 0x11e8 bytes
    // ntoskrnl.exe PAGEKD:0x9b4230, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9dfd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3230, 0x1fe000 bytes
    //
    _b24(sdk::unknown_ptr) kd_enumerate_debugging_devices;
    
    // [HalpKdReadPCIConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12bb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b87c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ccf70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b9150, 0x1fe000 bytes
    //
    _b25(sdk::unknown_ptr) kd_read_pci_config;
    
    // [HalpKdReleaseDebuggingDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGEKD:0x67990, 0x11e8 bytes
    // ntoskrnl.exe PAGEKD:0x9b4430, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9f9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3430, 0x1fe000 bytes
    //
    _b26(sdk::unknown_ptr) kd_release_debugging_device;
    
    // [HalpKdSetupDebuggingDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGEKD:0x671a0, 0x11e8 bytes
    // ntoskrnl.exe PAGEKD:0x9b4480, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9e1c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3480, 0x1fe000 bytes
    //
    _b27(sdk::unknown_ptr) kd_setup_debugging_device;
    
    // [HalpKdWritePCIConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3aec0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d9810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x518df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d9700, 0x1fe000 bytes
    //
    _b28(sdk::unknown_ptr) kd_write_pci_config;
    
    // [HalpLegacyShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29b90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b89c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f69b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8890, 0x1fe000 bytes
    //
    _b29(sdk::unknown_ptr) legacy_shutdown;
    
    // [HalpLMIdentityStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x173c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efcd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f15b0, 0x1fe000 bytes
    //
    _b30(sdk::unknown_ptr) lm_identity_stub;
    
    // [HalpLMIdentityStubEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x173d3, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efce3, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423d63, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f15c3, 0x1fe000 bytes
    //
    _b31(sdk::unknown_ptr) lm_identity_stub_end;
    
    // [HalpLMStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x173f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efd00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f15e0, 0x1fe000 bytes
    //
    _b32(sdk::unknown_ptr) lm_stub;
    
    // [HalpLMStubForVM]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x173e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efcf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f15d0, 0x1fe000 bytes
    //
    _b33(sdk::unknown_ptr) lm_stub_for_vm;
    
    // [HalpLMStubVmTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1747c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efdb6, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423e36, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1696, 0x1fe000 bytes
    //
    _b34(sdk::unknown_ptr) lm_stub_vm_target;
    
    // [HalpLoadMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d3f0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8632c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8616f0, 0x1fe000 bytes
    //
    _b35(sdk::unknown_ptr) load_microcode;
    
    // [HalpLocalApic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d918, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50830, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50830, 0x1fe000 bytes
    //
    _b36(sdk::unknown_ptr) local_apic;
    
    // [HalpLocalApicPhysical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b860, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49690, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60848, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49670, 0x1fe000 bytes
    //
    _b37(sdk::unknown_ptr) local_apic_physical;
    
    // [HalpLowMemoryMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd50, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49210, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc601f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc491f0, 0x1fe000 bytes
    //
    _b38(sdk::unknown_ptr) low_memory_map;
    
    // [HalpLowMemoryMapBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc491e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc601c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc491c0, 0x1fe000 bytes
    //
    _b39(sdk::unknown_ptr) low_memory_map_buffer;
    
    // [HalpLowMemoryMapStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd40, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc601e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc491e0, 0x1fe000 bytes
    //
    _b40(sdk::unknown_ptr) low_memory_map_stack;
    
    // [HalpLowMemoryMapStackBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd60, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60200, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49200, 0x1fe000 bytes
    //
    _b41(sdk::unknown_ptr) low_memory_map_stack_buffer;
    
    // [HalpLowStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c990, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49f70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f50, 0x1fe000 bytes
    //
    _b42(sdk::unknown_ptr) low_stub;
    
    // [HalpLowStubPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c830, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49df0, 0x1fe000 bytes
    //
    _b43(sdk::unknown_ptr) low_stub_physical_address;
    
    // [HalpMachineCheckConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x49260, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc02d80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02dc0, 0x1fe000 bytes
    //
    _b44(sdk::unknown_ptr) machine_check_configuration;
    
    // [HalpMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x129e4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6c88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bdf18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7538, 0x1fe000 bytes
    //
    _b45(sdk::unknown_ptr) map;
    
    // [HalpMapCR3Ex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61ec8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x996570, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d144, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x995910, 0x1fe000 bytes
    //
    _b46(sdk::unknown_ptr) map_cr3_ex;
    
    // [HalpMapEarlyPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29980, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b70a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6f70, 0x1fe000 bytes
    //
    _b47(sdk::unknown_ptr) map_early_pages;
    
    // [HalpMapNvsArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5ffc0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x995488, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994498, 0x1fe000 bytes
    //
    _b48(sdk::unknown_ptr) map_nvs_area;
    
    // [HalpMapPhysicalMemory64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1293c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ea7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x421f6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3eb880, 0x1fe000 bytes
    //
    _b49(sdk::unknown_ptr) map_physical_memory64;
    
    // [HalpMapPhysicalMemoryWriteThrough64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12920, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b70d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf1b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6fa0, 0x1fe000 bytes
    //
    _b50(sdk::unknown_ptr) map_physical_memory_write_through64;
    
    // [HalpMapTransferV2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4cf4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6f64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45b7c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6e54, 0x1fe000 bytes
    //
    _b51(sdk::unknown_ptr) map_transfer_v2;
    
    // [HalpMapTransferV3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4e44, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c4e08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x503d54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c4cf8, 0x1fe000 bytes
    //
    _b52(sdk::unknown_ptr) map_transfer_v3;
    
    // [HalpMaskInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6f50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a24e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ba2a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3a30, 0x1fe000 bytes
    //
    _b53(sdk::unknown_ptr) mask_interrupt;
    
    // [HalpMaxHotPlugMemoryAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d260, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4ade0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4adc0, 0x1fe000 bytes
    //
    _b54(sdk::unknown_ptr) max_hot_plug_memory_address;
    
    // [HalpMaxNumaPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ace8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49638, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc607d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49618, 0x1fe000 bytes
    //
    _b55(sdk::unknown_ptr) max_numa_page;
    
    // [HalpMaxPciBus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d770, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50810, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50810, 0x1fe000 bytes
    //
    _b56(sdk::unknown_ptr) max_pci_bus;
    
    // [HalpMaximumClockDomainCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a9e8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc1229c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce94, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc122fc, 0x1fe000 bytes
    //
    _b57(sdk::unknown_ptr) maximum_clock_domain_count;
    
    // [HalpMaximumGroupSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a960, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc11f14, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f74, 0x1fe000 bytes
    //
    _b58(sdk::unknown_ptr) maximum_group_size;
    
    // [HalpMaximumPhysicalMemoryAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d638, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bad8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63b80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bab8, 0x1fe000 bytes
    //
    _b59(sdk::unknown_ptr) maximum_physical_memory_address;
    
    // [HalpMcUpdateFindDataTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1571c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a606c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4a24, 0x1fe000 bytes
    //
    _b60(sdk::unknown_ptr) mc_update_find_data_table_entry;
    
    // [HalpMcUpdateInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a5cc, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x778770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x831908, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77aa10, 0x1fe000 bytes
    //
    _b61(sdk::unknown_ptr) mc_update_initialize;
    
    // [HalpMcUpdateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x72d8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x383794, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50a7ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x384554, 0x1fe000 bytes
    //
    _b62(sdk::unknown_ptr) mc_update_lock;
    
    // [HalpMcUpdateLockFunc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d768, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc495d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc606c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495b0, 0x1fe000 bytes
    //
    _b63(sdk::unknown_ptr) mc_update_lock_func;
    
    // [HalpMcUpdateMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc9dc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a1b44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bff24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3004, 0x1fe000 bytes
    //
    _b64(sdk::unknown_ptr) mc_update_microcode;
    
    // [HalpMcUpdateMicrocodeFunc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d750, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49610, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60710, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495f0, 0x1fe000 bytes
    //
    _b65(sdk::unknown_ptr) mc_update_microcode_func;
    
    // [HalpMcUpdatePostUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16230, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a3180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea2d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a46b0, 0x1fe000 bytes
    //
    _b66(sdk::unknown_ptr) mc_update_post_update;
    
    // [HalpMcUpdatePostUpdateFunc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d760, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc495f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc606f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495d0, 0x1fe000 bytes
    //
    _b67(sdk::unknown_ptr) mc_update_post_update_func;
    
    // [HalpMcUpdateUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x72b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x37df90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50a804, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37fa50, 0x1fe000 bytes
    //
    _b68(sdk::unknown_ptr) mc_update_unlock;
    
    // [HalpMcUpdateUnlockFunc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d758, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc495f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc606f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc495d8, 0x1fe000 bytes
    //
    _b69(sdk::unknown_ptr) mc_update_unlock_func;
    
    // [HalpMcaBanksValidOnBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d958, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a36c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505e0, 0x1fe000 bytes
    //
    _b70(sdk::unknown_ptr) mca_banks_valid_on_boot;
    
    // [HalpMcaClearError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x362c4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b49b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f2e90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b4888, 0x1fe000 bytes
    //
    _b71(sdk::unknown_ptr) mca_clear_error;
    
    // [HalpMcaEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a956, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc11f05, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb45, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f65, 0x1fe000 bytes
    //
    _b72(sdk::unknown_ptr) mca_enabled;
    
    // [HalpMcaInitializePcrContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61c00, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99c0fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c878, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b17c, 0x1fe000 bytes
    //
    _b73(sdk::unknown_ptr) mca_initialize_pcr_context;
    
    // [HalpMcaMiscImplemented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d95a, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505e2, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a36e, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505e2, 0x1fe000 bytes
    //
    _b74(sdk::unknown_ptr) mca_misc_implemented;
    
    // [HalpMcaNumberOfBanks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4da40, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50628, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a3b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50628, 0x1fe000 bytes
    //
    _b75(sdk::unknown_ptr) mca_number_of_banks;
    
    // [HalpMcaPcrContextData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d978, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50620, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a3a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50620, 0x1fe000 bytes
    //
    _b76(sdk::unknown_ptr) mca_pcr_context_data;
    
    // [HalpMcaPhysicalAddressMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a910, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f2a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09968, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f2f8, 0x1fe000 bytes
    //
    _b77(sdk::unknown_ptr) mca_physical_address_mask;
    
    // [HalpMcaPollForCmc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd2d, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4be9, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17641, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4be9, 0x1fe000 bytes
    //
    _b78(sdk::unknown_ptr) mca_poll_for_cmc;
    
    // [HalpMcaQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3404, 0x11e8 bytes
    // ntoskrnl.exe .text:0x26ebd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320274, 0x1fe000 bytes
    //
    _b79(sdk::unknown_ptr) mca_queue_dpc;
    
    // [HalpMcaReadError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36320, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b4ee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f33b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b4db0, 0x1fe000 bytes
    //
    _b80(sdk::unknown_ptr) mca_read_error;
    
    // [HalpMcaReadErrorPresence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd698, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39c298, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c04f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39d758, 0x1fe000 bytes
    //
    _b81(sdk::unknown_ptr) mca_read_error_presence;
    
    // [HalpMcaRecoveryPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dad0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a5e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50800, 0x1fe000 bytes
    //
    _b82(sdk::unknown_ptr) mca_recovery_policy;
    
    // [HalpMcaRecoverySupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff38, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4ef0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17964, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ef0, 0x1fe000 bytes
    //
    _b83(sdk::unknown_ptr) mca_recovery_supported;
    
    // [HalpMcaReportError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3670c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3648, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5030, 0x1fe000 bytes
    //
    _b84(sdk::unknown_ptr) mca_report_error;
    
    // [HalpMcaResumeProcessorConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f1fc, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x992290, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa80f4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9912a0, 0x1fe000 bytes
    //
    _b85(sdk::unknown_ptr) mca_resume_processor_config;
    
    // [HalpMcaSetFeatureFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60244, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d2f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7b610, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c374, 0x1fe000 bytes
    //
    _b86(sdk::unknown_ptr) mca_set_feature_flags;
    
    // [HalpMcaSetProcessorConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x609c8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x996118, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7ab54, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9954b8, 0x1fe000 bytes
    //
    _b87(sdk::unknown_ptr) mca_set_processor_config;
    
    // [HalpMcaWheaReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d968, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50610, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a398, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50610, 0x1fe000 bytes
    //
    _b88(sdk::unknown_ptr) mca_whea_ready;
    
    // [HalpMceBackupErrorBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe30, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4de0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17840, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4de0, 0x1fe000 bytes
    //
    _b89(sdk::unknown_ptr) mce_backup_error_buffer;
    
    // [HalpMceBarrierTimeoutDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe28, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4dcc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17820, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4dcc, 0x1fe000 bytes
    //
    _b90(sdk::unknown_ptr) mce_barrier_timeout_disabled;
    
    // [HalpMceBarrierWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36804, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b52b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f383c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5188, 0x1fe000 bytes
    //
    _b91(sdk::unknown_ptr) mce_barrier_wait;
    
    // [HalpMceBroadcast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d970, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50618, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a3a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50618, 0x1fe000 bytes
    //
    _b92(sdk::unknown_ptr) mce_broadcast;
    
    // [HalpMceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a955, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc11f04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb44, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f64, 0x1fe000 bytes
    //
    _b93(sdk::unknown_ptr) mce_enabled;
    
    // [HalpMceErrorFound]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff40, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4efc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1797c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4efc, 0x1fe000 bytes
    //
    _b94(sdk::unknown_ptr) mce_error_found;
    
    // [HalpMceErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d950, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a388, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50600, 0x1fe000 bytes
    //
    _b95(sdk::unknown_ptr) mce_error_source;
    
    // [HalpMceErrorSourceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d980, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc5062c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a3b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5062c, 0x1fe000 bytes
    //
    _b96(sdk::unknown_ptr) mce_error_source_id;
    
    // [HalpMceHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x368c4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3904, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5250, 0x1fe000 bytes
    //
    _b97(sdk::unknown_ptr) mce_handler;
    
    // [HalpMceHandlerCore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x369cc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5494, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3a18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5364, 0x1fe000 bytes
    //
    _b98(sdk::unknown_ptr) mce_handler_core;
    
    // [HalpMceHandlerWithRendezvous]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36b10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b55e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3bc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b54b8, 0x1fe000 bytes
    //
    _b99(sdk::unknown_ptr) mce_handler_with_rendezvous;
    
    // [HalpMceInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60874, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99cddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7a8b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99be5c, 0x1fe000 bytes
    //
    _c00(sdk::unknown_ptr) mce_init;
    
    // [HalpMceInitProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60978, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99cf0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7a9e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99bf8c, 0x1fe000 bytes
    //
    _c01(sdk::unknown_ptr) mce_init_processor;
    
    // [HalpMceInitializeErrorPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60ae8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99cfa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7aa7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c020, 0x1fe000 bytes
    //
    _c02(sdk::unknown_ptr) mce_initialize_error_packet;
    
    // [HalpMceInitializeErrorPacketContents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60dc0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d00c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7aae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c08c, 0x1fe000 bytes
    //
    _c03(sdk::unknown_ptr) mce_initialize_error_packet_contents;
    
    // [HalpMceInitializeRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa5d8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0b20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1930, 0x1fe000 bytes
    //
    _c04(sdk::unknown_ptr) mce_initialize_recovery;
    
    // [HalpMceLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dbb8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcdb040, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17970, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb000, 0x1fe000 bytes
    //
    _c05(sdk::unknown_ptr) mce_lock;
    
    // [HalpMceProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe1c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4dc4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17818, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4dc4, 0x1fe000 bytes
    //
    _c06(sdk::unknown_ptr) mce_processor_count;
    
    // [HalpMceRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x37520, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ca870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x507990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca760, 0x1fe000 bytes
    //
    _c07(sdk::unknown_ptr) mce_recovery;
    
    // [HalpMceRendezvousCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe2c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4dd8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17830, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4dd8, 0x1fe000 bytes
    //
    _c08(sdk::unknown_ptr) mce_rendezvous_count;
    
    // [HalpMceRendezvousInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff41, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4efd, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1797d, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4efd, 0x1fe000 bytes
    //
    _c09(sdk::unknown_ptr) mce_rendezvous_in_progress;
    
    // [HalpMceRendezvousSrarOnlyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff3c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4ef4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17968, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ef4, 0x1fe000 bytes
    //
    _c10(sdk::unknown_ptr) mce_rendezvous_srar_only_count;
    
    // [HalpMemoryCoolingPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ac40, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48a80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fba0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a60, 0x1fe000 bytes
    //
    _c11(sdk::unknown_ptr) memory_cooling_packet;
    
    // [HalpMemoryCoolingPacketLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ac20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48a70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb84, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a50, 0x1fe000 bytes
    //
    _c12(sdk::unknown_ptr) memory_cooling_packet_lock;
    
    // [HalpMinNumaPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a9f0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc122a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12300, 0x1fe000 bytes
    //
    _c13(sdk::unknown_ptr) min_numa_page;
    
    // [HalpMinPciBus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdf8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f84, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f84, 0x1fe000 bytes
    //
    _c14(sdk::unknown_ptr) min_pci_bus;
    
    // [HalpMiscBugCheckCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3610b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3624e0, 0x1fe000 bytes
    //
    _c15(sdk::unknown_ptr) misc_bug_check_callback;
    
    // [HalpMiscCallbackRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9a0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61a00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d20, 0x1fe000 bytes
    //
    _c16(sdk::unknown_ptr) misc_callback_record;
    
    // [HalpMiscDebugBreakRequested]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c998, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d08, 0x1fe000 bytes
    //
    _c17(sdk::unknown_ptr) misc_debug_break_requested;
    
    // [HalpMiscDiscardLowMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c999, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d29, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619f9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49d09, 0x1fe000 bytes
    //
    _c18(sdk::unknown_ptr) misc_discard_low_memory;
    
    // [HalpMiscGetParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6a434, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa69a90, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3fd9c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa69168, 0x1fe000 bytes
    //
    _c19(sdk::unknown_ptr) misc_get_parameters;
    
    // [HalpMiscInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d24c, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa69da4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40080, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6947c, 0x1fe000 bytes
    //
    _c20(sdk::unknown_ptr) misc_init_discard;
    
    // [HalpMiscInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x616a0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d3e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7bf80, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c460, 0x1fe000 bytes
    //
    _c21(sdk::unknown_ptr) misc_init_system;
    
    // [HalpMiscInitializeTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ab38, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7aa844, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834384, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b21c4, 0x1fe000 bytes
    //
    _c22(sdk::unknown_ptr) misc_initialize_telemetry;
    
    // [HalpMiscIsLegacyPcType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x62f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3822d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4facf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x383098, 0x1fe000 bytes
    //
    _c23(sdk::unknown_ptr) misc_is_legacy_pc_type;
    
    // [HalpMmAllocCtxAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x140cc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x378868, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x379c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379be8, 0x1fe000 bytes
    //
    _c24(sdk::function<void*(struct halp::alloc_context_t*, uint64_t)>*) mm_alloc_ctx_alloc;
    
    // [HalpMmAllocCtxAllocBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14264, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a015c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dd38c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a161c, 0x1fe000 bytes
    //
    _c25(sdk::unknown_ptr) mm_alloc_ctx_alloc_buffer;
    
    // [HalpMmAllocCtxBufferCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14440, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a1430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f5564, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a28f0, 0x1fe000 bytes
    //
    _c26(sdk::unknown_ptr) mm_alloc_ctx_buffer_cleanup;
    
    // [HalpMmAllocCtxFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1431c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x375020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9bb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3763a0, 0x1fe000 bytes
    //
    _c27(sdk::function<void(struct halp::alloc_context_t*, void*)>*) mm_alloc_ctx_free;
    
    // [HalpMmAllocCtxInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16388, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b64e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d75f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6d90, 0x1fe000 bytes
    //
    _c28(sdk::unknown_ptr) mm_alloc_ctx_init;
    
    // [HalpMmAllocCtxMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5fb7c, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a42f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8145c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a3264, 0x1fe000 bytes
    //
    _c29(sdk::unknown_ptr) mm_alloc_ctx_mark_hiber_phase;
    
    // [HalpMmAllocateMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11fa0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6df0, 0x1fe000 bytes
    //
    _c30(sdk::unknown_ptr) mm_allocate_memory;
    
    // [HalpMmAllocateMemoryInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11fe4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6608, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd838, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6eb8, 0x1fe000 bytes
    //
    _c31(sdk::unknown_ptr) mm_allocate_memory_internal;
    
    // [HalpMmAllocatePerProcessorMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x160ac, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a6a04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a53c4, 0x1fe000 bytes
    //
    _c32(sdk::unknown_ptr) mm_allocate_per_processor_memory;
    
    // [HalpMmBuildTiledMemoryMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61df4, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99648c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d0ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99582c, 0x1fe000 bytes
    //
    _c33(sdk::unknown_ptr) mm_build_tiled_memory_map;
    
    // [HalpMmInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61810, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99c490, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7cdd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b510, 0x1fe000 bytes
    //
    _c34(sdk::unknown_ptr) mm_init_system;
    
    // [HalpMmLeftoverMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d840, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50738, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50738, 0x1fe000 bytes
    //
    _c35(sdk::unknown_ptr) mm_leftover_memory;
    
    // [HalpMmLeftoverMemorySize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d848, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50740, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50740, 0x1fe000 bytes
    //
    _c36(sdk::unknown_ptr) mm_leftover_memory_size;
    
    // [HalpMmLoaderBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d838, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50730, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50730, 0x1fe000 bytes
    //
    _c37(sdk::unknown_ptr) mm_loader_block;
    
    // [HalpMoveMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x49008, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc00a50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00a50, 0x1fe000 bytes
    //
    _c38(sdk::unknown_ptr) move_memory;
    
    // [HalpMpsValueAscendingSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3acf0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d6ee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5153b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6dd0, 0x1fe000 bytes
    //
    _c39(sdk::unknown_ptr) mps_value_ascending_sort;
    
    // [HalpNewAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d2a0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49c60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61820, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49c40, 0x1fe000 bytes
    //
    _c40(sdk::unknown_ptr) new_adapter;
    
    // [HalpNmiConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x492b0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc02df0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04680, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02e30, 0x1fe000 bytes
    //
    _c41(sdk::unknown_ptr) nmi_configuration;
    
    // [HalpNmiInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4da60, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50750, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a4e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50750, 0x1fe000 bytes
    //
    _c42(sdk::unknown_ptr) nmi_info;
    
    // [HalpNmiReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f8c4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cd218, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50a890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cd108, 0x1fe000 bytes
    //
    _c43(sdk::unknown_ptr) nmi_reboot;
    
    // [HalpNodeCostSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3aab0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc1d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cc0c0, 0x1fe000 bytes
    //
    _c44(sdk::unknown_ptr) node_cost_sort;
    
    // [HalpNPPoolAllocCtx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bde0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4b840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4b820, 0x1fe000 bytes
    //
    _c45(sdk::unknown_ptr) np_pool_alloc_ctx;
    
    // [HalpNullReadWriteBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _c46(sdk::unknown_ptr) null_read_write_bus_data;
    
    // [HalpNumaAddRangeProximity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3aad0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc1f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cc0e0, 0x1fe000 bytes
    //
    _c47(sdk::unknown_ptr) numa_add_range_proximity;
    
    // [HalpNumaConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49680, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60838, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49660, 0x1fe000 bytes
    //
    _c48(sdk::unknown_ptr) numa_config;
    
    // [HalpNumaDynamicMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff68, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49650, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc607f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49630, 0x1fe000 bytes
    //
    _c49(sdk::unknown_ptr) numa_dynamic_memory_ranges;
    
    // [HalpNumaInitializationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db30, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49674, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60824, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49654, 0x1fe000 bytes
    //
    _c50(sdk::unknown_ptr) numa_initialization_complete;
    
    // [HalpNumaInitializeStaticConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b044, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c580, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb52178, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c420, 0x1fe000 bytes
    //
    _c51(sdk::unknown_ptr) numa_initialize_static_configuration;
    
    // [HalpNumaMaxMemoryRangeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ad00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49670, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60820, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49650, 0x1fe000 bytes
    //
    _c52(sdk::unknown_ptr) numa_max_memory_range_count;
    
    // [HalpNumaMemoryRangeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4acf0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49654, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60800, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49634, 0x1fe000 bytes
    //
    _c53(sdk::unknown_ptr) numa_memory_range_count;
    
    // [HalpNumaMemoryRangeLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fc68, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49640, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc607e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49620, 0x1fe000 bytes
    //
    _c54(sdk::unknown_ptr) numa_memory_range_lock;
    
    // [HalpNumaMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ace0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49630, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc607d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49610, 0x1fe000 bytes
    //
    _c55(sdk::unknown_ptr) numa_memory_ranges;
    
    // [HalpNumaPageCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4acf8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49658, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60808, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49638, 0x1fe000 bytes
    //
    _c56(sdk::unknown_ptr) numa_page_count;
    
    // [HalpNumaQueryNodeCapacity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16350, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ca830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb900, 0x1fe000 bytes
    //
    _c57(sdk::unknown_ptr) numa_query_node_capacity;
    
    // [HalpNumaQueryNodeDistance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16070, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ca0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e97c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb1a0, 0x1fe000 bytes
    //
    _c58(sdk::unknown_ptr) numa_query_node_distance;
    
    // [HalpNumaQueryProcessorNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15000, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c4b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c58b0, 0x1fe000 bytes
    //
    _c59(sdk::unknown_ptr) numa_query_processor_node;
    
    // [HalpNumaQueryProximityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15f90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c9fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb0b0, 0x1fe000 bytes
    //
    _c60(sdk::unknown_ptr) numa_query_proximity_id;
    
    // [HalpNumaQueryProximityNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x161e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ca1e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb2e0, 0x1fe000 bytes
    //
    _c61(sdk::unknown_ptr) numa_query_proximity_node;
    
    // [HalpNumaSwapP0NodeToFront]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163cc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b7024, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d95e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b78d4, 0x1fe000 bytes
    //
    _c62(sdk::unknown_ptr) numa_swap_p0_node_to_front;
    
    // [HalpNvsPreservedData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bcc8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49188, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60348, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49168, 0x1fe000 bytes
    //
    _c63(sdk::unknown_ptr) nvs_preserved_data;
    
    // [HalpNvsPreservedDataSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bcc0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49160, 0x1fe000 bytes
    //
    _c64(sdk::unknown_ptr) nvs_preserved_data_size;
    
    // [HalpNvsRegionCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bbb8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49060, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60230, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49040, 0x1fe000 bytes
    //
    _c65(sdk::unknown_ptr) nvs_region_count;
    
    // [HalpNvsRegionData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc491c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60380, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc491a0, 0x1fe000 bytes
    //
    _c66(sdk::unknown_ptr) nvs_region_data;
    
    // [HalpOriginalPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8b0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bde0, 0x1fe000 bytes
    //
    _c67(sdk::unknown_ptr) original_performance_counter;
    
    // [HalpOriginalStallTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8a0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be58, 0x1fe000 bytes
    //
    _c68(sdk::unknown_ptr) original_stall_timer;
    
    // [HalpParseChannelCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12df8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6fa4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d971c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7854, 0x1fe000 bytes
    //
    _c69(sdk::unknown_ptr) parse_channel_count;
    
    // [HalpPassIrpFromFdoToPdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa3c4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a27ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e527c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3d3c, 0x1fe000 bytes
    //
    _c70(sdk::unknown_ptr) pass_irp_from_fdo_to_pdo;
    
    // [HalpPciAccessIoConfigSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x136d8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b76e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7f98, 0x1fe000 bytes
    //
    _c71(sdk::unknown_ptr) pci_access_io_config_space;
    
    // [HalpPciAccessMmConfigSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36b8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x253610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303450, 0x1fe000 bytes
    //
    _c72(sdk::unknown_ptr) pci_access_mm_config_space;
    
    // [HalpPciAmdK8SpecialLocationHack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a8f0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f0e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09780, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f120, 0x1fe000 bytes
    //
    _c73(sdk::unknown_ptr) pci_amd_k8_special_location_hack;
    
    // [HalpPciCheckAmdK8]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x37c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x25372c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a39c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30356c, 0x1fe000 bytes
    //
    _c74(sdk::unknown_ptr) pci_check_amd_k8;
    
    // [HalpPCIConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3588, 0x11e8 bytes
    // ntoskrnl.exe .text:0x2534c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303300, 0x1fe000 bytes
    //
    _c75(sdk::unknown_ptr) pci_config;
    
    // [HalpPCIConfigLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b790, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49bf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc617c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49bd8, 0x1fe000 bytes
    //
    _c76(sdk::unknown_ptr) pci_config_lock;
    
    // [HalpPCIConfigReadHandlers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d3b0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x5908, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5fc8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x58f8, 0x1fe000 bytes
    //
    _c77(sdk::unknown_ptr) pci_config_read_handlers;
    
    // [HalpPCIConfigWriteHandlers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3db00, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x8a80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9740, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8ab8, 0x1fe000 bytes
    //
    _c78(sdk::unknown_ptr) pci_config_write_handlers;
    
    // [HalpPciGetHpetInterruptSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69c44, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8cca0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e890, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bf20, 0x1fe000 bytes
    //
    _c79(sdk::unknown_ptr) pci_get_hpet_interrupt_source;
    
    // [HalpPciGetHpetInterruptSourceAmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x701a8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8cd6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e95c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8bfec, 0x1fe000 bytes
    //
    _c80(sdk::unknown_ptr) pci_get_hpet_interrupt_source_amd;
    
    // [HalpPciGetHpetInterruptSourceIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x70294, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8ce54, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7ea48, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c0d4, 0x1fe000 bytes
    //
    _c81(sdk::unknown_ptr) pci_get_hpet_interrupt_source_intel;
    
    // [HalpPciGetMmConfigPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x375c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x2536c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303500, 0x1fe000 bytes
    //
    _c82(sdk::unknown_ptr) pci_get_mm_config_physical_address;
    
    // [HalpPciHandleSecureAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34b8c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cccac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45cbb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccb9c, 0x1fe000 bytes
    //
    _c83(sdk::unknown_ptr) pci_handle_secure_access;
    
    // [HalpPciInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61600, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d470, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c420, 0x1fe000 bytes
    //
    _c84(sdk::unknown_ptr) pci_init_system;
    
    // [HalpPciInitializeMmConfigAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6cfc0, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa69514, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb56488, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68bec, 0x1fe000 bytes
    //
    _c85(sdk::unknown_ptr) pci_initialize_mm_config_access;
    
    // [HalpPciIsAddressWithinMcfg]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34c2c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ccd6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45cc6e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ccc5c, 0x1fe000 bytes
    //
    _c86(sdk::unknown_ptr) pci_is_address_within_mcfg;
    
    // [HalpPciMapMmConfigPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38a8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x253868, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a404, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3036a8, 0x1fe000 bytes
    //
    _c87(sdk::unknown_ptr) pci_map_mm_config_physical_address;
    
    // [HalpPciMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x68e4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3837ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3845ac, 0x1fe000 bytes
    //
    _c88(sdk::unknown_ptr) pci_mark_hiber_phase;
    
    // [HalpPciMcfgTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b7b0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49258, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc603a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49238, 0x1fe000 bytes
    //
    _c89(sdk::unknown_ptr) pci_mcfg_table;
    
    // [HalpPciMcfgTableCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b798, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60388, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49220, 0x1fe000 bytes
    //
    _c90(sdk::unknown_ptr) pci_mcfg_table_count;
    
    // [HalpPciMcfgTableSegments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b79c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49244, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6038c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49224, 0x1fe000 bytes
    //
    _c91(sdk::unknown_ptr) pci_mcfg_table_segments;
    
    // [HalpPciMmConfigReadHandlers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d018, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2070, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5758, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x24c0, 0x1fe000 bytes
    //
    _c92(sdk::unknown_ptr) pci_mm_config_read_handlers;
    
    // [HalpPciMmConfigVirtualAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b7a0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49248, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60390, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49228, 0x1fe000 bytes
    //
    _c93(sdk::unknown_ptr) pci_mm_config_virtual_address;
    
    // [HalpPciMmConfigWriteHandlers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d000, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2088, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5740, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x24d8, 0x1fe000 bytes
    //
    _c94(sdk::unknown_ptr) pci_mm_config_write_handlers;
    
    // [HalpPCIPerformConfigAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3824, 0x11e8 bytes
    // ntoskrnl.exe .text:0x2537e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a454, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303620, 0x1fe000 bytes
    //
    _c95(sdk::unknown_ptr) pci_perform_config_access;
    
    // [HalpPciReadIoConfigUchar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34d20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c66a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6590, 0x1fe000 bytes
    //
    _c96(sdk::unknown_ptr) pci_read_io_config_uchar;
    
    // [HalpPciReadIoConfigUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34d50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c66e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c65d0, 0x1fe000 bytes
    //
    _c97(sdk::unknown_ptr) pci_read_io_config_ulong;
    
    // [HalpPciReadIoConfigUshort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13f60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b8630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ccba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8fc0, 0x1fe000 bytes
    //
    _c98(sdk::unknown_ptr) pci_read_io_config_ushort;
    
    // [HalpPciReadMmConfigUchar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17680, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3effd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f18b0, 0x1fe000 bytes
    //
    _c99(sdk::unknown_ptr) pci_read_mm_config_uchar;
    
    // [HalpPciReadMmConfigUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x176c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3f0010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f18f0, 0x1fe000 bytes
    //
    _d00(sdk::unknown_ptr) pci_read_mm_config_ulong;
    
    // [HalpPciReadMmConfigUshort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x176a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3efff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f18d0, 0x1fe000 bytes
    //
    _d01(sdk::unknown_ptr) pci_read_mm_config_ushort;
    
    // [HalpPciReportMmConfigAddressRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x698bc, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa695a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb56524, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68c7c, 0x1fe000 bytes
    //
    _d02(sdk::unknown_ptr) pci_report_mm_config_address_range;
    
    // [HalpPciWriteIoConfigUchar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34d80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5042b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6600, 0x1fe000 bytes
    //
    _d03(sdk::unknown_ptr) pci_write_io_config_uchar;
    
    // [HalpPciWriteIoConfigUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34db0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5042f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6640, 0x1fe000 bytes
    //
    _d04(sdk::unknown_ptr) pci_write_io_config_ulong;
    
    // [HalpPciWriteIoConfigUshort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34de0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6670, 0x1fe000 bytes
    //
    _d05(sdk::unknown_ptr) pci_write_io_config_ushort;
    
    // [HalpPciWriteMmConfigUchar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x176e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3f0030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4240b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1910, 0x1fe000 bytes
    //
    _d06(sdk::unknown_ptr) pci_write_mm_config_uchar;
    
    // [HalpPciWriteMmConfigUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17720, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3f0070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4240f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1950, 0x1fe000 bytes
    //
    _d07(sdk::unknown_ptr) pci_write_mm_config_ulong;
    
    // [HalpPciWriteMmConfigUshort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17700, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3f0050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4240d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1930, 0x1fe000 bytes
    //
    _d08(sdk::unknown_ptr) pci_write_mm_config_ushort;
    
    // [HalpPerfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27bf0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b95a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x459bc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9470, 0x1fe000 bytes
    //
    _d09(sdk::unknown_ptr) perf_interrupt;
    
    // [HalpPerfInterruptHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d7a0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a578, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507c8, 0x1fe000 bytes
    //
    _d10(sdk::unknown_ptr) perf_interrupt_handler;
    
    // [HalpPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8a8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bde8, 0x1fe000 bytes
    //
    _d11(sdk::unknown_ptr) performance_counter;
    
    // [HalpPhysicalMemoryCheckSums]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bbc0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49060, 0x1fe000 bytes
    //
    _d12(sdk::unknown_ptr) physical_memory_check_sums;
    
    // [HalpPicDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc5d4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9d84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a77f0, 0x1fe000 bytes
    //
    _d13(sdk::unknown_ptr) pic_discover;
    
    // [HalpPicInitializeIoUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x113e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a2b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4080, 0x1fe000 bytes
    //
    _d14(sdk::unknown_ptr) pic_initialize_io_unit;
    
    // [HalpPicRequestInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _d15(sdk::unknown_ptr) pic_request_interrupt;
    
    // [HalpPicSetLineState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2fcf0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d7310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x515880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d7200, 0x1fe000 bytes
    //
    _d16(sdk::unknown_ptr) pic_set_line_state;
    
    // [HalpPicVectorRedirect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3ec20, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x1fa10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x25790, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1f980, 0x1fe000 bytes
    //
    _d17(sdk::unknown_ptr) pic_vector_redirect;
    
    // [HalpPicWriteEndOfInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2fdf0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d7410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x515980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d7300, 0x1fe000 bytes
    //
    _d18(sdk::unknown_ptr) pic_write_end_of_interrupt;
    
    // [HalpPiix4]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c850, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61af8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e08, 0x1fe000 bytes
    //
    _d19(sdk::unknown_ptr) piix4;
    
    // [HalpPiix4BusNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c848, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61af0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e00, 0x1fe000 bytes
    //
    _d20(sdk::unknown_ptr) piix4_bus_number;
    
    // [HalpPiix4Detect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x60e2c, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9966b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7b8ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x995a50, 0x1fe000 bytes
    //
    _d21(sdk::unknown_ptr) piix4_detect;
    
    // [HalpPiix4DevActB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c84c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61af4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e04, 0x1fe000 bytes
    //
    _d22(sdk::unknown_ptr) piix4_dev_act_b;
    
    // [HalpPiix4Present]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ac10, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48e99, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fff8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e79, 0x1fe000 bytes
    //
    _d23(sdk::unknown_ptr) piix4_present;
    
    // [HalpPiix4SlotNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c860, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61b08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e18, 0x1fe000 bytes
    //
    _d24(sdk::unknown_ptr) piix4_slot_number;
    
    // [HalpPlatformFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a940, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f2a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f2f0, 0x1fe000 bytes
    //
    _d25(sdk::unknown_ptr) platform_flags;
    
    // [HalpPMStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e550, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x1ebd0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x25a90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1eb50, 0x1fe000 bytes
    //
    _d26(sdk::unknown_ptr) pm_stub;
    
    // [HalpPmTimerConfigure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1367c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3aa1d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c10ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8b98, 0x1fe000 bytes
    //
    _d27(sdk::unknown_ptr) pm_timer_configure;
    
    // [HalpPmTimerDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1357c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a850c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0e18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6ecc, 0x1fe000 bytes
    //
    _d28(sdk::unknown_ptr) pm_timer_discover;
    
    // [HalpPmTimerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa9d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3cac80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbd50, 0x1fe000 bytes
    //
    _d29(sdk::unknown_ptr) pm_timer_initialize;
    
    // [HalpPmTimerQueryCounterIoPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x42f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3612f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3910b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362720, 0x1fe000 bytes
    //
    _d30(sdk::unknown_ptr) pm_timer_query_counter_io_port;
    
    // [HalpPmTimerQueryCounterMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17f00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3910d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362730, 0x1fe000 bytes
    //
    _d31(sdk::unknown_ptr) pm_timer_query_counter_memory;
    
    // [HalpPnpInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61590, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99d5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d5e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c640, 0x1fe000 bytes
    //
    _d32(sdk::unknown_ptr) pnp_init_system;
    
    // [HalpPopulateMsiMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xced8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x373cd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3865ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375054, 0x1fe000 bytes
    //
    _d33(sdk::unknown_ptr) populate_msi_messages;
    
    // [HalpPostPnpInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5915c, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x78c0e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x832fbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x795e88, 0x1fe000 bytes
    //
    _d34(sdk::unknown_ptr) post_pnp_initialize;
    
    // [HalpPostSleepMP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f000, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9920b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82e28, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9910c4, 0x1fe000 bytes
    //
    _d35(sdk::unknown_ptr) post_sleep_mp;
    
    // [HalpPowerEarlyRestore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7230, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3893c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389ee0, 0x1fe000 bytes
    //
    _d36(sdk::unknown_ptr) power_early_restore;
    
    // [HalpPowerInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c610, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa65c34, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f300, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa65314, 0x1fe000 bytes
    //
    _d37(sdk::unknown_ptr) power_init_discard;
    
    // [HalpPowerInitFwPerformanceTableMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c458, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa65e14, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f3f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa654f4, 0x1fe000 bytes
    //
    _d38(sdk::unknown_ptr) power_init_fw_performance_table_mappings;
    
    // [HalpPowerInitNvsRegionData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c708, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa65d2c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f5b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6540c, 0x1fe000 bytes
    //
    _d39(sdk::unknown_ptr) power_init_nvs_region_data;
    
    // [HalpPowerInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x615b0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99cc40, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c2c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99bcc0, 0x1fe000 bytes
    //
    _d40(sdk::unknown_ptr) power_init_system;
    
    // [HalpPowerSetRebootHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17d70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362480, 0x1fe000 bytes
    //
    _d41(sdk::unknown_ptr) power_set_reboot_handler;
    
    // [HalpPowerStateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15ee0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a2440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e4870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3990, 0x1fe000 bytes
    //
    _d42(sdk::unknown_ptr) power_state_callback;
    
    // [HalpPowerWriteResetCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29ba8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b89dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f69cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b88ac, 0x1fe000 bytes
    //
    _d43(sdk::unknown_ptr) power_write_reset_command;
    
    // [HalpPreAllocateKInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6a6b8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa70688, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60ab8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f9cc, 0x1fe000 bytes
    //
    _d44(sdk::unknown_ptr) pre_allocate_k_interrupts;
    
    // [HalpPrepareForBugcheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f550, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bcb30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bca00, 0x1fe000 bytes
    //
    _d45(sdk::unknown_ptr) prepare_for_bugcheck;
    
    // [HalpPreprocessNmi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2f9a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cd310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37eb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cd200, 0x1fe000 bytes
    //
    _d46(sdk::unknown_ptr) preprocess_nmi;
    
    // [HalpPreserveNvsArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6300, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3822f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b138, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3830b0, 0x1fe000 bytes
    //
    _d47(sdk::unknown_ptr) preserve_nvs_area;
    
    // [HalpProcGetFeatureBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xcb90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a5f1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bff80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a48d4, 0x1fe000 bytes
    //
    _d48(sdk::unknown_ptr) proc_get_feature_bits;
    
    // [HalpProcInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6c84c, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa3d448, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3f2e4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa363c4, 0x1fe000 bytes
    //
    _d49(sdk::unknown_ptr) proc_init_discard;
    
    // [HalpProcInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x616e0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99a880, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7a620, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996b30, 0x1fe000 bytes
    //
    _d50(sdk::unknown_ptr) proc_init_system;
    
    // [HalpProcessSecondarySignalList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29080, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb740, 0x1fe000 bytes
    //
    _d51(sdk::unknown_ptr) process_secondary_signal_list;
    
    // [HalpProcessedACPIPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c82b, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e0a, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ae2, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49dea, 0x1fe000 bytes
    //
    _d52(sdk::unknown_ptr) processed_acpi_phase0;
    
    // [HalpProcessorInMceHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a9e0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc12228, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12288, 0x1fe000 bytes
    //
    _d53(sdk::unknown_ptr) processor_in_mce_handler;
    
    // [HalpProcessorInNmiHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a9e4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc1222c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce1c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1228c, 0x1fe000 bytes
    //
    _d54(sdk::unknown_ptr) processor_in_nmi_handler;
    
    // [HalpProcessorPrepareForIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x32d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x244930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34eae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef940, 0x1fe000 bytes
    //
    _d55(sdk::unknown_ptr) processor_prepare_for_idle;
    
    // [HalpProcessorResumeFromIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x32f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x245010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34eb40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2efaf0, 0x1fe000 bytes
    //
    _d56(sdk::unknown_ptr) processor_resume_from_idle;
    
    // [HalpProfileData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4baa8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a488, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62228, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a468, 0x1fe000 bytes
    //
    _d57(sdk::unknown_ptr) profile_data;
    
    // [HalpProfileInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x49010, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc00a40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02560, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00a40, 0x1fe000 bytes
    //
    _d58(sdk::unknown_ptr) profile_interface;
    
    // [HalpProfileTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcc0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bdf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bdd8, 0x1fe000 bytes
    //
    _d59(sdk::unknown_ptr) profile_timer;
    
    // [HalpProfilingActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdc0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f48, 0x1fe000 bytes
    //
    _d60(sdk::unknown_ptr) profiling_active;
    
    // [HalpPutAcpiHacksInRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x593fc, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x78bdc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83326c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x795b60, 0x1fe000 bytes
    //
    _d61(sdk::unknown_ptr) put_acpi_hacks_in_registry;
    
    // [HalpQueryAcpiRealTimeClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d5b8, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8611d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92ebcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85f60c, 0x1fe000 bytes
    //
    _d62(sdk::unknown_ptr) query_acpi_real_time_clock;
    
    // [HalpQueryAcpiResourceRequirements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59dec, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x79aba4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x832b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2124, 0x1fe000 bytes
    //
    _d63(sdk::unknown_ptr) query_acpi_resource_requirements;
    
    // [HalpQueryAcpiWakeAlarmSystemPowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d320, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8635e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9309bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861a10, 0x1fe000 bytes
    //
    _d64(sdk::unknown_ptr) query_acpi_wake_alarm_system_power_state;
    
    // [HalpQueryCapsuleCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3b1b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fe00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1a50, 0x1fe000 bytes
    //
    _d65(sdk::unknown_ptr) query_capsule_capabilities;
    
    // [HalpQueryChannelTopologyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x70940, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8c5c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e728, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b848, 0x1fe000 bytes
    //
    _d66(sdk::unknown_ptr) query_channel_topology_information;
    
    // [HalpQueryDebuggerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGEKD:0x6721c, 0x11e8 bytes
    // ntoskrnl.exe PAGEKD:0x9b34cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9defc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b24cc, 0x1fe000 bytes
    //
    _d67(sdk::unknown_ptr) query_debugger_information;
    
    // [HalpQueryDeviceRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58a30, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b28e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868cfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba470, 0x1fe000 bytes
    //
    _d68(sdk::unknown_ptr) query_device_relations;
    
    // [HalpQueryIdFdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58af4, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b32cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86b7dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bae5c, 0x1fe000 bytes
    //
    _d69(sdk::unknown_ptr) query_id_fdo;
    
    // [HalpQueryIdPdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58974, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b2514, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8653dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba0a4, 0x1fe000 bytes
    //
    _d70(sdk::unknown_ptr) query_id_pdo;
    
    // [HalpQueryInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x587fc, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7467d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73cab4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e410, 0x1fe000 bytes
    //
    _d71(sdk::unknown_ptr) query_interface;
    
    // [HalpQueryIommuReservedRegionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a3e8, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x746a54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e694, 0x1fe000 bytes
    //
    _d72(sdk::unknown_ptr) query_iommu_reserved_region_information;
    
    // [HalpQueryMaximumGsiv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x591c0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x78c304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83302c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7960a4, 0x1fe000 bytes
    //
    _d73(sdk::unknown_ptr) query_maximum_gsiv;
    
    // [HalpQueryMaximumRegisteredProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x102f8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d874, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b7bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ed34, 0x1fe000 bytes
    //
    _d74(sdk::unknown_ptr) query_maximum_registered_processor_count;
    
    // [HalpQueryNumaRangeTableInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15d60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c99fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca8ec, 0x1fe000 bytes
    //
    _d75(sdk::unknown_ptr) query_numa_range_table_information;
    
    // [HalpQueryPccInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ddb4, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863d1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9311c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86214c, 0x1fe000 bytes
    //
    _d76(sdk::unknown_ptr) query_pcc_interface;
    
    // [HalpQueryPrimaryInterruptInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5cec0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x86288c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x832cec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860cbc, 0x1fe000 bytes
    //
    _d77(sdk::unknown_ptr) query_primary_interrupt_information;
    
    // [HalpQueryProfileSourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ca90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b96d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f7bb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b95a0, 0x1fe000 bytes
    //
    _d78(sdk::unknown_ptr) query_profile_source_list;
    
    // [HalpQueryResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5924c, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x79aa74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e2d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1ff4, 0x1fe000 bytes
    //
    _d79(sdk::unknown_ptr) query_resources;
    
    // [HalpQuerySecondaryInterruptInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5aa48, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b5d88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86cfb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd948, 0x1fe000 bytes
    //
    _d80(sdk::unknown_ptr) query_secondary_interrupt_information;
    
    // [HalpQueryVirtualRtc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x69ac, 0x11e8 bytes
    // ntoskrnl.exe .text:0x38060c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3813cc, 0x1fe000 bytes
    //
    _d81(sdk::unknown_ptr) query_virtual_rtc;
    
    // [HalpQueueMapBufferWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x22158, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b6cb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4f04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b6b88, 0x1fe000 bytes
    //
    _d82(sdk::unknown_ptr) queue_map_buffer_worker;
    
    // [HalpReEnableDiagnosticEventsOnResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d851, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4bb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4bb0, 0x1fe000 bytes
    //
    _d83(sdk::unknown_ptr) re_enable_diagnostic_events_on_resume;
    
    // [HalpReadCmosTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x118c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x254fb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f954, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201f98, 0x1fe000 bytes
    //
    _d84(sdk::unknown_ptr) read_cmos_time;
    
    // [HalpReadPCIConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xdc28, 0x11e8 bytes
    // ntoskrnl.exe .text:0x399ff4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1ec4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b4b4, 0x1fe000 bytes
    //
    _d85(sdk::unknown_ptr) read_pci_config;
    
    // [HalpReadRtcStdPCAT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2d7d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d06a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50eaf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0590, 0x1fe000 bytes
    //
    _d86(sdk::unknown_ptr) read_rtc_std_pcat;
    
    // [HalpReadStdCmosData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2d850, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50eb80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0610, 0x1fe000 bytes
    //
    _d87(sdk::unknown_ptr) read_std_cmos_data;
    
    // [HalpReadWheaPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38630, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x510360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1ca0, 0x1fe000 bytes
    //
    _d88(sdk::unknown_ptr) read_whea_physical_memory;
    
    // [HalpReadWriteWheaPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3864c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x510380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1cc0, 0x1fe000 bytes
    //
    _d89(sdk::unknown_ptr) read_write_whea_physical_memory;
    
    // [HalpRebootHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dba8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcdb048, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf77a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb008, 0x1fe000 bytes
    //
    _d90(sdk::unknown_ptr) reboot_handler;
    
    // [HalpRebootNow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b8b0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49fa8, 0x1fe000 bytes
    //
    _d91(sdk::unknown_ptr) reboot_now;
    
    // [HalpRecordSecondaryGsivRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x595f0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x78c158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8330c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x795ef8, 0x1fe000 bytes
    //
    _d92(sdk::unknown_ptr) record_secondary_gsiv_range;
    
    // [HalpReenableAcpi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x600c8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x995750, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82fdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994760, 0x1fe000 bytes
    //
    _d93(sdk::unknown_ptr) reenable_acpi;
    
    // [HalpRegisterDeviceInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGEKD:0x67000, 0x11e8 bytes
    // ntoskrnl.exe PAGEKD:0x9b456c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9e240, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b356c, 0x1fe000 bytes
    //
    _d94(sdk::unknown_ptr) register_device_in_use;
    
    // [HalpRegisterDmaChannel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25848, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c99cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50603c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c98bc, 0x1fe000 bytes
    //
    _d95(sdk::unknown_ptr) register_dma_channel;
    
    // [HalpRegisterDmaController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x25950, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c9ac4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x506134, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c99b4, 0x1fe000 bytes
    //
    _d96(sdk::unknown_ptr) register_dma_controller;
    
    // [HalpRegisterKdSupportFunctions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d138, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa36598, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb21044, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35f3c, 0x1fe000 bytes
    //
    _d97(sdk::unknown_ptr) register_kd_support_functions;
    
    // [HalpRegisterSecondaryIcInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29114, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cb9c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3cfc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb8b4, 0x1fe000 bytes
    //
    _d98(sdk::unknown_ptr) register_secondary_ic_interface;
    
    // [HalpRegisterUsbController]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6ad40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1838, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fac8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1728, 0x1fe000 bytes
    //
    _d99(sdk::unknown_ptr) register_usb_controller;
    
    // [HalpRegisteredInterruptControllers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d1b0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4b910, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc639b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4b8f0, 0x1fe000 bytes
    //
    _e00(sdk::unknown_ptr) registered_interrupt_controllers;
    
    // [HalpRegisteredTimerCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bb80, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf7c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6407c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf5c, 0x1fe000 bytes
    //
    _e01(sdk::unknown_ptr) registered_timer_count;
    
    // [HalpRegisteredTimers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bb70, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64060, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf40, 0x1fe000 bytes
    //
    _e02(sdk::unknown_ptr) registered_timers;
    
    // [HalpReleaseSecondaryIcEntryShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2913c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cba94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bcc04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb984, 0x1fe000 bytes
    //
    _e03(sdk::unknown_ptr) release_secondary_ic_entry_shared;
    
    // [HalpReportResourceUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69344, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa367c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb39540, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36c6c, 0x1fe000 bytes
    //
    _e04(sdk::unknown_ptr) report_resource_usage;
    
    // [HalpReserveHalPtes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6acf8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5cf20, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3e6d4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5cdc0, 0x1fe000 bytes
    //
    _e05(sdk::unknown_ptr) reserve_hal_ptes;
    
    // [HalpResetParkDisposition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a9d8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc12230, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12290, 0x1fe000 bytes
    //
    _e06(sdk::unknown_ptr) reset_park_disposition;
    
    // [HalpResetSBF]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x62594, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99776c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7cfac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996b0c, 0x1fe000 bytes
    //
    _e07(sdk::unknown_ptr) reset_sbf;
    
    // [HalpRestartProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x60fc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x382054, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f7df4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x382e14, 0x1fe000 bytes
    //
    _e08(sdk::unknown_ptr) restart_profiling;
    
    // [HalpRestoreDmaControllerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f4e0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x992540, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa81048, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x991550, 0x1fe000 bytes
    //
    _e09(sdk::unknown_ptr) restore_dma_controller_state;
    
    // [HalpRestoreHvEnlightenment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2e850, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fbd20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd370, 0x1fe000 bytes
    //
    _e10(sdk::unknown_ptr) restore_hv_enlightenment;
    
    // [HalpRestoreNvsArea]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x622c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3821d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x382f98, 0x1fe000 bytes
    //
    _e11(sdk::unknown_ptr) restore_nvs_area;
    
    // [HalpResumeFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bcf8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc491b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60378, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49198, 0x1fe000 bytes
    //
    _e12(sdk::unknown_ptr) resume_flags;
    
    // [HalpResumeFromHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c82a, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e09, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ae1, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49de9, 0x1fe000 bytes
    //
    _e13(sdk::unknown_ptr) resume_from_hibernate;
    
    // [HalpResumeStructuresAllocated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bdb8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49f98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61c78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49f78, 0x1fe000 bytes
    //
    _e14(sdk::unknown_ptr) resume_structures_allocated;
    
    // [HalpResumeTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bba8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49050, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60220, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49030, 0x1fe000 bytes
    //
    _e15(sdk::unknown_ptr) resume_time;
    
    // [HalpRMStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e5a0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x1ec30, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x25af0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ebb0, 0x1fe000 bytes
    //
    _e16(sdk::unknown_ptr) rm_stub;
    
    // [HalpRtcAcknowledgeInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x170a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cff70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cfe60, 0x1fe000 bytes
    //
    _e17(sdk::unknown_ptr) rtc_acknowledge_interrupt;
    
    // [HalpRtcArmTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35a40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cffe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cfed0, 0x1fe000 bytes
    //
    _e18(sdk::unknown_ptr) rtc_arm_timer;
    
    // [HalpRtcDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x13494, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8698, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9ae8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a7058, 0x1fe000 bytes
    //
    _e19(sdk::unknown_ptr) rtc_discover;
    
    // [HalpRtcFixedStall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35b20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d00e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cffd0, 0x1fe000 bytes
    //
    _e20(sdk::unknown_ptr) rtc_fixed_stall;
    
    // [HalpRtcInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35ba0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e710, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0060, 0x1fe000 bytes
    //
    _e21(sdk::unknown_ptr) rtc_initialize;
    
    // [HalpRtcRegA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c838, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61b10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e20, 0x1fe000 bytes
    //
    _e22(sdk::unknown_ptr) rtc_reg_a;
    
    // [HalpRtcRegB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c868, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e41, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61b11, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e21, 0x1fe000 bytes
    //
    _e23(sdk::unknown_ptr) rtc_reg_b;
    
    // [HalpRtcStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35c50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d01b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d00a0, 0x1fe000 bytes
    //
    _e24(sdk::unknown_ptr) rtc_stop;
    
    // [HalpSaveAndDisableEnlightenment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2eb90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bd7f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fc0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bd6e0, 0x1fe000 bytes
    //
    _e25(sdk::unknown_ptr) save_and_disable_enlightenment;
    
    // [HalpSaveDmaControllerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f820, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9928e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa810a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9918f0, 0x1fe000 bytes
    //
    _e26(sdk::unknown_ptr) save_dma_controller_state;
    
    // [HalpSaveProcessorState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17740, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3f0090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1970, 0x1fe000 bytes
    //
    _e27(sdk::unknown_ptr) save_processor_state;
    
    // [HalpSaveStateSync]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4aa04, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48a2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fb58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48a0c, 0x1fe000 bytes
    //
    _e28(sdk::unknown_ptr) save_state_sync;
    
    // [HalpSavedStallCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d878, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64008, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bee8, 0x1fe000 bytes
    //
    _e29(sdk::unknown_ptr) saved_stall_counter;
    
    // [HalpSecondaryInterruptQueryPrimaryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5cf60, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x862930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x832c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860d60, 0x1fe000 bytes
    //
    _e30(sdk::unknown_ptr) secondary_interrupt_query_primary_information;
    
    // [HalpSecureReadAccessCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b7b8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49264, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc603a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49244, 0x1fe000 bytes
    //
    _e31(sdk::unknown_ptr) secure_read_access_count;
    
    // [HalpSecureWriteAccessCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b7a8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49250, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60398, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49230, 0x1fe000 bytes
    //
    _e32(sdk::unknown_ptr) secure_write_access_count;
    
    // [HalpSelectFeasibleLowPowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x70968, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8c5f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7e758, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b878, 0x1fe000 bytes
    //
    _e33(sdk::unknown_ptr) select_feasible_low_power_state;
    
    // [HalpSendPccCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ded8, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863e5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931304, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86228c, 0x1fe000 bytes
    //
    _e34(sdk::unknown_ptr) send_pcc_command;
    
    // [HalpSetAcpiRealTimeClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d684, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8612b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92ecdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85f6f0, 0x1fe000 bytes
    //
    _e35(sdk::unknown_ptr) set_acpi_real_time_clock;
    
    // [HalpSetClockAfterSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x65d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x38262c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3833ec, 0x1fe000 bytes
    //
    _e36(sdk::unknown_ptr) set_clock_after_sleep;
    
    // [HalpSetClockBeforeSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x63c8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x382424, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4faa54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3831e4, 0x1fe000 bytes
    //
    _e37(sdk::unknown_ptr) set_clock_before_sleep;
    
    // [HalpSetCmosData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3af70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c6920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c6810, 0x1fe000 bytes
    //
    _e38(sdk::unknown_ptr) set_cmos_data;
    
    // [HalpSetIrtEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x291e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbb48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5090d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cba38, 0x1fe000 bytes
    //
    _e39(sdk::unknown_ptr) set_irt_entry;
    
    // [HalpSetPCIData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd9e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x399da4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1bc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b264, 0x1fe000 bytes
    //
    _e40(sdk::unknown_ptr) set_pci_data;
    
    // [HalpSetPlatformFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b5fc, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5d838, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb520ec, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5d6d8, 0x1fe000 bytes
    //
    _e41(sdk::unknown_ptr) set_platform_flags;
    
    // [HalpSetProfileSourceInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x27c20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x36898c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f7e90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369d3c, 0x1fe000 bytes
    //
    _e42(sdk::unknown_ptr) set_profile_source_interval;
    
    // [HalpSetResumeTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6180, 0x11e8 bytes
    // ntoskrnl.exe .text:0x382104, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50b208, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x382ec4, 0x1fe000 bytes
    //
    _e43(sdk::unknown_ptr) set_resume_time;
    
    // [HalpSetSystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5e2d0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x717080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71eac0, 0x1fe000 bytes
    //
    _e44(sdk::unknown_ptr) set_system_information;
    
    // [HalpSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16a8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x353a54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1a24, 0x1fe000 bytes
    //
    _e45(sdk::unknown_ptr) set_timer;
    
    // [HalpSetTimerAnyMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b17c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ba07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f87d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9f4c, 0x1fe000 bytes
    //
    _e46(sdk::unknown_ptr) set_timer_any_mode;
    
    // [HalpSetVirtualRtc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1388, 0x11e8 bytes
    // ntoskrnl.exe .text:0x2551cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f7c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2021ac, 0x1fe000 bytes
    //
    _e47(sdk::unknown_ptr) set_virtual_rtc;
    
    // [HalpSetWakeAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2bca8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc3c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4faae4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc294, 0x1fe000 bytes
    //
    _e48(sdk::unknown_ptr) set_wake_alarm;
    
    // [HalpSetupAcpiPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6b0dc, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c3c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb51bb8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c260, 0x1fe000 bytes
    //
    _e49(sdk::unknown_ptr) setup_acpi_phase0;
    
    // [HalpSetupRealModeResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x177c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3f0110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x424190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f19f0, 0x1fe000 bytes
    //
    _e50(sdk::unknown_ptr) setup_real_mode_resume;
    
    // [HalpShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29cfc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8b5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6b54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b8a2c, 0x1fe000 bytes
    //
    _e51(sdk::unknown_ptr) shutdown;
    
    // [HalpShutdownActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd80, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4add8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c04, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4adb8, 0x1fe000 bytes
    //
    _e52(sdk::unknown_ptr) shutdown_active;
    
    // [HalpShutdownContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bd84, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4addc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4adbc, 0x1fe000 bytes
    //
    _e53(sdk::unknown_ptr) shutdown_context;
    
    // [HalpSignalRAS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x378f8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ca1f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5077cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ca0e8, 0x1fe000 bytes
    //
    _e54(sdk::unknown_ptr) signal_ras;
    
    // [HalpSimpleBootFlagTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db48, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50898, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a678, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50898, 0x1fe000 bytes
    //
    _e55(sdk::unknown_ptr) simple_boot_flag_table;
    
    // [HalpSimpleCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x63acc, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a55dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa83010, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a454c, 0x1fe000 bytes
    //
    _e56(sdk::unknown_ptr) simple_check;
    
    // [HalpSleepContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c864, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61b0c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e1c, 0x1fe000 bytes
    //
    _e57(sdk::unknown_ptr) sleep_context;
    
    // [HalpSleepPageLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9e8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a1d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61f30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a1b8, 0x1fe000 bytes
    //
    _e58(sdk::unknown_ptr) sleep_page_lock;
    
    // [HalpSocApiAllocatePhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35710, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cfc10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bd920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cfb00, 0x1fe000 bytes
    //
    _e59(sdk::unknown_ptr) soc_api_allocate_physical_memory;
    
    // [HalpStallCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d868, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64040, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf18, 0x1fe000 bytes
    //
    _e60(sdk::unknown_ptr) stall_counter;
    
    // [HalpStopLegacyUsbInterrupts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x62240, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9958a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa84160, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9948b0, 0x1fe000 bytes
    //
    _e61(sdk::unknown_ptr) stop_legacy_usb_interrupts;
    
    // [HalpStopLegacyUsbInterruptsInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x61ff8, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a65f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8417c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a5564, 0x1fe000 bytes
    //
    _e62(sdk::unknown_ptr) stop_legacy_usb_interrupts_internal;
    
    // [HalpStoreFreeCr3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10ee4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d914, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dcdd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39edd4, 0x1fe000 bytes
    //
    _e63(sdk::unknown_ptr) store_free_cr3;
    
    // [HalpSystemHardwareLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a920, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc10f50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b710, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10fb0, 0x1fe000 bytes
    //
    _e64(sdk::unknown_ptr) system_hardware_lock;
    
    // [HalpSystemHardwareLockInterruptsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b8a8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61cf0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49fa0, 0x1fe000 bytes
    //
    _e65(sdk::unknown_ptr) system_hardware_lock_interrupts_enabled;
    
    // [HalpSzBreak]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e014, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe7c4, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x120cc, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe274, 0x1fe000 bytes
    //
    _e66(sdk::unknown_ptr) sz_break;
    
    // [HalpSzDisableX2ApicPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3dfc0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe770, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11fb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe220, 0x1fe000 bytes
    //
    _e67(sdk::unknown_ptr) sz_disable_x2_apic_policy;
    
    // [HalpSzDisallowMmConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3df30, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe6b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x120a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe168, 0x1fe000 bytes
    //
    _e68(sdk::unknown_ptr) sz_disallow_mm_config;
    
    // [HalpSzDisallowMsi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3df18, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe6a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11fc8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe150, 0x1fe000 bytes
    //
    _e69(sdk::unknown_ptr) sz_disallow_msi;
    
    // [HalpSzEnableX2ApicPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3dfd8, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe788, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11f98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe238, 0x1fe000 bytes
    //
    _e70(sdk::unknown_ptr) sz_enable_x2_apic_policy;
    
    // [HalpSzForceClusterMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e000, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe7b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11f80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe260, 0x1fe000 bytes
    //
    _e71(sdk::unknown_ptr) sz_force_cluster_mode;
    
    // [HalpSzForceMSI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3df08, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe690, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11ef0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe140, 0x1fe000 bytes
    //
    _e72(sdk::unknown_ptr) sz_force_msi;
    
    // [HalpSzGroupSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3deb0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe638, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11f10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe0e8, 0x1fe000 bytes
    //
    _e73(sdk::unknown_ptr) sz_group_size;
    
    // [HalpSzMaxApicCluster]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3dff0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe7a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11f20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe250, 0x1fe000 bytes
    //
    _e74(sdk::unknown_ptr) sz_max_apic_cluster;
    
    // [HalpSzOneCpu]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e030, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe7e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x120d4, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe290, 0x1fe000 bytes
    //
    _e75(sdk::unknown_ptr) sz_one_cpu;
    
    // [HalpSzUseLegacyApicMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3dfa8, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe758, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11f68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe208, 0x1fe000 bytes
    //
    _e76(sdk::unknown_ptr) sz_use_legacy_apic_mode;
    
    // [HalpSzUseLowMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3dee8, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe670, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11fe0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe120, 0x1fe000 bytes
    //
    _e77(sdk::unknown_ptr) sz_use_low_memory;
    
    // [HalpSzUsePhysicalApic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e020, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe7d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11f30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe280, 0x1fe000 bytes
    //
    _e78(sdk::unknown_ptr) sz_use_physical_apic;
    
    // [HalpSzUsePlatformClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3ded0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe658, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11f50, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe108, 0x1fe000 bytes
    //
    _e79(sdk::unknown_ptr) sz_use_platform_clock;
    
    // [HalpSzUsePlatformTick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3dec0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe648, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11f40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe0f8, 0x1fe000 bytes
    //
    _e80(sdk::unknown_ptr) sz_use_platform_tick;
    
    // [HalpSzWatchdogDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3df58, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xe708, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12040, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe1b8, 0x1fe000 bytes
    //
    _e81(sdk::unknown_ptr) sz_watchdog_disable;
    
    // [HalpTimeStampAtResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bbb0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49058, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60228, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49038, 0x1fe000 bytes
    //
    _e82(sdk::unknown_ptr) time_stamp_at_resume;
    
    // [HalpTimerAlwaysOnClockInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c6a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ced60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cec50, 0x1fe000 bytes
    //
    _e83(sdk::unknown_ptr) timer_always_on_clock_interrupt;
    
    // [HalpTimerAuxiliaryClockEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bb60, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64028, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf00, 0x1fe000 bytes
    //
    _e84(sdk::unknown_ptr) timer_auxiliary_clock_enabled;
    
    // [HalpTimerCalculateMaximumAllowableDrift]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b218, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ba120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1514, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9ff0, 0x1fe000 bytes
    //
    _e85(sdk::unknown_ptr) timer_calculate_maximum_allowable_drift;
    
    // [HalpTimerCalibratePerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbb94, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a1274, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bab98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a2734, 0x1fe000 bytes
    //
    _e86(sdk::unknown_ptr) timer_calibrate_performance_counter;
    
    // [HalpTimerCaptureCloestAuxiliaryQpcPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29fac, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b0b8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e055c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0a5c, 0x1fe000 bytes
    //
    _e87(sdk::unknown_ptr) timer_capture_cloest_auxiliary_qpc_pair;
    
    // [HalpTimerCaptureCurrentAuxiliaryQpcPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a058, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b0c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4edd90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0b10, 0x1fe000 bytes
    //
    _e88(sdk::unknown_ptr) timer_capture_current_auxiliary_qpc_pair;
    
    // [HalpTimerClearProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b260, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ba170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8874, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ba040, 0x1fe000 bytes
    //
    _e89(sdk::unknown_ptr) timer_clear_problem;
    
    // [HalpTimerClockActivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11ec0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bbb70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ee30, 0x1fe000 bytes
    //
    _e90(sdk::unknown_ptr) timer_clock_activate;
    
    // [HalpTimerClockArm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1600, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3539c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1990, 0x1fe000 bytes
    //
    _e91(sdk::unknown_ptr) timer_clock_arm;
    
    // [HalpTimerClockInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1560, 0x11e8 bytes
    // ntoskrnl.exe .text:0x26b370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x358ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c9c0, 0x1fe000 bytes
    //
    _e92(sdk::unknown_ptr) timer_clock_initialize;
    
    // [HalpTimerClockInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3310, 0x11e8 bytes
    // ntoskrnl.exe .text:0x30ca00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x278110, 0x1fe000 bytes
    //
    _e93(sdk::unknown_ptr) timer_clock_interrupt;
    
    // [HalpTimerClockInterruptStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15400, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0ce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d62a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1af0, 0x1fe000 bytes
    //
    _e94(sdk::unknown_ptr) timer_clock_interrupt_stub;
    
    // [HalpTimerClockIpiRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x304ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26f470, 0x1fe000 bytes
    //
    _e95(sdk::unknown_ptr) timer_clock_ipi_routine;
    
    // [HalpTimerClockPowerChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a93c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f82f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9aa0, 0x1fe000 bytes
    //
    _e96(sdk::unknown_ptr) timer_clock_power_change;
    
    // [HalpTimerClockStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x269e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b3c0, 0x1fe000 bytes
    //
    _e97(sdk::unknown_ptr) timer_clock_stop;
    
    // [HalpTimerClockSwapViolationCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdc4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1799c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f24, 0x1fe000 bytes
    //
    _e98(sdk::unknown_ptr) timer_clock_swap_violation_count;
    
    // [HalpTimerClosestAuxiliaryQpcPair]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bab8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bde8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63ee8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bdc8, 0x1fe000 bytes
    //
    _e99(sdk::unknown_ptr) timer_closest_auxiliary_qpc_pair;
    
    // [HalpTimerCmosApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3dbc0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2d18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1cf8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2a30, 0x1fe000 bytes
    //
    _f00(sdk::unknown_ptr) timer_cmos_api;
    
    // [HalpTimerConfigureInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1141c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39da84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bccc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39ef44, 0x1fe000 bytes
    //
    _f01(sdk::unknown_ptr) timer_configure_interrupt;
    
    // [HalpTimerConfigureQpcBypass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x160f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c8914, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6afc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c97e4, 0x1fe000 bytes
    //
    _f02(sdk::unknown_ptr) timer_configure_qpc_bypass;
    
    // [HalpTimerConvertAuxiliaryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a118, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b0d04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ede54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0bd4, 0x1fe000 bytes
    //
    _f03(sdk::unknown_ptr) timer_convert_auxiliary_counter;
    
    // [HalpTimerConvertAuxiliaryCounterToPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a1f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b0e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4edf50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0cd0, 0x1fe000 bytes
    //
    _f04(sdk::unknown_ptr) timer_convert_auxiliary_counter_to_performance_counter;
    
    // [HalpTimerConvertPerformanceCounterToAuxiliaryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a300, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b0f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0e00, 0x1fe000 bytes
    //
    _f05(sdk::unknown_ptr) timer_convert_performance_counter_to_auxiliary_counter;
    
    // [HalpTimerCriticalClockSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ba98, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a560, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62300, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a540, 0x1fe000 bytes
    //
    _f06(sdk::unknown_ptr) timer_critical_clock_source;
    
    // [HalpTimerCriticalClockSourceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdc8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f28, 0x1fe000 bytes
    //
    _f07(sdk::unknown_ptr) timer_critical_clock_source_count;
    
    // [HalpTimerDeepestIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8b8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bde0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63ee4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bdc0, 0x1fe000 bytes
    //
    _f08(sdk::unknown_ptr) timer_deepest_idle_state;
    
    // [HalpTimerDelayedQueryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b290, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ba1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f88b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ba080, 0x1fe000 bytes
    //
    _f09(sdk::unknown_ptr) timer_delayed_query_counter;
    
    // [HalpTimerDelayedQueryHardwareCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdd0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f30, 0x1fe000 bytes
    //
    _f10(sdk::unknown_ptr) timer_delayed_query_hardware_count;
    
    // [HalpTimerDetermineValidTimerPairReadLatency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb740, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7b7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bad58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a653c, 0x1fe000 bytes
    //
    _f11(sdk::unknown_ptr) timer_determine_valid_timer_pair_read_latency;
    
    // [HalpTimerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bb20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bec0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63fc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bea0, 0x1fe000 bytes
    //
    _f12(sdk::unknown_ptr) timer_dpc;
    
    // [HalpTimerDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1460, 0x11e8 bytes
    // ntoskrnl.exe .text:0x26f670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380cb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320df0, 0x1fe000 bytes
    //
    _f13(sdk::unknown_ptr) timer_dpc_routine;
    
    // [HalpTimerDriftReadjustmentCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdd8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f38, 0x1fe000 bytes
    //
    _f14(sdk::unknown_ptr) timer_drift_readjustment_count;
    
    // [HalpTimerEarliestQpcAllowedToConvert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bb08, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be50, 0x1fe000 bytes
    //
    _f15(sdk::unknown_ptr) timer_earliest_qpc_allowed_to_convert;
    
    // [HalpTimerEnableHypervisorTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x629c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x382240, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa618, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x383000, 0x1fe000 bytes
    //
    _f16(sdk::unknown_ptr) timer_enable_hypervisor_timer;
    
    // [HalpTimerFindBestAlwaysOnTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc844, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7f8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a694c, 0x1fe000 bytes
    //
    _f17(sdk::unknown_ptr) timer_find_best_always_on_timer;
    
    // [HalpTimerFindIdealClockSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc514, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a82e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bae48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6ca4, 0x1fe000 bytes
    //
    _f18(sdk::unknown_ptr) timer_find_ideal_clock_source;
    
    // [HalpTimerFindIdealPerformanceCounterSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc8dc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a802c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a69ec, 0x1fe000 bytes
    //
    _f19(sdk::unknown_ptr) timer_find_ideal_performance_counter_source;
    
    // [HalpTimerFindIdealWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc380, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a83cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ba3dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6d8c, 0x1fe000 bytes
    //
    _f20(sdk::unknown_ptr) timer_find_ideal_watchdog;
    
    // [HalpTimerFrequenciesMeasured]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d860, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64078, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf58, 0x1fe000 bytes
    //
    _f21(sdk::unknown_ptr) timer_frequencies_measured;
    
    // [HalpTimerGetClockConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15c40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c9000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9ef0, 0x1fe000 bytes
    //
    _f22(sdk::unknown_ptr) timer_get_clock_configuration;
    
    // [HalpTimerGetClockRates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15cf0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c90b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9fa4, 0x1fe000 bytes
    //
    _f23(sdk::unknown_ptr) timer_get_clock_rates;
    
    // [HalpTimerGetInternalData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x30cea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2785b0, 0x1fe000 bytes
    //
    _f24(sdk::unknown_ptr) timer_get_internal_data;
    
    // [HalpTimerGetSavedPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6370, 0x11e8 bytes
    // ntoskrnl.exe .text:0x382390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee1bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x383150, 0x1fe000 bytes
    //
    _f25(sdk::unknown_ptr) timer_get_saved_performance_counter;
    
    // [HalpTimerHeavilyPenalizedQpcCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fddc, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f3c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f3c, 0x1fe000 bytes
    //
    _f26(sdk::unknown_ptr) timer_heavily_penalized_qpc_calls;
    
    // [HalpTimerHvApicCallbackList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ecb0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4148, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e058, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4148, 0x1fe000 bytes
    //
    _f27(sdk::unknown_ptr) timer_hv_apic_callback_list;
    
    // [HalpTimerHvReferenceCallbackList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4fb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17ab8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4fb0, 0x1fe000 bytes
    //
    _f28(sdk::unknown_ptr) timer_hv_reference_callback_list;
    
    // [HalpTimerHypervisorInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17e50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3626b0, 0x1fe000 bytes
    //
    _f29(sdk::unknown_ptr) timer_hypervisor_interrupt;
    
    // [HalpTimerHypervisorInterruptStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c7e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ceed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d5f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cedc0, 0x1fe000 bytes
    //
    _f30(sdk::unknown_ptr) timer_hypervisor_interrupt_stub;
    
    // [HalpTimerHypervisorReferenceTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fe08, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4fb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17ac0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4fb8, 0x1fe000 bytes
    //
    _f31(sdk::unknown_ptr) timer_hypervisor_reference_time;
    
    // [HalpTimerIdleStateFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b788, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62278, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4c0, 0x1fe000 bytes
    //
    _f32(sdk::unknown_ptr) timer_idle_state_fallback;
    
    // [HalpTimerInitPowerManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15440, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b912c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b9ae8, 0x1fe000 bytes
    //
    _f33(sdk::unknown_ptr) timer_init_power_management;
    
    // [HalpTimerInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xdd30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a6470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bafb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4e30, 0x1fe000 bytes
    //
    _f34(sdk::unknown_ptr) timer_init_system;
    
    // [HalpTimerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbafc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7ef4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bab00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a68b4, 0x1fe000 bytes
    //
    _f35(sdk::unknown_ptr) timer_initialize;
    
    // [HalpTimerInitializeClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x127b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a6308, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e564c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4cc8, 0x1fe000 bytes
    //
    _f36(sdk::unknown_ptr) timer_initialize_clock;
    
    // [HalpTimerInitializeClockPn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10b74, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a68d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bcdf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5290, 0x1fe000 bytes
    //
    _f37(sdk::unknown_ptr) timer_initialize_clock_pn;
    
    // [HalpTimerInitializeEarlyStallSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa0f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1288, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5dd0, 0x1fe000 bytes
    //
    _f38(sdk::unknown_ptr) timer_initialize_early_stall_source;
    
    // [HalpTimerInitializeHypervisorTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x16268, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a5fe4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a499c, 0x1fe000 bytes
    //
    _f39(sdk::unknown_ptr) timer_initialize_hypervisor_timer;
    
    // [HalpTimerInitializeProfiling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xce3c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a6710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a50d0, 0x1fe000 bytes
    //
    _f40(sdk::unknown_ptr) timer_initialize_profiling;
    
    // [HalpTimerInitializeSystemWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ab78, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bcba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb44c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bca70, 0x1fe000 bytes
    //
    _f41(sdk::unknown_ptr) timer_initialize_system_watchdog;
    
    // [HalpTimerLastAlwaysOnCounterValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b910, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a548, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc622e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a528, 0x1fe000 bytes
    //
    _f42(sdk::unknown_ptr) timer_last_always_on_counter_value;
    
    // [HalpTimerLastDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b920, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a558, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc622f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a538, 0x1fe000 bytes
    //
    _f43(sdk::unknown_ptr) timer_last_dpc;
    
    // [HalpTimerLastProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdcc, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c2b4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c294, 0x1fe000 bytes
    //
    _f44(sdk::unknown_ptr) timer_last_problem;
    
    // [HalpTimerLoaderBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d888, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be78, 0x1fe000 bytes
    //
    _f45(sdk::unknown_ptr) timer_loader_block;
    
    // [HalpTimerMarkWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6160, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3820dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8a8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x382e9c, 0x1fe000 bytes
    //
    _f46(sdk::unknown_ptr) timer_mark_wake;
    
    // [HalpTimerMaxIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8c8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62310, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507e8, 0x1fe000 bytes
    //
    _f47(sdk::unknown_ptr) timer_max_increment;
    
    // [HalpTimerMaximumAllowableDrift]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdb0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64010, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bef0, 0x1fe000 bytes
    //
    _f48(sdk::unknown_ptr) timer_maximum_allowable_drift;
    
    // [HalpTimerMeasureAllProcessorFrequencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c420, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bdbe4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fc4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bdad4, 0x1fe000 bytes
    //
    _f49(sdk::unknown_ptr) timer_measure_all_processor_frequencies;
    
    // [HalpTimerMeasureFrequencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb364, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7798, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ba458, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6158, 0x1fe000 bytes
    //
    _f50(sdk::unknown_ptr) timer_measure_frequencies;
    
    // [HalpTimerMeasureProcessorsWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c480, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bdc60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fc520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bdb50, 0x1fe000 bytes
    //
    _f51(sdk::unknown_ptr) timer_measure_processors_worker;
    
    // [HalpTimerNoteHpetMaskingBehavior]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xc4a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a811c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3baf2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6adc, 0x1fe000 bytes
    //
    _f52(sdk::unknown_ptr) timer_note_hpet_masking_behavior;
    
    // [HalpTimerNotifyProcessorFreeze]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3990, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b10b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0f80, 0x1fe000 bytes
    //
    _f53(sdk::unknown_ptr) timer_notify_processor_freeze;
    
    // [HalpTimerOnlyClockInterruptPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2aac0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x254530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304280, 0x1fe000 bytes
    //
    _f54(sdk::unknown_ptr) timer_only_clock_interrupt_pending;
    
    // [HalpTimerPcCpuApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d350, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2d08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5d80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2a20, 0x1fe000 bytes
    //
    _f55(sdk::unknown_ptr) timer_pc_cpu_api;
    
    // [HalpTimerPerformanceCounterPowerChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b3e8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ba360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ba230, 0x1fe000 bytes
    //
    _f56(sdk::unknown_ptr) timer_performance_counter_power_change;
    
    // [HalpTimerPeriodicTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bac0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be00, 0x1fe000 bytes
    //
    _f57(sdk::unknown_ptr) timer_periodic_timer;
    
    // [HalpTimerPlatformClockSourceForced]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64038, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf10, 0x1fe000 bytes
    //
    _f58(sdk::unknown_ptr) timer_platform_clock_source_forced;
    
    // [HalpTimerPlatformSourceForced]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd21, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be70, 0x1fe000 bytes
    //
    _f59(sdk::unknown_ptr) timer_platform_source_forced;
    
    // [HalpTimerPowerChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b8d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ba994, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f90a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ba864, 0x1fe000 bytes
    //
    _f60(sdk::unknown_ptr) timer_power_change;
    
    // [HalpTimerPowerComponentActiveCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _f61(sdk::unknown_ptr) timer_power_component_active_callback;
    
    // [HalpTimerPowerComponentIdleCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15f80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ca3f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb4f0, 0x1fe000 bytes
    //
    _f62(sdk::unknown_ptr) timer_power_component_idle_callback;
    
    // [HalpTimerPowerCriticalTransitionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b990, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4baa60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ba930, 0x1fe000 bytes
    //
    _f63(sdk::unknown_ptr) timer_power_critical_transition_callback;
    
    // [HalpTimerPrepareClockInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11df8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39d9ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bcc30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39eeac, 0x1fe000 bytes
    //
    _f64(sdk::unknown_ptr) timer_prepare_clock_interrupt;
    
    // [HalpTimerProcessorFrequencyKnown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd10, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bf50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64058, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf30, 0x1fe000 bytes
    //
    _f65(sdk::unknown_ptr) timer_processor_frequency_known;
    
    // [HalpTimerProcessorsFrozen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dbb0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63fa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be80, 0x1fe000 bytes
    //
    _f66(sdk::unknown_ptr) timer_processors_frozen;
    
    // [HalpTimerProfileInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c820, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cef20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cee10, 0x1fe000 bytes
    //
    _f67(sdk::unknown_ptr) timer_profile_interrupt;
    
    // [HalpTimerProfilePowerChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a694, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bbf08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa368, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bbdd8, 0x1fe000 bytes
    //
    _f68(sdk::unknown_ptr) timer_profile_power_change;
    
    // [HalpTimerProfilingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fc90, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd179b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f40, 0x1fe000 bytes
    //
    _f69(sdk::unknown_ptr) timer_profiling_callback;
    
    // [HalpTimerQpcFreqForAuxQpcConversion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bb00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be40, 0x1fe000 bytes
    //
    _f70(sdk::unknown_ptr) timer_qpc_freq_for_aux_qpc_conversion;
    
    // [HalpTimerQueryAndResetRtcErrors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7170, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3891f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389d10, 0x1fe000 bytes
    //
    _f71(sdk::unknown_ptr) timer_query_and_reset_rtc_errors;
    
    // [HalpTimerQueryAuxiliaryCounterFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a420, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b1100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee2c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b0fd0, 0x1fe000 bytes
    //
    _f72(sdk::unknown_ptr) timer_query_auxiliary_counter_frequency;
    
    // [HalpTimerQueryCycleCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xaa40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c99a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ba380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca890, 0x1fe000 bytes
    //
    _f73(sdk::unknown_ptr) timer_query_cycle_counter;
    
    // [HalpTimerQueryWakeTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7260, 0x11e8 bytes
    // ntoskrnl.exe .text:0x389300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389e20, 0x1fe000 bytes
    //
    _f74(sdk::unknown_ptr) timer_query_wake_time;
    
    // [HalpTimerReadTimerPairWithLatencyLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb660, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7a98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ba750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6458, 0x1fe000 bytes
    //
    _f75(sdk::unknown_ptr) timer_read_timer_pair_with_latency_limit;
    
    // [HalpTimerRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x10784, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a9ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b9604, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8480, 0x1fe000 bytes
    //
    _f76(sdk::unknown_ptr) timer_register;
    
    // [HalpTimerRegisterBuiltinPlugins]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12ee8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a847c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6e3c, 0x1fe000 bytes
    //
    _f77(sdk::unknown_ptr) timer_register_builtin_plugins;
    
    // [HalpTimerRegisterBuiltinPluginsCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12ec4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8448, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c155c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6e08, 0x1fe000 bytes
    //
    _f78(sdk::unknown_ptr) timer_register_builtin_plugins_common;
    
    // [HalpTimerRegistrationAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a909, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc0f290, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09950, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f2e0, 0x1fe000 bytes
    //
    _f79(sdk::unknown_ptr) timer_registration_allowed;
    
    // [HalpTimerReportIdleStateUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15770, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c8730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9600, 0x1fe000 bytes
    //
    _f80(sdk::unknown_ptr) timer_report_idle_state_usage;
    
    // [HalpTimerResetProfileAdjustment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d4d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392c80, 0x1fe000 bytes
    //
    _f81(sdk::unknown_ptr) timer_reset_profile_adjustment;
    
    // [HalpTimerRestartProfileInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a6f8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bbf78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa3c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bbe48, 0x1fe000 bytes
    //
    _f82(sdk::unknown_ptr) timer_restart_profile_interrupt;
    
    // [HalpTimerRestorePerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6534, 0x11e8 bytes
    // ntoskrnl.exe .text:0x382588, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee39c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x383348, 0x1fe000 bytes
    //
    _f83(sdk::unknown_ptr) timer_restore_performance_counter;
    
    // [HalpTimerRestoreProcessorCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6134, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3820a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fac8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x382e68, 0x1fe000 bytes
    //
    _f84(sdk::unknown_ptr) timer_restore_processor_counter;
    
    // [HalpTimerRtcApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd38, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4160, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e070, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4160, 0x1fe000 bytes
    //
    _f85(sdk::unknown_ptr) timer_rtc_api;
    
    // [HalpTimerRtcErrorCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bab0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bdd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63ed0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bdb0, 0x1fe000 bytes
    //
    _f86(sdk::unknown_ptr) timer_rtc_error_code;
    
    // [HalpTimerSavePerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x6440, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3824a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x383264, 0x1fe000 bytes
    //
    _f87(sdk::unknown_ptr) timer_save_performance_counter;
    
    // [HalpTimerSaveProcessorFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xcc1c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a67c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bb478, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a5180, 0x1fe000 bytes
    //
    _f88(sdk::unknown_ptr) timer_save_processor_frequency;
    
    // [HalpTimerSavedPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fdb8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bdf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63ef8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bdd0, 0x1fe000 bytes
    //
    _f89(sdk::unknown_ptr) timer_saved_performance_counter;
    
    // [HalpTimerSavedProcessorCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d898, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be60, 0x1fe000 bytes
    //
    _f90(sdk::unknown_ptr) timer_saved_processor_counter;
    
    // [HalpTimerScaleCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb844, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6314, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392cd0, 0x1fe000 bytes
    //
    _f91(sdk::unknown_ptr) timer_scale_counter;
    
    // [HalpTimerSchedulePeriodicQueries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15df0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c93cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e73f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca2bc, 0x1fe000 bytes
    //
    _f92(sdk::unknown_ptr) timer_schedule_periodic_queries;
    
    // [HalpTimerSelectFallbackPerformanceCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b998, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4baa78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f91e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ba948, 0x1fe000 bytes
    //
    _f93(sdk::unknown_ptr) timer_select_fallback_performance_counter;
    
    // [HalpTimerSelectRoles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb884, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a7c5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ba82c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a661c, 0x1fe000 bytes
    //
    _f94(sdk::unknown_ptr) timer_select_roles;
    
    // [HalpTimerSetProblemEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2b9f4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4baadc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9244, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ba9ac, 0x1fe000 bytes
    //
    _f95(sdk::unknown_ptr) timer_set_problem_ex;
    
    // [HalpTimerSetProfilingTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xcb34, 0x11e8 bytes
    // ntoskrnl.exe .text:0x373c68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bbb24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x374fe8, 0x1fe000 bytes
    //
    _f96(sdk::unknown_ptr) timer_set_profiling_target;
    
    // [HalpTimerSetTimerBackedProfileInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a7d8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc074, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa4a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bbf44, 0x1fe000 bytes
    //
    _f97(sdk::unknown_ptr) timer_set_timer_backed_profile_interval;
    
    // [HalpTimerSetupMessageInterruptRouting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ba20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bab10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9278, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ba9e0, 0x1fe000 bytes
    //
    _f98(sdk::unknown_ptr) timer_setup_message_interrupt_routing;
    
    // [HalpTimerStallCounterPowerChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ba7c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bab80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f92e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4baa50, 0x1fe000 bytes
    //
    _f99(sdk::unknown_ptr) timer_stall_counter_power_change;
    
    // [HalpTimerStallExecutionProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa798, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8198, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x220ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a6b58, 0x1fe000 bytes
    //
    _g00(sdk::unknown_ptr) timer_stall_execution_processor;
    
    // [HalpTimerStartProfileInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a864, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc108, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa534, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bbfd8, 0x1fe000 bytes
    //
    _g01(sdk::unknown_ptr) timer_start_profile_interrupt;
    
    // [HalpTimerStopAllTimers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a444, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b11dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee6a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b10ac, 0x1fe000 bytes
    //
    _g02(sdk::unknown_ptr) timer_stop_all_timers;
    
    // [HalpTimerStopProfileInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2a8f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc19c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa5c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc06c, 0x1fe000 bytes
    //
    _g03(sdk::unknown_ptr) timer_stop_profile_interrupt;
    
    // [HalpTimerSwitchStallSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x64e4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x382530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ee6fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3832f0, 0x1fe000 bytes
    //
    _g04(sdk::unknown_ptr) timer_switch_stall_source;
    
    // [HalpTimerSwitchToNormalClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ab04, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9d38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8474, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9c08, 0x1fe000 bytes
    //
    _g05(sdk::unknown_ptr) timer_switch_to_normal_clock;
    
    // [HalpTimerTestHypervisorTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35534, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bc1ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa7e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bc0bc, 0x1fe000 bytes
    //
    _g06(sdk::unknown_ptr) timer_test_hypervisor_timer;
    
    // [HalpTimerTraceTimingHardware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a080, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b6c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86b910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be808, 0x1fe000 bytes
    //
    _g07(sdk::unknown_ptr) timer_trace_timing_hardware;
    
    // [HalpTimerUnmapInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2bb40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bac48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f93b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bab18, 0x1fe000 bytes
    //
    _g08(sdk::unknown_ptr) timer_unmap_interrupt;
    
    // [HalpTimerUpdateApiConsumers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35738, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cfc48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e464, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cfb38, 0x1fe000 bytes
    //
    _g09(sdk::unknown_ptr) timer_update_api_consumers;
    
    // [HalpTimerWaitForPhase0Interrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x128c8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a6414, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e578c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4dd4, 0x1fe000 bytes
    //
    _g10(sdk::unknown_ptr) timer_wait_for_phase0_interrupt;
    
    // [HalpTimerWatchdogArmed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ba80, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a420, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc621b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a400, 0x1fe000 bytes
    //
    _g11(sdk::unknown_ptr) timer_watchdog_armed;
    
    // [HalpTimerWatchdogDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ba90, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a438, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc621d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a418, 0x1fe000 bytes
    //
    _g12(sdk::unknown_ptr) timer_watchdog_disable;
    
    // [HalpTimerWatchdogGeneratedLastReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ab90, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b6810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be3f0, 0x1fe000 bytes
    //
    _g13(sdk::unknown_ptr) timer_watchdog_generated_last_reset;
    
    // [HalpTimerWatchdogLastReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ba88, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a428, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc621c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a408, 0x1fe000 bytes
    //
    _g14(sdk::unknown_ptr) timer_watchdog_last_reset;
    
    // [HalpTimerWatchdogLogReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ab6c, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b67e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870108, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be3c4, 0x1fe000 bytes
    //
    _g15(sdk::unknown_ptr) timer_watchdog_log_reset;
    
    // [HalpTimerWatchdogPreResetInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c860, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cef60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cee50, 0x1fe000 bytes
    //
    _g16(sdk::unknown_ptr) timer_watchdog_pre_reset_interrupt;
    
    // [HalpTimerWatchdogResetCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ba20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a418, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc621b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a3f8, 0x1fe000 bytes
    //
    _g17(sdk::unknown_ptr) timer_watchdog_reset_count;
    
    // [HalpTimerWatchdogResetCountdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ad30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x38f450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39af00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3904a0, 0x1fe000 bytes
    //
    _g18(sdk::unknown_ptr) timer_watchdog_reset_countdown;
    
    // [HalpTimerWatchdogStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2adb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bcd00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb5a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bcc00, 0x1fe000 bytes
    //
    _g19(sdk::unknown_ptr) timer_watchdog_start;
    
    // [HalpTimerWatchdogStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ae60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bcd90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bcc90, 0x1fe000 bytes
    //
    _g20(sdk::unknown_ptr) timer_watchdog_stop;
    
    // [HalpTimerWatchdogStopCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ba18, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a410, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc621a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a3f0, 0x1fe000 bytes
    //
    _g21(sdk::unknown_ptr) timer_watchdog_stop_count;
    
    // [HalpTimerWatchdogTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ba10, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a408, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc621a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a3e8, 0x1fe000 bytes
    //
    _g22(sdk::unknown_ptr) timer_watchdog_timeout;
    
    // [HalpTimerWatchdogTriggerSystemReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2aeb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bcdf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bccf0, 0x1fe000 bytes
    //
    _g23(sdk::unknown_ptr) timer_watchdog_trigger_system_reset;
    
    // [HalpTranslateBusAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17ef0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x360fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3623f0, 0x1fe000 bytes
    //
    _g24(sdk::unknown_ptr) translate_bus_address;
    
    // [HalpTranslateToLegacyMcaException]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x36c98, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b5768, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f3d44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b5638, 0x1fe000 bytes
    //
    _g25(sdk::unknown_ptr) translate_to_legacy_mca_exception;
    
    // [HalpTscAdjustAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b78c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4e4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6227c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4c4, 0x1fe000 bytes
    //
    _g26(sdk::unknown_ptr) tsc_adjust_available;
    
    // [HalpTscAdvSynchCalculateRemoteDelta]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xafb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x398604, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c740c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399ac4, 0x1fe000 bytes
    //
    _g27(sdk::unknown_ptr) tsc_adv_synch_calculate_remote_delta;
    
    // [HalpTscAdvSynchCalculateRemoteDeltas]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xadcc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3983d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c71b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399894, 0x1fe000 bytes
    //
    _g28(sdk::unknown_ptr) tsc_adv_synch_calculate_remote_deltas;
    
    // [HalpTscAdvSynchComputeMinimumDeltaAlternate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb1d8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3987f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c75e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399cb4, 0x1fe000 bytes
    //
    _g29(sdk::unknown_ptr) tsc_adv_synch_compute_minimum_delta_alternate;
    
    // [HalpTscAdvSynchLeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xaa9c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x398194, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c6e9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399654, 0x1fe000 bytes
    //
    _g30(sdk::unknown_ptr) tsc_adv_synch_leader;
    
    // [HalpTscAdvSynchReadTimeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb2e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x398928, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c76ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399de8, 0x1fe000 bytes
    //
    _g31(sdk::unknown_ptr) tsc_adv_synch_read_time_stamp;
    
    // [HalpTscAdvSynchSkewCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34ed8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bb7d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bb6a4, 0x1fe000 bytes
    //
    _g32(sdk::unknown_ptr) tsc_adv_synch_skew_counter;
    
    // [HalpTscAdvSynchTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb0a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3986ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c74f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399bac, 0x1fe000 bytes
    //
    _g33(sdk::unknown_ptr) tsc_adv_synch_target;
    
    // [HalpTscAdvSynchToLeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34f08, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bb80c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c72d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bb6dc, 0x1fe000 bytes
    //
    _g34(sdk::unknown_ptr) tsc_adv_synch_to_leader;
    
    // [HalpTscAdvSynchToTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35110, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bba28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9df8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bb8f8, 0x1fe000 bytes
    //
    _g35(sdk::unknown_ptr) tsc_adv_synch_to_target;
    
    // [HalpTscCheckAdjustMsrCapability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x126bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c7cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8bc0, 0x1fe000 bytes
    //
    _g36(sdk::unknown_ptr) tsc_check_adjust_msr_capability;
    
    // [HalpTscCompatibilitySynchronization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35264, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bbb9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa004, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bba6c, 0x1fe000 bytes
    //
    _g37(sdk::unknown_ptr) tsc_compatibility_synchronization;
    
    // [HalpTscDeltas]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b770, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62258, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4a0, 0x1fe000 bytes
    //
    _g38(sdk::unknown_ptr) tsc_deltas;
    
    // [HalpTscDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12f74, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a8950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c17e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a7310, 0x1fe000 bytes
    //
    _g39(sdk::unknown_ptr) tsc_discover;
    
    // [HalpTscFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35390, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bbcd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bbba0, 0x1fe000 bytes
    //
    _g40(sdk::unknown_ptr) tsc_fallback;
    
    // [HalpTscFallbackLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b768, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62250, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a498, 0x1fe000 bytes
    //
    _g41(sdk::unknown_ptr) tsc_fallback_lock;
    
    // [HalpTscFallbackToPlatformSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x35414, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bbd58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa1c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bbc28, 0x1fe000 bytes
    //
    _g42(sdk::unknown_ptr) tsc_fallback_to_platform_source;
    
    // [HalpTscGetAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd550, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39ceb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8e14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e370, 0x1fe000 bytes
    //
    _g43(sdk::unknown_ptr) tsc_get_attributes;
    
    // [HalpTscIdleStateInvariant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b6b8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48bd1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd11, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48bb1, 0x1fe000 bytes
    //
    _g44(sdk::unknown_ptr) tsc_idle_state_invariant;
    
    // [HalpTscInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd450, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39cd60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b8cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39e220, 0x1fe000 bytes
    //
    _g45(sdk::unknown_ptr) tsc_initialize;
    
    // [HalpTscInitializeSynchronizationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15a8c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a2e14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d71c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4344, 0x1fe000 bytes
    //
    _g46(sdk::unknown_ptr) tsc_initialize_synchronization_context;
    
    // [HalpTscMaximumComputedSpread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b778, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62260, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4a8, 0x1fe000 bytes
    //
    _g47(sdk::unknown_ptr) tsc_maximum_computed_spread;
    
    // [HalpTscMaximumCounterSyncSpread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b760, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6224c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a490, 0x1fe000 bytes
    //
    _g48(sdk::unknown_ptr) tsc_maximum_counter_sync_spread;
    
    // [HalpTscNopCycles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b740, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a490, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62230, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a470, 0x1fe000 bytes
    //
    _g49(sdk::unknown_ptr) tsc_nop_cycles;
    
    // [HalpTscOnWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8c0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bdd8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63ed8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bdb8, 0x1fe000 bytes
    //
    _g50(sdk::unknown_ptr) tsc_on_wake;
    
    // [HalpTscPerformanceStateInvariant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b6b9, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48bd8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48bb8, 0x1fe000 bytes
    //
    _g51(sdk::unknown_ptr) tsc_performance_state_invariant;
    
    // [HalpTscProcessorFeatureFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b738, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62268, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4b0, 0x1fe000 bytes
    //
    _g52(sdk::unknown_ptr) tsc_processor_feature_fallback;
    
    // [HalpTscQueryCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x1d90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50e9e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0480, 0x1fe000 bytes
    //
    _g53(sdk::unknown_ptr) tsc_query_counter;
    
    // [HalpTscReportSyncStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a008, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b4440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bf10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc080, 0x1fe000 bytes
    //
    _g54(sdk::unknown_ptr) tsc_report_sync_status;
    
    // [HalpTscRequestedIterations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a950, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc11f0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb4c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f6c, 0x1fe000 bytes
    //
    _g55(sdk::unknown_ptr) tsc_requested_iterations;
    
    // [HalpTscRequestedLeadProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd24, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4c00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c00, 0x1fe000 bytes
    //
    _g56(sdk::unknown_ptr) tsc_requested_lead_processor;
    
    // [HalpTscRequestedSynchronization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a954, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc11f10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f70, 0x1fe000 bytes
    //
    _g57(sdk::unknown_ptr) tsc_requested_synchronization;
    
    // [HalpTscReserveResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12598, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c7bd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c221c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8aa8, 0x1fe000 bytes
    //
    _g58(sdk::unknown_ptr) tsc_reserve_resources;
    
    // [HalpTscRestoreValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d890, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be68, 0x1fe000 bytes
    //
    _g59(sdk::unknown_ptr) tsc_restore_value;
    
    // [HalpTscSkewOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b750, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a480, 0x1fe000 bytes
    //
    _g60(sdk::unknown_ptr) tsc_skew_offset;
    
    // [HalpTscSyncRecalculateSkews]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4a9dc, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc12298, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc122f8, 0x1fe000 bytes
    //
    _g61(sdk::unknown_ptr) tsc_sync_recalculate_skews;
    
    // [HalpTscSynchronization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15a00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c9180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca070, 0x1fe000 bytes
    //
    _g62(sdk::unknown_ptr) tsc_synchronization;
    
    // [HalpTscSynchronizationFailureFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b758, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62248, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a488, 0x1fe000 bytes
    //
    _g63(sdk::unknown_ptr) tsc_synchronization_failure_fallback;
    
    // [HalpTscSynchronizationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xad00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3980b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c70d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399570, 0x1fe000 bytes
    //
    _g64(sdk::unknown_ptr) tsc_synchronization_worker;
    
    // [HalpTscTraceProcessorSynchronization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xb290, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3988b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c7654, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x399d74, 0x1fe000 bytes
    //
    _g65(sdk::unknown_ptr) tsc_trace_processor_synchronization;
    
    // [HalpTscTraceStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x354ac, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bbe50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fa2c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bbd20, 0x1fe000 bytes
    //
    _g66(sdk::unknown_ptr) tsc_trace_status;
    
    // [HalpTscWaves]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b748, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a498, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62238, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a478, 0x1fe000 bytes
    //
    _g67(sdk::unknown_ptr) tsc_waves;
    
    // [HalpUnloadMicrocode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ac40, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8618a0, 0x1fe000 bytes
    //
    _g68(sdk::unknown_ptr) unload_microcode;
    
    // [HalpUnmapVirtualAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x12960, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3b6be0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bde70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b7490, 0x1fe000 bytes
    //
    _g69(sdk::unknown_ptr) unmap_virtual_address;
    
    // [HalpUnmaskInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x70c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x388610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc3d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389080, 0x1fe000 bytes
    //
    _g70(sdk::unknown_ptr) unmask_interrupt;
    
    // [HalpUnregisterSecondaryIcInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29190, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cb9d0, 0x1fe000 bytes
    //
    _g71(sdk::unknown_ptr) unregister_secondary_ic_interface;
    
    // [HalpUpdateCapsule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3b260, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1b30, 0x1fe000 bytes
    //
    _g72(sdk::unknown_ptr) update_capsule;
    
    // [HalpUpdateConfigurationFromMsct]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x705a4, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8be4c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7d424, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b0cc, 0x1fe000 bytes
    //
    _g73(sdk::unknown_ptr) update_configuration_from_msct;
    
    // [HalpUpdateCoolingPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3ad08, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d6f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5153d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d6df0, 0x1fe000 bytes
    //
    _g74(sdk::unknown_ptr) update_cooling_packet;
    
    // [HalpUpdateIrtDestinationId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x291f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cbb68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5090f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cba58, 0x1fe000 bytes
    //
    _g75(sdk::unknown_ptr) update_irt_destination_id;
    
    // [HalpUpdateNumaConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3ac78, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cc4c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x509d54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cc3b4, 0x1fe000 bytes
    //
    _g76(sdk::unknown_ptr) update_numa_configuration;
    
    // [HalpUsbControllerList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b8d0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48bc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fd00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48ba0, 0x1fe000 bytes
    //
    _g77(sdk::unknown_ptr) usb_controller_list;
    
    // [HalpUsedAllocDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d84c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4ae00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62c38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4ade0, 0x1fe000 bytes
    //
    _g78(sdk::unknown_ptr) used_alloc_descriptors;
    
    // [HalpUtcTimeToAcpiRealTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d750, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x86139c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92eddc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x85f7d4, 0x1fe000 bytes
    //
    _g79(sdk::unknown_ptr) utc_time_to_acpi_real_time;
    
    // [HalpValidPCISlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xdc98, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39a074, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1f54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b534, 0x1fe000 bytes
    //
    _g80(sdk::unknown_ptr) valid_pci_slot;
    
    // [HalpValidateInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5cfa0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x86298c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868c98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x860dbc, 0x1fe000 bytes
    //
    _g81(sdk::unknown_ptr) validate_interface;
    
    // [HalpValidateMpns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5df94, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x863f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931408, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862390, 0x1fe000 bytes
    //
    _g82(sdk::unknown_ptr) validate_mpns;
    
    // [HalpVerifySratEntryLengthAndFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x70858, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa8c210, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7d7e8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8b490, 0x1fe000 bytes
    //
    _g83(sdk::unknown_ptr) verify_srat_entry_length_and_flag;
    
    // [HalpVideoBiosPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d8e0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc505c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc505c0, 0x1fe000 bytes
    //
    _g84(sdk::unknown_ptr) video_bios_present;
    
    // [HalpVirtAddrForFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c858, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49e10, 0x1fe000 bytes
    //
    _g85(sdk::unknown_ptr) virt_addr_for_flush;
    
    // [HalpVpptAcknowledgeInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2be20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4badd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4baca0, 0x1fe000 bytes
    //
    _g86(sdk::unknown_ptr) vppt_acknowledge_interrupt;
    
    // [HalpVpptArmTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2bee0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4baf80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f96f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bae50, 0x1fe000 bytes
    //
    _g87(sdk::unknown_ptr) vppt_arm_timer;
    
    // [HalpVpptInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c000, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bb140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f98b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bb010, 0x1fe000 bytes
    //
    _g88(sdk::unknown_ptr) vppt_initialize;
    
    // [HalpVpptLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b900, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a520, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc622c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a500, 0x1fe000 bytes
    //
    _g89(sdk::unknown_ptr) vppt_lock;
    
    // [HalpVpptPhysicalTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b908, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a540, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc622e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a520, 0x1fe000 bytes
    //
    _g90(sdk::unknown_ptr) vppt_physical_timer;
    
    // [HalpVpptPhysicalTimerTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b8e0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a4e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62280, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4c8, 0x1fe000 bytes
    //
    _g91(sdk::unknown_ptr) vppt_physical_timer_target;
    
    // [HalpVpptQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b8f0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a500, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc622a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a4e0, 0x1fe000 bytes
    //
    _g92(sdk::unknown_ptr) vppt_queue;
    
    // [HalpVpptStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c020, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bb250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f99c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bb120, 0x1fe000 bytes
    //
    _g93(sdk::unknown_ptr) vppt_stop;
    
    // [HalpVpptTimerRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c0c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bb358, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9ad4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bb228, 0x1fe000 bytes
    //
    _g94(sdk::unknown_ptr) vppt_timer_register;
    
    // [HalpVpptUpdatePhysicalTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c214, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bb514, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f9c90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bb3e4, 0x1fe000 bytes
    //
    _g95(sdk::unknown_ptr) vppt_update_physical_timer;
    
    // [HalpVrtcTimeStale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b964, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a464, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62204, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a444, 0x1fe000 bytes
    //
    _g96(sdk::unknown_ptr) vrtc_time_stale;
    
    // [HalpWAETDeviceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c9e4, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49fd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61cf4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49fb0, 0x1fe000 bytes
    //
    _g97(sdk::unknown_ptr) waet_device_flags;
    
    // [HalpWakeVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4c840, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49e18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc61ae8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49df8, 0x1fe000 bytes
    //
    _g98(sdk::unknown_ptr) wake_vector;
    
    // [HalpWakeupState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4bce0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc491a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60360, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49180, 0x1fe000 bytes
    //
    _g99(sdk::unknown_ptr) wakeup_state;
    
    // [HalpWatchdogDelayExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2afd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4bcff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4bcef0, 0x1fe000 bytes
    //
    _h00(sdk::unknown_ptr) watchdog_delay_expiration;
    
    // [HalpWatchdogTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fcb8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4be68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63f68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4be48, 0x1fe000 bytes
    //
    _h01(sdk::unknown_ptr) watchdog_timer;
    
    // [HalpWdatArmTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c900, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf0c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d7e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cefb0, 0x1fe000 bytes
    //
    _h02(sdk::unknown_ptr) wdat_arm_timer;
    
    // [HalpWdatDiscover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x11c34, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a9f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c0fc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a8930, 0x1fe000 bytes
    //
    _h03(sdk::unknown_ptr) wdat_discover;
    
    // [HalpWdatExecuteActionBeforeInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2c9fc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf1c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50d8f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf0b4, 0x1fe000 bytes
    //
    _h04(sdk::unknown_ptr) wdat_execute_action_before_initialize;
    
    // [HalpWdatInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2cb60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50da60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf220, 0x1fe000 bytes
    //
    _h05(sdk::unknown_ptr) wdat_initialize;
    
    // [HalpWdatInitializeWdat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2cbd4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf3a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50dad8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf298, 0x1fe000 bytes
    //
    _h06(sdk::unknown_ptr) wdat_initialize_wdat;
    
    // [HalpWdatInitializeWdrt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2cc68, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50db70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf330, 0x1fe000 bytes
    //
    _h07(sdk::unknown_ptr) wdat_initialize_wdrt;
    
    // [HalpWdatProcessWdatInternalData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2cd68, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50dc68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf428, 0x1fe000 bytes
    //
    _h08(sdk::unknown_ptr) wdat_process_wdat_internal_data;
    
    // [HalpWdatProcessWdrtInternalData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2cdbc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf594, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50dcc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf484, 0x1fe000 bytes
    //
    _h09(sdk::unknown_ptr) wdat_process_wdrt_internal_data;
    
    // [HalpWdatStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2ce80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4cf650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50dd90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4cf540, 0x1fe000 bytes
    //
    _h10(sdk::unknown_ptr) wdat_stop;
    
    // [HalpWhackICHUsbSmi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2d658, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d18c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50fb54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d17b4, 0x1fe000 bytes
    //
    _h11(sdk::unknown_ptr) whack_ich_usb_smi;
    
    // [HalpWheaCpuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b6a0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49cf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cd8, 0x1fe000 bytes
    //
    _h12(sdk::unknown_ptr) whea_cpuid;
    
    // [HalpWheaInitDiscard]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6a9b8, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa5c23c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4f698, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5c0dc, 0x1fe000 bytes
    //
    _h13(sdk::unknown_ptr) whea_init_discard;
    
    // [HalpWheaInitProcessorGenericSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38800, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d1fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x510590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1ec0, 0x1fe000 bytes
    //
    _h14(sdk::unknown_ptr) whea_init_processor_generic_section;
    
    // [HalpWheaInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x617b0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x99c0a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c810, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b120, 0x1fe000 bytes
    //
    _h15(sdk::unknown_ptr) whea_init_system;
    
    // [HalpWheaMappingLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fc58, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fcb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b58, 0x1fe000 bytes
    //
    _h16(sdk::unknown_ptr) whea_mapping_lock;
    
    // [HalpWheaMappingMceLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fc60, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fca8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b50, 0x1fe000 bytes
    //
    _h17(sdk::unknown_ptr) whea_mapping_mce_lock;
    
    // [HalpWheaMappingMceReservation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4dae8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fcc8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b70, 0x1fe000 bytes
    //
    _h18(sdk::unknown_ptr) whea_mapping_mce_reservation;
    
    // [HalpWheaMappingNmiLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fc50, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fcd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b78, 0x1fe000 bytes
    //
    _h19(sdk::unknown_ptr) whea_mapping_nmi_lock;
    
    // [HalpWheaMappingNmiReservation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4daf8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fcb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b60, 0x1fe000 bytes
    //
    _h20(sdk::unknown_ptr) whea_mapping_nmi_reservation;
    
    // [HalpWheaMappingReservation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4daf0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48b88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5fcc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48b68, 0x1fe000 bytes
    //
    _h21(sdk::unknown_ptr) whea_mapping_reservation;
    
    // [HalpWheaNativeCpuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17f70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3610c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3624f0, 0x1fe000 bytes
    //
    _h22(sdk::unknown_ptr) whea_native_cpuid;
    
    // [HalpWheaNativeReadMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5870, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362540, 0x1fe000 bytes
    //
    _h23(sdk::unknown_ptr) whea_native_read_msr;
    
    // [HalpWheaNativeWriteMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4360, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362560, 0x1fe000 bytes
    //
    _h24(sdk::unknown_ptr) whea_native_write_msr;
    
    // [HalpWheaReadMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b6b0, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49d00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49ce0, 0x1fe000 bytes
    //
    _h25(sdk::unknown_ptr) whea_read_msr;
    
    // [HalpWheaWriteMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b6a8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc49cf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc619c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc49cd0, 0x1fe000 bytes
    //
    _h26(sdk::unknown_ptr) whea_write_msr;
    
    // [HalpWriteCmosTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3af84, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4c693c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5043ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4c682c, 0x1fe000 bytes
    //
    _h27(sdk::unknown_ptr) write_cmos_time;
    
    // [HalpWritePCIConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xd94c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x399cdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c1ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b19c, 0x1fe000 bytes
    //
    _h28(sdk::unknown_ptr) write_pci_config;
    
    // [HalpWriteRtcStdPCAT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2d8c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ebf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0680, 0x1fe000 bytes
    //
    _h29(sdk::unknown_ptr) write_rtc_std_pcat;
    
    // [HalpWriteStdCmosData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x2d970, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50ecc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0730, 0x1fe000 bytes
    //
    _h30(sdk::unknown_ptr) write_std_cmos_data;
    
    // [HalpWriteWheaPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x388b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d2090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5105f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d1f80, 0x1fe000 bytes
    //
    _h31(sdk::unknown_ptr) write_whea_physical_memory;
};
#include "magic/api.end.hpp"
