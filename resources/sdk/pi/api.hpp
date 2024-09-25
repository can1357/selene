#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../wdf/pidescriptor_state_t.hpp"
#include "../wdf/stack_creation_settings_t.hpp"

#include "magic/api.start.hpp"
namespace pi
{
    // [PiCreateServiceKeyUnderPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9504e8, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) create_service_key_under_path;
    
    // [PiCreateServiceStateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x805320, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) create_service_state_key;
    
    // [PiCreateUniqueServiceStateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x950734, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) create_unique_service_state_key;
    
    // [PiDcCompareDevPropKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x494d90, 0x32828 bytes
    //
    _m03(sdk::unknown_ptr) dc_compare_dev_prop_keys;
    
    // [PiDDBPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b130, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) ddb_path;
    
    // [PiDevCfgCopyDeviceProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x63c128, 0x32828 bytes
    //
    _m05(sdk::unknown_ptr) dev_cfg_copy_device_properties;
    
    // [PiDevCfgMigrateService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x63ffdc, 0x32828 bytes
    //
    _m06(sdk::unknown_ptr) dev_cfg_migrate_service;
    
    // [PiDevCfgPopDriverNodeEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d1934, 0x32828 bytes
    //
    _m07(sdk::unknown_ptr) dev_cfg_pop_driver_node_entry;
    
    // [PiDevCfgResolveDeviceDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x642c6c, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) dev_cfg_resolve_device_dependencies;
    
    // [PiDevCfgResolveDriverDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x642f0c, 0x32828 bytes
    //
    _m09(sdk::unknown_ptr) dev_cfg_resolve_driver_dependencies;
    
    // [PiDmObjectAcquireSharedLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4416a0, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) dm_object_acquire_shared_lock;
    
    // [PiDmObjectManagerAcquireExclusiveLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x447d40, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) dm_object_manager_acquire_exclusive_lock;
    
    // [PiDmObjectManagerAcquireSharedLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x442fd8, 0x32828 bytes
    //
    _m12(sdk::unknown_ptr) dm_object_manager_acquire_shared_lock;
    
    // [PiDmaGuardProcessPreStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7f0e84, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) dma_guard_process_pre_start;
    
    // [PiDmaGuardProcessUpdateConsoleLockStateAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x95fd10, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) dma_guard_process_update_console_lock_state_action;
    
    // [PiDqQueryIsObjectInResultSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x71ef98, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) dq_query_is_object_in_result_set;
    
    // [PiDqTraceQueryCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x505064, 0x32828 bytes
    //
    _m16(sdk::unknown_ptr) dq_trace_query_create;
    
    // [PiDriverRegKeySharedStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x1cd8, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) driver_reg_key_shared_state_name;
    
    // [PiDriverRegKeyUniquePersistentStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x9710, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) driver_reg_key_unique_persistent_state_name;
    
    // [PiDriverRegKeyUniqueSharedStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x9720, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) driver_reg_key_unique_shared_state_name;
    
    // [PiDriverRegKeyUniqueStateRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xa410, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) driver_reg_key_unique_state_root;
    
    // [PiDrvDbDriverStoreNodesRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa63f38, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) drv_db_driver_store_nodes_root;
    
    // [PiDrvDbDriverStoreNodesUpdated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x83a504, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) drv_db_driver_store_nodes_updated;
    
    // [PiDrvDbQueryHiveFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x965318, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) drv_db_query_hive_file_name;
    
    // [PiDrvDbUnregisterNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x965c28, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) drv_db_unregister_node;
    
    // [PiEventQueryRemoveDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x651fd4, 0x32828 bytes
    //
    _m25(sdk::unknown_ptr) event_query_remove_devices;
    
    // [PiEventQueryRemoveNoFdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x652154, 0x32828 bytes
    //
    _m26(sdk::unknown_ptr) event_query_remove_no_fdo;
    
    // [PiEventQueryRemoveNotifyKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6521ec, 0x32828 bytes
    //
    _m27(sdk::unknown_ptr) event_query_remove_notify_kernel;
    
    // [PiEventRemovalCanceledNotifyKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6522ec, 0x32828 bytes
    //
    _m28(sdk::unknown_ptr) event_removal_canceled_notify_kernel;
    
    // [PiEventRemovalCheckOpenHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x652370, 0x32828 bytes
    //
    _m29(sdk::unknown_ptr) event_removal_check_open_handles;
    
    // [PiEventRemovalCompleteNotifyKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x42eccc, 0x32828 bytes
    //
    _m30(sdk::unknown_ptr) event_removal_complete_notify_kernel;
    
    // [PiEventRemovalGetDeleteType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4304b0, 0x32828 bytes
    //
    _m31(sdk::unknown_ptr) event_removal_get_delete_type;
    
    // [PiEventRemovalOpenHandleVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6523ec, 0x32828 bytes
    //
    _m32(sdk::unknown_ptr) event_removal_open_handle_veto;
    
    // [PiEventRestartRemovalRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x570b08, 0x32828 bytes
    //
    _m33(sdk::unknown_ptr) event_restart_removal_relations;
    
    // [PiGetServiceNameInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7abf40, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) get_service_name_info;
    
    // [PiIommuBlockDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x870218, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) iommu_block_device;
    
    // [PiIommuIsPassthroughAllowedWhileConsoleLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9636f4, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) iommu_is_passthrough_allowed_while_console_locked;
    
    // [PiIommuSaveDeviceAtsSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a7db4, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) iommu_save_device_ats_settings;
    
    // [PiIommuUnblockDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7ef360, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) iommu_unblock_device;
    
    // [PiIommuUninitializeDeviceAts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ea284, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) iommu_uninitialize_device_ats;
    
    // [PiLogSurpriseRemoveEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8050dc, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) log_surprise_remove_event;
    
    // [PiPnpRtlDisableRemoveOperationDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x443620, 0x32828 bytes
    //
    _m41(sdk::unknown_ptr) pnp_rtl_disable_remove_operation_dispatch;
    
    // [PiPnpRtlEnumDevicesInContainerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x633cf0, 0x32828 bytes
    //
    _m42(sdk::unknown_ptr) pnp_rtl_enum_devices_in_container_callback;
    
    // [PiPnpRtlOperationListAcquireExclusiveLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x443874, 0x32828 bytes
    //
    _m43(sdk::unknown_ptr) pnp_rtl_operation_list_acquire_exclusive_lock;
    
    // [PiPnpRtlOperationListAcquireSharedLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x441680, 0x32828 bytes
    //
    _m44(sdk::unknown_ptr) pnp_rtl_operation_list_acquire_shared_lock;
    
    // [PiProcessDeviceResetAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54c918, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) process_device_reset_action;
    
    // [PiProcessNewDeviceNodeAsync]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7e1104, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) process_new_device_node_async;
    
    // [PiProcessNewDeviceNodeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9537b0, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) process_new_device_node_worker;
    
    // [PiUEventSendDeviceInterfaceArrivalETWEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x49fb88, 0x32828 bytes
    //
    _m48(sdk::unknown_ptr) u_event_send_device_interface_arrival_etw_event;
    
    // [PiDmObjectReleaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x727c38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72fa58, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) dm_object_release_lock;
    
    // [PiDrvDbDriverStoresRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980498, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97ed78, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) drv_db_driver_stores_root;
    
    // [PiIommuPutInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7474d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74f114, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) iommu_put_interface;
    
    // [PiPnpRtlRegisterDriverMachineNodeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b6110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bdca0, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) pnp_rtl_register_driver_machine_node_callback;
    
    // [PiProcessCanceledRemoveForReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b6318, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b4ac8, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) process_canceled_remove_for_reset;
    
    // [PiSwAllocMem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8abd28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8aa4d8, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) sw_alloc_mem;
    
    // [PiSwFreeMem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8abe94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8aa644, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) sw_free_mem;
    
    // [PiSwUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7240f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72bf10, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) sw_unlock;
    
    // [PiAuGetDriverDataDirectorySecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6ac24, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5853c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6a51c, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) au_get_driver_data_directory_security_object;
    
    // [PiAuGetServiceStateSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a1160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67791c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f910, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) au_get_service_state_security_object;
    
    // [PiAuGetStateDirectorySecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a13e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954e48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89fb94, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) au_get_state_directory_security_object;
    
    // [PiBuildAndOpenDeviceDirectoryPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89c100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94fe10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89a8b0, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) build_and_open_device_directory_path;
    
    // [PiCheckRemovalPreconditions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x729ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731f80, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) check_removal_preconditions;
    
    // [PiControlQueryAndRemoveDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64f77c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b0b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8af2e0, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) control_query_and_remove_device;
    
    // [PiControlQueryConflictList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64f8c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b0c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8af440, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) control_query_conflict_list;
    
    // [PiControlStartDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64fc04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b1000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8af7b0, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) control_start_device;
    
    // [PiCreateDirectoryPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89c234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ff4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89a9e4, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) create_directory_path;
    
    // [PiCreateDriverDataDirectoryRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6aa68, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5837c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6a360, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) create_driver_data_directory_root;
    
    // [PiCreateDriverRedirectedStateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a6954, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80549c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aea74, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) create_driver_redirected_state_key;
    
    // [PiCreateRegistryPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89c534, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x950254, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89ace4, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) create_registry_path;
    
    // [PiCslInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4baa4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42dd8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4b928, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) csl_initialize;
    
    // [PiCslIsConsoleLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8af670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9613fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ade20, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) csl_is_console_locked;
    
    // [PiDcCompareUpdateProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x74a060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7caa90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x751ca0, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) dc_compare_update_properties;
    
    // [PiDetermineDeleteType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x729888, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fce60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7316a8, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) determine_delete_type;
    
    // [PiDevCfgConfigureDeviceFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x748e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8033a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7506d0, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) dev_cfg_configure_device_filters;
    
    // [PiDevCfgConfigurePropertyMatchCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a30b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9561c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a1860, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) dev_cfg_configure_property_match_callback;
    
    // [PiDevCfgGetDeviceClassConfigFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x753f10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e5cd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b7d0, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) dev_cfg_get_device_class_config_flags;
    
    // [PiDevCfgInitDriverDatabaseCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a3ed8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9570f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a2688, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) dev_cfg_init_driver_database_callback;
    
    // [PiDevCfgSplitDriverConfigurationId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a7a6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x958eec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a621c, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) dev_cfg_split_driver_configuration_id;
    
    // [PiDmDevicePanelManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43d80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5bb20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43f00, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) dm_device_panel_manager;
    
    // [PiDmObjectAcquireExclusiveLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x447af4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72fa80, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) dm_object_acquire_exclusive_lock;
    
    // [PiDmaGuardInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b1b48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c4b08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2400, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) dma_guard_initialize;
    
    // [PiDmaGuardProcessNewDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x746bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73be28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e7f0, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) dma_guard_process_new_device_node;
    
    // [PiDmaGuardProcessPostRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x72b6d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fb5c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733760, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) dma_guard_process_post_remove;
    
    // [PiDmaGuardProcessPreAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71b660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a7d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x723480, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) dma_guard_process_pre_add_device;
    
    // [PiDmaGuardQueueFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b6594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9661a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4d44, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) dma_guard_queue_flush;
    
    // [PiDmaGuardQueueInsertEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b6630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x966238, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4de0, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) dma_guard_queue_insert_entry;
    
    // [PiDmaGuardQueueRemoveEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50a5b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x551444, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a378, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) dma_guard_queue_remove_entry;
    
    // [PiDqDevicePanelManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43960, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43720, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) dq_device_panel_manager;
    
    // [PiDriverRegKeyParametersName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5af0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2a80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5ae0, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) driver_reg_key_parameters_name;
    
    // [PiDriverRegKeyPersistentStateName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x5ae0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1c68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5ad0, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) driver_reg_key_persistent_state_name;
    
    // [PiDrvDbEnumDriverStoreNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78127c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78b01c, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) drv_db_enum_driver_store_nodes;
    
    // [PiDrvDbEnumNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b31d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x964684, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b1988, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) drv_db_enum_nodes;
    
    // [PiDrvDbFindNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50a14c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5513bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509f0c, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) drv_db_find_node;
    
    // [PiDrvDbFindSystemFilePathToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b3224, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9646d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b19d4, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) drv_db_find_system_file_path_token;
    
    // [PiDrvDbGetNodeSystemRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b3354, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838d14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b1b04, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) drv_db_get_node_system_root;
    
