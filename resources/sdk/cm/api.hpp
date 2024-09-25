#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/key_value_full_information_t.hpp"

#include "magic/api.start.hpp"
namespace cm
{
    // [CmBootLastKnownGood]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fd7d0, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) boot_last_known_good;
    
    // [CmBugcheckRecoveryEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd177ac, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) bugcheck_recovery_enabled;
    
    // [CmCleanupThreadInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2ca130, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) cleanup_thread_info;
    
    // [CmCompleteInitMachineConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1278, 0x32828 bytes
    //
    _m03(sdk::unknown_ptr) complete_init_machine_config;
    
    // [_CmDeleteInstallerClassRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6db9a8, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) delete_installer_class_reg_key;
    
    // [_CmDeleteInterfaceClassRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6dbd64, 0x32828 bytes
    //
    _m05(sdk::unknown_ptr) delete_interface_class_reg_key;
    
    // [CmDumpKeyToFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fddac, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) dump_key_to_file;
    
    // [CmEnableVReg]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x342658, 0x32828 bytes
    //
    _m07(sdk::unknown_ptr) enable_v_reg;
    
    // [CmFcManagerOverwriteFeatureConfigurationSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa16a6c, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) fc_manager_overwrite_feature_configuration_section;
    
    // [CmFcManagerStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe INIT:0xa3cc1c, 0x1fe000 bytes
    //
    _m09(sdk::unknown_ptr) fc_manager_start;
    
    // [CmFcRegisterFeatureConfigurationChangeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa04e28, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) fc_register_feature_configuration_change_notification;
    
    // [CmFcpBuildFeatureConfigurationBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe INIT:0xa3d070, 0x1fe000 bytes
    //
    _m11(sdk::unknown_ptr) fcp_build_feature_configuration_buffers;
    
    // [CmGetSystemControlValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x79944c, 0x32828 bytes
    //
    _m12(sdk::unknown_ptr) get_system_control_values;
    
    // [CmInitSiloNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x793958, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) init_silo_namespace;
    
    // [CmInitializeThreadInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x352990, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) initialize_thread_info;
    
    // [CmMoveKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x603350, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) move_key;
    
    // [CmNtSkipRegistryInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd177b8, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) nt_skip_registry_init;
    
    // [CmObliterateRMTxArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x608ffc, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) obliterate_rm_tx_array;
    
    // [CmOpenKeyForBugCheckRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa00380, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) open_key_for_bug_check_recovery;
    
    // [CmQueryBuildVersionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7dcabc, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) query_build_version_information;
    
    // [CmRegistryLockTableLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74a208, 0x32828 bytes
    //
    _m20(sdk::unknown_ptr) registry_lock_table_length;
    
    // [CmRegistryLockTablePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b138, 0x32828 bytes
    //
    _m21(sdk::unknown_ptr) registry_lock_table_pages;
    
    // [CmRegistryLockTableType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74af18, 0x32828 bytes
    //
    _m22(sdk::unknown_ptr) registry_lock_table_type;
    
    // [CmRegistrySystemCloneName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74b680, 0x32828 bytes
    //
    _m23(sdk::unknown_ptr) registry_system_clone_name;
    
    // [CmSaveKeyToBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGECMRC:0xae1740, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) save_key_to_buffer;
    
    // [CmSetInitMachineConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1270, 0x32828 bytes
    //
    _m25(sdk::unknown_ptr) set_init_machine_config;
    
    // [CmSetTraceNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x601bf0, 0x32828 bytes
    //
    _m26(sdk::unknown_ptr) set_trace_notify_routines;
    
    // [CmShutdownSystem0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x600cfc, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) shutdown_system0;
    
    // [CmShutdownSystem1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x600d24, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) shutdown_system1;
    
    // [CmShutdownSystem2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x600f7c, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) shutdown_system2;
    
    // [CmSiAcquireProcessLockedPagesCharge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2098c4, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) si_acquire_process_locked_pages_charge;
    
    // [CmSiCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x302df4, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) si_create_event;
    
    // [CmSiEventTupleCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x302ed8, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) si_event_tuple_cleanup;
    
    // [CmSiEventTupleInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x302ec8, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) si_event_tuple_initialize;
    
    // [CmSiGetPageSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x347ca0, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) si_get_page_size;
    
    // [CmSiQuerySystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x208c64, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) si_query_system_time;
    
    // [CmSiReleaseProcessLockedPagesCharge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x303104, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) si_release_process_locked_pages_charge;
    
    // [CmSiSetProcessWorkingSetMaximum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3abef8, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) si_set_process_working_set_maximum;
    
    // [CmSiWaitForSingleEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37fde0, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) si_wait_for_single_event;
    
    // [CmSipQueryProcessWorkingSetLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3abe84, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) sip_query_process_working_set_limits;
    
    // [CmSizeOfThreadInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x352980, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) size_of_thread_info;
    
    // [CmUnloadKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50a230, 0x32828 bytes
    //
    _m41(sdk::unknown_ptr) unload_key_ex;
    
    // [CmFcInitSystem1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa3cf54, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa5251c, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) fc_init_system1;
    
    // [CmFcInitSystem2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xb26680, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35398, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) fc_init_system2;
    
    // [CmFcInitSystem3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xb41a50, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35454, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) fc_init_system3;
    
    // [CmFcManagerStartBootPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xb249d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa356ec, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) fc_manager_start_boot_phase;
    
    // [CmFcManagerStartRuntimePhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xb24a84, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35798, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) fc_manager_start_runtime_phase;
    
    // [CmFcShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa04e4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866810, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) fc_shutdown_system;
    
    // [CmFcpInitializeChangeSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0xa1791c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879c8c, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) fcp_initialize_change_subscription;
    
    // [CmFcpWorkItemInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7af620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbf10, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) fcp_work_item_initialize;
    
    // [CmFcpWorkItemQueueWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e7fdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4e7a6c, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) fcp_work_item_queue_work;
    
    // [CmFcpWorkItemWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e8020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4e7ab0, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) fcp_work_item_wrapper;
    
    // [CmInitBootFeatureConfigurations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xb248e8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35340, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) init_boot_feature_configurations;
    
    // [_CmAddPanelDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97454c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa549c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x972e2c, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) add_panel_device;
    
    // [_CmAddPanelDeviceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x974690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa54b04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x972f70, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) add_panel_device_worker;
    
    // [CmAllocateExtraParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c8e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9724, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c9710, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) allocate_extra_parameter;
    
    // [_CmAppendDeclarativeDefaultFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x976258, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa560b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x974b38, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) append_declarative_default_filters;
    
    // [_CmAppendDeclarativeFilterLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x976340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa561a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x974c20, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) append_declarative_filter_level;
    
    // [_CmBuildDevicePanelId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b44e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d198, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc124, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) build_device_panel_id;
    
    // [_CmClassPropertyRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369bac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fba14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36af5c, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) class_property_read;
    
    // [_CmClassPropertyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c14e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65dce8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c0358, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) class_property_write;
    
    // [CmCompleteRegistryInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779d34, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) complete_registry_initialization;
    
    // [CmCompressKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x868f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa06ce8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x867880, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) compress_key;
    
    // [_CmCreateDevicePanel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x974844, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa54cbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973124, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) create_device_panel;
    
    // [_CmCreateDevicePanelWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9749b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa54e1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973294, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) create_device_panel_worker;
    
    // [_CmDeleteDevicePanel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x974a54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa54ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973334, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) delete_device_panel;
    
    // [_CmDeleteDevicePanelRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x974b7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa54ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97345c, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) delete_device_panel_reg_key;
    
    // [_CmDeleteDevicePanelRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x974cbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97359c, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) delete_device_panel_reg_key_worker;
    
    // [_CmDeleteDevicePanelWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x974fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55454, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9738c0, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) delete_device_panel_worker;
    
    // [_CmDevicePanelEnumSubkeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78e4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x860a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x798270, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) device_panel_enum_subkey_callback;
    
    // [_CmDevicePropertyRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2035b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e68f0, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) device_property_read;
    
    // [_CmDevicePropertyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x369c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bc30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b018, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) device_property_write;
    
    // [CmDumpKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6116e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x879000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x877550, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) dump_key;
    
