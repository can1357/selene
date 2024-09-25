#pragma once
#include <sdkgen/support_library.hpp>
#include "copy_type_t.hpp"
#include "../nt/hhive_t.hpp"
#include "../sec/subject_context_t.hpp"
#include "../cm/key_control_block_t.hpp"

#include "magic/api.start.hpp"
namespace cmp
{
    // [CmpAcquireHiveLoadUnloadRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGECMRC:0xae167c, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) acquire_hive_load_unload_rundown;
    
    // [CmpAllocBucketLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323b80, 0x32828 bytes
    //
    _m01(sdk::unknown_ptr) alloc_bucket_lock;
    
    // [CmpAllocInited]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x327044, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) alloc_inited;
    
    // [CmpAllocateForNonPagedHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x601720, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) allocate_for_non_paged_hive;
    
    // [CmpAllocatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2dea60, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) allocate_pool;
    
    // [CmpAllocatePoolLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x36e6f0, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) allocate_pool_lookaside;
    
    // [CmpAllocatePoolWithQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x601704, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) allocate_pool_with_quota;
    
    // [CmpAllocateTransientPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x303afc, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) allocate_transient_pool;
    
    // [CmpAllocateTransientPoolWithQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x303b14, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) allocate_transient_pool_with_quota;
    
    // [CmpApplyAdminSdOnHiveFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c4598, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) apply_admin_sd_on_hive_files;
    
    // [CmpArmDelayDerefKCBWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4907e0, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) arm_delay_deref_kcb_worker;
    
    // [CmpBoostActiveHiveWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x494d24, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) boost_active_hive_writer;
    
    // [CmpBootDeviceUsageNotificationSent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a01f, 0x32828 bytes
    //
    _m12(sdk::unknown_ptr) boot_device_usage_notification_sent;
    
    // [CmpBuildGuidString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6ecbd0, 0x32828 bytes
    //
    _m13(sdk::unknown_ptr) build_guid_string;
    
    // [CmpBuildLayersString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa64be0, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) build_layers_string;
    
    // [CmpCheckWrpKeyAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4132d4, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) check_wrp_key_access;
    
    // [CmpCleanUpKcbValueCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4c4988, 0x32828 bytes
    //
    _m16(sdk::unknown_ptr) clean_up_kcb_value_cache;
    
    // [CmpCleanupLightWeightUoWData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa0dd18, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) cleanup_light_weight_uo_w_data;
    
    // [CmpCleanupThreadInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2ca130, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) cleanup_thread_info;
    
    // [CmpCompareLayerDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x871920, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) compare_layer_descriptors;
    
    // [CmpComputeKcbConvKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6059f4, 0x32828 bytes
    //
    _m20(sdk::unknown_ptr) compute_kcb_conv_key;
    
    // [CmpConfigurationManagerKeyObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x341e58, 0x32828 bytes
    //
    _m21(sdk::unknown_ptr) configuration_manager_key_object;
    
    // [CmpCreateServerSiloCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x54206c, 0x32828 bytes
    //
    _m22(sdk::unknown_ptr) create_server_silo_callback;
    
    // [CmpCurrentControlSetPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c2070, 0x32828 bytes
    //
    _m23(sdk::unknown_ptr) current_control_set_path_string;
    
    // [CmpDelayDerefKCBLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f9b48, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) delay_deref_kcb_limit;
    
    // [CmpDelayDerefKCBListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323a10, 0x32828 bytes
    //
    _m25(sdk::unknown_ptr) delay_deref_kcb_list_head;
    
    // [CmpDelayDerefKCBLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323a20, 0x32828 bytes
    //
    _m26(sdk::unknown_ptr) delay_deref_kcb_lock;
    
    // [CmpDelayDerefKCBTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323a80, 0x32828 bytes
    //
    _m27(sdk::unknown_ptr) delay_deref_kcb_timer;
    
    // [CmpDelayDerefKCBTimerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xcf418, 0x32828 bytes
    //
    _m28(sdk::unknown_ptr) delay_deref_kcb_timer_routine;
    
    // [CmpDelayDerefKCBWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323a60, 0x32828 bytes
    //
    _m29(sdk::unknown_ptr) delay_deref_kcb_work_item;
    
    // [CmpDelayDerefKCBWorkItemActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3242e1, 0x32828 bytes
    //
    _m30(sdk::unknown_ptr) delay_deref_kcb_work_item_active;
    
    // [CmpDelayDerefKCBWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4d3530, 0x32828 bytes
    //
    _m31(sdk::unknown_ptr) delay_deref_kcb_worker;
    
    // [CmpDereferenceSecurityNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x303a50, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) dereference_security_node;
    
    // [CmpDestroyTemporaryHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6128c4, 0x32828 bytes
    //
    _m33(sdk::unknown_ptr) destroy_temporary_hive;
    
    // [CmpDoSystemCacheRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x609d70, 0x32828 bytes
    //
    _m34(sdk::unknown_ptr) do_system_cache_read;
    
    // [CmpDoSystemCacheWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x609e34, 0x32828 bytes
    //
    _m35(sdk::unknown_ptr) do_system_cache_write;
    
    // [CmpDoesProcessBelongToServiceSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x70f7ac, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) does_process_belong_to_service_session;
    
    // [CmpDumpKeyToBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGECMRC:0xae1884, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) dump_key_to_buffer;
    
    // [CmpDuplicateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x604f7c, 0x32828 bytes
    //
    _m38(sdk::unknown_ptr) duplicate_key;
    
    // [CmpEditionTokenLayerString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa64c00, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) edition_token_layer_string;
    
    // [CmpEnlistKeyBody]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b65f8, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) enlist_key_body;
    
    // [CmpFailedUnloadListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b170, 0x32828 bytes
    //
    _m41(sdk::unknown_ptr) failed_unload_list_head;
    
    // [CmpFileReadEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x94544, 0x32828 bytes
    //
    _m42(sdk::unknown_ptr) file_read_ex;
    
    // [CmpFindNameInListFromIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6d3a70, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) find_name_in_list_from_index;
    
    // [CmpForceInvalidatePostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x611254, 0x32828 bytes
    //
    _m44(sdk::unknown_ptr) force_invalidate_post_callback;
    
    // [CmpForceInvalidatePreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571bd8, 0x32828 bytes
    //
    _m45(sdk::unknown_ptr) force_invalidate_pre_callback;
    
    // [CmpFreeKCBListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323b60, 0x32828 bytes
    //
    _m46(sdk::unknown_ptr) free_kcb_list_head;
    
    // [CmpGetCompleteFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x743494, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) get_complete_file_name;
    
    // [CmpGetIndexElementSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7dda04, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) get_index_element_size;
    
    // [CmpGetNextFailedUnloadHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd3398, 0x32828 bytes
    //
    _m49(sdk::unknown_ptr) get_next_failed_unload_hive;
    
    // [CmpGetValueDataFromCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4e8278, 0x32828 bytes
    //
    _m50(sdk::unknown_ptr) get_value_data_from_cache;
    
    // [CmpHardwareProfilesCurrentPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c20c0, 0x32828 bytes
    //
    _m51(sdk::unknown_ptr) hardware_profiles_current_path_string;
    
    // [CmpHardwareProfilesPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c20d0, 0x32828 bytes
    //
    _m52(sdk::unknown_ptr) hardware_profiles_path_string;
    
    // [CmpHiveLoadUnloadRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc14260, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) hive_load_unload_rundown;
    
    // [CmpInitDelayDerefKCBEngine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x5703c8, 0x32828 bytes
    //
    _m54(sdk::unknown_ptr) init_delay_deref_kcb_engine;
    
    // [CmpInitServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x77bf44, 0x32828 bytes
    //
    _m55(sdk::unknown_ptr) init_server_silo;
    
    // [CmpInitializeHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x44b6a0, 0x32828 bytes
    //
    _m56(sdk::unknown_ptr) initialize_hive;
    
    // [CmpInitializeIXLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571c34, 0x32828 bytes
    //
    _m57(sdk::unknown_ptr) initialize_ix_lock;
    
    // [CmpInitializePathInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4abc00, 0x32828 bytes
    //
    _m58(sdk::unknown_ptr) initialize_path_info;
    
    // [CmpInitializeThreadInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2ca150, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) initialize_thread_info;
    
    // [CmpIsHiveLoadUnloadRundownActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGECMRC:0xae16bc, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) is_hive_load_unload_rundown_active;
    
    // [CmpIsHiveOnRemovableDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60a030, 0x32828 bytes
    //
    _m61(sdk::unknown_ptr) is_hive_on_removable_disk;
    
    // [CmpIsKcbImmutable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4e6cd0, 0x32828 bytes
    //
    _m62(sdk::unknown_ptr) is_kcb_immutable;
    
    // [CmpIsKcbLockedExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6b5cd0, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) is_kcb_locked_exclusive;
    
    // [CmpIsKeyBodyEligibleForDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGECMRC:0xae1a70, 0x1fd000 bytes
    //
    _m64(sdk::unknown_ptr) is_key_body_eligible_for_dump;
    
    // [CmpIsLockAllowedByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6059c4, 0x32828 bytes
    //
    _m65(sdk::unknown_ptr) is_lock_allowed_by_index;
    
    // [CmpIsMasterHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x48e654, 0x32828 bytes
    //
    _m66(sdk::unknown_ptr) is_master_hive;
    
    // [CmpIsRegistryLockAcquired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2c9910, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) is_registry_lock_acquired;
    
    // [CmpIsShutdownRundownActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGECMRC:0xae15dc, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) is_shutdown_rundown_active;
    
    // [CmpIsVirtEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4af8f0, 0x32828 bytes
    //
    _m69(sdk::unknown_ptr) is_virt_enabled;
    
    // [CmpIsVirtEnabledForSubject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7aec50, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) is_virt_enabled_for_subject;
    
    // [CmpKeyEnumStackEntryStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60fd5c, 0x32828 bytes
    //
    _m71(sdk::unknown_ptr) key_enum_stack_entry_start;
    
    // [CmpKeyEnumStackGetCurrentKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571bcc, 0x32828 bytes
    //
    _m72(sdk::unknown_ptr) key_enum_stack_get_current_key_node_stack;
    
    // [CmpKeyNodeStackEntryCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6112f8, 0x32828 bytes
    //
    _m73(sdk::unknown_ptr) key_node_stack_entry_cleanup;
    
    // [CmpKeyNodeStackEntryInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571c0c, 0x32828 bytes
    //
    _m74(sdk::unknown_ptr) key_node_stack_entry_initialize;
    
    // [CmpLayerVersionCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc13e00, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) layer_version_count;
    
    // [CmpLayerVersions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc13d80, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) layer_versions;
    
    // [CmpLoadLayerVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x870a58, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) load_layer_version;
    
    // [CmpLoadLayerVersions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x870888, 0x1fd000 bytes
    //
    _m78(sdk::unknown_ptr) load_layer_versions;
    
    // [CmpLoadSystemVersionData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x870660, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) load_system_version_data;
    
    // [CmpLockGlobalKeyLockTrackerExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x79251c, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) lock_global_key_lock_tracker_exclusive;
    
    // [CmpLockHiveFlusherShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4ee888, 0x32828 bytes
    //
    _m81(sdk::unknown_ptr) lock_hive_flusher_shared;
    
    // [CmpLockHiveListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x49f9b0, 0x32828 bytes
    //
    _m82(sdk::unknown_ptr) lock_hive_list_shared;
    
    // [CmpLockHiveWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x566380, 0x32828 bytes
    //
    _m83(sdk::unknown_ptr) lock_hive_writer;
    
    // [CmpLockKeyBodyIntoMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa09c54, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) lock_key_body_into_memory;
    
    // [CmpLockSiloKeyLockTrackerExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x792570, 0x1fd000 bytes
    //
    _m85(sdk::unknown_ptr) lock_silo_key_lock_tracker_exclusive;
    
    // [CmpLockSiloKeyLockTrackerShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7925c4, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) lock_silo_key_lock_tracker_shared;
    
    // [CmpLockTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x343058, 0x32828 bytes
    //
    _m87(sdk::unknown_ptr) lock_table;
    
    // [CmpLockTableAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b8bbc, 0x32828 bytes
    //
    _m88(sdk::unknown_ptr) lock_table_add;
    
    // [CmpLockTableConvertSharedToExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b8c54, 0x32828 bytes
    //
    _m89(sdk::unknown_ptr) lock_table_convert_shared_to_exclusive;
    
    // [CmpLockTablePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x342301, 0x32828 bytes
    //
    _m90(sdk::unknown_ptr) lock_table_present;
    
    // [CmpLockTableRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b8cec, 0x32828 bytes
    //
    _m91(sdk::unknown_ptr) lock_table_remove;
    
    // [CmpMachineHiveListInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8279e8, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) machine_hive_list_initialize;
    
    // [CmpMachineHiveVersionKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa644f8, 0x1fd000 bytes
    //
    _m93(sdk::unknown_ptr) machine_hive_version_key_path;
    
    // [CmpMarkIndexDirtyInStorageType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x74b16c, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) mark_index_dirty_in_storage_type;
    
    // [CmpMarkLockTryAcquired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    //
    _m95(sdk::unknown_ptr) mark_lock_try_acquired;
    
    // [CmpMergeVersionDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x871120, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) merge_version_descriptors;
    
    // [CmpOpenHiveFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x742c18, 0x1fd000 bytes
    //
    _m97(sdk::unknown_ptr) open_hive_files;
    
    // [CmpOpenSubKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x323d00, 0x32828 bytes
    //
    _m98(sdk::unknown_ptr) open_sub_keys;
    
    // [CmpPopulateBasicInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4d45f0, 0x32828 bytes
    //
    _m99(sdk::unknown_ptr) populate_basic_information;
    
    // [CmpPopulateCachedInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ba518, 0x32828 bytes
    //
    _n00(sdk::unknown_ptr) populate_cached_information;
    
    // [CmpPopulateFullInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x492280, 0x32828 bytes
    //
    _n01(sdk::unknown_ptr) populate_full_information;
    
    // [CmpPopulateNodeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x485f80, 0x32828 bytes
    //
    _n02(sdk::unknown_ptr) populate_node_information;
    
    // [CmpPromoteSingleKeyFromKeyNodeStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1b724c, 0x32828 bytes
    //
    _n03(sdk::unknown_ptr) promote_single_key_from_key_node_stacks;
    
    // [CmpProtectPoolEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x20a7c0, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) protect_pool_ex;
    
    // [CmpQueryDowncastString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7dcc18, 0x1fd000 bytes
    //
    _n05(sdk::unknown_ptr) query_downcast_string;
    
    // [CmpQueryLayerVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x870ff0, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) query_layer_version_string;
    
    // [CmpQueryLayerVersionUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x870f08, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) query_layer_version_ulong;
    
    // [CmpQuerySecurityDescriptorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4ac1f0, 0x32828 bytes
    //
    _n08(sdk::unknown_ptr) query_security_descriptor_info;
    
    // [CmpReadBuildVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa04660, 0x1fd000 bytes
    //
    _n09(sdk::unknown_ptr) read_build_version;
    
    // [CmpRecordRegistryLockAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2c9830, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) record_registry_lock_acquire;
    
    // [CmpRecordRegistryLockRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2c98a0, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) record_registry_lock_release;
    
    // [CmpRecoverFlushProtocolStateFromFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa0e830, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) recover_flush_protocol_state_from_files;
    
    // [CmpRegistrySystemCloneString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6ec690, 0x32828 bytes
    //
    _n13(sdk::unknown_ptr) registry_system_clone_string;
    
    // [CmpReleaseHiveLoadUnloadRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGECMRC:0xae1658, 0x1fd000 bytes
    //
    _n14(sdk::unknown_ptr) release_hive_load_unload_rundown;
    
    // [CmpRemoveFromDelayedDeref]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50cb8c, 0x32828 bytes
    //
    _n15(sdk::unknown_ptr) remove_from_delayed_deref;
    
    // [CmpRemoveHiveFromMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x607834, 0x32828 bytes
    //
    _n16(sdk::unknown_ptr) remove_hive_from_mapping;
    
    // [CmpRunDownDelayDerefKCBEngine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50c1cc, 0x32828 bytes
    //
    _n17(sdk::unknown_ptr) run_down_delay_deref_kcb_engine;
    
    // [CmpSearchSecurityCellCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x355460, 0x1fd000 bytes
    //
    _n18(sdk::unknown_ptr) search_security_cell_cache;
    
    // [CmpSendBootDeviceUsageNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60a0a4, 0x32828 bytes
    //
    _n19(sdk::unknown_ptr) send_boot_device_usage_notification;
    
    // [CmpServicesKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c1d30, 0x32828 bytes
    //
    _n20(sdk::unknown_ptr) services_key_name;
    
    // [CmpServicingLayersString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa64bf0, 0x1fd000 bytes
    //
    _n21(sdk::unknown_ptr) servicing_layers_string;
    
    // [CmpSetComponentNameAtIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4eec48, 0x32828 bytes
    //
    _n22(sdk::unknown_ptr) set_component_name_at_index;
    
    // [CmpSignalUnloadEventArrayForHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50a80c, 0x32828 bytes
    //
    _n23(sdk::unknown_ptr) signal_unload_event_array_for_hive;
    
    // [CmpSiloMonitor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74adf8, 0x32828 bytes
    //
    _n24(sdk::unknown_ptr) silo_monitor;
    
    // [CmpSnapshotHiveToOffsetArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60a608, 0x32828 bytes
    //
    _n25(sdk::unknown_ptr) snapshot_hive_to_offset_array;
    
    // [CmpStrDatabaseString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6ecc70, 0x32828 bytes
    //
    _n26(sdk::unknown_ptr) str_database_string;
    
    // [CmpSwapPointers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571bb4, 0x32828 bytes
    //
    _n27(sdk::unknown_ptr) swap_pointers;
    
    // [CmpSystemCacheBackedHivesAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x342304, 0x32828 bytes
    //
    _n28(sdk::unknown_ptr) system_cache_backed_hives_allowed;
    
    // [CmpSystemCacheBackedHivesDesired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f9bac, 0x32828 bytes
    //
    _n29(sdk::unknown_ptr) system_cache_backed_hives_desired;
    
    // [CmpSystemSelectPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c21a0, 0x32828 bytes
    //
    _n30(sdk::unknown_ptr) system_select_path_string;
    
    // [CmpTerminateServerSiloCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60588c, 0x32828 bytes
    //
    _n31(sdk::unknown_ptr) terminate_server_silo_callback;
    
    // [CmpThreadInfoLogStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x601210, 0x1fd000 bytes
    //
    _n32(sdk::unknown_ptr) thread_info_log_stack;
    
    // [CmpTouchFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60a1bc, 0x32828 bytes
    //
    _n33(sdk::unknown_ptr) touch_file;
    
    // [CmpTraceHiveFlushBoostedActiveFlusher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x602034, 0x32828 bytes
    //
    _n34(sdk::unknown_ptr) trace_hive_flush_boosted_active_flusher;
    
    // [CmpTraceHiveSaveFileWritten]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x60233c, 0x32828 bytes
    //
    _n35(sdk::unknown_ptr) trace_hive_save_file_written;
    
    // [CmpTraceHiveUnloadStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50baa8, 0x32828 bytes
    //
    _n36(sdk::unknown_ptr) trace_hive_unload_start;
    
    // [CmpTraceHiveUnloadStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50a7b8, 0x32828 bytes
    //
    _n37(sdk::unknown_ptr) trace_hive_unload_stop;
    
    // [CmpTryAcquireIXLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4e6ce0, 0x32828 bytes
    //
    _n38(sdk::unknown_ptr) try_acquire_ix_lock_exclusive;
    
    // [CmpTryAcquireIXLockIntent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4e6ce8, 0x32828 bytes
    //
    _n39(sdk::unknown_ptr) try_acquire_ix_lock_intent;
    
    // [CmpTryToLockHashEntryByIndexExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x609abc, 0x32828 bytes
    //
    _n40(sdk::unknown_ptr) try_to_lock_hash_entry_by_index_exclusive;
    
    // [CmpUnicodeStringAppendCharacter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6683e8, 0x1fd000 bytes
    //
    _n41(sdk::unknown_ptr) unicode_string_append_character;
    
    // [CmpUnlockGlobalKeyLockTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x792460, 0x1fd000 bytes
    //
    _n42(sdk::unknown_ptr) unlock_global_key_lock_tracker;
    
    // [CmpUnlockHiveFlusher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4ee7e8, 0x32828 bytes
    //
    _n43(sdk::unknown_ptr) unlock_hive_flusher;
    
    // [CmpUnlockHiveWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x56631c, 0x32828 bytes
    //
    _n44(sdk::unknown_ptr) unlock_hive_writer;
    
    // [CmpUnlockKeyBodyFromMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa0a10c, 0x1fd000 bytes
    //
    _n45(sdk::unknown_ptr) unlock_key_body_from_memory;
    
    // [CmpUpgradeKcbLockToExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x609c5c, 0x32828 bytes
    //
    _n46(sdk::unknown_ptr) upgrade_kcb_lock_to_exclusive;
    
    // [CmpValueEnumStackGetCurrentValueCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x571bd4, 0x32828 bytes
    //
    _n47(sdk::unknown_ptr) value_enum_stack_get_current_value_cell;
    
    // [CmpVerifyDriverLevelString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7c2cb0, 0x32828 bytes
    //
    _n48(sdk::unknown_ptr) verify_driver_level_string;
    
    // [CmpWaitForHiveLoadUnloadRundownRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa11014, 0x1fd000 bytes
    //
    _n49(sdk::unknown_ptr) wait_for_hive_load_unload_rundown_release;
    
    // [CmpWorkItemInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x827c3c, 0x1fd000 bytes
    //
    _n50(sdk::unknown_ptr) work_item_initialize;
    
    // [CmpWorkItemQueueWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ac548, 0x1fd000 bytes
    //
    _n51(sdk::unknown_ptr) work_item_queue_work;
    
    // [CmpWorkItemWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e3cb0, 0x1fd000 bytes
    //
    _n52(sdk::unknown_ptr) work_item_wrapper;
    
    // [CmpAcquireFlusherQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66ef5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e20d8, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) acquire_flusher_queue;
    
    // [CmpAcquireReconcilerQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66ef40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e20bc, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) acquire_reconciler_queue;
    
    // [CmpAllocatePoolWithQuotaTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2da348, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2421a8, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) allocate_pool_with_quota_tag;
    
    // [CmpAllocatePoolWithTagLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b1d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x25c5c0, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) allocate_pool_with_tag_lookaside;
    
    // [CmpAllocateTransientPoolWithQuotaTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2da348, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2421a8, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) allocate_transient_pool_with_quota_tag;
    
    // [CmpCheckKcbStackAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86df90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c910, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) check_kcb_stack_access;
    
    // [CmpCheckOpenAccessOnKeyBody]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cbbd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x622010, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) check_open_access_on_key_body;
    
    // [CmpDecommisssionKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x533a0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b324, 0x1fd000 bytes
    //
    _n60(sdk::unknown_ptr) decommisssion_kcb;
    
    // [CmpEditionBuildBranchString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9811b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97fa78, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) edition_build_branch_string;
    
    // [CmpEditionBuildLabExString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9811c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97fa98, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) edition_build_lab_ex_string;
    
    // [CmpEditionBuildLabString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9811a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97faa8, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) edition_build_lab_string;
    
    // [CmpEditionBuildNumberString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x981198, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97fa58, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) edition_build_number_string;
    
    // [CmpEditionBuildQfeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x981188, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97fa88, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) edition_build_qfe_string;
    
    // [CmpEditionVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x981168, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97fa68, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) edition_version_string;
    
    // [CmpFindSubKeyInLeaf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x877898, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x875de8, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) find_sub_key_in_leaf;
    
    // [CmpFlushTraceLoggingProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa05ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865e08, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) flush_trace_logging_provider;
    
    // [CmpFullPromoteHiveRootFromKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87c6d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87bb14, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) full_promote_hive_root_from_key_node_stack;
    
    // [CmpGetRegistryNamespaceRootForSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c9650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x61fa90, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) get_registry_namespace_root_for_silo;
    
    // [CmpInvalidateAllHigherLayerKcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8735b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x871ac8, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) invalidate_all_higher_layer_kcbs;
    
    // [CmpKeyNodeStackEntryPopulate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87366c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x871b7c, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) key_node_stack_entry_populate;
    
    // [CmpLightWeightCleanupSetSecDescUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87b30c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87a744, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) light_weight_cleanup_set_sec_desc_uo_w;
    
    // [CmpLockAppHiveLoadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x4ecafc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742b5c, 0x1fd000 bytes
    //
    _n74(sdk::unknown_ptr) lock_app_hive_load_list;
    
    // [CmpLockCallbackListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x54672c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x85d178, 0x1fd000 bytes
    //
    _n75(sdk::unknown_ptr) lock_callback_list_exclusive;
    
    // [CmpLockCallbackListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x53d0c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e93b0, 0x1fd000 bytes
    //
    _n76(sdk::unknown_ptr) lock_callback_list_shared;
    
    // [CmpLockContextListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x609a5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e92e4, 0x1fd000 bytes
    //
    _n77(sdk::unknown_ptr) lock_context_list_exclusive;
    
    // [CmpLockContextListShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x40a240, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e9420, 0x1fd000 bytes
    //
    _n78(sdk::unknown_ptr) lock_context_list_shared;
    
    // [CmpLockHashEntryByIndexExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x50c3cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0xa10e70, 0x1fd000 bytes
    //
    _n79(sdk::unknown_ptr) lock_hash_entry_by_index_exclusive;
    
    // [CmpLockNameHashEntryExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c6efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x61d33c, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) lock_name_hash_entry_exclusive;
    
    // [CmpMarkLockReleased]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGECMRC:0xae1144, 0x1fd000 bytes
    //
    _n81(sdk::unknown_ptr) mark_lock_released;
    
    // [CmpOKToFollowLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cccb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6230f0, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) ok_to_follow_link;
    
    // [CmpQueryEditionVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x784f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78ed20, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) query_edition_version;
    
    // [CmpReadBuildLab]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x868b14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867494, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) read_build_lab;
    
    // [CmpReleaseWriteQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x499d84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7e1208, 0x1fd000 bytes
    //
    _n85(sdk::unknown_ptr) release_write_queue;
    
    // [CmpShutdownWorkers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa04da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8725b0, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) shutdown_workers;
    
    // [CmpSubtreeEnumeratorInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e588, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715f18, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) subtree_enumerator_initialize;
    
    // [CmpTraceShutdownFlushStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa063d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8665d4, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) trace_shutdown_flush_start;
    
    // [CmpTraceShutdownFlushStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa06444, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866644, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) trace_shutdown_flush_stop;
    
    // [CmpTraceShutdownStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa06594, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866794, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) trace_shutdown_stop;
    
    // [CmpUnlockAppHiveLoadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x4ecaa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742bb0, 0x1fd000 bytes
    //
    _n91(sdk::unknown_ptr) unlock_app_hive_load_list;
    
    // [CmpUnlockCallbackList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x53daa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e934c, 0x1fd000 bytes
    //
    _n92(sdk::unknown_ptr) unlock_callback_list;
    
    // [CmpUnlockContextList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x476860, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e9280, 0x1fd000 bytes
    //
    _n93(sdk::unknown_ptr) unlock_context_list;
    
    // [CmpVEExecuteParseLogic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cca70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x622eb0, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) ve_execute_parse_logic;
    
    // [CmpVolumeContextFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86f604, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86df84, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) volume_context_free;
    