    // [PiDrvDbMountNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b34b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x964804, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b1c64, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) drv_db_mount_node;
    
    // [PiDrvDbOverlayCopyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b3558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96493c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b1d08, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) drv_db_overlay_copy_keys;
    
    // [PiDrvDbOverlayNodeHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b3af8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x964edc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b22a8, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) drv_db_overlay_node_hive;
    
    // [PiDrvDbQuerySyncNodesUpdated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b3f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x965494, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b26e4, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) drv_db_query_sync_nodes_updated;
    
    // [PiDrvDbQuerySystemPathWin32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b41a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8388a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b2958, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) drv_db_query_system_path_win32;
    
    // [PiDrvDbRegisterNodeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b6180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdd10, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) drv_db_register_node_callback;
    
    // [PiDrvDbResolveFilePathKeyValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b45f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838a44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b2da8, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) drv_db_resolve_file_path_key_values;
    
    // [PiDrvDbResolveKeyFilePaths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b4c64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x965710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b3414, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) drv_db_resolve_key_file_paths;
    
    // [PiDrvDbResolveNodeFilePaths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b4d9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83a7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b354c, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) drv_db_resolve_node_file_paths;
    
    // [PiDrvDbResolveSystemFilePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b4efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96584c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b36ac, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) drv_db_resolve_system_file_path;
    
    // [PiDrvDbSetupNodeHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b52a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83a560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b3a54, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) drv_db_setup_node_hive;
    
    // [PiDrvDbSetupNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78046c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83a1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78a20c, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) drv_db_setup_nodes;
    
    // [PiDrvDbSuspendNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7805fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83a0a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78a39c, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) drv_db_suspend_nodes;
    
    // [PiDrvDbSystemRootNt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x980368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63e18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec48, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) drv_db_system_root_nt;
    
    // [PiDrvDbSystemRootWin32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9806f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa641b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97efd0, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) drv_db_system_root_win32;
    
    // [PiDrvDbUnloadHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709cb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebfe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711708, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) drv_db_unload_hive;
    
    // [PiDrvDbUnmountNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b56b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x965bcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b3e68, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) drv_db_unmount_node;
    
    // [PiEventAllocatePendingEjectRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b6280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x965f54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4a30, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) event_allocate_pending_eject_relations;
    
    // [PiEventAreDeviceRelationsExcluded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x72c498, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd6fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7342b8, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) event_are_device_relations_excluded;
    
    // [PiGetDmaAdapterFromBusInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x746468, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c768, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e0a8, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) get_dma_adapter_from_bus_interface;
    
    // [PiGetDriverImageDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89c7c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9507a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89af74, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) get_driver_image_directory;
    
    // [PiGetDriverMutableStateDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89c908, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9508f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89b0b8, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) get_driver_mutable_state_directory;
    
    // [PiGetStateRootPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7647fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x805540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76ba9c, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) get_state_root_path;
    
    // [PiGetTargetDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x72a164, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fccd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732624, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) get_target_device_node;
    
    // [PiInitializeDDB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x761e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783abc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x769130, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) initialize_ddb;
    
    // [PiIommuAllocateExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7474f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73bfb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f138, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) iommu_allocate_extension;
    
    // [PiIommuFreeExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x747764, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec394, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f3a4, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) iommu_free_extension;
    
    // [PiIommuGetInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x746c48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73becc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e888, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) iommu_get_interface;
    
    // [PiIommuIsDeviceSafeWhileConsoleLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b1880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9636d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b0030, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) iommu_is_device_safe_while_console_locked;
    
    // [PiIsHVCIEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b63ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953e58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdf3c, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) is_hvci_enabled;
    
    // [PiKsrNotifyInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8fe80, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb810d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8f100, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) ksr_notify_initialize;
    
    // [PiNormalDDBPatchPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9808d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa644b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1b8, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) normal_ddb_patch_path;
    
    // [PiNotifyCiDriverBlocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a0174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953ea4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e924, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) notify_ci_driver_blocked;
    
    // [PiOpenDirectoryWithRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89ca70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x950a54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89b220, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) open_directory_with_root;
    
    // [PiOpenDriverRedirectedStateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x75ef04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x805240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x766954, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) open_driver_redirected_state_key;
    
    // [PiOpenDriverRedirectedStateRootKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89cc00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x950c18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89b3b0, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) open_driver_redirected_state_root_key;
    
    // [PiPnpRtlContainerReadOnlyProps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x7ad0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x7d00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x7b28, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) pnp_rtl_container_read_only_props;
    
    // [PiPnpRtlEnumDevicesCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a0700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89eeb0, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) pnp_rtl_enum_devices_callback;
    
    // [PiPnpRtlFreeDeviceDeleteInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633d90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7189dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72043c, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) pnp_rtl_free_device_delete_info;
    
    // [PiPnpRtlFreePanelRemoveInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x718854, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9544f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7202b4, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) pnp_rtl_free_panel_remove_info;
    
    // [PiPnpRtlGatherPanelRemoveInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a0774, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954538, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89ef24, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) pnp_rtl_gather_panel_remove_info;
    
    // [PiProcessDriversLoadedOnSecureDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b2864, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x963cbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b1014, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) process_drivers_loaded_on_secure_device;
    
    // [PiProcessHaltDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64e844, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89fa9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89e24c, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) process_halt_device;
    
    // [PiProcessQueryAndCancelRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71628c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673b64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71dccc, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) process_query_and_cancel_removal;
    
    // [PiProcessQueryRemoveNoFdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x715464, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x965fe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71cea4, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) process_query_remove_no_fdo;
    
    // [PiRegisterKernelSoftRestartNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b0214, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e394, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae9c4, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) register_kernel_soft_restart_notification;
    
    // [PiReleaseDDB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x762064, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x782d24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x769304, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) release_ddb;
    
    // [PiRemoveDeferredSetInterfaceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76496c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81670c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76bc0c, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) remove_deferred_set_interface_state;
    
    // [PiRestartRemovalRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71722c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb23c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ec6c, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) restart_removal_relations;
    
    // [PiSendTargetDeviceRemoveCanceledNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b6480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x966098, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4c30, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) send_target_device_remove_canceled_notification;
    
    // [PiSendTargetDeviceRemoveCompleteNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x72c414, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd71c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734234, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) send_target_device_remove_complete_notification;
    
    // [PiSwDeviceOperationsAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x74c12c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f858c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753d6c, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) sw_device_operations_allowed;
    
    // [PiSwGlobalPdoAssociationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc432b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ae90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43270, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) sw_global_pdo_association_list;
    
    // [PiSwLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x724184, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72bfa4, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) sw_lock;
    
    // [PiUEventIsClientStuck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f6008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726af8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68478c, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) u_event_is_client_stuck;
    
    // [PiUEventIsDeviceEventVetoable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f5e04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7268d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684588, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) u_event_is_device_event_vetoable;
    
    // [PiUEventSendDeviceInstallNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63380c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a011c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89e8cc, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) u_event_send_device_install_notification;
    
    // [PiUpdateDevicePanel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x725354, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f1ca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72d174, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) update_device_panel;
    
    // [PiUpdateDeviceResourceLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b257c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9639c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b0d2c, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) update_device_resource_lists;
    
    // [PiUpdateGuestAssignedState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7265b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f47e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72e3d4, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) update_guest_assigned_state;
    
    // [PiAllocateDeviceObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430370, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732988, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) allocate_device_object_list;
    
    // [PiAuAllocateAndInitializeSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x562294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77ff44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x851150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789ce4, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) au_allocate_and_initialize_sid;
    
    // [PiAuCheckClientInteractive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635e6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0ee8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f698, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) au_check_client_interactive;
    
    // [PiAuCheckTokenMembership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635f2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954ca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f758, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) au_check_token_membership;
    
    // [PiAuCreateLocalSystemSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79f1e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4a1b4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42a64, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4a038, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) au_create_local_system_security_object;
    
    // [PiAuCreateSecurityObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79f10c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4a0c0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb43310, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa49f44, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) au_create_security_objects;
    
    // [PiAuCreateStandardSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79f548, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4a574, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4fe80, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4a3f8, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) au_create_standard_security_object;
    
    // [PiAuCreateUserSids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79f36c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4a350, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4fc5c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4a1d4, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) au_create_user_sids;
    
    // [PiAuDoesClientHaveAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x437d20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4824, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72d284, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b24f0, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) au_does_client_have_access;
    
    // [PiAuDoesClientHavePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6360b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7132ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671d2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71acf8, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) au_does_client_have_privilege;
    
    // [PiAuFreeUserSids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79f160, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4a11c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb43020, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa49fa0, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) au_free_user_sids;
    
    // [PiAuLocalSystemSecurityMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e928, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9e80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf198, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xadf0, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) au_local_system_security_mapping;
    
    // [PiAuLocalSystemSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327160, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b10, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) au_local_system_security_object;
    
    // [PiAuSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327168, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b18, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) au_security_object;
    
    // [PiAuSecurityObjectMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e880, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9e70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf510, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xade0, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) au_security_object_mapping;
    
    // [PiAuSwDeviceCreateSidSubAuthorities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279300, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1f2b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x257d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1f230, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) au_sw_device_create_sid_sub_authorities;
    
    // [PiAuVerifyAccessToObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439c0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4868, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70ff54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2534, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) au_verify_access_to_object;
    
    // [PiAuditDeviceEnableDisableAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6516b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b2a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x963e54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b11c0, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) audit_device_enable_disable_action;
    
    // [PiAuditDeviceEnableDisableRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6516e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b2a44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x963e88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b11f4, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) audit_device_enable_disable_request;
    
    // [PiAuditDeviceOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x651724, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b2a88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x963ecc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b1238, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) audit_device_operation;
    
    // [PiAuditDeviceStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x651cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b3094, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x964540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b1844, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) audit_device_start;
    
    // [PiBuildDeviceNodeInstancePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42d9f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74eb54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d829c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x756794, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) build_device_node_instance_path;
    
    // [PiClearDeviceObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4303d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c2e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc358, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732a40, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) clear_device_object_list;
    
    // [PiCMCaptureCreateDeviceInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64abfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ac1fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa9ac, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) cm_capture_create_device_input_data;
    
    // [PiCMCaptureDeviceListInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4916b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66043c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bfbec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3dcc, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) cm_capture_device_list_input_data;
    
    // [PiCMCaptureEnumerateInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64aedc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ac4e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89130a, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aac98, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) cm_capture_enumerate_input_data;
    
    // [PiCMCaptureInterfaceAliasInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70f9b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cff68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717340, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) cm_capture_interface_alias_input_data;
    
    // [PiCMCaptureInterfaceListInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x437984, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e6e34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72843c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b4114, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) cm_capture_interface_list_input_data;
    
    // [PiCMCaptureObjectInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43aaf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e40f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72d030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1a34, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) cm_capture_object_input_data;
    
    // [PiCMCaptureProblemInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64af6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x713690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95dcc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71b0dc, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) cm_capture_problem_input_data;
    
    // [PiCMCapturePropertyInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441a7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d6954, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x712848, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a6724, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) cm_capture_property_input_data;
    
    // [PiCMCaptureRegisterInterfaceInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64b074, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ac580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95ddd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aad30, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) cm_capture_register_interface_input_data;
    
    // [PiCMCaptureRegistryInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4432c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d580c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b4214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a55dc, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) cm_capture_registry_input_data;
    
    // [PiCMCaptureRegistryPropertyInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e37ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0ea4, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) cm_capture_registry_property_input_data;
    
    // [PiCMConvertDeviceKeyType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d156c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b4168, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a1338, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) cm_convert_device_key_type;
    
    // [PiCMConvertDeviceListFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x491610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660394, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bfa40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3d24, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) cm_convert_device_list_filters;
    
    // [PiCMConvertRegistryProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e3674, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715bd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0d6c, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) cm_convert_registry_property;
    
    // [PiCMCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64b368, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ac880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95e15c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ab030, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) cm_create_device;
    
    // [PiCMCreateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64b960, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8acfe4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95e8bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ab794, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) cm_create_object;
    
    // [PiCMDeleteClassKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64bac4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ad19c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95ea58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ab94c, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) cm_delete_class_key;
    
    // [PiCMDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64bbac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70fb1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66f538, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7174ac, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) cm_delete_device;
    
    // [PiCMDeleteDeviceInterfaceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64bee0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ad2b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95eb74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aba68, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) cm_delete_device_interface_key;
    