    // [CmFcFeatureConfigMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc113d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c8f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10fc0, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) fc_feature_config_mapping;
    
    // [CmFcFeatureConfigSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47e30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14188, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc482a8, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) fc_feature_config_security_descriptor;
    
    // [CmFcManagerDrainAllFeatureUsageNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87cfec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa169b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8792d4, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) fc_manager_drain_all_feature_usage_notifications;
    
    // [CmFcManagerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6c5d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb24eb4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa35d00, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) fc_manager_initialize;
    
    // [CmFcManagerNotifyFeatureUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e7e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601fe4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e78d8, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) fc_manager_notify_feature_usage;
    
    // [CmFcManagerQueryFeatureConfigurationSectionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b5e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c03b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ced70, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) fc_manager_query_feature_configuration_section_information;
    
    // [CmFcManagerRegisterFeatureConfigurationChangeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87d074, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa16e2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87935c, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) fc_manager_register_feature_configuration_change_notification;
    
    // [CmFcManagerUnregisterFeatureConfigurationChangeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87d16c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa16f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879454, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) fc_manager_unregister_feature_configuration_change_notification;
    
    // [CmFcManagerUpdateFeatureConfigurations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87d23c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa17064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879524, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) fc_manager_update_feature_configurations;
    
    // [CmFcManagerUpdateFeatureUsageSubscriptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87d4f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa1748c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879880, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) fc_manager_update_feature_usage_subscriptions;
    
    // [CmFcSystemManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc47ae0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc13e20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47f40, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) fc_system_manager;
    
    // [CmFcpChangeSubscriptionWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87d7c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa17870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879be0, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) fcp_change_subscription_wrapper;
    
    // [CmFcpCleanupSectionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77764c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827398, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdf88, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) fcp_cleanup_section_state;
    
    // [CmFcpCopySectionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b7d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cef68, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) fcp_copy_section_state;
    
    // [CmFcpIncrementChangeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7779d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x826ff4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be7bc, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) fcp_increment_change_stamp;
    
    // [CmFcpInitializeSectionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a354, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed620, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) fcp_initialize_section_state;
    
    // [CmFcpManagerAllocateChangeSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87d7dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa179d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879d00, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) fcp_manager_allocate_change_subscription;
    
    // [CmFcpManagerArmFeatureUsageRetryTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e7f2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6020d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e79c4, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) fcp_manager_arm_feature_usage_retry_timer;
    
    // [CmFcpManagerCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87d880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8273c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879d90, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) fcp_manager_create_section;
    
    // [CmFcpManagerCreateSectionFromBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87d974, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827218, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879e84, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) fcp_manager_create_section_from_buffer;
    
    // [CmFcpManagerDrainUsageNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8274c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b4370, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) fcp_manager_drain_usage_notifications;
    
    // [CmFcpManagerDrainUsageNotificationsDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e7fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x602140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e7a30, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) fcp_manager_drain_usage_notifications_dpc;
    
    // [CmFcpManagerDrainUsageNotificationsWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87da50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa17a60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879f60, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) fcp_manager_drain_usage_notifications_worker;
    
    // [CmFcpManagerPublishChangeNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87dad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa17b14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x879fe4, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) fcp_manager_publish_change_notifications;
    
    // [CmFcpManagerRetryUsageNotificationsTimerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e7fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x602160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e7a50, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) fcp_manager_retry_usage_notifications_timer_routine;
    
    // [CmFcpManagerRetryUsageNotificationsWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x87dbe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa17d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87a0f0, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) fcp_manager_retry_usage_notifications_worker;
    
    // [CmFcpManagerSoftwareHiveReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7777f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b42e0, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) fcp_manager_software_hive_ready;
    
    // [CmFcpMapSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77768c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8272f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bbbdc, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) fcp_map_section;
    
    // [CmFcpSwapSectionState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67a2bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec22c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87a184, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) fcp_swap_section_state;
    
    // [CmFcpUnmapSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77766c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x827378, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdfa8, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) fcp_unmap_section;
    
    // [CmFcpWnfTypeId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xab18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x112b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x10128, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) fcp_wnf_type_id;
    
    // [_CmFindFilterListInflectionPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9768c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5672c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9751a8, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) find_filter_list_inflection_point;
    
    // [_CmGetDeclarativeFilterList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9769c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5682c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9752a4, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) get_declarative_filter_list;
    
    // [_CmGetDeviceCompoundFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x718c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72c09c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720a78, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) get_device_compound_filters;
    
    // [_CmGetDeviceCompoundFiltersWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x976ddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa56a28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9756bc, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) get_device_compound_filters_worker;
    
    // [_CmGetDeviceInterfaceRegKeySecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x753880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1a14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b140, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) get_device_interface_reg_key_security_descriptor;
    
    // [_CmGetDevicePanelGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b5a6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ebfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd62c, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) get_device_panel_group;
    
    // [_CmGetDevicePanelMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97519c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55624, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973a7c, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) get_device_panel_mapped_property;
    
    // [_CmGetDevicePanelMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9752bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55744, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973b9c, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) get_device_panel_mapped_property_keys;
    
    // [_CmGetDevicePanelMappedPropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x975350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa557d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973c30, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) get_device_panel_mapped_property_locales;
    
    // [_CmGetDevicePanelRegKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9753e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55864, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973cc0, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) get_device_panel_reg_key_path;
    
    // [_CmGetInstallerClassCompoundFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71c4dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x731e8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7242fc, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) get_installer_class_compound_filters;
    
    // [_CmGetInstallerClassCompoundFiltersWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9776f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa570d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x975fd0, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) get_installer_class_compound_filters_worker;
    
    // [_CmGetMatchingDevicePanelList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78d9b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797750, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) get_matching_device_panel_list;
    
    // [_CmGetMatchingDevicePanelListWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78dca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863e64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797a40, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) get_matching_device_panel_list_worker;
    
    // [_CmGetParentDeviceContainerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b2418, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a918, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9fa8, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) get_parent_device_container_id;
    
    // [_CmGetRegKeySecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x762278, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73b140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x769518, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) get_reg_key_security_descriptor;
    
    // [CmGetRootKeyObjectForSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5cb750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x790bcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cbff0, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) get_root_key_object_for_silo;
    
    // [CmInitServerSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x782798, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82a014, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c538, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) init_server_silo_state;
    
    // [CmInitSystem0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa58978, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b4e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa58818, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) init_system0;
    
    // [CmInitSystem2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa42a98, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb423ac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6fbbc, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) init_system2;
    
    // [CmIsStateSeparationDevModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86527c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870468, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8636ac, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) is_state_separation_dev_mode_enabled;
    
    // [CmIsStateSeparationEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25ed68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f228, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a840, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) is_state_separation_enabled;
    
    // [CmLockHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c16f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7999f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f3b8c, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) lock_hive;
    
    // [CmLockHiveSecurityShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x872f9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x87148c, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) lock_hive_security_shared;
    
    // [_CmMergeFilterLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97856c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa57e7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x976e4c, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) merge_filter_lists;
    
    // [CmMpsSvcKeySubstring]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2cf80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53cc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf80, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) mps_svc_key_substring;
    
    // [CmNtGlobalFlag2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd5468c, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f688, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd5468c, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) nt_global_flag2;
    
    // [_CmOpenDevicePanelRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x975494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55918, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973d74, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) open_device_panel_reg_key;
    
    // [_CmOpenDevicePanelRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97560c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55a84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x973eec, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) open_device_panel_reg_key_worker;
    
    // [CmOSDataRootPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9811e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fac8, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) os_data_root_path;
    
    // [CmPostCallbackNotificationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dc010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ece00, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) post_callback_notification_ex;
    
    // [_CmQueryDevicePanelPldProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7251e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f2858, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72d000, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) query_device_panel_pld_property;
    
    // [CmQueryFeatureConfigurationSections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b49c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c026c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cec2c, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) query_feature_configuration_sections;
    
    // [CmQuerySingleFeatureConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86fd3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa04e74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866838, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) query_single_feature_configuration;
    
    // [CmRegisterInternalCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5cb8c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85cf1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cc160, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) register_internal_callback;
    
    // [CmRegisterMachineHiveLoadedNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x776830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8277d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787a30, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) register_machine_hive_loaded_notification;
    
