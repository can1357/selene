#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mdl_t.hpp"
#include "system_size_t.hpp"
#include "copy_address_t.hpp"
#include "../nt/read_list_t.hpp"
#include "../nt/file_object_t.hpp"
#include "../nt/mmflush_type_t.hpp"
#include "../nt/driver_object_t.hpp"
#include "../nt/lock_operation_t.hpp"
#include "../nt/section_inherit_t.hpp"
#include "physical_address_list_t.hpp"
#include "../nt/object_attributes_t.hpp"
#include "mdl_page_contents_state_t.hpp"
#include "../nt/memory_caching_type_t.hpp"
#include "../nt/file_segment_element_t.hpp"
#include "../nt/physical_memory_range_t.hpp"
#include "../nt/section_object_pointers_t.hpp"

namespace nt { struct banked_section_routine_t;        }
namespace nt { struct kprocess_t;                      }
namespace nt { struct prefetch_virtual_address_list_t; }

#include "magic/api.start.hpp"
namespace mm
{
    // [MmAdjustSecuredVirtualMemorySize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa2239c, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) adjust_secured_virtual_memory_size;
    
    // [MmAllocateContiguousMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3d03e0, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) allocate_contiguous_memory_ex;
    
    // [MmAllocateSpecialPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ecbd4, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) allocate_special_pool;
    
    // [MmApplyVerifierToRunningImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad3f80, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) apply_verifier_to_running_image;
    
    // [MmContainingPageForReservedMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1e5230, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) containing_page_for_reserved_mapping;
    
    // [MmCreateKernelShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x62eec8, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) create_kernel_shadow_stack;
    
    // [MmCreateSystemSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x7b554, 0x32828 bytes
    //
    _m06(sdk::unknown_ptr) create_system_section;
    
    // [MmDecodeExportSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x303e5c, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) decode_export_section;
    
    // [MmDeleteKernelShadowStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x62f360, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) delete_kernel_shadow_stack;
    
    // [MmDeleteKernelStackEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x24bb60, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) delete_kernel_stack_ex;
    
    // [MmDisableControlFlowGuardXfgOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc12f10, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) disable_control_flow_guard_xfg_override;
    
    // [MmDynamicPfn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab640, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) dynamic_pfn;
    
    // [MmEnableControlFlowGuardXfg]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc12f0c, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) enable_control_flow_guard_xfg;
    
    // [MmEnableModifiedWriteOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1e6edc, 0x32828 bytes
    //
    _m13(sdk::unknown_ptr) enable_modified_write_of_section;
    
    // [MmEnableOrDisableVerifierForDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEVRFY:0xad403c, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) enable_or_disable_verifier_for_driver;
    
    // [MmEncodeExportSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x303fe4, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) encode_export_section;
    
    // [MmFillEtwHugeIoSpaceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x602250, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) fill_etw_huge_io_space_information;
    
    // [MmFlushAllFilesystemPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1e7054, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) flush_all_filesystem_pages;
    
    // [MmFlushAllPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x125060, 0x32828 bytes
    //
    _m18(sdk::unknown_ptr) flush_all_pages;
    
    // [MmFreeSpecialPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ed1d8, 0x32828 bytes
    //
    _m19(sdk::unknown_ptr) free_special_pool;
    
    // [MmGetAvailablePagesForPartitionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x367574, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) get_available_pages_for_partition_object;
    
    // [MmGetImageSectionBasedAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bfc10, 0x1fe000 bytes
    //
    _m21(sdk::unknown_ptr) get_image_section_based_address;
    
    // [MmImageSupportsAlternateMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) image_supports_alternate_machine;
    
    // [MmInSwapProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xbdf54, 0x32828 bytes
    //
    _m23(sdk::unknown_ptr) in_swap_process;
    
    // [MmInitNucleus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x78ce58, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) init_nucleus;
    
    // [MmIsExecutivePagingDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x245310, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) is_executive_paging_disabled;
    
    // [MmIsExtentDangling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x65f75c, 0x32828 bytes
    //
    _m26(sdk::unknown_ptr) is_extent_dangling;
    
    // [MmIsFileSectionActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37f920, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) is_file_section_active;
    
    // [MmIsMdlPageDanging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x60d9f0, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) is_mdl_page_danging;
    
    // [MmIsVerifierApplicableToImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x6069cc, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) is_verifier_applicable_to_image;
    
    // [MmLockPhysicalPagesByVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa1d804, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) lock_physical_pages_by_va;
    
    // [MmLockRegistryRecoverySections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x6052a8, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) lock_registry_recovery_sections;
    
    // [MmManagePartitionCharges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa35acc, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) manage_partition_charges;
    
    // [MmManagePartitionSetMemoryThresholds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x645478, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) manage_partition_set_memory_thresholds;
    
    // [MmManagePartitionUpdateAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa36240, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) manage_partition_update_attributes;
    
    // [MmMapProtectedKernelPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa3486c, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) map_protected_kernel_page;
    
    // [MmPageToNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x602210, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) page_to_node;
    
    // [MmPartitionObjectDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x65e704, 0x32828 bytes
    //
    _m37(sdk::unknown_ptr) partition_object_delete;
    
    // [MmPartitionObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x307c70, 0x32828 bytes
    //
    _m38(sdk::unknown_ptr) partition_object_type;
    
    // [MmPrepareImagePagesForHotPatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa2c7a4, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) prepare_image_pages_for_hot_patch;
    
    // [MmProtectSystemCacheView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1e7f14, 0x32828 bytes
    //
    _m40(sdk::unknown_ptr) protect_system_cache_view;
    
    // [MmQueryBadAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa1ff28, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) query_bad_addresses;
    
    // [MmQueryPfnList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6b4730, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) query_pfn_list;
    
    // [MmQuerySpecialPoolBlockSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ed764, 0x32828 bytes
    //
    _m43(sdk::unknown_ptr) query_special_pool_block_size;
    
    // [MmQuerySpecialPoolBlockType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ed78c, 0x32828 bytes
    //
    _m44(sdk::unknown_ptr) query_special_pool_block_type;
    
    // [MmQueryTransitionPagesMadeColdCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x33e3f8, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) query_transition_pages_made_cold_count;
    
    // [MmReapplyBootPatchImports]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5f47c, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) reapply_boot_patch_imports;
    
    // [MmRegisterEtwProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb41a08, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) register_etw_provider;
    
    // [MmRegisterHotPatches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5ecc4, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) register_hot_patches;
    
    // [MmReplaceImportEntriesForVerifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa1d75c, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) replace_import_entries_for_verifier;
    
    // [MmSetPfnListPriorities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x66930, 0x32828 bytes
    //
    _m50(sdk::unknown_ptr) set_pfn_list_priorities;
    
    // [MmSetSessionLocaleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x5399fc, 0x32828 bytes
    //
    _m51(sdk::unknown_ptr) set_session_locale_id;
    
    // [MmSlabTypeToMiSlabType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x46ec8, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) slab_type_to_mi_slab_type;
    
    // [MmStoreAsyncWriteComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x11872c, 0x32828 bytes
    //
    _m53(sdk::unknown_ptr) store_async_write_complete;
    
    // [MmStoreReleaseResidentAvailableForRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x6469e8, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) store_release_resident_available_for_read;
    
    // [MmTrimPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x65ed50, 0x32828 bytes
    //
    _m55(sdk::unknown_ptr) trim_paged_pool;
    
    // [MmUnlockLoadedModuleListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x7bc20, 0x32828 bytes
    //
    _m56(sdk::unknown_ptr) unlock_loaded_module_list_exclusive;
    
    // [MmUnlockPhysicalPagesByVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa1d910, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) unlock_physical_pages_by_va;
    
    // [MmUnmapProtectedKernelPageRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa34918, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) unmap_protected_kernel_page_range;
    
    // [MmUpdateHiberMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGELK:0x3d0258, 0x32828 bytes
    //
    _m59(sdk::unknown_ptr) update_hiber_mappings;
    
    // [MmUpdateSlabRangeType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb85e9c, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) update_slab_range_type;
    
    // [MmUpdateUserShadowStackValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x6304fc, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) update_user_shadow_stack_value;
    
    // [MmWriteableSharedUserData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1c008, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) writeable_shared_user_data;
    
    // [MmChangeKernelCfgBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d4828, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8d3018, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) change_kernel_cfg_bitmap;
    
    // [MmCombineIdenticalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70a9ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x712380, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) combine_identical_pages;
    
    // [MmGetImageBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004
    // ntoskrnl.exe PAGE:0x50942c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6630bc, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) get_image_base;
    
    // [MmGetImageInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b5644, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6e9c, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) get_image_information;
    
    // [MmIsSessionExecutionValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x204220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31f380, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) is_session_execution_valid;
    
    // [MmNewProcessInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f23e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6538, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) new_process_initialized;
    
    // [MmPerProcessorZeroCalibrationBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2a1e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2a0b8, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) per_processor_zero_calibration_bytes;
    
    // [MmPostHotPatchDbgModuleMessages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8cb8e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ca0c0, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) post_hot_patch_dbg_module_messages;
    
    // [MmRegisterHotPatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa90e5c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa900dc, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) register_hot_patch;
    
    // [MmRemoveImportOptimizationForDriverVerifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53e71c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53e52c, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) remove_import_optimization_for_driver_verifier;
    
    // [MmRemoveImportOptimizationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53ea00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53e810, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) remove_import_optimization_worker;
    
    // [MmUpdateSlabRangeProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa914c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa90748, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) update_slab_range_protection;
    
    // [MmAcquireSessionPoolRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51620c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709634, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bca3c, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) acquire_session_pool_rundown;
    
    // [MmAddUnloadedDriverInformationToCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5328d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x619f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5326e0, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) add_unloaded_driver_information_to_crash_dump;
    
    // [MmAllocateIndependentPagesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x742d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811abc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74a96c, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) allocate_independent_pages_ex;
    
    // [MmAllocateMappingAddressEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x666140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811930, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8f20, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) allocate_mapping_address_ex;
    
    // [MmAllocateMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1e3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) allocate_memory_ranges;
    
    // [MmAllocateNonChargedSecurePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52e4fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x640a3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52e30c, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) allocate_non_charged_secure_pages;
    
    // [MmAllocatePoolMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x340850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2722cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b1588, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) allocate_pool_memory;
    
    // [MmAllocateSecureKernelPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54d5e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x640d4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x54d404, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) allocate_secure_kernel_pages;
    
    // [MmAllocateSecurePoolMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53efac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x62b82c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x53edbc, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) allocate_secure_pool_memory;
    
    // [MmAllocateUserStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eb3f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x770208, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64d12c, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) allocate_user_stack;
    
    // [MmAllocateVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eb900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x770330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64d630, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) allocate_virtual_memory;
    
    // [MmAreBaseSystemImagesWriteProtected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2604c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31c960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3480, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) are_base_system_images_write_protected;
    
    // [MmBuildLargePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d45a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa3681c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d2d94, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) build_large_pages;
    
    // [MmCheckProcessShadow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x269a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b150, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) check_process_shadow;
    
    // [MmConfigureGraphicsPtes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) configure_graphics_ptes;
    
    // [MmCreatePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c5554, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dff04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6424, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) create_partition;
    
    // [MmEnableVerifierForDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7048bc, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3bb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2bb4, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) enable_verifier_for_driver;
    
    // [MmFillEtwNodeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5410a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469b06, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x541bf4, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) fill_etw_node_information;
    
    // [MmFlushAllPagesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37eabc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x625bdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f4c8, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) flush_all_pages_ex;
    
    // [MmForceSectionClosedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x525260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6104d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x525070, 0x1fe000 bytes
    //
    _m94(sdk::function<uint8_t(struct nt::section_object_pointers_t*, uint32_t)>*) force_section_closed_ex;
    
    // [MmFreeMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1e5d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) free_memory_ranges;
    
    // [MmFreeNonChargedSecurePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52e6c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x641258, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52e4d4, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) free_non_charged_secure_pages;
    
    // [MmFreePoolMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21fe44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31f364, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ac0ac, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) free_pool_memory;
    
    // [MmFreeSecureKernelPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54d914, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x64144c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x54d734, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) free_secure_kernel_pages;
    
    // [MmFreeSecurePoolMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53f0f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x62b998, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x53ef04, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) free_secure_pool_memory;
    
    // [MmFreeSystemCacheReserveView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8c5320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa20a10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c3ae0, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) free_system_cache_reserve_view;
    
    // [MmFreeVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e19f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6af570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62dcd0, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) free_virtual_memory;
    
    // [MmGetCacheAttributeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52c210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x608f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52c020, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) get_cache_attribute_ex;
    
    // [MmGetControlAreaPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x334300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x316344, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27cb20, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) get_control_area_partition;
    
    // [MmGetCurrentProcessorColor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x244ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2efad0, 0x1fe000 bytes
    //
    _n04(sdk::function<uint32_t()>*) get_current_processor_color;
    
    // [MmGetEnclaveModuleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x544be8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x632ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x545734, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) get_enclave_module_list;
    
    // [MmGetImageFileSignatureInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25ccc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d3c0, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) get_image_file_signature_information;
    
    // [MmGetImageRetpolineCodePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7af730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa24b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b72c0, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) get_image_retpoline_code_page;
    
    // [MmGetLowestPhysicalPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27150c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38592c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32309c, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) get_lowest_physical_page;
    
    // [MmGetNodeFastLargePageCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5411b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x602324, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x541d00, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) get_node_fast_large_page_counts;
    
    // [MmGetNumberOfPhysicalPagesForPartitionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x79c208, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a3880, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) get_number_of_physical_pages_for_partition_object;
    
    // [MmGetPhysicalMemoryRangesEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x752aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8466e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75a360, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) get_physical_memory_ranges_ex2;
    
    // [MmGetProcessPartitionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29d144, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6c4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203f14, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) get_process_partition_id;
    
    // [MmGetSessionGlobalVA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f7fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e2dbc, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) get_session_global_va;
    
    // [MmGetSessionMappedViewInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65bd48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c17c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8bff90, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) get_session_mapped_view_information;
    
    // [MmHasImageBeenImportOptimized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x756958, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67b0b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e3a8, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) has_image_been_import_optimized;
    
    // [MmIsAddressValidEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33fab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dd320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b2510, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) is_address_valid_ex;
    
    // [MmIsSpecialPoolAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfb49c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5316e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5314f0, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) is_special_pool_address;
    
    // [MmKernelVerifierEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52a6a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469be8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52a4b8, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) kernel_verifier_enabled;
    
    // [MmLoadSystemImageEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x73bfcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7850ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743c0c, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) load_system_image_ex;
    
    // [MmLockPreChargedPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x75aa40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa20aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x762490, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) lock_pre_charged_paged_pool;
    
    // [MmManageFaultRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x399008, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b5744, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39a4c8, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) manage_fault_range;
    
    // [MmManagePartitionCombineMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d871c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa35cbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d6f28, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) manage_partition_combine_memory;
    
    // [MmManagePartitionCreateLargePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d8788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa35d28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d6f94, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) manage_partition_create_large_pages;
    
    // [MmManagePartitionGetMemoryEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b383c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bdd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb3cc, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) manage_partition_get_memory_events;
    
    // [MmManagePartitionInitialAddMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d8878, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa35e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d7084, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) manage_partition_initial_add_memory;
    
    // [MmManagePartitionMemoryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x707cfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78a754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66208c, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) manage_partition_memory_information;
    
    // [MmManagePartitionMoveMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d8994, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa35f0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d71a0, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) manage_partition_move_memory;
    
    // [MmManagePartitionNodeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d8adc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa3612c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d72e8, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) manage_partition_node_information;
    
    // [MmMapHotPatchTablePage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5396a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x62cfbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5394b0, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) map_hot_patch_table_page;
    
    // [MmMapMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5317a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x618cb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5315b0, 0x1fe000 bytes
    //
    _n30(sdk::function<int32_t(struct nt::mdl_t*, uint32_t, sdk::function<void(void*, void*)>*, void*)>*) map_mdl;
    
    // [MmMapMemoryDumpMdlEx2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37ffb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61a2b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x380da0, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) map_memory_dump_mdl_ex2;
    
    // [MmMapViewOfSectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x354190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3077b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1530, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) map_view_of_section_ex;
    
    // [MmMarkHypercallPageRetpolineBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa910ec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8576c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa9036c, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) mark_hypercall_page_retpoline_bit;
    
    // [MmOnlySystemCacheViewsPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2a48a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30e444, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d0098, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) only_system_cache_views_present;
    
    // [MmOutPageKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2835f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fef74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32a490, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) out_page_kernel_stack;
    
    // [MmProbeAndLockPagesPrivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2707c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x319f94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321fb0, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) probe_and_lock_pages_private;
    
    // [MmProtectDriverSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) protect_driver_section;
    
    // [MmProtectPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x221014, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a93c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dfb44, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) protect_pool;
    
    // [MmProtectVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dcf30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ad800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62ca00, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) protect_virtual_memory;
    
    // [MmQueryMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) query_memory_ranges;
    
    // [MmSecureVirtualMemoryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x646360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6afbc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba330, 0x1fe000 bytes
    //
    _n41(sdk::function<void*(void*, uint64_t, uint32_t, uint32_t)>*) secure_virtual_memory_ex;
    
    // [MmSelectVsmEnclaveByAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d0490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2ef9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cf334, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) select_vsm_enclave_by_address;
    
    // [MmSetAddressRangeModifiedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2b46c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2a9330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bbfb0, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) set_address_range_modified_ex;
    
    // [MmSetGraphicsPtes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8c3db0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1ec00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c2570, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) set_graphics_ptes;
    
    // [MmSetHardFaultBehavior]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26f8d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3356f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320fe8, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) set_hard_fault_behavior;
    
    // [MmSetPfnListInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x36e858, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36fbd8, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) set_pfn_list_info;
    
    // [MmSpecialPurposeMemoryPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2a228, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc12f08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a1c8, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) special_purpose_memory_pages;
    
    // [MmSpecialPurposeMemoryStartPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc2a220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc12f00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a1c0, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) special_purpose_memory_start_page;
    
    // [MmSpecialPurposeMemoryStartPageValueSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11fe8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cddc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12048, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) special_purpose_memory_start_page_value_size;
    
    // [MmStoreCheckPagefiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x799010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x846644, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79eb60, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) store_check_pagefiles;
    
    // [MmStoreFlushAllHintedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6662ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67ade8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x655fec, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) store_flush_all_hinted_pages;
    
    // [MmStoreLogCorruptionFixed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x54ed10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6466c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x54eb30, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) store_log_corruption_fixed;
    
    // [MmSynchronizeAddressPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6609f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a8470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x786fd8, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) synchronize_address_policy;
    
    // [MmUnlockPreChargedPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x757760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa20b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75f2f0, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) unlock_pre_charged_paged_pool;
    
    // [MmUpdateMdlTrackerForMdlSwitch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52b588, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x607d58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52b398, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) update_mdl_tracker_for_mdl_switch;
    
    // [MmWriteSystemImageTracepoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5398e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x62d2ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5396f8, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) write_system_image_tracepoint;
    