    // [CmpVolumeContextLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aad38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b26b8, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) volume_context_lock_shared;
    
    // [CmpVolumeContextUnlockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aae20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b27a0, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) volume_context_unlock_exclusive;
    
    // [CmpVolumeContextUnlockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aad04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b2684, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) volume_context_unlock_shared;
    
    // [CmpVolumeManagerLockContextListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be678, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) volume_manager_lock_context_list_exclusive;
    
    // [CmpVolumeManagerUnlockContextListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b6038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdbc8, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) volume_manager_unlock_context_list_exclusive;
    
    // [CmpWaitForShutdownRundownRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa1103c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8714f8, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) wait_for_shutdown_rundown_release;
    
    // [CmpAbortRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x75dc2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79cab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76567c, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) abort_rollback_packet;
    
    // [CmpAcceptBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x770a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826338, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7784d0, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) accept_boot;
    
    // [CmpAcpString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2a70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97658, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa96848, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) acp_string;
    
    // [CmpAcquireShutdownRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6daf90, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ebd80, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) acquire_shutdown_rundown;
    
    // [CmpAcquireSystemDriverHiveContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa58ae0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4895c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58988, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) acquire_system_driver_hive_context;
    
    // [CmpAcquireWriteQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2690a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37bd9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a0c0, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) acquire_write_queue;
    
    // [CmpAddEnlistmentToRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x871f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0fc78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870430, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) add_enlistment_to_rollback_packet;
    
    // [CmpAddPointerToRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x871f94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0fccc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870484, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) add_pointer_to_rollback_packet;
    
    // [CmpAddUoWToRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x871fe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0fd20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8704d8, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) add_uo_w_to_rollback_packet;
    
    // [CmpAddValueToList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8786a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x876bf8, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) add_value_to_list;
    
    // [CmpAllocatePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc050, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b1d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x25c5c0, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) allocate_pool_with_tag;
    
    // [CmpAllocateSiloContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793504, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ebf80, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) allocate_silo_context;
    
    // [CmpAllocateTransientPoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x740dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b1d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x25c5c0, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) allocate_transient_pool_with_tag;
    
    // [CmpArmDelayedCloseTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2bd934, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2feb78, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) arm_delayed_close_timer;
    
    // [CmpAttachToRegistryProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c96b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61faf0, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) attach_to_registry_process;
    
    // [CmpBootPageFilesCreated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc485d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14380, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485b4, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) boot_page_files_created;
    
    // [CmpBounceBufferLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb500, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bac0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb500, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) bounce_buffer_lookaside;
    
    // [CmpBounceContextCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74d2d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61e590, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) bounce_context_cleanup;
    
    // [CmpBounceContextCopyDataToCallerBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74d320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x657304, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) bounce_context_copy_data_to_caller_buffer;
    
    // [CmpBounceContextStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d87f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61ded0, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) bounce_context_start;
    
    // [CmpBuildBranchString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa644d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f430, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) build_branch_string;
    
    // [CmpBuildMachineHiveMountPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x776dbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827bc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787fbc, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) build_machine_hive_mount_point;
    
    // [CmpCallCallBacksEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d0200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b4f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x626640, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) call_call_backs_ex;
    
    // [CmpCallbackFatalFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8672f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865724, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) callback_fatal_filter;
    
    // [CmpCaptureKeyValueArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e78c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dee28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65782c, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) capture_key_value_array;
    
    // [CmpCCSString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa967a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a010, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95990, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) ccs_string;
    
    // [CmpCheckExeOwnerForPca]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x752c2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75a4ec, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) check_exe_owner_for_pca;
    
    // [CmpCheckKeyNodeStackAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70dc34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0cdd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7155c4, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) check_key_node_stack_access;
    
    // [CmpCheckKeyOwnerForPca]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f58d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73892c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbc1c, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) check_key_owner_for_pca;
    
    // [CmpCheckKeySecurityDescriptorAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65f260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7d14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d2960, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) check_key_security_descriptor_access;
    
    // [CmpCheckLexicographicalOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a3120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cf9c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f9680, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) check_lexicographical_order;
    
    // [CmpCleanUpHigherLayerKcbCachesPostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x873290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8717a0, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) clean_up_higher_layer_kcb_caches_post_callback;
    
    // [CmpCleanUpHigherLayerKcbCachesPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711840, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) clean_up_higher_layer_kcb_caches_pre_callback;
    
    // [CmpCleanUpKcbCachedSymlink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c1744, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df6cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61bcf8, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) clean_up_kcb_cached_symlink;
    
    // [CmpCleanupRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c38c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79a718, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b1ec, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) cleanup_rollback_packet;
    
    // [CmpCloseSystemDriverHiveContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa58884, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb60864, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58724, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) close_system_driver_hive_context;
    
    // [CmpCodePageString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2aa0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97688, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa96878, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) code_page_string;
    
    // [CmpCompleteUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63bb4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79a754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65a99c, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) complete_unload_key;
    
    // [CmpConcatenateValueLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x875690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1257c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x873be0, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) concatenate_value_lists;
    
    // [CmpControlSetOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa968c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a140, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95ab0, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) control_set_override;
    
    // [CmpCopyMergeOfLayeredKeyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70d830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66dc58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7151c0, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) copy_merge_of_layered_key_node;
    
    // [CmpCreateControlSetOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8d25c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb83dcc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c4dc, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) create_control_set_override;
    
    // [CmpCreateEmptyHiveClone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86f628, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0e448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86dfa8, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) create_empty_hive_clone;
    
    // [CmpCreateExtendedControlSets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa50c08, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb270f4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa50a8c, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) create_extended_control_sets;
    
    // [CmpCreateGlobalKeyLockEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a512c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7924c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ad23c, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) create_global_key_lock_entry;
    
    // [CmpCreateHardwareProfiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa50c78, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5308c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa50afc, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) create_hardware_profiles;
    
    // [CmpCreateHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x680734, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688220, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) create_hive;
    
    // [CmpCreateRegistryProcessToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a8494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8266d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78696c, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) create_registry_process_token;
    
    // [CmpCreateRegistryThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x776d54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826f8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787f54, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) create_registry_thread;
    
    // [CmpCreateSiloKeyLockEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a5188, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7917c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ad298, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) create_silo_key_lock_entry;
    
    // [CmpCurrentBuildString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64528, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f420, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) current_build_string;
    
    // [CmpCurrentControlSetString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96900, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a150, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95ad0, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) current_control_set_string;
    
    // [CmpDestroyHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70d2c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0e64c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x714c58, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) destroy_hive;
    
    // [CmpDetachFromRegistryProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6caed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1460, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x621310, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) detach_from_registry_process;
    
    // [CmpDevicesHiveName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa967b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a020, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa959a0, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) devices_hive_name;
    
    // [CmpDevicesHiveNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64578, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f490, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) devices_hive_name_string;
    
    // [CmpDisplayPreReleaseColorString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa97898, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b148, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a88, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) display_pre_release_color_string;
    
    // [CmpDoAccessCheckOnLayeredSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70dac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715450, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) do_access_check_on_layered_subtree;
    
    // [CmpDoFileFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b96c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208c7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0a00, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) do_file_flush;
    
    // [CmpDoFileRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2675fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3792d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3185bc, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) do_file_read;
    
    // [CmpDoLocalizeNextHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e5f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e270, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) do_localize_next_hive;
    
    // [CmpDoQueryKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2dac10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303658, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25be50, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) do_query_key_name;
    
    // [CmpDoWritethroughReparse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d8df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x741dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e9bf0, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) do_writethrough_reparse;
    
    // [CmpDoesBufferRequireCapturing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c2c5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dedf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61908c, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) does_buffer_require_capturing;
    
    // [CmpDoesKeyHaveOpenSubkeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c4c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b08c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x659188, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) does_key_have_open_subkeys;
    
    // [CmpDoesKeyHaveOpenSubkeysWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711870, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) does_key_have_open_subkeys_worker;
    
    // [CmpDrainDelayDerefContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2ddaf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfb30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ed80, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) drain_delay_deref_context;
    
    // [CmpDriverStateSourceIdName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa967c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a070, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa959b0, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) driver_state_source_id_name;
    
    // [CmpDummyThreadEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47ea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13d40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47b20, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) dummy_thread_event;
    
    // [CmpDummyThreadRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b6430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be000, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) dummy_thread_routine;
    
    // [CmpEditionVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48340, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13d60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48320, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) edition_version;
    
    // [CmpEffectiveTokenForSubject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6236c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aeca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690730, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) effective_token_for_subject;
    
    // [CmpEnableLazyFlushBootDelayInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11f30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdc8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f90, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) enable_lazy_flush_boot_delay_interval;
    
    // [CmpEnumerateAllOpenSubKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b0c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6591f8, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) enumerate_all_open_sub_keys;
    
    // [CmpEnumerateKcbCacheBucket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c5f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b18c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6592bc, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) enumerate_kcb_cache_bucket;
    
    // [CmpFeatureSimulations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa979a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b2c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b98, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) feature_simulations;
    
    // [CmpFindExtraParameterInBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ca66c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8e9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5caf0c, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) find_extra_parameter_in_block;
    
    // [CmpFindHiveSubKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa59bb0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb493e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa59a58, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) find_hive_sub_key;
    
    // [CmpFindMachineHiveByMountPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x776a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827b24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787c70, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) find_machine_hive_by_mount_point;
    
    // [CmpFindRedirectedDriverServiceStateNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa589e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b178, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58888, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) find_redirected_driver_service_state_node;
    
    // [CmpFindSubKeyByHashWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65ba80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74a320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cf77c, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) find_sub_key_by_hash_with_status;
    
    // [CmpForceSynchronousMachineHiveLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2b042, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5101f, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b042, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) force_synchronous_machine_hive_load;
    
    // [CmpFreeExtraParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5cd284, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3ce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cdb24, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) free_extra_parameter;
    
    // [CmpFreeKeyValueList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x876314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1310c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x874864, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) free_key_value_list;
    
    // [CmpFreePoolLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) free_pool_lookaside;
    
    // [CmpFreeSiloContextCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86fbc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa04de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86e540, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) free_silo_context_callback;
    
    // [CmpFreeSiloKeyLockEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86eff4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d794, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d974, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) free_silo_key_lock_entry;
    
    // [CmpFreeUnitOfWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x613ab8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87b30c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87a744, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) free_unit_of_work;
    
    // [CmpFreezeHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63af60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c6d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658f30, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) freeze_hive;
    
    // [CmpFullPromoteHiveRootFromKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87c604, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa15fc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87ba44, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) full_promote_hive_root_from_kcb_stack;
    
    // [CmpFullPromoteSingleKeyFromKeyNodeStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70d640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa16090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x714fd0, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) full_promote_single_key_from_key_node_stacks;
    
    // [CmpGenerateFastLeafHintForUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62b998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c6a44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69110c, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) generate_fast_leaf_hint_for_unicode_string;
    
    // [CmpGetEffectiveKcbSemantics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edb78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x627010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6942e0, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) get_effective_kcb_semantics;
    
    // [CmpGetKnownHivePathNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8d6f4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84c04, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c974, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) get_known_hive_path_node;
    
    // [CmpGetOrCreateContextForSiloNoRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678848, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x790f38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ebc88, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) get_or_create_context_for_silo_no_ref;
    
    // [CmpGetSecurityCellForKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70dffc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c35c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71598c, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) get_security_cell_for_key_node_stack;
    
    // [CmpGetStateSepKeysRedirectionPathValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa58a48, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b1e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa588f0, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) get_state_sep_keys_redirection_path_value;
    
    // [CmpGetSystemControlValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa5a0b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb49cac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa59f60, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) get_system_control_values;
    
    // [CmpGetSystemRelativeRegistryHiveFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8d3c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb83f3c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c648, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) get_system_relative_registry_hive_file_path;
    
    // [CmpGlobalLockKeyForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a5010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x792348, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ad120, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) global_lock_key_for_write;
    
    // [CmpGlobalUnlockKeyForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86f034, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d7dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d9b4, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) global_unlock_key_for_write;
    
    // [CmpGpuIommuSetting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa978e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b278, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96ad8, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) gpu_iommu_setting;
    
    // [CmpHandlePageFileOpenNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aab38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8263b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b24b8, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) handle_page_file_open_notification;
    
    // [CmpHardwareProfilesCurrentString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980588, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64008, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee58, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) hardware_profiles_current_string;
    
    // [CmpHardwareProfilesString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980628, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64078, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ef18, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) hardware_profiles_string;
    
    // [CmpHiveInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632e80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6805b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688aa0, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) hive_initialize;
    
    // [CmpHotPatchTableSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa978d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b178, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96ac8, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) hot_patch_table_size;
    
    // [CmpIncrementKcbSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86c0dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09b7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86aa5c, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) increment_kcb_sequence_number;
    
    // [CmpInitSiloSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x782768, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x829fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c508, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) init_silo_support;
    
    // [CmpInitializeDelayDerefContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2ddbf4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ca084, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25ee84, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) initialize_delay_deref_context;
    
    // [CmpInitializeDriverStores]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa50a54, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2581c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa508d8, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) initialize_driver_stores;
    
    // [CmpInitializeGlobalKeyLockTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x782654, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fe24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c3f4, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) initialize_global_key_lock_tracker;
    
    // [CmpInitializeLoadOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b2500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e86a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2db0, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) initialize_load_options;
    
    // [CmpInitializeMachineHiveLoadedCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7ad088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x865e68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b4ca8, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) initialize_machine_hive_loaded_callbacks;
    
    // [CmpInitializeRegistryProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a7e5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826984, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786ffc, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) initialize_registry_process;
    
    // [CmpInitializeRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c3c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79a708, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b1dc, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) initialize_rollback_packet;
    
    // [CmpInvalidateAllHigherLayerKcbsPostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x873600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa115b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871b10, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) invalidate_all_higher_layer_kcbs_post_callback;
    
    // [CmpInvalidateAllHigherLayerKcbsPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711840, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) invalidate_all_higher_layer_kcbs_pre_callback;
    
    // [CmpInvalidateSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x755ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86baa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d930, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) invalidate_subtree;
    
    // [CmpInvalidateSubtreeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7551f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75cc40, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) invalidate_subtree_worker;
    
    // [CmpIsBufferGloballyVisible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f5130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e227c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a544, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) is_buffer_globally_visible;
    
    // [CmpIsHiveLoadingOnOtherThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50cb78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64a5cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bc250, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) is_hive_loading_on_other_thread;
    
    // [CmpIsKcbInsideVirtualizedHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c24b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eade0, 0x1fe000 bytes
    //
    _p24(sdk::function<uint8_t(struct cm::key_control_block_t*)>*) is_kcb_inside_virtualized_hive;
    
    // [CmpIsRegistryLockContended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e6b78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6a68, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) is_registry_lock_contended;
    
    // [CmpIsWriteQueueActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2135fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3030f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5f84, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) is_write_queue_active;
    
    // [CmpJoinClassOfTrust]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271384, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384bc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322db4, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) join_class_of_trust;
    
    // [CmpKcbLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcdb080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb040, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) kcb_lookaside;
    
    // [CmpKeyEnumStackBeginEnumerationForKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66ca08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715a18, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) key_enum_stack_begin_enumeration_for_key_node_stack;
    
    // [CmpKeyEnumStackCreateResumeContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x877acc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87601c, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) key_enum_stack_create_resume_context;
    
    // [CmpKeyEnumStackEntryBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e13c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715acc, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) key_enum_stack_entry_begin;
    
    // [CmpKeyEnumStackEntryCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654808, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d838, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c864c, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) key_enum_stack_entry_cleanup;
    
    // [CmpKeyEnumStackEntryNotifyPromotion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x877d08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876258, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) key_enum_stack_entry_notify_promotion;
    
    // [CmpKeyEnumStackFreeResumeContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x877e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876370, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) key_enum_stack_free_resume_context;
    
    // [CmpKeyEnumStackNotifyPromotion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x877ec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14a48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876414, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) key_enum_stack_notify_promotion;
    
    // [CmpKeyEnumStackReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70ddac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71573c, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) key_enum_stack_reset;
    
    // [CmpKeyEnumStackStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e48c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c824, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715e1c, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) key_enum_stack_start;
    
    // [CmpKeyEnumStackVerifyResumeContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87804c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14b60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87659c, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) key_enum_stack_verify_resume_context;
    
    // [CmpKeyLockTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48000, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13ae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47c60, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) key_lock_tracker;
    
    // [CmpKeyNodeNeedsAccessBitUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a17dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f7d3c, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) key_node_needs_access_bit_update;
    
    // [CmpKeysString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96830, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a0d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a20, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) keys_string;
    
    // [CmpLargePageMinimum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa978c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b188, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96ab8, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) large_page_minimum;
    
    // [CmpLazyLocalizeIntervalInSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11f28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdd4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f88, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) lazy_localize_interval_in_seconds;
    
    // [CmpLoadServicesNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa58b50, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4949c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa589f8, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) load_services_node;
    
    // [CmpLockKcbStackFlusherLocksExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x367d9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6014cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36914c, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) lock_kcb_stack_flusher_locks_exclusive;
    
    // [CmpLogHiveFileInaccessible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d1be8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e594, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) log_hive_file_inaccessible;
    
    // [CmpLogTransactionAborted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133d24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87207c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x87056c, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) log_transaction_aborted;
    
    // [CmpLogTransactionAbortedForRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63cccc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658b00, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) log_transaction_aborted_for_rollback_packet;
    
    // [CmpMachineHiveCallbackEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc482e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc142e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc482c0, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) machine_hive_callback_event;
    
    // [CmpMachineHiveCallbackFatalFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8673e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa029ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865810, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) machine_hive_callback_fatal_filter;
    
    // [CmpMachineHiveLoadedWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7ad440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86b4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b5060, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) machine_hive_loaded_work_item;
    
    // [CmpMarkEntireIndexDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8766b0, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) mark_entire_index_dirty;
    
    // [CmpMpsSvcKeySubstring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9809a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64488, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f288, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) mps_svc_key_substring;
    
    // [CmpNlsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c00, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa977e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa969d8, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) nls_string;
    
    // [CmpNotifyMachineHiveLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b26a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2f50, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) notify_machine_hive_loaded;
    
    // [CmpOemCpString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c40, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97828, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa96a18, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) oem_cp_string;
    
    // [CmpOpenDevicesControlSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7837d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8577f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78d574, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) open_devices_control_set;
    
    // [CmpOpenSystemDriverHiveContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa582c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb490a8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58168, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) open_system_driver_hive_context;
    
    // [CmpOsBootstatPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96990, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a1b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b60, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) os_bootstat_path_string;
    
    // [CmpPartialPromoteSingleKeyFromKeyNodeStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87c6f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66dad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87bb30, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) partial_promote_single_key_from_key_node_stacks;
    
    // [CmpPerformSiloKeyLockTrackerEnabledCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a4fec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79179c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ad0fc, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) perform_silo_key_lock_tracker_enabled_check;
    
    // [CmpPerformSingleKcbCacheLookup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50c7fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cfc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6260b0, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) perform_single_kcb_cache_lookup;
    
    // [CmpPerformTrustClassAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322e30, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) perform_trust_class_access_check;
    
    // [CmpPerformUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63b58c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79a114, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x659bd0, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) perform_unload_key;
    
    // [CmpPopulateKeyBasicInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87fad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66df98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87e288, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) populate_key_basic_information;
    
    // [CmpPopulateKeyCachedInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87fb84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d444, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87e33c, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) populate_key_cached_information;
    
    // [CmpPopulateKeyFullInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8f9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5e70, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) populate_key_full_information;
    
    // [CmpPopulateKeyNodeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x629a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74acf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692a50, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) populate_key_node_information;
    
    // [CmpPopulateKeyNodeStackFromKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c90c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715f50, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) populate_key_node_stack_from_kcb_stack;
    
    // [CmpPrepareForSubtreeInvalidation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x755cd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a474, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d724, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) prepare_for_subtree_invalidation;
    
    // [CmpPrepareForSubtreeInvalidationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7514b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7590f0, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) prepare_for_subtree_invalidation_worker;
    
    // [CmpPrepareToInvalidateAllHigherLayerKcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x873880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa117f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871d90, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) prepare_to_invalidate_all_higher_layer_kcbs;
    
    // [CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x873900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871e10, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) prepare_to_invalidate_all_higher_layer_kcbs_post_callback;
    
    // [CmpPrepareToInvalidateAllHigherLayerKcbsPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711840, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) prepare_to_invalidate_all_higher_layer_kcbs_pre_callback;
    
    // [CmpPromoteSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70d578, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa16800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x714f08, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) promote_subtree;
    
    // [CmpQuitNextActiveHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa16994, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715fd0, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) quit_next_active_hive;
    
    // [CmpQuitNextHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x750ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0e624, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758b30, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) quit_next_hive;
    
    // [CmpRecheckHiveVolumePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21bd10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0f40, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) recheck_hive_volume_policy;
    
    // [CmpRecordParseFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74204c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x621cf0, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) record_parse_failure;
    
    // [CmpReferenceKeyControlBlockLockNotHeld]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63ac2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9c18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x657ca0, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) reference_key_control_block_lock_not_held;
    
    // [CmpRegistryMachineSoftwareMicrosoftWindowsCurrentVersionShutdownString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980978, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f258, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) registry_machine_software_microsoft_windows_current_version_shutdown_string;
    
    // [CmpRegistryMachineSoftwareMicrosoftWindowsNtCurrentVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64460, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f260, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) registry_machine_software_microsoft_windows_nt_current_version_string;
    
    // [CmpRegistryProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47ec0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13d00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47b00, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) registry_process;
    
    // [CmpRegistryProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9809b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f298, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) registry_process_name;
    
    // [CmpRegistryRootKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa964e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89f48, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa956d8, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) registry_root_key_path;
    
    // [CmpReleaseKeyNodeForKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479848, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8610ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f524, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) release_key_node_for_kcb;
    
    // [CmpReleaseShutdownRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae11e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eab30, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) release_shutdown_rundown;
    
    // [CmpRemoveKeyControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed044, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86c1f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ab78, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) remove_key_control_block;
    
    // [CmpReportNotifyForKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c45ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ddf4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61a9dc, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) report_notify_for_kcb_stack;
    
    // [CmpReserveRollbackPacketSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8723a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0ffbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870894, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) reserve_rollback_packet_space;
    
    // [CmpResetKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70de0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa118ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71579c, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) reset_key_node_stack;
    
    // [CmpRestampVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x864b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8714b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862fc0, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) restamp_version;
    
    // [CmpRetryBackOff]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x872458, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10074, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870948, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) retry_back_off;
    
    // [CmpSearchAndCountWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86c220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86aba0, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) search_and_count_worker;
    
    // [CmpSearchAndRehashWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86c240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86abc0, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) search_and_rehash_worker;
    
    // [CmpSearchAndTagNoDelayCloseWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711880, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) search_and_tag_no_delay_close_worker;
    
    // [CmpServicesSubKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96560, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89fa0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95750, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) services_sub_key_path;
    
    // [CmpSetAccessStateForBackupRestore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x752798, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x738420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75a064, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) set_access_state_for_backup_restore;
    
    // [CmpSetSystemRegistryString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b25b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ac2b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2e64, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) set_system_registry_string;
    
    // [CmpShutdownLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc485b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc48598, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) shutdown_lock;
    
    // [CmpSiloContextSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47e98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14190, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47af8, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) silo_context_slot;
    
    // [CmpSnapshotTxOwnerArrayToRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x872564, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10174, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870a54, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) snapshot_tx_owner_array_to_rollback_packet;
    
    // [CmpSortedValueEnumStackAdvance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1570c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876d70, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) sorted_value_enum_stack_advance;
    
    // [CmpSortedValueEnumStackAdvanceInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878854, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa15740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876da4, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) sorted_value_enum_stack_advance_internal;
    
    // [CmpSortedValueEnumStackCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87895c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d74c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876eac, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) sorted_value_enum_stack_cleanup;
    
    // [CmpSortedValueEnumStackEntryStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878a18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1584c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876f68, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) sorted_value_enum_stack_entry_start;
    
    // [CmpSortedValueEnumStackGetEntryAtLayerHeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878b84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa159c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8770d4, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) sorted_value_enum_stack_get_entry_at_layer_height;
    
    // [CmpSortedValueEnumStackInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878bb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x877104, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) sorted_value_enum_stack_initialize;
    
    // [CmpSortedValueEnumStackStartFromKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878bec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa159f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87713c, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) sorted_value_enum_stack_start_from_key_node_stack;
    
    // [CmpSortedValueEnumStackValueCompareFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x878d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa15b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x877250, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) sorted_value_enum_stack_value_compare_function;
    
    // [CmpStartSiloKeyLockTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7827e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a088, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c580, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) start_silo_key_lock_tracker;
    
    // [CmpStartSiloRegistryNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x679dcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed1dc, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) start_silo_registry_namespace;
    
    // [CmpStateSepRedirectionMapString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96880, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a100, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a70, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) state_sep_redirection_map_string;
    
    // [CmpStopSiloKeyLockTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86f158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d8b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86dad8, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) stop_silo_key_lock_tracker;
    
    // [CmpSubtreeEnumeratorAdvance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70dcec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11a08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71567c, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) subtree_enumerator_advance;
    
    // [CmpSubtreeEnumeratorBeginForKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x873a48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11b98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871f58, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) subtree_enumerator_begin_for_kcb_stack;
    
    // [CmpSubtreeEnumeratorBeginForKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e2f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11be8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715c80, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) subtree_enumerator_begin_for_key_node_stack;
    
    // [CmpSubtreeEnumeratorCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70dbb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715540, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) subtree_enumerator_cleanup;
    
    // [CmpSubtreeEnumeratorGetCurrentKeyStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x873a98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871fa8, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) subtree_enumerator_get_current_key_stacks;
    
    // [CmpSubtreeEnumeratorReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x873ac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871fd8, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) subtree_enumerator_reset;
    
    // [CmpSubtreeEnumeratorStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e38c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715d1c, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) subtree_enumerator_start;
    
    // [CmpSubtreeEnumeratorStartForKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x873b28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11ea8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x872038, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) subtree_enumerator_start_for_kcb_stack;
    
    // [CmpSubtreeEnumeratorStartForKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70e2b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11ee4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715c44, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) subtree_enumerator_start_for_key_node_stack;
    
    // [CmpSwapHiveStorage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86f8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0e96c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86e268, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) swap_hive_storage;
    
    // [CmpSystemHiveName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96508, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89f68, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa956f8, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) system_hive_name;
    
    // [CmpSystemHiveNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980578, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64018, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee68, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) system_hive_name_string;
    
    // [CmpTargetNtPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96890, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a0e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a80, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) target_nt_path_string;
    
    // [CmpTraceHiveFlushStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x70472c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x743f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66533c, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) trace_hive_flush_stop;
    
    // [CmpTraceHiveMountLogEntryApplied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60209c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x867ec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866318, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) trace_hive_mount_log_entry_applied;
    
    // [CmpTraceSecurityChanging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62b838, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7516b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68b9c8, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) trace_security_changing;
    
    // [CmpTryAcquireIXLockWithRollbackPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x75156c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7591ac, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) try_acquire_ix_lock_with_rollback_packet;
    
    // [CmpTryAcquireKcbIXLocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x751500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8632f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759140, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) try_acquire_kcb_ix_locks;
    
    // [CmpUBRString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f440, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) ubr_string;
    
    // [CmpUnJoinClassOfTrust]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23d10c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2e54, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) un_join_class_of_trust;
    