    // [CmRegistryProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2cf70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53c78, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf70, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) registry_process_name;
    
    // [_CmRemovePanelDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x975898, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55d24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x974178, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) remove_panel_device;
    
    // [_CmRemovePanelDeviceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9759dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa55e68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9742bc, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) remove_panel_device_worker;
    
    // [CmRetrieveExtraParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ca628, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8e58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5caec8, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) retrieve_extra_parameter;
    
    // [_CmSetDevicePanelMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x975bbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa56054, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97449c, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) set_device_panel_mapped_property;
    
    // [CmSiAllocateMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21cc20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209994, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0ae4, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) si_allocate_memory;
    
    // [CmSiBugCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e806c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x60217c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e7f54, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) si_bug_check;
    
    // [CmSiCloseSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x267c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aa070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318b40, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) si_close_section;
    
    // [CmSiCreateSectionForFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b9f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208d04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0b5c, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) si_create_section_for_file;
    
    // [CmSiExtendSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2675dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209a14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321e4c, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) si_extend_section;
    
    // [CmSiFreeMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) si_free_memory;
    
    // [CmSiGetMemoryAllocationGranularity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21bd88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209804, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0b04, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) si_get_memory_allocation_granularity;
    
    // [CmSiGetSectionLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b9ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208cbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0b14, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) si_get_section_length;
    
    // [CmSiLockViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26e97c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20988c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e08c8, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) si_lock_view_of_section;
    
    // [CmSiMapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21cc40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2099b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0a84, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) si_map_view_of_section;
    
    // [CmSiPrefetchVirtualMemoryRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21ec6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20adcc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0a40, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) si_prefetch_virtual_memory_range;
    
    // [CmSiProcessTupleInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2718c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323454, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) si_process_tuple_initialize;
    
    // [CmSiProcessTupleStartFromHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c3e3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3abdb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af390, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) si_process_tuple_start_from_handle;
    
    // [CmSiProtectViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21fa48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a55c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2494, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) si_protect_view_of_section;
    
    // [CmSiRWLockAcquireExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x777704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be678, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) si_rw_lock_acquire_exclusive;
    
    // [CmSiRWLockInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7724b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dbb0, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) si_rw_lock_initialize;
    
    // [CmSiRWLockReleaseExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7776d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x743fec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bcb14, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) si_rw_lock_release_exclusive;
    
    // [CmSiUnlockViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21ec34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20ae10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30f82c, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) si_unlock_view_of_section;
    
    // [CmSiUnmapViewOfSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26afb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347c84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31c648, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) si_unmap_view_of_section;
    
    // [_CmSplitDevicePanelId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78d7f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863f90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797598, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) split_device_panel_id;
    
    // [CmStateSeparationAllHivesVolatile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4c1c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd177b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c1c, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) state_separation_all_hives_volatile;
    
    // [CmStateSeparationDevMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4c18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd177b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c18, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) state_separation_dev_mode;
    
    // [CmStateSeparationEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf48c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17630, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48c4, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) state_separation_enabled;
    
    // [CmSystemRootPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9811d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fab8, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) system_root_path;
    
    // [CmUnlockHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c13b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7999b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f3ea8, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) unlock_hive;
    
    // [CmUnregisterMachineHiveLoadedNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x867320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865750, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) unregister_machine_hive_loaded_notification;
    
    // [_CmUpdateDevicePanel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x724768, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f1d5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72c588, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) update_device_panel;
    
    // [_CmUpdateDevicePanelInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x975c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eabb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x974500, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) update_device_panel_interface;
    
    // [CmUpdateFeatureConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x86fec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa05004, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8669bc, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) update_feature_configuration;
    
    // [CmUpdateFeatureUsageSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x870050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa05314, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866b4c, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) update_feature_usage_subscription;
    
    // [_CmValidateDevicePanelName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78d798, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863cf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797538, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) validate_device_panel_name;
    
    // [CmWorkerEngineDequeueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x603048, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868e94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867814, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) worker_engine_dequeue_work_item;
    
    // [CmWorkerEngineQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49cc6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670d7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e44cc, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) worker_engine_queue_work_item;
    
    // [_CmAddDeviceToContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5012c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f36f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741344, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) add_device_to_container;
    
    // [_CmAddDeviceToContainerWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3854, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7414a0, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) add_device_to_container_worker;
    
    // [CmAddLogForAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41b6c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66829c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74d348, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6db51c, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) add_log_for_action;
    
    // [CmBootAcceptFirstTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a04c, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b324, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd512dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b324, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) boot_accept_first_time;
    
    // [CmCallbackGetKeyObjectID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6011b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x866cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x897c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865120, 0x1fe000 bytes
    //
    _n82(sdk::function<int32_t(int64_t*, void*, uint64_t*, const nt::unicode_view**)>*) callback_get_key_object_id;
    
    // [CmCallbackGetKeyObjectIDEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480a28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cef00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61a880, 0x1fe000 bytes
    //
    _n83(sdk::function<int32_t(int64_t*, void*, uint64_t*, const nt::unicode_view**, uint32_t)>*) callback_get_key_object_id_ex;
    
    // [CmCallbackReleaseKeyObjectIDEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4912d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c4590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dc730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61a9c0, 0x1fe000 bytes
    //
    _n84(sdk::function<void(const nt::unicode_view*)>*) callback_release_key_object_id_ex;
    
    // [CmCheckNoTxContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41ae40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62ca5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d280, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) check_no_tx_context;
    
    // [CmCheckRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44c6c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x634794, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x683180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6893d0, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) check_registry;
    
    // [_CmClassFilterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6de1b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa541d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x972590, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) class_filter_callback;
    
    // [_CmClassRegPropMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed480, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980340, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) class_reg_prop_map;
    
    // [_CmClassSubkeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x555c74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84faf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6850, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) class_subkey_callback;
    
    // [CmCloseRmHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50be84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63cca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b3e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658b24, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) close_rm_handle;
    
    // [CmCloseTmHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50be64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63cc7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b408, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658b4c, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) close_tm_handle;
    
    // [_CmContainerListGenericObjectCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x555db8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae2c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86aa20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b5ee0, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) container_list_generic_object_callback;
    
    // [CmControlHive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7d1ef0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd58760, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd83ce0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd58760, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) control_hive;
    
    // [CmControlVector]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2d90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa979d0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8b2e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa96bc0, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) control_vector;
    
    // [CmConvertHandleToKernelHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41aa88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62c680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744f78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68cea4, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) convert_handle_to_kernel_handle;
    
    // [_CmCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499b94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a1ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x751dec, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) create_device;
    
    // [_CmCreateDeviceContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501404, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739a44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3a34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x741684, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) create_device_container;
    
    // [_CmCreateDeviceContainerWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501558, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739ba8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3b94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7417e8, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) create_device_container_worker;
    
    // [_CmCreateDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9b84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a3c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cca78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752000, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) create_device_interface;
    
    // [_CmCreateDeviceInterfaceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9cf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ccbe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752170, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) create_device_interface_worker;
    
    // [_CmCreateDeviceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499cf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a318, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc9c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x751f58, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) create_device_worker;
    
    // [_CmCreateInstallerClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9718e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9701c8, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) create_installer_class;
    
    // [_CmCreateInstallerClassWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9f7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x971a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51eec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x970344, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) create_installer_class_worker;
    
    // [_CmCreateInterfaceClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6da018, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a6e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cccf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752328, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) create_interface_class;
    
    // [_CmCreateInterfaceClassWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6da184, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a864, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cce6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7524a4, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) create_interface_class_worker;
    
    // [CmCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fcea0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62cae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x745530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d310, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) create_key;
    
    // [_CmCreateOrdinalInstanceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6da220, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c3b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73339c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753ff8, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) create_ordinal_instance_key;
    
    // [CmCSDVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324210, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4bfe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc640f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bfc0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) csd_version_string;
    
    // [CmDefaultLanguageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce608, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54778, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f880, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54778, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) default_language_id;
    
    // [CmDefaultLanguageIdLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce144, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd5416c, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f164, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd5416c, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) default_language_id_length;
    
    // [CmDefaultLanguageIdType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce148, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54168, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f160, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54168, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) default_language_id_type;
    
    // [_CmDeleteCommonClassRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6da428, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x971b04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51f98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9703e4, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) delete_common_class_reg_key;
    
