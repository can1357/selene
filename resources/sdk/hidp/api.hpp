#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace hidp
{
    // [HidpCollectionFreeUnreadReports]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x1273c, 0x2bf0 bytes
    //
    _m0(sdk::unknown_ptr) collection_free_unread_reports;
    
    // [HidpFdoAllocCollectionResources]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x31f84, 0x2bf0 bytes
    //
    _m1(sdk::unknown_ptr) fdo_alloc_collection_resources;
    
    // [HidpFdoAllocDeviceResources]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x321b4, 0x2bf0 bytes
    //
    _m2(sdk::unknown_ptr) fdo_alloc_device_resources;
    
    // [HidpFdoAllocateIfrRecorderLogs]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x324b4, 0x2bf0 bytes
    //
    _m3(sdk::unknown_ptr) fdo_allocate_ifr_recorder_logs;
    
    // [HidpFdoCreateCollectionPdos]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x32768, 0x2bf0 bytes
    //
    _m4(sdk::unknown_ptr) fdo_create_collection_pdos;
    
    // [HidpFdoFreeCollectionResources]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x32988, 0x2bf0 bytes
    //
    _m5(sdk::unknown_ptr) fdo_free_collection_resources;
    
    // [HidpFdoFreeDeviceResources]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x32a6c, 0x2bf0 bytes
    //
    _m6(sdk::unknown_ptr) fdo_free_device_resources;
    
    // [HidpFdoInitializeCollection]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x32bd8, 0x2bf0 bytes
    //
    _m7(sdk::unknown_ptr) fdo_initialize_collection;
    
    // [HidpFdoPowerSettingCallback]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x12aa0, 0x2bf0 bytes
    //
    _m8(sdk::unknown_ptr) fdo_power_setting_callback;
    
    // [HidpFdoQueryCapsCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0xfe70, 0x2bf0 bytes
    //
    _m9(sdk::unknown_ptr) fdo_query_caps_completion;
    
    // [HidpFdoQueryDeviceCapabilities]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x31e4c, 0x2bf0 bytes
    //
    _n0(sdk::unknown_ptr) fdo_query_device_capabilities;
    
    // [HidpFdoQueryDeviceRelations]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x10b54, 0x2bf0 bytes
    //
    _n1(sdk::unknown_ptr) fdo_query_device_relations;
    
    // [HidpFdoRegistryQueryULong]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0xf910, 0x2bf0 bytes
    //
    _n2(sdk::unknown_ptr) fdo_registry_query_u_long;
    
    // [HidpFdoRemoveDevice]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x32d40, 0x2bf0 bytes
    //
    _n3(sdk::unknown_ptr) fdo_remove_device;
    
    // [HidpFdoStartDevice]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x32f54, 0x2bf0 bytes
    //
    _n4(sdk::unknown_ptr) fdo_start_device;
    
    // [HidpFdoUpdateOpenHandleCount]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x13f08, 0x1a48 bytes
    //
    _n5(sdk::unknown_ptr) fdo_update_open_handle_count;
    
    // [HidpGetDeviceResetSettings]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys PAGE:0x206b0, 0x1a48 bytes
    //
    _n6(sdk::unknown_ptr) get_device_reset_settings;
    
    // [HidpGetFilterDriverTypes]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x13cf4, 0x2bf0 bytes
    //
    _n7(sdk::unknown_ptr) get_filter_driver_types;
    
    // [HidpGetFunctionDriverType]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x1407c, 0x2bf0 bytes
    //
    _n8(sdk::unknown_ptr) get_function_driver_type;
    
    // [HidpGetPdoReenumerateSelfInterfaceEnabled]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x31398, 0x2bf0 bytes
    //
    _n9(sdk::unknown_ptr) get_pdo_reenumerate_self_interface_enabled;
    
    // [HidpGetPhysicalDescriptor]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0xf9a8, 0x1a48 bytes
    //
    _o0(sdk::unknown_ptr) get_physical_descriptor;
    
    // [HidpGetWinRtInterfaceRestrictionLevel]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x315b4, 0x2bf0 bytes
    //
    _o1(sdk::unknown_ptr) get_win_rt_interface_restriction_level;
    
    // [HidpPdoQueryReenumerateSelfInterface]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x341ec, 0x2bf0 bytes
    //
    _o2(sdk::unknown_ptr) pdo_query_reenumerate_self_interface;
    
    // [HidpPdoRecreateCollectionPdo]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x332e0, 0x2bf0 bytes
    //
    _o3(sdk::unknown_ptr) pdo_recreate_collection_pdo;
    
    // [HidpPdoReenumerateSelfInterfaceDereference]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x34260, 0x2bf0 bytes
    //
    _o4(sdk::unknown_ptr) pdo_reenumerate_self_interface_dereference;
    
    // [HidpPdoReenumerateSelfInterfaceReference]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x34260, 0x2bf0 bytes
    //
    _o5(sdk::unknown_ptr) pdo_reenumerate_self_interface_reference;
    
    // [HidpPdoReenumerateSelfInterfaceSurpriseRemoveAndReenumerateSelf]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x34270, 0x2bf0 bytes
    //
    _o6(sdk::unknown_ptr) pdo_reenumerate_self_interface_surprise_remove_and_reenumerate_self;
    
    // [HidpPdoRegisterDeviceInterface]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x3338c, 0x2bf0 bytes
    //
    _o7(sdk::unknown_ptr) pdo_register_device_interface;
    
    // [HidpPdoRemoveDevice]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x33708, 0x2bf0 bytes
    //
    _o8(sdk::unknown_ptr) pdo_remove_device;
    
    // [HidpPdoSetProperties]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x339b4, 0x2bf0 bytes
    //
    _o9(sdk::unknown_ptr) pdo_set_properties;
    
    // [HidpPdoStartDevice]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x33d68, 0x2bf0 bytes
    //
    _p0(sdk::unknown_ptr) pdo_start_device;
    
    // [HidpPdoUnregisterDeviceInterface]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x33f9c, 0x2bf0 bytes
    //
    _p1(sdk::unknown_ptr) pdo_unregister_device_interface;
    
    // [HidpSystemInputSuppressionWnfCallbackRoutine]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x12d50, 0x2bf0 bytes
    //
    _p2(sdk::unknown_ptr) system_input_suppression_wnf_callback_routine;
    
    // [HidpInputSuppressWnfCallbackRoutine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .text:0x1ccb0, 0x2bf0 bytes
    // hidclass.sys .text:0x1ccb0, 0x2bf0 bytes
    //
    _p3(sdk::unknown_ptr) input_suppress_wnf_callback_routine;
    
    // [HidpConnectedStandbyCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .text:0x12710, 0x1a48 bytes
    // hidclass.sys .text:0xeeb0, 0x2bf0 bytes
    // hidclass.sys .text:0xeeb0, 0x2bf0 bytes
    //
    _p4(sdk::unknown_ptr) connected_standby_callback;
    
    // [HidpCreateClientPDOs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x21180, 0x1a48 bytes
    // hidclass.sys PAGE:0x2ff30, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2ff30, 0x2bf0 bytes
    //
    _p5(sdk::unknown_ptr) create_client_pd_os;
    
    // [HidpDfxOptOut]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x2d798, 0x2bf0 bytes
    // hidclass.sys PAGE:0x341c4, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2d798, 0x2bf0 bytes
    //
    _p6(sdk::unknown_ptr) dfx_opt_out;
    
    // [HidpDistributeInterruptReport]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xab00, 0x2bf0 bytes
    // hidclass.sys .text:0xada0, 0x2bf0 bytes
    // hidclass.sys .text:0xab00, 0x2bf0 bytes
    //
    _p7(sdk::unknown_ptr) distribute_interrupt_report;
    
    // [HidpFdoCancelPdoDevicePresenceNotifications]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1ef60, 0x2bf0 bytes
    // hidclass.sys .text:0x21c6c, 0x2bf0 bytes
    // hidclass.sys .text:0x1ef60, 0x2bf0 bytes
    //
    _p8(sdk::unknown_ptr) fdo_cancel_pdo_device_presence_notifications;
    
    // [HidpFdoCompleteDevicePresenceNotification]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1f14c, 0x2bf0 bytes
    // hidclass.sys .text:0x21e58, 0x2bf0 bytes
    // hidclass.sys .text:0x1f14c, 0x2bf0 bytes
    //
    _p9(sdk::unknown_ptr) fdo_complete_device_presence_notification;
    
    // [HidpFdoDrainDevicePresenceNotifications]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1f348, 0x2bf0 bytes
    // hidclass.sys .text:0x22054, 0x2bf0 bytes
    // hidclass.sys .text:0x1f348, 0x2bf0 bytes
    //
    _q0(sdk::unknown_ptr) fdo_drain_device_presence_notifications;
    
    // [HidpFdoEnqueuePdoDevicePresenceNotification]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf350, 0x2bf0 bytes
    // hidclass.sys .text:0xed3c, 0x2bf0 bytes
    // hidclass.sys .text:0xf350, 0x2bf0 bytes
    //
    _q1(sdk::unknown_ptr) fdo_enqueue_pdo_device_presence_notification;
    
    // [HidpFdoGetDeviceProperty]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x2d360, 0x2bf0 bytes
    // hidclass.sys PAGE:0x31a54, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2d360, 0x2bf0 bytes
    //
    _q2(sdk::unknown_ptr) fdo_get_device_property;
    
    // [HidpFdoGetDevicePropertyData]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x2d540, 0x2bf0 bytes
    // hidclass.sys PAGE:0x31c1c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2d540, 0x2bf0 bytes
    //
    _q3(sdk::unknown_ptr) fdo_get_device_property_data;
    
    // [HidpFdoNotifyPdoClientInputSuppression]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11428, 0x2bf0 bytes
    // hidclass.sys .text:0x12e98, 0x2bf0 bytes
    // hidclass.sys .text:0x11428, 0x2bf0 bytes
    //
    _q4(sdk::unknown_ptr) fdo_notify_pdo_client_input_suppression;
    
    // [HidpFdoNotifyPdoIdleTimeout]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1d8b4, 0x2bf0 bytes
    // hidclass.sys .text:0x2053c, 0x2bf0 bytes
    // hidclass.sys .text:0x1d8b4, 0x2bf0 bytes
    //
    _q5(sdk::unknown_ptr) fdo_notify_pdo_idle_timeout;
    
    // [HidpFdoNotifySystemInputSuppression]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1156c, 0x2bf0 bytes
    // hidclass.sys .text:0x12fdc, 0x2bf0 bytes
    // hidclass.sys .text:0x1156c, 0x2bf0 bytes
    //
    _q6(sdk::unknown_ptr) fdo_notify_system_input_suppression;
    
    // [HidpFdoShouldDeviceBeArmedForWakeForS0Idle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1c86c, 0x2bf0 bytes
    // hidclass.sys .text:0x1f63c, 0x2bf0 bytes
    // hidclass.sys .text:0x1c86c, 0x2bf0 bytes
    //
    _q7(sdk::unknown_ptr) fdo_should_device_be_armed_for_wake_for_s0_idle;
    
    // [HidpFdoStopIdleForIo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1c8f8, 0x2bf0 bytes
    // hidclass.sys .text:0x1f6c8, 0x2bf0 bytes
    // hidclass.sys .text:0x1c8f8, 0x2bf0 bytes
    //
    _q8(sdk::unknown_ptr) fdo_stop_idle_for_io;
    
    // [HidpFdoUpdateOpenCounts]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x116f0, 0x2bf0 bytes
    // hidclass.sys .text:0x13160, 0x2bf0 bytes
    // hidclass.sys .text:0x116f0, 0x2bf0 bytes
    //
    _q9(sdk::unknown_ptr) fdo_update_open_counts;
    
    // [HidpGetComboHardwareIdV2Enabled]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x2d13c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x3117c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2d13c, 0x2bf0 bytes
    //
    _r0(sdk::unknown_ptr) get_combo_hardware_id_v2_enabled;
    
    // [HidpGetIoctlSupportabilities]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x30da0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x38090, 0x2bf0 bytes
    // hidclass.sys PAGE:0x30da0, 0x2bf0 bytes
    //
    _r1(sdk::unknown_ptr) get_ioctl_supportabilities;
    
    // [HidpPdoDevicePresenceNotificationCancelRoutine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1f580, 0x2bf0 bytes
    // hidclass.sys .text:0x22280, 0x2bf0 bytes
    // hidclass.sys .text:0x1f580, 0x2bf0 bytes
    //
    _r2(sdk::unknown_ptr) pdo_device_presence_notification_cancel_routine;
    
    // [HidpProcessInterruptReport]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x55c4, 0x2bf0 bytes
    // hidclass.sys .text:0x5674, 0x2bf0 bytes
    // hidclass.sys .text:0x55c4, 0x2bf0 bytes
    //
    _r3(sdk::unknown_ptr) process_interrupt_report;
    
    // [HidpProcessInterruptReportForCollection]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x16ff0, 0x2bf0 bytes
    // hidclass.sys .text:0x19d50, 0x2bf0 bytes
    // hidclass.sys .text:0x16ff0, 0x2bf0 bytes
    //
    _r4(sdk::unknown_ptr) process_interrupt_report_for_collection;
    
    // [HidpQueryCapsCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .text:0x7270, 0x1a48 bytes
    // hidclass.sys .text:0xfa90, 0x2bf0 bytes
    // hidclass.sys .text:0xfa90, 0x2bf0 bytes
    //
    _r5(sdk::unknown_ptr) query_caps_completion;
    
    // [HidpQueryDeviceCapabilities]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x20000, 0x1a48 bytes
    // hidclass.sys PAGE:0x33304, 0x2bf0 bytes
    // hidclass.sys PAGE:0x33304, 0x2bf0 bytes
    //
    _r6(sdk::unknown_ptr) query_device_capabilities;
    
    // [HidpQueryDeviceRelations]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x20a50, 0x1a48 bytes
    // hidclass.sys PAGE:0x2efa0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2efa0, 0x2bf0 bytes
    //
    _r7(sdk::unknown_ptr) query_device_relations;
    
    // [HidpRegisterDeviceInterface]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x22520, 0x1a48 bytes
    // hidclass.sys PAGE:0x31bb0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x31bb0, 0x2bf0 bytes
    //
    _r8(sdk::unknown_ptr) register_device_interface;
    
    // [HidpRegisterSleepstudyBlockerReason]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd710, 0x2bf0 bytes
    // hidclass.sys .text:0xd8d0, 0x2bf0 bytes
    // hidclass.sys .text:0xd710, 0x2bf0 bytes
    //
    _r9(sdk::unknown_ptr) register_sleepstudy_blocker_reason;
    
    // [HidpRegisterSleepstudyBlockerReasons]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd390, 0x2bf0 bytes
    // hidclass.sys .text:0xd580, 0x2bf0 bytes
    // hidclass.sys .text:0xd390, 0x2bf0 bytes
    //
    _s0(sdk::unknown_ptr) register_sleepstudy_blocker_reasons;
    
    // [HidpRemoveCollectionPDO]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x27b24, 0x1a48 bytes
    // hidclass.sys PAGE:0x35f60, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35f60, 0x2bf0 bytes
    //
    _s1(sdk::unknown_ptr) remove_collection_pdo;
    
    // [HidpRemoveDevice]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x27c98, 0x1a48 bytes
    // hidclass.sys PAGE:0x36108, 0x2bf0 bytes
    // hidclass.sys PAGE:0x36108, 0x2bf0 bytes
    //
    _s2(sdk::unknown_ptr) remove_device;
    
    // [HidpSetProperties]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x22620, 0x1a48 bytes
    // hidclass.sys PAGE:0x318e0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x318e0, 0x2bf0 bytes
    //
    _s3(sdk::unknown_ptr) set_properties;
    
    // [HidpStartCollectionPDO]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x22260, 0x1a48 bytes
    // hidclass.sys PAGE:0x31550, 0x2bf0 bytes
    // hidclass.sys PAGE:0x31550, 0x2bf0 bytes
    //
    _s4(sdk::unknown_ptr) start_collection_pdo;
    
    // [HidpStartDevice]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x200e0, 0x1a48 bytes
    // hidclass.sys PAGE:0x32830, 0x2bf0 bytes
    // hidclass.sys PAGE:0x32830, 0x2bf0 bytes
    //
    _s5(sdk::unknown_ptr) start_device;
    
    // [HidpUnregisterDeviceInterface]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x27e18, 0x1a48 bytes
    // hidclass.sys PAGE:0x362fc, 0x2bf0 bytes
    // hidclass.sys PAGE:0x362fc, 0x2bf0 bytes
    //
    _s6(sdk::unknown_ptr) unregister_device_interface;
    
    // [HidpUnregisterSleepstudyBlockerReasons]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x18bbc, 0x2bf0 bytes
    // hidclass.sys .text:0x1b990, 0x2bf0 bytes
    // hidclass.sys .text:0x18bbc, 0x2bf0 bytes
    //
    _s7(sdk::unknown_ptr) unregister_sleepstudy_blocker_reasons;
    
    // [HidpWppDumpCollection]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xcad0, 0x2bf0 bytes
    // hidclass.sys .text:0xcd60, 0x2bf0 bytes
    // hidclass.sys .text:0xcad0, 0x2bf0 bytes
    //
    _s8(sdk::unknown_ptr) wpp_dump_collection;
    
    // [HidpWppDumpFdo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xc830, 0x2bf0 bytes
    // hidclass.sys .text:0xcac0, 0x2bf0 bytes
    // hidclass.sys .text:0xc830, 0x2bf0 bytes
    //
    _s9(sdk::unknown_ptr) wpp_dump_fdo;
    
    // [HidpWppDumpFdoPowerData]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xcc60, 0x2bf0 bytes
    // hidclass.sys .text:0xcef0, 0x2bf0 bytes
    // hidclass.sys .text:0xcc60, 0x2bf0 bytes
    //
    _t0(sdk::unknown_ptr) wpp_dump_fdo_power_data;
    
    // [HidpWppDumpFdoPowerTracker]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3b5c, 0x2bf0 bytes
    // hidclass.sys .text:0x3b88, 0x2bf0 bytes
    // hidclass.sys .text:0x3b5c, 0x2bf0 bytes
    //
    _t1(sdk::unknown_ptr) wpp_dump_fdo_power_tracker;
    
    // [HidpWppRundown]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x102b4, 0x2bf0 bytes
    // hidclass.sys .text:0x10fd4, 0x2bf0 bytes
    // hidclass.sys .text:0x102b4, 0x2bf0 bytes
    //
    _t2(sdk::unknown_ptr) wpp_rundown;
    
    // [HidpWriteReport]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x9c60, 0x2bf0 bytes
    // hidclass.sys .text:0x5e40, 0x2bf0 bytes
    // hidclass.sys .text:0x9c60, 0x2bf0 bytes
    //
    _t3(sdk::unknown_ptr) write_report;
    
    // [HidpAddDevice]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x202f0, 0x1a48 bytes
    // hidclass.sys PAGE:0x30510, 0x2bf0 bytes
    // hidclass.sys PAGE:0x377b0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x30510, 0x2bf0 bytes
    //
    _t4(sdk::unknown_ptr) add_device;
    
    // [HidpAllocatePingPongIrps]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x22c5c, 0x1a48 bytes
    // hidclass.sys PAGE:0x32540, 0x2bf0 bytes
    // hidclass.sys PAGE:0x37138, 0x2bf0 bytes
    // hidclass.sys PAGE:0x32540, 0x2bf0 bytes
    //
    _t5(sdk::unknown_ptr) allocate_ping_pong_irps;
    
    // [HidpAsynchronousCallCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x2340, 0x1a48 bytes
    // hidclass.sys .text:0x15410, 0x2bf0 bytes
    // hidclass.sys .text:0x180d0, 0x2bf0 bytes
    // hidclass.sys .text:0x15410, 0x2bf0 bytes
    //
    _t6(sdk::unknown_ptr) asynchronous_call_completion;
    
    // [HidpCallDriver]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x41b0, 0x1a48 bytes
    // hidclass.sys .text:0x38d0, 0x2bf0 bytes
    // hidclass.sys .text:0x2d90, 0x2bf0 bytes
    // hidclass.sys .text:0x38d0, 0x2bf0 bytes
    //
    _t7(sdk::unknown_ptr) call_driver;
    
    // [HidpCallDriverAsynchronous]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1884, 0x1a48 bytes
    // hidclass.sys .text:0x15444, 0x2bf0 bytes
    // hidclass.sys .text:0x18104, 0x2bf0 bytes
    // hidclass.sys .text:0x15444, 0x2bf0 bytes
    //
    _t8(sdk::unknown_ptr) call_driver_asynchronous;
    
    // [HidpCallDriverSynchronous]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x221f0, 0x1a48 bytes
    // hidclass.sys PAGE:0x331c0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x38ef0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x331c0, 0x2bf0 bytes
    //
    _t9(sdk::unknown_ptr) call_driver_synchronous;
    
    // [HidpCancelReadIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7150, 0x1a48 bytes
    // hidclass.sys .text:0x52c0, 0x2bf0 bytes
    // hidclass.sys .text:0x5370, 0x2bf0 bytes
    // hidclass.sys .text:0x52c0, 0x2bf0 bytes
    //
    _u0(sdk::unknown_ptr) cancel_read_irp;
    
    // [HidpCheckRemoteWakeEnabled]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xc750, 0x1a48 bytes
    // hidclass.sys .text:0x13f20, 0x2bf0 bytes
    // hidclass.sys .text:0x16c94, 0x2bf0 bytes
    // hidclass.sys .text:0x13f20, 0x2bf0 bytes
    //
    _u1(sdk::unknown_ptr) check_remote_wake_enabled;
    
    // [HidpCleanUpFdo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x27a10, 0x1a48 bytes
    // hidclass.sys PAGE:0x35d70, 0x2bf0 bytes
    // hidclass.sys PAGE:0x3a920, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35d70, 0x2bf0 bytes
    //
    _u2(sdk::unknown_ptr) clean_up_fdo;
    
    // [HidpCopyInputReportToUser]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf5e0, 0x1a48 bytes
    // hidclass.sys .text:0x57a4, 0x2bf0 bytes
    // hidclass.sys .text:0x58f4, 0x2bf0 bytes
    // hidclass.sys .text:0x57a4, 0x2bf0 bytes
    //
    _u3(sdk::unknown_ptr) copy_input_report_to_user;
    
    // [HidpCreateRemoteWakeIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x26704, 0x1a48 bytes
    // hidclass.sys PAGE:0x345d4, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39308, 0x2bf0 bytes
    // hidclass.sys PAGE:0x345d4, 0x2bf0 bytes
    //
    _u4(sdk::unknown_ptr) create_remote_wake_irp;
    
    // [HidpCreateRemoteWakeIrpWorker]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x26810, 0x1a48 bytes
    // hidclass.sys PAGE:0x34730, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39470, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34730, 0x2bf0 bytes
    //
    _u5(sdk::unknown_ptr) create_remote_wake_irp_worker;
    
    // [HidpDbgBreak]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf680, 0x1a48 bytes
    // hidclass.sys .text:0x17b2c, 0x2bf0 bytes
    // hidclass.sys .text:0x1a938, 0x2bf0 bytes
    // hidclass.sys .text:0x17b2c, 0x2bf0 bytes
    //
    _u6(sdk::unknown_ptr) dbg_break;
    
    // [HidpDeleteDeviceObjects]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x27040, 0x1a48 bytes
    // hidclass.sys PAGE:0x350e4, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39de4, 0x2bf0 bytes
    // hidclass.sys PAGE:0x350e4, 0x2bf0 bytes
    //
    _u7(sdk::unknown_ptr) delete_device_objects;
    
    // [HidpDriverUnload]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x27a90, 0x1a48 bytes
    // hidclass.sys PAGE:0x35ea0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x3aa50, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35ea0, 0x2bf0 bytes
    //
    _u8(sdk::unknown_ptr) driver_unload;
    
    // [HidpEtwRundown]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf6b4, 0x1a48 bytes
    // hidclass.sys .text:0x17b84, 0x2bf0 bytes
    // hidclass.sys .text:0x1a990, 0x2bf0 bytes
    // hidclass.sys .text:0x17b84, 0x2bf0 bytes
    //
    _u9(sdk::unknown_ptr) etw_rundown;
    
    // [HidpFdoAcquirePoFxPowerReferenceWithTag]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5b1c, 0x1a48 bytes
    // hidclass.sys .text:0x7c40, 0x2bf0 bytes
    // hidclass.sys .text:0x7ce0, 0x2bf0 bytes
    // hidclass.sys .text:0x7c40, 0x2bf0 bytes
    //
    _v0(sdk::unknown_ptr) fdo_acquire_po_fx_power_reference_with_tag;
    
    // [HidpFdoCancelPdoDeviceResetNotifications]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14868, 0x1a48 bytes
    // hidclass.sys .text:0x1e574, 0x2bf0 bytes
    // hidclass.sys .text:0x21144, 0x2bf0 bytes
    // hidclass.sys .text:0x1e574, 0x2bf0 bytes
    //
    _v1(sdk::unknown_ptr) fdo_cancel_pdo_device_reset_notifications;
    
    // [HidpFdoCancelWaitWakeIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12958, 0x1a48 bytes
    // hidclass.sys .text:0x1c200, 0x2bf0 bytes
    // hidclass.sys .text:0x1efd4, 0x2bf0 bytes
    // hidclass.sys .text:0x1c200, 0x2bf0 bytes
    //
    _v2(sdk::unknown_ptr) fdo_cancel_wait_wake_irp;
    
    // [HidpFdoCompletePendingS0IrpIfFastResumeDisabled]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x129c4, 0x1a48 bytes
    // hidclass.sys .text:0x1c27c, 0x2bf0 bytes
    // hidclass.sys .text:0x1f050, 0x2bf0 bytes
    // hidclass.sys .text:0x1c27c, 0x2bf0 bytes
    //
    _v3(sdk::unknown_ptr) fdo_complete_pending_s0_irp_if_fast_resume_disabled;
    
    // [HidpFdoCompletePoFxPowerRequired]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x457c, 0x1a48 bytes
    // hidclass.sys .text:0xc2b4, 0x2bf0 bytes
    // hidclass.sys .text:0xc754, 0x2bf0 bytes
    // hidclass.sys .text:0xc2b4, 0x2bf0 bytes
    //
    _v4(sdk::unknown_ptr) fdo_complete_po_fx_power_required;
    
    // [HidpFdoCompleteSIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x429c, 0x1a48 bytes
    // hidclass.sys .text:0x5994, 0x2bf0 bytes
    // hidclass.sys .text:0x5ae4, 0x2bf0 bytes
    // hidclass.sys .text:0x5994, 0x2bf0 bytes
    //
    _v5(sdk::unknown_ptr) fdo_complete_s_irp;
    
    // [HidpFdoConfigureIdleSettings]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x20d20, 0x1a48 bytes
    // hidclass.sys PAGE:0x2f2a0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x36620, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2f2a0, 0x2bf0 bytes
    //
    _v6(sdk::unknown_ptr) fdo_configure_idle_settings;
    
    // [HidpFdoDeviceResetNotificationCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14a30, 0x1a48 bytes
    // hidclass.sys .text:0x1e770, 0x2bf0 bytes
    // hidclass.sys .text:0x213b0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e770, 0x2bf0 bytes
    //
    _v7(sdk::unknown_ptr) fdo_device_reset_notification_completion;
    
    // [HidpFdoDrainDeviceResetNotifications]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14c64, 0x1a48 bytes
    // hidclass.sys .text:0x1ea10, 0x2bf0 bytes
    // hidclass.sys .text:0x216a4, 0x2bf0 bytes
    // hidclass.sys .text:0x1ea10, 0x2bf0 bytes
    //
    _v8(sdk::unknown_ptr) fdo_drain_device_reset_notifications;
    
    // [HidpFdoEnqueuePdoDeviceResetNotification]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14ef0, 0x1a48 bytes
    // hidclass.sys .text:0x6080, 0x2bf0 bytes
    // hidclass.sys .text:0x9710, 0x2bf0 bytes
    // hidclass.sys .text:0x6080, 0x2bf0 bytes
    //
    _v9(sdk::unknown_ptr) fdo_enqueue_pdo_device_reset_notification;
    
    // [HidpFdoInitializeDevice]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x61f0, 0x1a48 bytes
    // hidclass.sys .text:0xe620, 0x2bf0 bytes
    // hidclass.sys .text:0xdd80, 0x2bf0 bytes
    // hidclass.sys .text:0xe620, 0x2bf0 bytes
    //
    _w0(sdk::unknown_ptr) fdo_initialize_device;
    
    // [HidpFdoNotifyLowPowerEpoch]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13988, 0x1a48 bytes
    // hidclass.sys .text:0x1d71c, 0x2bf0 bytes
    // hidclass.sys .text:0x39dc, 0x2bf0 bytes
    // hidclass.sys .text:0x1d71c, 0x2bf0 bytes
    //
    _w1(sdk::unknown_ptr) fdo_notify_low_power_epoch;
    
    // [HidpFdoNotifyMonitorDim]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x139f8, 0x1a48 bytes
    // hidclass.sys .text:0x1d7a4, 0x2bf0 bytes
    // hidclass.sys .text:0x20434, 0x2bf0 bytes
    // hidclass.sys .text:0x1d7a4, 0x2bf0 bytes
    //
    _w2(sdk::unknown_ptr) fdo_notify_monitor_dim;
    
    // [HidpFdoNotifyMonitorOff]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13a68, 0x1a48 bytes
    // hidclass.sys .text:0x1d82c, 0x2bf0 bytes
    // hidclass.sys .text:0x204b4, 0x2bf0 bytes
    // hidclass.sys .text:0x1d82c, 0x2bf0 bytes
    //
    _w3(sdk::unknown_ptr) fdo_notify_monitor_off;
    
    // [HidpFdoPnp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x22a60, 0x1a48 bytes
    // hidclass.sys PAGE:0x2eca0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x36320, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2eca0, 0x2bf0 bytes
    //
    _w4(sdk::unknown_ptr) fdo_pnp;
    
    // [HidpFdoPoFxDevicePowerNotRequiredCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13ae0, 0x1a48 bytes
    // hidclass.sys .text:0xfac0, 0x2bf0 bytes
    // hidclass.sys .text:0xf6c0, 0x2bf0 bytes
    // hidclass.sys .text:0xfac0, 0x2bf0 bytes
    //
    _w5(sdk::unknown_ptr) fdo_po_fx_device_power_not_required_callback;
    
    // [HidpFdoPoFxDevicePowerRequiredCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13b30, 0x1a48 bytes
    // hidclass.sys .text:0xfb90, 0x2bf0 bytes
    // hidclass.sys .text:0xf790, 0x2bf0 bytes
    // hidclass.sys .text:0xfb90, 0x2bf0 bytes
    //
    _w6(sdk::unknown_ptr) fdo_po_fx_device_power_required_callback;
    
    // [HidpFdoPoFxUpdateIdleTimeout]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13b7c, 0x1a48 bytes
    // hidclass.sys .text:0x3bb4, 0x2bf0 bytes
    // hidclass.sys .text:0x3be0, 0x2bf0 bytes
    // hidclass.sys .text:0x3bb4, 0x2bf0 bytes
    //
    _w7(sdk::unknown_ptr) fdo_po_fx_update_idle_timeout;
    
    // [HidpFdoPower]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4760, 0x1a48 bytes
    // hidclass.sys .text:0x3f90, 0x2bf0 bytes
    // hidclass.sys .text:0x3fd0, 0x2bf0 bytes
    // hidclass.sys .text:0x3f90, 0x2bf0 bytes
    //
    _w8(sdk::unknown_ptr) fdo_power;
    
    // [HidpFdoPowerCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4c20, 0x1a48 bytes
    // hidclass.sys .text:0x4f90, 0x2bf0 bytes
    // hidclass.sys .text:0x5040, 0x2bf0 bytes
    // hidclass.sys .text:0x4f90, 0x2bf0 bytes
    //
    _w9(sdk::unknown_ptr) fdo_power_completion;
    
    // [HidpFdoPowerDownPoCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4270, 0x1a48 bytes
    // hidclass.sys .text:0x5960, 0x2bf0 bytes
    // hidclass.sys .text:0x5ab0, 0x2bf0 bytes
    // hidclass.sys .text:0x5960, 0x2bf0 bytes
    //
    _x0(sdk::unknown_ptr) fdo_power_down_po_completion;
    
    // [HidpFdoPowerUpForS0IdlePoCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x129f0, 0x1a48 bytes
    // hidclass.sys .text:0x1c2b0, 0x2bf0 bytes
    // hidclass.sys .text:0x1f080, 0x2bf0 bytes
    // hidclass.sys .text:0x1c2b0, 0x2bf0 bytes
    //
    _x1(sdk::unknown_ptr) fdo_power_up_for_s0_idle_po_completion;
    
    // [HidpFdoPowerUpPoCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4ff0, 0x1a48 bytes
    // hidclass.sys .text:0x5cc0, 0x2bf0 bytes
    // hidclass.sys .text:0x5e10, 0x2bf0 bytes
    // hidclass.sys .text:0x5cc0, 0x2bf0 bytes
    //
    _x2(sdk::unknown_ptr) fdo_power_up_po_completion;
    
    // [HidpFdoRegisterWithPoFx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x51a8, 0x1a48 bytes
    // hidclass.sys .text:0xd240, 0x2bf0 bytes
    // hidclass.sys .text:0xd434, 0x2bf0 bytes
    // hidclass.sys .text:0xd240, 0x2bf0 bytes
    //
    _x3(sdk::unknown_ptr) fdo_register_with_po_fx;
    
    // [HidpFdoReleasePoFxPowerReferenceWithTag]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13be0, 0x1a48 bytes
    // hidclass.sys .text:0x7ee0, 0x2bf0 bytes
    // hidclass.sys .text:0x7f70, 0x2bf0 bytes
    // hidclass.sys .text:0x7ee0, 0x2bf0 bytes
    //
    _x4(sdk::unknown_ptr) fdo_release_po_fx_power_reference_with_tag;
    
    // [HidpFdoResumeIdleForIo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12ab0, 0x1a48 bytes
    // hidclass.sys .text:0xf7d0, 0x2bf0 bytes
    // hidclass.sys .text:0xf400, 0x2bf0 bytes
    // hidclass.sys .text:0xf7d0, 0x2bf0 bytes
    //
    _x5(sdk::unknown_ptr) fdo_resume_idle_for_io;
    
    // [HidpFdoSendD0IrpInS0Idle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12b54, 0x1a48 bytes
    // hidclass.sys .text:0x1c3ac, 0x2bf0 bytes
    // hidclass.sys .text:0x1f17c, 0x2bf0 bytes
    // hidclass.sys .text:0x1c3ac, 0x2bf0 bytes
    //
    _x6(sdk::unknown_ptr) fdo_send_d0_irp_in_s0_idle;
    
    // [HidpFdoSendD0IrpsToAllPDOs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12bd0, 0x1a48 bytes
    // hidclass.sys .text:0x1c434, 0x2bf0 bytes
    // hidclass.sys .text:0x1f204, 0x2bf0 bytes
    // hidclass.sys .text:0x1c434, 0x2bf0 bytes
    //
    _x7(sdk::unknown_ptr) fdo_send_d0_irps_to_all_pd_os;
    
    // [HidpFdoSendDxIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4ebc, 0x1a48 bytes
    // hidclass.sys .text:0x5af4, 0x2bf0 bytes
    // hidclass.sys .text:0x5c44, 0x2bf0 bytes
    // hidclass.sys .text:0x5af4, 0x2bf0 bytes
    //
    _x8(sdk::unknown_ptr) fdo_send_dx_irp;
    
    // [HidpFdoSendDxIrpsToAllPDOs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12ce8, 0x1a48 bytes
    // hidclass.sys .text:0x1c564, 0x2bf0 bytes
    // hidclass.sys .text:0x1f334, 0x2bf0 bytes
    // hidclass.sys .text:0x1c564, 0x2bf0 bytes
    //
    _x9(sdk::unknown_ptr) fdo_send_dx_irps_to_all_pd_os;
    
    // [HidpFdoSendIdleIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13d00, 0x1a48 bytes
    // hidclass.sys .text:0xf9d4, 0x2bf0 bytes
    // hidclass.sys .text:0xf604, 0x2bf0 bytes
    // hidclass.sys .text:0xf9d4, 0x2bf0 bytes
    //
    _y0(sdk::unknown_ptr) fdo_send_idle_irp;
    
    // [HidpFdoSendIdleIrpWorker]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13da0, 0x1a48 bytes
    // hidclass.sys .text:0xf620, 0x2bf0 bytes
    // hidclass.sys .text:0xf000, 0x2bf0 bytes
    // hidclass.sys .text:0xf620, 0x2bf0 bytes
    //
    _y1(sdk::unknown_ptr) fdo_send_idle_irp_worker;
    
    // [HidpFdoSendWaitWakeIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12da0, 0x1a48 bytes
    // hidclass.sys .text:0x1c620, 0x2bf0 bytes
    // hidclass.sys .text:0x1f3f0, 0x2bf0 bytes
    // hidclass.sys .text:0x1c620, 0x2bf0 bytes
    //
    _y2(sdk::unknown_ptr) fdo_send_wait_wake_irp;
    
    // [HidpFdoSetIoStateToFailAndFlushSentIo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12e88, 0x1a48 bytes
    // hidclass.sys .text:0x1c744, 0x2bf0 bytes
    // hidclass.sys .text:0x1f514, 0x2bf0 bytes
    // hidclass.sys .text:0x1c744, 0x2bf0 bytes
    //
    _y3(sdk::unknown_ptr) fdo_set_io_state_to_fail_and_flush_sent_io;
    
    // [HidpFdoSetIoStateToPass]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x59d4, 0x1a48 bytes
    // hidclass.sys .text:0xc410, 0x2bf0 bytes
    // hidclass.sys .text:0xc8b0, 0x2bf0 bytes
    // hidclass.sys .text:0xc410, 0x2bf0 bytes
    //
    _y4(sdk::unknown_ptr) fdo_set_io_state_to_pass;
    
    // [HidpFdoSetIoStateToQueueAndFlushSentIo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12f18, 0x1a48 bytes
    // hidclass.sys .text:0x1c7f4, 0x2bf0 bytes
    // hidclass.sys .text:0x1f5c4, 0x2bf0 bytes
    // hidclass.sys .text:0x1c7f4, 0x2bf0 bytes
    //
    _y5(sdk::unknown_ptr) fdo_set_io_state_to_queue_and_flush_sent_io;
    
    // [HidpFdoShouldDeviceBeArmedForWakeForSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4dbc, 0x1a48 bytes
    // hidclass.sys .text:0x3c70, 0x2bf0 bytes
    // hidclass.sys .text:0x3c90, 0x2bf0 bytes
    // hidclass.sys .text:0x3c70, 0x2bf0 bytes
    //
    _y6(sdk::unknown_ptr) fdo_should_device_be_armed_for_wake_for_sx;
    
    // [HidpFdoUnRegisterWithPoFx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13edc, 0x1a48 bytes
    // hidclass.sys .text:0x1d97c, 0x2bf0 bytes
    // hidclass.sys .text:0x205fc, 0x2bf0 bytes
    // hidclass.sys .text:0x1d97c, 0x2bf0 bytes
    //
    _y7(sdk::unknown_ptr) fdo_un_register_with_po_fx;
    
    // [HidpFdoUpdatePdosInStableState]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5a7c, 0x1a48 bytes
    // hidclass.sys .text:0xeaf0, 0x2bf0 bytes
    // hidclass.sys .text:0xea70, 0x2bf0 bytes
    // hidclass.sys .text:0xeaf0, 0x2bf0 bytes
    //
    _y8(sdk::unknown_ptr) fdo_update_pdos_in_stable_state;
    
    // [HidpFdoWaitWakeComplete]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12f80, 0x1a48 bytes
    // hidclass.sys .text:0x1ca60, 0x2bf0 bytes
    // hidclass.sys .text:0x1f830, 0x2bf0 bytes
    // hidclass.sys .text:0x1ca60, 0x2bf0 bytes
    //
    _y9(sdk::unknown_ptr) fdo_wait_wake_complete;
    
    // [HidpFlushReportQueue]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf7b0, 0x1a48 bytes
    // hidclass.sys .text:0x180c0, 0x2bf0 bytes
    // hidclass.sys .text:0x1aeb0, 0x2bf0 bytes
    // hidclass.sys .text:0x180c0, 0x2bf0 bytes
    //
    _z0(sdk::unknown_ptr) flush_report_queue;
    
    // [HidpFreePowerEventIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd754, 0x1a48 bytes
    // hidclass.sys .text:0x15350, 0x2bf0 bytes
    // hidclass.sys .text:0x1800c, 0x2bf0 bytes
    // hidclass.sys .text:0x15350, 0x2bf0 bytes
    //
    _z1(sdk::unknown_ptr) free_power_event_irp;
    
    // [HidpGetCollectionDescriptor]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x6340, 0x1a48 bytes
    // hidclass.sys .text:0xe7f0, 0x2bf0 bytes
    // hidclass.sys .text:0xe9a0, 0x2bf0 bytes
    // hidclass.sys .text:0xe7f0, 0x2bf0 bytes
    //
    _z2(sdk::unknown_ptr) get_collection_descriptor;
    
    // [HidpGetCollectionInformation]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x69b0, 0x1a48 bytes
    // hidclass.sys .text:0xe8c0, 0x2bf0 bytes
    // hidclass.sys .text:0xe890, 0x2bf0 bytes
    // hidclass.sys .text:0xe8c0, 0x2bf0 bytes
    //
    _z3(sdk::unknown_ptr) get_collection_information;
    
    // [HidpGetDeviceDescriptor]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x20c00, 0x1a48 bytes
    // hidclass.sys PAGE:0x330c8, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35cac, 0x2bf0 bytes
    // hidclass.sys PAGE:0x330c8, 0x2bf0 bytes
    //
    _z4(sdk::unknown_ptr) get_device_descriptor;
    
    // [HidpGetDeviceFlags]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x6ee4, 0x1a48 bytes
    // hidclass.sys .text:0xd8f0, 0x2bf0 bytes
    // hidclass.sys .text:0xdaa0, 0x2bf0 bytes
    // hidclass.sys .text:0xd8f0, 0x2bf0 bytes
    //
    _z5(sdk::unknown_ptr) get_device_flags;
    
    // [HidpGetDeviceString]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x17a0, 0x1a48 bytes
    // hidclass.sys .text:0x18134, 0x2bf0 bytes
    // hidclass.sys .text:0x1af24, 0x2bf0 bytes
    // hidclass.sys .text:0x18134, 0x2bf0 bytes
    //
    _z6(sdk::unknown_ptr) get_device_string;
    
    // [HidpGetFastResumeDisableState]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x231f8, 0x1a48 bytes
    // hidclass.sys PAGE:0x33bec, 0x2bf0 bytes
    // hidclass.sys PAGE:0x38a38, 0x2bf0 bytes
    // hidclass.sys PAGE:0x33bec, 0x2bf0 bytes
    //
    _z7(sdk::unknown_ptr) get_fast_resume_disable_state;
    
    // [HidpGetIndexedString]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf80c, 0x1a48 bytes
    // hidclass.sys .text:0x1828c, 0x2bf0 bytes
    // hidclass.sys .text:0x1b07c, 0x2bf0 bytes
    // hidclass.sys .text:0x1828c, 0x2bf0 bytes
    //
    _z8(sdk::unknown_ptr) get_indexed_string;
    
    // [HidpGetMsGenreDescriptor]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf8e8, 0x1a48 bytes
    // hidclass.sys .text:0x18370, 0x2bf0 bytes
    // hidclass.sys .text:0x1b160, 0x2bf0 bytes
    // hidclass.sys .text:0x18370, 0x2bf0 bytes
    //
    _z9(sdk::unknown_ptr) get_ms_genre_descriptor;
    
    // [HidpGetRemoteWakeEnableState]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x26ecc, 0x1a48 bytes
    // hidclass.sys PAGE:0x34efc, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39c1c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34efc, 0x2bf0 bytes
    //
    _a0(sdk::unknown_ptr) get_remote_wake_enable_state;
    
    // [HidpGetRetainWWIrpEnabledFromRegistry]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x207d0, 0x1a48 bytes
    // hidclass.sys PAGE:0x31110, 0x2bf0 bytes
    // hidclass.sys PAGE:0x383c8, 0x2bf0 bytes
    // hidclass.sys PAGE:0x31110, 0x2bf0 bytes
    //
    _a1(sdk::unknown_ptr) get_retain_ww_irp_enabled_from_registry;
    
    // [HidpGetSessionSecurityState]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x228f0, 0x1a48 bytes
    // hidclass.sys PAGE:0x31f40, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35780, 0x2bf0 bytes
    // hidclass.sys PAGE:0x31f40, 0x2bf0 bytes
    //
    _a2(sdk::unknown_ptr) get_session_security_state;
    
    // [HidpGetSetReport]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5d30, 0x1a48 bytes
    // hidclass.sys .text:0x18440, 0x2bf0 bytes
    // hidclass.sys .text:0x1b230, 0x2bf0 bytes
    // hidclass.sys .text:0x18440, 0x2bf0 bytes
    //
    _a3(sdk::unknown_ptr) get_set_report;
    
    // [HidpIdleNotificationCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13030, 0x1a48 bytes
    // hidclass.sys .text:0x1cc50, 0x2bf0 bytes
    // hidclass.sys .text:0x1fa20, 0x2bf0 bytes
    // hidclass.sys .text:0x1cc50, 0x2bf0 bytes
    //
    _a4(sdk::unknown_ptr) idle_notification_callback;
    
    // [HidpIdleNotificationRequestComplete]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13fe0, 0x1a48 bytes
    // hidclass.sys .text:0xdcc0, 0x2bf0 bytes
    // hidclass.sys .text:0xf2c0, 0x2bf0 bytes
    // hidclass.sys .text:0xdcc0, 0x2bf0 bytes
    //
    _a5(sdk::unknown_ptr) idle_notification_request_complete;
    
    // [HidpInitializePingPongIrps]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x22cc8, 0x1a48 bytes
    // hidclass.sys PAGE:0x32610, 0x2bf0 bytes
    // hidclass.sys PAGE:0x37210, 0x2bf0 bytes
    // hidclass.sys PAGE:0x32610, 0x2bf0 bytes
    //
    _a6(sdk::unknown_ptr) initialize_ping_pong_irps;
    
    // [HidpInterruptReadComplete]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x18b0, 0x1a48 bytes
    // hidclass.sys .text:0xa470, 0x2bf0 bytes
    // hidclass.sys .text:0xa620, 0x2bf0 bytes
    // hidclass.sys .text:0xa470, 0x2bf0 bytes
    //
    _a7(sdk::unknown_ptr) interrupt_read_complete;
    
    // [HidpInterruptWriteComplete]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1000, 0x1a48 bytes
    // hidclass.sys .text:0x98f0, 0x2bf0 bytes
    // hidclass.sys .text:0xa1b0, 0x2bf0 bytes
    // hidclass.sys .text:0x98f0, 0x2bf0 bytes
    //
    _a8(sdk::unknown_ptr) interrupt_write_complete;
    
    // [HidpIrpMajorClose]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x37e0, 0x1a48 bytes
    // hidclass.sys .text:0x1bd0, 0x2bf0 bytes
    // hidclass.sys .text:0x1110, 0x2bf0 bytes
    // hidclass.sys .text:0x1bd0, 0x2bf0 bytes
    //
    _a9(sdk::unknown_ptr) irp_major_close;
    
    // [HidpIrpMajorCreate]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3180, 0x1a48 bytes
    // hidclass.sys .text:0x29a0, 0x2bf0 bytes
    // hidclass.sys .text:0x1f70, 0x2bf0 bytes
    // hidclass.sys .text:0x29a0, 0x2bf0 bytes
    //
    _b0(sdk::unknown_ptr) irp_major_create;
    
    // [HidpIrpMajorDefault]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd7f0, 0x1a48 bytes
    // hidclass.sys .text:0x1547c, 0x2bf0 bytes
    // hidclass.sys .text:0x1813c, 0x2bf0 bytes
    // hidclass.sys .text:0x1547c, 0x2bf0 bytes
    //
    _b1(sdk::unknown_ptr) irp_major_default;
    
    // [HidpIrpMajorDeviceControl]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x2850, 0x1a48 bytes
    // hidclass.sys .text:0x6680, 0x2bf0 bytes
    // hidclass.sys .text:0x65f0, 0x2bf0 bytes
    // hidclass.sys .text:0x6680, 0x2bf0 bytes
    //
    _b2(sdk::unknown_ptr) irp_major_device_control;
    
    // [HidpIrpMajorINTERNALDeviceControl]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd8a4, 0x1a48 bytes
    // hidclass.sys .text:0x155bc, 0x2bf0 bytes
    // hidclass.sys .text:0x1827c, 0x2bf0 bytes
    // hidclass.sys .text:0x155bc, 0x2bf0 bytes
    //
    _b3(sdk::unknown_ptr) irp_major_internal_device_control;
    
    // [HidpIrpMajorPnp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x217a0, 0x1a48 bytes
    // hidclass.sys PAGE:0x2d7c0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34550, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2d7c0, 0x2bf0 bytes
    //
    _b4(sdk::unknown_ptr) irp_major_pnp;
    
    // [HidpIrpMajorRead]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3bf0, 0x1a48 bytes
    // hidclass.sys .text:0xb880, 0x2bf0 bytes
    // hidclass.sys .text:0xbb10, 0x2bf0 bytes
    // hidclass.sys .text:0xb880, 0x2bf0 bytes
    //
    _b5(sdk::unknown_ptr) irp_major_read;
    
    // [HidpIrpMajorSystemControl]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x236b4, 0x1a48 bytes
    // hidclass.sys PAGE:0x340a8, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39034, 0x2bf0 bytes
    // hidclass.sys PAGE:0x340a8, 0x2bf0 bytes
    //
    _b6(sdk::unknown_ptr) irp_major_system_control;
    
    // [HidpIrpMajorWrite]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1270, 0x1a48 bytes
    // hidclass.sys .text:0x1b354, 0x2bf0 bytes
    // hidclass.sys .text:0x1e1f4, 0x2bf0 bytes
    // hidclass.sys .text:0x1b354, 0x2bf0 bytes
    //
    _b7(sdk::unknown_ptr) irp_major_write;
    
    // [HidpMajorHandler]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x24b0, 0x1a48 bytes
    // hidclass.sys .text:0x24d0, 0x2bf0 bytes
    // hidclass.sys .text:0x1aa0, 0x2bf0 bytes
    // hidclass.sys .text:0x24d0, 0x2bf0 bytes
    //
    _b8(sdk::unknown_ptr) major_handler;
    
    // [HidpPdoDeviceResetNotificationCancelRoutine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x15290, 0x1a48 bytes
    // hidclass.sys .text:0x5cf0, 0x2bf0 bytes
    // hidclass.sys .text:0x9ef0, 0x2bf0 bytes
    // hidclass.sys .text:0x5cf0, 0x2bf0 bytes
    //
    _b9(sdk::unknown_ptr) pdo_device_reset_notification_cancel_routine;
    
    // [HidpPdoIdleOutComplete]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13080, 0x1a48 bytes
    // hidclass.sys .text:0x1ce00, 0x2bf0 bytes
    // hidclass.sys .text:0x1fa80, 0x2bf0 bytes
    // hidclass.sys .text:0x1ce00, 0x2bf0 bytes
    //
    _c0(sdk::unknown_ptr) pdo_idle_out_complete;
    
    // [HidpPdoPnp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x21810, 0x1a48 bytes
    // hidclass.sys PAGE:0x2d890, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34620, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2d890, 0x2bf0 bytes
    //
    _c1(sdk::unknown_ptr) pdo_pnp;
    
    // [HidpPdoPower]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x45d0, 0x1a48 bytes
    // hidclass.sys .text:0x4640, 0x2bf0 bytes
    // hidclass.sys .text:0x4660, 0x2bf0 bytes
    // hidclass.sys .text:0x4640, 0x2bf0 bytes
    //
    _c2(sdk::unknown_ptr) pdo_power;
    
    // [HidpPdoPowerUpPoCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13130, 0x1a48 bytes
    // hidclass.sys .text:0x1cee0, 0x2bf0 bytes
    // hidclass.sys .text:0x1fb60, 0x2bf0 bytes
    // hidclass.sys .text:0x1cee0, 0x2bf0 bytes
    //
    _c3(sdk::unknown_ptr) pdo_power_up_po_completion;
    
    // [HidpPdoRequestDIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x131e4, 0x1a48 bytes
    // hidclass.sys .text:0x1cfc4, 0x2bf0 bytes
    // hidclass.sys .text:0x1fc44, 0x2bf0 bytes
    // hidclass.sys .text:0x1cfc4, 0x2bf0 bytes
    //
    _c4(sdk::unknown_ptr) pdo_request_d_irp;
    
    // [HidpPingpongBackoffTimerDpc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xe960, 0x1a48 bytes
    // hidclass.sys .text:0x16f50, 0x2bf0 bytes
    // hidclass.sys .text:0x19cb0, 0x2bf0 bytes
    // hidclass.sys .text:0x16f50, 0x2bf0 bytes
    //
    _c5(sdk::unknown_ptr) pingpong_backoff_timer_dpc;
    
    // [HidpPolledReadComplete]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x113b0, 0x1a48 bytes
    // hidclass.sys .text:0x1aa10, 0x2bf0 bytes
    // hidclass.sys .text:0x1d8f0, 0x2bf0 bytes
    // hidclass.sys .text:0x1aa10, 0x2bf0 bytes
    //
    _c6(sdk::unknown_ptr) polled_read_complete;
    
    // [HidpPolledReadComplete_TimerDriven]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11560, 0x1a48 bytes
    // hidclass.sys .text:0x1ac00, 0x2bf0 bytes
    // hidclass.sys .text:0x1dae0, 0x2bf0 bytes
    // hidclass.sys .text:0x1ac00, 0x2bf0 bytes
    //
    _c7(sdk::unknown_ptr) polled_read_complete_timer_driven;
    
    // [HidpPolledTimerDpc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x115d0, 0x1a48 bytes
    // hidclass.sys .text:0x1ac80, 0x2bf0 bytes
    // hidclass.sys .text:0x1db60, 0x2bf0 bytes
    // hidclass.sys .text:0x1ac80, 0x2bf0 bytes
    //
    _c8(sdk::unknown_ptr) polled_timer_dpc;
    
    // [HidpQueryIdForClientPdo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x21b30, 0x1a48 bytes
    // hidclass.sys PAGE:0x2e0c0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34ef0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2e0c0, 0x2bf0 bytes
    //
    _c9(sdk::unknown_ptr) query_id_for_client_pdo;
    
    // [HidpQueryWmiDataBlock]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x268c0, 0x1a48 bytes
    // hidclass.sys PAGE:0x34810, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39550, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34810, 0x2bf0 bytes
    //
    _d0(sdk::unknown_ptr) query_wmi_data_block;
    
    // [HidpQueryWmiRegInfo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x23720, 0x1a48 bytes
    // hidclass.sys PAGE:0x34130, 0x2bf0 bytes
    // hidclass.sys PAGE:0x390c0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34130, 0x2bf0 bytes
    //
    _d1(sdk::unknown_ptr) query_wmi_reg_info;
    
    // [HidpRemoteWakeComplete]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xc790, 0x1a48 bytes
    // hidclass.sys .text:0x13f70, 0x2bf0 bytes
    // hidclass.sys .text:0x16ce0, 0x2bf0 bytes
    // hidclass.sys .text:0x13f70, 0x2bf0 bytes
    //
    _d2(sdk::unknown_ptr) remote_wake_complete;
    
    // [HidpRestrictAccess]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x6410, 0x1a48 bytes
    // hidclass.sys .text:0xdda0, 0x2bf0 bytes
    // hidclass.sys .text:0xe1a0, 0x2bf0 bytes
    // hidclass.sys .text:0xdda0, 0x2bf0 bytes
    //
    _d3(sdk::unknown_ptr) restrict_access;
    
    // [HidpSetMaxReportSize]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7010, 0x1a48 bytes
    // hidclass.sys .text:0xe9c0, 0x2bf0 bytes
    // hidclass.sys .text:0xdf90, 0x2bf0 bytes
    // hidclass.sys .text:0xe9c0, 0x2bf0 bytes
    //
    _d4(sdk::unknown_ptr) set_max_report_size;
    
    // [HidpSetRegistryValue]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd3b4, 0x1a48 bytes
    // hidclass.sys .text:0x15044, 0x2bf0 bytes
    // hidclass.sys .text:0x17ce4, 0x2bf0 bytes
    // hidclass.sys .text:0x15044, 0x2bf0 bytes
    //
    _d5(sdk::unknown_ptr) set_registry_value;
    
    // [HidpSetWmiDataBlock]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x26990, 0x1a48 bytes
    // hidclass.sys PAGE:0x348e0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39620, 0x2bf0 bytes
    // hidclass.sys PAGE:0x348e0, 0x2bf0 bytes
    //
    _d6(sdk::unknown_ptr) set_wmi_data_block;
    
    // [HidpSetWmiDataItem]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x26a40, 0x1a48 bytes
    // hidclass.sys PAGE:0x349a0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x396e0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x349a0, 0x2bf0 bytes
    //
    _d7(sdk::unknown_ptr) set_wmi_data_item;
    
    // [HidpStartAllPingPongs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x6dcc, 0x1a48 bytes
    // hidclass.sys .text:0x9420, 0x2bf0 bytes
    // hidclass.sys .text:0x93f0, 0x2bf0 bytes
    // hidclass.sys .text:0x9420, 0x2bf0 bytes
    //
    _d8(sdk::unknown_ptr) start_all_ping_pongs;
    
    // [HidpSubmitInterruptRead]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x20d0, 0x1a48 bytes
    // hidclass.sys .text:0x8d60, 0x2bf0 bytes
    // hidclass.sys .text:0x8eb0, 0x2bf0 bytes
    // hidclass.sys .text:0x8d60, 0x2bf0 bytes
    //
    _d9(sdk::unknown_ptr) submit_interrupt_read;
    
    // [HidpSynchronousCallCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7250, 0x1a48 bytes
    // hidclass.sys .text:0x1ba0, 0x2bf0 bytes
    // hidclass.sys .text:0x39b0, 0x2bf0 bytes
    // hidclass.sys .text:0x1ba0, 0x2bf0 bytes
    //
    _e0(sdk::unknown_ptr) synchronous_call_completion;
    
    // [HidpToggleRemoteWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xc998, 0x1a48 bytes
    // hidclass.sys .text:0x1422c, 0x2bf0 bytes
    // hidclass.sys .text:0x16f90, 0x2bf0 bytes
    // hidclass.sys .text:0x1422c, 0x2bf0 bytes
    //
    _e1(sdk::unknown_ptr) toggle_remote_wake;
    
    // [HidpToggleRemoteWakeWorker]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xcab0, 0x1a48 bytes
    // hidclass.sys .text:0x14380, 0x2bf0 bytes
    // hidclass.sys .text:0x170e0, 0x2bf0 bytes
    // hidclass.sys .text:0x14380, 0x2bf0 bytes
    //
    _e2(sdk::unknown_ptr) toggle_remote_wake_worker;
    
    // [HidpToggleSelSusp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xcc44, 0x1a48 bytes
    // hidclass.sys .text:0x1458c, 0x2bf0 bytes
    // hidclass.sys .text:0x172ec, 0x2bf0 bytes
    // hidclass.sys .text:0x1458c, 0x2bf0 bytes
    //
    _e3(sdk::unknown_ptr) toggle_sel_susp;
    
    // [HidpToggleSelSuspWorker]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x26b00, 0x1a48 bytes
    // hidclass.sys PAGE:0x34a60, 0x2bf0 bytes
    // hidclass.sys PAGE:0x397a0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34a60, 0x2bf0 bytes
    //
    _e4(sdk::unknown_ptr) toggle_sel_susp_worker;
    
    // [HidpWaitForSignal]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x513c, 0x1a48 bytes
    // hidclass.sys .text:0xebf4, 0x2bf0 bytes
    // hidclass.sys .text:0xf16c, 0x2bf0 bytes
    // hidclass.sys .text:0xebf4, 0x2bf0 bytes
    //
    _e5(sdk::unknown_ptr) wait_for_signal;
};
#include "magic/api.end.hpp"