    // [MmAccessFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x293d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ee780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2539b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20c560, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) access_fault;
    
    // [MmAcquireLoadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x422b78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eb5b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x785890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ef2f0, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) acquire_load_lock;
    
    // [MmAddPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65cfe4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c3220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1d260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c19e0, 0x1fe000 bytes
    //
    _n59(sdk::function<int32_t(int64_t*, int64_t*)>*) add_physical_memory;
    
    // [MmAddPrivateDataToCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3de3cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x532680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x619c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x532490, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) add_private_data_to_crash_dump;
    
    // [MmAddRangeToCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e8abc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5327c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x619d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5325d8, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) add_range_to_crash_dump;
    
    // [MmAddVerifierSpecialThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d0b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c3390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1d540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c1b50, 0x1fe000 bytes
    //
    _n62(sdk::function<int32_t(uint64_t, void*, uint32_t)>*) add_verifier_special_thunks;
    
    // [MmAddVerifierThunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d1b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c34b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1d650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c1c70, 0x1fe000 bytes
    //
    _n63(sdk::function<int32_t(void*, uint32_t)>*) add_verifier_thunks;
    
    // [MmAdjustWorkingSetSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e3da4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c3e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x606e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af400, 0x1fe000 bytes
    //
    _n64(sdk::function<int32_t(uint64_t, uint64_t, uint32_t, uint8_t)>*) adjust_working_set_size;
    
    // [MmAdjustWorkingSetSizeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x789b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x35c784, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3031c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30e6e4, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) adjust_working_set_size_ex;
    
    // [MmAdvanceMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e433c, 0x32828 bytes
    // ntoskrnl.exe .text:0x52b2c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x607a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52b0d0, 0x1fe000 bytes
    //
    _n66(sdk::function<int32_t(struct nt::mdl_t*, uint32_t)>*) advance_mdl;
    
    // [MmAllocateContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e48f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x52b8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x608350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52b6e0, 0x1fe000 bytes
    //
    _n67(sdk::function<void*(uint64_t, int64_t)>*) allocate_contiguous_memory;
    
    // [MmAllocateContiguousMemorySpecifyCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f800, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6083c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb260, 0x1fe000 bytes
    //
    _n68(sdk::function<void*(uint64_t, int64_t, int64_t, int64_t, enum nt::memory_caching_type_t)>*) allocate_contiguous_memory_specify_cache;
    
    // [MmAllocateContiguousMemorySpecifyCacheNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f820, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6083f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb290, 0x1fe000 bytes
    //
    _n69(sdk::function<void*(uint64_t, int64_t, int64_t, int64_t, enum nt::memory_caching_type_t, uint32_t)>*) allocate_contiguous_memory_specify_cache_node;
    
    // [MmAllocateContiguousNodeMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7bdd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35df40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30a040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f8f30, 0x1fe000 bytes
    //
    _n70(sdk::function<void*(uint64_t, int64_t, int64_t, int64_t, uint32_t, uint32_t)>*) allocate_contiguous_node_memory;
    
    // [MmAllocateDumpHibernateResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538a90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77210c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80b6fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779b0c, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) allocate_dump_hibernate_resources;
    
    // [MmAllocateIndependentPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46e0d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74a950, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) allocate_independent_pages;
    
    // [MmAllocateIsrStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x551054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77c7c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x831f8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7814d4, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) allocate_isr_stack;
    
    // [MmAllocateMappingAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51d1ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x666120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x811910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8f00, 0x1fe000 bytes
    //
    _n74(sdk::function<void*(uint64_t, uint32_t)>*) allocate_mapping_address;
    
    // [MmAllocateMdlForIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e55ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x52c0c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x608db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52bed0, 0x1fe000 bytes
    //
    _n75(sdk::function<int32_t(struct mm::physical_address_list_t*, uint64_t, struct nt::mdl_t**)>*) allocate_mdl_for_io_space;
    
    // [MmAllocateNodePagesForMdlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ee40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c94c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a4a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca3b0, 0x1fe000 bytes
    //
    _n76(sdk::function<struct nt::mdl_t*(int64_t, int64_t, int64_t, uint64_t, enum nt::memory_caching_type_t, uint32_t, uint32_t)>*) allocate_node_pages_for_mdl_ex;
    
    // [MmAllocateNonCachedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d2b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c35f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1da20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c1db0, 0x1fe000 bytes
    //
    _n77(sdk::function<void*(uint64_t)>*) allocate_non_cached_memory;
    
    // [MmAllocatePagesForMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x147cd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a1ae0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3de970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a2fa0, 0x1fe000 bytes
    //
    _n78(sdk::function<struct nt::mdl_t*(int64_t, int64_t, int64_t, uint64_t)>*) allocate_pages_for_mdl;
    
    // [MmAllocatePagesForMdlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7eddc, 0x32828 bytes
    // ntoskrnl.exe .text:0x229fe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33ce60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3425e0, 0x1fe000 bytes
    //
    _n79(sdk::function<struct nt::mdl_t*(int64_t, int64_t, int64_t, uint64_t, enum nt::memory_caching_type_t, uint32_t)>*) allocate_pages_for_mdl_ex;
    
    // [MmAllocatePartitionNodePagesForMdlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ee70, 0x32828 bytes
    // ntoskrnl.exe .text:0x22a0c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33cec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3426c0, 0x1fe000 bytes
    //
    _n80(sdk::function<struct nt::mdl_t*(int64_t, int64_t, int64_t, uint64_t, enum nt::memory_caching_type_t, uint32_t, uint32_t, void*)>*) allocate_partition_node_pages_for_mdl_ex;
    
    // [MmAreMdlPagesCached]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e940, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ff60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x381d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fd980, 0x1fe000 bytes
    //
    _n81(sdk::function<uint32_t(struct nt::mdl_t*)>*) are_mdl_pages_cached;
    
    // [MmAreMdlPagesLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7049c0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad4198, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2cd0, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) are_mdl_pages_locked;
    
    // [MmAssignProcessToJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87b4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6819e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77b28c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671780, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) assign_process_to_job;
    
    // [MmAttachSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x83fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x21efd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3335e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35da50, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) attach_session;
    
    // [MmBackSystemImageWithPagefile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545f1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x763f8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81341c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76b22c, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) back_system_image_with_pagefile;
    
    // [MmBadPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2f0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb538, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db60, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb538, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) bad_pointer;
    
    // [MmBuildMdlForNonPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb05d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x293860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3447c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23a430, 0x1fe000 bytes
    //
    _n87(sdk::function<void(struct nt::mdl_t*)>*) build_mdl_for_non_paged_pool;
    
    // [MmCallDllInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x534688, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83abf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792a30, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) call_dll_initialize;
    
    // [MmCanFileBeTruncated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x876c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a6ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x314c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cfd90, 0x1fe000 bytes
    //
    _n89(sdk::function<uint8_t(struct nt::section_object_pointers_t*, int64_t*)>*) can_file_be_truncated;
    
    // [MmCanThreadFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x43fd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f52c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3907e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2360b8, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) can_thread_fault;
    
    // [MmChangeImageProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4228c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eb210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cc8c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eef50, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) change_image_protection;
    
    // [MmChangeSectionBackingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcbf30, 0x32828 bytes
    // ntoskrnl.exe .text:0x262e14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370e3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x313404, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) change_section_backing_file;
    
    // [MmChargeResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x761ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x27b6c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x327d44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c3ca0, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) charge_resources;
    
    // [MmCheckCachedPageStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20b30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3164a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x239f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x288a80, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) check_cached_page_states;
    
    // [MmCheckForSafeExecution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6600e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8cde20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2caa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cc600, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) check_for_safe_execution;
    
    // [MmCheckImageMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46c26c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66ee9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bd1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2018, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) check_image_mapping;
    
    // [MmCheckMapIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704cd4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3ea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad436c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2ea8, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) check_map_io_space;
    
    // [MmCheckMdlPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704bc4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3d9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad4264, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2d9c, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) check_mdl_pages;
    
    // [MmCleanProcessAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f17e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e4c9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f4578, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6334c8, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) clean_process_address_space;
    
    // [MmCommitSessionMappedView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475d2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6456b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x778470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1ff0, 0x1fe000 bytes
    //
    _o00(sdk::function<int32_t(void*, uint64_t)>*) commit_session_mapped_view;
    
    // [MmCompatibleProtectionMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26d5e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x11c00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x162d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x113c0, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) compatible_protection_mask;
    
    // [MmConfigurePrefetchSeekThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3e6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed824, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) configure_prefetch_seek_threshold;
    
    // [MmCopyMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e6458, 0x32828 bytes
    // ntoskrnl.exe .text:0x2529d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27ebf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3028a0, 0x1fe000 bytes
    //
    _o03(sdk::function<int32_t(void*, struct mm::copy_address_t, uint64_t, uint32_t, uint64_t*)>*) copy_memory;
    
    // [MmCopyToCachedPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x44b80, 0x32828 bytes
    // ntoskrnl.exe .text:0x334440, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2384b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27cc60, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) copy_to_cached_page;
    
    // [MmCopyVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x464220, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c96e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61fb20, 0x1fe000 bytes
    //
    _o05(sdk::function<int32_t(struct nt::kprocess_t*, const void*, struct nt::kprocess_t*, void*, uint64_t, char, uint64_t*)>*) copy_virtual_memory;
    
    // [MmCreateCacheManagerSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40ff90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658ac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b65a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc398, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) create_cache_manager_section;
    
    // [MmCreateKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x968c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b8e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x24d8c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x354980, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) create_kernel_stack;
    
