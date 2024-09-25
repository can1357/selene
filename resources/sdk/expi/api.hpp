#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_entry_t.hpp"
#include "../nt/handle_table_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "../nt/handle_table_entry_info_t.hpp"

#include "magic/api.start.hpp"
namespace expi
{
    // [ExpAddNonMirroredRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb83ad0, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) add_non_mirrored_ranges;
    
    // [ExpAllocateBigPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xf1270, 0x32828 bytes
    //
    _m01(sdk::unknown_ptr) allocate_big_pool;
    
    // [ExpAllocatePoolForNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b8a90, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) allocate_pool_for_node;
    
    // [ExpAllocatePoolWithQuotaTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe POOLCODE:0xa9ab70, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) allocate_pool_with_quota_tag;
    
    // [ExpAllocatePoolWithTagPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe POOLCODE:0xa9acfc, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) allocate_pool_with_tag_priority;
    
    // [ExpAtsDereferenceDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f78ec, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) ats_dereference_device;
    
    // [ExpAtsSvmDeviceListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2cf40, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) ats_svm_device_list_lock;
    
    // [ExpAtsSvmDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2cf50, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) ats_svm_devices;
    
    // [ExpBcdCacheDataBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc31578, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) bcd_cache_data_buffer;
    
    // [ExpBcdCacheDataBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc31570, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) bcd_cache_data_buffer_size;
    
    // [ExpBigPoolGetTrackerEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x289a74, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) big_pool_get_tracker_entry;
    
    // [ExpCheckFullProcessInformationAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x49bf64, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) check_full_process_information_access;
    
    // [ExpCleanupBigTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f2ec8, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) cleanup_big_tag;
    
    // [ExpCommitWakeResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x395340, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) commit_wake_resource_exclusive;
    
    // [ExpCommitWakeResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x295090, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) commit_wake_resource_shared;
    
    // [ExpCompleteSoftReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x22c1c0, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) complete_soft_reboot;
    
    // [ExpConvertSvmDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f8988, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) convert_svm_device;
    
    // [ExpCreateRestrictedFastCacheRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b18a4, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) create_restricted_fast_cache_registry_key;
    
    // [ExpCreateSystemThreadForNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x41c4c8, 0x32828 bytes
    //
    _m18(sdk::unknown_ptr) create_system_thread_for_node;
    
    // [ExpFastCacheDescriptorCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b1b04, 0x32828 bytes
    //
    _m19(sdk::unknown_ptr) fast_cache_descriptor_compare;
    
    // [ExpFastCacheFromRegistryPushed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74afac, 0x32828 bytes
    //
    _m20(sdk::unknown_ptr) fast_cache_from_registry_pushed;
    
    // [ExpFastCacheLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74acf0, 0x32828 bytes
    //
    _m21(sdk::unknown_ptr) fast_cache_lock;
    
    // [ExpFastCacheReArmed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74abbc, 0x32828 bytes
    //
    _m22(sdk::unknown_ptr) fast_cache_re_armed;
    
    // [ExpFastCacheUpdateLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74ab88, 0x32828 bytes
    //
    _m23(sdk::unknown_ptr) fast_cache_update_lock;
    
    // [ExpFeatureLicensesTableMaximumSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a0e0, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) feature_licenses_table_maximum_size;
    
    // [ExpFindFastCacheDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b1b20, 0x32828 bytes
    //
    _m25(sdk::unknown_ptr) find_fast_cache_descriptor;
    
    // [ExpForceEnableMutantAutoboost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2c788, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) force_enable_mutant_autoboost;
    
    // [ExpFullProcessInfoSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd51ca0, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) full_process_info_security_descriptor;
    
    // [ExpFwRamdiskInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc31588, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) fw_ramdisk_info;
    
    // [ExpGenuinePolicyKDPThrottleOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a0e4, 0x32828 bytes
    //
    _m29(sdk::unknown_ptr) genuine_policy_kdp_throttle_override;
    
    // [ExpGetCurrentUserUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x53a00c, 0x32828 bytes
    //
    _m30(sdk::unknown_ptr) get_current_user_ui_language;
    
    // [ExpGetNextProcessThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x76da90, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) get_next_process_thread;
    
    // [ExpGetNonMatchingSuiteMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6af51c, 0x32828 bytes
    //
    _m32(sdk::unknown_ptr) get_non_matching_suite_mask;
    
    // [ExpGetOriginalImageVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fb140, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) get_original_image_version;
    
    // [ExpGetOriginalImageVersionRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8187f0, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) get_original_image_version_registry_value;
    
    // [ExpGetUILanguagePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x53a134, 0x32828 bytes
    //
    _m35(sdk::unknown_ptr) get_ui_language_policy;
    
    // [ExpHeapDumpEnumLargeAllocs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fa4e8, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) heap_dump_enum_large_allocs;
    
    // [ExpHeapDumpNodeLinksValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fa5e0, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) heap_dump_node_links_valid;
    
    // [ExpInitializeBootEnvironment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5926c, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) initialize_boot_environment;
    
    // [ExpInitializeMemoryMirroring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb22b70, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) initialize_memory_mirroring;
    
    // [ExpInitializePoolTrackerTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3b5890, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) initialize_pool_tracker_table;
    
    // [ExpInitializeTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x84da20, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) initialize_time_zone_information;
    
    // [ExpInsertPoolTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x120360, 0x32828 bytes
    //
    _m42(sdk::unknown_ptr) insert_pool_tracker;
    
    // [ExpInstanceAllocationMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fc378, 0x32828 bytes
    //
    _m43(sdk::unknown_ptr) instance_allocation_mask;
    
    // [ExpIRTimerSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6ef0e0, 0x32828 bytes
    //
    _m44(sdk::unknown_ptr) ir_timer_security_descriptor;
    
    // [ExpIsValidUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6ae194, 0x32828 bytes
    //
    _m45(sdk::unknown_ptr) is_valid_ui_language;
    
    // [ExpLimitDpcInsertEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f35f0, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) limit_dpc_insert_entry;
    
    // [ExpLimitInsertDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f38b0, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) limit_insert_dpc;
    
    // [ExpLockCallbackListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14664c, 0x32828 bytes
    //
    _m48(sdk::unknown_ptr) lock_callback_list_exclusive;
    
    // [ExpLockHandleTableExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x76ee0, 0x32828 bytes
    //
    _m49(sdk::unknown_ptr) lock_handle_table_exclusive;
    
    // [ExpLockResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x52500, 0x32828 bytes
    //
    _m50(sdk::unknown_ptr) lock_resource;
    
    // [ExpMicrocodeInformationLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12f0, 0x32828 bytes
    //
    _m51(sdk::unknown_ptr) microcode_information_load;
    
    // [ExpMicrocodeInformationUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12f8, 0x32828 bytes
    //
    _m52(sdk::unknown_ptr) microcode_information_unload;
    
    // [ExpMicrocodeInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1300, 0x32828 bytes
    //
    _m53(sdk::unknown_ptr) microcode_initialization;
    
    // [ExpNlsDeleteSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f4cf4, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) nls_delete_silo_state;
    
    // [ExpNlsInitSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9eee5c, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) nls_init_silo_state;
    
    // [ExpNonPagedPoolDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ada80, 0x32828 bytes
    //
    _m56(sdk::unknown_ptr) non_paged_pool_descriptor;
    
    // [ExpNumberOfNonPagedPools]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab25c, 0x32828 bytes
    //
    _m57(sdk::unknown_ptr) number_of_non_paged_pools;
    
    // [ExpNumberOfPagedPools]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa018, 0x32828 bytes
    //
    _m58(sdk::unknown_ptr) number_of_paged_pools;
    
    // [ExpOriginalImageVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2c740, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) original_image_version;
    
    // [ExpPackagesTableMaximumSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a0ac, 0x32828 bytes
    //
    _m60(sdk::unknown_ptr) packages_table_maximum_size;
    
    // [ExpPagedPoolDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ad870, 0x32828 bytes
    //
    _m61(sdk::unknown_ptr) paged_pool_descriptor;
    
    // [ExpParseFastCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b20bc, 0x32828 bytes
    //
    _m62(sdk::unknown_ptr) parse_fast_cache;
    
    // [ExpParseFastCacheHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b214c, 0x32828 bytes
    //
    _m63(sdk::unknown_ptr) parse_fast_cache_helper;
    
    // [ExpPlFindLimitEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x309a28, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) pl_find_limit_entry;
    
    // [ExpPlGrowTableIfNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f39b4, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) pl_grow_table_if_needed;
    
    // [ExpPlInitOnceVar]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd1b8d8, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) pl_init_once_var;
    
    // [ExpPlProcessNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f3db0, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) pl_process_notifications;
    
    // [ExpPlRunOnceInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f3e20, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) pl_run_once_init;
    
    // [ExpPoolIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f7da0, 0x32828 bytes
    //
    _m69(sdk::unknown_ptr) pool_index;
    
    // [ExpPoolTrackerChargeEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x30c2e0, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) pool_tracker_charge_entry;
    
    // [ExpPoolTrackerReturnLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2d09c0, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) pool_tracker_return_limit;
    
    // [ExpPrepareNewAtsDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f79b8, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) prepare_new_ats_device;
    
    // [ExpPreviousReevalTriggerTickCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74afc0, 0x32828 bytes
    //
    _m73(sdk::unknown_ptr) previous_reeval_trigger_tick_count;
    
    // [ExpPrmInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5fb68, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) prm_initialization;
    
    // [ExpProductLicensesTableMaximumSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a0dc, 0x32828 bytes
    //
    _m75(sdk::unknown_ptr) product_licenses_table_maximum_size;
    
    // [ExpQueryBootLoaderMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f0b68, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) query_boot_loader_metadata;
    
    // [ExpQueryOriginalImageFeatureInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fa404, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) query_original_image_feature_information;
    
    // [ExpQuitNextProcessThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6aeda8, 0x32828 bytes
    //
    _m78(sdk::unknown_ptr) quit_next_process_thread;
    
    // [ExpReadSiloTimeZoneMarker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9eb808, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) read_silo_time_zone_marker;
    
    // [ExpRegisterCounterSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x863c20, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) register_counter_set;
    
    // [ExpReturnPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x300784, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) return_pool_quota;
    
    // [ExpSecurePoolDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f8194, 0x1fd000 bytes
    //
    _m82(sdk::unknown_ptr) secure_pool_destroy;
    
    // [ExpSessionPoolLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab528, 0x32828 bytes
    //
    _m83(sdk::unknown_ptr) session_pool_lookaside;
    
    // [ExpSessionPoolSmallLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab440, 0x32828 bytes
    //
    _m84(sdk::unknown_ptr) session_pool_small_lists;
    
    // [ExpSetBootLoaderMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f0c60, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) set_boot_loader_metadata;
    
    // [ExpSetCurrentUserUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x539a58, 0x32828 bytes
    //
    _m86(sdk::unknown_ptr) set_current_user_ui_language;
    
    // [ExpSetThreadReaperEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd2b08, 0x32828 bytes
    //
    _m87(sdk::unknown_ptr) set_thread_reaper_events;
    
    // [ExpShareAddressSpaceWithDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f8dc4, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) share_address_space_with_device;
    
    // [ExpSpacesBootInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc31580, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) spaces_boot_information;
    
    // [ExpSpinCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x32a2ec, 0x32828 bytes
    //
    _m90(sdk::unknown_ptr) spin_count;
    
    // [ExpStampBigPoolEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2899a8, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) stamp_big_pool_entry;
    
    // [ExpStampPoolEntryWithQuotaProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3009fc, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) stamp_pool_entry_with_quota_process;
    
    // [ExpStampPoolWithQuotaProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x300954, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) stamp_pool_with_quota_process;
    
    // [ExpStringFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6af1a8, 0x32828 bytes
    //
    _m94(sdk::unknown_ptr) string_free;
    
    // [ExpSysDbgPullOnce]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2c78c, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) sys_dbg_pull_once;
    
    // [ExpSysInfoShouldSkipProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b9d84, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) sys_info_should_skip_process;
    
    // [ExpThreadReaperTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fc460, 0x32828 bytes
    //
    _m97(sdk::unknown_ptr) thread_reaper_timer;
    
    // [ExpTimeZoneCleanupSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9eb8c4, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) time_zone_cleanup_silo_state;
    
    // [ExpTimeZoneInitSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9eb968, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) time_zone_init_silo_state;
    
    // [ExpTrackFatalExpiration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74ac48, 0x32828 bytes
    //
    _n00(sdk::unknown_ptr) track_fatal_expiration;
    
    // [ExpTrackRaiseLimitNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f3ea4, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) track_raise_limit_notification;
    
    // [ExpTrackTableGetMoreLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f3f10, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) track_table_get_more_limit;
    
    // [ExpTrackTableInsertLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f3fbc, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) track_table_insert_limit;
    
    // [ExpTriggerFastCacheReeval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b2658, 0x32828 bytes
    //
    _n04(sdk::unknown_ptr) trigger_fast_cache_reeval;
    
    // [ExpUnlockHandleTableExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x76ea0, 0x32828 bytes
    //
    _n05(sdk::unknown_ptr) unlock_handle_table_exclusive;
    
    // [ExpUnlockResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xe68a0, 0x32828 bytes
    //
    _n06(sdk::unknown_ptr) unlock_resource;
    