    // [_CmDeleteCommonClassRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6da568, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x971c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa520e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x970530, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) delete_common_class_reg_key_worker;
    
    // [_CmDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6da71c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70fd4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66f770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7176dc, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) delete_device;
    
    // [_CmDeleteDeviceContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dc468, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71032c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa52fc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717cbc, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) delete_device_container;
    
    // [_CmDeleteDeviceContainerRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dc584, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x710664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa530ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717ff4, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) delete_device_container_reg_key;
    
    // [_CmDeleteDeviceContainerRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dc69c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x710740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5322c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7180d0, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) delete_device_container_reg_key_worker;
    
    // [_CmDeleteDeviceContainerWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dc860, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x710484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa534a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717e14, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) delete_device_container_worker;
    
    // [_CmDeleteDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6da83c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70fe74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x670e30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717804, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) delete_device_interface;
    
    // [_CmDeleteDeviceInterfaceMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6df15c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x718a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678fec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720480, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) delete_device_interface_mapped_property_from_reg_value;
    
    // [_CmDeleteDeviceInterfaceRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6da958, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x710b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66fae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x718520, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) delete_device_interface_reg_key;
    
    // [_CmDeleteDeviceInterfaceRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6daa80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x710c64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66fbb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7185f4, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) delete_device_interface_reg_key_worker;
    
    // [_CmDeleteDeviceInterfaceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dac54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71094c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66f898, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7182dc, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) delete_device_interface_worker;
    
    // [_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6df36c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7120e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x670dac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x719a78, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) delete_device_mapped_property_for_all_driver_key_reg_values;
    
    // [_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6df3e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71472c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674f88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71c178, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) delete_device_mapped_property_from_driver_key_reg_value;
    
    // [_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6df508, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7178e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f328, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) delete_device_mapped_property_from_instance_key_reg_value;
    
    // [_CmDeleteDeviceRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6daed0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71141c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x670370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x718dac, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) delete_device_reg_key;
    
    // [_CmDeleteDeviceRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6daffc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7114fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x670450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x718e8c, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) delete_device_reg_key_worker;
    
    // [_CmDeleteDeviceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6db390, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x710f38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66fe88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7188c8, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) delete_device_worker;
    
    // [_CmDeleteInstallerClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6db888, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x971fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5244c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x970880, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) delete_installer_class;
    
    // [_CmDeleteInstallerClassMappedPropertyFromCoInstallers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6df608, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9764e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa56348, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x974dc4, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) delete_installer_class_mapped_property_from_co_installers;
    
    // [_CmDeleteInstallerClassMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6df664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x976560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa563c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x974e40, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) delete_installer_class_mapped_property_from_reg_value;
    
    // [_CmDeleteInstallerClassWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6db9cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9720cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa52578, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9709ac, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) delete_installer_class_worker;
    
    // [_CmDeleteInterfaceClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dbc44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x972360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa52814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x970c40, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) delete_interface_class;
    
    // [_CmDeleteInterfaceClassMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6df7f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x976730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa56594, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x975010, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) delete_interface_class_mapped_property_from_reg_value;
    
    // [_CmDeleteInterfaceClassWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dbd88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97248c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa52940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x970d6c, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) delete_interface_class_worker;
    
    // [CmDeleteKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eae70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6258a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x747e7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x691e18, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) delete_key;
    
    // [CmDeleteKeyRecursive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60c6b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8740a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02fc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8725f0, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) delete_key_recursive;
    
    // [CmDeleteLayeredKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b9748, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e7218, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x601788, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e7108, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) delete_layered_key;
    
    // [CmDeleteValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ed1f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6268d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74b834, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x693ba8, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) delete_value_key;
    
    // [_CmDeviceClassesSubkeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5554e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78eb20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83d030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7988c0, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) device_classes_subkey_callback;
    
    // [_CmDeviceRegPropMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee8f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa66cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x981880, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) device_reg_prop_map;
    
    // [_CmEnumDevicesInContainerWithCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dca1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x972af8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa53674, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9713d8, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) enum_devices_in_container_with_callback;
    
    // [_CmEnumDevicesInContainerWithCallbackWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dcb5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x972c48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa537c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971528, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) enum_devices_in_container_with_callback_worker;
    
    // [_CmEnumSubkeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55594c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78e830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84a660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7985d0, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) enum_subkey_callback;
    
    // [CmEnumerateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d4f90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a37f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d8910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f9d50, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) enumerate_key;
    
    // [CmEnumerateValueFromLayeredKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6030b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66d14c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8678e0, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) enumerate_value_from_layered_key;
    
    // [CmEnumerateValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d40a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c81d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74d0e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61e610, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) enumerate_value_key;
    
    // [CmEnumerateValueKeyFromMergedView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x605e90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86c4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0a26c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86ae30, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) enumerate_value_key_from_merged_view;
    
    // [CmEqualTrans]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edc28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62fa14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68e17c, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) equal_trans;
    
    // [CmEtwRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8675e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa057b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865a18, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) etw_run_down;
    
    // [CmFastBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f1c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdc4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f7c, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) fast_boot;
    
    // [CmFileNameExtensions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed970, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65c80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980a60, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) file_name_extensions;
    
    // [CmFirstTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a019, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0fc, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) first_time;
    
    // [CmFreezeRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6089bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86e928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa067e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d2a8, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) freeze_registry;
    
    // [CmFreezeThawTimeoutInSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ba8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdcc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f84, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) freeze_thaw_timeout_in_seconds;
    
    // [CmGetBoundTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a08a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x673280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7de0f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6950, 0x1fe000 bytes
    //
    _o57(sdk::function<void*(int64_t*, void*)>*) get_bound_transaction;
    
    // [CmGetCallbackVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601290, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x866e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02460, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865250, 0x1fe000 bytes
    //
    _o58(sdk::function<void(uint32_t*, uint32_t*)>*) get_callback_version;
    
    // [_CmGetCommonClassRegKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439a68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dab2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717984, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a9f20, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) get_common_class_reg_key_path;
    
    // [_CmGetContainerBooleanProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dcdc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x972ebc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa53a34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97179c, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) get_container_boolean_property;
    
    // [_CmGetContainerBooleanPropertyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dce30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x972f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa53ab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971810, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) get_container_boolean_property_callback;
    
    // [_CmGetDeviceChildren]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6df968, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x976b9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d06d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97547c, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) get_device_children;
    
    // [_CmGetDeviceContainerIdFromBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5017c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73af00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f423c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742b40, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) get_device_container_id_from_base;
    
    // [_CmGetDeviceContainerMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501710, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce56c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3d8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d92ec, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) get_device_container_mapped_property;
    
    // [_CmGetDeviceContainerMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dcea4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7103f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa53b38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717d80, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) get_device_container_mapped_property_keys;
    
    // [_CmGetDeviceContainerMappedPropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dcf2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x972fb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa53bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971898, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) get_device_container_mapped_property_locales;
    
    // [_CmGetDeviceContainerRegKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501cf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce97c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f4188, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d96fc, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) get_device_container_reg_key_path;
    
    // [_CmGetDeviceControlKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565e38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754854, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c114, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) get_device_control_key_path;
    
    // [_CmGetDeviceHardwareKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495258, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66aa30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cb9e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd790, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) get_device_hardware_key_path;
    
    // [_CmGetDeviceInstanceKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43fc80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dd698, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x714ce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x616fcc, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) get_device_instance_key_path;
    
    // [_CmGetDeviceInterfaceClassGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a724, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e06d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717484, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6acd04, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) get_device_interface_class_guid;
    
    // [_CmGetDeviceInterfaceClassGuidString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a78c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e0744, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7174f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6accb4, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) get_device_interface_class_guid_string;
    
    // [_CmGetDeviceInterfaceMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444e38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e0318, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710424, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6acb58, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) get_device_interface_mapped_property;
    
    // [_CmGetDeviceInterfaceMappedPropertyFromComposite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444f90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e0474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717728, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6acd78, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) get_device_interface_mapped_property_from_composite;
    
    // [_CmGetDeviceInterfaceMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49039c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a74c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72e708, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b209c, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) get_device_interface_mapped_property_from_reg_value;
    
    // [_CmGetDeviceInterfaceMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dfb94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x711d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x670c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7196a0, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) get_device_interface_mapped_property_keys;
    
    // [_CmGetDeviceInterfaceMappedPropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dfdb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9773a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa57004, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x975c80, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) get_device_interface_mapped_property_locales;
    
    // [_CmGetDeviceInterfaceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435f60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x725f8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x729878, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72ddac, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) get_device_interface_name;
    
    // [_CmGetDeviceInterfacePathFormat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519dac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70f824, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7171b4, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) get_device_interface_path_format;
    
    // [_CmGetDeviceInterfaceReferenceString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519e30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70f8b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717248, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) get_device_interface_reference_string;
    
    // [_CmGetDeviceInterfaceRegKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43cdcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dac64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x712fb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aad10, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) get_device_interface_reg_key_path;
    
    // [_CmGetDeviceInterfaceSubkeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43dd0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dd25c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71383c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aa50c, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) get_device_interface_subkey_path;
    
    // [_CmGetDeviceInterfaceSymbolicLinkName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fe144, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727ae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72f990, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) get_device_interface_symbolic_link_name;
    
    // [_CmGetDeviceLogConfKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490cd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670b6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc2d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e42bc, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) get_device_log_conf_key_path;
    
    // [_CmGetDeviceMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442210, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5df1dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x711240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aba1c, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) get_device_mapped_property;
    
    // [_CmGetDeviceMappedPropertyFromComposite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x436c8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5df3dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72d4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6abc1c, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) get_device_mapped_property_from_composite;
    
    // [_CmGetDeviceMappedPropertyFromInstanceKeyRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566a38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732f1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da8a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73af2c, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) get_device_mapped_property_from_instance_key_reg_value;
    
    // [_CmGetDeviceMappedPropertyFromRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43d3d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e0cdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710a44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aeaec, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) get_device_mapped_property_from_reg_prop;
    
    // [_CmGetDeviceMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dfe80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x711e7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da5f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71980c, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) get_device_mapped_property_keys;
    
    // [_CmGetDeviceMappedPropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e0150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x977470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x846f24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x975d50, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) get_device_mapped_property_locales;
    
    // [_CmGetDeviceParent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4361b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6697d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72c7fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1254, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) get_device_parent;
    
    // [_CmGetDeviceRegKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43f3e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dd470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x714174, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617b64, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) get_device_reg_key_path;
    
    // [_CmGetDeviceRegKeySecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56186c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751ea8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73b4f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759ae8, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) get_device_reg_key_security_descriptor;
    
    // [_CmGetDeviceRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43ea0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e1830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x713298, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6af640, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) get_device_reg_prop;
    
    // [_CmGetDeviceRegPropWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43ff10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e19b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x713418, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6af7c0, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) get_device_reg_prop_worker;
    
    // [_CmGetDeviceRelationsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6de2d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973de8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d50c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9726c8, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) get_device_relations_list;
    
    // [_CmGetDeviceSiblings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e025c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x977584, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8598b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x975e64, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) get_device_siblings;
    
    // [_CmGetDeviceSoftwareKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488e74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7165d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ae858, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) get_device_software_key;
    
    // [_CmGetDeviceSoftwareKeyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488d78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2794, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7168c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ae6c0, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) get_device_software_key_path;
    
    // [_CmGetDeviceStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43958c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2dec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72eb58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0610, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) get_device_status;
    
    // [_CmGetDevicesInBaseContainerList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dcfb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973048, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa53c54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971928, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) get_devices_in_base_container_list;
    
    // [_CmGetInstallerClassMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d3f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71c030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x731a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x723e50, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) get_installer_class_mapped_property;
    
    // [_CmGetInstallerClassMappedPropertyFromCoInstallers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d774, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7193a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3ac8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7211c8, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) get_installer_class_mapped_property_from_co_installers;
    
    // [_CmGetInstallerClassMappedPropertyFromComposite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e03bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71c260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x731c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x724080, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) get_installer_class_mapped_property_from_composite;
    
    // [_CmGetInstallerClassMappedPropertyFromRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e0698, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71c66c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x732024, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72448c, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) get_installer_class_mapped_property_from_reg_prop;
    
    // [_CmGetInstallerClassMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71a928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8614, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x722748, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) get_installer_class_mapped_property_from_reg_value;
    
    // [_CmGetInstallerClassMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e08e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x977ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5769c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x976580, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) get_installer_class_mapped_property_keys;
    
    // [_CmGetInstallerClassMappedPropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e0c38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa579a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x976930, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) get_installer_class_mapped_property_locales;
    
    // [_CmGetInstallerClassRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445dc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71c858, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73216c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x724678, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) get_installer_class_reg_prop;
    
    // [_CmGetInstallerClassRegPropWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445b5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71c9cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7322e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7247ec, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) get_installer_class_reg_prop_worker;
    
    // [_CmGetInterfaceClassMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438374, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e6a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3d10, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) get_interface_class_mapped_property;
    
    // [_CmGetInterfaceClassMappedPropertyFromComposite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e0d64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa57ad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x976a60, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) get_interface_class_mapped_property_from_composite;
    
    // [_CmGetInterfaceClassMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438460, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e6b20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3e00, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) get_interface_class_mapped_property_from_reg_value;
    
    // [_CmGetInterfaceClassMappedPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e0e68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978288, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa57bd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x976b68, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) get_interface_class_mapped_property_keys;
    
    // [_CmGetInterfaceClassMappedPropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e1068, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97849c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa57dac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x976d7c, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) get_interface_class_mapped_property_locales;
    
    // [CmGetKCBCacheSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edb88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c6524, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x751634, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61c964, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) get_kcb_cache_security;
    
    // [CmGetKeyFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571914, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec300, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) get_key_flags;
    
    // [CmGetKeyLastWriteTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x509808, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d3a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dd194, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658844, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) get_key_last_write_time;
    
    // [_CmGetMatchingCommonClassList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554f14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78e25c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797ffc, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) get_matching_common_class_list;
    
    // [_CmGetMatchingCommonClassListWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x555024, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78e374, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863538, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x798114, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) get_matching_common_class_list_worker;
    
    // [_CmGetMatchingDeviceContainerList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554920, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78ddd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x869f34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797b74, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) get_matching_device_container_list;
    
    // [_CmGetMatchingDeviceContainerListWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554c48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78ded8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a038, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797c78, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) get_matching_device_container_list_worker;
    
    // [_CmGetMatchingDeviceInterfaceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f398, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b361c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868798, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb1ac, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) get_matching_device_interface_list;
    
    // [_CmGetMatchingDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554638, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebcb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e750, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) get_matching_device_list;
    
    // [_CmGetMatchingDeviceListForSubkey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55474c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78dabc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8693b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79785c, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) get_matching_device_list_for_subkey;
    
    // [_CmGetMatchingFilteredDeviceInterfaceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e6cc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728f04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3fa4, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) get_matching_filtered_device_interface_list;
    
    // [_CmGetMatchingFilteredDeviceInterfaceListWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554a1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78df68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x864354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797d08, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) get_matching_filtered_device_interface_list_worker;
    
    // [_CmGetMatchingFilteredDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x491514, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bfae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3c20, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) get_matching_filtered_device_list;
    
    // [_CmGetMatchingFilteredDeviceListWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6de374, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa54308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x972778, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) get_matching_filtered_device_list_worker;
    
    // [CmGetSystemDriverList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x798058, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa58458, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4606c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa582f8, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) get_system_driver_list;
    
    // [CmGetVisibleMaxNameLenAndClassLen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x509910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dd298, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658950, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) get_visible_max_name_len_and_class_len;
    
    // [CmGetVisibleMaxValueNameLenAndDataLen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50987c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d41c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dd20c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6588bc, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) get_visible_max_value_name_len_and_data_len;
    
    // [CmGetVisibleSubkeyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ecb70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625f3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7485b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6924ac, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) get_visible_subkey_count;
    
    // [CmGetVisibleValueCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5097d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658808, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) get_visible_value_count;
    
    // [CmGlobalValidationRunlevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce56c, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546e0, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f6c4, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546e0, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) global_validation_runlevel;
    
    // [CmHiveIdentity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a388, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb050, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d4c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb010, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) hive_identity;
    
    // [CmInitSystem1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77c208, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa52698, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb26920, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa52534, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) init_system1;
    