    // [PiCMDeleteDeviceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64c02c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ad3a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95ec64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8abb58, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) cm_delete_device_key;
    
    // [PiCMDeleteObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64c250, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ad5e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95eeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8abd94, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) cm_delete_object;
    
    // [PiCMDeviceAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64c3d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x712ed4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671978, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71a920, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) cm_device_action;
    
    // [PiCMDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5039d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7deeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4ab0, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) cm_dispatch;
    
    // [PiCMDuplicateRegistryHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a690, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d1a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b4458, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a182c, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) cm_duplicate_registry_handle;
    
    // [PiCMEnumerateSubKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64c6d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ad7ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95f060, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8abf5c, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) cm_enumerate_sub_keys;
    
    // [PiCMFastIoDeviceDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e2d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d6360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x711d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a6130, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) cm_fast_io_device_dispatch;
    
    // [PiCMGenerateDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64c85c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ad9d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95f280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ac180, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) cm_generate_device_instance;
    
    // [PiCMGetDeviceDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64cb38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717b94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674948, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f5d4, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) cm_get_device_depth;
    
    // [PiCMGetDeviceIdList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4912e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660044, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bf804, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d39d4, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) cm_get_device_id_list;
    
    // [PiCMGetDeviceInterfaceAlias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5198bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70f2e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cfd64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x716c74, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) cm_get_device_interface_alias;
    
    // [PiCMGetDeviceInterfaceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x437b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e6268, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728288, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3548, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) cm_get_device_interface_list;
    
    // [PiCMGetDeviceStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439074, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e496c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72cac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2638, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) cm_get_device_status;
    
    // [PiCMGetObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43ad18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e3ce8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72cbc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1628, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) cm_get_object_list;
    
    // [PiCMGetObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e55c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d66bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x712094, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a648c, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) cm_get_object_property;
    
    // [PiCMGetObjectPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64cc10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8add2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95f5e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ac4dc, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) cm_get_object_property_keys;
    
    // [PiCMGetRegistryProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44481c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e3458, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7159dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0b50, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) cm_get_registry_property;
    
    // [PiCMGetRelatedDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51d358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749db4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72be08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7519f4, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) cm_get_related_device_instance;
    
    // [PiCMHandleIoctl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e33c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d63d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x711d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a61a0, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) cm_handle_ioctl;
    
    // [PiCMMandatoryFilterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439548, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70fd00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2b50, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) cm_mandatory_filter_callback;
    
    // [PiCMOpenClassKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499858, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cea7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867748, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69efc4, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) cm_open_class_key;
    
    // [PiCMOpenDeviceInterfaceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64ce34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8adf94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671364, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ac744, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) cm_open_device_interface_key;
    
    // [PiCMOpenDeviceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b4a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d1600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3f44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a13cc, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) cm_open_device_key;
    
    // [PiCMOpenObjectKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43b810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d549c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b3d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5268, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) cm_open_object_key;
    
    // [PiCMQueryRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64d04c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x712c7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6714d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71a6c8, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) cm_query_remove;
    
    // [PiCMRegisterDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64d440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ae15c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95f840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ac90c, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) cm_register_device_interface;
    
    // [PiCMReleaseObjectInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43aef8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e3eb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72cf84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b17f8, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) cm_release_object_input_data;
    
    // [PiCMReleasePropertyInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e7a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d6c14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x712308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a69e4, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) cm_release_property_input_data;
    
    // [PiCMReleaseRegistryInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43bad8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72cf84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a57f0, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) cm_release_registry_input_data;
    
    // [PiCMReleaseRegistryPropertyInputData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4449c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e3620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715b84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0d18, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) cm_release_registry_property_input_data;
    
    // [PiCMReturnBasicResultData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438d70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72cfb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1c54, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) cm_return_basic_result_data;
    
    // [PiCMReturnBufferResultData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e7ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d9304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71235c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a90d4, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) cm_return_buffer_result_data;
    
    // [PiCMReturnDepthResultData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64d648, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717c94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674a48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f6d4, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) cm_return_depth_result_data;
    
    // [PiCMReturnHandleResultData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43b78c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5404, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b40d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a51d0, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) cm_return_handle_result_data;
    
    // [PiCMReturnStatusResultData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439168, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4a74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72ee80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2740, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) cm_return_status_result_data;
    
    // [PiCMSetDeviceProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64d6dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x712b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95fa40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71a5bc, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) cm_set_device_problem;
    
    // [PiCMSetObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x724478, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72c2d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72c298, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) cm_set_object_property;
    
    // [PiCMSetProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64d7bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7135a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671dc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71aff4, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) cm_set_problem;
    
    // [PiCMSetRegistryProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64d8a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ae380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8acb30, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) cm_set_registry_property;
    
    // [PiCMUnregisterDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64da24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ae538, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95fb54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8acce8, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) cm_unregister_device_interface;
    
    // [PiCMValidateDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438b70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e3ac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72cd74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1408, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) cm_validate_device_instance;
    
    // [PiCollapseEnumRequests]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e9c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x36b098, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3804d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37bd8c, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) collapse_enum_requests;
    
    // [PiCollapseRebalanceRequests]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0c94, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a1d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x550fec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509f94, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) collapse_rebalance_requests;
    
    // [PiCompareDDBCacheEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4980a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74d680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2f60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7552c0, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) compare_ddb_cache_entries;
    
    // [PiConfigureDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64e6b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x713d38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71b784, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) configure_device;
    
    // [PiControlAllocateBufferForUserModeCaller]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x107a60, 0x32828 bytes
    // ntoskrnl.exe .text:0x21531c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38c860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d640, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) control_allocate_buffer_for_user_mode_caller;
    
    // [PiControlCopyUserModeCallersBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441f18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d9200, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae8e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a8fd0, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) control_copy_user_mode_callers_buffer;
    
    // [PiControlFreeUserModeCallersBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91750, 0x32828 bytes
    // ntoskrnl.exe .text:0x202500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f70c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5dd0, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) control_free_user_mode_callers_buffer;
    
    // [PiControlGetDeviceDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4c6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604fc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7290, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) control_get_device_depth;
    
    // [PiControlGetDeviceInterfaceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44288c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d6fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a6db0, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) control_get_device_interface_enabled;
    
    // [PiControlGetDevicePowerData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64f214, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b08d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8af084, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) control_get_device_power_data;
    
    // [PiControlGetDeviceStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64f44c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x713ac4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dbccc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71b510, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) control_get_device_stack;
    
    // [PiControlGetPropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5174, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6031c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x710a30, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) control_get_property_data;
    
    // [PiControlGetRelatedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f6890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6040c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70f9b0, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) control_get_related_device;
    
    // [PiControlGetSetDeviceStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5a8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6045b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70fea0, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) control_get_set_device_status;
    
    // [PiControlGetUserFlagsFromDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5d58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715294, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x710350, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) control_get_user_flags_from_device_node;
    
    // [PiControlMakeUserModeCallersCopy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441e5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d7250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db5ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a7020, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) control_make_user_mode_callers_copy;
    
    // [PiControlQueryDeviceRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64facc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b0eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x859a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8af660, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) control_query_device_relations;
    
    // [PiCreateDeviceInstanceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a0f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc7b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x751d38, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) create_device_instance_key;
    
    // [PiCreateDriverSwDeviceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x652468, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b1b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x802880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b02d0, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) create_driver_sw_device_callback;
    
    // [PiCreateDriverSwDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fe8dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f29c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730378, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) create_driver_sw_devices;
    
    // [PiDaDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5036cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7afba0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ccdc0, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) da_dispatch;
    
    // [PiDaDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78168c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6f830, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5f7e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6eca0, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) da_driver_entry;
    
    // [PiDaFastIoDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e264, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7afc80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ccea0, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) da_fast_io_dispatch;
    
    // [PiDcAllocateGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5705e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b44c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc100, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) dc_allocate_generic_table_entry;
    
    // [PiDcContainerRequiresConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739c48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f2abc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741888, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) dc_container_requires_configuration;
    
    // [PiDcFreeGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635a50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f220, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) dc_free_generic_table_entry;
    
    // [PiDcGenerateConfigNotificationIfContainerRequiresConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494dbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea1dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d600, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) dc_generate_config_notification_if_container_requires_configuration;
    
    // [PiDcHandleContainerEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494fc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73bf10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ef4b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x743b50, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) dc_handle_container_event;
    
    // [PiDcHandleCustomDeviceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd26c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6d08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6848e8, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) dc_handle_custom_device_event;
    
    // [PiDcHandleDeviceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494ef4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738d04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f12d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740944, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) dc_handle_device_event;
    
    // [PiDcHandleInterfaceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494f88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738ee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f14b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740b24, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) dc_handle_interface_event;
    
    // [PiDcHandleObjectEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494eac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738cb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f1280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7408f4, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) dc_handle_object_event;
    
    // [PiDcHandleSystemFirmwareUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635a60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9547a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f240, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) dc_handle_system_firmware_update;
    
    // [PiDcInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x782498, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4b8e0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb44018, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4b764, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) dc_init;
    
    // [PiDcInitUpdateProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568180, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x780aa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85b2ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78a848, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) dc_init_update_properties;
    
    // [PiDcResetChildDeviceContainerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635a6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0ab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9547c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f260, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) dc_reset_child_device_container_callback;
    
    // [PiDcResetChildDeviceContainers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635cb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0d18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954a10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f4c8, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) dc_reset_child_device_containers;
    
    // [PiDcUpdateDeviceContainerMembership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50112c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73954c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f2ccc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74118c, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) dc_update_device_container_membership;
    
    // [PiDcUpdateProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f940, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43a20, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) dc_update_properties;
    
    // [PiDDBCacheList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b140, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53990, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc20, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) ddb_cache_list;
    
    // [PiDDBCacheTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b520, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d040, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d040, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) ddb_cache_table;
    
    // [PiDDBLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320740, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44940, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44920, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) ddb_lock;
    
    // [PiDeferSetInterfaceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fe338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7def04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730880, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) defer_set_interface_state;
    
    // [PiDependencyEdgeWriteLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3213a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc455b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d0d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc454e0, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) dependency_edge_write_lock;
    
    // [PiDependencyNodeEmptyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321320, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45500, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d0a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc454f0, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) dependency_node_empty_list;
    
    // [PiDependencyNodeListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321300, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45590, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d0c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc454c0, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) dependency_node_list_head;
    
    // [PiDependencyRelationsLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321340, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45520, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d0e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45500, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) dependency_relations_lock;
    
    // [PiDevCfgAppendMultiSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x637518, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a20cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6764d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a087c, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) dev_cfg_append_multi_sz;
    
    // [PiDevCfgBuildDriverConfigurationId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63779c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71a61c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8011bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72243c, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) dev_cfg_build_driver_configuration_id;
    
    // [PiDevCfgBuildDriverNodeStrongName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6378bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fe418, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759c30, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) dev_cfg_build_driver_node_strong_name;
    
    // [PiDevCfgBuildIndirectString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x637a34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71a360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x800edc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x722180, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) dev_cfg_build_indirect_string;
    
    // [PiDevCfgCheckDeviceNeedsUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x637d28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a235c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x955694, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a0b0c, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) dev_cfg_check_device_needs_update;
    
    // [PiDevCfgClearDeviceMigrationNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63806c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a2a3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x955d78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a11ec, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) dev_cfg_clear_device_migration_node;
    
    // [PiDevCfgCompareDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1324, 0x32828 bytes
    // ntoskrnl.exe .text:0x368d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x203f68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a0c0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) dev_cfg_compare_drivers;
    
    // [PiDevCfgConfigureDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6383c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71fee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72a514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x727d00, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) dev_cfg_configure_device;
    
    // [PiDevCfgConfigureDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63a224, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8030bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750320, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) dev_cfg_configure_device_driver;
    
    // [PiDevCfgConfigureDeviceDriverConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63a2ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80314c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7503b0, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) dev_cfg_configure_device_driver_configuration;
    
    // [PiDevCfgConfigureDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63a370, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a2e78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678164, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a1628, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) dev_cfg_configure_device_interface;
    
    // [PiDevCfgConfigureDeviceInterfaceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d13b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x508070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54e450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507e30, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) dev_cfg_configure_device_interface_callback;
    
    // [PiDevCfgConfigureDeviceInterfaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63a580, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748f74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x803a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750834, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) dev_cfg_configure_device_interfaces;
    
    // [PiDevCfgConfigureDeviceKeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63aa30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74ca50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x754690, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) dev_cfg_configure_device_key_callback;
    
    // [PiDevCfgConfigureDeviceKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63aaa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748bb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x803210, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750474, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) dev_cfg_configure_device_keys;
    
    // [PiDevCfgConfigureDeviceLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63ac98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x753d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e47cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b5ec, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) dev_cfg_configure_device_location;
    
    // [PiDevCfgConfigureSoftwareDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63aff8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748ec8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8035d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750788, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) dev_cfg_configure_software_devices;
    
    // [PiDevCfgConvertPropertyFromValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63b1bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71856c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x956274, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ffcc, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) dev_cfg_convert_property_from_value;
    
    // [PiDevCfgCopyDeviceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63b44c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74cbdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7340b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75481c, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) dev_cfg_copy_device_key;
    
    // [PiDevCfgCopyDeviceKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74cacc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x734ebc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75470c, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) dev_cfg_copy_device_keys;
    
    // [PiDevCfgCopyObjectProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749448, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x803e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750d08, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) dev_cfg_copy_object_properties;
    
    // [PiDevCfgCopyVariableData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c404, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a3164, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x672e4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a1914, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) dev_cfg_copy_variable_data;
    
    // [PiDevCfgEmptyString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec080, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980338, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63de8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec18, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) dev_cfg_empty_string;
    
    // [PiDevCfgEnforceDevicePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c4d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x752998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75a258, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) dev_cfg_enforce_device_policy;
    
    // [PiDevCfgEnumDeviceKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63c918, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8037f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750948, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) dev_cfg_enum_device_keys;
    
    // [PiDevCfgFindDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63cc84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718de8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x800648, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720c10, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) dev_cfg_find_device_driver;
    
    // [PiDevCfgFindDeviceMigrationNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63d4d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a3244, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95653c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a19f4, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) dev_cfg_find_device_migration_node;
    
    // [PiDevCfgFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a060, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b044, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51030, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b044, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) dev_cfg_flags;
    
    // [PiDevCfgFreeDeviceContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72cd4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f8324, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734b6c, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) dev_cfg_free_device_context;
    
    // [PiDevCfgFreeDeviceMigrationNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63de44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a3c18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x956f10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a23c8, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) dev_cfg_free_device_migration_node;
    
    // [PiDevCfgFreeDriverNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63decc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72cd9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f8374, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734bbc, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) dev_cfg_free_driver_node;
    
    // [PiDevCfgFreeMigrationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e04c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751c18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e09f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759858, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) dev_cfg_free_migration_context;
    
    // [PiDevCfgFreeResolveContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e0a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x748d4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x803dbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75060c, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) dev_cfg_free_resolve_context;
    
    // [PiDevCfgGetDriverConfigurationKeyScope]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d13e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5080a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54e488, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507e68, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) dev_cfg_get_driver_configuration_key_scope;
    
    // [PiDevCfgGetDriverPackageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7192c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x801d3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7210f0, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) dev_cfg_get_driver_package_id;
    
    // [PiDevCfgGetFailedInstallProblemStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e274, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a3ca8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea2d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a2458, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) dev_cfg_get_failed_install_problem_status;
    
    // [PiDevCfgGetKeySecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e33c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x719460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x734fcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x721288, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) dev_cfg_get_key_security_descriptor;
    
    // [PiDevCfgGetMigrationDeviceIdScore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1458, 0x32828 bytes
    // ntoskrnl.exe .text:0x50811c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54e4fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507edc, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) dev_cfg_get_migration_device_id_score;
    
    // [PiDevCfgInitDeviceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e4fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a3d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x956fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a2530, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) dev_cfg_init_device_callback;
    
    // [PiDevCfgInitDeviceContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e2b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7feec4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7360d8, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) dev_cfg_init_device_context;
    
    // [PiDevCfgInitMigrationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e7bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751c38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759878, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) dev_cfg_init_migration_context;
    
    // [PiDevCfgInitResolveContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63e9c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7492dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x803460, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750b9c, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) dev_cfg_init_resolve_context;
    
    // [PiDevCfgLogDeviceConfigured]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63eaac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72d1b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ffb3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734fd8, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) dev_cfg_log_device_configured;
    
    // [PiDevCfgLogDeviceMigrated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63f308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a4154, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x957378, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a2904, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) dev_cfg_log_device_migrated;
    
    // [PiDevCfgLogDeviceStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63f3c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72cefc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ff81c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734d1c, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) dev_cfg_log_device_started;
    
    // [PiDevCfgMakeServiceBootStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63f7f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a4234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95746c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a29e4, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) dev_cfg_make_service_boot_start;
    
    // [PiDevCfgMatchDriverConfigurationId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d15e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5082cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x203844, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50808c, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) dev_cfg_match_driver_configuration_id;
    
    // [PiDevCfgMigrateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63fa10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751b3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0834, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75977c, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) dev_cfg_migrate_device;
    
    // [PiDevCfgMigrateRootDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63fef8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a445c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x957694, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a2c0c, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) dev_cfg_migrate_root_device;
    
    // [PiDevCfgMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a05c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b068, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51050, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b068, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) dev_cfg_mode;
    
    // [PiDevCfgNullDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec1c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9804c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63f78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97eda8, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) dev_cfg_null_driver;
    
    // [PiDevCfgNullGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec2f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9805f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa640c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97eed8, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) dev_cfg_null_guid;
    
    // [PiDevCfgNullSid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f580, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) dev_cfg_null_sid;
    
    // [PiDevCfgOpenDeviceMigrationKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6400e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a4550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x957788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a2d00, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) dev_cfg_open_device_migration_key;
    
    // [PiDevCfgOpenDriverConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6401f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75321c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x801e14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75aadc, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) dev_cfg_open_driver_configuration;
    
    // [PiDevCfgOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0f0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0c0, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) dev_cfg_options;
    
    // [PiDevCfgParseInterfaceKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1680, 0x32828 bytes
    // ntoskrnl.exe .text:0x50836c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204fac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50812c, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) dev_cfg_parse_interface_key_name;
    
    // [PiDevCfgParsePropertyKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1718, 0x32828 bytes
    // ntoskrnl.exe .text:0x368bd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369f88, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) dev_cfg_parse_property_key_name;
    
    // [PiDevCfgParseVariableName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d183c, 0x32828 bytes
    // ntoskrnl.exe .text:0x38f85c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38fb94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3908ac, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) dev_cfg_parse_variable_name;
    
    // [PiDevCfgPopCopyKeyEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d18dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x378454, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fbb1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3797d4, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) dev_cfg_pop_copy_key_entry;
    
    // [PiDevCfgProcessDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6402d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c748, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fe590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734568, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) dev_cfg_process_device;
    
    // [PiDevCfgProcessDeviceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561bf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79fca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x850770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a7ec0, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) dev_cfg_process_device_callback;
    
    // [PiDevCfgPushCopyKeyEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1984, 0x32828 bytes
    // ntoskrnl.exe .text:0x3784b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fbb7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379834, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) dev_cfg_push_copy_key_entry;
    
    // [PiDevCfgPushDriverNodeEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1ac4, 0x32828 bytes
    // ntoskrnl.exe .text:0x508404, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54e6ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5081c4, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) dev_cfg_push_driver_node_entry;
    
    // [PiDevCfgQueryDeviceMigrationNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x640b94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a4674, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9578b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a2e24, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) dev_cfg_query_device_migration_node;
    
    // [PiDevCfgQueryDriverConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x640f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74f110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ff028, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x756d50, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) dev_cfg_query_driver_configuration;
    
    // [PiDevCfgQueryDriverNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6413dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7199a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8013a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7217c8, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) dev_cfg_query_driver_node;
    
    // [PiDevCfgQueryDriverVersionValueCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x641b14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a4a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x957c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a3210, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) dev_cfg_query_driver_version_value_callback;
    
    // [PiDevCfgQueryIncludedDriverConfigurations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x641b38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74f538, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ff498, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x757178, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) dev_cfg_query_included_driver_configurations;
    
    // [PiDevCfgQueryIncludedDriverNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x641e7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a4a88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x957cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a3238, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) dev_cfg_query_included_driver_node;
    
    // [PiDevCfgQueryObjectProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56b20c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x719ff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8019d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x721e18, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) dev_cfg_query_object_properties;
    
    // [PiDevCfgQueryPolicyEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x642310, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a4f14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x958128, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a36c4, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) dev_cfg_query_policy_enabled;
    
    // [PiDevCfgQueryPolicyStringList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64237c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a4f84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x958198, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a3734, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) dev_cfg_query_policy_string_list;
    
    // [PiDevCfgQueryResolveValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1b2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x508474, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54e720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x508234, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) dev_cfg_query_resolve_value;
    
    // [PiDevCfgRequestDriverConfigurations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x642684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a52ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9584b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a3a5c, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) dev_cfg_request_driver_configurations;
    
    // [PiDevCfgResetDeviceDriverSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6427bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x714380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6724b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71bdcc, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) dev_cfg_reset_device_driver_settings;
    
    // [PiDevCfgResetDeviceKeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x642b2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a5400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6782f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a3bb0, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) dev_cfg_reset_device_key_callback;
    
    // [PiDevCfgResetDeviceKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x642b98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x714674, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x672774, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71c0c0, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) dev_cfg_reset_device_keys;
    
    // [PiDevCfgResolveMultiSzValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x643164, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e69c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fe228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7660ec, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) dev_cfg_resolve_multi_sz_value;
    
    // [PiDevCfgResolveVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6434f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75e8d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80253c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x766320, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) dev_cfg_resolve_variable;
    
    // [PiDevCfgResolveVariableConstant]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64389c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a5480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6745f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a3c30, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) dev_cfg_resolve_variable_constant;
    
    // [PiDevCfgResolveVariableDeviceProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x643964, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75f1f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x766c40, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) dev_cfg_resolve_variable_device_property;
    
    // [PiDevCfgResolveVariableExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x643d44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a5550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x672860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a3d00, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) dev_cfg_resolve_variable_expression;
    
    // [PiDevCfgResolveVariableFormatString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x644ec4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a67c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x958600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a4f70, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) dev_cfg_resolve_variable_format_string;
    
    // [PiDevCfgResolveVariableGenerateGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6453e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a6cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x958b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a54a0, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) dev_cfg_resolve_variable_generate_guid;
    
    // [PiDevCfgResolveVariableKeyCopy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6454d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a6df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x958c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a55a0, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) dev_cfg_resolve_variable_key_copy;
    
    // [PiDevCfgResolveVariableKeyHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6455b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a6ecc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674404, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a567c, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) dev_cfg_resolve_variable_key_handle;
    
    // [PiDevCfgResolveVariableKeyValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x645d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a76a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a5e50, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) dev_cfg_resolve_variable_key_value;
    
    // [PiDevCfgResolveVariableSwitchCase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x645f30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a7880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x958d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a6030, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) dev_cfg_resolve_variable_switch_case;
    
    // [PiDevCfgSetDeviceRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x646114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e178, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fed74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x735f98, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) dev_cfg_set_device_reg_prop;
    
    // [PiDevCfgSetObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x646160, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7223ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72c240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72a1cc, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) dev_cfg_set_object_property;
    
    // [PiDevCfgSystem32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecbc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9810f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f9d8, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) dev_cfg_system32;
    
    // [PiDevCfgSystemRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec758, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f3c0, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) dev_cfg_system_root;
    
    // [PiDevCfgVerifyDeviceAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6461e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75f688, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x802dd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7670d8, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) dev_cfg_verify_device_allowed;
    
    // [PiDevCfgVerifyService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6462f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75efe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fe0b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x766a30, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) dev_cfg_verify_service;
    
    // [PiDeviceDependencyInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a94e8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4c230, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb431c4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4c0b4, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) device_dependency_init;
    
    // [PiDeviceRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42dcf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728b9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x735bf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7309bc, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) device_registration;
    
    // [PiDmAddCacheReferenceForObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x447c58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x725d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x718abc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72db30, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) dm_add_cache_reference_for_object;
    
    // [PiDmAggregatedBooleanDefs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x257790, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1370, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2450, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1a20, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) dm_aggregated_boolean_defs;
    
    // [PiDmAllocateGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5635f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x752240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759e80, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) dm_allocate_generic_table_entry;
    
    // [PiDmCacheDataDecode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8fac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df54c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a8d7c, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) dm_cache_data_decode;
    
    // [PiDmCacheDataEncode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4489a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7271d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7294a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72eff0, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) dm_cache_data_encode;
    