    // [CmpUnlockKcbStackFlusherLocksExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x367c84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601554, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369034, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) unlock_kcb_stack_flusher_locks_exclusive;
    
    // [CmpUpdateStateSeparationHiveOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8d694, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84098, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c914, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) update_state_separation_hive_options;
    
    // [CmpValueEnumStackGetCurrentValueHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e71fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469aea, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e70ec, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) value_enum_stack_get_current_value_hive;
    
    // [CmpVEAddHiveToSIDMappingTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678434, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2e9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb874, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) ve_add_hive_to_sid_mapping_table;
    
    // [CmpVERemoveHiveFromSIDMappingTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63bfe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79ab30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65ae30, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) ve_remove_hive_from_sid_mapping_table;
    
    // [CmpVerifyBigLogRecordChunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c7564, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10b90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6864, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) verify_big_log_record_chunk;
    
    // [CmpVerifyCreateOrDeleteKeyLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c75a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10bcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c68a0, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) verify_create_or_delete_key_log_record;
    
    // [CmpVerifyDriverLevelLegacyString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa97888, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b158, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a78, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) verify_driver_level_legacy_string;
    
    // [CmpVerifyDriverLevelRuleClassString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa978b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b198, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96aa8, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) verify_driver_level_rule_class_string;
    
    // [CmpVerifyLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c75fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10c28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c68fc, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) verify_log_record;
    
    // [CmpVerifyRenameKeyLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c76b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10d08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c69b8, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) verify_rename_key_log_record;
    
    // [CmpVerifySetOrDeleteValueLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c7700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6a00, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) verify_set_or_delete_value_log_record;
    
    // [CmpVerifySetSecurityDescriptorLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c7768, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10db8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6a68, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) verify_set_security_descriptor_log_record;
    
    // [CmpVolumeContextCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86f5cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d084, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86df4c, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) volume_context_cleanup;
    
    // [CmpVolumeContextCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b1c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a904, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9820, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) volume_context_create;
    
    // [CmpVolumeContextDecrementRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c148, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79addc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65af98, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) volume_context_decrement_ref_count;
    
    // [CmpVolumeContextMustHiveFilePagesBeKeptLocal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67f1f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687ea0, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) volume_context_must_hive_file_pages_be_kept_local;
    
    // [CmpVolumeContextSendDeviceUsageNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aac74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82658c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b25f4, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) volume_context_send_device_usage_notification;
    
    // [CmpVolumeContextStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b1d14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a99c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b98a4, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) volume_context_start;
    
    // [CmpVolumeManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2cf90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53ce8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf90, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) volume_manager;
    
    // [CmpVolumeManagerGetContextForFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631ad8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67f5e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6876f0, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) volume_manager_get_context_for_file;
    
    // [CmpVolumeManagerGetContextForFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aad54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8264c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b26d4, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) volume_manager_get_context_for_file_path;
    
    // [CmpVolumeManagerGetContextForGuidUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67f824, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6878b8, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) volume_manager_get_context_for_guid_unsafe;
    
    // [CmpVolumeManagerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78267c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fb80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c41c, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) volume_manager_initialize;
    
    // [CmpWalkUnicodeStringPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78949c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b4f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79323c, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) walk_unicode_string_path;
    
    // [CmpWellKnownVolumeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2b730, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51768, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b730, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) well_known_volume_list;
    
    // [CmpWindowsSysPartString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa96a20, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a290, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95c20, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) windows_sys_part_string;
    
    // [CmpWorkerEngineFinishedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323cb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc482a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc47f00, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) worker_engine_finished_event;
    
    // [CmpWorkerEngineListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323ca0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc482b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc47f10, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) worker_engine_list_head;
    
    // [CmpWorkerEngineLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323c60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc47ea0, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) worker_engine_lock;
    
    // [CmpWorkerEngineWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323c40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48280, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc47ee0, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) worker_engine_work_item;
    
    // [CmpWorkerEngineWorkItemActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c310, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4c2f0, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) worker_engine_work_item_active;
    
    // [CmpWorkerEngineWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50a320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ed80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b5c70, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) worker_engine_worker;
    
    // [CmpAbortLightWeightTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754004, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca898, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b8c4, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) abort_light_weight_transaction;
    
    // [CmpAccessBitForPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ec8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b4d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f314, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) access_bit_for_phase;
    
    // [CmpAccountForLogReservation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475448, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79bf18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7500c0, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) account_for_log_reservation;
    
    // [CmpActiveAppHiveUnloadCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323c20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48218, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13c10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47e78, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) active_app_hive_unload_count;
    
    // [CmpActiveAppHiveUnloadEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323c28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13c18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47e80, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) active_app_hive_unload_event;
    
    // [CmpActiveHiveRundownCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e558, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb054, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb014, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) active_hive_rundown_count;
    
    // [CmpActiveHiveRundownEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323cc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc482c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14268, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47f28, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) active_hive_rundown_event;
    
    // [CmpAddAcpiAliasEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60c814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87421c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa03150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87276c, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) add_acpi_alias_entry;
    
    // [CmpAddAliasEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7ba5fc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8cfb4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb83ba0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c234, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) add_alias_entry;
    
    // [CmpAddDockingInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a9ac, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa51100, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5351c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa50f84, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) add_docking_info;
    
    // [CmpAddDriverToList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79881c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa59204, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4a5a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa590ac, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) add_driver_to_list;
    
    // [CmpAddKeyHashToEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x105120, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62628c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693544, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) add_key_hash_to_entry;
    
    // [CmpAddProcessorConfigurationEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x541760, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x783910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78d6b0, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) add_processor_configuration_entry;
    
    // [CmpAddRemoveContainerToCLFSLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x616ce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75fd3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80b82c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76778c, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) add_remove_container_to_clfs_log;
    
    // [CmpAddRemoveRMLogContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b02c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8725ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa101fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870adc, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) add_remove_rm_log_container;
    
    // [CmpAddSecurityCellToCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ef0c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62b21c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75616c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68b3b0, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) add_security_cell_to_cache;
    
    // [CmpAddStringToMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f66c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6784d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2f38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb910, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) add_string_to_mapping;
    
    // [CmpAddSubKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee168, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x877690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x898212, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x875be0, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) add_sub_key;
    
    // [CmpAddSubKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee170, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x629b1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74a45c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692b3c, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) add_sub_key_ex;
    
    // [CmpAddSubKeyToList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee334, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x629d60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74a7d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692d80, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) add_sub_key_to_list;
    
    // [CmpAddToDelayedClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4790c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f914, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746afc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2774, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) add_to_delayed_close;
    
    // [CmpAddToDelayedDeref]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d88c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x655eb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b98e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617e48, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) add_to_delayed_deref;
    
    // [CmpAddToHiveFileList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41bf9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6753cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3d94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e870c, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) add_to_hive_file_list;
    
    // [CmpAddToLeaf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee498, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x629f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74a9f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692f54, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) add_to_leaf;
    
    // [CmpAddValueKeyNew]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e796c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69ffb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cdfd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697a1c, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) add_value_key_new;
    
    // [CmpAddValueKeyTombstone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x604eb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86b5e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa08fe4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x869f60, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) add_value_key_tombstone;
    
    // [CmpAddValueToListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50bbf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6286dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae78c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x696e88, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) add_value_to_list_ex;
    
    // [CmpAdjustRequestedFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494c54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66cef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5b44, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) adjust_requested_file_size;
    
    // [CmpAdjustSecurityCacheSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68bb28, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) adjust_security_cache_size;
    
    // [CmpAdminSystemFileSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327060, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50918, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7658, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50918, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) admin_system_file_security_descriptor;
    
    // [CmpAdminSystemSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x543484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x787324, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x829408, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7910c4, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) admin_system_security_descriptor;
    
    // [CmpAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3ed4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x632fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6819d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688c00, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) allocate;
    
    // [CmpAllocateKeyControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d36a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c6f3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0a220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61d37c, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) allocate_key_control_block;
    
    // [CmpAllocateLayerInfoForKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610e7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd214, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7467f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cdab4, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) allocate_layer_info_for_kcb;
    
    // [CmpAllocatePostBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e91a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb7e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e1c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f4fec, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) allocate_post_block;
    
    // [CmpAllocateUnitOfWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492214, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66fb98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7468ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e32f8, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) allocate_unit_of_work;
    
    // [CmpAllowedFeaturesString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d20, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97958, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b1f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b48, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) allowed_features_string;
    
    // [CmpApiSetSchemaExtensionsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2a80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97648, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8afe8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96838, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) api_set_schema_extensions_string;
    
    // [CmpAppHiveLoadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323c10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13c00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47e60, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) app_hive_load_list;
    
    // [CmpAppHiveLoadListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323c00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48210, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13bf8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47e70, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) app_hive_load_list_lock;
    
    // [CmpAppendDllSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a0b0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa36190, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb20860, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35190, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) append_dll_section;
    
    // [CmpAppendLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x797edc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5ad4c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40da8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5abf4, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) append_line;
    
    // [CmpAppendSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x797f5c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5add4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40e30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ac7c, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) append_section;
    
    // [CmpAppendValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x797e60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5acc8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40d24, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5ab70, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) append_value;
    
    // [CmpArmLazyWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30eb30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2afcb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4550, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) arm_lazy_writer;
    
    // [CmpAssignKeySecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x148c78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b1fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8654b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9b70, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) assign_key_security;
    
    // [CmpAssignSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed760, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86df68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x897e92, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86c8e8, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) assign_security_descriptor;
    
    // [CmpAssignSecurityToKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edf00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62539c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ce338, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x696384, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) assign_security_to_kcb;
    
    // [CmpAsyncKernelPostList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a7a8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51658, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b6b0, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) async_kernel_post_list;
    
    // [CmpBackupCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343060, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5068, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b968, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5068, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) backup_count;
    
    // [CmpBackupCountValueName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5a40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0eb40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09468, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0eb80, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) backup_count_value_name;
    
    // [CmpBecomeActiveFlusherAndReconciler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550e64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77bd54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836db4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780a68, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) become_active_flusher_and_reconciler;
    
    // [CmpBindHiveToTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508f0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63abd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746278, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656804, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) bind_hive_to_trans;
    
    // [CmpBlockHiveWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e17b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6262b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693588, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) block_hive_writes;
    
    // [CmpBlockTwoHiveWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1844, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a684, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6908a4, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) block_two_hive_writes;
    
    // [CmpBootDriverFlagsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2a90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97668, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8afd8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96858, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) boot_driver_flags_string;
    
    // [CmpBootFlagsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1f60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96790, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a030, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95980, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) boot_flags_string;
    
    // [CmpBootLoadControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3cb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc01540, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02c60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc01540, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) boot_load_control;
    
    // [CmpBootServerReplyString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2040, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa968e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a170, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95ac0, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) boot_server_reply_string;
    
    // [CmpBootType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d74, 0x32828 bytes
    // ntoskrnl.exe .data:0xc485d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14390, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485b8, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) boot_type;
    
    // [CmpBuildAdminInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6068a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65ad84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66b9a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb900, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) build_admin_information;
    
    // [CmpBuildLabExString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecbf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa644c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f450, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) build_lab_ex_string;
    
    // [CmpBuildLabString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecbe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa644e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f460, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) build_lab_string;
    
    // [CmpBuildRegMultiSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7ba81c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8d1e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb24874, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c468, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) build_reg_multi_sz;
    
    // [CmpBuildVirtualReplicationStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x606bfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86cca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0af9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86b620, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) build_virtual_replication_stack;
    
    // [CmpCallBackCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327020, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7624, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508f0, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) call_back_count;
    
    // [CmpCallCallBacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b7a70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cc144, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744d6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x622584, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) call_call_backs;
    
    // [CmpCallbackContextSList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a880, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb4d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0ba90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb4d0, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) callback_context_s_list;
    
    // [CmpCallbackCookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323cf8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48320, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14320, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48300, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) callback_cookie;
    
    // [CmpCallbackFillObjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b8440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d07b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b57d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x626bf0, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) callback_fill_object_context;
    
    // [CmpCallbackListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323cd0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc482f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14310, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc482d8, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) callback_list_lock;
    
    // [CmpCanGrowHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494aa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6311d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682aa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x685f28, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) can_grow_hive;
    
    // [CmpCancelSubordinatePost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d8b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x655e6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9898, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617dfc, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) cancel_subordinate_post;
    
    // [CmpCannotWriteConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab03, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c683, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53423, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c683, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) cannot_write_configuration;
    
    // [CmpCheckAdminAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x606d9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65acac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66b8c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb828, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) check_admin_access;
    
    // [CmpCheckAndFixSecurityCellsRefcount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49513c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669a14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dca54, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) check_and_fix_security_cells_refcount;
    
    // [CmpCheckCreateAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eda54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659378, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x739ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ccd08, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) check_create_access;
    
    // [CmpCheckCreateAccessOnKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x105204, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6592b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x739dcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ccc40, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) check_create_access_on_kcb_stack;
    
    // [CmpCheckHiveIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a20c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b200, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b200, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) check_hive_index;
    
    // [CmpCheckHivePrimaryFileReadWriteAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8294, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601598, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6970, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) check_hive_primary_file_read_write_access;
    
    // [CmpCheckKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d94e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a23f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d0a00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f8950, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) check_key;
    
    // [CmpCheckKeyAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607f44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86dfcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0cb44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86c94c, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) check_key_access;
    
    // [CmpCheckKeyBodyAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607fc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65ab18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0cbfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb344, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) check_key_body_access;
    
    // [CmpCheckLeaf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dbab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c1c70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d01b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f6de0, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) check_leaf;
    
    // [CmpCheckNotifyAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edddc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4074, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6de530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61a4a4, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) check_notify_access;
    
    // [CmpCheckRegistry2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dade0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a1b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d04c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f80e0, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) check_registry2;
    
    // [CmpCheckSecurityCellAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d48c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65f1dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7c68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d28dc, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) check_security_cell_access;
    
    // [CmpCheckValueList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d8f40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a1e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d3e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f8390, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) check_value_list;
    
    // [CmpClaimGlobalQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3f30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633044, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x681a3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688c64, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) claim_global_quota;
    
    // [CmpCleanUpKCBCacheTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50bfd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c688, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x659350, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) clean_up_kcb_cache_table;
    
    // [CmpCleanUpKcbCacheWithLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c43e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c58c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6da610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61bd3c, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) clean_up_kcb_cache_with_lock;
    
    // [CmpCleanUpSubKeyInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edcf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625318, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7490b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x696300, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) clean_up_sub_key_info;
    
    // [CmpCleanupDiscardReplaceContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ecb4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625f04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748694, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692474, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) cleanup_discard_replace_context;
    
    // [CmpCleanupDiscardReplacePost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610ef0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8732c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8717d0, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) cleanup_discard_replace_post;
    
    // [CmpCleanupDiscardReplacePre]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610f44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa112d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871840, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) cleanup_discard_replace_pre;
    
    // [CmpCleanupKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abbcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cf740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c83f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x625b80, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) cleanup_kcb_stack;
    
    // [CmpCleanupKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610f50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6548a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8468, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c86e8, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) cleanup_key_node_stack;
    
    // [CmpCleanupLightWeightPrepare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5303c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ae8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0dcc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6580e4, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) cleanup_light_weight_prepare;
    
    // [CmpCleanupLightWeightTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c9d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a5f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca9b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656228, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) cleanup_light_weight_transaction;
    
    // [CmpCleanupParseContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fd40c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d9f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744e74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ead50, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) cleanup_parse_context;
    
    // [CmpCleanupPathInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abbb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cd640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa06c84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x623a80, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) cleanup_path_info;
    
    // [CmpCleanupTransactionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0c0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7534a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79bbd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75ad68, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) cleanup_transaction_state;
    
    // [CmpClearKeyAccessBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x609614, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66281c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d16e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d601c, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) clear_key_access_bits;
    
    // [CmpClfsLogPrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3e50, 0x32828 bytes
    // ntoskrnl.exe .data:0xc01960, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc03678, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc01998, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) clfs_log_prefix;
    
    // [CmpCloneHwProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60ca70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x874494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa033c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8729e4, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) clone_hw_profile;
    
    // [CmpCloneKCBValueListForTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497798, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8168, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e66b0, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) clone_kcb_value_list_for_trans;
    
    // [CmpCloneToUnbackedKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8378, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86bb9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a51c, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) clone_to_unbacked_kcb;
    
    // [CmpCloseKeyObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d3e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x642e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79d4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b7e50, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) close_key_object;
    
    // [CmpCloseLightWeightTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c8cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6790d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca7e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec4f0, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) close_light_weight_transaction;
    
    // [CmpCmdHiveClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50a884, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63be88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79ac7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65acd8, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) cmd_hive_close;
    
    // [CmpCmdHiveOpen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41c0fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6096d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x740454, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d6240, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) cmd_hive_open;
    
    // [CmpCmdInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x551dc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x776e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82536c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787214, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) cmd_init;
    
    // [CmpCmdRenameHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x609418, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873e2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa04b88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87233c, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) cmd_rename_hive;
    
    // [CmpCoalescingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8b64, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6ec0, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) coalescing_callback;
    
    // [CmpCoalescingCallbackActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327058, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50920, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf764c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50920, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) coalescing_callback_active;
    
    // [CmpCoalescingRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323780, 0x32828 bytes
    // ntoskrnl.exe .data:0xc478e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14248, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc478a8, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) coalescing_registration;
    
    // [CmpCommitAddKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49da5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x745758, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d884c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d398, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) commit_add_key_uo_w;
    
    // [CmpCommitDeleteKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e26a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7174e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x672eec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ef28, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) commit_delete_key_uo_w;
    
    // [CmpCommitDeleteValueKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1e20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7454e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746ba8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d124, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) commit_delete_value_key_uo_w;
    
    // [CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610fa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873344, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa112e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871854, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) commit_discard_and_replace_kcb_and_unbacked_higher_layers;
    
    // [CmpCommitDiscardReplacePost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610ff0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8733b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8718c0, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) commit_discard_replace_post;
    
    // [CmpCommitDiscardReplacePre]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610f44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa112d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871840, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) commit_discard_replace_pre;
    
    // [CmpCommitLightWeightTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0de38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656148, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) commit_light_weight_transaction;
    
    // [CmpCommitPreparedLightWeightTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53040c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ac80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0df94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x657ed8, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) commit_prepared_light_weight_transaction;
    
    // [CmpCommitRenameKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6134b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87ae90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa17dc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87a2c8, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) commit_rename_key_uo_w;
    
    // [CmpCommitSetSecurityUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6138d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76010c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80ff14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767b5c, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) commit_set_security_uo_w;
    
    // [CmpCommitSetValueKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50dadc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74518c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74cdcc, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) commit_set_value_key_uo_w;
    
    // [CmpCompareCompressedName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c58c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6453e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c18ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9ac0, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) compare_compressed_name;
    
    // [CmpCompareInIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c4d40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d6870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b3d0, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) compare_in_index;
    
    // [CmpCompareKeysByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60c318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8730e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8715f8, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) compare_keys_by_name;
    
    // [CmpCompareNewValueDataAgainstKCBCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e6cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c229c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ce788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6186cc, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) compare_new_value_data_against_kcb_cache;
    
    // [CmpCompareTwoCompressedNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60c3e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8731b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11134, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8716cc, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) compare_two_compressed_names;
    
    // [CmpCompareUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485c14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623a58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x691048, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) compare_unicode_string;
    
    // [CmpCompleteFlushAndPurgeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb60c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d1c0, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) complete_flush_and_purge_irp;
    
    // [CmpCompleteLazyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd0020, 0x32828 bytes
    // ntoskrnl.exe .text:0x269d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ce00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b2a4, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) complete_lazy_write;
    
    // [CmpComputeComponentHashes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee930, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cd2b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79d760, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6236f0, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) compute_component_hashes;
    
    // [CmpComputeLogFillLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41bbd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744118, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74dab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74bd58, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) compute_log_fill_level;
    
    // [CmpConfigurationAreaSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a084, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b098, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5105c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b098, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) configuration_area_size;
    
    // [CmpConfigurationData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab60, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53460, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6c0, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) configuration_data;
    
    // [CmpConfigurationManagerKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4a40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc04360, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc068f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc043a0, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) configuration_manager_key_name;
    
    // [CmpConfigurationManagerString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2ab0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97678, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8afb8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96868, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) configuration_manager_string;
    
    // [CmpConstructAndCacheName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496d54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671504, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4d64, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) construct_and_cache_name;
    
    // [CmpConstructName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41be18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c75e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744d1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61da28, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) construct_name;
    
    // [CmpConstructNameFromKcbNameBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b84e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75bff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x763988, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) construct_name_from_kcb_name_blocks;
    
    // [CmpConstructNameFromKeyNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5170, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c77c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d28e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61dc00, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) construct_name_from_key_nodes;
    
    // [CmpConstructNameWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d39a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c7610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cfd20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61da50, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) construct_name_with_status;
    
    // [CmpContainerSuffix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b240, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2c58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2c30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x29f0, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) container_suffix;
    
    // [CmpContextListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323cd8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48310, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc142f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc482f0, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) context_list_lock;
    
    // [CmpControlIdConfigDbString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2050, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980638, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64088, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ef08, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) control_id_config_db_string;
    
    // [CmpControlPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2060, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa968d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a180, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95ae0, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) control_path_string;
    
    // [CmpControlSessionManagerPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981108, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f9e8, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) control_session_manager_path_string;
    
    // [CmpControlString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1c68, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa964f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89f58, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa956e8, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) control_string;
    
    // [CmpConvertLangId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x799970, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5a69c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4a320, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5a544, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) convert_lang_id;
    
    // [CmpCopyCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49df2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ebac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8d2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656968, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) copy_cell;
    
    // [CmpCopyCompressedName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dbe10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74ae10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693194, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) copy_compressed_name;
    
    // [CmpCopyKeyPartial]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49dc1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x745940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8a84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d580, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) copy_key_partial;
    
    // [CmpCopyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e7a98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a00f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cdf70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697b5c, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) copy_name;
    
    // [CmpCopySaclToVirtualKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608198, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86e06c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0ce9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86c9ec, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) copy_sacl_to_virtual_key;
    
    // [CmpCopySyncTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60da64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8757f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa12748, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x873d44, 0x1fe000 bytes
    //
    _s26(sdk::function<int32_t(struct nt::hhive_t*, uint32_t, struct nt::hhive_t*, uint32_t, uint32_t, enum cmp::copy_type_t)>*) copy_sync_tree;
    
    // [CmpCopySyncTree2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60db00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8758a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa127f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x873df0, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) copy_sync_tree2;
    
    // [CmpCopyValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60e220, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x876030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x897eb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x874580, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) copy_value;
    
    // [CmpCrashControlString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2ad0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97698, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8afa8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96888, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) crash_control_string;
    
    // [CmpCreateChild]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10526c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6247c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x696438, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) create_child;
    
    // [CmpCreateControlSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a46c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa507b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2530c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5063c, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) create_control_set;
    
    // [CmpCreateEmptyKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x606e6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86ce34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0b104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86b7b4, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) create_empty_key;
    
    // [CmpCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f1398, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7034b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73fb08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6640c0, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) create_event;
    
    // [CmpCreateHiveRootCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x145f6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7710e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67d814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778b50, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) create_hive_root_cell;
    
    // [CmpCreateHwProfileFriendlyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60d1c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x874c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa03bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8731a0, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) create_hw_profile_friendly_name;
    
    // [CmpCreateKeyBody]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x506ddc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cc5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c6fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x622a30, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) create_key_body;
    
    // [CmpCreateKeyControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40a2b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c65e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d9b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61ca20, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) create_key_control_block;
    
    // [CmpCreateLayerLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x611148, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd188, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74676c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cda28, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) create_layer_link;
    
    // [CmpCreateObjectTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a380, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa506d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb26598, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa50554, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) create_object_types;
    
    // [CmpCreatePerfKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5442ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x784810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8673f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78e5b0, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) create_perf_keys;
    
    // [CmpCreatePredefined]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54436c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7848d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8674b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78e678, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) create_predefined;
    
    // [CmpCreateRegistryRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77cd80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53380, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2673c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5321c, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) create_registry_root;
    
    // [CmpCreateRootNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77cc60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53560, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb25c28, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa533fc, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) create_root_node;
    
    // [CmpCreateTemporaryHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x612810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e6d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ff56c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716060, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) create_temporary_hive;
    
    // [CmpCreateTombstone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b9bf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e770c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601cf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e75fc, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) create_tombstone;
    
    // [CmpCsdBuildNumberString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec778, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64538, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f400, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) csd_build_number_string;
    
    // [CmpCsdVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec788, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f3f0, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) csd_version_string;
    
    // [CmpCurrentBuildNumberString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64518, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f410, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) current_build_number_string;
    
    // [CmpCurrentConfigString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec3f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980618, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64098, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97eef8, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) current_config_string;
    
    // [CmpCurrentControlSetControlNlsLanguagePathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2080, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa968f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a160, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b00, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) current_control_set_control_nls_language_path_string;
    
    // [CmpCurrentControlSetControlPxePathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2090, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96920, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a220, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95af0, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) current_control_set_control_pxe_path_string;
    
    // [CmpCurrentMajorVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981138, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fa08, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) current_major_version_string;
    
    // [CmpCurrentMinorVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981128, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fa28, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) current_minor_version_string;
    
    // [CmpCurrentString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec3e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980608, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa640a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97eee8, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) current_string;
    
    // [CmpCurrentTypeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981118, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f9f8, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) current_type_string;
    
    // [CmpCurrentVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec798, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64558, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f470, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) current_version_string;
    
    // [CmpDecrementAppHiveUnloadCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a994, 0x32828 bytes
    // ntoskrnl.exe .text:0x23d424, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347a6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2de0, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) decrement_app_hive_unload_count;
    
    // [CmpDelayCloseWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3239a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48100, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13b60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47d60, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) delay_close_work_item;
    
    // [CmpDelayCloseWorkItemActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a38c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d5c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb1c0, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) delay_close_work_item_active;
    
    // [CmpDelayCloseWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c40e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dad70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6953d0, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) delay_close_worker;
    
    // [CmpDelayDerefKeyControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c4a0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c5a1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6da7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61be64, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) delay_deref_key_control_block;
    
    // [CmpDelayFreeCmRm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419eb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63cb2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c5ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658d38, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) delay_free_cm_rm;
    
    // [CmpDelayFreeRMDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3235e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47a80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47a40, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) delay_free_rm_dpc;
    
    // [CmpDelayFreeRMDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5004, 0x32828 bytes
    // ntoskrnl.exe .text:0x2712b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3859d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322c80, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) delay_free_rm_dpc_routine;
    
    // [CmpDelayFreeRMListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323560, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47980, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47940, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) delay_free_rm_list_head;
    
    // [CmpDelayFreeRMLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323580, 0x32828 bytes
    // ntoskrnl.exe .data:0xc479e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc138a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc479a0, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) delay_free_rm_lock;
    
    // [CmpDelayFreeRMTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323620, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47a40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13840, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47a00, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) delay_free_rm_timer;
    
    // [CmpDelayFreeRMWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3235c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47a20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc479e0, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) delay_free_rm_work_item;
    
    // [CmpDelayFreeRMWorkItemActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242ec, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c338, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64508, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c318, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) delay_free_rm_work_item_active;
    
    // [CmpDelayFreeRMWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e2e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x779ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8b80, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) delay_free_rm_worker;
    
    // [CmpDelayedCloseElements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242e4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c328, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c308, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) delayed_close_elements;
    