    // [CmInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x609768, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86fbec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02bcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86e56c, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) initialize_processor;
    
    // [CmInstallUILanguageFallbackToOOBm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce568, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546dc, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f6b8, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546dc, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) install_ui_language_fallback_to_oo_bm;
    
    // [CmInstallUILanguageId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce620, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54898, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f868, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54898, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) install_ui_language_id;
    
    // [CmInstallUILanguageIdLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce14c, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54170, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f168, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54170, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) install_ui_language_id_length;
    
    // [CmInstallUILanguageIdType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce150, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54174, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f16c, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54174, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) install_ui_language_id_type;
    
    // [CmIoFileObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323d78, 0x32828 bytes
    // ntoskrnl.exe .data:0xc485e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc14388, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc485c0, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) io_file_object_type;
    
    // [_CmIsDeviceInContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501898, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b098, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f43d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742cd8, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) is_device_in_container;
    
    // [_CmIsDeviceInterfaceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43cce0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dc3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0910, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) is_device_interface_enabled;
    
    // [_CmIsDevicePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439004, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e3964, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72ed48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b105c, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) is_device_present;
    
    // [_CmIsDeviceSafeRemovalRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4364b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74d6e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72a2bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x755328, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) is_device_safe_removal_required;
    
    // [CmIsLastKnownGoodBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a5250, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6bd38, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5a940, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b630, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) is_last_known_good_boot;
    
    // [_CmIsLocalMachineContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3104, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755a4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e91dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d49c, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) is_local_machine_container;
    
    // [_CmIsRootDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x436314, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669944, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72c960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b13c4, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) is_root_device;
    
    // [_CmIsRootEnumeratedDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5e40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7104b0, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) is_root_enumerated_device;
    
    // [CmKeyBodyNeedsVirtualImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x606268, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0a778, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ecb44, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) key_body_needs_virtual_image;
    
    // [CmKeyBodyRemapToVirtual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6062e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86c8c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0a80c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86b240, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) key_body_remap_to_virtual;
    
    // [CmKeyBodyRemapToVirtualForEnum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d4940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d9d60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c2070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eab60, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) key_body_remap_to_virtual_for_enum;
    
    // [CmKeyBodyReplicateToVirtual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x606478, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65be20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0aaa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cfb20, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) key_body_replicate_to_virtual;
    
    // [CmKeyObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab228, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb430, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1da38, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb430, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) key_object_type;
    
    // [CmKtmNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x509dfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ccf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658190, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) ktm_notification;
    
    // [CmLegacyAltitude]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341e40, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4190, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4190, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) legacy_altitude;
    
    // [CmListGetNextElement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508e74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d630, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae15f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658ad0, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) list_get_next_element;
    
    // [CmListGetPrevElement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4edbfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x748a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658a00, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) list_get_prev_element;
    
    // [CmLoadAppKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ec2cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x627028, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x742080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6942f8, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) load_app_key;
    
    // [CmLoadDifferencingKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41a01c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62b9e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7440ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68c20c, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) load_differencing_key;
    
    // [CmLoadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41af14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x608bfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ddaec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d55c0, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) load_key;
    
    // [CmLockHiveSecurityExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa10e1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6961b8, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) lock_hive_security_exclusive;
    
    // [CmLockKeyForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5655e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a4e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79158c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7acf30, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) lock_key_for_write;
    
    // [CmLogMcUpdateStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b8db0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e6c58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x60097c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e6b48, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) log_mc_update_status;
    
    // [CmLogTmRmAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a32f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x743f48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79bafc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74bb88, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) log_tm_rm_action;
    
    // [_CmMapCmObjectTypeToPnpObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43fedc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d7f48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e0cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a7d18, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) map_cm_object_type_to_pnp_object_type;
    
    // [_CmMapPropertyKeyToRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4482b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7237e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72efa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72b608, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) map_property_key_to_reg_prop;
    
    // [_CmMatchLastKnownParentCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dbfd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71a500, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) match_last_known_parent_callback;
    
    // [_CmMoveBaseContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dd208, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9732b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa53ee8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971b94, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) move_base_container;
    
    // [CmNotifyRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50d0ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69e234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68aa8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7067b0, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) notify_run_down;
    
    // [CmNtCSDReleaseType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324244, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c108, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64204, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c0e8, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) nt_csd_release_type;
    
    // [CmNtCSDVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324228, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4bff8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64100, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bfd8, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) nt_csd_version;
    
    // [CmNtGlobalFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce524, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546a0, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f68c, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546a0, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) nt_global_flag;
    
    // [CmNtSpBuildNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3241c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4bf8c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6408c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bf6c, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) nt_sp_build_number;
    
    // [CmObReferenceObjectByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e64a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c2c8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6190bc, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) ob_reference_object_by_handle;
    
    // [_CmOpenCommonClassRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43977c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5da348, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717d2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a9b74, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) open_common_class_reg_key;
    
    // [_CmOpenCommonClassRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4398c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5da498, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717abc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a9cc4, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) open_common_class_reg_key_worker;
    
    // [_CmOpenDeviceContainerRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501a08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3e44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d93c0, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) open_device_container_reg_key;
    
    // [_CmOpenDeviceContainerRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501b14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce754, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3f58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d94d4, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) open_device_container_reg_key_worker;
    
    // [_CmOpenDeviceInterfaceRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a7d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5decdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ab340, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) open_device_interface_reg_key;
    
    // [_CmOpenDeviceInterfaceRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43a8e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5de9a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ab004, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) open_device_interface_reg_key_worker;
    
    // [_CmOpenDeviceRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e8f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e1d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x713bfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617534, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) open_device_reg_key;
    
    // [_CmOpenDeviceRegKeyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43f030, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c182c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x713d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617f84, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) open_device_reg_key_worker;
    
    // [_CmOpenInstallerClassRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43973c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5da0b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x732ef8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a9b2c, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) open_installer_class_reg_key;
    
    // [_CmOpenInterfaceClassRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438b00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e68d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728adc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3bb8, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) open_interface_class_reg_key;
    
    // [CmOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ca880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d99e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6baec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ea7e0, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) open_key;
    
    // [CmPerfCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b1d0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cfc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cfc0, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) perf_counters;
    
    // [CmPhysicalAddressExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3e0110, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0f68, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa99a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afed8, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) physical_address_extension;
    
    // [CmPostCallbackNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d5360, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cc490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x744d44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6228d0, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) post_callback_notification;
    
    // [CmProcessorMismatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323660, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47e94, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc142d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47af4, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) processor_mismatch;
    
    // [CmQueryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d66c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c8af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d8d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61ef30, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) query_key;
    
    // [CmQueryLayeredKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b7898, 0x32828 bytes
    // ntoskrnl.exe .text:0x200a58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36fef4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x200a58, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) query_layered_key;
    
    // [CmQueryMultipleValueForLayeredKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b7ce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x869234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66ed04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x867bb4, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) query_multiple_value_for_layered_key;
    
    // [CmQueryMultipleValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e8370, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63e28c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74c644, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65732c, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) query_multiple_value_key;
    
    // [CmQueryRegistryQuotaInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53ca3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75fcfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80f224, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76774c, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) query_registry_quota_information;
    
    // [CmQueryValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4db290, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ca030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d3630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x620470, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) query_value_key;
    
    // [_CmRaiseCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6de934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a644, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ccf18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x752284, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) raise_create_event;
    
    // [_CmRaiseDeleteEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6de9a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x712050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6712cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7199e0, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) raise_delete_event;
    
    // [_CmRaisePropertyChangeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x562090, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x721494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f35dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7292b4, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) raise_property_change_event;
    
    // [CmRealKCBToVirtualPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e1af0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6236f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x668a0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68ed58, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) real_kcb_to_virtual_path;
    
    // [CmReconcileAndValidateAllHives]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608e80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86ede0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa06604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d760, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) reconcile_and_validate_all_hives;
    
    // [CmRegisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571b58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85cf70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be790, 0x1fe000 bytes
    //
    _q04(sdk::function<int32_t(sdk::function<int32_t(void*, void*, void*)>*, void*, int64_t*)>*) register_callback;
    