    // [ExpUseSpecialPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x22c71c, 0x32828 bytes
    //
    _n07(sdk::unknown_ptr) use_special_pool;
    
    // [ExpValidateFastCacheSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b26f8, 0x32828 bytes
    //
    _n08(sdk::unknown_ptr) validate_fast_cache_size;
    
    // [ExpValidateLocale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6af25c, 0x32828 bytes
    //
    _n09(sdk::unknown_ptr) validate_locale;
    
    // [ExpWnfAcquirePermanentDataStoreHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7e0734, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) wnf_acquire_permanent_data_store_handle;
    
    // [ExpWnfDestroyPermanentDataStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fa6dc, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) wnf_destroy_permanent_data_store;
    
    // [ExpWnfEnumeratePermanentDataStoreHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fa804, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) wnf_enumerate_permanent_data_store_handles;
    
    // [ExpWnfGetHostSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3fca8c, 0x32828 bytes
    //
    _n13(sdk::unknown_ptr) wnf_get_host_silo_context;
    
    // [ExpWnfGetPermanentDataStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7e30a8, 0x1fd000 bytes
    //
    _n14(sdk::unknown_ptr) wnf_get_permanent_data_store;
    
    // [ExpWnfInvalidateDataStores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fa850, 0x1fd000 bytes
    //
    _n15(sdk::unknown_ptr) wnf_invalidate_data_stores;
    
    // [ExpWnfPermenentDataStoresList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd51320, 0x1fd000 bytes
    //
    _n16(sdk::unknown_ptr) wnf_permenent_data_stores_list;
    
    // [ExpWnfPermenentDataStoresListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGEDATA:0xd53620, 0x1fd000 bytes
    //
    _n17(sdk::unknown_ptr) wnf_permenent_data_stores_list_lock;
    
    // [ExpWorkerFactoryFinishDeferredWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x29c720, 0x1fd000 bytes
    //
    _n18(sdk::unknown_ptr) worker_factory_finish_deferred_work;
    
    // [ExpWorkerHotAddProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGELK:0x3df6bc, 0x32828 bytes
    //
    _n19(sdk::unknown_ptr) worker_hot_add_processor;
    
    // [ExpWorkerThreadBalanceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x55a248, 0x32828 bytes
    //
    _n20(sdk::unknown_ptr) worker_thread_balance_manager;
    
    // [ExpWriteTimeZoneBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x84cfdc, 0x1fd000 bytes
    //
    _n21(sdk::unknown_ptr) write_time_zone_bias;
    
    // [ExpHotAddProcessorToWorkers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x22df78, 0x32828 bytes
    // ntoskrnl.exe .text:0x5f8088, 0x1fd000 bytes
    //
    _n22(sdk::unknown_ptr) hot_add_processor_to_workers;
    
    // [ExpHpCompactSessionPools]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21ecb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d72c, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) hp_compact_session_pools;
    
    // [ExpIsIumEncryptionKeyAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x947470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x945d40, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) is_ium_encryption_key_available;
    
    // [ExpPrepareToWaitForResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2582ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307eac, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) prepare_to_wait_for_resource_exclusive;
    
    // [ExpPrepareToWaitForResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26f27c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3207ac, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) prepare_to_wait_for_resource_shared;
    
    // [ExpQueueWorkItemNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x22e008, 0x32828 bytes
    // ntoskrnl.exe .text:0x2897e4, 0x1fd000 bytes
    //
    _n27(sdk::unknown_ptr) queue_work_item_node;
    
    // [ExpReleaseResourceForThreadLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0xe8470, 0x32828 bytes
    // ntoskrnl.exe .text:0x2948c0, 0x1fd000 bytes
    //
    _n28(sdk::unknown_ptr) release_resource_for_thread_lite;
    
    // [ExpReleaseSpinLockDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2487e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3f84, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) release_spin_lock_disabled;
    
    // [ExpWorkQueueInitializeWithMinimumThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a44a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac5bc, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) work_queue_initialize_with_minimum_threads;
    
    // [ExpAcquireCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95904c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8b7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95792c, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) acquire_cross_vm_mutant;
    
    // [ExpAcquireResourceExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2e1770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c5da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x262a20, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) acquire_resource_exclusive_lite;
    
    // [ExpAcquireResourceSharedLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2e0e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c4290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2620d0, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) acquire_resource_shared_lite;
    
    // [ExpAcquireSharedStarveExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x313610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x23afb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x285bf0, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) acquire_shared_starve_exclusive;
    
    // [ExpActivationObjectMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96620, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a370, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95810, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) activation_object_mapping;
    
    // [ExpAddFastOwnerEntryToThreadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38b34c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3939e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c3ec, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) add_fast_owner_entry_to_thread_list;
    
    // [ExpAddResourceToSystemResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x39559c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3965fc, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) add_resource_to_system_resource_list;
    
    // [ExpAllocateOwnerEntryForLegacyShim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38b47c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x392f10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c51c, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) allocate_owner_entry_for_legacy_shim;
    
    // [ExpAllocatePoolWithTagFromNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2cee60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d18c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24fe80, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) allocate_pool_with_tag_from_node;
    
    // [ExpApplyPrewaitBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2561b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aecd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3056f0, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) apply_prewait_boost;
    
    // [ExpApplyRewaitBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322590, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) apply_rewait_boost;
    
    // [ExpCapabilityCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94c2a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef334, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94ab84, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) capability_check;
    
    // [ExpCenturyDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdc80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc192a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19300, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) century_dpc;
    
    // [ExpCenturyTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdc00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19320, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19380, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) century_timer;
    
    // [ExpCenturyWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdc40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19360, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) century_work_item;
    
    // [ExpCheckTestSigningInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb2b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb2b8, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) check_test_signing_init;
    
    // [ExpCheckTestsigningEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94c2dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94abbc, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) check_testsigning_enabled;
    
    // [ExpCheckWakeTimerAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x771b48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779548, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) check_wake_timer_access;
    
    // [ExpCloudbookHardwareIDProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94a210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ed180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x948af0, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) cloudbook_hardware_id_provider;
    
    // [ExpCloudbookHardwareLockedProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b3100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867ab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bac90, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) cloudbook_hardware_locked_provider;
    
    // [ExpComputeCyclesPerYield]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa67a20, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb53a18, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67010, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) compute_cycles_per_yield;
    
    // [ExpConsumeAddonPolicySetCacheProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94a310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ed280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x948bf0, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) consume_addon_policy_set_cache_provider;
    
    // [ExpConvertExclusiveToSharedLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21651c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303a2c, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) convert_exclusive_to_shared_lite;
    
    // [ExpConvertFastResourceExclusiveToShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x389c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395008, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ace0, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) convert_fast_resource_exclusive_to_shared;
    
    // [ExpCreateCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9590b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8be8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957998, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) create_cross_vm_event;
    
    // [ExpCreateCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95917c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8cac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957a5c, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) create_cross_vm_mutant;
    
    // [ExpCrossVmIntExtensionHostGuest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15e88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c770, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ed0, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) cross_vm_int_extension_host_guest;
    
    // [ExpCrossVmIntExtensionHostRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15e90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c778, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ec8, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) cross_vm_int_extension_host_root;
    
    // [ExpCrossVmIntHostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957b20, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) cross_vm_int_host_callback;
    
    // [ExpCrossVmWnfPush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957bf0, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) cross_vm_wnf_push;
    
    // [ExpCurrentTimeZoneId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a044, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b02c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b02c, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) current_time_zone_id;
    
    // [ExpDeleteSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5acb5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f43a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac9dc, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) delete_silo_state;
    
    // [ExpDetermineLargePagePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bf048, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b48a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bfe58, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) determine_large_page_policy;
    
    // [ExpDuplicateSingleHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x683c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae188, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x670fc0, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) duplicate_single_handle;
    
    // [ExpExTimerAttributesAreValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x208c34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8f38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0684, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) ex_timer_attributes_are_valid;
    
    // [ExpFastResourceLegacyAcquireExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x389d04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x392ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ada4, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) fast_resource_legacy_acquire_exclusive;
    
    // [ExpFastResourceLegacyAcquireSharedStarveExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ae88c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5854, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ae70c, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) fast_resource_legacy_acquire_shared_starve_exclusive;
    
    // [ExpFastResourceLegacyConvertExclusiveToShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x389b78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3945b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ac18, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) fast_resource_legacy_convert_exclusive_to_shared;
    
    // [ExpFastResourceLegacyIsAcquiredShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ae8e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f58a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ae760, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) fast_resource_legacy_is_acquired_shared;
    
    // [ExpFastResourceLegacyRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x389d5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3946c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38adfc, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) fast_resource_legacy_release;
    
    // [ExpFindFastOwnerEntryForThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38afc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3947ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c068, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) find_fast_owner_entry_for_thread;
    
    // [ExpFirmwareAccessAppContainerCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94d170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f00e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94ba50, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) firmware_access_app_container_check;
    
    // [ExpFreeHeapSpecialPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b4020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fa268, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b3ea0, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) free_heap_special_pool;
    
    // [ExpFreeListCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c720, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c720, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) free_list_count;
    
    // [ExpFreeOwnerEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x34de00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x294f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x230f90, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) free_owner_entry;
    
    // [ExpFullProcessInformationSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341900, 0x32828 bytes
    // ntoskrnl.exe .data:0xceea80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xceea80, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) full_process_information_sid;
    
    // [ExpGetBilledProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8024, 0x32828 bytes
    // ntoskrnl.exe .text:0x251228, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ff2e8, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) get_billed_process;
    
    // [ExpGetExtensionHostForCrossVmObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9593a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8e88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957c80, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) get_extension_host_for_cross_vm_object;
    
    // [ExpGetLeapSecondDataRegistryKeyHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x787040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790de0, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) get_leap_second_data_registry_key_handle;
    
    // [ExpGetLicenseTamperState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5acc38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f447c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5acab8, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) get_license_tamper_state;
    
    // [ExpGetNtProductTypeFromLicenseValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77bc94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x817a30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7809a8, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) get_nt_product_type_from_license_value;
    
    // [ExpGetNumberOfInitialSessionsFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b37b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c1e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb348, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) get_number_of_initial_sessions_from_registry;
    
    // [ExpGetSystemFlushInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x665410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4a0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8660, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) get_system_flush_information;
    
    // [ExpGetSystemWriteConstraintInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b3f58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bbae8, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) get_system_write_constraint_information;
    
    // [ExpGetThreadResourceHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x310af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2830d0, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) get_thread_resource_hint;
    
    // [ExpHostBootLicensingData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd5ae50, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd867c0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd5ae50, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) host_boot_licensing_data;
    
    // [ExpHpCompactionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x324470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ac430, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) hp_compaction_routine;
    
    // [ExpHpGCInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15f00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c918, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15efc, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) hp_gc_initialized;
    
    // [ExpHpGCScheduledNonPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15f04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c900, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ef8, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) hp_gc_scheduled_non_paged;
    
    // [ExpHpGCScheduledPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15ea8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c904, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15f00, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) hp_gc_scheduled_paged;
    
    // [ExpHpGCTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x267b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37c5d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318a60, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) hp_gc_timer_callback;
    
    // [ExpHpGCTimerNonPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15f08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ef0, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) hp_gc_timer_non_paged;
    
    // [ExpHpGCTimerPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15f10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c910, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ee8, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) hp_gc_timer_paged;
    
    // [ExpHpGCWorkItemNonPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15ec0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15f40, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) hp_gc_work_item_non_paged;
    
    // [ExpHpGCWorkItemPaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15ee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c920, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15f20, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) hp_gc_work_item_paged;
    
    // [ExpHpIsSpecialPoolHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c88bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469aba, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c978c, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) hp_is_special_pool_heap;
    
    // [ExpInitExpCheckTestSigningInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b0ca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f7470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0b20, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) init_exp_check_test_signing_info;
    
    // [ExpInitLicensing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b5a08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86eb98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd5c8, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) init_licensing;
    
    // [ExpInitializeResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x395610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6bac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396670, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) initialize_resource;
    
    // [ExpIoPoolDeadlockWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x952a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x951350, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) io_pool_deadlock_worker;
    
    // [ExpIRTimerDescs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2380, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x57f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2860, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) ir_timer_descs;
    
    // [ExpIRTimerExpiryCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc191d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31288, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19218, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) ir_timer_expiry_counts;
    
    // [ExpIsBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94d740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84bd30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94c020, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) is_boot_entry;
    
    // [ExpIsDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94d790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f05e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94c070, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) is_driver_entry;
    
    // [ExpIsPoolTagPrintable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7244d4, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9eb078, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ea078, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) is_pool_tag_printable;
    
    // [ExpKdPullRemoteFileForUser]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95834c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85ac44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x956c2c, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) kd_pull_remote_file_for_user;
    
    // [ExpKernelExpirationDateCacheProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b5370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bcf30, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) kernel_expiration_date_cache_provider;
    
    // [ExpLastDynamicTimeZoneYear]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aca0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c77c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c77c, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) last_dynamic_time_zone_year;
    
    // [ExpLastTimeZoneBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a038, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b014, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b014, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) last_time_zone_bias;
    
    // [ExpLeapSecondDataLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2cad8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53858, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cad8, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) leap_second_data_lock;
    
    // [ExpLeapSecondDataRegistryNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c880, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53628, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c880, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) leap_second_data_registry_notify;
    