    // [CmpDelayedCloseSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b4c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11e9c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb34, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11efc, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) delayed_close_size;
    
    // [CmpDelayedCloseTableLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3239c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48120, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13b00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47d80, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) delayed_close_table_lock;
    
    // [CmpDelayedDerefKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e49bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c482c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79d704, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61ac5c, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) delayed_deref_keys;
    
    // [CmpDelayedLRUListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323a00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48160, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13b40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47dc0, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) delayed_lru_list_head;
    
    // [CmpDeleteHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x73ce0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c1b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c854, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b008, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) delete_hive;
    
    // [CmpDeleteKcbCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41b178, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c274, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c998, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b0c4, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) delete_kcb_cache;
    
    // [CmpDeleteKeyObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d89a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cc280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ba590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6226c0, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) delete_key_object;
    
    // [CmpDeleteLightWeightTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4760, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed130, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) delete_light_weight_transaction;
    
    // [CmpDeleteTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6133c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87ad84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa15e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87a1bc, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) delete_tree;
    
    // [CmpDependOnFirmwareString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2ae0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa976b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8afc8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa968a8, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) depend_on_firmware_string;
    
    // [CmpDereferenceHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eca10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0e624, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65afe0, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) dereference_hive;
    
    // [CmpDereferenceKeyControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d3ee0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cd700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x623b40, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) dereference_key_control_block;
    
    // [CmpDereferenceKeyControlBlockUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeac40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748db0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e158, 0x1fe000 bytes
    //
    _s84(sdk::function<void(struct cm::key_control_block_t*)>*) dereference_key_control_block_unsafe;
    
    // [CmpDereferenceKeyControlBlockWithLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d3c70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f7c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7469c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2620, 0x1fe000 bytes
    //
    _s85(sdk::function<void(struct cm::key_control_block_t*, uint8_t)>*) dereference_key_control_block_with_lock;
    
    // [CmpDereferenceNameControlBlockWithLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c44c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c6e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6da880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61d270, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) dereference_name_control_block_with_lock;
    
    // [CmpDestroySecurityCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50a9b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c098, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79aa7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65aee8, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) destroy_security_cache;
    
    // [CmpDestroyVirtualStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86d014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0b370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86b994, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) destroy_virtual_stack;
    
    // [CmpDeviceIndexTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323680, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47e40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14280, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47aa0, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) device_index_table;
    
    // [CmpDhcpServerAckString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c20a0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96910, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a230, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b10, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) dhcp_server_ack_string;
    
    // [CmpDirtySectorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323508, 0x32828 bytes
    // ntoskrnl.exe .data:0xc478f4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc137b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc478b8, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) dirty_sector_count;
    
    // [CmpDirtyShutdownCountString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1d50, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96590, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89fd0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95780, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) dirty_shutdown_count_string;
    
    // [CmpDisableEmoticonString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b00, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa976c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b068, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa968b8, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) disable_emoticon_string;
    
    // [CmpDisableLazyFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5720, 0x32828 bytes
    // ntoskrnl.exe .text:0x27189c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6016f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32342c, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) disable_lazy_flush;
    
    // [CmpDiscardKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10508c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6260f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747334, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6933ac, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) discard_kcb;
    
    // [CmpDiskFullWarning]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6094d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873ef8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa04c58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x872408, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) disk_full_warning;
    
    // [CmpDiskFullWarningWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x609548, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa04cd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x872480, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) disk_full_warning_worker;
    
    // [CmpDiskFullWorkerPopupDisplayed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab84, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c700, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53457, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c700, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) disk_full_worker_popup_displayed;
    
    // [CmpDisplayDisabledString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2af0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa976d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b058, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa968c8, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) display_disabled_string;
    
    // [CmpDisplayParametersString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b10, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa976f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b088, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa968e8, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) display_parameters_string;
    
    // [CmpDoAccessCheckOnKCB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6070f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86d090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0b3f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86ba10, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) do_access_check_on_kcb;
    
    // [CmpDoAccessCheckOnSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60841c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86e300, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1abc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86cc80, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) do_access_check_on_subtree;
    
    // [CmpDoBuildVirtualStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607218, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86d220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0b588, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86bba0, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) do_build_virtual_stack;
    
    // [CmpDoCompareKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c5810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c5790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cfbb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61bbc0, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) do_compare_key_name;
    
    // [CmpDoFileSetSizeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494b34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66cda8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684fdc, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) do_file_set_size_ex;
    
    // [CmpDoFileWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f0b80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x702bfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73f80c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66380c, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) do_file_write;
    
    // [CmpDoFindSubKeyByNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d46d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a3010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d27b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f9570, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) do_find_sub_key_by_number;
    
    // [CmpDoFlushAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x123a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x379bbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x60116c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37af3c, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) do_flush_all;
    
    // [CmpDoFlushNextHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eed34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7464c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690760, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) do_flush_next_hive;
    
    // [CmpDoIdleProcessing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5dc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50434, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd177bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50434, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) do_idle_processing;
    
    // [CmpDoParseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b8d70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cdee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b5cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x624320, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) do_parse_key;
    
    // [CmpDoQueueLateUnloadWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4594, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a82c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7462d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690a4c, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) do_queue_late_unload_worker;
    
    // [CmpDoQueueSystemHiveHysteresis]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602690, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8682dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02d88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866d3c, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) do_queue_system_hive_hysteresis;
    
    // [CmpDoReDoCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x616eb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f28c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87da44, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) do_re_do_create_key;
    
    // [CmpDoReDoDeleteValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x616fb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f3b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a998, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87db70, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) do_re_do_delete_value;
    
    // [CmpDoReDoRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x617004, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f414, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a9f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87dbcc, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) do_re_do_record;
    
    // [CmpDoReDoRenameKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6170d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f4f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1aad4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87dcac, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) do_re_do_rename_key;
    
    // [CmpDoReDoSetKeyUserFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x617128, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1ab30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87dd08, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) do_re_do_set_key_user_flags;
    
    // [CmpDoReDoSetLastWriteTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x617188, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1aba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87dd78, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) do_re_do_set_last_write_time;
    
    // [CmpDoReDoSetSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6171e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1ac10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87dde8, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) do_re_do_set_security_descriptor;
    
    // [CmpDoReDoSetValueExisting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61723c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1ac70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87de48, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) do_re_do_set_value_existing;
    
    // [CmpDoReDoSetValueNew]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61723c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1ac70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87de48, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) do_re_do_set_value_new;
    
    // [CmpDoReOpenTransKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6172a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87f704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1ace4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87debc, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) do_re_open_trans_key;
    
    // [CmpDoReadTxRBigLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b14c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87278c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1039c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870c7c, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) do_read_tx_r_big_log_record;
    
    // [CmpDoReconcileNextHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d638, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e3d0, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) do_reconcile_next_hive;
    
    // [CmpDoSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7984c4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa58e60, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b30c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58d08, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) do_sort;
    
    // [CmpDoTransWriteLogRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41bcf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74da10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74bea4, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) do_trans_write_log_record;
    
    // [CmpDoesParseEnterRegistryA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dbdb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cd260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3cf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6236a0, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) does_parse_enter_registry_a;
    
    // [CmpDriverDependencyString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1f70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa967d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a060, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa959c0, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) driver_dependency_string;
    
    // [CmpDriverLoadPolicyString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b20, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa976e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b098, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa968d8, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) driver_load_policy_string;
    
    // [CmpDriverWildcardString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1f80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa967e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a080, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa959d0, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) driver_wildcard_string;
    
    // [CmpDsaDatabaseFileString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b30, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97708, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b078, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa968f8, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) dsa_database_file_string;
    
    // [CmpDummyApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) dummy_apc;
    
    // [CmpDumpKeyBodyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x605a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86bd08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa097a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a688, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) dump_key_body_list;
    
    // [CmpDumpOneKeyBody]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x605b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86be40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa098dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a7c0, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) dump_one_key_body;
    
    // [CmpDuplicateIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60f60c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8776a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x875bf8, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) duplicate_index;
    
    // [CmpEarlyLaunchString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b50, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97718, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b018, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96908, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) early_launch_string;
    
    // [CmpEnableLazyFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12ffd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2958, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8348, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3ea8, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) enable_lazy_flush;
    
    // [CmpEnableLazyFlushDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323740, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc141c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47820, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) enable_lazy_flush_dpc;
    
    // [CmpEnableLazyFlushDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1245fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x243350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3237e0, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) enable_lazy_flush_dpc_routine;
    
    // [CmpEnableLazyFlushTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323700, 0x32828 bytes
    // ntoskrnl.exe .data:0xc478a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14200, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47860, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) enable_lazy_flush_timer;
    
    // [CmpEnableLazyFlushTimerInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32705c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50924, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7650, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50924, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) enable_lazy_flush_timer_initialized;
    
    // [CmpEnabledString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b40, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97728, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b008, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96918, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) enabled_string;
    
    // [CmpEnumerateAllHigherLayerKcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e34a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7176a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6730b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f0e8, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) enumerate_all_higher_layer_kcbs;
    
    // [CmpEnumerateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d048, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7602e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8103f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767d30, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) enumerate_callback;
    
    // [CmpEnumerateLayeredKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x605094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66cda8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cdbb0, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) enumerate_layered_key;
    
    // [CmpErrataString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97738, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8aff8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96928, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) errata_string;
    
    // [CmpErrorControlString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1f90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa967f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a040, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa959e0, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) error_control_string;
    
    // [CmpEtwDumpKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601c18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8678f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x897db6, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865d28, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) etw_dump_kcb;
    
    // [CmpExamineSaclForAuditEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86e4bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d328, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86ce3c, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) examine_sacl_for_audit_event;
    
    // [CmpExpandPathInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eec7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65195c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79daa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c52ac, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) expand_path_info;
    
    // [CmpExtendedStateString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d30, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97948, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b208, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b38, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) extended_state_string;
    
    // [CmpFailPrimarySave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343064, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf506c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf506c, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) fail_primary_save;
    
    // [CmpFatalFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601774, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86bf50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa099ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a8d0, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) fatal_filter;
    
    // [CmpFeatureBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e0010, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99930, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afda0, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) feature_bits;
    
    // [CmpFeatureSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97998, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b238, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b88, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) feature_settings;
    
    // [CmpFeatureSettingsOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97988, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b248, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b78, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) feature_settings_override;
    
    // [CmpFeatureSettingsOverrideMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa979b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b2b8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96ba8, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) feature_settings_override_mask;
    
    // [CmpFileFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x609fdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62fad8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e418, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6851fc, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) file_flush;
    
    // [CmpFileFlushAndPurge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4483fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x631588, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e208, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6871a0, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) file_flush_and_purge;
    
    // [CmpFileNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97758, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b038, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96948, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) file_name_string;
    
    // [CmpFileRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44b1a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d60b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0200, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) file_read;
    
    // [CmpFileWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448c54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73f7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4280, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) file_write;
    
    // [CmpFilterAcpiDockingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x540d60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x782eb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x857934, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78cc58, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) filter_acpi_docking_state;
    
    // [CmpFindCellInIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60f77c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x877840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1475c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x875d90, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) find_cell_in_index;
    
    // [CmpFindControlSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552b30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b684, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792dd8, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) find_control_set;
    
    // [CmpFindDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x798d54, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa597ec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ac04, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa59694, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) find_drivers;
    
    // [CmpFindGroupOrderList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x798424, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa58bf4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb49778, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58a9c, 0x1fe000 bytes
    //
    _t68(sdk::unknown_ptr) find_group_order_list;
    
    // [CmpFindKcbInHashEntryByCellIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x605c58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86bf78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09a14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a8f8, 0x1fe000 bytes
    //
    _t69(sdk::unknown_ptr) find_kcb_in_hash_entry_by_cell_index;
    
    // [CmpFindKcbInHashEntryByCompressedName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8620, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86bff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09a8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a970, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) find_kcb_in_hash_entry_by_compressed_name;
    
    // [CmpFindKcbInHashEntryByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50c948, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c6ad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c17e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61cf14, 0x1fe000 bytes
    //
    _t71(sdk::unknown_ptr) find_kcb_in_hash_entry_by_name;
    
    // [CmpFindMatchingDescriptorCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee70c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62b5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74e784, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68b754, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) find_matching_descriptor_cell;
    
    // [CmpFindNameInList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e792c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63e748, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cdc58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6577e8, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) find_name_in_list;
    
    // [CmpFindNameInListCellWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e6fc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c2040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d2520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x618470, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) find_name_in_list_cell_with_status;
    
    // [CmpFindNameInListWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e6f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c1f88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cf840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6183c0, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) find_name_in_list_with_status;
    
    // [CmpFindPathByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x624094, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66874c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6913fc, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) find_path_by_name;
    
    // [CmpFindSecurityCellCacheIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee030, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a2ee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2de8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f9440, 0x1fe000 bytes
    //
    _t77(sdk::unknown_ptr) find_security_cell_cache_index;
    
    // [CmpFindSubKeyByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552b18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b488, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792db4, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) find_sub_key_by_name;
    
    // [CmpFindSubKeyByNameWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4deba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65b8fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74a154, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cf5f8, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) find_sub_key_by_name_with_status;
    
    // [CmpFindSubKeyByNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d48a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a32d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d186c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f9830, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) find_sub_key_by_number;
    
    // [CmpFindSubKeyByNumberEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d4bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a3390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d6290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f98f0, 0x1fe000 bytes
    //
    _t81(sdk::unknown_ptr) find_sub_key_by_number_ex;
    
    // [CmpFindSubKeyByNumberFromMergedView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607344, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86d360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0b6cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86bce0, 0x1fe000 bytes
    //
    _t82(sdk::unknown_ptr) find_sub_key_by_number_from_merged_view;
    
    // [CmpFindSubKeyInLeafWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c5010, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c5230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d7090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61b660, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) find_sub_key_in_leaf_with_status;
    
    // [CmpFindSubKeyInRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c4b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c48ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d7a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61ad1c, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) find_sub_key_in_root;
    
    // [CmpFindSubkeyInHashByChildCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50c690, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x747b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f400, 0x1fe000 bytes
    //
    _t85(sdk::unknown_ptr) find_subkey_in_hash_by_child_cell;
    
    // [CmpFindTagIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79866c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa59038, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4a388, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58ee0, 0x1fe000 bytes
    //
    _t86(sdk::unknown_ptr) find_tag_index;
    
    // [CmpFindValueByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e824c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63e710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74cbb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6577b0, 0x1fe000 bytes
    //
    _t87(sdk::unknown_ptr) find_value_by_name;
    
    // [CmpFinishBeingActiveFlusherAndReconciler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550b14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77c440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836e3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x781150, 0x1fe000 bytes
    //
    _t88(sdk::unknown_ptr) finish_being_active_flusher_and_reconciler;
    
    // [CmpFinishSystemHivesLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x543bf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x784110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8288c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78deb0, 0x1fe000 bytes
    //
    _t89(sdk::unknown_ptr) finish_system_hives_load;
    
    // [CmpFireCleanupNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60179c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd104, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0658, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cd9a4, 0x1fe000 bytes
    //
    _t90(sdk::unknown_ptr) fire_cleanup_notifications;
    
    // [CmpFirmwareBootDeviceString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c20b0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96930, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a210, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b30, 0x1fe000 bytes
    //
    _t91(sdk::unknown_ptr) firmware_boot_device_string;
    
    // [CmpFirmwareResourcesString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97748, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b048, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96938, 0x1fe000 bytes
    //
    _t92(sdk::unknown_ptr) firmware_resources_string;
    
    // [CmpFirstReorganize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9cec, 0x32828 bytes
    // ntoskrnl.exe .data:0xc122c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd74, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12324, 0x1fe000 bytes
    //
    _t93(sdk::unknown_ptr) first_reorganize;
    
    // [CmpFlagsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d40, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97978, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b258, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b68, 0x1fe000 bytes
    //
    _t94(sdk::unknown_ptr) flags_string;
    
    // [CmpFlushBackupHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60a288, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x871730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0c43c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86fc20, 0x1fe000 bytes
    //
    _t95(sdk::unknown_ptr) flush_backup_hive;
    
    // [CmpFlushHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f018c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x703ea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7436d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x664ab8, 0x1fe000 bytes
    //
    _t96(sdk::unknown_ptr) flush_hive;
    
    // [CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6111e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717658, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa114e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f098, 0x1fe000 bytes
    //
    _t97(sdk::unknown_ptr) flush_notifies_on_all_unbacked_higher_layer_kcbs;
    
    // [CmpFlushNotifiesOnKeyBodyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50aa60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6246c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7479cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69173c, 0x1fe000 bytes
    //
    _t98(sdk::unknown_ptr) flush_notifies_on_key_body_list;
    
    // [CmpFlushNotifiesPostCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x611224, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871a50, 0x1fe000 bytes
    //
    _t99(sdk::unknown_ptr) flush_notifies_post_callback;
    
    // [CmpFlushNotifiesPreCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61123c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871a80, 0x1fe000 bytes
    //
    _u00(sdk::unknown_ptr) flush_notifies_pre_callback;
    
    // [CmpFlushNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d954, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c3d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79af6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x659ae8, 0x1fe000 bytes
    //
    _u01(sdk::unknown_ptr) flush_notify;
    
    // [CmpFlushUnsupportedOperationTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499aa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b9e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e48d8, 0x1fe000 bytes
    //
    _u02(sdk::unknown_ptr) flush_unsupported_operation_telemetry;
    
    // [CmpForceFlushForCoalescing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60957c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x897d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8724c0, 0x1fe000 bytes
    //
    _u03(sdk::unknown_ptr) force_flush_for_coalescing;
    
    // [CmpForceFlushPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323788, 0x32828 bytes
    // ntoskrnl.exe .data:0xc478e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc478a0, 0x1fe000 bytes
    //
    _u04(sdk::unknown_ptr) force_flush_pending;
    
    // [CmpForceFlushWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3236e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc141a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47800, 0x1fe000 bytes
    //
    _u05(sdk::unknown_ptr) force_flush_work_item;
    
    // [CmpForceFlushWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6095bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x874000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa04d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x872510, 0x1fe000 bytes
    //
    _u06(sdk::unknown_ptr) force_flush_worker;
    
    // [CmpFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4550, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69f220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697940, 0x1fe000 bytes
    //
    _u07(sdk::unknown_ptr) free;
    
    // [CmpFreeAllMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602e3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0453c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x867318, 0x1fe000 bytes
    //
    _u08(sdk::unknown_ptr) free_all_memory;
    
    // [CmpFreeBootRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bad0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6021a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e7f78, 0x1fe000 bytes
    //
    _u09(sdk::unknown_ptr) free_boot_registry;
    
    // [CmpFreeCallbackContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6cac, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6a34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x202f9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6924, 0x1fe000 bytes
    //
    _u10(sdk::unknown_ptr) free_callback_context;
    
    // [CmpFreeCallbackObjectContexts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb908, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e94fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cc1a8, 0x1fe000 bytes
    //
    _u11(sdk::unknown_ptr) free_callback_object_contexts;
    
    // [CmpFreeDriverList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79822c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa588d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb542d8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58778, 0x1fe000 bytes
    //
    _u12(sdk::unknown_ptr) free_driver_list;
    
    // [CmpFreeIndexByCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60f7cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8778c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa147b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x875e10, 0x1fe000 bytes
    //
    _u13(sdk::unknown_ptr) free_index_by_cell;
    
    // [CmpFreeKeyBody]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ae6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6295c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x749cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693238, 0x1fe000 bytes
    //
    _u14(sdk::unknown_ptr) free_key_body;
    
    // [CmpFreeKeyByCell]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ab24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x749154, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695da0, 0x1fe000 bytes
    //
    _u15(sdk::unknown_ptr) free_key_by_cell;
    
    // [CmpFreeKeyControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d3830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x659450, 0x1fe000 bytes
    //
    _u16(sdk::unknown_ptr) free_key_control_block;
    
    // [CmpFreeKeyValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60e4c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8763b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa131c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x874900, 0x1fe000 bytes
    //
    _u17(sdk::unknown_ptr) free_key_values;
    
    // [CmpFreeLineList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78f44c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa408d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3139c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa47684, 0x1fe000 bytes
    //
    _u18(sdk::unknown_ptr) free_line_list;
    
    // [CmpFreeOffsetArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60a5bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x871ac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0c7d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86ffb8, 0x1fe000 bytes
    //
    _u19(sdk::unknown_ptr) free_offset_array;
    
    // [CmpFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x740d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _u20(sdk::unknown_ptr) free_pool;
    
    // [CmpFreePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4028, 0x32828 bytes
    // ntoskrnl.exe .text:0x269504, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfc80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c5d8, 0x1fe000 bytes
    //
    _u21(sdk::unknown_ptr) free_pool_with_tag;
    
    // [CmpFreePostBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d5f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbe50, 0x1fe000 bytes
    //
    _u22(sdk::unknown_ptr) free_post_block;
    
    // [CmpFreeSectionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78f3f8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4087c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb31344, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4762c, 0x1fe000 bytes
    //
    _u23(sdk::unknown_ptr) free_section_list;
    
    // [CmpFreeSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50b830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a218, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74af70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5474, 0x1fe000 bytes
    //
    _u24(sdk::unknown_ptr) free_security_descriptor;
    
    // [CmpFreeSubordinatePost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d8f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6541d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb444, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617d98, 0x1fe000 bytes
    //
    _u25(sdk::unknown_ptr) free_subordinate_post;
    
    // [CmpFreeTransientPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x740d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _u26(sdk::unknown_ptr) free_transient_pool;
    
    // [CmpFreeTransientPoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4028, 0x32828 bytes
    // ntoskrnl.exe .text:0x269504, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfc80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c5d8, 0x1fe000 bytes
    //
    _u27(sdk::unknown_ptr) free_transient_pool_with_tag;
    
    // [CmpFreeValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50acfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628b50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x749360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69724c, 0x1fe000 bytes
    //
    _u28(sdk::unknown_ptr) free_value;
    
    // [CmpFreeValueData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ad68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628bcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7493f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697124, 0x1fe000 bytes
    //
    _u29(sdk::unknown_ptr) free_value_data;
    
    // [CmpFreezeListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3238e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13c40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47ce0, 0x1fe000 bytes
    //
    _u30(sdk::unknown_ptr) freeze_list_lock;
    
    // [CmpFreezeThawDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323940, 0x32828 bytes
    // ntoskrnl.exe .data:0xc480c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13c60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47d20, 0x1fe000 bytes
    //
    _u31(sdk::unknown_ptr) freeze_thaw_dpc;
    
    // [CmpFreezeThawDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8ae8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6ab0, 0x1fe000 bytes
    //
    _u32(sdk::unknown_ptr) freeze_thaw_dpc_routine;
    
    // [CmpFreezeThawPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343048, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf504c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b964, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf504c, 0x1fe000 bytes
    //
    _u33(sdk::unknown_ptr) freeze_thaw_pending;
    
    // [CmpFreezeThawState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422fc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1734c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4860, 0x1fe000 bytes
    //
    _u34(sdk::unknown_ptr) freeze_thaw_state;
    
    // [CmpFreezeThawTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323900, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48040, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13ca0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47ca0, 0x1fe000 bytes
    //
    _u35(sdk::unknown_ptr) freeze_thaw_timer;
    
    // [CmpFreezeThawWaitListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3238d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13c30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47c80, 0x1fe000 bytes
    //
    _u36(sdk::unknown_ptr) freeze_thaw_wait_list_head;
    
    // [CmpFreezeThawWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323980, 0x32828 bytes
    // ntoskrnl.exe .data:0xc480a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13ce0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47d00, 0x1fe000 bytes
    //
    _u37(sdk::unknown_ptr) freeze_thaw_work_item;
    
    // [CmpFreezeThawWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608e08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86ed50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa06c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d6d0, 0x1fe000 bytes
    //
    _u38(sdk::unknown_ptr) freeze_thaw_worker;
    
    // [CmpGenerateAppHiveSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b88ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75c2f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f704, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x763d44, 0x1fe000 bytes
    //
    _u39(sdk::unknown_ptr) generate_app_hive_security_descriptor;
    
    // [CmpGenerateFlushControlData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44da54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633148, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682d04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6867c4, 0x1fe000 bytes
    //
    _u40(sdk::unknown_ptr) generate_flush_control_data;
    
    // [CmpGetAcpiBiosVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77bb78, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa522d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb840f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa52158, 0x1fe000 bytes
    //
    _u41(sdk::unknown_ptr) get_acpi_bios_version;
    
    // [CmpGetAcpiProfileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x540f24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78308c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x857b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78ce2c, 0x1fe000 bytes
    //
    _u42(sdk::unknown_ptr) get_acpi_profile_information;
    
    // [CmpGetBiosDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77b978, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa520b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84184, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa51f3c, 0x1fe000 bytes
    //
    _u43(sdk::unknown_ptr) get_bios_date;
    
    // [CmpGetBiosVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77b7a4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa51ef8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb843b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa51d7c, 0x1fe000 bytes
    //
    _u44(sdk::unknown_ptr) get_bios_version;
    
    // [CmpGetBootValueData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7997a4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5a48c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4a0cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5a334, 0x1fe000 bytes
    //
    _u45(sdk::unknown_ptr) get_boot_value_data;
    
    // [CmpGetCallbackObjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x401b30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64a02c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bbdf4, 0x1fe000 bytes
    //
    _u46(sdk::unknown_ptr) get_callback_object_context;
    
    // [CmpGetCmHiveFromVirtualPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e190c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623904, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668e88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690ef4, 0x1fe000 bytes
    //
    _u47(sdk::unknown_ptr) get_cm_hive_from_virtual_path;
    
    // [CmpGetComponentHashAtIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50caa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cb880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e652c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x621cc0, 0x1fe000 bytes
    //
    _u48(sdk::unknown_ptr) get_component_hash_at_index;
    
    // [CmpGetComponentNameAtIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abab0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cca40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bfdd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x622e80, 0x1fe000 bytes
    //
    _u49(sdk::unknown_ptr) get_component_name_at_index;
    
    // [CmpGetCorrectKcbLockOrder]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50cb44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670fbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e47ec, 0x1fe000 bytes
    //
    _u50(sdk::unknown_ptr) get_correct_kcb_lock_order;
    
    // [CmpGetEffectiveKeyNodeSemantics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6112a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715ba0, 0x1fe000 bytes
    //
    _u51(sdk::unknown_ptr) get_effective_key_node_semantics;
    
    // [CmpGetFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d5e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68184c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686c10, 0x1fe000 bytes
    //
    _u52(sdk::unknown_ptr) get_file_size;
    
    // [CmpGetKcbAtLayerHeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dbdf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c6508, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6de638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61c948, 0x1fe000 bytes
    //
    _u53(sdk::unknown_ptr) get_kcb_at_layer_height;
    
    // [CmpGetKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790b88, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42144, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30dd0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48ef4, 0x1fe000 bytes
    //
    _u54(sdk::unknown_ptr) get_key_name;
    
    // [CmpGetKeyNodeForKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e82b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74852c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692400, 0x1fe000 bytes
    //
    _u55(sdk::unknown_ptr) get_key_node_for_kcb;
    
    // [CmpGetLastHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490818, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66eee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e205c, 0x1fe000 bytes
    //
    _u56(sdk::unknown_ptr) get_last_hive;
    
    // [CmpGetMappingHiveForString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66904c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690f30, 0x1fe000 bytes
    //
    _u57(sdk::unknown_ptr) get_mapping_hive_for_string;
    