    // [MmCreateMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b65c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2aaac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x308c10, 0x1fe000 bytes
    //
    _o08(sdk::function<struct nt::mdl_t*(struct nt::mdl_t*, void*, uint64_t)>*) create_mdl;
    
    // [MmCreateMirror]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65da8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c4210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1f250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c29d0, 0x1fe000 bytes
    //
    _o09(sdk::function<int32_t()>*) create_mirror;
    
    // [MmCreatePeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f0bc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bc718, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f9a38, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) create_peb;
    
    // [MmCreateProcessAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46dadc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68c998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73d8e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f0868, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) create_process_address_space;
    
    // [MmCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x402a00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6163e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x642940, 0x1fe000 bytes
    //
    _o12(sdk::function<int32_t(void**, uint32_t, struct nt::object_attributes_t*, int64_t*, uint32_t, uint32_t, void*, struct nt::file_object_t*)>*) create_section;
    
    // [MmCreateSectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40fe74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6161a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6108, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6429c4, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) create_section_ex;
    
    // [MmCreateShadowMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x660774, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77cf38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8325c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x781c48, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) create_shadow_mapping;
    
    // [MmCreateSpecialImageSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4ef4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663ed4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x763684, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f09c, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) create_special_image_section;
    
    // [MmCreateTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4585ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69eca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x688160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x638dc4, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) create_teb;
    
    // [MmDbgCopyMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b184, 0x32828 bytes
    // ntoskrnl.exe .text:0x540c8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dd11c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x540a9c, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) dbg_copy_memory;
    
    // [MmDbgMarkPfnModifiedWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146d50, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c422c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dd7d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4f9c, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) dbg_mark_pfn_modified_worker;
    
    // [MmDeleteKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x96c90, 0x32828 bytes
    // ntoskrnl.exe .text:0x320070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2925b0, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) delete_kernel_stack;
    
    // [MmDeleteProcessAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f941c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70811c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73d6e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6624ac, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) delete_process_address_space;
    
    // [MmDeleteProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e2d78, 0x32828 bytes
    // ntoskrnl.exe .text:0x5281c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6025ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x527fd0, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) delete_processor;
    
    // [MmDeleteShadowMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6608e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ce180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2cd60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cd024, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) delete_shadow_mapping;
    
    // [MmDeleteTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x483190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x635cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7728cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63a198, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) delete_teb;
    
    // [MmDetachSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8398, 0x32828 bytes
    // ntoskrnl.exe .text:0x21ef30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x333540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d9b0, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) detach_session;
    
    // [MmDeterminePoolType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfb46c, 0x32828 bytes
    // ntoskrnl.exe .text:0x270a7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x62b974, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322238, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) determine_pool_type;
    
    // [MmDisableModifiedWriteOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6c79c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25f1e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36f360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f6e0, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) disable_modified_write_of_section;
    
    // [MmDiscardDriverSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a87ec, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa91990, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5fa10, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa90c10, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) discard_driver_section;
    
    // [MmDoesFileHaveUserWritableReferences]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb96d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2480e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350420, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3370, 0x1fe000 bytes
    //
    _o28(sdk::function<uint32_t(struct nt::section_object_pointers_t*)>*) does_file_have_user_writable_references;
    
    // [MmDuplicateMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d049c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d7ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa9841c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c6cc, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) duplicate_memory;
    
    // [MmEmptyAllWorkingSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1eb4a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5369f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61f0d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x536804, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) empty_all_working_sets;
    
    // [MmEnablePeriodicAccessClearing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c83dc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d4f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74164, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c508, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) enable_periodic_access_clearing;
    
    // [MmEnableProcessSvm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e22a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x526e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x604204, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x526c90, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) enable_process_svm;
    
    // [MmEnforceWorkingSetLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x950e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27ca24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x331f08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d8388, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) enforce_working_set_limit;
    
    // [MmEnoughMemoryForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x69ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34ee98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x232028, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) enough_memory_for_write;
    
    // [MmEnumerateAddressSpaceAndReferenceImages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x461e80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6edca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76b950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x635350, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) enumerate_address_space_and_reference_images;
    
    // [MmEnumerateBadPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1fecc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x55e9ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1fd34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55e78c, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) enumerate_bad_pages;
    
    // [MmEnumerateSystemImages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515db4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774d70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780250, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) enumerate_system_images;
    
    // [MmExtendSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40e7d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ec080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73fcec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x641734, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) extend_section;
    
    // [MmFlushImageSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7fa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2574c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3605b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306e30, 0x1fe000 bytes
    //
    _o39(sdk::function<uint8_t(struct nt::section_object_pointers_t*, enum nt::mmflush_type_t)>*) flush_image_section;
    
    // [MmFlushSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x140ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x34c604, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x232590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22f794, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) flush_section;
    
    // [MmFlushVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f9254, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6690b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c79f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dc334, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) flush_virtual_memory;
    
    // [MmForceSectionClosed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8088, 0x32828 bytes
    // ntoskrnl.exe .text:0x2575f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3606d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306f60, 0x1fe000 bytes
    //
    _o42(sdk::function<uint8_t(struct nt::section_object_pointers_t*, uint8_t)>*) force_section_closed;
    
    // [MmFreeAccessPfnBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x724d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c0d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30681c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2df4, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) free_access_pfn_buffer;
    
    // [MmFreeBootDriverInitializationCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x551880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b878, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x859140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79ae58, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) free_boot_driver_initialization_code;
    
    // [MmFreeBootRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550f60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77c6e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836edc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7813f8, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) free_boot_registry;
    
    // [MmFreeContiguousMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1ff4, 0x32828 bytes
    // ntoskrnl.exe .text:0x35cf60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x309d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f9fb0, 0x1fe000 bytes
    //
    _o46(sdk::function<void(void*)>*) free_contiguous_memory;
    
    // [MmFreeContiguousMemorySpecifyCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111030, 0x32828 bytes
    // ntoskrnl.exe .text:0x368bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x309d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369f70, 0x1fe000 bytes
    //
    _o47(sdk::function<void(void*, uint64_t, enum nt::memory_caching_type_t)>*) free_contiguous_memory_specify_cache;
    
    // [MmFreeIndependentPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e250c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74c690, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) free_independent_pages;
    
    // [MmFreeIsrStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66036c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ce138, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2cd08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cc918, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) free_isr_stack;
    
    // [MmFreeLoaderBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x791478, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa452e4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb41394, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3f6cc, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) free_loader_block;
    
    // [MmFreeMappingAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51d114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x751910, 0x1fe000 bytes
    //
    _o51(sdk::function<void(void*, uint32_t)>*) free_mapping_address;
    
    // [MmFreeNonCachedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d438, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c37e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1dc10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c1fa0, 0x1fe000 bytes
    //
    _o52(sdk::function<void(void*, uint64_t)>*) free_non_cached_memory;
    
    // [MmFreePagesFromMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd7a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x235190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x348f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31fc50, 0x1fe000 bytes
    //
    _o53(sdk::function<void(struct nt::mdl_t*)>*) free_pages_from_mdl;
    
    // [MmFreePagesFromMdlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e5c48, 0x32828 bytes
    // ntoskrnl.exe .text:0x37de10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x348f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f190, 0x1fe000 bytes
    //
    _o54(sdk::function<void(struct nt::mdl_t*, uint32_t)>*) free_pages_from_mdl_ex;
    
    // [MmGetAvailablePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8bf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x29d124, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6218, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203f24, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) get_available_pages;
    
    // [MmGetAvailablePagesBelowPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5444, 0x32828 bytes
    // ntoskrnl.exe .text:0x26d804, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x326784, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31eef8, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) get_available_pages_below_priority;
    
    // [MmGetCacheAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e56b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x52c1f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x608ee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52c000, 0x1fe000 bytes
    //
    _o57(sdk::function<int32_t(int64_t, enum nt::memory_caching_type_t*)>*) get_cache_attribute;
    
    // [MmGetCfgBitMapInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x469c10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f0a1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75bb48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f988c, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) get_cfg_bit_map_information;
    
    // [MmGetChannelInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53ce1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7611c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85e0a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768464, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) get_channel_information;
    
    // [MmGetDefaultPagePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeba18, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c8e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e3e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2300, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) get_default_page_priority;
    
    // [MmGetDirectoryFrameFromProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414d1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674dd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9198, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7f94, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) get_directory_frame_from_process;
    
    // [MmGetDumpRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e8c10, 0x32828 bytes
    // ntoskrnl.exe .text:0x532960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x619f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x532770, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) get_dump_range;
    
    // [MmGetFileNameForAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b614, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0f54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x898242, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf704, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) get_file_name_for_address;
    
    // [MmGetFileNameForSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b71c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c106c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1e804, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf81c, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) get_file_name_for_section;
    
    // [MmGetFileObjectForSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40fe5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eccd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7014, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x642360, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) get_file_object_for_section;
    
    // [MmGetHighestPhysicalPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xef53c, 0x32828 bytes
    // ntoskrnl.exe .text:0x227838, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33d058, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4f70, 0x1fe000 bytes
    //
    _o66(sdk::function<uint64_t(uint32_t)>*) get_highest_physical_page;
    
    // [MmGetIoSessionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53865c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c5ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa22b20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c42b0, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) get_io_session_state;
    
    // [MmGetMaximumFileSectionSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b858, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x760920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768370, 0x1fe000 bytes
    //
    _o68(sdk::function<uint64_t()>*) get_maximum_file_section_size;
    
    // [MmGetMaximumNonPagedPoolInBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b0b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ccb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38fdd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2de578, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) get_maximum_non_paged_pool_in_bytes;
    