    // [ExpLeapSecondDataRegistryNotifyHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x948710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eb500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946fe0, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) leap_second_data_registry_notify_handler;
    
    // [ExpLeapSecondRegkeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6290, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f70, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) leap_second_regkey_path;
    
    // [ExpLeapSecondRegkeyValueEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6280, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f60, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) leap_second_regkey_value_enabled;
    
    // [ExpLeapSecondRegkeyValueLeapSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6270, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f50, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) leap_second_regkey_value_leap_seconds;
    
    // [ExpLogRefreshTimeZoneInformationCutoverFail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94872c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eb520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946ffc, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) log_refresh_time_zone_information_cutover_fail;
    
    // [ExpLogRefreshTimeZoneInformationQueryFail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x948900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eb6fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9471d0, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) log_refresh_time_zone_information_query_fail;
    
    // [ExpLogRefreshTimeZoneInformationSuccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7866ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84d4c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79048c, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) log_refresh_time_zone_information_success;
    
    // [ExpNextCenturyTimeFieldsInLocalTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b050, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb38, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb38, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) next_century_time_fields_in_local_time;
    
    // [ExpNextCenturyTimeInUTC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b0f8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbc0, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) next_century_time_in_utc;
    
    // [ExpNextSystemCutoverInUTC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74afd0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca00, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) next_system_cutover_in_utc;
    
    // [ExpNextYearDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdd20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc194e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19540, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) next_year_dpc;
    
    // [ExpNextYearTimeFieldsInLocalTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b060, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb48, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb48, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) next_year_time_fields_in_local_time;
    
    // [ExpNextYearTimeInUTC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74afc8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cac8, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) next_year_time_in_utc;
    
    // [ExpNextYearTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdd60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc194a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19500, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) next_year_timer;
    
    // [ExpNextYearWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdcc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19560, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc195c0, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) next_year_work_item;
    
    // [ExpNodeCreateSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695d70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6398, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x654f58, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) node_create_system_thread;
    
    // [ExpNodeHotAddProcessorWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x952ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9513a0, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) node_hot_add_processor_worker;
    
    // [ExpNodeInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a46f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856384, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac808, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) node_initialize;
    
    // [ExpNtDeleteWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7af30c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86622c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6f2c, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) nt_delete_wnf_state_data;
    
    // [ExpNtUpdateWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x616f1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7528ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6679fc, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) nt_update_wnf_state_data;
    
    // [ExpObCloseCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9593f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957cd0, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) ob_close_cross_vm_event;
    
    // [ExpObCloseCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957d40, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) ob_close_cross_vm_mutant;
    
    // [ExpObDeleteCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9594d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f8fc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957db0, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) ob_delete_cross_vm_event;
    
    // [ExpObDeleteCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f9010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957e00, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) ob_delete_cross_vm_mutant;
    
    // [ExpOkToTimeZoneRefresh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdda4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19488, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc194e8, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) ok_to_time_zone_refresh;
    
    // [ExpParseAndUpdateLeapSecondData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x786f9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f0ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790d3c, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) parse_and_update_leap_second_data;
    
    // [ExpPartitionCreatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a40b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac1c8, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) partition_create_pool;
    
    // [ExpPartitionCreatePoolDelayed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x952b48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f40e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x951428, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) partition_create_pool_delayed;
    
    // [ExpPartitionCreatePoolInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a43d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8561f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac4f0, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) partition_create_pool_internal;
    
    // [ExpPartitionCreateSystemThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x695d1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6334, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x654f04, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) partition_create_system_thread;
    
    // [ExpPartitionCreateThreadIfNecessary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25f874, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28984c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ffa8, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) partition_create_thread_if_necessary;
    
    // [ExpPartitionDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x952be4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4178, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9514c4, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) partition_destroy;
    
    // [ExpPartitionInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a41d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x856038, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac2ec, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) partition_initialize;
    
    // [ExpPartitionStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a3f5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855df8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac074, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) partition_start;
    
    // [ExpPlatformCapabilitiesCached]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb2a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb2b0, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) platform_capabilities_cached;
    
    // [ExpPlatformFlushCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb2a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb2a8, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) platform_flush_capabilities;
    
    // [ExpPoolFlagsToPoolType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe POOLCODE:0x9b20d0, 0x1fe000 bytes
    // ntoskrnl.exe POOLCODE:0xa9aa60, 0x1fd000 bytes
    // ntoskrnl.exe POOLCODE:0x9b10d0, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) pool_flags_to_pool_type;
    
    // [ExpPrepareToWakeResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38b6a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39537c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c748, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) prepare_to_wake_resource_exclusive;
    
    // [ExpPrepareToWakeResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a4d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x294ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b578, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) prepare_to_wake_resource_shared;
    
    // [ExpPulseCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959564, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f9054, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957e44, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) pulse_cross_vm_event;
    
    // [ExpQueryCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9595c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f90b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957ea0, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) query_cross_vm_event;
    
    // [ExpQueryRegistryRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5acf70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f47a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5acdf0, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) query_registry_routine;
    
    // [ExpReadLeapSecondData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x785b84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85ed80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78f924, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) read_leap_second_data;
    
    // [ExpReducedLicenseData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebe90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed700, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) reduced_license_data;
    
    // [ExpRefreshFailures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74acc4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c724, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c724, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) refresh_failures;
    
    // [ExpReleaseCrossVmMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95962c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f911c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957f0c, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) release_cross_vm_mutant;
    
    // [ExpReleaseDisownedFastResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aea00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f59d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ae880, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) release_disowned_fast_resource_exclusive;
    
    // [ExpReleaseDisownedFastResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x389e8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x394890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38af2c, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) release_disowned_fast_resource_shared;
    
    // [ExpReleaseFastResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38b4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395104, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c570, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) release_fast_resource_exclusive;
    
    // [ExpReleaseFastResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x394d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b2c0, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) release_fast_resource_shared;
    
    // [ExpReleaseResourceExclusiveForThreadLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2e1f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3310d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263230, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) release_resource_exclusive_for_thread_lite;
    
    // [ExpReleaseResourceSharedForThreadLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2e0380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c3b10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261630, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) release_resource_shared_for_thread_lite;
    
    // [ExpRemoveTagForBigPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5adb58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x321ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad9d8, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) remove_tag_for_big_pages;
    
    // [ExpReplaceListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a494, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x394fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b534, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) replace_list_entry;
    
    // [ExpResetCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959688, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f9178, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957f68, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) reset_cross_vm_event;
    
    // [ExpResourceEnforcesOwnershipTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2e1f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x331de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263210, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) resource_enforces_ownership_transfer;
    
    // [ExpResourceTimeoutCaptureLiveDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b3a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b38c0, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) resource_timeout_capture_live_dump;
    
    // [ExpRotateFastOwnerEntrySublistHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a3e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x394bc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b488, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) rotate_fast_owner_entry_sublist_head;
    
    // [ExpSecurityCookieRandomData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc188, 0x32828 bytes
    // ntoskrnl.exe .data:0xc164b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc164f8, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) security_cookie_random_data;
    
    // [ExpSessionPoolTrackTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc6d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc190a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc190e8, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) session_pool_track_table;
    
    // [ExpSessionPoolTrackTableMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc6c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc190a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc190e0, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) session_pool_track_table_mask;
    
    // [ExpSessionPoolTrackTableSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc6d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc190b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc190f0, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) session_pool_track_table_size;
    
    // [ExpSetCrossVmEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9596e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f91d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x957fc4, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) set_cross_vm_event;
    
    // [ExpSetLicenseTamperState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5acfd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f4804, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ace54, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) set_license_tamper_state;
    
    // [ExpSetPendingUILanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76f560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8141b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x776fd0, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) set_pending_ui_language;
    
    // [ExpSetResourceOwnerPointerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35a280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2da540, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) set_resource_owner_pointer_ex;
    
    // [ExpSetSoftRebootFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ac118, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f0d90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5abf98, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) set_soft_reboot_flags;
    
    // [ExpSetTimerObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x237870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26a470, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) set_timer_object;
    
    // [ExpSetTimerObject2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30f288, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1b84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24261c, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) set_timer_object2;
    
    // [ExpSizeHeapPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b4268, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fa660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b40e8, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) size_heap_pool;
    
    // [ExpSpinCycleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc54598, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54568, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) spin_cycle_count;
    
    // [ExpSvmDeviceListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc2a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16590, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc165f0, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) svm_device_list_lock;
    
    // [ExpSvmDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc290, 0x32828 bytes
    // ntoskrnl.exe .data:0xc165a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc16600, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) svm_devices;
    
    // [ExpSysDbgLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc191e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31298, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19228, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) sys_dbg_lock;
    
    // [ExpSysDbgPulledFileTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc191d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31290, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19220, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) sys_dbg_pulled_file_table;
    
    // [ExpTestSigningEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc16780, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d054, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc167d0, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) test_signing_enabled;
    
    // [ExpTimeZoneBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf58, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19288, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc192f0, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) time_zone_bias;
    
    // [ExpTimeZoneDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc193a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19400, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) time_zone_dpc;
    
    // [ExpTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74bc70, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d190, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d190, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) time_zone_information;
    
    // [ExpTimeZoneTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdbc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19360, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc193c0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) time_zone_timer;
    
    // [ExpTimeZoneWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdc60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc192e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19340, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) time_zone_work_item;
    
    // [ExpTimerAdjust]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b06d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6fac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0554, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) timer_adjust;
    
    // [ExpTryAcquireResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2e2560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3932f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263810, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) try_acquire_resource_exclusive;
    
    // [ExpTryAcquireResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38af94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x392e8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c034, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) try_acquire_resource_shared;
    
    // [ExpTryAcquireResourceSharedStarveExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x261d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312300, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) try_acquire_resource_shared_starve_exclusive;
    
    // [ExpTryAcquireSpinLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33a340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2441d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281560, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) try_acquire_spin_lock_shared;
    
    // [ExpTryConvertSharedToExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5af744, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af5c4, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) try_convert_shared_to_exclusive_lite;
    
    // [ExpTryQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2be47c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2893dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x229e00, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) try_queue_work_item;
    
    // [ExpTryToAcquireResourceExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5af86c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6188, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af6ec, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) try_to_acquire_resource_exclusive_lite;
    
    // [ExpTryUpgradeResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b3a98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb1ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b3918, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) try_upgrade_resource;
    
    // [ExpUuidSequenceNumberRegName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5b10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x62f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5b00, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) uuid_sequence_number_reg_name;
    
    // [ExpWakeTimerSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x983940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa67d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x982220, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) wake_timer_security_descriptor;
    
    // [ExpWnfEnumeratePermanentDataStores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bce3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x959990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x958270, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) wnf_enumerate_permanent_data_stores;
    
    // [ExpWnfGetPermanentDataStoreHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2fe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678c98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ec0d8, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) wnf_get_permanent_data_store_handle;
    
    // [ExpWnfGetPermanentPerUserDataStoreHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9599dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67850c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9582bc, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) wnf_get_permanent_per_user_data_store_handle;
    
    // [ExpWnfPopulateStateDataRemoteCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fa9a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958420, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) wnf_populate_state_data_remote_callback;
    
    // [ExpWorkQueueDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x952dc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9516a8, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) work_queue_destroy;
    
    // [ExpWorkQueueInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a4510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8562d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac628, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) work_queue_initialize;
    
    // [ExpWorkQueueManagerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a45c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8563c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac6d8, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) work_queue_manager_initialize;
    
    // [ExpWorkQueueManagerReaperTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384fb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322600, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) work_queue_manager_reaper_timer;
    
    // [ExpWorkQueueManagerStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a400c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855ea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac124, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) work_queue_manager_start;
    
    // [ExpWorkQueueManagerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78d360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x847720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797100, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) work_queue_manager_thread;
    
    // [ExpWorkerFactoryDeferredThreadCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26af34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37d988, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c5c4, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) worker_factory_deferred_thread_creation;
    
    // [ExpAcquireFannedOutPushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131c20, 0x32828 bytes
    // ntoskrnl.exe .text:0x38cbf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3993e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38dc80, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) acquire_fanned_out_push_lock_exclusive;
    
    // [ExpAcquireFannedOutPushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1317a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397068, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d4f0, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) acquire_fanned_out_push_lock_shared;
    
    // [ExpAcquireFastMutexContended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x88488, 0x32828 bytes
    // ntoskrnl.exe .text:0x20e0b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5f38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359cd0, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) acquire_fast_mutex_contended;
    
    // [ExpAcquireSpinLockDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc67b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2488b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e13c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f4054, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) acquire_spin_lock_disabled;
    
    // [ExpAcquireSpinLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x387a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x302170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x278280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26c5f0, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) acquire_spin_lock_exclusive;
    
    // [ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d2ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afb08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469728, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af988, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) acquire_spin_lock_exclusive_at_dpc_level_instrumented;
    
    // [ExpAcquireSpinLockSharedAtDpcLevelInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d358, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afbc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4697e2, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afa44, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) acquire_spin_lock_shared_at_dpc_level_instrumented;
    
    // [ExpAddTagForBigPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf1c80, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d1840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30c360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x252860, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) add_tag_for_big_pages;
    
    // [ExpAdditionalCriticalWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc4e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16680, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cfd8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc167c0, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) additional_critical_worker_threads;
    
    // [ExpAdditionalDelayedWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc4ec, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16684, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cf74, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc167c4, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) additional_delayed_worker_threads;
    
    // [ExpAeCycleCountScaler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa02d, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa01a, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c01f, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa01a, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) ae_cycle_count_scaler;
    
    // [ExpAeCycleCountThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa148, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0d4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c130, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0d4, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) ae_cycle_count_threshold;
    
    // [ExpAeMeasureContention]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13dd84, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b82a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb4d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8c34, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) ae_measure_contention;
    
    // [ExpAeSamplingPeriodMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa18c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa1f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c1a4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa1f0, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) ae_sampling_period_mask;
    
    // [ExpAeStopMeasurement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb0f38, 0x32828 bytes
    // ntoskrnl.exe .text:0x23cf4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e966c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e953c, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) ae_stop_measurement;
    
    // [ExpAeThresholdInitWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13dcd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b8200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8b90, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) ae_threshold_init_worker;
    
    // [ExpAeThresholdInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7999d0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa633f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4c890, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5f268, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) ae_threshold_initialization;
    
    // [ExpAeUpdateStatsForExclusiveRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9edc, 0x32828 bytes
    // ntoskrnl.exe .text:0x38ce4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3982c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38dedc, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) ae_update_stats_for_exclusive_release;
    
    // [ExpAllocateAsid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22e51c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b264c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f8654, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b24cc, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) allocate_asid;
    
    // [ExpAllocateFannedOutPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131a98, 0x32828 bytes
    // ntoskrnl.exe .text:0x38cb48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38dbd8, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) allocate_fanned_out_push_lock;
    
    // [ExpAllocateHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47500c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x685b9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73fbe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671128, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) allocate_handle_table;
    
    // [ExpAllocateHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x463d10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c7280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68c8dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61d6c0, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) allocate_handle_table_entry;
    
    // [ExpAllocateHandleTableEntrySlow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4749c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x685ca8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7406c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671234, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) allocate_handle_table_entry_slow;
    
    // [ExpAllocateLowLevelTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47525c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x685f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7419bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6714c0, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) allocate_low_level_table;
    
    // [ExpAllocateMidLevelTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47482c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66ef78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc574, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e20f4, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) allocate_mid_level_table;
    
    // [ExpAllocateStringRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f369c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbd60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d02f0, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) allocate_string_routine;
    
    // [ExpAllocateTablePagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x474890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66efec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc5e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2168, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) allocate_table_paged_pool;
    
    // [ExpAllocateTablePagedPoolNoZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x685f68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7419f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6714f4, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) allocate_table_paged_pool_no_zero;
    
    // [ExpAllocateUuids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4987cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4d84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dfbd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e40e4, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) allocate_uuids;
    
    // [ExpAltTimeZoneBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aef4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53760, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9c0, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) alt_time_zone_bias;
    
    // [ExpApplyPriorityBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x51c70, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c58b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aed70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2468e0, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) apply_priority_boost;
    
    // [ExpAssignPasid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b94a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953904, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9521e4, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) assign_pasid;
    
    // [ExpBigTableExpansionFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc6cc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16888, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d21c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc168c0, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) big_table_expansion_failed;
    
    // [ExpBlockOnLockedHandleEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50a208, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ed4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x799988, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b5c3c, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) block_on_locked_handle_entry;
    
    // [ExpBoostIoAfterAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4a40, 0x32828 bytes
    // ntoskrnl.exe .text:0x358420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ae010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db614, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) boost_io_after_acquire;
    
    // [ExpBootEntropyInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a4b8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b620, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51640, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b620, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) boot_entropy_init;
    
    // [ExpBootEnvironmentInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe0c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc196c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc315e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19720, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) boot_environment_information;
    
    // [ExpBuiltinPriorities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x26d9a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x119d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x168e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x10e20, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) builtin_priorities;
    
    // [ExpCacheLineSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab300, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dbc8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5b8, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) cache_line_size;
    
    // [ExpCacheProviderPolicyNamesCounterBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x98032c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63e14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec0c, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) cache_provider_policy_names_counter_base;
    
    // [ExpCallBackFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc698, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19158, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d1b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc191b8, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) call_back_flush;
    
    // [ExpCallProcessing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106414, 0x32828 bytes
    // ntoskrnl.exe .text:0x2526c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3560a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3006e8, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) call_processing;
    
    // [ExpCallbackEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc680, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19160, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d1a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc191c0, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) callback_event;
    
    // [ExpCallbackListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc6a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d1d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc191e0, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) callback_list_head;
    
    // [ExpCallbackListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc6b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19190, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d1c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc191f0, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) callback_list_lock;
    
    // [ExpCallbackMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1e20, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96670, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a390, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95860, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) callback_mapping;
    
    // [ExpCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfebf4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2385e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b27e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f300, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) cancel_timer;
    
    // [ExpCaptureWnfStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fb2b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x617c84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7536dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x668764, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) capture_wnf_state_name;
    
    // [ExpCenturyDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133958, 0x32828 bytes
    // ntoskrnl.exe .text:0x243770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323c30, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) century_dpc_routine;
    
    // [ExpCheckForFreedEnhancedTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffd58, 0x32828 bytes
    // ntoskrnl.exe .text:0x210be4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35bb04, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) check_for_freed_enhanced_timer;
    
    // [ExpCheckForLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22daa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f65ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0808, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) check_for_lookaside;
    
    // [ExpCheckForLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22db0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b09f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6658, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0874, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) check_for_lookaside_list;
    
    // [ExpCheckForResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d144, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af594, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5eac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af414, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) check_for_resource;
    
    // [ExpCheckForWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22de20, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0f04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f7e48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0d84, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) check_for_worker;
    
    // [ExpCheckIRTimerAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1040, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755af8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec57c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d548, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) check_ir_timer_access;
    
    // [ExpCheckThreadHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7cac, 0x32828 bytes
    // ntoskrnl.exe .text:0x258ed4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36afc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x308684, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) check_thread_history;
    
    // [ExpCleanupAutoExpandPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe5cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x38dee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399538, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4de0, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) cleanup_auto_expand_push_lock;
    
    // [ExpClockIntervalRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31460, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19660, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) clock_interval_request;
    
    // [ExpCloseWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46be84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ec900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71dec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70aad0, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) close_worker_factory;
    
    // [ExpCompositionMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1dc0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96630, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a360, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95820, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) composition_mapping;
    
    // [ExpCompressionProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x257060, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1f48, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x19c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1020, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) compression_process_name;
    
    // [ExpComputeLookasideDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb17b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ec44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b934, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec1d4, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) compute_lookaside_depth;
    
    // [ExpConDrvLoadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a268, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51258, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2a8, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) con_drv_load_lock;
    
    // [ExpControlKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf70, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19270, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31320, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc192d0, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) control_key;
    
    // [ExpConvertArcName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b2aa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94c30c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef398, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94abec, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) convert_arc_name;
    
    // [ExpConvertLdrEntryToModuleInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558164, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7938dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79905c, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) convert_ldr_entry_to_module_info;
    
    // [ExpConvertSignatureName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b2c54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94c4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef55c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94adb0, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) convert_signature_name;
    
    // [ExpCopyProcessInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4234b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6925a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76cbe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6161a0, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) copy_process_info;
    
    // [ExpCoreMessagingMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1e00, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96650, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a380, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95840, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) core_messaging_mapping;
    
    // [ExpCovCreateUnloadedModuleEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b95e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f92b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x952360, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) cov_create_unloaded_module_entry;
    
    // [ExpCovCurrentPagedPoolInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359210, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b920, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e30, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) cov_current_paged_pool_in_use;
    
    // [ExpCovDeleteUnloadedModuleEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b985c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953d04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f9518, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9525e4, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) cov_delete_unloaded_module_entry;
    
    // [ExpCovFreeUnloadedModuleEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b98d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f9594, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x952660, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) cov_free_unloaded_module_entry;
    
    // [ExpCovGetSectionInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4215dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73e818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x784eb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x746458, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) cov_get_section_info;
    
    // [ExpCovIsLoadedModulePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b9928, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f95f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9526c0, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) cov_is_loaded_module_present;
    
    // [ExpCovIsModulePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b9958, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953e18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f962c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9526f8, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) cov_is_module_present;
    
    // [ExpCovIsUnLoadedModulePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b99f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953ec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f96d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9527a0, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) cov_is_un_loaded_module_present;
    
    // [ExpCovPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbc70, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15f70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c748, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15fd0, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) cov_push_lock;
    
    // [ExpCovQueryHypervisorInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b9a24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953ef4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f9708, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9527d4, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) cov_query_hypervisor_information;
    
    // [ExpCovQueryInfoCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b9c0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9540d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f98e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9529b0, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) cov_query_info_call_back;
    
    // [ExpCovQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b9c90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95415c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f996c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x952a3c, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) cov_query_information;
    
    // [ExpCovQueryLoadedModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ba1a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95465c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f9e90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x952f3c, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) cov_query_loaded_module;
    
    // [ExpCovReadFriendlyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ba30c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9547cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fa00c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9530ac, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) cov_read_friendly_name;
    
    // [ExpCovReadRequestBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ba390, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95485c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fa09c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95313c, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) cov_read_request_buffer;
    
    // [ExpCovResetInfoCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ba4cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9549a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fa1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x953280, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) cov_reset_info_call_back;
    
    // [ExpCovResetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ba50c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9549e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fa214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9532c4, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) cov_reset_information;
    
    // [ExpCovUnloadedModuleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbc60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15f60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c750, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15fc0, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) cov_unloaded_module_list;
    
    // [ExpCpuSetSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982d60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa669d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x981640, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) cpu_set_security_descriptor;
    
    // [ExpCreateOutputARC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b2e64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94c714, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef7a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94aff4, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) create_output_arc;
    
    // [ExpCreateOutputEFI]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b2f50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94c80c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef898, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94b0ec, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) create_output_efi;
    
    // [ExpCreateOutputNT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b3128, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94c9ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84c53c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94b2cc, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) create_output_nt;
    
    // [ExpCreateOutputSIGNATURE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b31f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94cabc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9efa68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94b39c, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) create_output_signature;
    
    // [ExpCreateWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41c41c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x695c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6258, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x654e28, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) create_worker_thread;
    
    // [ExpCritSecOutOfMemoryEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbc10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15f18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c790, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15f60, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) crit_sec_out_of_memory_event;
    
    // [ExpCurrentProfileUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359214, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b918, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e68, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) current_profile_usage;
    
    // [ExpDebuggerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc3e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16740, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d000, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16780, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) debugger_dpc;
    
    // [ExpDebuggerDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea4d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbdd0, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) debugger_dpc_routine;
    
    // [ExpDebuggerPageIn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc428, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16720, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cfc8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16760, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) debugger_page_in;
    
    // [ExpDebuggerProcessAttach]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc420, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16728, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cfd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16768, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) debugger_process_attach;
    
    // [ExpDebuggerProcessKill]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc380, 0x32828 bytes
    // ntoskrnl.exe .data:0xc166e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cfb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16720, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) debugger_process_kill;
    
    // [ExpDebuggerWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5f44, 0x32828 bytes
    // ntoskrnl.exe .data:0xc10d2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b4cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10d8c, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) debugger_work;
    
    // [ExpDebuggerWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc440, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cfe0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16740, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) debugger_work_item;
    
    // [ExpDebuggerWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6e64, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b3030, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9dca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b2030, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) debugger_worker;
    
    // [ExpDeleteCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b2758, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eedf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x764b90, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) delete_callback;
    
    // [ExpDeleteMutant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5bb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbc60, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) delete_mutant;
    
    // [ExpDeleteTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x912a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x291a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x372e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x236430, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) delete_timer;
    
    // [ExpDeleteTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x483180, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68f400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x720150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70aaf0, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) delete_timer2;
    
    // [ExpDeleteWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7118, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eaa50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2da9e0, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) delete_worker_factory;
    
    // [ExpDereferenceHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b9488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95379c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f476c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95207c, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) dereference_host;
    
    // [ExpDesktopMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1df0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96640, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a330, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95830, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) desktop_mapping;
    
    // [ExpEnumerateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd28ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x26a290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399ca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b920, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) enumerate_callback;
    
    // [ExpEnvironmentLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc520, 0x32828 bytes
    // ntoskrnl.exe .data:0xc167a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d060, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc167e0, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) environment_lock;
    
    // [ExpEventInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a90bc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa7023c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb6020c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f580, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) event_initialization;
    
    // [ExpEventMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1db0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa965f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a310, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa957e0, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) event_mapping;
    
    // [ExpExpandResourceOwnerTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb2544, 0x32828 bytes
    // ntoskrnl.exe .text:0x256c6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b224, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306318, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) expand_resource_owner_table;
    
    // [ExpExpirationThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6afb90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9486d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eb4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946fa0, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) expiration_thread;
    
    // [ExpFinalizeTimerDeletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12eda0, 0x32828 bytes
    // ntoskrnl.exe .text:0x267d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318c30, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) finalize_timer_deletion;
    
    // [ExpFindArcName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b33b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94cc84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9efc30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94b564, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) find_arc_name;
    
    // [ExpFindCurrentThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb2390, 0x32828 bytes
    // ntoskrnl.exe .text:0x310b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x294600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2830f0, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) find_current_thread;
    