    // [PiDmCacheDataFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448978, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727184, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71ccd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72efa4, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) dm_cache_data_free;
    
    // [PiDmCachedDeviceContainerKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x257070, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1f70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1940, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1050, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) dm_cached_device_container_keys;
    
    // [PiDmCachedDeviceInterfaceKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x257838, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1510, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x25f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1bc0, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) dm_cached_device_interface_keys;
    
    // [PiDmCachedDeviceKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2576b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1420, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2500, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1ad0, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) dm_cached_device_keys;
    
    // [PiDmCmObjectMatchCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442710, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65f670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aecd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3200, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) dm_cm_object_match_callback;
    
    // [PiDmCompareObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440c90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64c0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a1880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6be8b0, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) dm_compare_objects;
    
    // [PiDmDeviceContainerManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31fc60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43b80, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) dm_device_container_manager;
    
    // [PiDmDeviceInstallerClassManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31fd40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43ca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b7a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43e20, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) dm_device_installer_class_manager;
    
    // [PiDmDeviceInterfaceClassManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31fb80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43e60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43aa0, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) dm_device_interface_class_manager;
    
    // [PiDmDeviceInterfaceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31faa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43bc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ba40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43d40, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) dm_device_interface_manager;
    
    // [PiDmDeviceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f9c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43ae0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b6c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43c60, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) dm_device_manager;
    
    // [PiDmEnumObjectsWithCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442d4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d6c68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7acdd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a6a38, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) dm_enum_objects_with_callback;
    
    // [PiDmFreeGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634a84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7203e0, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) dm_free_generic_table_entry;
    
    // [PiDmGetCacheKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441030, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8b1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dcf3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a88ec, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) dm_get_cache_keys;
    
    // [PiDmGetCachedKeyIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441080, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8b6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dd350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a893c, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) dm_get_cached_key_index;
    
    // [PiDmGetCmObjectConstraintListFromCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4477b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4ff4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac80c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2cc0, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) dm_get_cm_object_constraint_list_from_cache;
    
    // [PiDmGetCmObjectListFromCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49eed0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac99c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e98d4, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) dm_get_cm_object_list_from_cache;
    
    // [PiDmGetObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440bb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d85ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc5e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a83bc, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) dm_get_object;
    
    // [PiDmGetObjectConstraintList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x447838, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e5088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac8a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2d54, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) dm_get_object_constraint_list;
    
    // [PiDmGetObjectCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634a94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a08cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9545e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f07c, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) dm_get_object_count;
    
    // [PiDmGetObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49ef18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6766b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac9f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9928, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) dm_get_object_list;
    
    // [PiDmGetObjectListCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44266c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dee00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ab460, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) dm_get_object_list_callback;
    
    // [PiDmGetObjectManagerForObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440eb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db414, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a86e0, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) dm_get_object_manager_for_object_type;
    
    // [PiDmGetReferencedObjectFromProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2b08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72f150, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) dm_get_referenced_object_from_property;
    
    // [PiDmInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79a968, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa49b48, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42ce8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa499cc, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) dm_init;
    
    // [PiDmInitializeComparisonObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440ce8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8724, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6da490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a84f4, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) dm_initialize_comparison_object;
    
    // [PiDmListAddList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634adc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751d1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e29c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75995c, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) dm_list_add_list;
    
    // [PiDmListAddObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x447934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x725a68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72a02c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72d888, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) dm_list_add_object;
    
    // [PiDmListAddObjectWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x447a2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x725b34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72a0e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72d954, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) dm_list_add_object_worker;
    
    // [PiDmListDefs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25c1c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x7220, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x8370, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x72a0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) dm_list_defs;
    
    // [PiDmListEnumObjectsWithCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442514, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d7350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a7120, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) dm_list_enum_objects_with_callback;
    
    // [PiDmListInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558228, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77fc64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838ff8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789a04, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) dm_list_init;
    
    // [PiDmListInitEnumCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53db28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83d720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77d990, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) dm_list_init_enum_callback;
    
    // [PiDmListRemoveList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634cd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71488c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674ae0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71c2d8, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) dm_list_remove_list;
    
    // [PiDmListRemoveObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634ec4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7149b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674bec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71c3fc, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) dm_list_remove_object;
    
    // [PiDmListRemoveObjectWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634fb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x714a7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674ca8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71c4c8, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) dm_list_remove_object_worker;
    
    // [PiDmListUpdateAggregationCountWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a4fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x725c18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72a1c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72da38, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) dm_list_update_aggregation_count_worker;
    
    // [PiDmLookupObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x447bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d867c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a844c, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) dm_lookup_object;
    
    // [PiDmObjectCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5583b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x726618, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x729074, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72e438, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) dm_object_create;
    
    // [PiDmObjectGetAggregatedBooleanPropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440864, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d82d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dcb1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a80a4, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) dm_object_get_aggregated_boolean_property_data;
    
    // [PiDmObjectGetCachedCmProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43fda8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d7d0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e0abc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a7adc, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) dm_object_get_cached_cm_property;
    
    // [PiDmObjectGetCachedObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4409f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dcca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a8230, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) dm_object_get_cached_object_property;
    
    // [PiDmObjectGetCachedObjectPropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440f04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8a04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dce2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a87d4, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) dm_object_get_cached_object_property_data;
    
    // [PiDmObjectGetCachedObjectReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49269c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66bec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2c48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de990, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) dm_object_get_cached_object_reference;
    
    // [PiDmObjectIsEnumerable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442cdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d92ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7acf94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a907c, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) dm_object_is_enumerable;
    
    // [PiDmObjectManagerInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5587a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77fe00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8391a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789ba0, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) dm_object_manager_init;
    
    // [PiDmObjectManagerPopulate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55827c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77fcc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839054, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789a60, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) dm_object_manager_populate;
    
    // [PiDmObjectProcessPropertyChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x446df4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x726d54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x718da8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72eb74, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) dm_object_process_property_change;
    
    // [PiDmObjectRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440b70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db918, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a8740, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) dm_object_release;
    
    // [PiDmObjectUpdateCachedCmProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441fb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d7e5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e0c04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a7c2c, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) dm_object_update_cached_cm_property;
    
    // [PiDmObjectUpdateCachedObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44182c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8bcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df2e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a899c, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) dm_object_update_cached_object_property;
    
    // [PiDmPnpObjectMatchCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6350a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f0e0, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) dm_pnp_object_match_callback;
    
    // [PiDmRemoveCacheReferenceForObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x447b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7259b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x729f8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72d7d8, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) dm_remove_cache_reference_for_object;
    
    // [PiDqActionDataCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504374, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d1370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71d370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a113c, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) dq_action_data_create;
    
    // [PiDqActionDataFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50451c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d1518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71d624, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a12e4, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) dq_action_data_free;
    
    // [PiDqActionDataGetAllPropertiesInAllLanguages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63614c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848238, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89fe40, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) dq_action_data_get_all_properties_in_all_languages;
    
    // [PiDqActionDataGetAllPropertiesInBestLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6363d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95513c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a00d0, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) dq_action_data_get_all_properties_in_best_language;
    
    // [PiDqActionDataGetChangedProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49ff90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754224, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc1ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75bae4, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) dq_action_data_get_changed_properties;
    
    // [PiDqActionDataGetRequestedProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5049a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d178c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71cd18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a1558, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) dq_action_data_get_requested_properties;
    
    // [PiDqAllocateGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f3d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea940, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) dq_allocate_generic_table_entry;
    
    // [PiDqCompareAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x446150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e47b0, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) dq_compare_addresses;
    
    // [PiDqConvertObjectTypeToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x636528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1a80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x955298, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a0230, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) dq_convert_object_type_to_string;
    
    // [PiDqConvertQueryFlagsToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6365c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1b48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x955360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a02f8, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) dq_convert_query_flags_to_string;
    
    // [PiDqDeleteUserObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x636748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x711bf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x670b60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x719588, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) dq_delete_user_object;
    
    // [PiDqDeleteUserObjectFromLoadedHives]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63681c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x711ab4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x670a1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x719444, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) dq_delete_user_object_from_loaded_hives;
    
    // [PiDqDeviceContainerManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f740, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43560, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b040, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43920, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) dq_device_container_manager;
    
    // [PiDqDeviceInstallerClassManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f840, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43620, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) dq_device_installer_class_manager;
    
    // [PiDqDeviceInterfaceClassManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f640, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43460, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43820, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) dq_device_interface_class_manager;
    
    // [PiDqDeviceInterfaceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f540, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43760, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43520, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) dq_device_interface_manager;
    
    // [PiDqDeviceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f440, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43660, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43420, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) dq_device_manager;
    
    // [PiDqDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x503794, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d03d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71db60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a0380, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) dq_dispatch;
    
    // [PiDqEnumQueryObjectsCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43af24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d56d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x719290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a54a0, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) dq_enum_query_objects_callback;
    
    // [PiDqFreeGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2b94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb7e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec380, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) dq_free_generic_table_entry;
    
    // [PiDqGetObjectManagerForPnpObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492148, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x747e74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c208c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f734, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) dq_get_object_manager_for_pnp_object_type;
    
    // [PiDqGetPnpObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444048, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d0f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7176f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ab6c0, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) dq_get_pnp_object_type;
    
    // [PiDqGetRelativeObjectRegPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x636954, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cfac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d343c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x680398, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) dq_get_relative_object_reg_path;
    
    // [PiDqGrowPropertyArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0174, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754524, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75bde4, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) dq_grow_property_array;
    
    // [PiDqInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a537c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4a978, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb43140, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4a7fc, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) dq_init;
    
    // [PiDqIrpCancel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1018, 0x32828 bytes
    // ntoskrnl.exe .text:0x507e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54e260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507c50, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) dq_irp_cancel;
    
    // [PiDqIrpComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504d00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d06d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71de50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a07e0, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) dq_irp_complete;
    
    // [PiDqIrpPropertySet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x636a94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6721d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711c80, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) dq_irp_property_set;
    
    // [PiDqIrpQueryCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x503a1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d073c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71d678, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a084c, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) dq_irp_query_create;
    
    // [PiDqIrpQueryGetResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x503198, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cf1e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cad2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69f724, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) dq_irp_query_get_result;
    
    // [PiDqObjectActionQueueEntryCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x747ecc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c21e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f78c, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) dq_object_action_queue_entry_create;
    
    // [PiDqObjectManagerEnumerateAndRegisterQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5033b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cff84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aca88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69ff2c, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) dq_object_manager_enumerate_and_register_query;
    
    // [PiDqObjectManagerHandleObjectEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492064, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x747d68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c20e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f628, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) dq_object_manager_handle_object_event;
    
    // [PiDqObjectManagerInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ce48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77fff4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839af0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789d94, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) dq_object_manager_init;
    
    // [PiDqObjectManagerMakeInconsistent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x636e34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9554e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a0480, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) dq_object_manager_make_inconsistent;
    
    // [PiDqObjectManagerServiceActionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x503c88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7435a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71e450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74b1e0, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) dq_object_manager_service_action_queue;
    
    // [PiDqObjectManagerUnregisterQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50510c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cfd2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d91a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69fcd4, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) dq_object_manager_unregister_query;
    
    // [PiDqOpenObjectRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x636eb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cf794, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d312c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67fef8, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) dq_open_object_reg_key;
    
    // [PiDqOpenUserObjectRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x636f40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cf814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d31ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6800e4, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) dq_open_user_object_reg_key;
    
    // [PiDqPnPGetObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x443640, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d9b14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71578c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a98e4, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) dq_pn_p_get_object_property;
    
    // [PiDqPnPGetObjectPropertyInBestLocale]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d1984, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71cad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a1750, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) dq_pn_p_get_object_property_in_best_locale;
    
    // [PiDqPnPGetObjectPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x637254, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1d58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8489b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a0508, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) dq_pn_p_get_object_property_keys;
    
    // [PiDqPnPGetObjectPropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63737c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1ea4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848424, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a0654, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) dq_pn_p_get_object_property_locales;
    
    // [PiDqPropertyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x443e28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d0dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ab510, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) dq_property_callback;
    
    // [PiDqQueryActionQueueEntryCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504f08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d0340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71cf08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a02e8, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) dq_query_action_queue_entry_create;
    
    // [PiDqQueryActionQueueEntryFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d132c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71d5e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a10f8, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) dq_query_action_queue_entry_free;
    
    // [PiDqQueryAddObjectToResultSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499098, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6734e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0fa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6ac8, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) dq_query_add_object_to_result_set;
    
    // [PiDqQueryAppendActionEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504ec0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d02f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71cf98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a0298, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) dq_query_append_action_entry;
    
    // [PiDqQueryApplyObjectEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504568, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x743944, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71e820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74b584, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) dq_query_apply_object_event;
    
    // [PiDqQueryCompletePendedIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1520, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x743ec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7caca4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74bb04, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) dq_query_complete_pended_irp;
    
    // [PiDqQueryConstraintData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2584a0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1020, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5680, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x16d0, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) dq_query_constraint_data;
    
    // [PiDqQueryCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504c30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d05f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71dd8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a05a8, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) dq_query_create;
    
    // [PiDqQueryDeleteObjectFromResultSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502aec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cf760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69fca0, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) dq_query_delete_object_from_result_set;
    
    // [PiDqQueryEnumObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43af38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d56f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7192b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a54c4, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) dq_query_enum_object;
    
    // [PiDqQueryEvaluateFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d52e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x718194, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a50ac, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) dq_query_evaluate_filter;
    
    // [PiDqQueryFreeActiveData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5050a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cfe1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7217c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69fdc4, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) dq_query_free_active_data;
    
    // [PiDqQueryGetNextIoctlInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504fc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cfe88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb024, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69fe30, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) dq_query_get_next_ioctl_info;
    
    // [PiDqQueryGetObjectManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504f8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cff40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6f3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69fee8, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) dq_query_get_object_manager;
    
    // [PiDqQueryLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5042d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x955578, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a0760, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) dq_query_lock;
    
    // [PiDqQueryRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504bbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cfda0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71edc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69fd48, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) dq_query_release;
    
    // [PiDqQuerySerializeActionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x503fc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d0fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71cfec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a0d7c, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) dq_query_serialize_action_queue;
    
    // [PiDqQueryUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a1fdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9555a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a078c, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) dq_query_unlock;
    
    // [PiDqQueryValidateQueryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504d68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d0a88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71da00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a0680, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) dq_query_validate_query_data;
    
    // [PiDqSameUserHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x637480, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a2008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9555d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a07b8, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) dq_same_user_hive;
    
    // [PiDqSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f930, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43850, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b430, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43a10, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) dq_sequence_number;
    
    // [PiDqSerializationAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4951dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d1500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3da0, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) dq_serialization_alloc;
    
    // [PiDqSerializationWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x493fbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66fde0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cfa60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3540, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) dq_serialization_write;
    
    // [PiDrvDbCreateNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x547070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78084c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83a8c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78a5ec, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) drv_db_create_node;
    
    // [PiDrvDbCtx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341ec0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4208, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ad8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4208, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) drv_db_ctx;
    
    // [PiDrvDbDestroyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x651d88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b3134, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9645e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b18e4, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) drv_db_destroy_node;
    
    // [PiDrvDbInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546ea0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78038c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839fac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78a12c, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) drv_db_init;
    
    // [PiDrvDbLoadHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435348, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709d04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81795c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711754, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) drv_db_load_hive;
    
    // [PiDrvDbLoadNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43bfd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68f644, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1ef4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ee7e4, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) drv_db_load_node;
    
    // [PiDrvDbLoadNodeWorkerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435a1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8176c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711470, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) drv_db_load_node_worker_callback;
    
    // [PiDrvDbNodeActionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43c424, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68f5e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ee780, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) drv_db_node_action_callback;
    
    // [PiDrvDbNodeDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25c770, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x82c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x8fa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x82b0, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) drv_db_node_descriptors;
    
    // [PiDrvDbNodeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f030, 0x32828 bytes
    // ntoskrnl.exe .data:0xc42fd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ab90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42f90, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) drv_db_node_list;
    
    // [PiDrvDbRegisterNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546f7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7806f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83a324, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78a498, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) drv_db_register_node;
    
    // [PiDrvDbUnloadNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43bf28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68f52c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1e44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ee948, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) drv_db_unload_node;
    
    // [PiDrvDbUnloadNodeDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd398c, 0x32828 bytes
    // ntoskrnl.exe .text:0x270680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3849d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321e70, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) drv_db_unload_node_dpc_routine;
    
    // [PiDrvDbUnloadNodeReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e634, 0x32828 bytes
    // ntoskrnl.exe .text:0x360df8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3827ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362238, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) drv_db_unload_node_reset;
    
    // [PiDrvDbUnloadNodeWaitWorkerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e4d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x360c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e3d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3620b0, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) drv_db_unload_node_wait_worker_callback;
    
    // [PiDrvDbUnloadNodeWorkerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435bec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7113a0, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) drv_db_unload_node_worker_callback;
    
    // [PiEngineLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320960, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44b80, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) engine_lock;
    
    // [PiEnumerateDependentListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62fefc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ad38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8476b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8994e8, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) enumerate_dependent_list_entry;
    
    // [PiEnumerateProviderListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62ff28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ad6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8476e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89951c, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) enumerate_provider_list_entry;
    
    // [PiEventAllocateVetoBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c348, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732aa0, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) event_allocate_veto_buffer;
    
    // [PiEventBuildPdoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42fd0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72adec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fba8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732e74, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) event_build_pdo_list;
    
    // [PiEventRemovalPostSurpriseRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42dba8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756268, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb098, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75dcb8, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) event_removal_post_surprise_remove;
    
    // [PiFindDevInstMatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x529878, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71cee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7364b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x724d04, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) find_dev_inst_match;
    
    // [PiForEachDriverQueryRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528f8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729054, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7360b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730e74, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) for_each_driver_query_routine;
    
    // [PiGetDefaultMessageString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x564fd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74ddf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a984c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x755a34, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) get_default_message_string;
    
    // [PiGetDependentList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f651c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7304b0, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) get_dependent_list;
    
    // [PiGetDeviceDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4d00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x605060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7330, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) get_device_depth;
    
    // [PiGetDeviceRegProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43b56c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e1608, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6af418, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) get_device_reg_property;
    
    // [PiGetDeviceRegistryProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62f748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b958, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94f5c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89a108, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) get_device_registry_property;
    
    // [PiGetProviderList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5eb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71ea18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f64f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x726838, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) get_provider_list;
    
    // [PiGetRelatedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4b20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604204, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5498, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70faf4, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) get_related_device;
    
    // [PiHotSwapGetDefaultBusRemovalPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d984, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750de4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dbbb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758a24, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) hot_swap_get_default_bus_removal_policy;
    
    // [PiHotSwapGetDetachableNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d968, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750dc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dbb98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758a04, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) hot_swap_get_detachable_node;
    
    // [PiInitCacheGroupInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79affc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa55f74, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb44198, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa55e14, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) init_cache_group_information;
    
    // [PiInitFirmwareResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9948, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa49848, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42484, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa496cc, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) init_firmware_resources;
    
    // [PiInitGroupOrderTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327140, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50ae8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50ae8, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) init_group_order_table;
    
    // [PiInitGroupOrderTableCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32713c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50af0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50ae4, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) init_group_order_table_count;
    
    // [PiInitReleaseCachedGroupInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560098, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e29c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x851028, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a591c, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) init_release_cached_group_information;
    
    // [PiInitializeDDBCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a998c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4b9e4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42fd0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4b868, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) initialize_ddb_cache;
    
    // [PiInitializeDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64fca4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b10ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9627a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8af85c, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) initialize_device;
    
    // [PiIrpQueryRemoveDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64f0d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71806c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x675534, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71facc, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) irp_query_remove_device;
    
    // [PiIsDriverBlocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fee74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x761834, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7830cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768ad4, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) is_driver_blocked;
    
    // [PiLastGoodCopyKeyContents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a50d8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6bb84, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5a864, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b47c, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) last_good_copy_key_contents;
    
    // [PiLastGoodRevertCopyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bbcec, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8f350, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb805a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8e5d0, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) last_good_revert_copy_callback;
    
    // [PiLastGoodRevertLastKnownDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bbda8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8f420, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb80670, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8e6a0, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) last_good_revert_last_known_directory;
    
    // [PiListEntryToDependencyEdge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf9d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5064c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd384, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506288, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) list_entry_to_dependency_edge;
    
    // [PiLoggedErrorEventsMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab34, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53444, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6a4, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) logged_error_events_mask;
    
    // [PiLookupInDDB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fec70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76172c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x782fc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7689cc, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) lookup_in_ddb;
    
    // [PiLookupInDDBCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4feb50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71ad74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x782e88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x722b94, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) lookup_in_ddb_cache;
    
    // [PiMarkDeviceTreeForReenumeration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4320a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729838, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f65fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731658, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) mark_device_tree_for_reenumeration;
    
    // [PiMarkDeviceTreeForReenumerationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43223c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8160b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76b4d0, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) mark_device_tree_for_reenumeration_worker;
    
    // [PiNormalDDBPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec5d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9808d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa644a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f1b0, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) normal_ddb_path;
    
    // [PiNormalizeDeviceText]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49a980, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74da10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a9450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x755650, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) normalize_device_text;
    
    // [PiPagePathSetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56da48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7abc40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b35c0, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) page_path_set_state;
    
    // [PiPnpAddDeviceToPdoDeviceListEnumContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43218c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea000, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) pnp_add_device_to_pdo_device_list_enum_context;
    
    // [PiPnpFreePdoDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x607558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dcf38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e31e8, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) pnp_free_pdo_device_list;
    
    // [PiPnpPdoDeviceListEnumCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432154, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9fc0, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) pnp_pdo_device_list_enum_callback;
    
    // [PiPnpRtlActiveOperations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31ff10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44110, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5bc00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43fe0, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) pnp_rtl_active_operations;
    
    // [PiPnpRtlActiveOperationsLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31fea0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc440a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5bc20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44080, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) pnp_rtl_active_operations_lock;
    
    // [PiPnpRtlApplyMandatoryDeviceContainerFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fd70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675bb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e628c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8dc8, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) pnp_rtl_apply_mandatory_device_container_filters;
    
    // [PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a26fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea6d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec1d0, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) pnp_rtl_apply_mandatory_device_container_filters_callback;
    
    // [PiPnpRtlApplyMandatoryDeviceFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43bb00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5d5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70fba4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5b2c, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) pnp_rtl_apply_mandatory_device_filters;
    
    // [PiPnpRtlApplyMandatoryDeviceInterfaceFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43ba24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5c98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72ea94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5a68, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) pnp_rtl_apply_mandatory_device_interface_filters;
    
    // [PiPnpRtlApplyMandatoryFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43bc54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5eb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70fd4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5c88, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) pnp_rtl_apply_mandatory_filters;
    
    // [PiPnpRtlBeginOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x443198, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d6204, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x718744, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5fd4, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) pnp_rtl_begin_operation;
    
    // [PiPnpRtlCacheObjectBaseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4414f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8dec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a8bbc, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) pnp_rtl_cache_object_base_key;
    
    // [PiPnpRtlCmActionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43eb74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d74a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e0260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a7270, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) pnp_rtl_cm_action_callback;
    
    // [PiPnpRtlCtx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341eb8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ad0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4200, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) pnp_rtl_ctx;
    
    // [PiPnpRtlDeviceReadOnlyProps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25be30, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x7ae0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x7c80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x7ac0, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) pnp_rtl_device_read_only_props;
    
    // [PiPnpRtlEndOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5a98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71888c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5868, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) pnp_rtl_end_operation;
    
    // [PiPnpRtlEnsureObjectCached]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633bb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a05bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89ed6c, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) pnp_rtl_ensure_object_cached;
    
    // [PiPnpRtlEnumeratorFilterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e39f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72ec70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b10f0, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) pnp_rtl_enumerator_filter_callback;
    
    // [PiPnpRtlFreeContainerRemoveInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633d54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718854, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678f08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7202b4, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) pnp_rtl_free_container_remove_info;
    
    // [PiPnpRtlFreeInstallerClassChangeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633da8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754edc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7ed8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c92c, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) pnp_rtl_free_installer_class_change_info;
    
    // [PiPnpRtlFreeInterfaceDeleteInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633e04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678da8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720170, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) pnp_rtl_free_interface_delete_info;
    
    // [PiPnpRtlGatherContainerRemoveInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633e5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7184c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678c14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ff24, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) pnp_rtl_gather_container_remove_info;
    