    // [MmGetMaximumUserAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e2300, 0x32828 bytes
    // ntoskrnl.exe .text:0x3eb140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ec770, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) get_maximum_user_address;
    
    // [MmGetMinWsPagePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeba10, 0x32828 bytes
    // ntoskrnl.exe .text:0x2604c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31c960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3480, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) get_min_ws_page_priority;
    
    // [MmGetNextNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8ee14, 0x32828 bytes
    // ntoskrnl.exe .text:0x30b20c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33c010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241930, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) get_next_node;
    
    // [MmGetNextSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b2c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21ee10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d890, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) get_next_session;
    
    // [MmGetNodeChannelRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56798c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85e1f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1c50, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) get_node_channel_ranges;
    
    // [MmGetNumberOfFreeSystemPtes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6be90, 0x32828 bytes
    // ntoskrnl.exe .text:0x29d06c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6394, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203fa4, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) get_number_of_free_system_ptes;
    
    // [MmGetNumberOfPhysicalPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c61b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64c0a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e2fc0, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) get_number_of_physical_pages;
    
    // [MmGetPageBadStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e3510, 0x32828 bytes
    // ntoskrnl.exe .text:0x529a00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x615520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x529810, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) get_page_bad_status;
    
    // [MmGetPageFileForCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65fe14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8cd8c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa23388, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cc0a4, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) get_page_file_for_crash_dump;
    
    // [MmGetPageFileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4828bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63596c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70408c, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) get_page_file_information;
    
    // [MmGetPagedPoolCommitPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5728, 0x32828 bytes
    // ntoskrnl.exe .text:0x2718d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385cf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323468, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) get_paged_pool_commit_pointer;
    
    // [MmGetPeakCommitment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcad78, 0x32828 bytes
    // ntoskrnl.exe .text:0x29d0c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6278, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203f84, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) get_peak_commitment;
    
    // [MmGetPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb83d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x356850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f4780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33bad0, 0x1fe000 bytes
    //
    _o82(sdk::function<int64_t(void*)>*) get_physical_address;
    
    // [MmGetPhysicalMemoryRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4988b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae8f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8466c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6510, 0x1fe000 bytes
    //
    _o83(sdk::function<struct nt::physical_memory_range_t*()>*) get_physical_memory_ranges;
    
    // [MmGetPhysicalMemoryRangesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4988b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8466a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be930, 0x1fe000 bytes
    //
    _o84(sdk::function<struct nt::physical_memory_range_t*(void*)>*) get_physical_memory_ranges_ex;
    
    // [MmGetResidentAvailablePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcad8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x29cf10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6298, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204064, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) get_resident_available_pages;
    
    // [MmGetSectionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f6a90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x612b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70df10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5db640, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) get_section_information;
    
    // [MmGetSectionRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x525958, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c50e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa207c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c38a8, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) get_section_range;
    
    // [MmGetSectionStrongImageReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x667a34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d4df8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa33f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d35e8, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) get_section_strong_image_reference;
    
    // [MmGetSessionById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x84a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x348a20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22bbb0, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) get_session_by_id;
    
    // [MmGetSessionCreateTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f8ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x704b9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d72ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x665c48, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) get_session_create_time;
    
    // [MmGetSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10910, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b7480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f55a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2041b0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) get_session_id;
    
    // [MmGetSessionIdEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16a4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dfc20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d5d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260eb0, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) get_session_id_ex;
    
    // [MmGetSessionLocaleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x456b48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ffef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707f9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64c2d0, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) get_session_locale_id;
    
    // [MmGetSessionObjectById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1eda80, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da004, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6dc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b084, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) get_session_object_by_id;
    
    // [MmGetSessionObjectByProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133664, 0x32828 bytes
    // ntoskrnl.exe .text:0x5383f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x621508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x538208, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) get_session_object_by_process;
    
    // [MmGetSessionSchedulingGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571e4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c5aec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa22b3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c42cc, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) get_session_scheduling_group;
    
    // [MmGetSessionSchedulingGroupByProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f7450, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f33d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fb8ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f6bb4, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) get_session_scheduling_group_by_process;
    
    // [MmGetSharedCommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce1c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x29cf00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6208, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204054, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) get_shared_commit;
    
    // [MmGetSystemPageCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd428, 0x32828 bytes
    // ntoskrnl.exe .text:0x29d058, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6c5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203ffc, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) get_system_page_counts;
    
    // [MmGetSystemRoutineAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f43cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f31b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7571b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fbec0, 0x1fe000 bytes
    //
    _p00(sdk::function<void*(nt::unicode_view*)>*) get_system_routine_address;
    
    // [MmGetTotalCommitLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcad64, 0x32828 bytes
    // ntoskrnl.exe .text:0x29d0e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6258, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203f64, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) get_total_commit_limit;
    
    // [MmGetTotalCommittedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcad50, 0x32828 bytes
    // ntoskrnl.exe .text:0x29d104, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6238, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203f44, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) get_total_committed_pages;
    
    // [MmGetVirtualForPhysical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a934, 0x32828 bytes
    // ntoskrnl.exe .text:0x52c350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52c160, 0x1fe000 bytes
    //
    _p03(sdk::function<void*(int64_t)>*) get_virtual_for_physical;
    
    // [MmGetWorkingSetLeafSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc3920, 0x32828 bytes
    // ntoskrnl.exe .text:0x29cebc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f61c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204010, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) get_working_set_leaf_size;
    
    // [MmGrowKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e78dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5308a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6174e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5306b0, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) grow_kernel_stack;
    
    // [MmGrowKernelStackEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134b80, 0x32828 bytes
    // ntoskrnl.exe .text:0x269f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x370580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b600, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) grow_kernel_stack_ex;
    
    // [MmHardFaultBytesRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40abc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e0d60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x692540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x631820, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) hard_fault_bytes_required;
    
    // [MmHighestUserAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x278c78, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x21490, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x20058, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x213f0, 0x1fe000 bytes
    //
    _p08(void**) highest_user_address;
    
    // [MmIdentifyPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65d90c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c3fb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1ee18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c2778, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) identify_physical_memory;
    
    // [MmImageSectionPagable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea74c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x788df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eecdc, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) image_section_pagable;
    
    // [MmInSwapVirtualAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x667fd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa33bb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71fe70, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) in_swap_virtual_addresses;
    
    // [MmInSwapWorkingSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5834, 0x32828 bytes
    // ntoskrnl.exe .text:0x29ee44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x203af4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cbe58, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) in_swap_working_set;
    
    // [MmInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x789a88, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4c4c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3a724, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4c344, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) init_system;
    
    // [MmInitSystemDll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a97f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42de0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60924, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6fe28, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) init_system_dll;
    
    // [MmInitializeHandBuiltProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d7e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0b94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8671f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8724, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) initialize_hand_built_process;
    
    // [MmInitializeHandBuiltProcess2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b2a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8688c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba5f4, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) initialize_hand_built_process2;
    
    // [MmInitializeMemoryLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78e738, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa370e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb39e90, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3758c, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) initialize_memory_limits;
    
    // [MmInitializeProcessAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f7474, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ed000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fcbf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64e98c, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) initialize_process_address_space;
    
    // [MmInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d4d84, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99b51c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa79488, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99a5a0, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) initialize_processor;
    
    // [MmInvalidateDumpAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c9590, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x994148, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa98ba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x993158, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) invalidate_dump_addresses;
    
    // [MmIsAddressValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e79d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x530d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e2ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x530b70, 0x1fe000 bytes
    //
    _p21(sdk::function<uint8_t(void*)>*) is_address_valid;
    
    // [MmIsDriverLoadedCurrentSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515f90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7717bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8362f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7791c8, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) is_driver_loaded_current_session;
    
    // [MmIsDriverSuspectForVerifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7013a8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaae060, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2f70, 0x1fe000 bytes
    //
    _p23(sdk::function<uint32_t(struct nt::driver_object_t*)>*) is_driver_suspect_for_verifier;
    
    // [MmIsDriverVerifying]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3d5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x379cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x339790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b070, 0x1fe000 bytes
    //
    _p24(sdk::function<uint32_t(struct nt::driver_object_t*)>*) is_driver_verifying;
    
    // [MmIsDriverVerifyingByAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7083a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc1c0, 0x1fe000 bytes
    //
    _p25(sdk::function<uint32_t(void*)>*) is_driver_verifying_by_address;
    
    // [MmIsFileMapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6601c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8cdf00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2cb7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cc6e0, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) is_file_mapped;
    
    // [MmIsFileObjectAPagingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c950, 0x32828 bytes
    // ntoskrnl.exe .text:0x33983c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x625c2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x280a5c, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) is_file_object_a_paging_file;
    
    // [MmIsIoSpaceActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e7dd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x531140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6186d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x530f50, 0x1fe000 bytes
    //
    _p28(sdk::function<uint32_t(int64_t, uint64_t)>*) is_io_space_active;
    
    // [MmIsNonPagedPoolNx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x132270, 0x32828 bytes
    // ntoskrnl.exe .text:0x53f1d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x62ba74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x53efe4, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) is_non_paged_pool_nx;
    
    // [MmIsNonPagedSystemAddressValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e79e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x530d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x530b90, 0x1fe000 bytes
    //
    _p30(sdk::function<uint8_t(void*)>*) is_non_paged_system_address_valid;
    
    // [MmIsRecursiveIoFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e7ef4, 0x32828 bytes
    // ntoskrnl.exe .text:0x339bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x618c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x280df0, 0x1fe000 bytes
    //
    _p31(sdk::function<uint8_t()>*) is_recursive_io_fault;
    