    // [CmRegisterCallbackEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546564, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x866e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85ced0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x865270, 0x1fe000 bytes
    //
    _q05(sdk::function<int32_t(sdk::function<int32_t(void*, void*, void*)>*, const nt::unicode_view*, void*, void*, int64_t*, void*)>*) register_callback_ex;
    
    // [CmRegisterSystemHiveLimitCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5712d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77e990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839588, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788728, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) register_system_hive_limit_callback;
    
    // [CmRegistryAppName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b500, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53c88, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf60, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) registry_app_name;
    
    // [CmRegistryContainersName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b510, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53960, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc50, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) registry_containers_name;
    
    // [CmRegistryIODebug]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aec8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2caa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53828, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2caa0, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) registry_io_debug;
    
    // [CmRegistryMachineHardwareDescriptionName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b4b0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53ca8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf20, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) registry_machine_hardware_description_name;
    
    // [CmRegistryMachineHardwareDescriptionSystemName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74aeb8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c988, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53730, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c990, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) registry_machine_hardware_description_system_name;
    
    // [CmRegistryMachineHardwareDeviceMapName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b4c0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf30, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf30, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) registry_machine_hardware_device_map_name;
    
    // [CmRegistryMachineHardwareName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b4a0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53c98, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf10, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) registry_machine_hardware_name;
    
    // [CmRegistryMachineHardwareOwnerMapName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b630, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53e18, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0b8, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) registry_machine_hardware_owner_map_name;
    
    // [CmRegistryMachineHardwareResourceMapName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b150, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53970, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc40, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) registry_machine_hardware_resource_map_name;
    
    // [CmRegistryMachineName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b190, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53740, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9b0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) registry_machine_name;
    
    // [CmRegistryMachineSystemCurrentControlSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b080, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53840, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cab8, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) registry_machine_system_current_control_set;
    
    // [CmRegistryMachineSystemCurrentControlSetControlBootLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b1b0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd539b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc90, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) registry_machine_system_current_control_set_control_boot_log;
    
    // [CmRegistryMachineSystemCurrentControlSetControlClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b670, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53de8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0f8, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) registry_machine_system_current_control_set_control_class;
    
    // [CmRegistryMachineSystemCurrentControlSetControlSafeBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b1c0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc60, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd539e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc60, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) registry_machine_system_current_control_set_control_safe_boot;
    
    // [CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b1a0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc80, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd538d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc80, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) registry_machine_system_current_control_set_control_session_manager_memory_management;
    
    // [CmRegistryMachineSystemCurrentControlSetEnumName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b640, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53e28, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0d8, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) registry_machine_system_current_control_set_enum_name;
    
    // [CmRegistryMachineSystemCurrentControlSetEnumRootName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b650, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53df8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0c8, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) registry_machine_system_current_control_set_enum_root_name;
    
    // [CmRegistryMachineSystemCurrentControlSetHardwareProfilesCurrent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b660, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53e08, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d0e8, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) registry_machine_system_current_control_set_hardware_profiles_current;
    
    // [CmRegistryMachineSystemCurrentControlSetServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae30, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c908, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd536b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c908, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) registry_machine_system_current_control_set_services;
    
    // [CmRegistryMachineSystemCurrentControlSetServicesEventLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b4d0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53c58, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf40, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) registry_machine_system_current_control_set_services_event_log;
    
    // [CmRegistryMachineSystemName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b160, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd539c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cc70, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) registry_machine_system_name;
    
    // [CmRegistryRootName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b180, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb68, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd538b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb68, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) registry_root_name;
    
    // [CmRegistrySizeLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1b8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51148, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1b0, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) registry_size_limit;
    
    // [CmRegistrySizeLimitLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a150, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b154, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51114, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b158, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) registry_size_limit_length;
    
    // [CmRegistrySizeLimitType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a154, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b158, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51118, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b154, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) registry_size_limit_type;
    
    // [CmRegistryTransactionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3236d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47ed0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc139a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47b38, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) registry_transaction_type;
    
    // [CmRegistryUserName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b4e0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf50, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53c68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cf50, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) registry_user_name;
    
    // [CmReleaseLoadKeyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41aef8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7de198, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d900, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) release_load_key_context;
    
    // [_CmRemoveDeviceFromContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dd2e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70ff9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x670f58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71792c, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) remove_device_from_container;
    
    // [_CmRemoveDeviceFromContainerWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dd414, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7100d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67109c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717a60, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) remove_device_from_container_worker;
    
    // [CmRenameKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x603890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86969c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa06d48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86801c, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) rename_key;
    
    // [CmReplaceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6043e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86aac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa083f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x869448, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) replace_key;
    
    // [CmRestoreKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x611874, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x879218, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fdf4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x877768, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) restore_key;
    
    // [CmRmFinalizeRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41c3bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675cec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9488, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8f28, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) rm_finalize_recovery;
    
    // [CmRmIsKCBVisible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479828, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cca10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b880c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x622e50, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) rm_is_kcb_visible;
    
    // [CmRmSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3242f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c330, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64500, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c310, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) rm_system;
    
    // [CmSaveKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x612240, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70cf5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fec90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7148ec, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) save_key;
    
    // [CmSaveMergedKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x612498, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x879d6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ff080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8782bc, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) save_merged_keys;
    
    // [CmSelectQualifiedInstallLanguage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79903c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa59c6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb49854, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa59b14, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) select_qualified_install_language;
    
    // [CmSelfHeal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ba0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f78, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) self_heal;
    
    // [_CmServiceFilterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6de514, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x974040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa544b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x972920, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) service_filter_callback;
    
    // [CmSetAcpiHwProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x540874, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x782978, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x857154, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c718, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) set_acpi_hw_profile;
    
    // [CmSetCallbackObjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6012a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ca6e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5caf80, 0x1fe000 bytes
    //
    _q49(sdk::function<int32_t(void*, int64_t*, void*, void**)>*) set_callback_object_context;
    
    // [_CmSetDeviceContainerMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dd610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x710600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x677604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x717f90, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) set_device_container_mapped_property;
    
    // [_CmSetDeviceInterfaceMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x567420, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7477ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca3c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x751584, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) set_device_interface_mapped_property;
    
    // [_CmSetDeviceInterfaceMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e1130, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7478fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ca51c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7516d4, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) set_device_interface_mapped_property_from_reg_value;
    
    // [_CmSetDeviceInterfacePathFormat]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438ac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e6890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72931c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3b70, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) set_device_interface_path_format;
    
    // [_CmSetDeviceMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435de8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72db98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72c5b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7359b8, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) set_device_mapped_property;
    
    // [_CmSetDeviceMappedPropertyFromDriverKeyRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e13f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72dddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8021e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x735bfc, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) set_device_mapped_property_from_driver_key_reg_value;
    
    // [_CmSetDeviceMappedPropertyFromInstanceKeyRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e15e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978848, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa58158, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x977128, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) set_device_mapped_property_from_instance_key_reg_value;
    
    // [_CmSetDeviceMappedPropertyFromRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e178c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72dfb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f2e84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x735dd8, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) set_device_mapped_property_from_reg_prop;
    
    // [_CmSetDeviceRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500f00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7210d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f31e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x728ef0, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) set_device_reg_prop;
    
    // [_CmSetDeviceRegPropWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561f18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x721238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3348, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x729058, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) set_device_reg_prop_worker;
    
    // [_CmSetInstallerClassMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e1940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x714e9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x675f74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71c8dc, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) set_installer_class_mapped_property;
    
    // [_CmSetInstallerClassMappedPropertyFromCoInstallers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e1b68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9789fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa58314, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9772dc, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) set_installer_class_mapped_property_from_co_installers;
    
    // [_CmSetInstallerClassMappedPropertyFromRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e1be0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978a78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa58390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x977358, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) set_installer_class_mapped_property_from_reg_prop;
    
    // [_CmSetInstallerClassMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e1d24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x714fe0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6760b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ca20, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) set_installer_class_mapped_property_from_reg_value;
    
    // [_CmSetInstallerClassRegProp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dc088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9726f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa52bbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x970fd4, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) set_installer_class_reg_prop;
    
    // [_CmSetInstallerClassRegPropWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dc1e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x972858, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa52d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971138, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) set_installer_class_reg_prop_worker;
    
    // [_CmSetInterfaceClassMappedProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e2048, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa584f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9774c0, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) set_interface_class_mapped_property;
    
    // [_CmSetInterfaceClassMappedPropertyFromRegValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e2184, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978d24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa58634, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x977604, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) set_interface_class_mapped_property_from_reg_value;
    
    // [CmSetKeyFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6046cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86ad78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa086b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8696f8, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) set_key_flags;
    
    // [CmSetLastWriteTimeKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x604b64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86b234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa08bcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x869bb4, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) set_last_write_time_key;
    
    // [CmSetLazyFlushState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x524d00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x757adc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa04ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75f66c, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) set_lazy_flush_state;
    
    // [CmSetRegistryQuotaInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602628, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86826c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02d18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866ccc, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) set_registry_quota_information;
    
    // [CmSetValueKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e64f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c2d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6dd610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x619160, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) set_value_key;
    
    // [CmShutdownCmRM]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419d00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63c968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b504, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x658b74, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) shutdown_cm_rm;
    
    // [CmShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x602944, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x868518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa044e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866f78, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) shutdown_system;
    
    // [CmSIDMappingCacheHit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5d94, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f0e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc097bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f128, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) sid_mapping_cache_hit;
    
    // [CmSnapshotRMTxArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50a140, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63d004, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79b430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6584a4, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) snapshot_rm_tx_array;
    
    // [CmSuiteBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce8f0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54c60, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f9e0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54c60, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) suite_buffer;
    
    // [CmSuiteBufferLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce16c, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd5418c, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f18c, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd5418c, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) suite_buffer_length;
    
    // [CmSuiteBufferType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce154, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54164, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f170, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54164, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) suite_buffer_type;
    
    // [CmSymbolicLinkValueName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ae10, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c868, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c868, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) symbolic_link_value_name;
    
    // [CmSystemHiveLimitSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327040, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50910, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7648, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50910, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) system_hive_limit_size;
    
    // [CmThawRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x608bdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86eb68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa06a14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86d4e8, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) thaw_registry;
    
    // [CmTmCreateEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4754d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7488b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79be98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750170, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) tm_create_enlistment;
    
    // [CmTypeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74be20, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d970, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd544c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d970, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) type_name;
    
    // [CmTypeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6edb80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65f80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980c70, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) type_string;
    
    // [CmUnRegisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x601434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x866e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa02480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8652c0, 0x1fe000 bytes
    //
    _q86(sdk::function<int32_t(int64_t)>*) un_register_callback;
    
    // [CmUnloadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50a53c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63b04c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x799b58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6595a8, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) unload_key;
    
    // [CmUnlockHiveSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ee7f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x625450, 0x1fe000 bytes
    // ntoskrnl.exe PAGECMRC:0xae1520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6961d8, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) unlock_hive_security;
    
    // [_CmValidateDeviceContainerName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501d9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cea30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f4558, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d97b0, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) validate_device_container_name;
    
    // [_CmValidateDeviceInterfaceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e0e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dc46c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x713a60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aa0f8, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) validate_device_interface_name;
    
    // [_CmValidateDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43f570, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dd5f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7142f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617cf0, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) validate_device_name;
    
    // [_CmValidateInstallerClassName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5da0fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x729ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aa058, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) validate_installer_class_name;
    
    // [_CmValidateInterfaceClassName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5da0fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x729ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aa058, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) validate_interface_class_name;
    
    // [CmVEEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ba4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdd0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f80, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) ve_enabled;
    
    // [CmVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324230, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c000, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64110, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bfe0, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) version_string;
    
    // [CmVirtualKCBToRealPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x606760, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x86cb4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa0ae48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x86b4cc, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) virtual_kcb_to_real_path;
    
    // [CmRegUtilWstrValueSetFullBuffer]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6d82c, 0x1cf0 bytes
    // pci.sys PAGE:0x76af0, 0x1cf0 bytes
    // pci.sys PAGE:0x6b78c, 0x1cf0 bytes
    //
    _q97(sdk::function<int32_t(void*, wchar_t*, uint32_t, void*, uint32_t)>*) reg_util_wstr_value_set_full_buffer;
    
    // [CmRegUtilCreateUcKey]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4fefc, 0x1d08 bytes
    // pci.sys PAGE:0x6d358, 0x1cf0 bytes
    // pci.sys PAGE:0x76618, 0x1cf0 bytes
    // pci.sys PAGE:0x6b2b8, 0x1cf0 bytes
    //
    _q98(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t, void*, uint32_t*, void**)>*) reg_util_create_uc_key;
    
    // [CmRegUtilCreateWstrKey]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ff98, 0x1d08 bytes
    // pci.sys PAGE:0x6d400, 0x1cf0 bytes
    // pci.sys PAGE:0x766c0, 0x1cf0 bytes
    // pci.sys PAGE:0x6b360, 0x1cf0 bytes
    //
    _q99(sdk::function<int32_t(void*, wchar_t*, uint32_t, uint32_t, void*, uint32_t*, void**)>*) reg_util_create_wstr_key;
    
    // [CmRegUtilOpenExistingUcKey]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ffe8, 0x1d08 bytes
    // pci.sys PAGE:0x6d460, 0x1cf0 bytes
    // pci.sys PAGE:0x76720, 0x1cf0 bytes
    // pci.sys PAGE:0x6b3c0, 0x1cf0 bytes
    //
    _r00(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, void**)>*) reg_util_open_existing_uc_key;
    
    // [CmRegUtilOpenExistingWstrKey]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x50040, 0x1d08 bytes
    // pci.sys PAGE:0x6d4d4, 0x1cf0 bytes
    // pci.sys PAGE:0x76798, 0x1cf0 bytes
    // pci.sys PAGE:0x6b434, 0x1cf0 bytes
    //
    _r01(sdk::function<int32_t(void*, wchar_t*, uint32_t, void**)>*) reg_util_open_existing_wstr_key;
    
    // [CmRegUtilUcValueGetDword]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x50070, 0x1d08 bytes
    // pci.sys PAGE:0x6d510, 0x1cf0 bytes
    // pci.sys PAGE:0x767d4, 0x1cf0 bytes
    // pci.sys PAGE:0x6b470, 0x1cf0 bytes
    //
    _r02(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t*)>*) reg_util_uc_value_get_dword;
    
    // [CmRegUtilUcValueGetFullBuffer]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x500e0, 0x1d08 bytes
    // pci.sys PAGE:0x6d590, 0x1cf0 bytes
    // pci.sys PAGE:0x76854, 0x1cf0 bytes
    // pci.sys PAGE:0x6b4f0, 0x1cf0 bytes
    //
    _r03(sdk::function<int32_t(void*, nt::unicode_view*, uint32_t, uint32_t, struct nt::key_value_full_information_t**)>*) reg_util_uc_value_get_full_buffer;
    
    // [CmRegUtilUcValueSetUcString]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x501f8, 0x1d08 bytes
    // pci.sys PAGE:0x6d6dc, 0x1cf0 bytes
    // pci.sys PAGE:0x769a0, 0x1cf0 bytes
    // pci.sys PAGE:0x6b63c, 0x1cf0 bytes
    //
    _r04(sdk::function<int32_t(void*, nt::unicode_view*, nt::unicode_view*)>*) reg_util_uc_value_set_uc_string;
    
    // [CmRegUtilWstrValueGetDword]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x5031c, 0x1d08 bytes
    // pci.sys PAGE:0x6d7f4, 0x1cf0 bytes
    // pci.sys PAGE:0x76ab8, 0x1cf0 bytes
    // pci.sys PAGE:0x6b754, 0x1cf0 bytes
    //
    _r05(sdk::function<int32_t(void*, wchar_t*, uint32_t, uint32_t*)>*) reg_util_wstr_value_get_dword;
    
    // [CmRegUtilWstrValueSetWstrString]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x50344, 0x1d08 bytes
    // pci.sys PAGE:0x6d888, 0x1cf0 bytes
    // pci.sys PAGE:0x76b4c, 0x1cf0 bytes
    // pci.sys PAGE:0x6b7e8, 0x1cf0 bytes
    //
    _r06(sdk::function<int32_t(void*, wchar_t*, wchar_t*)>*) reg_util_wstr_value_set_wstr_string;
};
#include "magic/api.end.hpp"
