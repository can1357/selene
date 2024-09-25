#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace vrp
{
    // [VrpDestroyNamespaceNodeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61a21c, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) destroy_namespace_node_list;
    
    // [VrpFindDiffHiveEntryForMountPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x792e78, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) find_diff_hive_entry_for_mount_point;
    
    // [VrpHandleIoctlGetComRootKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x618b74, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) handle_ioctl_get_com_root_key;
    
    // [VrpLockDiffHiveTableExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61cab8, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) lock_diff_hive_table_exclusive;
    
    // [VrpLockDiffHiveTableShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61cb18, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) lock_diff_hive_table_shared;
    
    // [VrpLockJobContextShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x618570, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) lock_job_context_shared;
    
    // [VrpMachineHivePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xb550, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) machine_hive_path;
    
    // [VrpUnlockDiffHiveTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61cd08, 0x32828 bytes
    //
    _m7(sdk::unknown_ptr) unlock_diff_hive_table;
    
    // [VrpUnlockJobContextShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x61868c, 0x32828 bytes
    //
    _m8(sdk::unknown_ptr) unlock_job_context_shared;
    
    // [VrpGetContextsForNotifyInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c9560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5c9e00, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) get_contexts_for_notify_info;
    
    // [VrpInitializeNamespaceNodeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x860f78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f3b0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) initialize_namespace_node_list;
    
    // [VrpActiveSilosLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47818, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e150, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc477d8, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) active_silos_lock;
    
    // [VrpAllocateKeyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ca8d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e90b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb174, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) allocate_key_context;
    
    // [VrpAllowContainerNesting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11e48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cad0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11ea8, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) allow_container_nesting;
    
    // [VrpAppString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x6180, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2bc0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6170, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) app_string;
    
    // [VrpCallbackCookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47820, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e148, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc477e0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) callback_cookie;
    
    // [VrpCountPathComponents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c9ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e6bfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ca540, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) count_path_components;
    
    // [VrpDecommissionKeyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ca968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e94c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb208, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) decommission_key_context;
    
    // [VrpDecrementSiloCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87fbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5ecd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87e398, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) decrement_silo_count;
    
    // [VrpDereferenceJobContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c804c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c88f0, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) dereference_job_context;
    
    // [VrpDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf41b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17280, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41b0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) device_object;
    
    // [VrpDriverObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc50928, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7718, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50928, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) driver_object;
    
    // [VrpHandleIoctlGetVirtualRootKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x880048, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67369c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87e7f8, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) handle_ioctl_get_virtual_root_key;
    
    // [VrpHardCodedSdBlob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc113e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c918, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11448, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) hard_coded_sd_blob;
    
    // [VrpHostLoadedHives]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf5070, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b9e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5070, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) host_loaded_hives;
    
    // [VrpHostLoadedHivesLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf5078, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b9d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5078, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) host_loaded_hives_lock;
    
    // [VrpIncrementSiloCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5cb81c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7939bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cc0bc, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) increment_silo_count;
    
    // [VrpIoctlDeviceDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c8840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x791ab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c90e0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) ioctl_device_dispatch;
    
    // [VrpLockDiffHiveEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ca5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5caddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5cb67c, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) lock_diff_hive_entry;
    
    // [VrpLockJobContextExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x618514, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cab1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5cb3bc, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) lock_job_context_exclusive;
    
    // [VrpMachineString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x6160, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xb520, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6150, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) machine_string;
    
    // [VrpNumActiveSilos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4c33c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6451c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c31c, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) num_active_silos;
    
    // [VrpOriginalKeyNameParameterCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x200010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200010, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) original_key_name_parameter_cleanup;
    
    // [VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb210, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf088, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9c00, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) original_key_name_parameter_guid;
    
    // [VrpRegistryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c9260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c9b00, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) registry_callback;
    
    // [VrpRegistryDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ce020, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ce8c0, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) registry_dispatch;
    
    // [VrpRegistryString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x1f18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2bb0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1000, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) registry_string;
    
    // [VrpRegistryUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87fca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5edc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87e450, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) registry_unload;
    
    // [VrpRegistryValuesTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc01970, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc036e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc019b0, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) registry_values_table;
    
    // [VrpRootHivePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x6190, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xb540, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6180, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) root_hive_path;
    
    // [VrpRootKeyPaths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x9480, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1988, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9480, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) root_key_paths;
    
    // [VrpShouldOperateOnCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fd520, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c93f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5c9c90, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) should_operate_on_call;
    
    // [VrpSiloContextSlot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47810, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0e140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc477d0, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) silo_context_slot;
    
    // [VrpUnlockDiffHiveEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61cccc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cad9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5cb63c, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) unlock_diff_hive_entry;
    
    // [VrpUnlockJobContextExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x618650, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c85ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5c8e8c, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) unlock_job_context_exclusive;
    
    // [VrpUserString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x6170, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xb530, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6160, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) user_string;
    
    // [VrpWcString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x6150, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xb510, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6140, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) wc_string;
    
    // [VrpAddNamespaceNodeToList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x619914, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c8b0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x791d3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c93ac, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) add_namespace_node_to_list;
    
    // [VrpAllocateDiffHiveEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c214, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb604, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7933c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cbea4, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) allocate_diff_hive_entry;
    
    // [VrpBecomeDiffHiveEntryTransitionOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c31c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb258, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cbaf8, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) become_diff_hive_entry_transition_owner;
    
    // [VrpBuildKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ce24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca2f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e7b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cab94, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) build_key_path;
    
    // [VrpCleanupBufferParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x618488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e574c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cae90, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) cleanup_buffer_parameter;
    
    // [VrpCleanupNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x618410, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cae08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x792c04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb6a8, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) cleanup_namespace;
    
    // [VrpComparePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ceec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e7170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ca980, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) compare_path;
    
    // [VrpCreateNamespaceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x619c2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c8be4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7920c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c9484, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) create_namespace_node;
    
    // [VrpCreateNamespaceNodePlaceholderKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x619ee8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c862c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x791c8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c8ecc, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) create_namespace_node_placeholder_key;
    
    // [VrpDecrementDiffHiveEntryHardRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c368, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb2a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7930f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cbb48, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) decrement_diff_hive_entry_hard_ref_count;
    
    // [VrpDereferenceDiffHiveEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c3a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb084, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7931c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb924, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) dereference_diff_hive_entry;
    
    // [VrpDereferenceDiffHiveEntryWithLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c3f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb108, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7932b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb9a8, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) dereference_diff_hive_entry_with_lock;
    
    // [VrpDestroyNamespaceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x619f94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c8990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x791e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c9230, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) destroy_namespace_node;
    
    // [VrpFindBestMatchNamespaceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61a29c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c8108, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x792324, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c89a8, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) find_best_match_namespace_node;
    
    // [VrpFindDiffHiveEntryForMountPointWithLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c50c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x792f84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cbd34, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) find_diff_hive_entry_for_mount_point_with_lock;
    
    // [VrpFindExactNamespaceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61a2b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c8e4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7920a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c96ec, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) find_exact_namespace_node;
    
    // [VrpFindNamespaceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61a2d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c9bb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e7080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ca458, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) find_namespace_node;
    
    // [VrpFindOrCreateDiffHiveEntryForMountPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c684, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb2e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x792988, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cbb88, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) find_or_create_diff_hive_entry_for_mount_point;
    
    // [VrpFreeCallbackContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6184b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c9954, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e84ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ca1f4, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) free_callback_context;
    
    // [VrpFreeKeyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6184f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb1d0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) free_key_context;
    
    // [VrpGetNextToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61cfe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca1c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e7260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5caa68, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) get_next_token;
    
    // [VrpHandleIoctlCreateMultipleNamespaceNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6186c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87fd2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5ee5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87e4dc, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) handle_ioctl_create_multiple_namespace_nodes;
    
    // [VrpHandleIoctlCreateNamespaceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61897c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c83cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79180c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c8c6c, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) handle_ioctl_create_namespace_node;
    
    // [VrpHandleIoctlInitializeJobForVreg]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x618d44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c7d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x790838, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c85e4, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) handle_ioctl_initialize_job_for_vreg;
    
    // [VrpHandleIoctlLoadDifferencingHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x618fe8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c812c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7911b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c89cc, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) handle_ioctl_load_differencing_hive;
    
    // [VrpHandleIoctlLoadDifferencingHiveForHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x619258, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8801d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5f1dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87e980, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) handle_ioctl_load_differencing_hive_for_host;
    
    // [VrpHandleIoctlModifyFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x619464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8803d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5f414, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87eb88, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) handle_ioctl_modify_flags;
    
    // [VrpHandleIoctlUnloadDifferencingHiveForHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x619560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8804dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5f5a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87ec8c, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) handle_ioctl_unload_differencing_hive_for_host;
    
    // [VrpHandleIoctlUnloadDynamicallyLoadedHives]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x619770, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c86dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x790fe4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c8f7c, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) handle_ioctl_unload_dynamically_loaded_hives;
    
    // [VrpIncrementDiffHiveEntryHardRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c804, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb714, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7934c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cbfb4, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) increment_diff_hive_entry_hard_ref_count;
    
    // [VrpInitializeLoadedDifferencingHives]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54677c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7acb54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a2b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b4774, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) initialize_loaded_differencing_hives;
    
    // [VrpJobContextDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x618474, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x87fc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5ed90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87e420, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) job_context_delete;
    
    // [VrpJobContextType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341e60, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17278, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41a8, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) job_context_type;
    
    // [VrpLoadDifferencingHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61c840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cab48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79262c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb3e8, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) load_differencing_hive;
    
    // [VrpOutputBufferParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6185d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca6a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9084, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5caf44, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) output_buffer_parameter;
    
    // [VrpPostEnumerateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61a3ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c8ed4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e3598, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c9774, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) post_enumerate_key;
    
    // [VrpPostOpenOrCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61ab30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c96b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e7e54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c9f50, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) post_open_or_create;
    
    // [VrpPostQueryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61adb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca3c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e552c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cac64, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) post_query_key;
    
    // [VrpPostUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61b158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8806a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5f7b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87ee54, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) post_unload_key;
    
    // [VrpPreFlushKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61b1c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x880744, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5f854, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87eef4, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) pre_flush_key;
    
    // [VrpPreLoadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61b298, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x880818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x790c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87efc8, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) pre_load_key;
    
    // [VrpPreOpenOrCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61b884, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c99a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e68fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ca240, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) pre_open_or_create;
    
    // [VrpPreQueryKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61bb24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88137c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5f91c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87fb2c, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) pre_query_key_name;
    
    // [VrpPreUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61bd64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8815ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5fb8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87fd9c, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) pre_unload_key;
    
    // [VrpProcessBufferParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x618600, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca99c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e54d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb23c, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) process_buffer_parameter;
    
    // [VrpRelinquishDiffHiveEntryTransitionOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61cb80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cb218, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x793130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cbab8, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) relinquish_diff_hive_entry_transition_owner;
    
    // [VrpStripTrailingCharacters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61d084, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca2b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e846c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cab58, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) strip_trailing_characters;
    
    // [VrpTranslatePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61bdd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5c9d08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e6c64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ca5a8, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) translate_path;
    
    // [VrpUnloadDifferencingHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61cbb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5caebc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x792cd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb75c, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) unload_differencing_hive;
    
    // [VrpUpdateKeyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61bfe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5caa34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e4b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cb2d4, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) update_key_information;
    
    // [VrpWaitForDiffHiveEntryTransitionOwnerToLeave]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x61cd68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8816cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5fc98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87fe7c, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) wait_for_diff_hive_entry_transition_owner_to_leave;
};
#include "magic/api.end.hpp"