    // [MmIsSessionAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11390, 0x32828 bytes
    // ntoskrnl.exe .text:0x20f960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ad50, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) is_session_address;
    
    // [MmIsSessionInCurrentServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1edafc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a1fe8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x621530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a34f8, 0x1fe000 bytes
    //
    _p33(sdk::function<uint8_t(uint32_t)>*) is_session_in_current_server_silo;
    
    // [MmIsSessionLeaderProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x527634, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c560, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) is_session_leader_process;
    
    // [MmIsThisAnNtAsSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2117b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f4c0, 0x1fe000 bytes
    //
    _p35(sdk::function<uint8_t()>*) is_this_an_nt_as_system;
    
    // [MmIsVerifierEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701214, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c0610, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa95a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf610, 0x1fe000 bytes
    //
    _p36(sdk::function<int32_t(uint32_t*)>*) is_verifier_enabled;
    
    // [MmIsWriteErrorFatal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6a4b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b9e88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x284318, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3540f8, 0x1fe000 bytes
    //
    _p37(sdk::function<uint32_t(uint32_t, uint32_t, int32_t)>*) is_write_error_fatal;
    
    // [MmIssueMemoryListCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536aa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x770414, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85c2ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x777e84, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) issue_memory_list_command;
    
    // [MmLargePageDriverBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x307d40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a320, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc12f60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a2c0, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) large_page_driver_buffer;
    
    // [MmLargePageDriverBufferLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce130, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54158, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f158, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54158, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) large_page_driver_buffer_length;
    
    // [MmLastUnloadedDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308160, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a290, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc133f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a230, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) last_unloaded_driver;
    
    // [MmLinkJobProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44f7ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x681504, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77bb68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671dd4, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) link_job_process;
    
    // [MmLoadSystemImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x421d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73bf90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x784700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743bd0, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) load_system_image;
    
    // [MmLocateUnloadedDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e71d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x52fabc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6168b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52f8cc, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) locate_unloaded_driver;
    
    // [MmLockLoadedModuleListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7bc00, 0x32828 bytes
    // ntoskrnl.exe .text:0x36dd4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x338d6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f0cc, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) lock_loaded_module_list_exclusive;
    
    // [MmLockLoadedModuleListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdebc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3367f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34894c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27d844, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) lock_loaded_module_list_shared;
    
    // [MmLockPagableDataSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4227f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eb110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x708730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eee50, 0x1fe000 bytes
    //
    _p47(sdk::function<void*(void*)>*) lock_pagable_data_section;
    
    // [MmLockPagableSectionByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a7114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65f550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b80a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x704030, 0x1fe000 bytes
    //
    _p48(sdk::function<void(void*)>*) lock_pagable_section_by_handle;
    
    // [MmLogQueryCombineStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x668f30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d6ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d52c0, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) log_query_combine_stats;
    
    // [MmLogSystemShareablePfnInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662b5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d403c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa30448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cceb0, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) log_system_shareable_pfn_info;
    
    // [MmLowPowerEpochCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x148c44, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c72b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e4320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8180, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) low_power_epoch_callback;
    
    // [MmMakeFileAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ed68, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x11b20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x16a10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x11380, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) make_file_access;
    
    // [MmMakeProtectNotWriteCopy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ed90, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x17250, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x16110, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x171c0, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) make_protect_not_write_copy;
    
    // [MmMakeSectionAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26d440, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x11be0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x162f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x113e0, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) make_section_access;
    
    // [MmMapApiSetView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46a4e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f0ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75bbe4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f9940, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) map_api_set_view;
    
    // [MmMapIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7c3ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x35f0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x309c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f8a80, 0x1fe000 bytes
    //
    _p56(sdk::function<void*(int64_t, uint64_t, enum nt::memory_caching_type_t)>*) map_io_space;
    
    // [MmMapIoSpaceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7c7a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35def0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30ac90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f8ee0, 0x1fe000 bytes
    //
    _p57(sdk::function<void*(int64_t, uint64_t, uint32_t)>*) map_io_space_ex;
    
    // [MmMapLockedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e5264, 0x32828 bytes
    // ntoskrnl.exe .text:0x52be50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x608b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52bc60, 0x1fe000 bytes
    //
    _p58(sdk::function<void*(struct nt::mdl_t*, char)>*) map_locked_pages;
    
    // [MmMapLockedPagesSpecifyCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59db0, 0x32828 bytes
    // ntoskrnl.exe .text:0x305530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x229e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x274ab0, 0x1fe000 bytes
    //
    _p59(sdk::function<void*(struct nt::mdl_t*, char, enum nt::memory_caching_type_t, void*, uint32_t, uint32_t)>*) map_locked_pages_specify_cache;
    
    // [MmMapLockedPagesWithReservedMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e5288, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c3600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db7e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4410, 0x1fe000 bytes
    //
    _p60(sdk::function<void*(void*, uint32_t, struct nt::mdl_t*, enum nt::memory_caching_type_t)>*) map_locked_pages_with_reserved_mapping;
    
    // [MmMapLockedRestartPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65bf20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c19c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1b4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c0180, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) map_locked_restart_pages;
    
    // [MmMapMemoryDumpMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1111a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x532d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61a250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x532b50, 0x1fe000 bytes
    //
    _p62(sdk::function<void(struct nt::mdl_t*)>*) map_memory_dump_mdl;
    
    // [MmMapMemoryDumpMdlEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x111cec, 0x32828 bytes
    // ntoskrnl.exe .text:0x37fb60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61a290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x380950, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) map_memory_dump_mdl_ex;
    
    // [MmMapSecureViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x462c84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bd0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f448c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x612a1c, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) map_secure_view_of_section;
    
    // [MmMapUserAddressesToPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d310, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c320, 0x1fe000 bytes
    //
    _p65(sdk::function<int32_t(void*, uint64_t, void*)>*) map_user_addresses_to_page;
    
    // [MmMapViewInSessionSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4950c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b4a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aa8f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de080, 0x1fe000 bytes
    //
    _p66(sdk::function<int32_t(void*, void**, uint64_t*)>*) map_view_in_session_space;
    
    // [MmMapViewInSessionSpaceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4950e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x854c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de0b0, 0x1fe000 bytes
    //
    _p67(sdk::function<int32_t(void*, void**, uint64_t*, int64_t*, uint64_t)>*) map_view_in_session_space_ex;
    
    // [MmMapViewInSystemCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x105a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x346610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x234ef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22a1f0, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) map_view_in_system_cache;
    
    // [MmMapViewInSystemSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x518864, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aa8f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8ec0, 0x1fe000 bytes
    //
    _p69(sdk::function<int32_t(void*, void**, uint64_t*)>*) map_view_in_system_space;
    
    // [MmMapViewInSystemSpaceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4127cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9880, 0x1fe000 bytes
    //
    _p70(sdk::function<int32_t(void*, void**, uint64_t*, int64_t*, uint64_t)>*) map_view_in_system_space_ex;
    
    // [MmMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46a780, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f1250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fa0c0, 0x1fe000 bytes
    //
    _p71(sdk::function<int32_t(void*, struct nt::kprocess_t*, void**, uint64_t, uint64_t, int64_t*, uint64_t*, enum nt::section_inherit_t, uint32_t, uint32_t)>*) map_view_of_section;
    
    // [MmMarkHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d153c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ad9dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa988b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ac94c, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) mark_hiber_phase;
    
    // [MmMarkHiberRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52546c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75aefc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa20bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76294c, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) mark_hiber_range;
    
    // [MmMarkImageForHiberPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d1f54, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9adc74, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa98b3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9acbe4, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) mark_image_for_hiber_phase;
    
    // [MmMarkPhysicalMemoryAsBad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e35a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x529b20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x615640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x529930, 0x1fe000 bytes
    //
    _p75(sdk::function<int32_t(int64_t*, int64_t*)>*) mark_physical_memory_as_bad;
    
    // [MmMarkPhysicalMemoryAsGood]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e39c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x52a650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x616390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52a460, 0x1fe000 bytes
    //
    _p76(sdk::function<int32_t(int64_t*, int64_t*)>*) mark_physical_memory_as_good;
    
    // [MmMdlPageContentsState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5a68, 0x32828 bytes
    // ntoskrnl.exe .text:0x250b00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x358ef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2febc0, 0x1fe000 bytes
    //
    _p77(sdk::function<enum mm::mdl_page_contents_state_t(struct nt::mdl_t*, enum mm::mdl_page_contents_state_t)>*) mdl_page_contents_state;
    
    // [MmMdlPagesAreZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd00e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x268f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319f80, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) mdl_pages_are_zero;
    
    // [MmNotifyProcessInSwapTrigger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa0754, 0x32828 bytes
    // ntoskrnl.exe .text:0x243184, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36307c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef5c4, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) notify_process_in_swap_trigger;
    
    // [MmNumberOfChannels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa004, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa004, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c004, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa004, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) number_of_channels;
    
    // [MmObtainChargesToLockPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53eff8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7790a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ab90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77b340, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) obtain_charges_to_lock_paged_pool;
    
    // [MmOutSwapProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xba1a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c36ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x362364, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2446dc, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) out_swap_process;
    
    // [MmOutSwapVirtualAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1f8410, 0x32828 bytes
    // ntoskrnl.exe .text:0x273368, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x63caf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d10ec, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) out_swap_virtual_addresses;
    
    // [MmOutSwapWorkingSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5998, 0x32828 bytes
    // ntoskrnl.exe .text:0x29f110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x323620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cc124, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) out_swap_working_set;
    
    // [MmPageEntireDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4736cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eb060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x788ed0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eeda0, 0x1fe000 bytes
    //
    _p85(sdk::function<void*(void*)>*) page_entire_driver;
    