    // [CmpGetNameControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c4630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c6ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d7d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61cfe0, 0x1fe000 bytes
    //
    _u58(sdk::unknown_ptr) get_name_control_block;
    
    // [CmpGetNextActiveHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eee70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690970, 0x1fe000 bytes
    //
    _u59(sdk::unknown_ptr) get_next_active_hive;
    
    // [CmpGetNextHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ec83c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x627f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7429bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695210, 0x1fe000 bytes
    //
    _u60(sdk::unknown_ptr) get_next_hive;
    
    // [CmpGetNextName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13d248, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789548, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b5b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7932e8, 0x1fe000 bytes
    //
    _u61(sdk::unknown_ptr) get_next_name;
    
    // [CmpGetNodeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x798f98, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa59b00, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4afac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa599a8, 0x1fe000 bytes
    //
    _u62(sdk::unknown_ptr) get_node_name;
    
    // [CmpGetPhaseAccessBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee160, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86b6c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa090f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a040, 0x1fe000 bytes
    //
    _u63(sdk::unknown_ptr) get_phase_access_bit;
    
    // [CmpGetRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77bc00, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa52364, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84fd4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa521e8, 0x1fe000 bytes
    //
    _u64(sdk::unknown_ptr) get_registry_value;
    
    // [CmpGetSectionLineIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790a78, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42024, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30cb0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48dd4, 0x1fe000 bytes
    //
    _u65(sdk::unknown_ptr) get_section_line_index;
    
    // [CmpGetSectionLineIndexValueCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790328, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa41564, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb301e4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48314, 0x1fe000 bytes
    //
    _u66(sdk::unknown_ptr) get_section_line_index_value_count;
    
    // [CmpGetSecurityCacheEntryForKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edb18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c64a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61c8e4, 0x1fe000 bytes
    //
    _u67(sdk::unknown_ptr) get_security_cache_entry_for_kcb_stack;
    
    // [CmpGetSecurityDescriptorForKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edb04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86e5b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d424, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86cf38, 0x1fe000 bytes
    //
    _u68(sdk::unknown_ptr) get_security_descriptor_for_kcb_stack;
    
    // [CmpGetSecurityDescriptorNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x105d58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62b41c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74e590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68b5b0, 0x1fe000 bytes
    //
    _u69(sdk::unknown_ptr) get_security_descriptor_node;
    
    // [CmpGetSubKeyCountForKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60f848, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x877954, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x875ea4, 0x1fe000 bytes
    //
    _u70(sdk::unknown_ptr) get_sub_key_count_for_kcb_stack;
    
    // [CmpGetSubKeyCountForKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60f8d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8779f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d47c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x875f44, 0x1fe000 bytes
    //
    _u71(sdk::unknown_ptr) get_sub_key_count_for_key_node_stack;
    
    // [CmpGetSymbolicLinkTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c5ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d5090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61bf00, 0x1fe000 bytes
    //
    _u72(sdk::unknown_ptr) get_symbolic_link_target;
    
    // [CmpGetToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x797bd4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5aa2c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40a7c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5a8d4, 0x1fe000 bytes
    //
    _u73(sdk::unknown_ptr) get_token;
    
    // [CmpGetValueCountForKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b9550, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e7028, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x202484, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6f18, 0x1fe000 bytes
    //
    _u74(sdk::unknown_ptr) get_value_count_for_key_node_stack;
    
    // [CmpGetValueData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4de9c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cac90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cff10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6210d0, 0x1fe000 bytes
    //
    _u75(sdk::unknown_ptr) get_value_data;
    
    // [CmpGetValueForAudit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610a30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8786d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa15594, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876c20, 0x1fe000 bytes
    //
    _u76(sdk::unknown_ptr) get_value_for_audit;
    
    // [CmpGetVirtualStoreRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6077b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86d824, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0bbf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86c1a4, 0x1fe000 bytes
    //
    _u77(sdk::unknown_ptr) get_virtual_store_root;
    
    // [CmpGetVirtualizationID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1cd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6235bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668c04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68ef6c, 0x1fe000 bytes
    //
    _u78(sdk::unknown_ptr) get_virtualization_id;
    
    // [CmpGetVirtualizationIDFromFullVirtualPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1a40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623b1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668ec4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690e3c, 0x1fe000 bytes
    //
    _u79(sdk::unknown_ptr) get_virtualization_id_from_full_virtual_path;
    
    // [CmpGetVolumeClusterSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x631728, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68039c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687340, 0x1fe000 bytes
    //
    _u80(sdk::unknown_ptr) get_volume_cluster_size;
    
    // [CmpGetVolumeClusterSizeCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a04a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x673570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6b60, 0x1fe000 bytes
    //
    _u81(sdk::unknown_ptr) get_volume_cluster_size_completion;
    
    // [CmpGetVolumeLogFileSizeCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671908, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5168, 0x1fe000 bytes
    //
    _u82(sdk::unknown_ptr) get_volume_log_file_size_cap;
    
    // [CmpGlobalFlushControlFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3238c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48018, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13d58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47c78, 0x1fe000 bytes
    //
    _u83(sdk::unknown_ptr) global_flush_control_flags;
    
    // [CmpGlobalQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a078, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b080, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51060, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b080, 0x1fe000 bytes
    //
    _u84(sdk::unknown_ptr) global_quota;
    
    // [CmpGlobalQuotaAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a228, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b238, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b230, 0x1fe000 bytes
    //
    _u85(sdk::unknown_ptr) global_quota_allowed;
    
    // [CmpGlobalQuotaUsed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ade8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c900, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53610, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8f8, 0x1fe000 bytes
    //
    _u86(sdk::unknown_ptr) global_quota_used;
    
    // [CmpGlobalQuotaWarning]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a220, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b230, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b238, 0x1fe000 bytes
    //
    _u87(sdk::unknown_ptr) global_quota_warning;
    
    // [CmpGroupAssignmentString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2b90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97768, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b028, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96958, 0x1fe000 bytes
    //
    _u88(sdk::unknown_ptr) group_assignment_string;
    
    // [CmpGroupOrderListString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1fa0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96800, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a050, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa959f0, 0x1fe000 bytes
    //
    _u89(sdk::unknown_ptr) group_order_list_string;
    
    // [CmpGroupString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1fb0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96810, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a0c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a00, 0x1fe000 bytes
    //
    _u90(sdk::unknown_ptr) group_string;
    
    // [CmpHardwareConfigString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2ba0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97778, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b118, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96968, 0x1fe000 bytes
    //
    _u91(sdk::unknown_ptr) hardware_config_string;
    
    // [CmpHashCompressedComponent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10aa10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x747cd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7477c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f594, 0x1fe000 bytes
    //
    _u92(sdk::unknown_ptr) hash_compressed_component;
    
    // [CmpHashUnicodeComponent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eebd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a1a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74aef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6931c4, 0x1fe000 bytes
    //
    _u93(sdk::unknown_ptr) hash_unicode_component;
    
    // [CmpHiveFileListHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a398, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb208, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb1c8, 0x1fe000 bytes
    //
    _u94(sdk::unknown_ptr) hive_file_list_handle;
    
    // [CmpHiveListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae40, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c918, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c918, 0x1fe000 bytes
    //
    _u95(sdk::unknown_ptr) hive_list_head;
    
    // [CmpHiveListHeadLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d58, 0x32828 bytes
    // ntoskrnl.exe .data:0xc485c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14378, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485a0, 0x1fe000 bytes
    //
    _u96(sdk::unknown_ptr) hive_list_head_lock;
    
    // [CmpHiveRedirectionFileListHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a390, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5060, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b978, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5060, 0x1fe000 bytes
    //
    _u97(sdk::unknown_ptr) hive_redirection_file_list_handle;
    
    // [CmpHiveRootSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5430b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78506c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x829af0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78ee0c, 0x1fe000 bytes
    //
    _u98(sdk::unknown_ptr) hive_root_security_descriptor;
    
    // [CmpHoldLazyFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7db0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c908, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc111f0, 0x1fe000 bytes
    //
    _u99(sdk::unknown_ptr) hold_lazy_flush;
    
    // [CmpHwprofileDefaultSelect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a2ec, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa366c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb21280, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36060, 0x1fe000 bytes
    //
    _v00(sdk::unknown_ptr) hwprofile_default_select;
    
    // [CmpIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2bb0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97788, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b108, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96978, 0x1fe000 bytes
    //
    _v01(sdk::unknown_ptr) id_string;
    
    // [CmpImagePathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1fc0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96820, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a0b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a10, 0x1fe000 bytes
    //
    _v02(sdk::unknown_ptr) image_path_string;
    
    // [CmpInfNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2bc0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97798, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b138, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96988, 0x1fe000 bytes
    //
    _v03(sdk::unknown_ptr) inf_name_string;
    
    // [CmpInitBackupHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550988, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x871b1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0c828, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87000c, 0x1fe000 bytes
    //
    _v04(sdk::unknown_ptr) init_backup_hive;
    
    // [CmpInitCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5406f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b54f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e5dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd0b0, 0x1fe000 bytes
    //
    _v05(sdk::unknown_ptr) init_callbacks;
    
    // [CmpInitCmRM]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f7f70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f5ad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79cb0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65a02c, 0x1fe000 bytes
    //
    _v06(sdk::unknown_ptr) init_cm_rm;
    
    // [CmpInitGlobalQuotaAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7d74, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6ef14, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5e9f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e4cc, 0x1fe000 bytes
    //
    _v07(sdk::unknown_ptr) init_global_quota_allowed;
    
    // [CmpInitHiveFromFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4efbd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7025e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x741a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6631f8, 0x1fe000 bytes
    //
    _v08(sdk::unknown_ptr) init_hive_from_file;
    
    // [CmpInitRmLogOnLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342648, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c14, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7621, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c14, 0x1fe000 bytes
    //
    _v09(sdk::unknown_ptr) init_rm_log_on_load;
    
    // [CmpInitSecurityCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44c5ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x632f18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x680678, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688b38, 0x1fe000 bytes
    //
    _v10(sdk::unknown_ptr) init_security_cache;
    
    // [CmpInitSIDToHiveMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54069c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6c2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870558, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be7d4, 0x1fe000 bytes
    //
    _v11(sdk::unknown_ptr) init_sid_to_hive_mapping;
    
    // [CmpInitializeActualFileSizes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d4dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63347c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x681744, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686af8, 0x1fe000 bytes
    //
    _v12(sdk::unknown_ptr) initialize_actual_file_sizes;
    
    // [CmpInitializeDelayedCloseTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5406a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4ca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86db68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc8e4, 0x1fe000 bytes
    //
    _v13(sdk::unknown_ptr) initialize_delayed_close_table;
    
    // [CmpInitializeDiscardReplaceContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571be0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871aa0, 0x1fe000 bytes
    //
    _v14(sdk::unknown_ptr) initialize_discard_replace_context;
    
    // [CmpInitializeFreezeThaw]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x540760, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7825b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fdc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c358, 0x1fe000 bytes
    //
    _v15(sdk::unknown_ptr) initialize_freeze_thaw;
    
    // [CmpInitializeHardwareConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77aa8c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa511e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb25d84, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5106c, 0x1fe000 bytes
    //
    _v16(sdk::unknown_ptr) initialize_hardware_configuration;
    
    // [CmpInitializeKcbCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41be38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f30c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x735a78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68c080, 0x1fe000 bytes
    //
    _v17(sdk::unknown_ptr) initialize_kcb_cache;
    
    // [CmpInitializeKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abbdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a144, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c83d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed554, 0x1fe000 bytes
    //
    _v18(sdk::unknown_ptr) initialize_kcb_stack;
    
    // [CmpInitializeKeyNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60e594, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x876498, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa132a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8749e8, 0x1fe000 bytes
    //
    _v19(sdk::unknown_ptr) initialize_key_name_string;
    
    // [CmpInitializeKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6112b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6549ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8414, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8830, 0x1fe000 bytes
    //
    _v20(sdk::unknown_ptr) initialize_key_node_stack;
    
    // [CmpInitializeLazyWriters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552020, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x776968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787b68, 0x1fe000 bytes
    //
    _v21(sdk::unknown_ptr) initialize_lazy_writers;
    
    // [CmpInitializeLightWeightTransactionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5407a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7826a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82873c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c444, 0x1fe000 bytes
    //
    _v22(sdk::unknown_ptr) initialize_light_weight_transaction_type;
    
    // [CmpInitializeMachineDependentConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77acf4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5133c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb25edc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa511c0, 0x1fe000 bytes
    //
    _v23(sdk::unknown_ptr) initialize_machine_dependent_configuration;
    
    // [CmpInitializeNameCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55d610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79a7a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84b230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1d30, 0x1fe000 bytes
    //
    _v24(sdk::unknown_ptr) initialize_name_cache;
    
    // [CmpInitializeParseContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3e3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745b54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d838, 0x1fe000 bytes
    //
    _v25(sdk::unknown_ptr) initialize_parse_context;
    
    // [CmpInitializePreloadedHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77c998, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53054, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb24fd8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa52ef0, 0x1fe000 bytes
    //
    _v26(sdk::unknown_ptr) initialize_preloaded_hive;
    
    // [CmpInitializePreloadedHives]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77c8bc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa52dd0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27008, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa52c6c, 0x1fe000 bytes
    //
    _v27(sdk::unknown_ptr) initialize_preloaded_hives;
    
    // [CmpInitializeRegistryNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a282c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68f6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb55904, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68644, 0x1fe000 bytes
    //
    _v28(sdk::unknown_ptr) initialize_registry_names;
    
    // [CmpInitializeRegistryNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x541b7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x783d5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x828104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78dafc, 0x1fe000 bytes
    //
    _v29(sdk::unknown_ptr) initialize_registry_node;
    
    // [CmpInitializeSystemBiosInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7ba888, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8d438, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb246fc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c6b8, 0x1fe000 bytes
    //
    _v30(sdk::unknown_ptr) initialize_system_bios_information;
    
    // [CmpInitializeSystemHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77bfcc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa52ebc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb25a8c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa52d58, 0x1fe000 bytes
    //
    _v31(sdk::unknown_ptr) initialize_system_hive;
    
    // [CmpInitializeSystemHivesLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x567abc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x776b14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826e98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787d14, 0x1fe000 bytes
    //
    _v32(sdk::unknown_ptr) initialize_system_hives_load;
    
    // [CmpInitializeTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a5cc4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa503d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5bea8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa50258, 0x1fe000 bytes
    //
    _v33(sdk::unknown_ptr) initialize_transactions;
    
    // [CmpInitializeTrustedInstallerSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a300, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6e4ec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5dcf4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6daa4, 0x1fe000 bytes
    //
    _v34(sdk::unknown_ptr) initialize_trusted_installer_sid;
    
    // [CmpInitializeValueNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ddf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ea48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74a3cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x657ae8, 0x1fe000 bytes
    //
    _v35(sdk::unknown_ptr) initialize_value_name_string;
    
    // [CmpInsertCallbackInListByAltitude]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6591bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d0ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ccb4c, 0x1fe000 bytes
    //
    _v36(sdk::unknown_ptr) insert_callback_in_list_by_altitude;
    
    // [CmpInsertKeyHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x605ccc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86c0ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09b8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86aa6c, 0x1fe000 bytes
    //
    _v37(sdk::unknown_ptr) insert_key_hash;
    
    // [CmpInsertSecurityCellList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498974, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6719c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ce2f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5220, 0x1fe000 bytes
    //
    _v38(sdk::unknown_ptr) insert_security_cell_list;
    
    // [CmpInstallLanguageString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c20e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96950, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a260, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b20, 0x1fe000 bytes
    //
    _v39(sdk::unknown_ptr) install_language_string;
    
    // [CmpInterlockedFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54375c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7870c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82844c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790e64, 0x1fe000 bytes
    //
    _v40(sdk::unknown_ptr) interlocked_function;
    
    // [CmpIsCmRm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5084b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79ba5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658a30, 0x1fe000 bytes
    //
    _v41(sdk::unknown_ptr) is_cm_rm;
    
    // [CmpIsHiveAlreadyLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60533c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86b6d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a050, 0x1fe000 bytes
    //
    _v42(sdk::unknown_ptr) is_hive_already_loaded;
    
    // [CmpIsHiveBoundToTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0efc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x745728, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d368, 0x1fe000 bytes
    //
    _v43(sdk::unknown_ptr) is_hive_bound_to_trans;
    
    // [CmpIsHiveEligibleForLazyReconcile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44d75c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6864, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e320, 0x1fe000 bytes
    //
    _v44(sdk::unknown_ptr) is_hive_eligible_for_lazy_reconcile;
    
    // [CmpIsKcbLockAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50cb0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x747d24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747914, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f5e4, 0x1fe000 bytes
    //
    _v45(sdk::unknown_ptr) is_kcb_lock_allowed;
    
    // [CmpIsKeyDeleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ac870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623df4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6685f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69115c, 0x1fe000 bytes
    //
    _v46(sdk::unknown_ptr) is_key_deleted;
    
    // [CmpIsKeyDeletedForKeyBody]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d52d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cc980, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae13a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x622dc0, 0x1fe000 bytes
    //
    _v47(sdk::unknown_ptr) is_key_deleted_for_key_body;
    
    // [CmpIsKeyStackDeleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ac950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cdc30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6de5a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x624070, 0x1fe000 bytes
    //
    _v48(sdk::unknown_ptr) is_key_stack_deleted;
    
    // [CmpIsKeyStackSymlink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e6c98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cd6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ddf14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x623af0, 0x1fe000 bytes
    //
    _v49(sdk::unknown_ptr) is_key_stack_symlink;
    
    // [CmpIsLoadType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x798e84, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa599b4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ade8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5985c, 0x1fe000 bytes
    //
    _v50(sdk::unknown_ptr) is_load_type;
    
    // [CmpIsSystemEntity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af86c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d98e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aebc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ea6e0, 0x1fe000 bytes
    //
    _v51(sdk::function<uint8_t(char, struct sec::subject_context_t*, uint32_t*)>*) is_system_entity;
    
    // [CmpIsThisSameFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eca28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62856c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x742ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69583c, 0x1fe000 bytes
    //
    _v52(sdk::unknown_ptr) is_this_same_file;
    
    // [CmpIsValueTombstone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49ea98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628978, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693568, 0x1fe000 bytes
    //
    _v53(sdk::unknown_ptr) is_value_tombstone;
    
    // [CmpIssueNewDirtyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f3c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x673260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67d780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6930, 0x1fe000 bytes
    //
    _v54(sdk::unknown_ptr) issue_new_dirty_callback;
    
    // [CmpKernelString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d50, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97968, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b268, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b58, 0x1fe000 bytes
    //
    _v55(sdk::unknown_ptr) kernel_string;
    
    // [CmpKeyEnumStackAdvance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60f998, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70de88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c998, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715818, 0x1fe000 bytes
    //
    _v56(sdk::unknown_ptr) key_enum_stack_advance;
    
    // [CmpKeyEnumStackAdvanceInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60fa04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70debc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66cc20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71584c, 0x1fe000 bytes
    //
    _v57(sdk::unknown_ptr) key_enum_stack_advance_internal;
    
    // [CmpKeyEnumStackCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60fb54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65479c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d7ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c85e0, 0x1fe000 bytes
    //
    _v58(sdk::unknown_ptr) key_enum_stack_cleanup;
    
    // [CmpKeyEnumStackEntryAdvance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60fc14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x877c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66decc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876150, 0x1fe000 bytes
    //
    _v59(sdk::unknown_ptr) key_enum_stack_entry_advance;
    
    // [CmpKeyEnumStackEntryInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60fd10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d654, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c87cc, 0x1fe000 bytes
    //
    _v60(sdk::unknown_ptr) key_enum_stack_entry_initialize;
    
    // [CmpKeyEnumStackGetEntryAtLayerHeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60fe2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654884, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d818, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c86c8, 0x1fe000 bytes
    //
    _v61(sdk::unknown_ptr) key_enum_stack_get_entry_at_layer_height;
    
    // [CmpKeyEnumStackInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60fe5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654938, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c877c, 0x1fe000 bytes
    //
    _v62(sdk::unknown_ptr) key_enum_stack_initialize;
    
    // [CmpKeyEnumStackStartFromKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60fea8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x877f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c5b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8764b0, 0x1fe000 bytes
    //
    _v63(sdk::unknown_ptr) key_enum_stack_start_from_kcb_stack;
    
    // [CmpKeyEnumStackStartFromKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60ff30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x878000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c7d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876550, 0x1fe000 bytes
    //
    _v64(sdk::unknown_ptr) key_enum_stack_start_from_key_node_stack;
    
    // [CmpKeyFullNameLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb46e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c7a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cfeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61de70, 0x1fe000 bytes
    //
    _v65(sdk::unknown_ptr) key_full_name_length;
    
    // [CmpKeyNodeStackGetEntryAtLayerHeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x611318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654914, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c84e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8758, 0x1fe000 bytes
    //
    _v66(sdk::unknown_ptr) key_node_stack_get_entry_at_layer_height;
    
    // [CmpKeyTypeNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c20f0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96940, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a270, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b50, 0x1fe000 bytes
    //
    _v67(sdk::unknown_ptr) key_type_name_string;
    
    // [CmpLastAttemptStatusString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2bd0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa977a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b128, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96998, 0x1fe000 bytes
    //
    _v68(sdk::unknown_ptr) last_attempt_status_string;
    
    // [CmpLastBootShutdownString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2100, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96970, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a240, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b40, 0x1fe000 bytes
    //
    _v69(sdk::unknown_ptr) last_boot_shutdown_string;
    
    // [CmpLastBootSucceededString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2110, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96960, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a250, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b70, 0x1fe000 bytes
    //
    _v70(sdk::unknown_ptr) last_boot_succeeded_string;
    
    // [CmpLastKnownGoodString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2be0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa977b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b0b8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa969a8, 0x1fe000 bytes
    //
    _v71(sdk::unknown_ptr) last_known_good_string;
    
    // [CmpLateUnloadHiveWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50a3d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63b9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79a540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65a840, 0x1fe000 bytes
    //
    _v72(sdk::unknown_ptr) late_unload_hive_worker;
    
    // [CmpLazyCommitDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323880, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47fc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13a80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47c20, 0x1fe000 bytes
    //
    _v73(sdk::unknown_ptr) lazy_commit_dpc;
    
    // [CmpLazyCommitDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8b10, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6ae0, 0x1fe000 bytes
    //
    _v74(sdk::unknown_ptr) lazy_commit_dpc_routine;
    
    // [CmpLazyCommitListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323820, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47fa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13a00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47c00, 0x1fe000 bytes
    //
    _v75(sdk::unknown_ptr) lazy_commit_list_head;
    
    // [CmpLazyCommitTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323840, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47f60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13a40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47bc0, 0x1fe000 bytes
    //
    _v76(sdk::unknown_ptr) lazy_commit_timer;
    
    // [CmpLazyCommitWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323800, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13a20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47ba0, 0x1fe000 bytes
    //
    _v77(sdk::unknown_ptr) lazy_commit_work_item;
    
    // [CmpLazyCommitWorkItemActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34304c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5050, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b96c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5050, 0x1fe000 bytes
    //
    _v78(sdk::unknown_ptr) lazy_commit_work_item_active;
    
    // [CmpLazyCommitWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60911c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86f260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d9d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86dbe0, 0x1fe000 bytes
    //
    _v79(sdk::unknown_ptr) lazy_commit_worker;
    
    // [CmpLazyFlushDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfa44, 0x32828 bytes
    // ntoskrnl.exe .text:0x269ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37cb00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31b550, 0x1fe000 bytes
    //
    _v80(sdk::unknown_ptr) lazy_flush_dpc_routine;
    
    // [CmpLazyFlushIntervalInSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b54, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ea4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb3c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f04, 0x1fe000 bytes
    //
    _v81(sdk::unknown_ptr) lazy_flush_interval_in_seconds;
    
    // [CmpLazyReconcileIntervalInSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9bb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdd8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f8c, 0x1fe000 bytes
    //
    _v82(sdk::unknown_ptr) lazy_reconcile_interval_in_seconds;
    
    // [CmpLazyWriteWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1403b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bb5a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d3e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bbf50, 0x1fe000 bytes
    //
    _v83(sdk::unknown_ptr) lazy_write_worker;
    
    // [CmpLazyWriterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3380, 0x32828 bytes
    // ntoskrnl.exe .data:0xc00350, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00350, 0x1fe000 bytes
    //
    _v84(sdk::unknown_ptr) lazy_writer_data;
    
    // [CmpLightTransactionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3237e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47f20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13ac0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47b80, 0x1fe000 bytes
    //
    _v85(sdk::unknown_ptr) light_transaction_list;
    
    // [CmpLightWeightCleanupModifyKeyDataUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x613ac4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87b328, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87a760, 0x1fe000 bytes
    //
    _v86(sdk::unknown_ptr) light_weight_cleanup_modify_key_data_uo_w;
    
    // [CmpLightWeightCleanupSetValueKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d96c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18364, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x657c68, 0x1fe000 bytes
    //
    _v87(sdk::unknown_ptr) light_weight_cleanup_set_value_key_uo_w;
    
    // [CmpLightWeightCommitAddKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x613b10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87b37c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1839c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87a7b4, 0x1fe000 bytes
    //
    _v88(sdk::unknown_ptr) light_weight_commit_add_key_uo_w;
    
    // [CmpLightWeightCommitDeleteKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x613c4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87b504, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87a93c, 0x1fe000 bytes
    //
    _v89(sdk::unknown_ptr) light_weight_commit_delete_key_uo_w;
    
    // [CmpLightWeightCommitDeleteValueKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x613e18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7166dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18778, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e11c, 0x1fe000 bytes
    //
    _v90(sdk::unknown_ptr) light_weight_commit_delete_value_key_uo_w;
    
    // [CmpLightWeightCommitRenameKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x613f1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87b6f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa188b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87ab30, 0x1fe000 bytes
    //
    _v91(sdk::unknown_ptr) light_weight_commit_rename_key_uo_w;
    
    // [CmpLightWeightCommitSetSecDescUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6140b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87b8f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18ad4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87ad30, 0x1fe000 bytes
    //
    _v92(sdk::unknown_ptr) light_weight_commit_set_sec_desc_uo_w;
    
    // [CmpLightWeightCommitSetUserFlagsUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6141c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716ad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18bbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e514, 0x1fe000 bytes
    //
    _v93(sdk::unknown_ptr) light_weight_commit_set_user_flags_uo_w;
    
    // [CmpLightWeightCommitSetValueKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5306e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d844, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18c78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x657b40, 0x1fe000 bytes
    //
    _v94(sdk::unknown_ptr) light_weight_commit_set_value_key_uo_w;
    
    // [CmpLightWeightCreateModificationData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614248, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87ba34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87ae6c, 0x1fe000 bytes
    //
    _v95(sdk::unknown_ptr) light_weight_create_modification_data;
    
    // [CmpLightWeightCreateSetValueData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530bb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63eaa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18eac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65685c, 0x1fe000 bytes
    //
    _v96(sdk::unknown_ptr) light_weight_create_set_value_data;
    
    // [CmpLightWeightDuplicateParentLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614310, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87bb04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa18fe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87af3c, 0x1fe000 bytes
    //
    _v97(sdk::unknown_ptr) light_weight_duplicate_parent_lists;
    
    // [CmpLightWeightPrepareAddKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6143c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87bbdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa190d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87b014, 0x1fe000 bytes
    //
    _v98(sdk::unknown_ptr) light_weight_prepare_add_key_uo_w;
    
    // [CmpLightWeightPrepareDeleteKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6145f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87be38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa19390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87b270, 0x1fe000 bytes
    //
    _v99(sdk::unknown_ptr) light_weight_prepare_delete_key_uo_w;
    
