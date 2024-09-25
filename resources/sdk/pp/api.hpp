#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/driver_object_t.hpp"
#include "../wdf/stack_creation_settings_t.hpp"

#include "magic/api.start.hpp"
namespace pp
{
    // [PpCreateLegacyDeviceIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x62fa90, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) create_legacy_device_ids;
    
    // [PpDevCfgRequestDeviceInstall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x959f60, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) dev_cfg_request_device_install;
    
    // [PpPagePathRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89e3f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89cba8, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) page_path_release;
    
    // [PpBootDDBHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x780da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839454, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78ab40, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) boot_ddb_helper;
    
    // [PpBootDDBInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2b052, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51037, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b052, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) boot_ddb_initialized;
    
    // [PpBootDDBPatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2ca70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53800, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca70, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) boot_ddb_patch;
    
    // [PpDDBPatchHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c8f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c8f0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) ddb_patch_handle;
    
    // [PpDevCfgProcessDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6464e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c720, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x734540, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) dev_cfg_process_device;
    
    // [PpDevCfgProcessDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78013c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839a5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789edc, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) dev_cfg_process_devices;
    
    // [PpDevCfgTraceDeviceStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71d8d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x723f58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7256f4, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) dev_cfg_trace_device_start;
    
    // [PpIrpAllocateDeviceUsageNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7abd8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f838, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b370c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) irp_allocate_device_usage_notification;
    
    // [PpBootDDB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac98, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca68, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd537f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2ca68, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) boot_ddb;
    
    // [PpCheckInDriverDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fea68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71ac74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x782d78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x722a94, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) check_in_driver_database;
    
    // [PpDDBHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ac20, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c800, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53598, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c800, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) ddb_handle;
    
    // [PpDevCfgCheckDeviceNeedsUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x646470, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a7cb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x959138, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a6468, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) dev_cfg_check_device_needs_update;
    
    // [PpDevCfgInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a38e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4a9fc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb466cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4a880, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) dev_cfg_init;
    
    // [PpDevCfgProcessDeviceClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6464f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x713dbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9591ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71b808, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) dev_cfg_process_device_class;
    
    // [PpDevCfgProcessDeviceExtensions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x646814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a7d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x959524, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a64dc, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) dev_cfg_process_device_extensions;
    
    // [PpDevCfgProcessDeviceOperations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49bfc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72cc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bf2f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734a90, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) dev_cfg_process_device_operations;
    
    // [PpDevCfgProcessDeviceReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x646e88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71412c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x959c6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71bb78, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) dev_cfg_process_device_reset;
    
    // [PpDevNodeInsertIntoTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd3724, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a55c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b8dc, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) dev_node_insert_into_tree;
    
    // [PpDevNodeLockTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5ca8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60496c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f594c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71025c, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) dev_node_lock_tree;
    
    // [PpDevNodeRemoveFromTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c8a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b1dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3817bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c55c, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) dev_node_remove_from_tree;
    
    // [PpDevNodeUnlockTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f58b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x710130, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) dev_node_unlock_tree;
    
    // [PpDeviceRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42dc68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728b0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x735b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73092c, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) device_registration;
    
    // [PpForEachDeviceInstanceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42de8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728d50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x735da4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730b70, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) for_each_device_instance_driver;
    
    // [PpHotSwapGetDevnodeRemovalPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f4d6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6024f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f52b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9d04, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) hot_swap_get_devnode_removal_policy;
    
    // [PpHotSwapInitRemovalPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43054c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a2f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fb5b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed6ec, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) hot_swap_init_removal_policy;
    
    // [PpHotSwapUpdateRemovalPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dba84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7588f0, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) hot_swap_update_removal_policy;
    
    // [PpInitGetGroupOrderIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x780b7c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa57d54, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45cf0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa57bf4, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) init_get_group_order_index;
    
    // [PpInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8678, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6f450, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5f548, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e7e0, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) init_system;
    
    // [PpInitializeBootDDB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7824f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4b944, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42f30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4b7c8, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) initialize_boot_ddb;
    
    // [PpIrpQueryCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5010ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728724, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f2c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730544, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) irp_query_capabilities;
    
    // [PpIrpQueryResourceRequirements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4345b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x730f28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f058c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x738f38, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) irp_query_resource_requirements;
    
    // [PpLastGoodDeleteFilesCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632394, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89eb10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d2c0, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) last_good_delete_files_callback;
    
    // [PpLastGoodDoBootProcessing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a5040, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6bad0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5a6d8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b3c8, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) last_good_do_boot_processing;
    
    // [PpMarkDeviceStackExtensionFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109cc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3696d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378e1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36aa84, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) mark_device_stack_extension_flag;
    
    // [PpPagePathAssign]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631d4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e3e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f738, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89cb90, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) page_path_assign;
    
    // [PpProcessClearProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fbb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x37db50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3851ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37eed0, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) process_clear_problem;
    
    // [PpProfileBeginHardwareProfileTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647428, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a87b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a6f68, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) profile_begin_hardware_profile_transition;
    
    // [PpProfileCancelHardwareProfileTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647450, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a87e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a6f98, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) profile_cancel_hardware_profile_transition;
    
    // [PpProfileCancelTransitioningDock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6474d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8870, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a3c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7020, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) profile_cancel_transitioning_dock;
    
    // [PpProfileCommitTransitioningDock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647570, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a891c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a474, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a70cc, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) profile_commit_transitioning_dock;
    
    // [PpProfileIncludeInHardwareProfileTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6476b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8a6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a5c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a721c, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) profile_include_in_hardware_profile_transition;
    
    // [PpProfileInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a93d4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4c198, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5fd14, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4c01c, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) profile_init;
    
    // [PpProfileMarkAllTransitioningDocksEjected]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64776c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8b2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a684, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a72dc, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) profile_mark_all_transitioning_docks_ejected;
    
    // [PpProfileQueryHardwareProfileChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6477b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8b7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a6d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a732c, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) profile_query_hardware_profile_change;
    
    // [PpRegistrySemaphore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320820, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44a20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44a00, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) registry_semaphore;
    
    // [PpReleaseBootDDB]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56001c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e204, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x850ee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a5884, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) release_boot_ddb;
    
    // [PpResetProblemDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64ece4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89fd30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953b74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e4e0, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) reset_problem_devices;
    
    // [PpSystemHiveLimitCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632510, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ee30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952ca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d5e0, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) system_hive_limit_callback;
    
    // [PpRegStateReadCreateClassCreationSettings]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4fc70, 0x1d08 bytes
    // pci.sys PAGE:0x6cfc4, 0x1cf0 bytes
    // pci.sys PAGE:0x76284, 0x1cf0 bytes
    // pci.sys PAGE:0x6af24, 0x1cf0 bytes
    //
    _r1(sdk::function<int32_t(const struct nt::guid_t*, struct nt::driver_object_t*, struct wdf::stack_creation_settings_t*)>*) reg_state_read_create_class_creation_settings;
    
    // [PpRegStateUpdateStackCreationSettings]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4fdb4, 0x1d08 bytes
    // pci.sys PAGE:0x6d128, 0x1cf0 bytes
    // pci.sys PAGE:0x763e8, 0x1cf0 bytes
    // pci.sys PAGE:0x6b088, 0x1cf0 bytes
    //
    _r2(sdk::function<int32_t(const struct nt::guid_t*, struct wdf::stack_creation_settings_t*)>*) reg_state_update_stack_creation_settings;
};
#include "magic/api.end.hpp"