    // [ExpFindDiskSignature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b3674, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94cf70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eff1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94b850, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) find_disk_signature;
    
    // [ExpFindEmptyEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb2044, 0x32828 bytes
    // ntoskrnl.exe .text:0x256c0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b1c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3062b8, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) find_empty_entry;
    
    // [ExpFindHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55f884, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78f9a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82df0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6158, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) find_host;
    
    // [ExpFirmwarePageProtectionSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe068, 0x32828 bytes
    // ntoskrnl.exe .data:0xc196f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc316a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19758, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) firmware_page_protection_supported;
    
    // [ExpFirmwareTableProviderListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdff0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19770, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31690, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc197d0, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) firmware_table_provider_list_head;
    
    // [ExpFirmwareTableResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe000, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19760, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) firmware_table_resource;
    
    // [ExpFlushGeneralLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e9d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30eb60, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) flush_general_lookaside;
    
    // [ExpFreeAsid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22e6ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b2970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f8a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b27f0, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) free_asid;
    
    // [ExpFreeHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485d44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x609524, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73ecd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d6094, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) free_handle_table;
    
    // [ExpFreeHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425c08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69395c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68c73c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f196c, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) free_handle_table_entry;
    
    // [ExpFreeLowLevelTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60964c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73edac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d61bc, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) free_low_level_table;
    
    // [ExpFreePoolChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c690, 0x32828 bytes
    // ntoskrnl.exe .text:0x35da8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d0ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fad5c, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) free_pool_checks;
    
    // [ExpFreeTablePagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485e48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60968c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73edec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d61fc, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) free_table_paged_pool;
    
    // [ExpFullProcessInfoInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a628, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b628, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51638, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b628, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) full_process_info_init;
    
    // [ExpGenuinePolicyPostProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a15c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94a730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ed680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x949010, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) genuine_policy_post_process;
    
    // [ExpGetDeviceDataInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6add98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x946ff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea0d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9458c8, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) get_device_data_information;
    
    // [ExpGetDriveGeometry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b3854, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94d3cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f0340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94bcac, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) get_drive_geometry;
    
    // [ExpGetFirmwareEnvironmentVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b3994, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94d524, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727f3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94be04, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) get_firmware_environment_variable;
    
    // [ExpGetGlobalLocaleSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46b080, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f185c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c918c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fa56c, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) get_global_locale_section;
    
    // [ExpGetHandleExtraInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b00a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9498a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x897a0a, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x948180, 0x1fe000 bytes
    //
    _q53(sdk::function<struct nt::handle_table_entry_info_t*(struct nt::handle_table_t*, void*)>*) get_handle_extra_info;
    
    // [ExpGetHandleInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6adf7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947204, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea2e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x945ad4, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) get_handle_information;
    
    // [ExpGetHandleInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6adfe8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947284, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea364, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x945b54, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) get_handle_information_ex;
    
    // [ExpGetLockInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ae054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea3e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x945bd4, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) get_lock_information;
    
    // [ExpGetLookasideInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22bafc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5abc20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f0670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5abaa0, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) get_lookaside_information;
    
    // [ExpGetNextCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f0b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d8b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7580a0, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) get_next_callback;
    
    // [ExpGetNextHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e270, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x642df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76d19c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b7e10, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) get_next_handle_table_entry;
    
    // [ExpGetObjectInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ae0c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947384, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea464, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x945c54, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) get_object_information;
    
    // [ExpGetPartitionTableInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b3a64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94d5f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f0494, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94bed8, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) get_partition_table_info;
    
    // [ExpGetPoolTagInfoTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7d80, 0x32828 bytes
    // ntoskrnl.exe .text:0x244950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2165b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef960, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) get_pool_tag_info_target;
    
    // [ExpGetProcessInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b6450, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d2fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68d790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x629420, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) get_process_information;
    
    // [ExpGetProductInfoSuiteTypeMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5665f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79faf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82f708, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a7d14, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) get_product_info_suite_type_map;
    
    // [ExpGetSystemBasicInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeed18, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e894, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b54c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x20538c, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) get_system_basic_information;
    
    // [ExpGetSystemEmulationBasicInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8260, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e6f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b3b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30cb90, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) get_system_emulation_basic_information;
    
    // [ExpGetSystemEmulationProcessorInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b194, 0x32828 bytes
    // ntoskrnl.exe .text:0x248abc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37c940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x326bfc, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) get_system_emulation_processor_information;
    
    // [ExpGetSystemFirmwareTableInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x493444, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66553c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4c04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d878c, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) get_system_firmware_table_information;
    
    // [ExpGetSystemPlatformBinary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56cc60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b1ab4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x869bbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9644, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) get_system_platform_binary;
    
    // [ExpGetSystemProcessorFeaturesInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ae13c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947414, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea4f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x945ce4, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) get_system_processor_features_information;
    
    // [ExpGetSystemProcessorInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b1e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2492c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3688c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3270b0, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) get_system_processor_information;
    
    // [ExpHostList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a308, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53980, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc10, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) host_list;
    
    // [ExpHostListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a180, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c928, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c928, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) host_list_lock;
    
    // [ExpHotTagArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce068, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54098, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f098, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54098, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) hot_tag_array;
    
    // [ExpInitBootEntropyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56b6d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ace40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862a30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b4a60, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) init_boot_entropy_information;
    
    // [ExpInitFullProcessSecurityInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x57069c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x869a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bbd30, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) init_full_process_security_info;
    
    // [ExpInitSystemPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a1020, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa657ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb369cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa64e8c, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) init_system_phase0;
    
    // [ExpInitSystemPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78365c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa38f9c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb28464, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3944c, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) init_system_phase1;
    
    // [ExpInitializeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed860, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65ba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980950, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) initialize_callback;
    
    // [ExpInitializeCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a4768, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6aee4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb57d24, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6a7dc, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) initialize_callbacks;
    
    // [ExpInitializeSessionDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53800c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x771720, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ac08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77912c, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) initialize_session_driver;
    
    // [ExpInitializeSvm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a78a8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6e734, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5ca40, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6dcec, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) initialize_svm;
    
    // [ExpInitializeThreadHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e13c, 0x32828 bytes
    // ntoskrnl.exe .text:0x208c18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f90c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0668, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) initialize_thread_history;
    
    // [ExpInsertLowLevelTableIntoFreeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x685e04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x740920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671390, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) insert_low_level_table_into_free_list;
    
    // [ExpInsertPoolTrackerExpansion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf22a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x360538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f2f58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f7948, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) insert_pool_tracker_expansion;
    
    // [ExpInsertTimerResolutionEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4ba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x216e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377e98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202978, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) insert_timer_resolution_entry;
    
    // [ExpInterlockedFlushSList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1636f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbe40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4308a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd720, 0x1fe000 bytes
    //
    _q87(sdk::function<struct nt::slist_entry_t*(union nt::slist_header_t*)>*) interlocked_flush_s_list;
    
    // [ExpInterlockedPopEntrySList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163670, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbdc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd6a0, 0x1fe000 bytes
    //
    _q88(sdk::function<struct nt::slist_entry_t*(union nt::slist_header_t*)>*) interlocked_pop_entry_s_list;
    
    // [ExpInterlockedPopEntrySListEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163690, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbde0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430840, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd6c0, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) interlocked_pop_entry_s_list_end;
    
    // [ExpInterlockedPopEntrySListFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163687, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbdd7, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430837, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd6b7, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) interlocked_pop_entry_s_list_fault;
    
    // [ExpInterlockedPopEntrySListResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x163677, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbdc7, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430827, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd6a7, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) interlocked_pop_entry_s_list_resume;
    
    // [ExpInterlockedPushEntrySList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1636b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fbe00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x430860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3fd6e0, 0x1fe000 bytes
    //
    _q92(sdk::function<struct nt::slist_entry_t*(union nt::slist_header_t*, struct nt::slist_entry_t*)>*) interlocked_push_entry_s_list;
    
    // [ExpIRTimerObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa2a0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb798, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de00, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb798, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) ir_timer_object_type;
    
    // [ExpIsDevicePathForRemovableMedia]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22dc70, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0538, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0b70, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) is_device_path_for_removable_media;
    
    // [ExpIsPoolReadyForWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeb940, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c2870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b3a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2262d0, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) is_pool_ready_for_work;
    
    // [ExpKernelRequestedTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf50, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19650, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31518, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc196b0, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) kernel_requested_timer_resolution;
    
    // [ExpKernelResolutionCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19654, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3151c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc196b4, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) kernel_resolution_count;
    
    // [ExpKernelResolutionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19640, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31508, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc196a0, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) kernel_resolution_lock;
    
    // [ExpKeyManipLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19268, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31330, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc192e0, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) key_manip_lock;
    
    // [ExpKeyedEventInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a4cb8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6be68, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb59fa4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b760, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) keyed_event_initialization;
    
    // [ExpKeyedEventObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1c8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa250, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c290, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa250, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) keyed_event_object_type;
    
    // [ExpLargePoolTableLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc190e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19128, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) large_pool_table_lock;
    
    // [ExpLastRequestedTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5da4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f0fc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc097b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f13c, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) last_requested_time;
    
    // [ExpLeaveWorkerFactoryAwayMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa83b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x207f6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed53c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2740, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) leave_worker_factory_away_mode;
    
    // [ExpLeftoverBootRngData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbe60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15fa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cb60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15fe0, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) leftover_boot_rng_data;
    
    // [ExpLegacyWorkerInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x145bcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c1cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9aec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c2b00, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) legacy_worker_initialization;
    
    // [ExpLFGRngLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc198, 0x32828 bytes
    // ntoskrnl.exe .data:0xc164a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2ce88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc164e8, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) lfg_rng_lock;
    
    // [ExpLFGRngState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbc80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc162e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16320, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) lfg_rng_state;
    
    // [ExpLicUpdateChecksum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b768, 0x32828 bytes
    // ntoskrnl.exe .text:0x5acd98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f45e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5acc18, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) lic_update_checksum;
    
    // [ExpLicenseInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdfb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31308, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19260, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) license_info;
    
    // [ExpLicenseInfoCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdfb8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31300, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc192a0, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) license_info_count;
    
    // [ExpLicenseWatchInitWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79786c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4445c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2244c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3e844, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) license_watch_init_worker;
    
    // [ExpLookupHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b6400, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d4f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bfa30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62b340, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) lookup_handle_table_entry;
    
    // [ExpLuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faa28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12ce8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d58, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) luid;
    
    // [ExpLuidIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286b50, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x3a610, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x46b40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3a950, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) luid_increment;
    
    // [ExpManufacturingInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe0e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc196e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19740, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) manufacturing_information;
    
    // [ExpMaxTimeSeperationBeforeCorrect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b84, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ed4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb24, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f34, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) max_time_seperation_before_correct;
    
    // [ExpMaximumKernelWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c88, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12088, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120e8, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) maximum_kernel_worker_threads;
    
    // [ExpMultiUserTS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce560, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546a4, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f6bc, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546a4, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) multi_user_ts;
    
    // [ExpMutantInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8728, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6f380, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5f0cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e710, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) mutant_initialization;
    
    // [ExpMutantMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1d70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa965a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a2c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95790, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) mutant_mapping;
    
    // [ExpNewThreadNecessary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8ed30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c2820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b33d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x226280, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) new_thread_necessary;
    
    // [ExpNextYearDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22bf1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ac470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f15c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac2f0, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) next_year_dpc_routine;
    
    // [ExpNtExpirationDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac50, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53850, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cad0, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) nt_expiration_date;
    
    // [ExpOkToTimeRefresh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdda0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1948c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc194ec, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) ok_to_time_refresh;
    
    // [ExpOptimizePushLockList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x88b5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20e674, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e6520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a294, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) optimize_push_lock_list;
    
    // [ExpOsProductCacheProviderHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d11c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3214, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bada4, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) os_product_cache_provider_helper;
    
    // [ExpOsProductContentIdCacheProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b205c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94a980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ed8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x949260, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) os_product_content_id_cache_provider;
    
    // [ExpOsProductPfnCacheProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b208c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94a9c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ed910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9492a0, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) os_product_pfn_cache_provider;
    
    // [ExpOwnerEntryToThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9930, 0x32828 bytes
    // ntoskrnl.exe .text:0x357268, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b039c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dcdc8, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) owner_entry_to_thread;
    
    // [ExpParseArcPathName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b3b8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94d7d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f0628, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94c0b8, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) parse_arc_path_name;
    
    // [ExpParseEfiPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b3cc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94d920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84c430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94c200, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) parse_efi_path;
    
    // [ExpParseSignatureName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b3eec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94db34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f0770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94c414, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) parse_signature_name;
    
    // [ExpParseSuiteMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79fb3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82f5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a7d5c, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) parse_suite_mask;
    
    // [ExpPcwDisabledStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b94f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x953968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4978, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x952248, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) pcw_disabled_status;
    
    // [ExpPcwEnableState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1e4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1e0, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) pcw_enable_state;
    
    // [ExpPcwExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a088, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51080, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0a0, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) pcw_extension_host;
    
    // [ExpPcwHostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55f98c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7adf10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863a10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b5b30, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) pcw_host_callback;
    
    // [ExpPlatformBinaryLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0c0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0d8, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) platform_binary_lock;
    
    // [ExpPlatformBinaryTableInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0f8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b100, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b100, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) platform_binary_table_information;
    
    // [ExpPoolBigEntriesInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be100, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22100, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48100, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22100, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) pool_big_entries_in_use;
    
    // [ExpPoolFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb548, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db58, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb548, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) pool_flags;
    
    // [ExpPoolQuotaCookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4b0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9d0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dfb8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb9d0, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) pool_quota_cookie;
    
    // [ExpPoolScanCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324420, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c3bc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c39c, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) pool_scan_count;
    
    // [ExpPrepareNewSvmDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22e738, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b2a78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f8b64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b28f8, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) prepare_new_svm_device;
    
    // [ExpProductInfoSuiteTypeMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ef200, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x983b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa68220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x982450, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) product_info_suite_type_map;
    
    // [ExpProductTypeChangeBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdfa8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19244, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc312a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc192a4, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) product_type_change_buffer;
    
    // [ExpProductTypeIoSb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf90, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19250, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc312c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc192b0, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) product_type_io_sb;
    
    // [ExpProductTypeKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf88, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19260, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31310, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc192c0, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) product_type_key;
    
    // [ExpProductTypeValueInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdfa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc312a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19250, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) product_type_value_info;
    
    // [ExpProfileCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ba6e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x956edc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f6e38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9557bc, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) profile_create;
    
    // [ExpProfileDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bab90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x957400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f73c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x955ce0, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) profile_delete;
    
    // [ExpProfileInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a89b4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6f904, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5f8b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6ed74, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) profile_initialization;
    
    // [ExpProfileMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1d60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa965b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a2d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa957a0, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) profile_mapping;
    
    // [ExpProfileStateMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbc20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15f20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c7a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15f80, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) profile_state_mutex;
    
    // [ExpQueryChannelInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ae2a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75dc88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7656d8, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) query_channel_information;
    
    // [ExpQueryCodeIntegrityCertificateInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ae3bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94751c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677df4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x945dec, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) query_code_integrity_certificate_info;
    
    // [ExpQueryElamCertInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ae590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947758, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8711d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946028, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) query_elam_cert_info;
    
    // [ExpQueryInterruptSteeringInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d97c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b1134, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed7dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8cc4, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) query_interrupt_steering_information;
    
    // [ExpQueryLegacyDriverInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ae874, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947a94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea690, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946364, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) query_legacy_driver_information;
    
    // [ExpQueryMemoryTopologyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5678fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85e158, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1bb0, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) query_memory_topology_information;
    
    // [ExpQueryModuleInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f27a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b020, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) query_module_information;
    
    // [ExpQueryModuleInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558064, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7937cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756db8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x798f4c, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) query_module_information_ex;
    
    // [ExpQueryNumaAvailableMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53ccc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947b8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94645c, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) query_numa_available_memory;
    
    // [ExpQueryNumaProcessorMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41c7c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68c750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7893c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f0624, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) query_numa_processor_map;
    
    // [ExpQueryNumaProximityNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ae95c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947d3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ea93c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94660c, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) query_numa_proximity_node;
    
    // [ExpQueryPortableWorkspaceEfiLauncherInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aeaa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x947e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eaa8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946760, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) query_portable_workspace_efi_launcher_information;
    
    // [ExpQueryProcessorInformationCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a73f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68bed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cf830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f0400, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) query_processor_information_counters;
    
    // [ExpQuerySingleModuleInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aecb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9480a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eac9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946970, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) query_single_module_information;
    
    // [ExpQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c7210, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d6740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69c870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e5c80, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) query_system_information;
    
    // [ExpQuerySystemPerformanceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c5bf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x694120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70f110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5da160, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) query_system_performance_information;
    
    // [ExpQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeb800, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c1430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x289654, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x224e90, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) queue_work_item;
    
    // [ExpRaiseHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b8e30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9530ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f494, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9519cc, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) raise_hard_error;
    
    // [ExpRawInputManagerMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1dd0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96660, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a350, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95850, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) raw_input_manager_mapping;
    
    // [ExpReadComPlusPackage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a39b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ead94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ece30, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) read_com_plus_package;
    
    // [ExpRealTimeIsUniversal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342608, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b74, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17618, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b74, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) real_time_is_universal;
    
    // [ExpRecordShutdownTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22bf44, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ac4a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1628, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac320, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) record_shutdown_time;
    
    // [ExpRefreshSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x543880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x785afc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84c844, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78f89c, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) refresh_system_time;
    
    // [ExpRefreshTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542518, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x785ee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84c8e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78fc84, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) refresh_time_zone_information;
    
    // [ExpRegisterFirmwareTableInformationHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56b394, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ad128, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8660d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b4d48, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) register_firmware_table_information_handler;
    
    // [ExpReleaseFannedOutPushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131b7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38cda4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399338, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38de34, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) release_fanned_out_push_lock_exclusive;
    
    // [ExpReleaseFastMutexContended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x898fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x20f3ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e4d54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a79c, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) release_fast_mutex_contended;
    
    // [ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d418, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afce4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afb64, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) release_spin_lock_exclusive_from_dpc_level_instrumented;
    
    // [ExpReleaseSpinLockSharedFromDpcLevelInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d438, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afd14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afb94, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) release_spin_lock_shared_from_dpc_level_instrumented;
    
    // [ExpRemainingLeftoverBootRngData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc190, 0x32828 bytes
    // ntoskrnl.exe .data:0xc164b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cb48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc164f0, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) remaining_leftover_boot_rng_data;
    
    // [ExpRemoveCurrentThreadFromThreadHistory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcada0, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e6cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ccec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ecc0, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) remove_current_thread_from_thread_history;
    
    // [ExpRemoveGeneralLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7aa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e3c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36eaa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ec34, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) remove_general_lookaside;
    
    // [ExpRemoveHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485e84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x609478, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73ef54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d5fe8, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) remove_handle_table;
    
    // [ExpRemovePoolTrackerExpansion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce88c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25669c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46948a, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305bac, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) remove_pool_tracker_expansion;
    
    // [ExpResizeBigPageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xabb34, 0x32828 bytes
    // ntoskrnl.exe .text:0x370740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b5948, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x371ac0, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) resize_big_page_table;
    
    // [ExpResourceEnforceOwnerTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc5e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16870, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d130, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc168b0, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) resource_enforce_owner_transfer;
    
    // [ExpResourceIoBoosted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32441c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c3b4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c394, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) resource_io_boosted;
    
    // [ExpResourceIoBoostedShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324418, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c3b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c390, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) resource_io_boosted_shared;
    
    // [ExpResourceSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be0c0, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd220c0, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd480c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd220c0, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) resource_spin_lock;
    
    // [ExpRestrictedGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25eb58, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbcc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64160, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9c40, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) restricted_generic_mapping;
    
    // [ExpRevokeBootLoaderPagePrivileges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7ba1ac, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8aed4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7c838, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8a154, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) revoke_boot_loader_page_privileges;
    
    // [ExpRNGAuxiliarySeed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc1a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15f80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2ce84, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16500, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) rng_auxiliary_seed;
    
    // [ExpSaAllocatorAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131d1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38ceec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee348, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38df7c, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) sa_allocator_allocate;
    
    // [ExpSaAllocatorFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133314, 0x32828 bytes
    // ntoskrnl.exe .text:0x38fd44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3710c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x390d94, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) sa_allocator_free;
    
    // [ExpSaAllocatorInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1471e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c5084, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df35c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5df4, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) sa_allocator_initialize;
    
    // [ExpSaAllocatorOptimizeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1334b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b42f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c12c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4170, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) sa_allocator_optimize_list;
    
    // [ExpSaBinaryArrayInsert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1321ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x38db8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a7ea8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ec1c, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) sa_binary_array_insert;
    
    // [ExpSaBinaryArrayRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133628, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b43c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c364, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4240, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) sa_binary_array_remove;
    
    // [ExpSaInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146fb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c4ebc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df184, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5c2c, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) sa_initialize;
    
    // [ExpSaPageGroupAllocateMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131eac, 0x32828 bytes
    // ntoskrnl.exe .text:0x38d35c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee62c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38e3ec, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) sa_page_group_allocate_memory;
    
    // [ExpSaPageGroupDescriptorAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131f88, 0x32828 bytes
    // ntoskrnl.exe .text:0x38d708, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a7adc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38e798, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) sa_page_group_descriptor_allocate;
    
    // [ExpSaPageGroupDescriptorFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13353c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b4408, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c1b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4288, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) sa_page_group_descriptor_free;
    
    // [ExpSaPageGroupFreeMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13340c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38ff4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x371310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x390f9c, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) sa_page_group_free_memory;
    
    // [ExpSafeWcslen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b41e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94de40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84be54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94c720, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) safe_wcslen;
    
    // [ExpScanCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324424, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c3b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c398, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) scan_count;
    
    // [ExpScanGeneralLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1540, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ebf10, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) scan_general_lookaside_list;
    
    // [ExpScanSystemLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1630, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ea80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34b770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ec010, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) scan_system_lookaside_list;
    
    // [ExpScratchBufferLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341980, 0x32828 bytes
    // ntoskrnl.exe .data:0xceeb00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xceeb00, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) scratch_buffer_lookaside_list;
    
    // [ExpSecureBootVendorGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286b30, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x3a5f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x46b20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3a930, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) secure_boot_vendor_guid;
    
    // [ExpSecureSystemProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25d258, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1fd8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x19d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x10b8, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) secure_system_process_name;
    
    // [ExpSeedHotTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78b6ec, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa65518, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb52dec, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa64bf8, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) seed_hot_tags;
    
    // [ExpSemaphoreInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a902c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70198, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60168, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f4dc, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) semaphore_initialization;
    
    // [ExpSemaphoreMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1da0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa965e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a300, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa957d0, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) semaphore_mapping;
    
    // [ExpSetBootEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b420c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94de70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f0a70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94c750, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) set_boot_entry;
    
    // [ExpSetDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b49c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94e664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f1200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94cf44, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) set_driver_entry;
    
    // [ExpSetFirmwareEnvironmentVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b4f90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94ec3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f17f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94d51c, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) set_firmware_environment_variable;
    
    // [ExpSetHandleExtraInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b00e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9498e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eca50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9481c8, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) set_handle_extra_info;
    
    // [ExpSetProcessorMicrocodeUpdateInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aedcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x948194, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eae78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946a64, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) set_processor_microcode_update_information;
    
    // [ExpSetSwappingKernelApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cfac4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9942c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa96ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9932d0, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) set_swapping_kernel_apc;
    
    // [ExpSetSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cff5c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995628, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa96838, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994638, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) set_system_time;
    
    // [ExpSetTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aee20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9481fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eaee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946acc, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) set_time_zone_information;
    
    // [ExpSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff244, 0x32828 bytes
    // ntoskrnl.exe .text:0x374b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x354f7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x375e90, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) set_timer;
    
    // [ExpSetTimer2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff000, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f324, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2424f4, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) set_timer2;
    
    // [ExpSetWorkerFactoryDeferredCreateTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46bf50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dfcc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5a50, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) set_worker_factory_deferred_create_timer;
    
    // [ExpSetupKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fad18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12f88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dfc8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13008, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) setup_key;
    
    // [ExpSetupModeDetected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fad21, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12f91, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dfd1, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13011, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) setup_mode_detected;
    
    // [ExpShutdownWorkerFactory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8098, 0x32828 bytes
    // ntoskrnl.exe .text:0x207a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f85c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b468, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) shutdown_worker_factory;
    
    // [ExpShuttingDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab83, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b7, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534b3, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b7, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) shutting_down;
    
    // [ExpSnapShotHandleTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b0198, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9499a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x897a52, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x948280, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) snap_shot_handle_tables;
    
    // [ExpSpecialAllocations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc6c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1688c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d218, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc168c4, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) special_allocations;
    
    // [ExpStringCapture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6af0c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9484ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eb240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946d7c, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) string_capture;
    
    // [ExpSvmAgents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc340, 0x32828 bytes
    // ntoskrnl.exe .data:0xc165c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cea0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16620, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) svm_agents;
    
    // [ExpSvmDereferenceAsid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22e90c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b2cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f9640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b2b50, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) svm_dereference_asid;
    
    // [ExpSvmDereferenceDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22e96c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b2db4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f9728, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b2c34, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) svm_dereference_device;
    
    // [ExpSvmDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ea84, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b3200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f99c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b3080, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) svm_dpc_routine;
    
    // [ExpSvmFaultRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ea9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b3230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f99f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b30b0, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) svm_fault_routine;
    
    // [ExpSvmIommuSystemContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc368, 0x32828 bytes
    // ntoskrnl.exe .data:0xc165b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cf28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16618, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) svm_iommu_system_context;
    
    // [ExpSvmNumberOfWorkQueues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc328, 0x32828 bytes
    // ntoskrnl.exe .data:0xc165e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cf38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16648, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) svm_number_of_work_queues;
    
    // [ExpSvmReferenceAsid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22eae4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b3280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f9a40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b3100, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) svm_reference_asid;
    
    // [ExpSvmServicePageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22eb80, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b33a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f9b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b3220, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) svm_service_page_fault;
    
    // [ExpSvmStaticWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc2c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cec0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16660, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) svm_static_work_queue;
    
    // [ExpSvmWorkQueues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc370, 0x32828 bytes
    // ntoskrnl.exe .data:0xc165b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cf30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16610, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) svm_work_queues;
    