    // [MmPageValidationAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa258, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2ac, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c2b8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2ac, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) page_validation_action;
    
    // [MmPageValidationFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa044, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa028, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c048, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa028, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) page_validation_frequency;
    
    // [MmPerfLogSessionRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65ea5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c5af8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa22b48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c42d8, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) perf_log_session_rundown;
    
    // [MmPerformMemoryListCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2864, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x996e1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d314, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9961bc, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) perform_memory_list_command;
    
    // [MmPfnDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab260, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb500, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db18, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb500, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) pfn_database;
    
    // [MmPhysicalMemoryBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab270, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4a8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dac0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4a8, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) physical_memory_block;
    
    // [MmPrefetchForCacheManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x401ee4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x697a3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ccfd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63e9ac, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) prefetch_for_cache_manager;
    
    // [MmPrefetchPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea53c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x697830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63e7a0, 0x1fe000 bytes
    //
    _p93(sdk::function<int32_t(uint32_t, struct nt::read_list_t**)>*) prefetch_pages;
    
    // [MmPrefetchPagesEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x697848, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cdc9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63e7b8, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) prefetch_pages_ex;
    
    // [MmPrefetchVirtualAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a4490, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x695160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa21340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6557e0, 0x1fe000 bytes
    //
    _p95(sdk::function<int32_t(struct nt::prefetch_virtual_address_list_t*)>*) prefetch_virtual_addresses;
    
    // [MmPrefetchVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a4530, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6951f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa21400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655878, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) prefetch_virtual_memory;
    
    // [MmProbeAndLockPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf6340, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b0120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x252790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a68d0, 0x1fe000 bytes
    //
    _p97(sdk::function<void(struct nt::mdl_t*, char, enum nt::lock_operation_t)>*) probe_and_lock_pages;
    
    // [MmProbeAndLockProcessPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x463f90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x699bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x776bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x638220, 0x1fe000 bytes
    //
    _p98(sdk::function<void(struct nt::mdl_t*, struct nt::kprocess_t*, char, enum nt::lock_operation_t)>*) probe_and_lock_process_pages;
    
    // [MmProbeAndLockSelectedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf85d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x257e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x307a10, 0x1fe000 bytes
    //
    _p99(sdk::function<void(struct nt::mdl_t*, union nt::file_segment_element_t*, char, enum nt::lock_operation_t)>*) probe_and_lock_selected_pages;
    
    // [MmProcessWorkingSetControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53c6d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67aad8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa33c68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0970, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) process_working_set_control;
    
    // [MmProtectFreedNonPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2d0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb530, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db78, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb530, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) protect_freed_non_paged_pool;
    
    // [MmProtectMdlSystemAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e5738, 0x32828 bytes
    // ntoskrnl.exe .text:0x52c3a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x609030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52c1b0, 0x1fe000 bytes
    //
    _q02(sdk::function<int32_t(struct nt::mdl_t*, uint32_t)>*) protect_mdl_system_address;
    
    // [MmProtectToPteMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa340, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x172d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x163a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x17240, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) protect_to_pte_mask;
    
    // [MmProtectToValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ee10, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x11b60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x173b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x11400, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) protect_to_value;
    
    // [MmPteBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa328, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa358, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c458, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa358, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) pte_base;
    
    // [MmPurgeSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8950, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a64f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x314300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cf7c0, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) purge_section;
    
    // [MmQueryApiSetSchema]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ba58, 0x32828 bytes
    // ntoskrnl.exe .text:0x36d4c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37d7c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36e840, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) query_api_set_schema;
    
    // [MmQueryCommitReleaseState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd0840, 0x32828 bytes
    // ntoskrnl.exe .text:0x264290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f354, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x314558, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) query_commit_release_state;
    
    // [MmQueryMemoryListInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104c60, 0x32828 bytes
    // ntoskrnl.exe .text:0x2aabe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33d080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bcda0, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) query_memory_list_information;
    
    // [MmQueryProcessWorkingSetSwapPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x554c, 0x32828 bytes
    // ntoskrnl.exe .text:0x29fa98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20268c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ccaac, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) query_process_working_set_swap_pages;
    
    // [MmQuerySessionWorkingSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1eb4d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x536a24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46a694, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x536834, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) query_session_working_set_information;
    
    // [MmQuerySystemMemoryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2ba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x26bc08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f6f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31d208, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) query_system_memory_information;
    
    // [MmQuerySystemSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130438, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a31b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a46e0, 0x1fe000 bytes
    //
    _q13(sdk::function<enum mm::system_size_t()>*) query_system_size;
    
    // [MmQuerySystemWorkingSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc37a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x29e7e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3267c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x311c70, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) query_system_working_set_information;
    
    // [MmQueryVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4086f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e3620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x693ab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x634520, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) query_virtual_memory;
    
    // [MmQueryWorkingSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x95864, 0x32828 bytes
    // ntoskrnl.exe .text:0x2172b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35fb94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2041e4, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) query_working_set_information;
    
    // [MmQuitNextSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655e10, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) quit_next_session;
    
    // [MmRaisePoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc78f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x29e730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3716c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3148c0, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) raise_pool_quota;
    
    // [MmReadProcessPageTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1effd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5412b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x62f58c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x541e00, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) read_process_page_tables;
    
    // [MmRegistryState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0e0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa170, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c1b0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa170, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) registry_state;
    
    // [MmReleaseCommitForMemResetPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e2318, 0x32828 bytes
    // ntoskrnl.exe .text:0x526ee4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x604268, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x526cf4, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) release_commit_for_mem_reset_pages;
    
    // [MmReleaseDumpHibernateResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5248b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x757720, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa20c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75f2b4, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) release_dump_hibernate_resources;
    
    // [MmReleaseLoadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x422b4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eb550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x785c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ef290, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) release_load_lock;
    
    // [MmReleaseOpaqueSwapSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41960c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) release_opaque_swap_support;
    
    // [MmReleaseResourceCharge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x76170, 0x32828 bytes
    // ntoskrnl.exe .text:0x27b750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x329144, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c3d30, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) release_resource_charge;
    
    // [MmRelocatePfnList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x669178, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ce2f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2cf18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cd19c, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) relocate_pfn_list;
    
    // [MmRemoveExecuteGrants]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6abc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37bad0, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) remove_execute_grants;
    
    // [MmRemovePhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65cff8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c3270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1d320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c1a30, 0x1fe000 bytes
    //
    _q28(sdk::function<int32_t(int64_t*, int64_t*)>*) remove_physical_memory;
    
    // [MmRemoveSystemCacheFromDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e8f38, 0x32828 bytes
    // ntoskrnl.exe .text:0x532d7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61a2ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x532b8c, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) remove_system_cache_from_dump;
    
    // [MmReplaceImportEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e7228, 0x32828 bytes
    // ntoskrnl.exe .text:0x52fb0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x616908, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52f91c, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) replace_import_entry;
    
    // [MmReserveViewInSystemCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565ee0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79c228, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x850eb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a38a0, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) reserve_view_in_system_cache;
    
    // [MmResetDriverPaging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4735b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x788990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eec10, 0x1fe000 bytes
    //
    _q32(sdk::function<void(void*)>*) reset_driver_paging;
    
    // [MmResourcesAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e520, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d1340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d3540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x252360, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) resources_available;
    
    // [MmReturnChargesToLockPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65ecd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c53e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa20af0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c3ba0, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) return_charges_to_lock_paged_pool;
    
    // [MmReturnPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7768, 0x32828 bytes
    // ntoskrnl.exe .text:0x26dc70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37cd50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31f360, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) return_pool_quota;
    
    // [MmRotatePhysicalView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51910c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x708b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa22000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bcdc0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) rotate_physical_view;
    
    // [MmScrubMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x669d0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d8fdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa37384, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d77dc, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) scrub_memory;
    
    // [MmSectionObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab308, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb510, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db20, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb510, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) section_object_type;
    
    // [MmSectionToSectionObjectPointers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x660328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ce090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8985d2, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cc870, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) section_to_section_object_pointers;
    
    // [MmSecureVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4621ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x646330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6afb90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ba300, 0x1fe000 bytes
    //
    _q40(sdk::function<void*(void*, uint64_t, uint32_t)>*) secure_virtual_memory;
    
    // [MmSecureVirtualMemoryAgainstWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x462d14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f53e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615c5c, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) secure_virtual_memory_against_writes;
    
    // [MmSessionGetWin32Callouts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10940, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b6d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a59d0, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) session_get_win32_callouts;
    
    // [MmSessionObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab410, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6c0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd28, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6c0, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) session_object_type;
    
    // [MmSessionSetUnloadAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fe0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2394, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e4e08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a38e4, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) session_set_unload_address;
    
    // [MmSetAccessLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4750, 0x32828 bytes
    // ntoskrnl.exe .text:0x37c684, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x367478, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37da04, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) set_access_logging;
    
    // [MmSetAddressRangeModified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x63790, 0x32828 bytes
    // ntoskrnl.exe .text:0x269830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ae20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a890, 0x1fe000 bytes
    //
    _q46(sdk::function<uint8_t(void*, uint64_t)>*) set_address_range_modified;
    
    // [MmSetBankedSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _q47(sdk::function<int32_t(void*, void*, uint32_t, uint8_t, struct nt::banked_section_routine_t*, void*)>*) set_banked_section;
    
    // [MmSetCommitReleaseEligibility]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e24ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x52711c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x60448c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x526f2c, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) set_commit_release_eligibility;
    
    // [MmSetMemoryPriorityProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x291920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee248, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x336c08, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) set_memory_priority_process;
    