    // [PiPnpRtlGatherDeviceDeleteInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633f10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7182d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678764, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71fd30, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) pnp_rtl_gather_device_delete_info;
    
    // [PiPnpRtlGatherInstallerClassChangeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63401c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7295ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8023bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73140c, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) pnp_rtl_gather_installer_class_change_info;
    
    // [PiPnpRtlGatherInterfaceDeleteInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716b84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677b54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e5c4, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) pnp_rtl_gather_interface_delete_info;
    
    // [PiPnpRtlGetCurrentOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4415f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d8efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6df240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a8ccc, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) pnp_rtl_get_current_operation;
    
    // [PiPnpRtlGetDeviceInterfaceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43cd70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65d1f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae400, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1420, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) pnp_rtl_get_device_interface_enabled;
    
    // [PiPnpRtlGetDeviceNtPropertyRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x436b90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5680, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) pnp_rtl_get_device_nt_property_routine;
    
    // [PiPnpRtlGetDeviceRelatedDeviceRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4363d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ce550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e1860, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) pnp_rtl_get_device_related_device_routine;
    
    // [PiPnpRtlGetDeviceRelationsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634430, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8600f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89efe0, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) pnp_rtl_get_device_relations_list;
    
    // [PiPnpRtlGetDeviceStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a5b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7b00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7b00, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) pnp_rtl_get_device_status;
    
    // [PiPnpRtlGetFilteredDeviceInterfaceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4476c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4ed4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac6f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2ba0, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) pnp_rtl_get_filtered_device_interface_list;
    
    // [PiPnpRtlGetFilteredDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x449814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4bb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac3dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2880, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) pnp_rtl_get_filtered_device_list;
    
    // [PiPnpRtlInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546d64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7801d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839dfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789f70, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) pnp_rtl_init;
    
    // [PiPnpRtlInitialUpdatedPropertyArraySize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec17c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x98046c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63f24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ed4c, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) pnp_rtl_initial_updated_property_array_size;
    
    // [PiPnpRtlInterfaceFilterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dc240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x714630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b07b0, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) pnp_rtl_interface_filter_callback;
    
    // [PiPnpRtlIsDeviceEnumerableForUser]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43be28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d60f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710058, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5ec0, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) pnp_rtl_is_device_enumerable_for_user;
    
    // [PiPnpRtlIsDeviceValidForSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43bb68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5dcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70fc14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5b9c, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) pnp_rtl_is_device_valid_for_session;
    
    // [PiPnpRtlObjectActionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4404e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d7f90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a7d60, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) pnp_rtl_object_action_callback;
    
    // [PiPnpRtlObjectEventCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x446dcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7268e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7182e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72e700, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) pnp_rtl_object_event_callback;
    
    // [PiPnpRtlObjectEventCompareObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x443914, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65f6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3240, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) pnp_rtl_object_event_compare_objects;
    
    // [PiPnpRtlObjectEventCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x443034, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d6e34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x718c18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a6c04, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) pnp_rtl_object_event_create;
    
    // [PiPnpRtlObjectEventDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4439ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x718a74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5820, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) pnp_rtl_object_event_dispatch;
    
    // [PiPnpRtlObjectEventRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x443894, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d5c08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7189ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a59d8, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) pnp_rtl_object_event_release;
    
    // [PiPnpRtlObjectEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x446164, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x726910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x718310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72e730, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) pnp_rtl_object_event_worker;
    
    // [PiPnpRtlOperationAllocateGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x443988, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66dbf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d16c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0ec0, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) pnp_rtl_operation_allocate_generic_table_entry;
    
    // [PiPnpRtlOperationFreeGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44399c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66dbd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d16a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0ea0, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) pnp_rtl_operation_free_generic_table_entry;
    
    // [PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561650, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6c0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731170, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) pnp_rtl_pdo_raise_nt_plug_play_property_change_event;
    
    // [PiPnpRtlRemoveOperationDispatchLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31fe20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44020, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5bca0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44000, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) pnp_rtl_remove_operation_dispatch_lock;
    
    // [PiPnpRtlServiceFilterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634468, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x740e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66e650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748a60, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) pnp_rtl_service_filter_callback;
    
    // [PiPnpRtlSetDeviceRegProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x634894, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e1c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fedc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x735fe4, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) pnp_rtl_set_device_reg_property;
    
    // [PiPnpRtlSetObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44a85c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72284c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72f014, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72a66c, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) pnp_rtl_set_object_property;
    
    // [PiProcessAddBootDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a89a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f9e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0328, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) process_add_boot_devices;
    
    // [PiProcessClearDeviceProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64e74c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x715508, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6746f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71cf48, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) process_clear_device_problem;
    
    // [PiProcessDriverInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x529060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71d130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x736140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x724f50, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) process_driver_instance;
    
    // [PiProcessNewDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x449bb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x721550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7305e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x729370, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) process_new_device_node;
    
    // [PiProcessQueryDeviceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4356ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x726344, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f45a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72e164, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) process_query_device_state;
    
    // [PiProcessReenumeration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431fc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729784, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7315a4, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) process_reenumeration;
    
    // [PiProcessRequeryDeviceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x535f1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7703d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f944, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x777e48, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) process_requery_device_state;
    
    // [PiProcessResourceRequirementsChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64e8c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89fb28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9537f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e2d8, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) process_resource_requirements_changed;
    
    // [PiProcessSetDeviceProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64ea08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x715324, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71cd64, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) process_set_device_problem;
    
    // [PiProcessStartSystemDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571144, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b577c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd33c, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) process_start_system_devices;
    
    // [PiProfileChangeCancelRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f3c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc433a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5afc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43360, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) profile_change_cancel_required;
    
    // [PiProfileChangeSemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f3a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43380, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5afa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43340, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) profile_change_semaphore;
    
    // [PiProfileDeviceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f350, 0x32828 bytes
    // ntoskrnl.exe .data:0xc433a4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5af54, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43364, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) profile_device_count;
    
    // [PiProfileDeviceListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f340, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43370, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5af40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43330, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) profile_device_list_head;
    
    // [PiProfileDeviceListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f360, 0x32828 bytes
    // ntoskrnl.exe .data:0xc433c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5af60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43380, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) profile_device_list_lock;
    
    // [PiProfileDevicesInTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f3c4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc433f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5af50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc433b8, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) profile_devices_in_transition;
    
    // [PiProfileUpdateDeviceTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x959fa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a6c20, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) profile_update_device_tree;
    
    // [PiProfileUpdateDeviceTreeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647160, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a84c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a6c70, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) profile_update_device_tree_callback;
    
    // [PiProfileUpdateDeviceTreeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647200, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a6d20, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) profile_update_device_tree_worker;
    
    // [PiQueryAndAllocateBootResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x433b70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73045c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7efa8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73846c, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) query_and_allocate_boot_resources;
    
    // [PiQueryDeviceRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6500b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b14bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x859b9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8afc6c, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) query_device_relations;
    
    // [PiQueryPowerDependencyRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5617f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729534, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731354, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) query_power_dependency_relations;
    
    // [PiQueryPowerRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f67b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730f70, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) query_power_relations;
    
    // [PiQueryRemovableDeviceOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4894cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x744380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ba128, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74bfc0, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) query_removable_device_override;
    
    // [PiQueryResourceRequirements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434400, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x730d64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f03a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x738d74, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) query_resource_requirements;
    
    // [PiQueueDeviceRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6502f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x713178, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71abc4, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) queue_device_request;
    
    // [PiRearrangeDeviceInstances]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650744, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764544, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e69a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76b7e4, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) rearrange_device_instances;
    
    // [PiRebalanceOptOut]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0d78, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a308, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55111c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a0c8, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) rebalance_opt_out;
    
    // [PiRebuildPowerRelationsQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321310, 0x32828 bytes
    // ntoskrnl.exe .data:0xc455a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d0b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc454d0, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) rebuild_power_relations_queue;
    
    // [PiResetProblemDevicesWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533a24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759bf0, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) reset_problem_devices_worker;
    
    // [PiResourceListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3209e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44be0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c820, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44b40, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) resource_list_lock;
    
    // [PiRestartDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64eb58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7179dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb2f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f41c, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) restart_device;
    
    // [PiSwAddPdoAssociation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x753bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd3c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b470, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) sw_add_pdo_association;
    
    // [PiSwAllocateGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3c54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e8c0, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) sw_allocate_generic_table_entry;
    
    // [PiSwBusName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e4d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa1a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10e18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb0e0, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) sw_bus_name;
    
    // [PiSwBusRelationAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74b6fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f9324, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75333c, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) sw_bus_relation_add;
    
    // [PiSwBusRelationRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3694, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6753c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e374, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) sw_bus_relation_remove;
    
    // [PiSwBusRelationsCompareInstancePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49efb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x753850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b110, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) sw_bus_relations_compare_instance_path;
    
    // [PiSwBusRelationsTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f240, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ae20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43200, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) sw_bus_relations_table;
    
    // [PiSwCloseDescendants]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430d0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72bdf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb9fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733e80, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) sw_close_descendants;
    
    // [PiSwCloseDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e210, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x675318, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7201d0, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) sw_close_device;
    
    // [PiSwCompleteCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432db0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74af48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f7c04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752b88, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) sw_complete_create;
    
    // [PiSwDestroyDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6751fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e3d8, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) sw_destroy_device_object;
    
    // [PiSwDeviceCompareObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a14a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6ea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75dd50, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) sw_device_compare_objects;
    
    // [PiSwDeviceCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43299c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74bc78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f9230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7538b8, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) sw_device_create;
    
    // [PiSwDeviceDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3710, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fa9e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753d98, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) sw_device_dereference;
    
    // [PiSwDeviceDriverObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f120, 0x32828 bytes
    // ntoskrnl.exe .data:0xc432c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aea0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43280, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) sw_device_driver_object;
    
    // [PiSwDeviceFindInterfaceEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431a2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c00c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f82ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753c4c, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) sw_device_find_interface_entry;
    
    // [PiSwDeviceFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3744, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6772b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f76c, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) sw_device_free;
    
    // [PiSwDeviceInstanceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f1c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc431c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ada0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43180, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) sw_device_instance_table;
    
    // [PiSwDeviceInterfaceSetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431a88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74adbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e5b6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7529fc, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) sw_device_interface_set_state;
    
    // [PiSwDeviceInterfacesUpdateState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432ce8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7565e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e030, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) sw_device_interfaces_update_state;
    
    // [PiSwDeviceMakeCompatibleIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43302c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75506c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f7a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75cabc, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) sw_device_make_compatible_ids;
    
    // [PiSwDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5029c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74b240, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f7fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752e80, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) sw_dispatch;
    
    // [PiSwDoesCreateChangesRequireReEnum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a75c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8abd4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d5d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa4fc, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) sw_does_create_changes_require_re_enum;
    
    // [PiSwFindBusRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434f04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x724144, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x735138, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72bf64, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) sw_find_bus_relations;
    
    // [PiSwFindChildren]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434ee4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72411c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x735110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72bf3c, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) sw_find_children;
    
    // [PiSwFindPdoAssociation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x753b68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd378, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b428, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) sw_find_pdo_association;
    
    // [PiSwFindSwDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430d3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72be2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fac18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733eb4, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) sw_find_sw_device;
    
    // [PiSwFreeGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3d24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678e80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720460, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) sw_free_generic_table_entry;
    
    // [PiSwFreeInterfaceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432ccc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74b1fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752e3c, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) sw_free_interface_list;
    
    // [PiSwGenericCompatibleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e508, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcad8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10e00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc428, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) sw_generic_compatible_id;
    
    // [PiSwGenericRawCompatibleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e4e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcab8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10de0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc408, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) sw_generic_raw_compatible_id;
    
    // [PiSwGetChildPdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3a78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75395c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b21c, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) sw_get_child_pdo;
    
    // [PiSwInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a914c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4bcc4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42e80, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4bb48, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) sw_init;
    
    // [PiSwInstanceInfoFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e383c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67736c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f8a0, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) sw_instance_info_free;
    
    // [PiSwInstanceInfoInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74bbf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f929c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753830, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) sw_instance_info_init;
    
    // [PiSwInterfaceCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431b54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74ae90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e5ac8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752ad0, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) sw_interface_create;
    
    // [PiSwInterfaceFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a89c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718804, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678b68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720264, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) sw_interface_free;
    
    // [PiSwIrpCancelStartCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d34d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x509d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x550830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509b00, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) sw_irp_cancel_start_create;
    
