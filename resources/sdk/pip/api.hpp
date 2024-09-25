#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace pip
{
    // [PipCanEnableInterfaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7270a4, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) can_enable_interfaces;
    
    // [PipDmgRequestUpdateConsoleLockState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9605e0, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) dmg_request_update_console_lock_state;
    
    // [PipDmgSetIommuDomainPolicyAndNotifyHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x960754, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) dmg_set_iommu_domain_policy_and_notify_hal;
    
    // [PipEnumeratePersistedMemoryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54c250, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) enumerate_persisted_memory_callback;
    
    // [PipFreeDeviceObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x430350, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) free_device_object_list;
    
    // [PipMatchPersistentMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94e2b8, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) match_persistent_memory;
    
    // [PipMatchPersistentMemoryV1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94e39c, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) match_persistent_memory_v1;
    
    // [PipMigrateServiceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7bbc98, 0x32828 bytes
    //
    _m7(sdk::unknown_ptr) migrate_service_callback;
    
    // [PipSetDevNodeStateFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x953be4, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) set_dev_node_state_flags;
    
    // [PipUnpackMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54c3fc, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) unpack_metadata;
    
    // [PipUpdateAsyncOptionsCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x816e60, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) update_async_options_callback;
    
    // [PipInitializeCoreDriversAndElam]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe INIT:0x77f4c0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xb444ec, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) initialize_core_drivers_and_elam;
    
    // [PipCriticalDeviceWaitCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8ec40, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7fe80, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8dec0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) critical_device_wait_callback;
    
    // [PipCslCallbackObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43050, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ac08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43010, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) csl_callback_object;
    
    // [PipCslConsoleLockState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43048, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ac18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43008, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) csl_console_lock_state;
    
    // [PipCslInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4304c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ac01, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4300c, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) csl_initialized;
    
    // [PipCslStateChangeCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8174a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed490, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) csl_state_change_callback;
    
    // [PipCslUnlockCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43040, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ac10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43000, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) csl_unlock_callback;
    
    // [PipCslUpdateState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a0b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8174d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed4c0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) csl_update_state;
    
    // [PipDgqFreeEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b6698, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9662b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4e48, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) dgq_free_entry;
    
    // [PipDgqInsertEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b66d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9662ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4e80, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) dgq_insert_entry;
    
    // [PipDgqListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc42f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ab00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42f00, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) dgq_list_head;
    
    // [PipDgqListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc42f60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ab20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42f20, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) dgq_list_lock;
    
    // [PipDmaGuardBlockAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ae6fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95ffd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aceac, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) dma_guard_block_add_device;
    
    // [PipDmaGuardPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43058, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ac1c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43018, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) dma_guard_policy;
    
    // [PipDmaGuardTestMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43ac8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b6a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43a88, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) dma_guard_test_mode;
    
    // [PipDmgConsoleUnlockCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ae7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9600d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8acfa0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) dmg_console_unlock_callback;
    
    // [PipDmgDestroyIommuExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7474a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73bf80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f0e0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) dmg_destroy_iommu_extension;
    
    // [PipDmgEnforceEnumerationPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ae824, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x960104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8acfd4, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) dmg_enforce_enumeration_policy;
    
    // [PipDmgFlushQueueAndRestartDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ae8a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9601ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ad058, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) dmg_flush_queue_and_restart_devices;
    
    // [PipDmgGetDeviceDmarPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x751668, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a7e2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7592a8, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) dmg_get_device_dmar_policy;
    
    // [PipDmgGetDriverDmarCompatLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x75173c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a80e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75937c, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) dmg_get_driver_dmar_compat_level;
    
    // [PipDmgInitPhaseTwo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x780e44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83ab1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78abe4, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) dmg_init_phase_two;
    
    // [PipDmgInitPhaseZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4ba34, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb43238, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4b8b8, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) dmg_init_phase_zero;
    
    // [PipDmgInitReadGroupPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a0970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89f120, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) dmg_init_read_group_policy;
    
    // [PipDmgReevaluateQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ae96c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9602cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ad11c, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) dmg_reevaluate_queue;
    
    // [PipDmgRequestRestartOnBlockedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ae9a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x960308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ad158, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) dmg_request_restart_on_blocked_device;
    
    // [PipDmgSaveDeviceDmarPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x754904, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a7f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c1c4, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) dmg_save_device_dmar_policy;
    
    // [PipEnumeratePersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x899960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94d7e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x898110, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) enumerate_persisted_memory;
    
    // [PipEventRemovalCheckOpenHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x716594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673ebc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71dfd4, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) event_removal_check_open_handles;
    
    // [PipGetDeviceObjectLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x899984, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94d804, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x898134, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) get_device_object_location;
    
    // [PipGetDriverKsrGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x899bd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94da50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x898384, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) get_driver_ksr_guid;
    
    // [PipGetDriverKsrGuidRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x899ccc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94db48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89847c, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) get_driver_ksr_guid_registry_value;
    
    // [PipGetPersistentMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x899d98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94dc18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x898548, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) get_persistent_memory;
    
    // [PipHalIommuSecurityEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4305c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ac20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4301c, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) hal_iommu_security_enabled;
    
    // [PipIommuRetrieveDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7475f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c0dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f238, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) iommu_retrieve_device_id;
    
    // [PipIommuValidateDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7476dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c1a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74f31c, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) iommu_validate_device_id;
    
    // [PipIsDevNodeEffectivelyRemoved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d07e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x507b0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5078cc, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) is_dev_node_effectively_removed;
    
    // [PipKsrCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b0340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aeaf0, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) ksr_callback;
    
    // [PipKsrNotifyDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b03b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aeb68, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) ksr_notify_drivers;
    
    // [PipMigrateCleanServiceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8eeb0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb80100, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8e130, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) migrate_clean_service_callback;
    
    // [PipProcessQueryRemovalInKernelMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71636c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673c2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ddac, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) process_query_removal_in_kernel_mode;
    
    // [PipRecordOpenHandleVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b650c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96611c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4cbc, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) record_open_handle_veto;
    
    // [PipResetDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa8f150, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb803a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8e3d0, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) reset_device;
    
    // [PipResetDeviceBreakOnReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf5168, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17be4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5168, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) reset_device_break_on_reset;
    
    // [PipResetDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4c2a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb484ec, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4c128, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) reset_devices;
    
    // [PipSendGuestAssignedNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b18a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9637b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b0050, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) send_guest_assigned_notification;
    
    // [PipSendQueryRemoveIrpAndCheckOpenHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x716400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673d88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71de40, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) send_query_remove_irp_and_check_open_handles;
    
    // [PipSendTargetDeviceQueryRemoveNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71660c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673cc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71e04c, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) send_target_device_query_remove_notification;
    
    // [PipSetGuestAssignedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b1944, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96385c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b00f4, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) set_guest_assigned_property;
    
    // [PipUnprotectDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b2934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x963d8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b10e4, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) unprotect_device;
    
    // [PipUpdateDeviceProducts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c27b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c4e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c35c0, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) update_device_products;
    
    // [PipUpdateSetupInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77fe50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86cbc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789bf0, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) update_setup_in_progress;
    
    // [PipUpdateSetupInProgressCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x898c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c9a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x897430, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) update_setup_in_progress_callback;
    
    // [PipUpdateSetupInProgressNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x898c98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c9b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x897448, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) update_setup_in_progress_notify;
    
    // [PipUpdateSetupOobeCompleteWnfCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x898d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ca60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8974f0, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) update_setup_oobe_complete_wnf_callback;
    
    // [PipAddBindingId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55bed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797888, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8472bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79d3d8, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) add_binding_id;
    
    // [PipAddDependencyEdgeBetweenNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf9dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5064e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd178, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5062a0, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) add_dependency_edge_between_nodes;
    
    // [PipAddDependentsToRebuildPowerRelationsQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55beac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x847260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79d3a0, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) add_dependents_to_rebuild_power_relations_queue;
    
    // [PipAddDevicesToBootDriverWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79fedc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68f28, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb56828, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68600, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) add_devices_to_boot_driver_worker;
    
    // [PipAddRequestToEdge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62ff54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ad9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84745c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89954c, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) add_request_to_edge;
    
    // [PipAddtoRebuildPowerRelationsQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f628, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7289a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f638c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7307c4, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) addto_rebuild_power_relations_queue;
    
    // [PipAllocateDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c42c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74ef90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bf5f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x756bd0, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) allocate_device_node;
    
    // [PipApplyFunctionToServiceInstances]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565134, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a2c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85539c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7aae70, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) apply_function_to_service_instances;
    
    // [PipAreDriversLoaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1079f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x21529c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f78e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d5c0, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) are_drivers_loaded;
    
    // [PipAreDriversLoadedWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x107a0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2152c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7908, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d5e4, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) are_drivers_loaded_worker;
    
    // [PipAttemptDependentStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6300a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89aef4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c318, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8996a4, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) attempt_dependent_start;
    
    // [PipAttemptDependentsStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f4f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728654, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f4884, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730474, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) attempt_dependents_start;
    
    // [PipCallDriverAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5edc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71ea48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x732560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x726868, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) call_driver_add_device;
    
    // [PipCallDriverAddDeviceQueryRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5292b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71f5d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7338fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7273f8, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) call_driver_add_device_query_routine;
    
    // [PipCallbackHasDeviceOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e6fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8986d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c3e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896e88, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) callback_has_device_overrides;
    
    // [PipChangeDeviceObjectFromRegistryProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496514, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71bacc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x733548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7238ec, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) change_device_object_from_registry_properties;
    
    // [PipCheckComputerSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e7d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8987c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c4e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896f78, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) check_computer_supported;
    
    // [PipCheckDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x780c8c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa57e68, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45e04, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa57d08, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) check_dependencies;
    
    // [PipCheckForDenyExecute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432788, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x725e78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x729764, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72dc98, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) check_for_deny_execute;
    
    // [PipCheckForUnsatisfiedDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5e74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71e9c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f644c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7267e8, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) check_for_unsatisfied_dependencies;
    
    // [PipCheckSystemFirmwareUpdated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77f380, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa55bcc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb46960, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa55a6c, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) check_system_firmware_updated;
    
    // [PipCheckValidNewDependencyEdge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63012c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89af88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8475ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899738, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) check_valid_new_dependency_edge;
    
    // [PipClearDevNodeFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f727c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723b34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x733144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72b954, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) clear_dev_node_flags;
    
    // [PipClearDevNodeProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430788, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e41c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fdb0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73623c, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) clear_dev_node_problem;
    
    // [PipClearDevNodeUserFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4357f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7264bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f46f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72e2dc, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) clear_dev_node_user_flags;
    
    // [PipCommitPendingOsExtensionResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bbfbc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8f670, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb808c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8e8f0, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) commit_pending_os_extension_resource;
    
    // [PipCommitPendingService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc1bc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8f880, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb80ad0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8eb00, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) commit_pending_service;
    
    // [PipConvertResolutionsToReservations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6301b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af218, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ec0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6e38, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) convert_resolutions_to_reservations;
    
    // [PipCreateComputerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77ed28, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa557ec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb48124, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5568c, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) create_computer_id;
    
    // [PipCreateDependencyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55bff8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7979ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x847340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79d4fc, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) create_dependency_node;
    
    // [PipCreateEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x780dcc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa57fc0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45f64, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa57e60, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) create_entry;
    
    // [PipCreateNewDependencyEdge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cfa74, 0x32828 bytes
    // ntoskrnl.exe .text:0x506580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd214, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506340, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) create_new_dependency_edge;
    
    // [PipDeleteAllDependencyRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630258, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ecc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6d20, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) delete_all_dependency_relations;
    
    // [PipDeleteBindingId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63033c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94edb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8997c4, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) delete_binding_id;
    
    // [PipDeleteBindingIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6303c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ee44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6ea0, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) delete_binding_ids;
    
    // [PipDeleteDependencyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6303fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af1b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ee88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6dd0, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) delete_dependency_node;
    
    // [PipDependencyCopyEdge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630460, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b0ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94eef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89985c, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) dependency_copy_edge;
    
    // [PipDependencyGraphDepthFirstSearch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x122458, 0x32828 bytes
    // ntoskrnl.exe .text:0x386834, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6e74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3875f4, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) dependency_graph_depth_first_search;
    
    // [PipDereferenceDependencyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55bfec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7295cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x847430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7313ec, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) dereference_dependency_node;
    
    // [PipDeviceObjectListAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f788, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a978, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd5e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731cf8, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) device_object_list_add;
    
    // [PipDeviceObjectListElementAt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a07c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751f54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e10ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759b94, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) device_object_list_element_at;
    
    // [PipDeviceObjectListIndexOf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd598, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731ca8, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) device_object_list_index_of;
    
    // [PipDeviceObjectListRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650b58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7604c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9f04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767f10, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) device_object_list_remove;
    
    // [PipEnumerateCompleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f6f54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x722440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x731544, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72a260, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) enumerate_completed;
    
    // [PipEnumerateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43582c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723ee8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7229b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72bd08, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) enumerate_device;
    
    // [PipFindDependencyNodePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1223e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x38679c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6ddc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38755c, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) find_dependency_node_path;
    
    // [PipFindDeviceOverrideEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x489774, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74467c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ba41c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74c2bc, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) find_device_override_entry;
    
    // [PipForAllChildDeviceNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4320dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x605b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6e78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e32b8, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) for_all_child_device_nodes;
    
    // [PipForAllDeviceNodesCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x605b48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6e30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3270, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) for_all_device_nodes_callback;
    
    // [PipForDeviceNodeSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x431f8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x605b08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3230, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) for_device_node_subtree;
    
    // [PipFreeBindingId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6304bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af2c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ef50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6ee4, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) free_binding_id;
    
    // [PipFreeBindingRequestEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6304e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b10c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ef7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8998bc, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) free_binding_request_entry;
    
    // [PipFreeDependencyEdge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cfb8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5066f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54c41c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5064b0, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) free_dependency_edge;
    
    // [PipFreeGroupTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3550, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa58278, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb57284, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58118, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) free_group_tree;
    
    // [PipGenerateContainerID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49e5dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ff510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7594a0, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) generate_container_id;
    
    // [PipGetDriverTagPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77fb78, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa56b10, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb44b64, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa569b0, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) get_driver_tag_priority;
    
    // [PipGetRegistryDwordWithFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49687c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71bdbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73381c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x723bdc, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) get_registry_dword_with_fallback;
    
    // [PipGetRegistrySecurityWithFallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496954, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dab1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7235a8, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) get_registry_security_with_fallback;
    
    // [PipGrowDeviceObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650bd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8afd10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9619e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae4c0, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) grow_device_object_list;
    
    // [PipHardwareConfigActivateService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e8c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75ee20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80515c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x766870, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) hardware_config_activate_service;
    
    // [PipHardwareConfigClearStartOverrideCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8970c0, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) hardware_config_clear_start_override_callback;
    
    // [PipHardwareConfigClearStartOverrides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62ea28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898a0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c72c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8971bc, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) hardware_config_clear_start_overrides;
    
    // [PipHardwareConfigExists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bba48, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8ed6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7ffb4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8dfec, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) hardware_config_exists;
    
    // [PipHardwareConfigGetIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x544f94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788964, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8394f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792704, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) hardware_config_get_index;
    
    // [PipHardwareConfigGetLastUseTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62eac8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8972d0, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) hardware_config_get_last_use_time;
    
    // [PipHardwareConfigInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77ddf4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa49ccc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb588f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa49b50, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) hardware_config_init;
    
    // [PipHardwareConfigOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545018, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b29c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7928c0, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) hardware_config_open_key;
    
    // [PipHardwareConfigTriggerRespecialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62eb4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x897360, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) hardware_config_trigger_respecialize;
    
    // [PipInitComputerIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77e228, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa54884, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb46a94, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa54724, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) init_computer_ids;
    
    // [PipInitDeviceOverrideCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77dbac, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa55d00, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb44278, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa55ba0, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) init_device_override_cache;
    
    // [PipInitializeCoreDriversByGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77f610, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa56580, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb445c4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa56420, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) initialize_core_drivers_by_group;
    
    // [PipInitializeDriverDependentDLLs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77f7b8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa56730, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb44774, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa565d0, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) initialize_driver_dependent_dl_ls;
    
    // [PipInitializeEarlyLaunchDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d3f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa545d8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4407c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa54478, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) initialize_early_launch_drivers;
    
    // [PipIs32bitKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf454, 0x32828 bytes
    // ntoskrnl.exe .text:0x50625c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54bef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50601c, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) is32bit_key;
    
    // [PipIsDevNodeDNStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1079d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x215270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f797c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d594, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) is_dev_node_dn_started;
    
    // [PipIsDeviceInDeviceObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f808, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a904, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd574, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731c84, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) is_device_in_device_object_list;
    
    // [PipIsDeviceReadyForPowerRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f6a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f6414, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730850, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) is_device_ready_for_power_relations;
    
    // [PipIsProblemReadonly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633430, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7156d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6747c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71d114, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) is_problem_readonly;
    
    // [PipIsProviderStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630524, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x869350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899908, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) is_provider_started;
    
    // [PipLinkDeviceObjectAndDependencyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55c0cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b194, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x847698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899944, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) link_device_object_and_dependency_node;
    
    // [PipLookupGroupName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x780cd4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa57ec4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45e60, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa57d64, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) lookup_group_name;
    
    // [PipMakeGloballyUniqueId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560a54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74f6bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x804ae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7572fc, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) make_globally_unique_id;
    
    // [PipMergeDependencyEdgeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630558, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b1b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94efc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899960, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) merge_dependency_edge_list;
    
    // [PipMergeDependencyNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630698, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b334, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94f14c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899ae4, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) merge_dependency_nodes;
    
    // [PipMergeDependencyTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cfc7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x506844, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd328, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506604, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) merge_dependency_types;
    
    // [PipMigratePnpState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8164, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa49a5c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb464d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa498e0, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) migrate_pnp_state;
    
    // [PipMigrateResetDeviceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bbb80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8f030, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb80280, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8e2b0, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) migrate_reset_device_callback;
    
    // [PipMoveListEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cfcb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5068e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54c574, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5066a8, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) move_list_entries;
    
    // [PipNotifyDependenciesChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6306fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b3ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84761c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899b5c, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) notify_dependencies_changed;
    
    // [PipNotifyDeviceDependencyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f478, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730638, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) notify_device_dependency_list;
    
    // [PipOpenServiceEnumKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x529680, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71fcac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x734bec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x727acc, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) open_service_enum_keys;
    
    // [PipPendingServicesFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc50c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8fbe0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb80e30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8ee60, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) pending_services_filter;
    
    // [PipPnPDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a29c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa36720, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb211c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa360c0, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) pn_p_driver_entry;
    
    // [PipProcessDevNodeTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f53d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71e2c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715fac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7260e4, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) process_dev_node_tree;
    
    // [PipProcessEnumeratedChildDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f7150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72261c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x731750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72a43c, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) process_enumerated_child_device;
    
    // [PipProcessPendingObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc534, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8fc10, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb80e60, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8ee90, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) process_pending_objects;
    
    // [PipProcessPendingOsExtensionResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7ba8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4bbac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb46640, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4ba30, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) process_pending_os_extension_resources;
    
    // [PipProcessPendingServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7c2c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4bc38, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb465b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4babc, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) process_pending_services;
    
    // [PipProcessRebuildPowerRelationsQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f550, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728888, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f4e48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7306a8, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) process_rebuild_power_relations_queue;
    
    // [PipProcessRestartPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x652ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b26ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x963af0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b0e5c, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) process_restart_phase1;
    
    // [PipProcessRestartPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x652f98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b2770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x963bbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b0f20, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) process_restart_phase2;
    
    // [PipProcessStartPhase1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434ce0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0984, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x722e40, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) process_start_phase1;
    
    // [PipProcessStartPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0f98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71aeb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d4514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x722cd0, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) process_start_phase2;
    
    // [PipProcessStartPhase3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fe490, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727e8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f1820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72fcac, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) process_start_phase3;
    
    // [PipQueryBindingResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55bf50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797908, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84718c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79d458, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) query_binding_resolution;
    
    // [PipReferenceDependencyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630770, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b428, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x847450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899bd8, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) reference_dependency_node;
    
    // [PipRemoveDevicesInRelationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42d4b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e958, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0d8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736964, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) remove_devices_in_relation_list;
    
    // [PipRestoreDevNodeState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c7ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a73c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37fe7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36d5c8, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) restore_dev_node_state;
    
    // [PipServiceInstanceToDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528c4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ebe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d390, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) service_instance_to_device_instance;
    
    // [PipSetDependency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630774, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b434, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8470e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899be4, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) set_dependency;
    
    // [PipSetDevNodeFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f7208, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7226dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x731810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72a4fc, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) set_dev_node_flags;
    
    // [PipSetDevNodeProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430558, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c4b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fdc70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7342d8, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) set_dev_node_problem;
    
    // [PipSetDevNodeState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x107848, 0x32828 bytes
    // ntoskrnl.exe .text:0x369ec8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa5f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b248, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) set_dev_node_state;
    
    // [PipSetDevNodeUserFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x535b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7290d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f1214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730ef8, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) set_dev_node_user_flags;
    
    // [PipSmBiosFindStruct]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77efc4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa55b58, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb48474, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa559f8, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) sm_bios_find_struct;
    
    // [PipSmBiosGetString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77ee9c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa55a10, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb48348, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa558b0, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) sm_bios_get_string;
    
    // [PipSortDeviceObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f2a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729a14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731d84, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) sort_device_object_list;
    
    // [PipSortDevicesByOrdinal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16ef40, 0x32828 bytes
    // ntoskrnl.exe .text:0x396950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397970, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) sort_devices_by_ordinal;
    
    // [PipUnlinkDeviceObjectAndDependencyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b4e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94f1c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899c94, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) unlink_device_object_and_dependency_node;
    
    // [PipUnloadEarlyLaunchDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a892c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6f4f4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5ef40, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e884, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) unload_early_launch_drivers;
    
    // [PipUpdatePostStartCharacteristics]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e314, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a96c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f8f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37bbdc, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) update_post_start_characteristics;
    
    // [PipVisitDeviceObjectListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f344, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd0cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731754, 0x1fe000 bytes
    //
    _e7(sdk::unknown_ptr) visit_device_object_list_entry;
};
#include "magic/api.end.hpp"