    // [MmSetMinimumAgeRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a37cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649b2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3ab8, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) set_minimum_age_rate;
    
    // [MmSetPageProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1cf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x375840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376bc0, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) set_page_protection;
    
    // [MmSetPermanentCacheAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65e2f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c51f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa208e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c39b0, 0x1fe000 bytes
    //
    _q52(sdk::function<int32_t(int64_t, int64_t, enum nt::memory_caching_type_t, uint32_t)>*) set_permanent_cache_attribute;
    
    // [MmSetPriorityVaRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65e71c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c545c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa2162c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c3c1c, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) set_priority_va_ranges;
    
    // [MmSetSessionObjectIoEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537224, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x770df4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8170d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778864, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) set_session_object_io_event;
    
    // [MmSetTrimWhileAgingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4cf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24cf38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x364338, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202ee0, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) set_trim_while_aging_state;
    
    // [MmShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3de33c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ad540, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa97ba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ac4b0, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) shutdown_system;
    
    // [MmSizeOfMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b728, 0x32828 bytes
    // ntoskrnl.exe .text:0x35f6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb530, 0x1fe000 bytes
    //
    _q57(sdk::function<uint64_t(void*, uint64_t)>*) size_of_mdl;
    
    // [MmSizeOfPagedPoolInBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4b8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7e8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ddf8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7e8, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) size_of_paged_pool_in_bytes;
    
    // [MmSnapTriageDumpInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e90a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x532ea4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61a3bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x532cb4, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) snap_triage_dump_information;
    
    // [MmSpecialPoolCatchOverruns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0a8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa138, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c10c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa138, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) special_pool_catch_overruns;
    
    // [MmSpecialPoolTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2c8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb558, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db7c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb558, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) special_pool_tag;
    
    // [MmStealTopLevelPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e492c, 0x32828 bytes
    // ntoskrnl.exe .text:0x383e88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20199c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x384c48, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) steal_top_level_page;
    
    // [MmStoreAllocateVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x521e5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e03c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa362b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e118c, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) store_allocate_virtual_memory;
    
    // [MmStoreChargeResidentAvailableForRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d190, 0x32828 bytes
    // ntoskrnl.exe .text:0x2798e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x309744, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) store_charge_resident_available_for_read;
    
    // [MmStoreDecommitVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x123468, 0x32828 bytes
    // ntoskrnl.exe .text:0x270414, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x646514, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321c34, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) store_decommit_virtual_memory;
    
    // [MmStoreFlushOutstandingEvictions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1f59e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x272808, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6465d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30c3f4, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) store_flush_outstanding_evictions;
    
    // [MmStoreFreeVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522850, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6362d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa36478, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8600, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) store_free_virtual_memory;
    
    // [MmStoreProbeAndLockPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11fe90, 0x32828 bytes
    // ntoskrnl.exe .text:0x230dd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x64683c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x34581c, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) store_probe_and_lock_pages;
    
    // [MmStoreRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55c0e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8450d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79d7d0, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) store_register;
    
    // [MmStrongCodeGuaranteesEnforced]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9c24, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70674, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60f20, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f9b8, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) strong_code_guarantees_enforced;
    
    // [MmSystemRangeStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x278c70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x21498, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x20040, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x213f8, 0x1fe000 bytes
    //
    _q71(void**) system_range_start;
    
    // [MmTrackLockedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2a4, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4dc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db04, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4dc, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) track_locked_pages;
    
    // [MmTriageActiveInLastCrash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd484, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa90dbc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8556c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa9003c, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) triage_active_in_last_crash;
    
    // [MmTrimAllSystemPagableMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1eb5c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x536b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61f100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x536990, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) trim_all_system_pagable_memory;
    
    // [MmTrimFilePagesFromWorkingSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1eb5d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x536b9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61f11c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5369ac, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) trim_file_pages_from_working_sets;
    
    // [MmTrimSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6c048, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a4f98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x310094, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ce268, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) trim_section;
    
    // [MmTryIdentifyPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e684c, 0x32828 bytes
    // ntoskrnl.exe .text:0x52ea58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x610880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52e868, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) try_identify_page;
    
    // [MmUnloadSystemImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eaf00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75cdc0, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) unload_system_image;
    
    // [MmUnloadedDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308168, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a288, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc133f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a228, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) unloaded_drivers;
    
    // [MmUnlockLoadedModuleListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdecb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x336624, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x348910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27d5e8, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) unlock_loaded_module_list_shared;
    
    // [MmUnlockPagableImageSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xddcdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x25db40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x368240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30e290, 0x1fe000 bytes
    //
    _q81(sdk::function<void(void*)>*) unlock_pagable_image_section;
    
    // [MmUnlockPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x46a20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c6180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x23ee60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2471b0, 0x1fe000 bytes
    //
    _q82(sdk::function<void(struct nt::mdl_t*)>*) unlock_pages;
    
    // [MmUnmapIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7c3e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35d0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30afb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fa380, 0x1fe000 bytes
    //
    _q83(sdk::function<void(void*, uint64_t)>*) unmap_io_space;
    
    // [MmUnmapLockedPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8280, 0x32828 bytes
    // ntoskrnl.exe .text:0x3369a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x23fa40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27dbc0, 0x1fe000 bytes
    //
    _q84(sdk::function<void(void*, struct nt::mdl_t*)>*) unmap_locked_pages;
    
    // [MmUnmapLockedRestartPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65bf8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c1a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1b5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c0230, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) unmap_locked_restart_pages;
    
    // [MmUnmapReservedMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e53ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x52be80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x608b70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52bc90, 0x1fe000 bytes
    //
    _q86(sdk::function<void(void*, uint32_t, struct nt::mdl_t*)>*) unmap_reserved_mapping;
    
    // [MmUnmapViewInSessionSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2218, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67b440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aa8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e94f0, 0x1fe000 bytes
    //
    _q87(sdk::function<int32_t(void*)>*) unmap_view_in_session_space;
    
    // [MmUnmapViewInSystemCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x341c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3423b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x26b880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a0380, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) unmap_view_in_system_cache;
    
    // [MmUnmapViewInSystemSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67bcb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aa8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63a810, 0x1fe000 bytes
    //
    _q89(sdk::function<int32_t(void*)>*) unmap_view_in_system_space;
    
    // [MmUnmapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48dedc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8ee0, 0x1fe000 bytes
    //
    _q90(sdk::function<int32_t(struct nt::kprocess_t*, void*)>*) unmap_view_of_section;
    
    // [MmUnsecureVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ff2d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e44f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ad600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6352a0, 0x1fe000 bytes
    //
    _q91(sdk::function<void(void*)>*) unsecure_virtual_memory;
    
    // [MmUpdateMdlTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e44c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x52b460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x607c24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x52b270, 0x1fe000 bytes
    //
    _q92(sdk::function<uint32_t(struct nt::mdl_t*, void*, void*)>*) update_mdl_tracker;
    
    // [MmUpdateOldWorkingSetPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1eb5f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x536bdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61f15c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5369ec, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) update_old_working_set_pages;
    
    // [MmUpdateSectionIoAttribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6a6f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x239cd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ca00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dcba4, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) update_section_io_attribution;
    
    // [MmUserProbeAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x278c80, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x21488, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x20050, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x213e8, 0x1fe000 bytes
    //
    _q95(uint64_t*) user_probe_address;
    
    // [MmUserProtectionToMask1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26eea0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x173d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1d4a8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x17358, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) user_protection_to_mask1;
    
    // [MmUserProtectionToMask2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26ee90, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x173e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1d4b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x17348, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) user_protection_to_mask2;
    
    // [MmValidateUserCallTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x666268, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d4d48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa3449c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d3538, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) validate_user_call_target;
    
    // [MmVerifierData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308180, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a720, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13700, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a6c0, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) verifier_data;
    
    // [MmVerifierTrimFrequency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9e00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12618, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd7c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12688, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) verifier_trim_frequency;
    
    // [MmVerifierTrimMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x704908, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c3c04, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad40d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c2c04, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) verifier_trim_memory;
    
    // [MmVerifyCallbackFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65e2e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c51d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa208b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c3994, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) verify_callback_function;
    
    // [MmVerifyCallbackFunctionCheckFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14618c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a5c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3abc7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af5a0, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) verify_callback_function_check_flags;
    
    // [MmVerifyDriverBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7cf2f0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd55b60, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd818e0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd55b60, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) verify_driver_buffer;
    
    // [MmVerifyDriverBufferLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce120, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54150, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f150, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54150, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) verify_driver_buffer_length;
    
    // [MmVerifyDriverLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c6c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1206c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120cc, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) verify_driver_level;
    
    // [MmVirtualAccessFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x660a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ce580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89861c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8cd424, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) virtual_access_fault;
    
    // [MmWaitForCacheManagerPrefetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x2aaf98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dad04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bc478, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) wait_for_cache_manager_prefetch;
    
    // [MmWaitMultipleForCacheManagerPrefetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8860, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a9abc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x301f24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2be4dc, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) wait_multiple_for_cache_manager_prefetch;
    
    // [MmWriteTriageInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e91a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x532fac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61a4dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x532dbc, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) write_triage_information;
    
    // [MmWriteUnloadedDriverInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1e92b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5330c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x61a5f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x532ed8, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) write_unloaded_driver_information;
    
    // [MmZeroPageFileAtShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65bff8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c1af4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1b634, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8c02b4, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) zero_page_file_at_shutdown;
    
    // [MmZeroPageWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8e50, 0x32828 bytes
    // ntoskrnl.exe .text:0x25f978, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36bb74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3101b8, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) zero_page_write;
};
#include "magic/api.end.hpp"