    // [PiSwIrpCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e130, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fa8c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753dd0, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) sw_irp_cleanup;
    
    // [PiSwIrpGetLifetime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a8e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8abeb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa660, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) sw_irp_get_lifetime;
    
    // [PiSwIrpInterfacePropertySet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x567268, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f80c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6924, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) sw_irp_interface_property_set;
    
    // [PiSwIrpInterfaceRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4331b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74aaa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e5738, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7526e4, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) sw_irp_interface_register;
    
    // [PiSwIrpInterfaceSetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56eb70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b094c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e55a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b84dc, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) sw_irp_interface_set_state;
    
    // [PiSwIrpPropertySet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533aec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76da94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x869150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x775504, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) sw_irp_property_set;
    
    // [PiSwIrpSetLifetime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a215c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c06c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eaf94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753cac, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) sw_irp_set_lifetime;
    
    // [PiSwIrpStartCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431c00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74b368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9b8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752fa8, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) sw_irp_start_create;
    
    // [PiSwIrpStartCreateWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431ce8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74b468, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7530a8, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) sw_irp_start_create_worker;
    
    // [PiSwIsValidPnpId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432c98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74bf70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753bb0, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) sw_is_valid_pnp_id;
    
    // [PiSwLockObj]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f140, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43140, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ad20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43100, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) sw_lock_obj;
    
    // [PiSwMakePdoInactive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716ab4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6751dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e4f4, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) sw_make_pdo_inactive;
    
    // [PiSwPdoAssociationFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e38c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716a7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6752e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e4bc, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) sw_pdo_association_free;
    
    // [PiSwPdoDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a258, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa36770, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb21210, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa36110, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) sw_pdo_driver_entry;
    
    // [PiSwPdoPnPDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434f34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72f290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6fb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7372a0, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) sw_pdo_pn_p_dispatch;
    
    // [PiSwPnPInfoFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e37cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717dec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6773b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f82c, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) sw_pn_p_info_free;
    
    // [PiSwPnPInfoInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43250c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74b9bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f888c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7535fc, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) sw_pn_p_info_init;
    
    // [PiSwProcessParentRemoveIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430c60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72bd18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fad08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733da0, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) sw_process_parent_remove_irp;
    
    // [PiSwProcessParentStartIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434e78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7510e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df62c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x758d28, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) sw_process_parent_start_irp;
    
    // [PiSwProcessRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e3578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716878, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6750e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e2b8, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) sw_process_remove;
    
    // [PiSwPropertySet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x449a9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x725418, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8474, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72d238, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) sw_property_set;
    
    // [PiSwQueuedCreateInfoCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64a98c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8abf74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d7dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa724, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) sw_queued_create_info_create;
    
    // [PiSwQueuedCreateInfoFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64aa9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ac088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95d8ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa838, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) sw_queued_create_info_free;
    
    // [PiSwRemovePdoAssociation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e387c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716a0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x675270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e44c, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) sw_remove_pdo_association;
    
    // [PiSwStartCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64ab08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ac0fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8764, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aa8ac, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) sw_start_create;
    
    // [PiSwStopDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430be0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72bc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fb450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733cf8, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) sw_stop_destroy;
    
    // [PiSwUnassociateDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e365c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7169cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x675230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e40c, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) sw_unassociate_device_object;
    
    // [PiSwUpdateArrayProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533cb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76dc84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f836c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7756f4, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) sw_update_array_properties;
    
    // [PiSwValidateCreateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74bcf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8b98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753934, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) sw_validate_create_data;
    
    // [PiSwValidatePropertyArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502668, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74bfac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f830c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753bec, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) sw_validate_property_array;
    
    // [PiUEventApplyAdditionalFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fafd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726b60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6847f4, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) u_event_apply_additional_filters;
    
    // [PiUEventBroadcastEventQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320f60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45100, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cd60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45120, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) u_event_broadcast_event_queue;
    
    // [PiUEventBroadcastEventQueueLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320f20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc450c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cd80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc450e0, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) u_event_broadcast_event_queue_lock;
    
    // [PiUEventBroadcastEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x518b18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8092f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75ea20, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) u_event_broadcast_event_worker;
    
    // [PiUEventBroadcastHardwareProfilesChangedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633640, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ff40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953c7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e6f0, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) u_event_broadcast_hardware_profiles_changed_event;
    
    // [PiUEventBroadcastPortsChangedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6336c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ffcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953d08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e77c, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) u_event_broadcast_ports_changed_event;
    
    // [PiUEventBroadcastSubscriberPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32439c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c354, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6441c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c334, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) u_event_broadcast_subscriber_present;
    
    // [PiUEventCacheObjectProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb09c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f64a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726474, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x683f2c, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) u_event_cache_object_properties;
    
    // [PiUEventClientRegistrationListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320b00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44d00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ca20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44da0, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) u_event_client_registration_list_lock;
    
    // [PiUEventCopyEventData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5052cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f8168, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7250a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682f58, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) u_event_copy_event_data;
    
    // [PiUEventDequeuePendingEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb3f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f67d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x725a48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x683714, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) u_event_dequeue_pending_event_worker;
    
    // [PiUEventDereferenceEventEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb444, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f682c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x725aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68376c, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) u_event_dereference_event_entry;
    
    // [PiUEventDevHandleClientCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32438c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c348, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64410, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c328, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) u_event_dev_handle_client_count;
    
    // [PiUEventDevHandleClientList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320de0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44fe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cb40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44ec0, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) u_event_dev_handle_client_list;
    
    // [PiUEventDevInstanceClientCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324394, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c34c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64418, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c330, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) u_event_dev_instance_client_count;
    
    // [PiUEventDevInstanceClientList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320c20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44d40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ca60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44de0, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) u_event_dev_instance_client_list;
    
    // [PiUEventDevInstancePropertyClientCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324390, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4878, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf487c, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) u_event_dev_instance_property_client_count;
    
    // [PiUEventDevInstancePropertyClientList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320d00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44f00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cc20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44fa0, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) u_event_dev_instance_property_client_list;
    
    // [PiUEventDevInterfaceClientCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324398, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c350, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64414, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c32c, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) u_event_dev_interface_client_count;
    
    // [PiUEventDevInterfaceClientList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320b40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44e20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44cc0, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) u_event_dev_interface_client_list;
    
    // [PiUEventDeviceNeedsInstall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435404, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74e458, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9028, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x756098, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) u_event_device_needs_install;
    
    // [PiUEventDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x503938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f7e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682c80, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) u_event_dispatch;
    
    // [PiUEventEstimateRequiredClientBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109250, 0x32828 bytes
    // ntoskrnl.exe .text:0x210fa8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df688, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) u_event_estimate_required_client_buffer_size;
    
    // [PiUEventFreeClientRegistrationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502dc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6727c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7db714, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5f08, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) u_event_free_client_registration_context;
    
    // [PiUEventFreeEventEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb4a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x725e98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6837d0, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) u_event_free_event_entry;
    
    // [PiUEventGetDeviceInstanceIdFromUserHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d5bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7591d4, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) u_event_get_device_instance_id_from_user_handle;
    
    // [PiUEventHandleGetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x505178, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f7fe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682dd8, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) u_event_handle_get_event;
    
    // [PiUEventHandleIoctl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x504b08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f7f2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724e6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x682d1c, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) u_event_handle_ioctl;
    
    // [PiUEventHandleRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5054bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fc1d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7252b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67fba4, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) u_event_handle_registration;
    
    // [PiUEventHandleUnregisterClient]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502d7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6778f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4784, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eaeb4, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) u_event_handle_unregister_client;
    
    // [PiUEventHandleVetoEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51a088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1a80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759690, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) u_event_handle_veto_event;
    
    // [PiUEventHashGuidIntoBucket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a368, 0x32828 bytes
    // ntoskrnl.exe .text:0x2125c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378eac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2def2c, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) u_event_hash_guid_into_bucket;
    
    // [PiUEventHashStringIntoBucket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109914, 0x32828 bytes
    // ntoskrnl.exe .text:0x211228, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb4d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df6a8, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) u_event_hash_string_into_bucket;
    
    // [PiUEventInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7822d8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4b744, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb428c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4b5c8, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) u_event_init;
    
    // [PiUEventInitClientRegistrationContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5080e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fbed8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x725600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67d190, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) u_event_init_client_registration_context;
    
    // [PiUEventMetaNotificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48afbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709f10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711960, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) u_event_meta_notification_callback;
    
    // [PiUEventMetaNotificationHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341eb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ac8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41f8, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) u_event_meta_notification_handle;
    
    // [PiUEventNotifyClient]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fae34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5e4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72691c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6845d0, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) u_event_notify_client;
    
    // [PiUEventNotifyClientPendingEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4faf08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6846b4, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) u_event_notify_client_pending_event;
    
    // [PiUEventNotifyDeviceInstanceChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f9eb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74ff2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724838, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x757b6c, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) u_event_notify_device_instance_change;
    
    // [PiUEventNotifyDeviceInstancePropertyChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5664c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x753c7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df094, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b53c, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) u_event_notify_device_instance_property_change;
    
    // [PiUEventNotifyDeviceInterfaceChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd7a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727c88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724928, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72faa8, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) u_event_notify_device_interface_change;
    
    // [PiUEventNotifyTargetDeviceChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fabb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5b7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684300, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) u_event_notify_target_device_change;
    
    // [PiUEventNotifyUserMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fa528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6164, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7260e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x683bec, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) u_event_notify_user_mode;
    
    // [PiUEventProcessBroadcastNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb4f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f68f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x725b04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x683830, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) u_event_process_broadcast_notifications;
    
    // [PiUEventProcessEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb2c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x725910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6835d0, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) u_event_process_event_worker;
    
    // [PiUEventQueueBroadcastEventEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e8bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74f5a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7db8c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7571e8, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) u_event_queue_broadcast_event_entry;
    
    // [PiUEventQueuePendingEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4faf60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5f88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726a5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68470c, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) u_event_queue_pending_event;
    
    // [PiUEventReferenceEventEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4faf9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5fcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684750, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) u_event_reference_event_entry;
    
    // [PiUEventShouldQueueEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1091f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x210fc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df49c, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) u_event_should_queue_event;
    
    // [PiUEventUsermodeEventQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320f00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45160, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cd00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc450c0, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) u_event_usermode_event_queue;
    
    // [PiUEventUsermodeEventQueueLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320ec0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45120, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cd20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45080, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) u_event_usermode_event_queue_lock;
    
    // [PiUpdateDriverDBCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fef30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7619bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768c5c, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) update_driver_db_cache;
    
    // [PiValidatePowerRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5616c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7293cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6c88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7311ec, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) validate_power_relations;
    
    // [PiRegStateDiscriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x24804, 0x1d08 bytes
    // pci.sys .data:0x35c14, 0x1cf0 bytes
    // pci.sys .data:0x39cb4, 0x1cf0 bytes
    // pci.sys .data:0x33c14, 0x1cf0 bytes
    //
    _t67(enum wdf::pidescriptor_state_t*) reg_state_discriptor;
    
    // [PiRegStateOpenClassKey]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f940, 0x1d08 bytes
    // pci.sys PAGE:0x6cc34, 0x1cf0 bytes
    // pci.sys PAGE:0x75ef4, 0x1cf0 bytes
    // pci.sys PAGE:0x6ab94, 0x1cf0 bytes
    //
    _t68(sdk::function<int32_t(const struct nt::guid_t*, uint32_t, uint32_t, uint32_t*, void**)>*) reg_state_open_class_key;
    
    // [PiRegStateReadStackCreationSettingsFromKey]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4fac0, 0x1d08 bytes
    // pci.sys PAGE:0x6cdd0, 0x1cf0 bytes
    // pci.sys PAGE:0x76090, 0x1cf0 bytes
    // pci.sys PAGE:0x6ad30, 0x1cf0 bytes
    //
    _t69(sdk::function<int32_t(void*, struct wdf::stack_creation_settings_t*)>*) reg_state_read_stack_creation_settings_from_key;
    
    // [PiRegStateSysAllInherittedSecurityDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x233e0, 0x1d08 bytes
    // pci.sys .data:0x345a0, 0x1cf0 bytes
    // pci.sys .data:0x385f0, 0x1cf0 bytes
    // pci.sys .data:0x325a0, 0x1cf0 bytes
    //
    _t70(sdk::array<uint32_t, 12>*) reg_state_sys_all_inheritted_security_descriptor;
};
#include "magic/api.end.hpp"