    // [CmpLightWeightPrepareDeleteValueKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6147a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x715758, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa19564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71d198, 0x1fe000 bytes
    //
    _w00(sdk::unknown_ptr) light_weight_prepare_delete_value_key_uo_w;
    
    // [CmpLightWeightPrepareRenameKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614990, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87bfec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa19788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87b424, 0x1fe000 bytes
    //
    _w01(sdk::unknown_ptr) light_weight_prepare_rename_key_uo_w;
    
    // [CmpLightWeightPrepareSetKeyUserFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614cb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716e24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa19b58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e864, 0x1fe000 bytes
    //
    _w02(sdk::unknown_ptr) light_weight_prepare_set_key_user_flags;
    
    // [CmpLightWeightPrepareSetSecDescUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614d2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87c310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa19bf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87b748, 0x1fe000 bytes
    //
    _w03(sdk::unknown_ptr) light_weight_prepare_set_sec_desc_uo_w;
    
    // [CmpLightWeightPrepareSetValueKeyUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d9a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa19e28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656a44, 0x1fe000 bytes
    //
    _w04(sdk::unknown_ptr) light_weight_prepare_set_value_key_uo_w;
    
    // [CmpLightWeightSwapParentSubKeyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614ecc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87c4c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87b8fc, 0x1fe000 bytes
    //
    _w05(sdk::unknown_ptr) light_weight_swap_parent_sub_key_list;
    
    // [CmpLightWeightUpdateModificationActions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614f5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87c560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a314, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87b998, 0x1fe000 bytes
    //
    _w06(sdk::unknown_ptr) light_weight_update_modification_actions;
    
    // [CmpLightWeightUpdateSharedSetValueData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530b6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63aeec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658144, 0x1fe000 bytes
    //
    _w07(sdk::unknown_ptr) light_weight_update_shared_set_value_data;
    
    // [CmpLinkHiveToMaster]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41b378, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62ef24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73568c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68bc98, 0x1fe000 bytes
    //
    _w08(sdk::unknown_ptr) link_hive_to_master;
    
    // [CmpLinkKeyToHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5441cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x784710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x829308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78e4b0, 0x1fe000 bytes
    //
    _w09(sdk::unknown_ptr) link_key_to_hive;
    
    // [CmpListString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1fd0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96840, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a0a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a30, 0x1fe000 bytes
    //
    _w10(sdk::unknown_ptr) list_string;
    
    // [CmpLKGEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a158, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b15c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5111c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b15c, 0x1fe000 bytes
    //
    _w11(sdk::unknown_ptr) lkg_enabled;
    
    // [CmpLoadHiveLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d68, 0x32828 bytes
    // ntoskrnl.exe .data:0xc485c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14398, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485a8, 0x1fe000 bytes
    //
    _w12(sdk::unknown_ptr) load_hive_lock;
    
    // [CmpLoadHiveLockOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a2a0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51250, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2d8, 0x1fe000 bytes
    //
    _w13(sdk::unknown_ptr) load_hive_lock_owner;
    
    // [CmpLoadHiveThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55040c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77bed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780be0, 0x1fe000 bytes
    //
    _w14(sdk::unknown_ptr) load_hive_thread;
    
    // [CmpLoadHiveVolatile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6129e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87a238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ff62c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x878788, 0x1fe000 bytes
    //
    _w15(sdk::unknown_ptr) load_hive_volatile;
    
    // [CmpLoadKeyCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x73d9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b584, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fbc3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1b78, 0x1fe000 bytes
    //
    _w16(sdk::unknown_ptr) load_key_common;
    
    // [CmpLoadManufacturingModeNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7baad0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8d7f4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84d04, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8ca74, 0x1fe000 bytes
    //
    _w17(sdk::unknown_ptr) load_manufacturing_mode_node;
    
    // [CmpLoadManufacturingProfileNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bab90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8d8e4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84e2c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8cb64, 0x1fe000 bytes
    //
    _w18(sdk::unknown_ptr) load_manufacturing_profile_node;
    
    // [CmpLoadManufacturingProfileServicesNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bac40, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8d9ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84f1c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8cc2c, 0x1fe000 bytes
    //
    _w19(sdk::unknown_ptr) load_manufacturing_profile_services_node;
    
    // [CmpLoadOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce550, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546c8, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f6a8, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546c8, 0x1fe000 bytes
    //
    _w20(sdk::unknown_ptr) load_options;
    
    // [CmpLoadWorkerDebugEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc485a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14360, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48580, 0x1fe000 bytes
    //
    _w21(sdk::unknown_ptr) load_worker_debug_event;
    
    // [CmpLoadWorkerEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48580, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48560, 0x1fe000 bytes
    //
    _w22(sdk::unknown_ptr) load_worker_event;
    
    // [CmpLoadWorkerIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341e38, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4188, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17238, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4188, 0x1fe000 bytes
    //
    _w23(sdk::unknown_ptr) load_worker_increment;
    
    // [CmpLoadingSystemHivesActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326f80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508e4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508e4, 0x1fe000 bytes
    //
    _w24(sdk::unknown_ptr) loading_system_hives_active;
    
    // [CmpLockDeletedHashEntryExclusiveByKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ecf6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62634c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747444, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693624, 0x1fe000 bytes
    //
    _w25(sdk::unknown_ptr) lock_deleted_hash_entry_exclusive_by_kcb;
    
    // [CmpLockHashEntryExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c4330, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628448, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695718, 0x1fe000 bytes
    //
    _w26(sdk::unknown_ptr) lock_hash_entry_exclusive;
    
    // [CmpLockHashEntryExclusiveByKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d3b70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62806c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc668, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69533c, 0x1fe000 bytes
    //
    _w27(sdk::unknown_ptr) lock_hash_entry_exclusive_by_kcb;
    
    // [CmpLockHashEntryShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ca00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6711dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74782c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4a40, 0x1fe000 bytes
    //
    _w28(sdk::unknown_ptr) lock_hash_entry_shared;
    
    // [CmpLockHashEntrySharedByKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4231b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6284d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dd3b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6957a0, 0x1fe000 bytes
    //
    _w29(sdk::unknown_ptr) lock_hash_entry_shared_by_kcb;
    
    // [CmpLockHiveListExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41b280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f424, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7366f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d930, 0x1fe000 bytes
    //
    _w30(sdk::unknown_ptr) lock_hive_list_exclusive;
    
    // [CmpLockIXLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7486cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68da6c, 0x1fe000 bytes
    //
    _w31(sdk::unknown_ptr) lock_ix_lock_exclusive;
    
    // [CmpLockIXLockIntent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed16c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74872c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68dc90, 0x1fe000 bytes
    //
    _w32(sdk::unknown_ptr) lock_ix_lock_intent;
    
    // [CmpLockKcbExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c4ac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628418, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6da420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6956e8, 0x1fe000 bytes
    //
    _w33(sdk::unknown_ptr) lock_kcb_exclusive;
    
    // [CmpLockKcbShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abc40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cf8d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x625d10, 0x1fe000 bytes
    //
    _w34(sdk::unknown_ptr) lock_kcb_shared;
    
    // [CmpLockKcbStackExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ecbfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692540, 0x1fe000 bytes
    //
    _w35(sdk::unknown_ptr) lock_kcb_stack_exclusive;
    
    // [CmpLockKcbStackShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4093a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cf7c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc3b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x625c00, 0x1fe000 bytes
    //
    _w36(sdk::unknown_ptr) lock_kcb_stack_shared;
    
    // [CmpLockKcbStackTopExclusiveRestShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ecc38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x627fe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df0d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6952b8, 0x1fe000 bytes
    //
    _w37(sdk::unknown_ptr) lock_kcb_stack_top_exclusive_rest_shared;
    
    // [CmpLockRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abcc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d29a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x628de0, 0x1fe000 bytes
    //
    _w38(sdk::unknown_ptr) lock_registry;
    
    // [CmpLockRegistryExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edc40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a9bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748b1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690bdc, 0x1fe000 bytes
    //
    _w39(sdk::unknown_ptr) lock_registry_exclusive;
    
    // [CmpLockRegistryFreezeAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eeff4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746868, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690b40, 0x1fe000 bytes
    //
    _w40(sdk::unknown_ptr) lock_registry_freeze_aware;
    
    // [CmpLockTwoKcbsShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d4b10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a36b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d96cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f9c10, 0x1fe000 bytes
    //
    _w41(sdk::unknown_ptr) lock_two_kcbs_shared;
    
    // [CmpLockTwoSecurityCachesExclusiveShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49dec8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x745be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8e78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d820, 0x1fe000 bytes
    //
    _w42(sdk::unknown_ptr) lock_two_security_caches_exclusive_shared;
    
    // [CmpLogCheckpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0d18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x753608, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c3b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75aec8, 0x1fe000 bytes
    //
    _w43(sdk::unknown_ptr) log_checkpoint;
    
    // [CmpLogClearAccessBitsEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6026e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x662984, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d6184, 0x1fe000 bytes
    //
    _w44(sdk::unknown_ptr) log_clear_access_bits_event;
    
    // [CmpLogDirtyVectorUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44e92c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68ce74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6861e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f0d44, 0x1fe000 bytes
    //
    _w45(sdk::unknown_ptr) log_dirty_vector_use;
    
    // [CmpLogEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60278c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868334, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866d94, 0x1fe000 bytes
    //
    _w46(sdk::unknown_ptr) log_event;
    
    // [CmpLogExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2582d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2c48, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2c20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x29e0, 0x1fe000 bytes
    //
    _w47(sdk::unknown_ptr) log_ext;
    
    // [CmpLogFailureToGetFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60c5f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873b64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x872074, 0x1fe000 bytes
    //
    _w48(sdk::unknown_ptr) log_failure_to_get_file_size;
    
    // [CmpLogFileSizeCap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323504, 0x32828 bytes
    // ntoskrnl.exe .data:0xc478f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc137b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc478b4, 0x1fe000 bytes
    //
    _w49(sdk::unknown_ptr) log_file_size_cap;
    
    // [CmpLogFlushPhaseEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f0a78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701178, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x743638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd3b8, 0x1fe000 bytes
    //
    _w50(sdk::unknown_ptr) log_flush_phase_end;
    
    // [CmpLogFlushPhaseStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f0b0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7010fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7435bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de440, 0x1fe000 bytes
    //
    _w51(sdk::unknown_ptr) log_flush_phase_start;
    
    // [CmpLogHiveDestroyEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601ca8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8679d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa05afc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865e2c, 0x1fe000 bytes
    //
    _w52(sdk::unknown_ptr) log_hive_destroy_event;
    
    // [CmpLogHiveInitializeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601d94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x867acc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa05bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865f20, 0x1fe000 bytes
    //
    _w53(sdk::unknown_ptr) log_hive_initialize_event;
    
    // [CmpLogHiveLinkEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601e74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x867bb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa05cd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866008, 0x1fe000 bytes
    //
    _w54(sdk::unknown_ptr) log_hive_link_event;
    
    // [CmpLogHiveRundownEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601f10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x867c58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa05d7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8660ac, 0x1fe000 bytes
    //
    _w55(sdk::unknown_ptr) log_hive_rundown_event;
    
    // [CmpLogPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2582c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2c78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2c50, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2a10, 0x1fe000 bytes
    //
    _w56(sdk::unknown_ptr) log_path;
    
    // [CmpLogPrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2582e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2c68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2c40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2a00, 0x1fe000 bytes
    //
    _w57(sdk::unknown_ptr) log_prefix;
    
    // [CmpLogReorganizeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602838, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8683ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02e98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866e4c, 0x1fe000 bytes
    //
    _w58(sdk::unknown_ptr) log_reorganize_event;
    
    // [CmpLogTransactionAbortedByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b9120, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87209c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0fdb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87058c, 0x1fe000 bytes
    //
    _w59(sdk::unknown_ptr) log_transaction_aborted_by_name;
    
    // [CmpLogTransactionAbortedWithChildName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb124, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eba50, 0x1fe000 bytes
    //
    _w60(sdk::unknown_ptr) log_transaction_aborted_with_child_name;
    
    // [CmpLogTxrInitEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60ad10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x872190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0fea8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870680, 0x1fe000 bytes
    //
    _w61(sdk::unknown_ptr) log_txr_init_event;
    
    // [CmpLogUnsupportedOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x611340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8736a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1161c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871bb8, 0x1fe000 bytes
    //
    _w62(sdk::unknown_ptr) log_unsupported_operation;
    
    // [CmpMHz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dffe0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0e00, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99900, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afd70, 0x1fe000 bytes
    //
    _w63(sdk::unknown_ptr) m_hz;
    
    // [CmpMachineHiveList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3880, 0x32828 bytes
    // ntoskrnl.exe .data:0xc00f00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc026a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00f00, 0x1fe000 bytes
    //
    _w64(sdk::unknown_ptr) machine_hive_list;
    
    // [CmpManufacturingModeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1fe0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96850, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a090, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a40, 0x1fe000 bytes
    //
    _w65(sdk::unknown_ptr) manufacturing_mode_string;
    
    // [CmpMarkAllChildrenDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8780b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876600, 0x1fe000 bytes
    //
    _w66(sdk::unknown_ptr) mark_all_children_dirty;
    
    // [CmpMarkCurrentProfileDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x541658, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78282c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85768c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c5cc, 0x1fe000 bytes
    //
    _w67(sdk::unknown_ptr) mark_current_profile_dirty;
    
    // [CmpMarkCurrentValueDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550dc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77bdfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836fc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780b10, 0x1fe000 bytes
    //
    _w68(sdk::unknown_ptr) mark_current_value_dirty;
    
    // [CmpMarkIndexDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50b8ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a2ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74aff8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6918b8, 0x1fe000 bytes
    //
    _w69(sdk::unknown_ptr) mark_index_dirty;
    
    // [CmpMarkKeyDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50b1d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628cf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74953c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695f58, 0x1fe000 bytes
    //
    _w70(sdk::unknown_ptr) mark_key_dirty;
    
    // [CmpMarkKeyParentDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60e5ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8764f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa13330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x874a44, 0x1fe000 bytes
    //
    _w71(sdk::unknown_ptr) mark_key_parent_dirty;
    
    // [CmpMarkKeyUnbacked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed09c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747ab8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x691838, 0x1fe000 bytes
    //
    _w72(sdk::unknown_ptr) mark_key_unbacked;
    
    // [CmpMarkKeyValuesDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60e670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x876590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa133e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x874ae0, 0x1fe000 bytes
    //
    _w73(sdk::unknown_ptr) mark_key_values_dirty;
    
    // [CmpMarkValueDataDirty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50b3f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x629450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x749b24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6975c8, 0x1fe000 bytes
    //
    _w74(sdk::unknown_ptr) mark_value_data_dirty;
    
    // [CmpMasterHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab40, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53448, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6a8, 0x1fe000 bytes
    //
    _w75(sdk::unknown_ptr) master_hive;
    
    // [CmpMemoryManagementString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2ca0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97878, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b168, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a68, 0x1fe000 bytes
    //
    _w76(sdk::unknown_ptr) memory_management_string;
    
    // [CmpMergeKeyValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60e824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x876770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa13638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x874cc0, 0x1fe000 bytes
    //
    _w77(sdk::unknown_ptr) merge_key_values;
    
    // [CmpMigrateOOBELanguageToInstallationLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77bed8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa52624, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27164, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa524a8, 0x1fe000 bytes
    //
    _w78(sdk::unknown_ptr) migrate_oobe_language_to_installation_language;
    
    // [CmpMiniNTBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a01b, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b028, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51019, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b028, 0x1fe000 bytes
    //
    _w79(sdk::unknown_ptr) mini_nt_boot;
    
    // [CmpMountPreloadedHives]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x543678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x787208, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790fa8, 0x1fe000 bytes
    //
    _w80(sdk::unknown_ptr) mount_preloaded_hives;
    
    // [CmpMountThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327018, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7618, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508e8, 0x1fe000 bytes
    //
    _w81(sdk::unknown_ptr) mount_thread;
    
    // [CmpMoveBiosAliasTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60d484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x874f28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa03eac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x873478, 0x1fe000 bytes
    //
    _w82(sdk::unknown_ptr) move_bios_alias_table;
    
    // [CmpNameCacheTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323bf8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc481b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13bb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47e18, 0x1fe000 bytes
    //
    _w83(sdk::unknown_ptr) name_cache_table;
    
    // [CmpNameFromAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41ab24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62c728, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68cf4c, 0x1fe000 bytes
    //
    _w84(sdk::unknown_ptr) name_from_attributes;
    
    // [CmpNameSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e7ae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ea5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8dac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1c8c, 0x1fe000 bytes
    //
    _w85(sdk::function<uint16_t(nt::unicode_view*)>*) name_size;
    
    // [CmpNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2bf0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa977c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b0a8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa969b8, 0x1fe000 bytes
    //
    _w86(sdk::unknown_ptr) name_string;
    
    // [CmpNoMasterCreates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab51, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c703, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534b2, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c703, 0x1fe000 bytes
    //
    _w87(sdk::unknown_ptr) no_master_creates;
    
    // [CmpNoMoreTx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342300, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b81, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17350, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b81, 0x1fe000 bytes
    //
    _w88(sdk::unknown_ptr) no_more_tx;
    
    // [CmpNoWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a008, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b002, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51001, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b002, 0x1fe000 bytes
    //
    _w89(sdk::unknown_ptr) no_write;
    
    // [CmpNodeDistanceString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c10, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa977d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b0e8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa969c8, 0x1fe000 bytes
    //
    _w90(sdk::unknown_ptr) node_distance_string;
    
    // [CmpNotifyChangeKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e92a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c1400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e1d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f3bb0, 0x1fe000 bytes
    //
    _w91(sdk::unknown_ptr) notify_change_key;
    
    // [CmpNotifyTriggerCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edd64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c40ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6de258, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61a51c, 0x1fe000 bytes
    //
    _w92(sdk::unknown_ptr) notify_trigger_check;
    
    // [CmpNtdsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c20, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97808, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b0f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa969f8, 0x1fe000 bytes
    //
    _w93(sdk::unknown_ptr) ntds_string;
    
    // [CmpNumaString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c30, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa977f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b0c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa969e8, 0x1fe000 bytes
    //
    _w94(sdk::unknown_ptr) numa_string;
    
    // [CmpOpenFileWithExtremePrejudice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86f7c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0e6b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86e144, 0x1fe000 bytes
    //
    _w95(sdk::unknown_ptr) open_file_with_extreme_prejudice;
    
    // [CmpOpenHiveFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f0f58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x702f08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x742f14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x663b18, 0x1fe000 bytes
    //
    _w96(sdk::unknown_ptr) open_hive_file;
    
    // [CmpParametersString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c50, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97818, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b0d8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a08, 0x1fe000 bytes
    //
    _w97(sdk::unknown_ptr) parameters_string;
    
    // [CmpParseInfBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7978f0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5a704, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4075c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5a5ac, 0x1fe000 bytes
    //
    _w98(sdk::unknown_ptr) parse_inf_buffer;
    
    // [CmpParseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d84a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ccd50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b8f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x623190, 0x1fe000 bytes
    //
    _w99(sdk::unknown_ptr) parse_key;
    
    // [CmpPartialPromoteSubkeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6ce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87c87c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa164d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87bcbc, 0x1fe000 bytes
    //
    _x00(sdk::unknown_ptr) partial_promote_subkeys;
    
    // [CmpPendingDriverOperationsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c60, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97848, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b1c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a38, 0x1fe000 bytes
    //
    _x01(sdk::unknown_ptr) pending_driver_operations_string;
    
    // [CmpPerflibPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981148, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fa18, 0x1fe000 bytes
    //
    _x02(sdk::unknown_ptr) perflib_path_string;
    
    // [CmpPerformCompleteKcbCacheLookup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50c4d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cdd00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6b47f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x624140, 0x1fe000 bytes
    //
    _x03(sdk::unknown_ptr) perform_complete_kcb_cache_lookup;
    
    // [CmpPerformKeyBodyDeletionCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aa2dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a3ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fa100, 0x1fe000 bytes
    //
    _x04(sdk::unknown_ptr) perform_key_body_deletion_check;
    
    // [CmpPeriodicBackupFlushHiveCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9cf0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc122c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12328, 0x1fe000 bytes
    //
    _x05(sdk::unknown_ptr) periodic_backup_flush_hive_count;
    
    // [CmpPhaseString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97838, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b1d8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a28, 0x1fe000 bytes
    //
    _x06(sdk::unknown_ptr) phase_string;
    
    // [CmpPlatformSpecificField1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e0180, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0fd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aff48, 0x1fe000 bytes
    //
    _x07(sdk::unknown_ptr) platform_specific_field1;
    
    // [CmpPlatformSpecificField2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e01b8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aff10, 0x1fe000 bytes
    //
    _x08(sdk::unknown_ptr) platform_specific_field2;
    
    // [CmpPoliciesString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2ac0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa976a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8af98, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96898, 0x1fe000 bytes
    //
    _x09(sdk::unknown_ptr) policies_string;
    
    // [CmpPopulateKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dbe40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cde90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc364, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6242d0, 0x1fe000 bytes
    //
    _x10(sdk::unknown_ptr) populate_kcb_stack;
    
    // [CmpPostApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb2a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbcc0, 0x1fe000 bytes
    //
    _x11(sdk::unknown_ptr) post_apc;
    
    // [CmpPostApcRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60c4ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x867410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa029e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865840, 0x1fe000 bytes
    //
    _x12(sdk::unknown_ptr) post_apc_run_down;
    
    // [CmpPostLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323bc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc481c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13bc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47e20, 0x1fe000 bytes
    //
    _x13(sdk::unknown_ptr) post_lock;
    
    // [CmpPostNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d644, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4168, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6de2d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61a598, 0x1fe000 bytes
    //
    _x14(sdk::unknown_ptr) post_notify;
    
    // [CmpPreloadedHivesCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ec4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b4d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f310, 0x1fe000 bytes
    //
    _x15(sdk::unknown_ptr) preloaded_hives_count;
    
    // [CmpPreloadedHivesList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48330, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14330, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48310, 0x1fe000 bytes
    //
    _x16(sdk::unknown_ptr) preloaded_hives_list;
    
    // [CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6113e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873754, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa116c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871c64, 0x1fe000 bytes
    //
    _x17(sdk::unknown_ptr) prepare_discard_and_replace_kcb_and_unbacked_higher_layers;
    
    // [CmpPrepareDiscardReplacePost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x611444, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871d10, 0x1fe000 bytes
    //
    _x18(sdk::unknown_ptr) prepare_discard_replace_post;
    
    // [CmpPrepareDiscardReplacePre]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610f44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa112d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871840, 0x1fe000 bytes
    //
    _x19(sdk::unknown_ptr) prepare_discard_replace_pre;
    
    // [CmpPrepareLightWeightTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53051c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63adb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0e104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658008, 0x1fe000 bytes
    //
    _x20(sdk::unknown_ptr) prepare_light_weight_transaction;
    
    // [CmpPreserveSystemHiveData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60e9ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87695c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1385c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x874eac, 0x1fe000 bytes
    //
    _x21(sdk::unknown_ptr) preserve_system_hive_data;
    
    // [CmpPrevIdleProcessingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32378c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc478f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14250, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc478b0, 0x1fe000 bytes
    //
    _x22(sdk::unknown_ptr) prev_idle_processing_state;
    
    // [CmpPreviousUpdateRevision]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e0148, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99a30, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afea0, 0x1fe000 bytes
    //
    _x23(sdk::unknown_ptr) previous_update_revision;
    
    // [CmpProcessForSimpleStringSub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790c80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4225c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30ee4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4900c, 0x1fe000 bytes
    //
    _x24(sdk::unknown_ptr) process_for_simple_string_sub;
    
    // [CmpProcessLightWeightUOW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53061c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0e25c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x657d80, 0x1fe000 bytes
    //
    _x25(sdk::unknown_ptr) process_light_weight_uow;
    
    // [CmpProcessorControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec2b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9805c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97eea0, 0x1fe000 bytes
    //
    _x26(sdk::unknown_ptr) processor_control;
    
    // [CmpProcessorNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e00e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0f08, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99a08, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afe78, 0x1fe000 bytes
    //
    _x27(sdk::unknown_ptr) processor_name_string;
    
    // [CmpProcessorStringAmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e0070, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99990, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afe00, 0x1fe000 bytes
    //
    _x28(sdk::unknown_ptr) processor_string_amd;
    
    // [CmpProcessorStringIntel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e00c0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa999e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afe50, 0x1fe000 bytes
    //
    _x29(sdk::unknown_ptr) processor_string_intel;
    
    // [CmpProcessorStringVia]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e0098, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0eb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa999b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afe28, 0x1fe000 bytes
    //
    _x30(sdk::unknown_ptr) processor_string_via;
    
    // [CmpProductOptionsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2cd0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa978f8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b2a8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96ae8, 0x1fe000 bytes
    //
    _x31(sdk::unknown_ptr) product_options_string;
    
    // [CmpProductTypeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2ce0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97918, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b288, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b08, 0x1fe000 bytes
    //
    _x32(sdk::unknown_ptr) product_type_string;
    
    // [CmpProfileLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab06, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c682, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53422, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c682, 0x1fe000 bytes
    //
    _x33(sdk::unknown_ptr) profile_loaded;
    
    // [CmpPromoteKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b6f04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87ca80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c0ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87bec0, 0x1fe000 bytes
    //
    _x34(sdk::unknown_ptr) promote_key;
    
    // [CmpPromoteSingleKeyFromKcbStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b714c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87cd34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c654, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87c174, 0x1fe000 bytes
    //
    _x35(sdk::unknown_ptr) promote_single_key_from_kcb_stacks;
    
    // [CmpPromoteSingleKeyFromParentKcbAndChildKeyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b7730, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87cec8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa166dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87c308, 0x1fe000 bytes
    //
    _x36(sdk::unknown_ptr) promote_single_key_from_parent_kcb_and_child_key_node;
    
    // [CmpProtectPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffcc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x270df4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380348, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3225b4, 0x1fe000 bytes
    //
    _x37(sdk::unknown_ptr) protect_pool;
    
    // [CmpPublishEventForPcaResolver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536c54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x867d88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa05ea4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8661dc, 0x1fe000 bytes
    //
    _x38(sdk::unknown_ptr) publish_event_for_pca_resolver;
    
    // [CmpPuntBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a01a, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b007, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5101a, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b007, 0x1fe000 bytes
    //
    _x39(sdk::unknown_ptr) punt_boot;
    
    // [CmpQueryFileSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4208, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62ee74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x681698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e4e4, 0x1fe000 bytes
    //
    _x40(sdk::unknown_ptr) query_file_security_descriptor;
    
    // [CmpQueryHiveRedirectionFileList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41c29c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x608b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dde64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d5534, 0x1fe000 bytes
    //
    _x41(sdk::unknown_ptr) query_hive_redirection_file_list;
    
    // [CmpQueryKeyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x509534, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658560, 0x1fe000 bytes
    //
    _x42(sdk::unknown_ptr) query_key_data;
    
    // [CmpQueryKeyDataFromCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x509614, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dcf90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658640, 0x1fe000 bytes
    //
    _x43(sdk::unknown_ptr) query_key_data_from_cache;
    
    // [CmpQueryKeyDataFromKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ba558, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e79e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x202194, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e7afc, 0x1fe000 bytes
    //
    _x44(sdk::unknown_ptr) query_key_data_from_key_node_stack;
    
    // [CmpQueryKeyDataFromNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d43d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a1810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d9780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f7d70, 0x1fe000 bytes
    //
    _x45(sdk::unknown_ptr) query_key_data_from_node;
    
    // [CmpQueryKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ab7e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61acc0, 0x1fe000 bytes
    //
    _x46(sdk::unknown_ptr) query_key_name;
    
    // [CmpQueryKeySecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf374, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c37f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db9b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x619c20, 0x1fe000 bytes
    //
    _x47(sdk::unknown_ptr) query_key_security;
    
    // [CmpQueryKeyValueData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dbf20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ca730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d5d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x620b70, 0x1fe000 bytes
    //
    _x48(sdk::unknown_ptr) query_key_value_data;
    
    // [CmpQueryNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d37c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f4e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79d3c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65901c, 0x1fe000 bytes
    //
    _x49(sdk::unknown_ptr) query_name_string;
    
    // [CmpQueueLazyCommitWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x609354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86f4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0dbd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86de50, 0x1fe000 bytes
    //
    _x50(sdk::unknown_ptr) queue_lazy_commit_worker;
    
    // [CmpQuotaExplicitlySet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab50, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c687, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53426, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c687, 0x1fe000 bytes
    //
    _x51(sdk::unknown_ptr) quota_explicitly_set;
    
    // [CmpQuotaWarningPopupDisplayed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab85, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c701, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c701, 0x1fe000 bytes
    //
    _x52(sdk::unknown_ptr) quota_warning_popup_displayed;
    
    // [CmpQuotaWarningWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8684a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866f00, 0x1fe000 bytes
    //
    _x53(sdk::unknown_ptr) quota_warning_worker;
    
    // [CmpRealignLogBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x872910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870e00, 0x1fe000 bytes
    //
    _x54(sdk::unknown_ptr) realign_log_buffers;
    
    // [CmpRebuildKcbCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edc78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62fa40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68dd20, 0x1fe000 bytes
    //
    _x55(sdk::unknown_ptr) rebuild_kcb_cache;
    
    // [CmpRebuildKcbCacheFromNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x105c84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6961f8, 0x1fe000 bytes
    //
    _x56(sdk::unknown_ptr) rebuild_kcb_cache_from_node;
    
    // [CmpRecordShutdownStopTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602f94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0488c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x867610, 0x1fe000 bytes
    //
    _x57(sdk::unknown_ptr) record_shutdown_stop_time;
    
    // [CmpRecordUnloadEventForHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50c454, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658eb0, 0x1fe000 bytes
    //
    _x58(sdk::unknown_ptr) record_unload_event_for_hive;
    
    // [CmpRecoverEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60ae1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8722a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80b5c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870794, 0x1fe000 bytes
    //
    _x59(sdk::unknown_ptr) recover_enlistment;
    
    // [CmpReferenceHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeac10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db1c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695810, 0x1fe000 bytes
    //
    _x60(sdk::unknown_ptr) reference_hive;
    
    // [CmpReferenceKeyControlBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50cab8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c4fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7478e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6591c4, 0x1fe000 bytes
    //
    _x61(sdk::function<uint8_t(struct cm::key_control_block_t*)>*) reference_key_control_block;
    
    // [CmpReferenceKeyControlBlockUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abc10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c65b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748aec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61c9f0, 0x1fe000 bytes
    //
    _x62(sdk::unknown_ptr) reference_key_control_block_unsafe;
    
    // [CmpRefreshHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x612f14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87a6d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ffb88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x878c24, 0x1fe000 bytes
    //
    _x63(sdk::unknown_ptr) refresh_hive;
    
    // [CmpRefreshParent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614fb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87c5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1a3d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87ba00, 0x1fe000 bytes
    //
    _x64(sdk::unknown_ptr) refresh_parent;
    
    // [CmpRefreshWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61314c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87ab10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879060, 0x1fe000 bytes
    //
    _x65(sdk::unknown_ptr) refresh_worker_routine;
    
    // [CmpRegisterCallbackInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6590b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85cf9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cca48, 0x1fe000 bytes
    //
    _x66(sdk::unknown_ptr) register_callback_internal;
    
    // [CmpRegisterTraceLoggingProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571460, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8373e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd9b4, 0x1fe000 bytes
    //
    _x67(sdk::unknown_ptr) register_trace_logging_provider;
    
    // [CmpRegistryAppString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec688, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9809a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64418, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f280, 0x1fe000 bytes
    //
    _x68(sdk::unknown_ptr) registry_app_string;
    
    // [CmpRegistryContainersString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f268, 0x1fe000 bytes
    //
    _x69(sdk::unknown_ptr) registry_containers_string;
    
    // [CmpRegistryLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be3c0, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22580, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48940, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22580, 0x1fe000 bytes
    //
    _x70(sdk::unknown_ptr) registry_lock;
    
    // [CmpRegistryMachineHardwareDescriptionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec5f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1e0, 0x1fe000 bytes
    //
    _x71(sdk::unknown_ptr) registry_machine_hardware_description_string;
    
    // [CmpRegistryMachineHardwareDescriptionSystemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec600, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9808f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1d8, 0x1fe000 bytes
    //
    _x72(sdk::unknown_ptr) registry_machine_hardware_description_system_string;
    
    // [CmpRegistryMachineHardwareDeviceMapString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec608, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1f0, 0x1fe000 bytes
    //
    _x73(sdk::unknown_ptr) registry_machine_hardware_device_map_string;
    
    // [CmpRegistryMachineHardwareOwnerMapString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec618, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f200, 0x1fe000 bytes
    //
    _x74(sdk::unknown_ptr) registry_machine_hardware_owner_map_string;
    
    // [CmpRegistryMachineHardwareResourceMapString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980908, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1e8, 0x1fe000 bytes
    //
    _x75(sdk::unknown_ptr) registry_machine_hardware_resource_map_string;
    
    // [CmpRegistryMachineHardwareString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec5f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9808e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1c8, 0x1fe000 bytes
    //
    _x76(sdk::unknown_ptr) registry_machine_hardware_string;
    
    // [CmpRegistryMachineString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec5e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9808f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64408, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1d0, 0x1fe000 bytes
    //
    _x77(sdk::unknown_ptr) registry_machine_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetControlBootLogString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec668, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f250, 0x1fe000 bytes
    //
    _x78(sdk::unknown_ptr) registry_machine_system_current_control_set_control_boot_log_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetControlClassString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec650, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980948, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64438, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f228, 0x1fe000 bytes
    //
    _x79(sdk::unknown_ptr) registry_machine_system_current_control_set_control_class_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetControlSafeBootString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec658, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f240, 0x1fe000 bytes
    //
    _x80(sdk::unknown_ptr) registry_machine_system_current_control_set_control_safe_boot_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagementString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980958, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64468, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f238, 0x1fe000 bytes
    //
    _x81(sdk::unknown_ptr) registry_machine_system_current_control_set_control_session_manager_memory_management_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetEnumRootString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec638, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f220, 0x1fe000 bytes
    //
    _x82(sdk::unknown_ptr) registry_machine_system_current_control_set_enum_root_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetEnumString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f208, 0x1fe000 bytes
    //
    _x83(sdk::unknown_ptr) registry_machine_system_current_control_set_enum_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetHardwareProfilesCurrentString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec648, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f230, 0x1fe000 bytes
    //
    _x84(sdk::unknown_ptr) registry_machine_system_current_control_set_hardware_profiles_current_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetServicesEventLogString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64458, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f248, 0x1fe000 bytes
    //
    _x85(sdk::unknown_ptr) registry_machine_system_current_control_set_services_event_log_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetServicesString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec640, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980938, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f218, 0x1fe000 bytes
    //
    _x86(sdk::unknown_ptr) registry_machine_system_current_control_set_services_string;
    
    // [CmpRegistryMachineSystemCurrentControlSetString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec628, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f210, 0x1fe000 bytes
    //
    _x87(sdk::unknown_ptr) registry_machine_system_current_control_set_string;
    
    // [CmpRegistryMachineSystemString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec620, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980918, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa643e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1f8, 0x1fe000 bytes
    //
    _x88(sdk::unknown_ptr) registry_machine_system_string;
    
    // [CmpRegistryRootObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ade0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c790, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53510, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c790, 0x1fe000 bytes
    //
    _x89(sdk::unknown_ptr) registry_root_object;
    
    // [CmpRegistryRootString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec5e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9808e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1c0, 0x1fe000 bytes
    //
    _x90(sdk::unknown_ptr) registry_root_string;
    
    // [CmpRegistrySystemFileNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec698, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f278, 0x1fe000 bytes
    //
    _x91(sdk::unknown_ptr) registry_system_file_name_string;
    
    // [CmpRegistryUserString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f270, 0x1fe000 bytes
    //
    _x92(sdk::unknown_ptr) registry_user_string;
    
    // [CmpRehashKcbSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x605d10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86c144, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09e0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86aac4, 0x1fe000 bytes
    //
    _x93(sdk::unknown_ptr) rehash_kcb_subtree;
    
    // [CmpReleaseGlobalQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4570, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a08a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x684558, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697f0c, 0x1fe000 bytes
    //
    _x94(sdk::unknown_ptr) release_global_quota;
    
    // [CmpRemoveCellFromIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6100cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x878258, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14dc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8767a8, 0x1fe000 bytes
    //
    _x95(sdk::unknown_ptr) remove_cell_from_index;
    
    // [CmpRemoveFromDelayedClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50cc00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746944, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x659520, 0x1fe000 bytes
    //
    _x96(sdk::unknown_ptr) remove_from_delayed_close;
    
    // [CmpRemoveFromSecurityCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50da2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cbbdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5548, 0x1fe000 bytes
    //
    _x97(sdk::unknown_ptr) remove_from_security_cache;
    
    // [CmpRemoveHiveFromNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a5dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x23d158, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3478cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2ea0, 0x1fe000 bytes
    //
    _x98(sdk::unknown_ptr) remove_hive_from_namespace;
    
    // [CmpRemoveKeyHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62606c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7475d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693324, 0x1fe000 bytes
    //
    _x99(sdk::unknown_ptr) remove_key_hash;
    
    // [CmpRemoveKeyHashFromDeletedKcbTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x105164, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x626014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7472dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6932cc, 0x1fe000 bytes
    //
    _y00(sdk::unknown_ptr) remove_key_hash_from_deleted_kcb_table;
    
    // [CmpRemoveKeyHashFromTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10513c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6260c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74799c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69337c, 0x1fe000 bytes
    //
    _y01(sdk::unknown_ptr) remove_key_hash_from_table_entry;
    
    // [CmpRemoveSecurityCellList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10aac4, 0x32828 bytes
    // ntoskrnl.exe .text:0x26c090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x373cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30fff4, 0x1fe000 bytes
    //
    _y02(sdk::unknown_ptr) remove_security_cell_list;
    
    // [CmpRemoveSubKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50b54c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62965c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x749d5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69267c, 0x1fe000 bytes
    //
    _y03(sdk::unknown_ptr) remove_sub_key;
    
    // [CmpRemoveSubKeyCellNoCellRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610168, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8782ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14e58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87683c, 0x1fe000 bytes
    //
    _y04(sdk::unknown_ptr) remove_sub_key_cell_no_cell_ref;
    
    // [CmpRemoveSubKeyFromList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50b5cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6296f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x749e0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x692714, 0x1fe000 bytes
    //
    _y05(sdk::unknown_ptr) remove_sub_key_from_list;
    
    // [CmpRemoveValueFromList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50bb28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6285f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746e34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6958c0, 0x1fe000 bytes
    //
    _y06(sdk::unknown_ptr) remove_value_from_list;
    
    // [CmpReorganizeDelayDays]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b50, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f00, 0x1fe000 bytes
    //
    _y07(sdk::unknown_ptr) reorganize_delay_days;
    
    // [CmpReorganizeHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44bd80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x632cb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x680f38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6888d4, 0x1fe000 bytes
    //
    _y08(sdk::unknown_ptr) reorganize_hive;
    
    // [CmpReorganizeLastRun]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343050, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5058, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b970, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5058, 0x1fe000 bytes
    //
    _y09(sdk::unknown_ptr) reorganize_last_run;
    
    // [CmpReorganizeLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b58, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11e98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11ef8, 0x1fe000 bytes
    //
    _y10(sdk::unknown_ptr) reorganize_limit;
    
    // [CmpReorganizeTotalBytesSaved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342660, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd177c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c20, 0x1fe000 bytes
    //
    _y11(sdk::unknown_ptr) reorganize_total_bytes_saved;
    
    // [CmpReparseToVirtualPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6078d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65bff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0bc78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cfcf8, 0x1fe000 bytes
    //
    _y12(sdk::unknown_ptr) reparse_to_virtual_path;
    
    // [CmpReplicateKeyToVirtual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86d8ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0bd1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86c22c, 0x1fe000 bytes
    //
    _y13(sdk::unknown_ptr) replicate_key_to_virtual;
    
    // [CmpReportAuditVirtualizationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86e5d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86cf54, 0x1fe000 bytes
    //
    _y14(sdk::unknown_ptr) report_audit_virtualization_event;
    
    // [CmpReportNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e4a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d7b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x657cf4, 0x1fe000 bytes
    //
    _y15(sdk::unknown_ptr) report_notify;
    
    // [CmpReportNotifyHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e47f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ddfe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61aa70, 0x1fe000 bytes
    //
    _y16(sdk::unknown_ptr) report_notify_helper;
    
    // [CmpResetString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97858, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b1b8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a48, 0x1fe000 bytes
    //
    _y17(sdk::unknown_ptr) reset_string;
    
    // [CmpResolveHiveLoadConflict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x605484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86b818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09254, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a198, 0x1fe000 bytes
    //
    _y18(sdk::unknown_ptr) resolve_hive_load_conflict;
    
    // [CmpRmAnalysisPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b2cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8729f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa105f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870ee0, 0x1fe000 bytes
    //
    _y19(sdk::unknown_ptr) rm_analysis_phase;
    
    // [CmpRmListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323510, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47970, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc138e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47930, 0x1fe000 bytes
    //
    _y20(sdk::unknown_ptr) rm_list_head;
    
    // [CmpRmListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323520, 0x32828 bytes
    // ntoskrnl.exe .data:0xc479a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13900, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47960, 0x1fe000 bytes
    //
    _y21(sdk::unknown_ptr) rm_list_lock;
    
    // [CmpRmReDoPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b4d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x872c30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10824, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871120, 0x1fe000 bytes
    //
    _y22(sdk::unknown_ptr) rm_re_do_phase;
    
    // [CmpRmUnDoPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60b65c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x872e04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa109f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8712f4, 0x1fe000 bytes
    //
    _y23(sdk::unknown_ptr) rm_un_do_phase;
    
    // [CmpRollbackLightWeightTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c8e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6790f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec510, 0x1fe000 bytes
    //
    _y24(sdk::unknown_ptr) rollback_light_weight_transaction;
    
    // [CmpRollbackTransactionArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60af1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x872490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa100ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x870980, 0x1fe000 bytes
    //
    _y25(sdk::unknown_ptr) rollback_transaction_array;
    
    // [CmpRunDownCmRM]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419d40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c9b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b5a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658bbc, 0x1fe000 bytes
    //
    _y26(sdk::unknown_ptr) run_down_cm_rm;
    
    // [CmpRundownUnitOfWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed900, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748c44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68dfe8, 0x1fe000 bytes
    //
    _y27(sdk::unknown_ptr) rundown_unit_of_work;
    
    // [CmpSaveBootControlSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ff3bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x864d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fd828, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x863150, 0x1fe000 bytes
    //
    _y28(sdk::unknown_ptr) save_boot_control_set;
    
    // [CmpSaveKeyByFileCopy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x613190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87ab70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa00160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8790c0, 0x1fe000 bytes
    //
    _y29(sdk::unknown_ptr) save_key_by_file_copy;
    
    // [CmpSearchForOpenSubKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50bea4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63afd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c74c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658fa8, 0x1fe000 bytes
    //
    _y30(sdk::unknown_ptr) search_for_open_sub_keys;
    
    // [CmpSearchForTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74861c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745fbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74fedc, 0x1fe000 bytes
    //
    _y31(sdk::unknown_ptr) search_for_trans;
    
    // [CmpSearchKeyControlBlockTreeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86c274, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa09f14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86abf4, 0x1fe000 bytes
    //
    _y32(sdk::unknown_ptr) search_key_control_block_tree_ex;
    
    // [CmpSearchLineInSectionByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790bb8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42180, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30e10, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48f30, 0x1fe000 bytes
    //
    _y33(sdk::unknown_ptr) search_line_in_section_by_index;
    
    // [CmpSearchSectionByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790bdc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa421b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30e40, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48f60, 0x1fe000 bytes
    //
    _y34(sdk::unknown_ptr) search_section_by_name;
    
    // [CmpSecConvKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee7d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62b68c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74e860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68b820, 0x1fe000 bytes
    //
    _y35(sdk::unknown_ptr) sec_conv_key;
    
    // [CmpSecurityMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aa0e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c35b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dbb50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6199e0, 0x1fe000 bytes
    //
    _y36(sdk::unknown_ptr) security_method;
    
    // [CmpSelectLeaf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6103e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74ed5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75699c, 0x1fe000 bytes
    //
    _y37(sdk::unknown_ptr) select_leaf;
    
    // [CmpSelectString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64568, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f480, 0x1fe000 bytes
    //
    _y38(sdk::unknown_ptr) select_string;
    
    // [CmpSelfHeal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a00a, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b004, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51002, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b004, 0x1fe000 bytes
    //
    _y39(sdk::unknown_ptr) self_heal;
    
    // [CmpSendUnsupportedOperationTelemetryEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6114e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87393c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa11938, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871e4c, 0x1fe000 bytes
    //
    _y40(sdk::unknown_ptr) send_unsupported_operation_telemetry_event;
    
    // [CmpServiceGroupOrderString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1ff0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96860, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a0f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a50, 0x1fe000 bytes
    //
    _y41(sdk::unknown_ptr) service_group_order_string;
    
    // [CmpServiceWildcardString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2000, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96870, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a110, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a60, 0x1fe000 bytes
    //
    _y42(sdk::unknown_ptr) service_wildcard_string;
    
    // [CmpServicesString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1d40, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96570, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89fb0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95760, 0x1fe000 bytes
    //
    _y43(sdk::unknown_ptr) services_string;
    
    // [CmpSessionManagerString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2c90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97868, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b1e8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a58, 0x1fe000 bytes
    //
    _y44(sdk::unknown_ptr) session_manager_string;
    
    // [CmpSetGlobalQuotaAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3e4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a44c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec538, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed7c0, 0x1fe000 bytes
    //
    _y45(sdk::unknown_ptr) set_global_quota_allowed;
    
    // [CmpSetIoPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x76d1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x270584, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321d54, 0x1fe000 bytes
    //
    _y46(sdk::unknown_ptr) set_io_priority_thread;
    
    // [CmpSetKcbAtLayerHeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47f5ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cba80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbf28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cc320, 0x1fe000 bytes
    //
    _y47(sdk::unknown_ptr) set_kcb_at_layer_height;
    
    // [CmpSetKeySecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x105ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x624320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x751768, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a7ec, 0x1fe000 bytes
    //
    _y48(sdk::unknown_ptr) set_key_security;
    
    // [CmpSetNetworkValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7ba9e4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8d5a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb83fac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8c828, 0x1fe000 bytes
    //
    _y49(sdk::unknown_ptr) set_network_value;
    
    // [CmpSetPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd47f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27059c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382bd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321d6c, 0x1fe000 bytes
    //
    _y50(sdk::unknown_ptr) set_priority_thread;
    
    // [CmpSetRespectIoPriorityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106258, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b5cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x301ae8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5da4, 0x1fe000 bytes
    //
    _y51(sdk::unknown_ptr) set_respect_io_priority_thread;
    
    // [CmpSetSecurityDescriptorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ef728, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62a9fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74dc8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68ab90, 0x1fe000 bytes
    //
    _y52(sdk::unknown_ptr) set_security_descriptor_info;
    
    // [CmpSetSystemBiosInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77b1c4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa51bd8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84574, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa51a5c, 0x1fe000 bytes
    //
    _y53(sdk::unknown_ptr) set_system_bios_information;
    
    // [CmpSetSystemValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77bc70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa523e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb255ac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5226c, 0x1fe000 bytes
    //
    _y54(sdk::unknown_ptr) set_system_values;
    
    // [CmpSetValueDataExisting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50de54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dff8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea990, 0x1fe000 bytes
    //
    _y55(sdk::unknown_ptr) set_value_data_existing;
    
    // [CmpSetValueDataNew]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eac90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x628f54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b5ac8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697740, 0x1fe000 bytes
    //
    _y56(sdk::unknown_ptr) set_value_data_new;
    
    // [CmpSetValueKeyExisting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50aee8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x629150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7497e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6972c8, 0x1fe000 bytes
    //
    _y57(sdk::unknown_ptr) set_value_key_existing;
    
    // [CmpSetValueKeyNew]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e8194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69ff04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cd438, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x697968, 0x1fe000 bytes
    //
    _y58(sdk::unknown_ptr) set_value_key_new;
    
    // [CmpSetValueKeyTombstone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6057dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86baf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0952c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86a470, 0x1fe000 bytes
    //
    _y59(sdk::unknown_ptr) set_value_key_tombstone;
    
    // [CmpSetVersionData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x544464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x784a7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x829608, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78e81c, 0x1fe000 bytes
    //
    _y60(sdk::unknown_ptr) set_version_data;
    
    // [CmpSetVideoBiosInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77b4c8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa51a08, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb84914, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5188c, 0x1fe000 bytes
    //
    _y61(sdk::unknown_ptr) set_video_bios_information;
    
    // [CmpSetupConfigurationTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77abcc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa518d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb26460, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa51754, 0x1fe000 bytes
    //
    _y62(sdk::unknown_ptr) setup_configuration_tree;
    
    // [CmpSetupLoggingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x542508, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7840f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82700c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78de98, 0x1fe000 bytes
    //
    _y63(sdk::unknown_ptr) setup_logging_state;
    
    // [CmpShareSystemHives]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a009, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b005, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51018, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b005, 0x1fe000 bytes
    //
    _y64(sdk::unknown_ptr) share_system_hives;
    
    // [CmpShutdownRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323cb8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc482c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14258, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47f20, 0x1fe000 bytes
    //
    _y65(sdk::unknown_ptr) shutdown_rundown;
    
    // [CmpSIDMappingLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323b20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc48180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13b80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47de0, 0x1fe000 bytes
    //
    _y66(sdk::unknown_ptr) sid_mapping_lock;
    
    // [CmpSidSharingPolicyString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d00, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97938, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b218, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b28, 0x1fe000 bytes
    //
    _y67(sdk::unknown_ptr) sid_sharing_policy_string;
    
    // [CmpSIDToHiveMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327050, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c320, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c300, 0x1fe000 bytes
    //
    _y68(sdk::unknown_ptr) sid_to_hive_mapping;
    
    // [CmpSIDToHiveMappingCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327048, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c314, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644f4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2f4, 0x1fe000 bytes
    //
    _y69(sdk::unknown_ptr) sid_to_hive_mapping_count;
    
    // [CmpSIDToHiveMappingSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32704c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c318, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c2f8, 0x1fe000 bytes
    //
    _y70(sdk::unknown_ptr) sid_to_hive_mapping_size;
    
    // [CmpSignalDeferredPosts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cc550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707ca4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x622990, 0x1fe000 bytes
    //
    _y71(sdk::unknown_ptr) signal_deferred_posts;
    
    // [CmpSizeOfPagedPoolInBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74adf0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53618, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c900, 0x1fe000 bytes
    //
    _y72(sdk::unknown_ptr) size_of_paged_pool_in_bytes;
    
    // [CmpSnapshotKcbStackSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86e8b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0d71c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d230, 0x1fe000 bytes
    //
    _y73(sdk::unknown_ptr) snapshot_kcb_stack_security;
    
    // [CmpSnapshotTxOwnerArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x614fe8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87555c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa12464, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x873aac, 0x1fe000 bytes
    //
    _y74(sdk::unknown_ptr) snapshot_tx_owner_array;
    
    // [CmpSortByTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7985e8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa58f98, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b444, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58e40, 0x1fe000 bytes
    //
    _y75(sdk::unknown_ptr) sort_by_tag;
    
    // [CmpSortDriverList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7982ac, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa58ca0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb49560, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58b48, 0x1fe000 bytes
    //
    _y76(sdk::unknown_ptr) sort_driver_list;
    
    // [CmpSpecialBootCondition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a03c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b02b, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51034, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b02b, 0x1fe000 bytes
    //
    _y77(sdk::unknown_ptr) special_boot_condition;
    
    // [CmpSplitLeaf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6106a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1517c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f144, 0x1fe000 bytes
    //
    _y78(sdk::unknown_ptr) split_leaf;
    
    // [CmpSrmString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2cf0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97908, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b298, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96af8, 0x1fe000 bytes
    //
    _y79(sdk::unknown_ptr) srm_string;
    
    // [CmpStartCLFSLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475990, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x760eb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8110a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c124, 0x1fe000 bytes
    //
    _y80(sdk::unknown_ptr) start_clfs_log;
    
    // [CmpStartKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ac900, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cf760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc318, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x625ba0, 0x1fe000 bytes
    //
    _y81(sdk::unknown_ptr) start_kcb_stack;
    
    // [CmpStartKcbStackForTopLayerKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ac828, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c43b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc2d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61a7e0, 0x1fe000 bytes
    //
    _y82(sdk::unknown_ptr) start_kcb_stack_for_top_layer_kcb;
    
    // [CmpStartKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6115a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e4e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c8bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715e78, 0x1fe000 bytes
    //
    _y83(sdk::unknown_ptr) start_key_node_stack;
    
    // [CmpStartKeyNodeStackFromKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x611634, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x873a0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x871f1c, 0x1fe000 bytes
    //
    _y84(sdk::unknown_ptr) start_key_node_stack_from_kcb_stack;
    
    // [CmpStartOverrideString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2010, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96580, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89fc0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95770, 0x1fe000 bytes
    //
    _y85(sdk::unknown_ptr) start_override_string;
    
    // [CmpStartRMLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4755f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x760a14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76bc84, 0x1fe000 bytes
    //
    _y86(sdk::unknown_ptr) start_rm_log;
    
    // [CmpStartRMLogs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79bfc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7501f4, 0x1fe000 bytes
    //
    _y87(sdk::unknown_ptr) start_rm_logs;
    
    // [CmpStartString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1c78, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96518, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89f78, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95708, 0x1fe000 bytes
    //
    _y88(sdk::unknown_ptr) start_string;
    
    // [CmpStopRMLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419f3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63cbb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b54c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658dc4, 0x1fe000 bytes
    //
    _y89(sdk::unknown_ptr) stop_rm_log;
    
    // [CmpStrAliasString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2120, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96980, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a1c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b90, 0x1fe000 bytes
    //
    _y90(sdk::unknown_ptr) str_alias_string;
    
    // [CmpStrCapabilitiesString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2130, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa969b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a190, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95b80, 0x1fe000 bytes
    //
    _y91(sdk::unknown_ptr) str_capabilities_string;
    
    // [CmpStrCurrentDockInfoString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2140, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa969a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a1a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95bb0, 0x1fe000 bytes
    //
    _y92(sdk::unknown_ptr) str_current_dock_info_string;
    
    // [CmpStrDockIdString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2150, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa969d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a1f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95ba0, 0x1fe000 bytes
    //
    _y93(sdk::unknown_ptr) str_dock_id_string;
    