    // [ExpSvmWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ec6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b3510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f9cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b3390, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) svm_worker_thread;
    
    // [ExpSystemErrorHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x164ba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3fda40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4325e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ff320, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) system_error_handler;
    
    // [ExpSystemErrorHandler2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3df7bc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b03c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa96d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9af330, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) system_error_handler2;
    
    // [ExpSystemIsInCmosMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5f40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc10d29, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b4c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10d89, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) system_is_in_cmos_mode;
    
    // [ExpSystemProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x257050, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1f38, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x19b8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1010, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) system_process_name;
    
    // [ExpSystemResourcesList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc5f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d120, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc168a0, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) system_resources_list;
    
    // [ExpSystemSetupInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fad20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12f90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dfd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13010, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) system_setup_in_progress;
    
    // [ExpTaggedPoolLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc190f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31248, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19130, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) tagged_pool_lock;
    
    // [ExpTickCountMultiplier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdfe0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc312a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19248, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) tick_count_multiplier;
    
    // [ExpTimeRefreshCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11100c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2715a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323130, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) time_refresh_callback;
    
    // [ExpTimeRefreshDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdce0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19520, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc313e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19580, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) time_refresh_dpc;
    
    // [ExpTimeRefreshDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3aa4, 0x32828 bytes
    // ntoskrnl.exe .text:0x243850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39cf00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323d10, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) time_refresh_dpc_routine;
    
    // [ExpTimeRefreshInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19648, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31510, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc196a8, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) time_refresh_interval;
    
    // [ExpTimeRefreshLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fde80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19580, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc314a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc195e0, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) time_refresh_lock;
    
    // [ExpTimeRefreshTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fddc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19400, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19460, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) time_refresh_timer;
    
    // [ExpTimeRefreshWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c911c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98cab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74770, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98b3d0, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) time_refresh_work;
    
    // [ExpTimeRefreshWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fde60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc193e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31420, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19440, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) time_refresh_work_item;
    
    // [ExpTimeZoneDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133800, 0x32828 bytes
    // ntoskrnl.exe .text:0x390420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1710, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391470, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) time_zone_dpc_routine;
    
    // [ExpTimeZoneWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6afbc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x948a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eba40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9472d0, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) time_zone_work;
    
    // [ExpTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc5e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15f78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c738, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15fd8, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) timeout;
    
    // [ExpTimerApcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1340, 0x32828 bytes
    // ntoskrnl.exe .text:0x2000b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x379a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2000b0, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) timer_apc_routine;
    
    // [ExpTimerDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1410, 0x32828 bytes
    // ntoskrnl.exe .text:0x26c760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x379030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31dfc0, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) timer_dpc_routine;
    
    // [ExpTimerFreedCookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa012, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b2, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db01, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4b2, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) timer_freed_cookie;
    
    // [ExpTimerInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x782a68, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa38e10, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27e10, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa392c0, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) timer_initialization;
    
    // [ExpTimerMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1e10, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96600, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a320, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa957f0, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) timer_mapping;
    
    // [ExpTimerPause]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xceda4, 0x32828 bytes
    // ntoskrnl.exe .text:0x267738, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e3d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3186f8, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) timer_pause;
    
    // [ExpTimerResolutionCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aef0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53764, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9c4, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) timer_resolution_count;
    
    // [ExpTimerResolutionListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdf40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19630, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31520, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19690, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) timer_resolution_list_head;
    
    // [ExpTimerResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x514c, 0x32828 bytes
    // ntoskrnl.exe .text:0x265e2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382968, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x315f2c, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) timer_resume;
    
    // [ExpTimerSetParametersAreValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff16c, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f44c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b1c44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242e38, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) timer_set_parameters_are_valid;
    
    // [ExpTooLateForErrors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x35920c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b8e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e2c, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) too_late_for_errors;
    
    // [ExpTotalTraceBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74acb0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53550, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7b8, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) total_trace_buffers;
    
    // [ExpTranslateArcPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5058, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94ed08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f18c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94d5e8, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) translate_arc_path;
    
    // [ExpTranslateBootEntryNameToId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94eddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84bd78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94d6bc, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) translate_boot_entry_name_to_id;
    
    // [ExpTranslateDriverEntryNameToId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b51e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94eeb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f1998, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94d790, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) translate_driver_entry_name_to_id;
    
    // [ExpTranslateEfiPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b52dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94efac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84c270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94d88c, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) translate_efi_path;
    
    // [ExpTranslateHexStringToGUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b566c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94f35c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f1a94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94dc3c, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) translate_hex_string_to_guid;
    
    // [ExpTranslateHexStringToULONG]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b57e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94f4e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f1c18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94ddc0, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) translate_hex_string_to_ulong;
    
    // [ExpTranslateHexStringToULONGLONG]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5884, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94f580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f1cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94de60, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) translate_hex_string_to_ulonglong;
    
    // [ExpTranslateNtPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b592c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94f624, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f1d5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94df04, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) translate_nt_path;
    
    // [ExpTranslateSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5bf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94f92c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84c5f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e20c, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) translate_symbolic_link;
    
    // [ExpTryAcquireFannedOutPushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cab0, 0x32828 bytes
    // ntoskrnl.exe .text:0x38cd0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3981e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38dd9c, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) try_acquire_fanned_out_push_lock_exclusive;
    
    // [ExpTryAcquireFannedOutPushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cb88, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c3e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396fbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d470, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) try_acquire_fanned_out_push_lock_shared;
    
    // [ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d45c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afd48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4698a6, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afbc8, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) try_acquire_spin_lock_exclusive_at_dpc_level_instrumented;
    
    // [ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d4e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afdd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6374, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afc54, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) try_acquire_spin_lock_shared_at_dpc_level_instrumented;
    
    // [ExpTryConvertSharedSpinLockExclusiveInstrumented]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d578, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afe5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afcdc, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) try_convert_shared_spin_lock_exclusive_instrumented;
    
    // [ExpTryEnterWorkerFactoryAwayMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7050, 0x32828 bytes
    // ntoskrnl.exe .text:0x2077d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bfbf0, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) try_enter_worker_factory_away_mode;
    
    // [ExpTryExpandAutoExpandPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131a30, 0x32828 bytes
    // ntoskrnl.exe .text:0x38ca24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b4cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38dab4, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) try_expand_auto_expand_push_lock;
    
    // [ExpTypeToPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee5d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c2938, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x289634, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x226f98, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) type_to_priority;
    
    // [ExpUnblockPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a8c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x23dd78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347994, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ebe18, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) unblock_push_lock;
    
    // [ExpUnicodeStringToNonpagedWStr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5d78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94fac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727ecc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e3a8, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) unicode_string_to_nonpaged_w_str;
    
    // [ExpUnknownDeviceGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faa18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12cd8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d48, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) unknown_device_guid;
    
    // [ExpUnlockCallbackListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1468b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a1c9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df3c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a315c, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) unlock_callback_list_exclusive;
    
    // [ExpUpdateComPlusPackage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6af1c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x948598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eb32c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946e68, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) update_com_plus_package;
    
    // [ExpUpdateDebugInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b0364, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x949b74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ecb08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x948454, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) update_debug_info;
    
    // [ExpUpdateProductSuiteTypeInRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x796f44, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa441a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb22514, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3e58c, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) update_product_suite_type_in_registry;
    
    // [ExpUpdateTimerConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72fe4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d704, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x337e58, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) update_timer_configuration;
    
    // [ExpUpdateTimerConfigurationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbfb28, 0x32828 bytes
    // ntoskrnl.exe .text:0x25dc70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32bc70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30e3c0, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) update_timer_configuration_worker;
    
    // [ExpUpdateTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72ecc, 0x32828 bytes
    // ntoskrnl.exe .text:0x216c74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377cdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202a40, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) update_timer_resolution;
    
    // [ExpUuidCacheValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a018, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b006, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5101b, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b006, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) uuid_cache_valid;
    
    // [ExpUuidCachedValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a2a8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51288, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2e0, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) uuid_cached_values;
    
    // [ExpUuidGetValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570fc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4fd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bcc44, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) uuid_get_values;
    
    // [ExpUuidLastTimeAllocated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a210, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b210, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b210, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) uuid_last_time_allocated;
    
    // [ExpUuidLoadSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ff74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b121c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868dec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8dac, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) uuid_load_sequence_number;
    
    // [ExpUuidLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33ee40, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec7c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0c440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec7c0, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) uuid_lock;
    
    // [ExpUuidSaveSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570c80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b1384, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868f58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8f14, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) uuid_save_sequence_number;
    
    // [ExpUuidSaveSequenceNumberIf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4987a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4d54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e40b4, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) uuid_save_sequence_number_if;
    
    // [ExpUuidSeedGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2609e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xe5a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12a10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe058, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) uuid_seed_generic_mapping;
    
    // [ExpUuidSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a080, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b094, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51078, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b094, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) uuid_sequence_number;
    
    // [ExpUuidSequenceNumberNotSaved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a01c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b029, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5101c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b029, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) uuid_sequence_number_not_saved;
    
    // [ExpUuidSequenceNumberValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a03d, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b043, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51035, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b043, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) uuid_sequence_number_valid;
    
    // [ExpUuidTimeSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0a8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b09c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5107c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b09c, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) uuid_time_sequence_number;
    
    // [ExpValidAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63fcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ed64, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) valid_attributes;
    
    // [ExpValidateWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebaec, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c2958, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b3380, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x226fb8, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) validate_work_item;
    
    // [ExpVerifyFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94fb38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84c160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e418, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) verify_file_path;
    
    // [ExpVerifyWindowsOsOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b5f34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94fc94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f205c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94e574, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) verify_windows_os_options;
    
    // [ExpWaitForBootDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c9d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f4b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad190, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) wait_for_boot_devices;
    
    // [ExpWaitForResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x517c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e6180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a7b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x267490, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) wait_for_resource;
    
    // [ExpWaitForSpinLockExclusiveAndAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38860, 0x32828 bytes
    // ntoskrnl.exe .text:0x296c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27d240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23c7f0, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) wait_for_spin_lock_exclusive_and_acquire;
    
    // [ExpWaitForSpinLockSharedAndAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaadc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x211060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x309a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ef840, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) wait_for_spin_lock_shared_and_acquire;
    
    // [ExpWakePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x89760, 0x32828 bytes
    // ntoskrnl.exe .text:0x20f230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a620, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) wake_push_lock;
    
    // [ExpWakeTimerList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc5d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d0a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16880, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) wake_timer_list;
    
    // [ExpWakeTimerLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc5c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16850, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d0b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16890, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) wake_timer_lock;
    
    // [ExpWatchProductTypeWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdfc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc312e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19280, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) watch_product_type_work_item;
    
    // [ExpWin32CloseProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48353c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65d2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c6e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1500, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) win32_close_procedure;
    
    // [ExpWin32DeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48ec88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d79d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6df7b0, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) win32_delete_procedure;
    
    // [ExpWin32Initialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x783138, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa39a44, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb28ac4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa39ef4, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) win32_initialization;
    
    // [ExpWin32OkayToCloseProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482188, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65cbb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c51d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d07c0, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) win32_okay_to_close_procedure;
    
    // [ExpWin32OpenProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x481400, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c36c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0320, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) win32_open_procedure;
    
    // [ExpWin32ParseProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e1b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6650d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d15b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8430, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) win32_parse_procedure;
    
    // [ExpWindowStationMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1de0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96610, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a340, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95800, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) window_station_mapping;
    
    // [ExpWnfAcquireSubscriptionByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f03d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70542c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7557fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x665b3c, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) wnf_acquire_subscription_by_name;
    
    // [ExpWnfAcquireSubscriptionNameInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6716d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dfec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4f38, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) wnf_acquire_subscription_name_instance;
    
    // [ExpWnfAllocateNextPersistentNameSequence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bc9ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716ea4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e8e4, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) wnf_allocate_next_persistent_name_sequence;
    
    // [ExpWnfAllocateScopeInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fcc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67643c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e66ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e969c, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) wnf_allocate_scope_instance;
    
    // [ExpWnfAllocateScopeMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56e028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b184c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868b04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b93dc, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) wnf_allocate_scope_map;
    
    // [ExpWnfCaptureScopeInstanceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fbb94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x618268, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7538d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x668d48, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) wnf_capture_scope_instance_id;
    
    // [ExpWnfCheckCallerAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fbcb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6183e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x753e70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x668ec0, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) wnf_check_caller_access;
    
    // [ExpWnfCheckCrossScopeAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498124, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67050c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dfa84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68bbbc, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) wnf_check_cross_scope_access;
    
    // [ExpWnfCompleteThreadSubscriptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fa358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a6c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7525c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66704c, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) wnf_complete_thread_subscriptions;
    
    // [ExpWnfComposeValueName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f1ab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d4b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x756a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x689f0c, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) wnf_compose_value_name;
    
    // [ExpWnfCreateNameInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fb338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61b600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x751e4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6668a8, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) wnf_create_name_instance;
    
    // [ExpWnfCreateProcessContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d16c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x661264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9924, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4944, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) wnf_create_process_context;
    
    // [ExpWnfDeleteNameInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488240, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65813c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be6f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x665fdc, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) wnf_delete_name_instance;
    
    // [ExpWnfDeleteNameInstanceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x487e44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x657de8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb518, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) wnf_delete_name_instance_callback;
    