    // [CmpStrDockingStateString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2160, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa969c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a200, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95bd0, 0x1fe000 bytes
    //
    _y94(sdk::unknown_ptr) str_docking_state_string;
    
    // [CmpStrProfileNumberString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2170, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa969f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a1d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95bc0, 0x1fe000 bytes
    //
    _y95(sdk::unknown_ptr) str_profile_number_string;
    
    // [CmpStrSerialNumberString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2180, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa969e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a1e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95bf0, 0x1fe000 bytes
    //
    _y96(sdk::unknown_ptr) str_serial_number_string;
    
    // [CmpSwapValueInList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd45ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x23d4b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e8cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2c9c, 0x1fe000 bytes
    //
    _y97(sdk::unknown_ptr) swap_value_in_list;
    
    // [CmpSymbolicLinkValueName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec6a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9809b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64478, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f290, 0x1fe000 bytes
    //
    _y98(sdk::unknown_ptr) symbolic_link_value_name;
    
    // [CmpSyncKcbCacheForHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607c2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86dc00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0c0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86c580, 0x1fe000 bytes
    //
    _y99(sdk::unknown_ptr) sync_kcb_cache_for_hive;
    
    // [CmpSyncKeyValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60f0f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87711c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa14134, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87566c, 0x1fe000 bytes
    //
    _z00(sdk::unknown_ptr) sync_key_values;
    
    // [CmpSyncNextBackupHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60aafc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x871cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0c95c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8701e0, 0x1fe000 bytes
    //
    _z01(sdk::unknown_ptr) sync_next_backup_hive;
    
    // [CmpSyncSubKeysAfterDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60f4f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x877560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa143ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x875ab0, 0x1fe000 bytes
    //
    _z02(sdk::unknown_ptr) sync_sub_keys_after_delete;
    
    // [CmpSystemBiosVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c21c0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96a30, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a280, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95c00, 0x1fe000 bytes
    //
    _z03(sdk::unknown_ptr) system_bios_version_string;
    
    // [CmpSystemBootDeviceString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2190, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96a10, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a2a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95be0, 0x1fe000 bytes
    //
    _z04(sdk::unknown_ptr) system_boot_device_string;
    
    // [CmpSystemFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b4f0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd539d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cca0, 0x1fe000 bytes
    //
    _z05(sdk::unknown_ptr) system_file_name;
    
    // [CmpSystemHiveHysteresisCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327028, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7638, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508f8, 0x1fe000 bytes
    //
    _z06(sdk::unknown_ptr) system_hive_hysteresis_callback;
    
    // [CmpSystemHiveHysteresisContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327030, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50900, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7630, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50900, 0x1fe000 bytes
    //
    _z07(sdk::unknown_ptr) system_hive_hysteresis_context;
    
    // [CmpSystemHiveHysteresisHigh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327038, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50908, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7644, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50908, 0x1fe000 bytes
    //
    _z08(sdk::unknown_ptr) system_hive_hysteresis_high;
    
    // [CmpSystemHiveHysteresisHighSeen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327024, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508f4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7628, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508f4, 0x1fe000 bytes
    //
    _z09(sdk::unknown_ptr) system_hive_hysteresis_high_seen;
    
    // [CmpSystemHiveHysteresisHitRatio]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343044, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5048, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5048, 0x1fe000 bytes
    //
    _z10(sdk::unknown_ptr) system_hive_hysteresis_hit_ratio;
    
    // [CmpSystemHiveHysteresisLow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32703c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc5090c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5090c, 0x1fe000 bytes
    //
    _z11(sdk::unknown_ptr) system_hive_hysteresis_low;
    
    // [CmpSystemHiveHysteresisLowSeen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327025, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508f5, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7629, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508f5, 0x1fe000 bytes
    //
    _z12(sdk::unknown_ptr) system_hive_hysteresis_low_seen;
    
    // [CmpSystemHiveHysteresisWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6028e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8684e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866f40, 0x1fe000 bytes
    //
    _z13(sdk::unknown_ptr) system_hive_hysteresis_worker;
    
    // [CmpSystemQuotaWarningPopupDisplayed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab86, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c702, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd534b1, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c702, 0x1fe000 bytes
    //
    _z14(sdk::unknown_ptr) system_quota_warning_popup_displayed;
    
    // [CmpSystemQuotaWarningWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8684a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866f00, 0x1fe000 bytes
    //
    _z15(sdk::unknown_ptr) system_quota_warning_worker;
    
    // [CmpSystemRootString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fa48, 0x1fe000 bytes
    //
    _z16(sdk::unknown_ptr) system_root_string;
    
    // [CmpSystemStartOptionsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c21b0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96a00, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a2b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95c10, 0x1fe000 bytes
    //
    _z17(sdk::unknown_ptr) system_start_options_string;
    
    // [CmpTagString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2020, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa968a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a120, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95a90, 0x1fe000 bytes
    //
    _z18(sdk::unknown_ptr) tag_string;
    
    // [CmpTraceHiveFlushWroteLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448cb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x631518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e3a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687130, 0x1fe000 bytes
    //
    _z19(sdk::unknown_ptr) trace_hive_flush_wrote_log_file;
    
    // [CmpTraceHiveFlushWrotePrimaryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d3d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e034, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0484, 0x1fe000 bytes
    //
    _z20(sdk::unknown_ptr) trace_hive_flush_wrote_primary_file;
    
    // [CmpTraceHiveLoadStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41aa14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62c604, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68ce28, 0x1fe000 bytes
    //
    _z21(sdk::unknown_ptr) trace_hive_load_start;
    
    // [CmpTraceHiveLoadStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41a9c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62c5a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744ed4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68cdcc, 0x1fe000 bytes
    //
    _z22(sdk::unknown_ptr) trace_hive_load_stop;
    
    // [CmpTraceHiveMountBaseFileMounted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44b57c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63124c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e794, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x685f9c, 0x1fe000 bytes
    //
    _z23(sdk::unknown_ptr) trace_hive_mount_base_file_mounted;
    
    // [CmpTraceHiveMountStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44af4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62fb00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e86c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x685224, 0x1fe000 bytes
    //
    _z24(sdk::unknown_ptr) trace_hive_mount_start;
    
    // [CmpTraceHiveMountStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44afa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62fb58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67e810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x686f68, 0x1fe000 bytes
    //
    _z25(sdk::unknown_ptr) trace_hive_mount_stop;
    
    // [CmpTraceHiveRestoreStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60213c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x867f6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa05fe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8663c0, 0x1fe000 bytes
    //
    _z26(sdk::unknown_ptr) trace_hive_restore_start;
    
    // [CmpTraceHiveRestoreStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60224c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa060fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8664d4, 0x1fe000 bytes
    //
    _z27(sdk::unknown_ptr) trace_hive_restore_stop;
    
    // [CmpTraceHiveSaveFileCopied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6022d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0618c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866564, 0x1fe000 bytes
    //
    _z28(sdk::unknown_ptr) trace_hive_save_file_copied;
    
    // [CmpTraceHiveSaveStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6023a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e65c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa061fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715fec, 0x1fe000 bytes
    //
    _z29(sdk::unknown_ptr) trace_hive_save_start;
    
    // [CmpTraceHiveSaveStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602468, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70d26c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa062d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x714bfc, 0x1fe000 bytes
    //
    _z30(sdk::unknown_ptr) trace_hive_save_stop;
    
    // [CmpTraceHiveSaveTreeCopied]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6024f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70d520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa06364, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x714eb0, 0x1fe000 bytes
    //
    _z31(sdk::unknown_ptr) trace_hive_save_tree_copied;
    
    // [CmpTraceRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a000, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b008, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51008, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b008, 0x1fe000 bytes
    //
    _z32(sdk::unknown_ptr) trace_routine;
    
    // [CmpTraceShutdownRundownComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602558, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa064b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8666b4, 0x1fe000 bytes
    //
    _z33(sdk::unknown_ptr) trace_shutdown_rundown_complete;
    
    // [CmpTraceShutdownStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6025c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8681f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa06524, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866724, 0x1fe000 bytes
    //
    _z34(sdk::unknown_ptr) trace_shutdown_start;
    
    // [CmpTraceTxrRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a230, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b240, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b240, 0x1fe000 bytes
    //
    _z35(sdk::unknown_ptr) trace_txr_routine;
    
    // [CmpTransAllocateTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0524, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63aaec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d7f14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65671c, 0x1fe000 bytes
    //
    _z36(sdk::unknown_ptr) trans_allocate_trans;
    
    // [CmpTransDereferenceTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508ea0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63aad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74625c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656700, 0x1fe000 bytes
    //
    _z37(sdk::unknown_ptr) trans_dereference_transaction;
    
    // [CmpTransEnlistUowInCmTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1051ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3039f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e1b1c, 0x1fe000 bytes
    //
    _z38(sdk::unknown_ptr) trans_enlist_uow_in_cm_trans;
    
    // [CmpTransEnlistUowInKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a9c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23d460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3039a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2d14, 0x1fe000 bytes
    //
    _z39(sdk::unknown_ptr) trans_enlist_uow_in_kcb;
    
    // [CmpTransGetTransPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571bc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86f598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0dc94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86df18, 0x1fe000 bytes
    //
    _z40(sdk::unknown_ptr) trans_get_trans_ptr;
    
    // [CmpTransInitializeTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475310, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74868c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79bd20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74ff4c, 0x1fe000 bytes
    //
    _z41(sdk::unknown_ptr) trans_initialize_transaction;
    
    // [CmpTransIsTransActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8b34, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6c1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6016bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6b0c, 0x1fe000 bytes
    //
    _z42(sdk::unknown_ptr) trans_is_trans_active;
    
    // [CmpTransMgrCommit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5087c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744d5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707d84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74c99c, 0x1fe000 bytes
    //
    _z43(sdk::unknown_ptr) trans_mgr_commit;
    
    // [CmpTransMgrCommitUoW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4241d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744f4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x708430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74cb8c, 0x1fe000 bytes
    //
    _z44(sdk::unknown_ptr) trans_mgr_commit_uo_w;
    
    // [CmpTransMgrFreeVolatileData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed780, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7487ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68ddb8, 0x1fe000 bytes
    //
    _z45(sdk::unknown_ptr) trans_mgr_free_volatile_data;
    
    // [CmpTransMgrPrepare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5089b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744bcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c084, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74c80c, 0x1fe000 bytes
    //
    _z46(sdk::unknown_ptr) trans_mgr_prepare;
    
    // [CmpTransMgrRollback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49ca6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7540b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca938, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b970, 0x1fe000 bytes
    //
    _z47(sdk::unknown_ptr) trans_mgr_rollback;
    
    // [CmpTransMgrSyncHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1dcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x745c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d860, 0x1fe000 bytes
    //
    _z48(sdk::unknown_ptr) trans_mgr_sync_hive;
    
    // [CmpTransReferenceTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508ebc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63aa70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746204, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6566a0, 0x1fe000 bytes
    //
    _z49(sdk::unknown_ptr) trans_reference_transaction;
    
    // [CmpTransSearchAddLightWeightTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508af8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a924, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7460d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656554, 0x1fe000 bytes
    //
    _z50(sdk::unknown_ptr) trans_search_add_light_weight_trans;
    
    // [CmpTransSearchAddTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508c40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7483fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745dc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74fcbc, 0x1fe000 bytes
    //
    _z51(sdk::unknown_ptr) trans_search_add_trans;
    
    // [CmpTransSearchAddTransFromHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5086f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x656460, 0x1fe000 bytes
    //
    _z52(sdk::unknown_ptr) trans_search_add_trans_from_hive;
    
    // [CmpTransSearchAddTransFromKeyBody]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508740, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a884, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x746030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6564b4, 0x1fe000 bytes
    //
    _z53(sdk::unknown_ptr) trans_search_add_trans_from_key_body;
    
    // [CmpTransSearchAddTransFromRm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748384, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74fc44, 0x1fe000 bytes
    //
    _z54(sdk::unknown_ptr) trans_search_add_trans_from_rm;
    
    // [CmpTransSilentIgnore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9580, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ddc10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ca0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25eea0, 0x1fe000 bytes
    //
    _z55(sdk::unknown_ptr) trans_silent_ignore;
    
    // [CmpTransUowIsEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fa9a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86f5a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0dca4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86df28, 0x1fe000 bytes
    //
    _z56(sdk::unknown_ptr) trans_uow_is_equal;
    
    // [CmpTransWriteLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41bb18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744018, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74d914, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74bc58, 0x1fe000 bytes
    //
    _z57(sdk::unknown_ptr) trans_write_log;
    
    // [CmpTransactionInitializingCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc503bc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644fc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc503bc, 0x1fe000 bytes
    //
    _z58(sdk::unknown_ptr) transaction_initializing_count;
    
    // [CmpTransactionInitializingEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3237d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47f18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc139f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47b78, 0x1fe000 bytes
    //
    _z59(sdk::unknown_ptr) transaction_initializing_event;
    
    // [CmpTransactionListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3237a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47ee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc139c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47b40, 0x1fe000 bytes
    //
    _z60(sdk::unknown_ptr) transaction_list_lock;
    
    // [CmpTransactionTypeNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x258570, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f50, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x59e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f40, 0x1fe000 bytes
    //
    _z61(sdk::unknown_ptr) transaction_type_name_string;
    
    // [CmpTrimHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41b31c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x736790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d970, 0x1fe000 bytes
    //
    _z62(sdk::unknown_ptr) trim_hive;
    
    // [CmpTrustedInstallerSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a098, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b088, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51070, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b088, 0x1fe000 bytes
    //
    _z63(sdk::unknown_ptr) trusted_installer_sid;
    
    // [CmpTryConvertKcbLockSharedToExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e7278, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c1718, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df6a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617eb4, 0x1fe000 bytes
    //
    _z64(sdk::unknown_ptr) try_convert_kcb_lock_shared_to_exclusive;
    
    // [CmpTryToLockHashEntryExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499638, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66fae8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dcf80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3078, 0x1fe000 bytes
    //
    _z65(sdk::unknown_ptr) try_to_lock_hash_entry_exclusive;
    
    // [CmpTryToLockKcbExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x609b6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676244, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d10a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9484, 0x1fe000 bytes
    //
    _z66(sdk::unknown_ptr) try_to_lock_kcb_exclusive;
    
    // [CmpTryToRundownHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a6ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x23d220, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3476e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2f68, 0x1fe000 bytes
    //
    _z67(sdk::unknown_ptr) try_to_rundown_hive;
    
    // [CmpTypeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2030, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa968b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a130, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95aa0, 0x1fe000 bytes
    //
    _z68(sdk::unknown_ptr) type_string;
    
    // [CmpUnblockHiveWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e154c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x624014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6686f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69137c, 0x1fe000 bytes
    //
    _z69(sdk::unknown_ptr) unblock_hive_writes;
    
    // [CmpUnblockTwoHiveWrites]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66916c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690d88, 0x1fe000 bytes
    //
    _z70(sdk::unknown_ptr) unblock_two_hive_writes;
    
    // [CmpUndoDeleteKeyForTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e2034, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70f08c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66b250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716a1c, 0x1fe000 bytes
    //
    _z71(sdk::unknown_ptr) undo_delete_key_for_trans;
    
    // [CmpUnfreezeHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x714b98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa095e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71c5e4, 0x1fe000 bytes
    //
    _z72(sdk::unknown_ptr) unfreeze_hive;
    
    // [CmpUnlockDeletedHashEntryByKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ec1fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6261e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7474f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693498, 0x1fe000 bytes
    //
    _z73(sdk::unknown_ptr) unlock_deleted_hash_entry_by_kcb;
    
    // [CmpUnlockHashEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d3ff0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6283a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x695678, 0x1fe000 bytes
    //
    _z74(sdk::unknown_ptr) unlock_hash_entry;
    
    // [CmpUnlockHashEntryByIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50c360, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x872fbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10f1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8714ac, 0x1fe000 bytes
    //
    _z75(sdk::unknown_ptr) unlock_hash_entry_by_index;
    
    // [CmpUnlockHashEntryByKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ec940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cbb20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748b60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x621f60, 0x1fe000 bytes
    //
    _z76(sdk::unknown_ptr) unlock_hash_entry_by_kcb;
    
    // [CmpUnlockHiveList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41b230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62f444, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x736738, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d950, 0x1fe000 bytes
    //
    _z77(sdk::unknown_ptr) unlock_hive_list;
    
    // [CmpUnlockKcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d4340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cf900, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae10b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x625d40, 0x1fe000 bytes
    //
    _z78(sdk::unknown_ptr) unlock_kcb;
    
    // [CmpUnlockKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cf820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x625c60, 0x1fe000 bytes
    //
    _z79(sdk::unknown_ptr) unlock_kcb_stack;
    
    // [CmpUnlockNameHashEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x609bf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c6df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61d230, 0x1fe000 bytes
    //
    _z80(sdk::unknown_ptr) unlock_name_hash_entry;
    
    // [CmpUnlockRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aba7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d2960, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x628da0, 0x1fe000 bytes
    //
    _z81(sdk::unknown_ptr) unlock_registry;
    
    // [CmpUnlockTwoKcbs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d4ec0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a3740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d9724, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f9ca0, 0x1fe000 bytes
    //
    _z82(sdk::unknown_ptr) unlock_two_kcbs;
    
    // [CmpUnlockTwoSecurityCaches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49de5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x745bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8e48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74d7f0, 0x1fe000 bytes
    //
    _z83(sdk::unknown_ptr) unlock_two_security_caches;
    
    // [CmpUnsupportedOperationHits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3234a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47900, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc137c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc478c0, 0x1fe000 bytes
    //
    _z84(sdk::unknown_ptr) unsupported_operation_hits;
    
    // [CmpUpdateGlobalQuotaAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3f80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x633098, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x681a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x688cb8, 0x1fe000 bytes
    //
    _z85(sdk::unknown_ptr) update_global_quota_allowed;
    
    // [CmpUpdateHiveRootCellFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1724, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6954, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0bb4, 0x1fe000 bytes
    //
    _z86(sdk::unknown_ptr) update_hive_root_cell_flags;
    
    // [CmpUpdateKeyNodeAccessBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e722c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c1788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df4fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617ee0, 0x1fe000 bytes
    //
    _z87(sdk::unknown_ptr) update_key_node_access_bits;
    
    // [CmpUpdateParentForEachSon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8785b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa15484, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x876b04, 0x1fe000 bytes
    //
    _z88(sdk::unknown_ptr) update_parent_for_each_son;
    
    // [CmpUpdatePhaseAccessBit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56cfa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0acc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825e08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b865c, 0x1fe000 bytes
    //
    _z89(sdk::unknown_ptr) update_phase_access_bit;
    
    // [CmpUpdateReorganizeRegistryValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56cfec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0b1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825d44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b86ac, 0x1fe000 bytes
    //
    _z90(sdk::unknown_ptr) update_reorganize_registry_values;
    
    // [CmpUpdateRevision]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dfff0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99910, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afd80, 0x1fe000 bytes
    //
    _z91(sdk::unknown_ptr) update_revision;
    
    // [CmpUpdateStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e0028, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0e48, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99948, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afdb8, 0x1fe000 bytes
    //
    _z92(sdk::unknown_ptr) update_status;
    
    // [CmpUpdateSystemHiveHysteresis]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494b10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6750cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x682b74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6851ac, 0x1fe000 bytes
    //
    _z93(sdk::unknown_ptr) update_system_hive_hysteresis;
    
    // [CmpUserPresenceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110fa4, 0x32828 bytes
    // ntoskrnl.exe .text:0x271580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323110, 0x1fe000 bytes
    //
    _z94(sdk::unknown_ptr) user_presence_callback;
    
    // [CmpUserPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323500, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47ac0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc139a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47a80, 0x1fe000 bytes
    //
    _z95(sdk::unknown_ptr) user_present;
    
    // [CmpUuidCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x475d08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f6210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79d398, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65a768, 0x1fe000 bytes
    //
    _z96(sdk::unknown_ptr) uuid_create;
    
    // [CmpValidateComponents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4785f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cd5e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bfd94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x623a20, 0x1fe000 bytes
    //
    _z97(sdk::unknown_ptr) validate_components;
    
    // [CmpValidateGlobalFlushControlFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x540790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x782634, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c3d4, 0x1fe000 bytes
    //
    _z98(sdk::unknown_ptr) validate_global_flush_control_flags;
    
    // [CmpValidateHiveSecurityDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f144c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62b014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x755c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68b1a8, 0x1fe000 bytes
    //
    _z99(sdk::unknown_ptr) validate_hive_security_descriptors;
    
    // [CmpValueEnumStackAdvance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610b5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70df54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66cac8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7158e4, 0x1fe000 bytes
    //
    _a00(sdk::unknown_ptr) value_enum_stack_advance;
    
    // [CmpValueEnumStackCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610c68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d6c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715bc0, 0x1fe000 bytes
    //
    _a01(sdk::unknown_ptr) value_enum_stack_cleanup;
    
    // [CmpValueEnumStackEntryCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b9614, 0x32828 bytes
    // ntoskrnl.exe .text:0x367d7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x202604, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36912c, 0x1fe000 bytes
    //
    _a02(sdk::unknown_ptr) value_enum_stack_entry_cleanup;
    
    // [CmpValueEnumStackEntryInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ee58, 0x32828 bytes
    // ntoskrnl.exe .text:0x2712d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3821dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322ca4, 0x1fe000 bytes
    //
    _a03(sdk::unknown_ptr) value_enum_stack_entry_initialize;
    
    // [CmpValueEnumStackGetEntryAtLayerHeight]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610cc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d724, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715c20, 0x1fe000 bytes
    //
    _a04(sdk::unknown_ptr) value_enum_stack_get_entry_at_layer_height;
    
    // [CmpValueEnumStackInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610ce8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70e53c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d5b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x715ecc, 0x1fe000 bytes
    //
    _a05(sdk::unknown_ptr) value_enum_stack_initialize;
    
    // [CmpValueEnumStackMatchingValueInUpperLayer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610d2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x878dc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d8ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x877314, 0x1fe000 bytes
    //
    _a06(sdk::unknown_ptr) value_enum_stack_matching_value_in_upper_layer;
    
    // [CmpValueEnumStackStartFromKcbStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x610df4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x878e9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66c514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8773ec, 0x1fe000 bytes
    //
    _a07(sdk::unknown_ptr) value_enum_stack_start_from_kcb_stack;
    
    // [CmpValueEnumStackStartFromKeyNodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b9634, 0x32828 bytes
    // ntoskrnl.exe .text:0x367cc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2020b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369078, 0x1fe000 bytes
    //
    _a08(sdk::unknown_ptr) value_enum_stack_start_from_key_node_stack;
    
    // [CmpValueToData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552e54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7893ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83bb6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79318c, 0x1fe000 bytes
    //
    _a09(sdk::unknown_ptr) value_to_data;
    
    // [CmpVEEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ec9, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2c5, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b4d9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f315, 0x1fe000 bytes
    //
    _a10(sdk::unknown_ptr) ve_enabled;
    
    // [CmpVEExecuteCreateLogic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e5ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c05c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aeb10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cfd5c, 0x1fe000 bytes
    //
    _a11(sdk::unknown_ptr) ve_execute_create_logic;
    
    // [CmpVEExecuteOpenLogic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dbe70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d8d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d0910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e9b00, 0x1fe000 bytes
    //
    _a12(sdk::unknown_ptr) ve_execute_open_logic;
    
    // [CmpVEExecuteRealStoreParseLogic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e13dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623e6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6911d4, 0x1fe000 bytes
    //
    _a13(sdk::unknown_ptr) ve_execute_real_store_parse_logic;
    
    // [CmpVEExecuteVirtualStoreParseLogic]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607c6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86dc58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0c118, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86c5d8, 0x1fe000 bytes
    //
    _a14(sdk::unknown_ptr) ve_execute_virtual_store_parse_logic;
    
    // [CmpVEPerformOpenAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f02c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a9f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aea34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb220, 0x1fe000 bytes
    //
    _a15(sdk::unknown_ptr) ve_perform_open_access_check;
    
    // [CmpVendorID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e0048, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0e68, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99968, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afdd8, 0x1fe000 bytes
    //
    _a16(sdk::unknown_ptr) vendor_id;
    
    // [CmpVerifierOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2cc0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa978a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b1a8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96a98, 0x1fe000 bytes
    //
    _a17(sdk::unknown_ptr) verifier_options;
    
    // [CmpVirtualBranchIsReplicated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1228, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x623bd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668d0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x690c1c, 0x1fe000 bytes
    //
    _a18(sdk::unknown_ptr) virtual_branch_is_replicated;
    
    // [CmpVirtualPathPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607e68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86de78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0c334, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86c7f8, 0x1fe000 bytes
    //
    _a19(sdk::unknown_ptr) virtual_path_present;
    
    // [CmpVolatileBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34265c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd177a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c10, 0x1fe000 bytes
    //
    _a20(sdk::unknown_ptr) volatile_boot;
    
    // [CmpWaitForHiveMount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a5cb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8591d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7addc4, 0x1fe000 bytes
    //
    _a21(sdk::unknown_ptr) wait_for_hive_mount;
    
    // [CmpWaitForLateUnloadWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a430, 0x32828 bytes
    // ntoskrnl.exe .text:0x23db4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3474a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ebbec, 0x1fe000 bytes
    //
    _a22(sdk::unknown_ptr) wait_for_late_unload_worker;
    
    // [CmpWaitOnHiveWriteQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608edc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86ee7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0668c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d7fc, 0x1fe000 bytes
    //
    _a23(sdk::unknown_ptr) wait_on_hive_write_queue;
    
    // [CmpWakeWriteQueueWaiters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f1434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671f18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df6a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5778, 0x1fe000 bytes
    //
    _a24(sdk::unknown_ptr) wake_write_queue_waiters;
    
    // [CmpWalkOneLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5390, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6caef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d2b90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x621330, 0x1fe000 bytes
    //
    _a25(sdk::unknown_ptr) walk_one_level;
    
    // [CmpWalkPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552eac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x789454, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b4ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7931f4, 0x1fe000 bytes
    //
    _a26(sdk::unknown_ptr) walk_path;
    
    // [CmpWasSetupBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d70, 0x32828 bytes
    // ntoskrnl.exe .data:0xc485d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc143a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485b0, 0x1fe000 bytes
    //
    _a27(sdk::unknown_ptr) was_setup_boot;
    
    // [CmpWildcardString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d10, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa97928, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b228, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96b18, 0x1fe000 bytes
    //
    _a28(sdk::unknown_ptr) wildcard_string;
    
    // [CmpWindowsNtString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecc90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981178, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fa38, 0x1fe000 bytes
    //
    _a29(sdk::unknown_ptr) windows_nt_string;
    
    // [CmpWorkerDataInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341e50, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17250, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41a0, 0x1fe000 bytes
    //
    _a30(sdk::unknown_ptr) worker_data_initialized;
    
    // [CmpWriteOffsetArrayToFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60ac7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x871ebc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0cac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8703ac, 0x1fe000 bytes
    //
    _a31(sdk::unknown_ptr) write_offset_array_to_file;
    
    // [CmpRegUtilAllocateUnicodeString]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6d8e4, 0x1cf0 bytes
    // pci.sys PAGE:0x76ba8, 0x1cf0 bytes
    // pci.sys PAGE:0x6b844, 0x1cf0 bytes
    //
    _a32(sdk::function<int32_t(nt::unicode_view*, uint16_t)>*) reg_util_allocate_unicode_string;
};
#include "magic/api.end.hpp"