    // [ExpWnfDeletePermanentName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65868c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bec38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ecc98, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) wnf_delete_permanent_name;
    
    // [ExpWnfDeletePermanentStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bcc70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9597c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fa4ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9580a4, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) wnf_delete_permanent_state_data;
    
    // [ExpWnfDeleteProcessContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f00a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x705568, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76769c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6654a0, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) wnf_delete_process_context;
    
    // [ExpWnfDeleteScopeById]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9e70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x705b3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66271c, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) wnf_delete_scope_by_id;
    
    // [ExpWnfDeleteScopeInstances]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bcd44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9598ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fa5f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95818c, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) wnf_delete_scope_instances;
    
    // [ExpWnfDeleteStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488588, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6584e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bea8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x666380, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) wnf_delete_state_data;
    
    // [ExpWnfDeleteSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f0838, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7057a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7558dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6656e0, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) wnf_delete_subscription;
    
    // [ExpWnfDeliverThreadNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fa0a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61aae4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x752300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x666d84, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) wnf_deliver_thread_notifications;
    
    // [ExpWnfDispatchKernelSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48ad38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663af4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9d64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7254, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) wnf_dispatch_kernel_subscription;
    
    // [ExpWnfDispatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a2f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf75c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaec0, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) wnf_dispatcher;
    
    // [ExpWnfEnumerateScopeInstances]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7beb2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea0f0, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) wnf_enumerate_scope_instances;
    
    // [ExpWnfFindScopeInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fd790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75510c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ad10, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) wnf_find_scope_instance;
    
    // [ExpWnfFindStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fb730, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x617dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7538a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6688a0, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) wnf_find_state_name;
    
    // [ExpWnfFreeScopeInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x487da4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3e28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8d20, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) wnf_free_scope_instance;
    
    // [ExpWnfGenerateStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f244c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61b088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x755538, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66b480, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) wnf_generate_state_name;
    
    // [ExpWnfGetCurrentScopeInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fd800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61859c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x754d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66907c, 0x1fe000 bytes
    //
    _t68(sdk::unknown_ptr) wnf_get_current_scope_instance;
    
    // [ExpWnfGetNameStoreRegistryRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f19b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7566ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x689da4, 0x1fe000 bytes
    //
    _t69(sdk::unknown_ptr) wnf_get_name_store_registry_root;
    
    // [ExpWnfGetPermanentDataStoreHandleByScopeId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5700e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ab968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3234, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b32e8, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) wnf_get_permanent_data_store_handle_by_scope_id;
    
    // [ExpWnfInsertSubscriptionInPendingQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fbfe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6169a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x754bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x667484, 0x1fe000 bytes
    //
    _t71(sdk::unknown_ptr) wnf_insert_subscription_in_pending_queue;
    
    // [ExpWnfLookupNameInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fb66c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x617cf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7537dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6687d4, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) wnf_lookup_name_instance;
    
    // [ExpWnfLookupPermanentName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f17e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75650c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x689bc4, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) wnf_lookup_permanent_name;
    
    // [ExpWnfNameStoreDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x983a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa67e70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x982320, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) wnf_name_store_descriptors;
    
    // [ExpWnfNotificationMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec368, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ef70, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) wnf_notification_mapping;
    
    // [ExpWnfNotifyNameSubscribers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fbe58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x616830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x754a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x667310, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) wnf_notify_name_subscribers;
    
    // [ExpWnfNotifySubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48abac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75563c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d70ac, 0x1fe000 bytes
    //
    _t77(sdk::unknown_ptr) wnf_notify_subscription;
    
    // [ExpWnfPermanentNameSequenceNumberValueName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec6b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9809d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64588, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f2b0, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) wnf_permanent_name_sequence_number_value_name;
    
    // [ExpWnfPermanentNameSequenceNumberValueName_buffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa657f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9804b0, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) wnf_permanent_name_sequence_number_value_name_buffer;
    
    // [ExpWnfPopulateStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2424, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61b97c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x754e08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66672c, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) wnf_populate_state_data;
    
    // [ExpWnfProcessesListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a738, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b640, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51668, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b640, 0x1fe000 bytes
    //
    _t81(sdk::unknown_ptr) wnf_processes_list_head;
    
    // [ExpWnfProcessesListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74af20, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53798, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9f8, 0x1fe000 bytes
    //
    _t82(sdk::unknown_ptr) wnf_processes_list_lock;
    
    // [ExpWnfQueryCurrentUserSID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496ba8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x618c94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x754ffc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x669774, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) wnf_query_current_user_sid;
    
    // [ExpWnfReadStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fbd44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x618484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x753f14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x668f64, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) wnf_read_state_data;
    
    // [ExpWnfRegisterPermanentName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a18ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2d78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb390, 0x1fe000 bytes
    //
    _t85(sdk::unknown_ptr) wnf_register_permanent_name;
    
    // [ExpWnfReleaseCapturedScopeInstanceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fb278, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x617c28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x753788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x668708, 0x1fe000 bytes
    //
    _t86(sdk::unknown_ptr) wnf_release_captured_scope_instance_id;
    
    // [ExpWnfResolveScopeInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fb75c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x617df4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7539b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6688d4, 0x1fe000 bytes
    //
    _t87(sdk::unknown_ptr) wnf_resolve_scope_instance;
    
    // [ExpWnfSpecializeSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f2544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61b504, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74dbfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66b8f4, 0x1fe000 bytes
    //
    _t88(sdk::unknown_ptr) wnf_specialize_security_descriptor;
    
    // [ExpWnfStartKernelDispatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48aca8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663a48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d71a4, 0x1fe000 bytes
    //
    _t89(sdk::unknown_ptr) wnf_start_kernel_dispatcher;
    
    // [ExpWnfSubcriptionIdCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b458, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cee8, 0x1fe000 bytes
    //
    _t90(sdk::unknown_ptr) wnf_subcription_id_counter;
    
    // [ExpWnfSubscribeNameInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fc488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x618678, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75402c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x669158, 0x1fe000 bytes
    //
    _t91(sdk::unknown_ptr) wnf_subscribe_name_instance;
    
    // [ExpWnfSubscribeWnfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fa6f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x617434, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x752f14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x667f14, 0x1fe000 bytes
    //
    _t92(sdk::unknown_ptr) wnf_subscribe_wnf_state_change;
    
    // [ExpWnfUpdateSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fc8b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x618aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x754450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x669580, 0x1fe000 bytes
    //
    _t93(sdk::unknown_ptr) wnf_update_subscription;
    
    // [ExpWnfValidatePubSubPreconditions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fbc5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x618360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x753df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x668e40, 0x1fe000 bytes
    //
    _t94(sdk::unknown_ptr) wnf_validate_pub_sub_preconditions;
    
    // [ExpWnfWellKnownNameStoreRootKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b460, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cee8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53c48, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cef0, 0x1fe000 bytes
    //
    _t95(sdk::unknown_ptr) wnf_well_known_name_store_root_key;
    
    // [ExpWnfWorkItemRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48acf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7200, 0x1fe000 bytes
    //
    _t96(sdk::unknown_ptr) wnf_work_item_routine;
    
    // [ExpWnfWriteStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fc12c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x616b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x754650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6675e0, 0x1fe000 bytes
    //
    _t97(sdk::unknown_ptr) wnf_write_state_data;
    
    // [ExpWorkerActivityIdSetMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee4a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa66970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x981430, 0x1fe000 bytes
    //
    _t98(sdk::unknown_ptr) worker_activity_id_set_message;
    
    // [ExpWorkerFactoryCheckCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7940, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c4e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x295cb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x245ec0, 0x1fe000 bytes
    //
    _t99(sdk::unknown_ptr) worker_factory_check_create;
    
    // [ExpWorkerFactoryCompletionPacketRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7310, 0x32828 bytes
    // ntoskrnl.exe .text:0x359280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2da270, 0x1fe000 bytes
    //
    _u00(sdk::unknown_ptr) worker_factory_completion_packet_routine;
    
    // [ExpWorkerFactoryCreateThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7df4, 0x32828 bytes
    // ntoskrnl.exe .text:0x207868, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed314, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bfc88, 0x1fe000 bytes
    //
    _u01(sdk::unknown_ptr) worker_factory_create_thread;
    
    // [ExpWorkerFactoryDeferredLongTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc1a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16570, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c8c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc165d0, 0x1fe000 bytes
    //
    _u02(sdk::unknown_ptr) worker_factory_deferred_long_timeout;
    
    // [ExpWorkerFactoryDeferredMediumTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc1b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16580, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c8c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc165e0, 0x1fe000 bytes
    //
    _u03(sdk::unknown_ptr) worker_factory_deferred_medium_timeout;
    
    // [ExpWorkerFactoryDeferredShortTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc230, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16578, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c8d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc165d8, 0x1fe000 bytes
    //
    _u04(sdk::unknown_ptr) worker_factory_deferred_short_timeout;
    
    // [ExpWorkerFactoryInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a76f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6e570, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5d9b8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6db28, 0x1fe000 bytes
    //
    _u05(sdk::unknown_ptr) worker_factory_initialization;
    
    // [ExpWorkerFactoryManagerQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc240, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16500, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16560, 0x1fe000 bytes
    //
    _u06(sdk::unknown_ptr) worker_factory_manager_queue;
    
    // [ExpWorkerFactoryManagerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13ae24, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b1dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c3fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2670, 0x1fe000 bytes
    //
    _u07(sdk::unknown_ptr) worker_factory_manager_thread;
    
    // [ExpWorkerFactoryMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1d80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa965c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a2f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa957b0, 0x1fe000 bytes
    //
    _u08(sdk::unknown_ptr) worker_factory_mapping;
    
    // [ExpWorkerFactoryObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa190, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa168, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c1a8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa168, 0x1fe000 bytes
    //
    _u09(sdk::unknown_ptr) worker_factory_object_type;
    
    // [ExpWorkerFactoryThreadCreationBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc200, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16540, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c7e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc165a0, 0x1fe000 bytes
    //
    _u10(sdk::unknown_ptr) worker_factory_thread_creation_block;
    
    // [ExpWorkerFactoryThreadCreationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e540, 0x32828 bytes
    // ntoskrnl.exe .data:0xcebf60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0ba80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcebf60, 0x1fe000 bytes
    //
    _u11(sdk::unknown_ptr) worker_factory_thread_creation_list;
    
    // [ExpWorkerFactoryThreadCreationState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc280, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16588, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c860, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc165e8, 0x1fe000 bytes
    //
    _u12(sdk::unknown_ptr) worker_factory_thread_creation_state;
    
    // [ExpWorkerFactoryThreadCreationTimeoutInSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c8c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1208c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120ec, 0x1fe000 bytes
    //
    _u13(sdk::unknown_ptr) worker_factory_thread_creation_timeout_in_seconds;
    
    // [ExpWorkerFactoryThreadCreationTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc1c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc164c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c820, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16520, 0x1fe000 bytes
    //
    _u14(sdk::unknown_ptr) worker_factory_thread_creation_timer;
    
    // [ExpWorkerFactoryThreadIdleTimeoutInSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b8c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11edc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f3c, 0x1fe000 bytes
    //
    _u15(sdk::unknown_ptr) worker_factory_thread_idle_timeout_in_seconds;
    
    // [ExpWorkerFactoryWantsToCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc8e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2602f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310b70, 0x1fe000 bytes
    //
    _u16(sdk::unknown_ptr) worker_factory_wants_to_create;
    
    // [ExpWorkerInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a01e4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa676f4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5274c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa66ce4, 0x1fe000 bytes
    //
    _u17(sdk::unknown_ptr) worker_initialization;
    
    // [ExpWorkerQueueTestFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc4f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16688, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cfc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc167c8, 0x1fe000 bytes
    //
    _u18(sdk::unknown_ptr) worker_queue_test_flags;
    
    // [ExpWorkerSwapinMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc3a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc166a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cf80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc166e0, 0x1fe000 bytes
    //
    _u19(sdk::unknown_ptr) worker_swapin_mutex;
    
    // [ExpWorkerSystemAffinityActiveMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee6c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa66a30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9816a0, 0x1fe000 bytes
    //
    _u20(sdk::unknown_ptr) worker_system_affinity_active_message;
    
    // [ExpWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3e440, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c1e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x225870, 0x1fe000 bytes
    //
    _u21(sdk::unknown_ptr) worker_thread;
    
    // [ExpWorkerThreadTimeoutInSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c84, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12084, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd4c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120e4, 0x1fe000 bytes
    //
    _u22(sdk::unknown_ptr) worker_thread_timeout_in_seconds;
    
    // [ExpWorkersCanSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc37c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc166e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cf78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16728, 0x1fe000 bytes
    //
    _u23(sdk::unknown_ptr) workers_can_swap;
    
    // [ExpWstrCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2218, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96a58, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a4f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95c48, 0x1fe000 bytes
    //
    _u24(sdk::unknown_ptr) wstr_callback;
    
    // [ExpYDIB_ExpCX]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x253bf4, 0x13864 bytes
    // win32kfull.sys .text:0x268480, 0x1596d bytes
    // win32kfull.sys .text:0x267ee0, 0x1659e bytes
    // win32kfull.sys .text:0x268390, 0x1596d bytes
    //
    _u25(sdk::unknown_ptr) ydib_exp_cx;
};
#include "magic/api.end.hpp"
