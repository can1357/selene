#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kbd
{
    // [WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids]
    // Ldr = [kbdclass.sys]
    // => Windows 11
    // kbdclass.sys .rdata:0x8218, 0xd28 bytes
    //
    _m0(sdk::unknown_ptr) wpp_1b6d0084df9f3ca48f318fdd34bf6db2_traceguids;
    
    // [WPP_fecf80922958397349997befa54f38a2_Traceguids]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607
    // kbdclass.sys .rdata:0x7110, 0xd30 bytes
    //
    _m1(sdk::unknown_ptr) wpp_fecf80922958397349997befa54f38a2_traceguids;
    
    // [KbdClassTraceLoggingPrivilegeNotFoundForCreate]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // kbdclass.sys .text:0x499c, 0xd28 bytes
    // kbdclass.sys .text:0x499c, 0xd28 bytes
    //
    _m2(sdk::unknown_ptr) kbd_class_trace_logging_privilege_not_found_for_create;
    
    // [KeyboardClassHandleRead]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // kbdclass.sys .text:0x26d0, 0xd28 bytes
    // kbdclass.sys .text:0x26d0, 0xd28 bytes
    //
    _m3(sdk::unknown_ptr) keyboard_class_handle_read;
    
    // [WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // kbdclass.sys .rdata:0x81f0, 0xd28 bytes
    // kbdclass.sys .rdata:0x81f0, 0xd28 bytes
    //
    _m4(sdk::unknown_ptr) wpp_ad73c0fec8af37c73e7c85b872b2d615_traceguids;
    
    // [KbdClassTraceLoggingDeniedCreateForReadWithSFAC]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x4924, 0xd28 bytes
    // kbdclass.sys .text:0x4ae0, 0xd28 bytes
    // kbdclass.sys .text:0x4924, 0xd28 bytes
    //
    _m5(sdk::unknown_ptr) kbd_class_trace_logging_denied_create_for_read_with_sfac;
    
    // [KeyboardQueryDeviceKey]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xdea0, 0xd28 bytes
    // kbdclass.sys PAGE:0xfa28, 0xd28 bytes
    // kbdclass.sys PAGE:0xdea0, 0xd28 bytes
    //
    _m6(sdk::unknown_ptr) keyboard_query_device_key;
    
    // [KbdConfiguration]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys INIT:0xf420, 0xd30 bytes
    // kbdclass.sys INIT:0x10560, 0xd28 bytes
    // kbdclass.sys INIT:0x10560, 0xd28 bytes
    // kbdclass.sys INIT:0x10560, 0xd28 bytes
    //
    _m7(sdk::unknown_ptr) kbd_configuration;
    
    // [KbdCreateClassObject]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xcae0, 0xd30 bytes
    // kbdclass.sys PAGE:0xdf80, 0xd28 bytes
    // kbdclass.sys PAGE:0xdd20, 0xd28 bytes
    // kbdclass.sys PAGE:0xdf80, 0xd28 bytes
    //
    _m8(sdk::unknown_ptr) kbd_create_class_object;
    
    // [KbdDeterminePortsServiced]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xc6e0, 0xd30 bytes
    // kbdclass.sys PAGE:0xdc30, 0xd28 bytes
    // kbdclass.sys PAGE:0xdbf0, 0xd28 bytes
    // kbdclass.sys PAGE:0xdc30, 0xd28 bytes
    //
    _m9(sdk::unknown_ptr) kbd_determine_ports_serviced;
    
    // [KbdDeviceMapQueryCallback]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xd470, 0xd30 bytes
    // kbdclass.sys PAGE:0xd5b0, 0xd28 bytes
    // kbdclass.sys PAGE:0xd550, 0xd28 bytes
    // kbdclass.sys PAGE:0xd5b0, 0xd28 bytes
    //
    _n0(sdk::unknown_ptr) kbd_device_map_query_callback;
    
    // [KbdEnableDisablePort]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xcf60, 0xd30 bytes
    // kbdclass.sys PAGE:0xd430, 0xd28 bytes
    // kbdclass.sys PAGE:0xd3d0, 0xd28 bytes
    // kbdclass.sys PAGE:0xd430, 0xd28 bytes
    //
    _n1(sdk::unknown_ptr) kbd_enable_disable_port;
    
    // [KbdInitializeDataQueue]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x1f40, 0xd30 bytes
    // kbdclass.sys .text:0x2c30, 0xd28 bytes
    // kbdclass.sys .text:0x2900, 0xd28 bytes
    // kbdclass.sys .text:0x2c30, 0xd28 bytes
    //
    _n2(sdk::unknown_ptr) kbd_initialize_data_queue;
    
    // [KbdSendConnectRequest]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xe4c8, 0xd30 bytes
    // kbdclass.sys PAGE:0xdd70, 0xd28 bytes
    // kbdclass.sys PAGE:0xf340, 0xd28 bytes
    // kbdclass.sys PAGE:0xdd70, 0xd28 bytes
    //
    _n3(sdk::unknown_ptr) kbd_send_connect_request;
    
    // [KbdSyncComplete]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x28d0, 0xd30 bytes
    // kbdclass.sys .text:0x12c0, 0xd28 bytes
    // kbdclass.sys .text:0x1ab0, 0xd28 bytes
    // kbdclass.sys .text:0x12c0, 0xd28 bytes
    //
    _n4(sdk::unknown_ptr) kbd_sync_complete;
    
    // [KeyboardAddDevice]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xc2b0, 0xd30 bytes
    // kbdclass.sys PAGE:0xd7f0, 0xd28 bytes
    // kbdclass.sys PAGE:0xd780, 0xd28 bytes
    // kbdclass.sys PAGE:0xd7f0, 0xd28 bytes
    //
    _n5(sdk::unknown_ptr) keyboard_add_device;
    
    // [KeyboardAddDeviceEx]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xc540, 0xd30 bytes
    // kbdclass.sys PAGE:0xdb20, 0xd28 bytes
    // kbdclass.sys PAGE:0xd9f0, 0xd28 bytes
    // kbdclass.sys PAGE:0xdb20, 0xd28 bytes
    //
    _n6(sdk::unknown_ptr) keyboard_add_device_ex;
    
    // [KeyboardCallAllPorts]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x44d0, 0xd30 bytes
    // kbdclass.sys .text:0x4a50, 0xd28 bytes
    // kbdclass.sys .text:0x4b60, 0xd28 bytes
    // kbdclass.sys .text:0x4a50, 0xd28 bytes
    //
    _n7(sdk::unknown_ptr) keyboard_call_all_ports;
    
    // [KeyboardClassCancel]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x1370, 0xd30 bytes
    // kbdclass.sys .text:0x1010, 0xd28 bytes
    // kbdclass.sys .text:0x1010, 0xd28 bytes
    // kbdclass.sys .text:0x1010, 0xd28 bytes
    //
    _n8(sdk::unknown_ptr) keyboard_class_cancel;
    
    // [KeyboardClassCancelPendingIrpLeds]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x4600, 0xd30 bytes
    // kbdclass.sys .text:0x4ba8, 0xd28 bytes
    // kbdclass.sys .text:0x4cb8, 0xd28 bytes
    // kbdclass.sys .text:0x4ba8, 0xd28 bytes
    //
    _n9(sdk::unknown_ptr) keyboard_class_cancel_pending_irp_leds;
    
    // [KeyboardClassCheckWaitWakeEnabled]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x46ac, 0xd30 bytes
    // kbdclass.sys .text:0x4c8c, 0xd28 bytes
    // kbdclass.sys .text:0x4d9c, 0xd28 bytes
    // kbdclass.sys .text:0x4c8c, 0xd28 bytes
    //
    _o0(sdk::unknown_ptr) keyboard_class_check_wait_wake_enabled;
    
    // [KeyboardClassCleanup]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x2790, 0xd30 bytes
    // kbdclass.sys .text:0x1180, 0xd28 bytes
    // kbdclass.sys .text:0x1990, 0xd28 bytes
    // kbdclass.sys .text:0x1180, 0xd28 bytes
    //
    _o1(sdk::unknown_ptr) keyboard_class_cleanup;
    
    // [KeyboardClassCleanupQueue]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x46e4, 0xd30 bytes
    // kbdclass.sys .text:0x4cd8, 0xd28 bytes
    // kbdclass.sys .text:0x4de8, 0xd28 bytes
    // kbdclass.sys .text:0x4cd8, 0xd28 bytes
    //
    _o2(sdk::unknown_ptr) keyboard_class_cleanup_queue;
    
    // [KeyboardClassClose]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x2070, 0xd30 bytes
    // kbdclass.sys .text:0x1b50, 0xd28 bytes
    // kbdclass.sys .text:0x1c90, 0xd28 bytes
    // kbdclass.sys .text:0x1b50, 0xd28 bytes
    //
    _o3(sdk::unknown_ptr) keyboard_class_close;
    
    // [KeyboardClassCreate]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x21a0, 0xd30 bytes
    // kbdclass.sys .text:0x1cc0, 0xd28 bytes
    // kbdclass.sys .text:0x1e00, 0xd28 bytes
    // kbdclass.sys .text:0x1cc0, 0xd28 bytes
    //
    _o4(sdk::unknown_ptr) keyboard_class_create;
    
    // [KeyboardClassCreateWaitWakeIrp]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xd0a0, 0xd30 bytes
    // kbdclass.sys PAGE:0xf420, 0xd28 bytes
    // kbdclass.sys PAGE:0xf4a4, 0xd28 bytes
    // kbdclass.sys PAGE:0xf420, 0xd28 bytes
    //
    _o5(sdk::unknown_ptr) keyboard_class_create_wait_wake_irp;
    
    // [KeyboardClassCreateWaitWakeIrpWorker]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xe5e0, 0xd30 bytes
    // kbdclass.sys PAGE:0xf480, 0xd28 bytes
    // kbdclass.sys PAGE:0xf500, 0xd28 bytes
    // kbdclass.sys PAGE:0xf480, 0xd28 bytes
    //
    _o6(sdk::unknown_ptr) keyboard_class_create_wait_wake_irp_worker;
    
    // [KeyboardClassDequeueRead]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x2880, 0xd30 bytes
    // kbdclass.sys .text:0x4e40, 0xd28 bytes
    // kbdclass.sys .text:0x4f50, 0xd28 bytes
    // kbdclass.sys .text:0x4e40, 0xd28 bytes
    //
    _o7(sdk::unknown_ptr) keyboard_class_dequeue_read;
    
    // [KeyboardClassDeviceControl]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xc7f0, 0xd30 bytes
    // kbdclass.sys PAGE:0xd110, 0xd28 bytes
    // kbdclass.sys PAGE:0xd110, 0xd28 bytes
    // kbdclass.sys PAGE:0xd110, 0xd28 bytes
    //
    _o8(sdk::unknown_ptr) keyboard_class_device_control;
    
    // [KeyboardClassEnableGlobalPort]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xe624, 0xd30 bytes
    // kbdclass.sys PAGE:0xf4e0, 0xd28 bytes
    // kbdclass.sys PAGE:0xf560, 0xd28 bytes
    // kbdclass.sys PAGE:0xf4e0, 0xd28 bytes
    //
    _o9(sdk::unknown_ptr) keyboard_class_enable_global_port;
    
    // [KeyboardClassFindMorePorts]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xc000, 0xd30 bytes
    // kbdclass.sys PAGE:0xd600, 0xd28 bytes
    // kbdclass.sys PAGE:0xd5a0, 0xd28 bytes
    // kbdclass.sys PAGE:0xd600, 0xd28 bytes
    //
    _p0(sdk::unknown_ptr) keyboard_class_find_more_ports;
    
    // [KeyboardClassFlush]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x4840, 0xd30 bytes
    // kbdclass.sys .text:0x4ea0, 0xd28 bytes
    // kbdclass.sys .text:0x4fb0, 0xd28 bytes
    // kbdclass.sys .text:0x4ea0, 0xd28 bytes
    //
    _p1(sdk::unknown_ptr) keyboard_class_flush;
    
    // [KeyboardClassGetWaitWakeEnableState]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xd0e0, 0xd30 bytes
    // kbdclass.sys PAGE:0xf5e0, 0xd28 bytes
    // kbdclass.sys PAGE:0xf660, 0xd28 bytes
    // kbdclass.sys PAGE:0xf5e0, 0xd28 bytes
    //
    _p2(sdk::unknown_ptr) keyboard_class_get_wait_wake_enable_state;
    
    // [KeyboardClassGuid]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .data:0x9010, 0xd30 bytes
    // kbdclass.sys .data:0xa060, 0xd28 bytes
    // kbdclass.sys .data:0xa0c8, 0xd28 bytes
    // kbdclass.sys .data:0xa060, 0xd28 bytes
    //
    _p3(sdk::unknown_ptr) keyboard_class_guid;
    
    // [KeyboardClassLogError]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x4904, 0xd30 bytes
    // kbdclass.sys .text:0x4f98, 0xd28 bytes
    // kbdclass.sys .text:0x50a8, 0xd28 bytes
    // kbdclass.sys .text:0x4f98, 0xd28 bytes
    //
    _p4(sdk::unknown_ptr) keyboard_class_log_error;
    
    // [KeyboardClassPassThrough]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xd450, 0xd30 bytes
    // kbdclass.sys PAGE:0xf780, 0xd28 bytes
    // kbdclass.sys PAGE:0xf800, 0xd28 bytes
    // kbdclass.sys PAGE:0xf780, 0xd28 bytes
    //
    _p5(sdk::unknown_ptr) keyboard_class_pass_through;
    
    // [KeyboardClassPlugPlayNotification]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xe710, 0xd30 bytes
    // kbdclass.sys PAGE:0xf7b0, 0xd28 bytes
    // kbdclass.sys PAGE:0xf830, 0xd28 bytes
    // kbdclass.sys PAGE:0xf7b0, 0xd28 bytes
    //
    _p6(sdk::unknown_ptr) keyboard_class_plug_play_notification;
    
    // [KeyboardClassPoRequestComplete]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x11f0, 0xd30 bytes
    // kbdclass.sys .text:0x10d0, 0xd28 bytes
    // kbdclass.sys .text:0x10d0, 0xd28 bytes
    // kbdclass.sys .text:0x10d0, 0xd28 bytes
    //
    _p7(sdk::unknown_ptr) keyboard_class_po_request_complete;
    
    // [KeyboardClassPower]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x14f0, 0xd30 bytes
    // kbdclass.sys .text:0x1800, 0xd28 bytes
    // kbdclass.sys .text:0x1560, 0xd28 bytes
    // kbdclass.sys .text:0x1800, 0xd28 bytes
    //
    _p8(sdk::unknown_ptr) keyboard_class_power;
    
    // [KeyboardClassPowerComplete]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x1000, 0xd30 bytes
    // kbdclass.sys .text:0x1410, 0xd28 bytes
    // kbdclass.sys .text:0x1180, 0xd28 bytes
    // kbdclass.sys .text:0x1410, 0xd28 bytes
    //
    _p9(sdk::unknown_ptr) keyboard_class_power_complete;
    
    // [KeyboardClassQueryWmiDataBlock]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x49a0, 0xd30 bytes
    // kbdclass.sys .text:0x5050, 0xd28 bytes
    // kbdclass.sys .text:0x5160, 0xd28 bytes
    // kbdclass.sys .text:0x5050, 0xd28 bytes
    //
    _q0(sdk::unknown_ptr) keyboard_class_query_wmi_data_block;
    
    // [KeyboardClassQueryWmiRegInfo]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xd480, 0xd30 bytes
    // kbdclass.sys PAGE:0xd5d0, 0xd28 bytes
    // kbdclass.sys PAGE:0xd570, 0xd28 bytes
    // kbdclass.sys PAGE:0xd5d0, 0xd28 bytes
    //
    _q1(sdk::unknown_ptr) keyboard_class_query_wmi_reg_info;
    
    // [KeyboardClassRead]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x2610, 0xd30 bytes
    // kbdclass.sys .text:0x12f0, 0xd28 bytes
    // kbdclass.sys .text:0x1ae0, 0xd28 bytes
    // kbdclass.sys .text:0x12f0, 0xd28 bytes
    //
    _q2(sdk::unknown_ptr) keyboard_class_read;
    
    // [KeyboardClassReadCopyData]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x4aa0, 0xd30 bytes
    // kbdclass.sys .text:0x5168, 0xd28 bytes
    // kbdclass.sys .text:0x5278, 0xd28 bytes
    // kbdclass.sys .text:0x5168, 0xd28 bytes
    //
    _q3(sdk::unknown_ptr) keyboard_class_read_copy_data;
    
    // [KeyboardClassRemoveDevice]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x4cc4, 0xd30 bytes
    // kbdclass.sys .text:0x53e0, 0xd28 bytes
    // kbdclass.sys .text:0x54f4, 0xd28 bytes
    // kbdclass.sys .text:0x53e0, 0xd28 bytes
    //
    _q4(sdk::unknown_ptr) keyboard_class_remove_device;
    
    // [KeyboardClassServiceCallback]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x2920, 0xd30 bytes
    // kbdclass.sys .text:0x5570, 0xd28 bytes
    // kbdclass.sys .text:0x5680, 0xd28 bytes
    // kbdclass.sys .text:0x5570, 0xd28 bytes
    //
    _q5(sdk::unknown_ptr) keyboard_class_service_callback;
    
    // [KeyboardClassSetLedsComplete]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x12d0, 0xd30 bytes
    // kbdclass.sys .text:0x1660, 0xd28 bytes
    // kbdclass.sys .text:0x13c0, 0xd28 bytes
    // kbdclass.sys .text:0x1660, 0xd28 bytes
    //
    _q6(sdk::unknown_ptr) keyboard_class_set_leds_complete;
    
    // [KeyboardClassSetWmiDataBlock]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xe7c0, 0xd30 bytes
    // kbdclass.sys PAGE:0xf870, 0xd28 bytes
    // kbdclass.sys PAGE:0xf8f0, 0xd28 bytes
    // kbdclass.sys PAGE:0xf870, 0xd28 bytes
    //
    _q7(sdk::unknown_ptr) keyboard_class_set_wmi_data_block;
    
    // [KeyboardClassSetWmiDataItem]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xe850, 0xd30 bytes
    // kbdclass.sys PAGE:0xf910, 0xd28 bytes
    // kbdclass.sys PAGE:0xf990, 0xd28 bytes
    // kbdclass.sys PAGE:0xf910, 0xd28 bytes
    //
    _q8(sdk::unknown_ptr) keyboard_class_set_wmi_data_item;
    
    // [KeyboardClassSystemControl]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xd380, 0xd30 bytes
    // kbdclass.sys PAGE:0xd010, 0xd28 bytes
    // kbdclass.sys PAGE:0xd010, 0xd28 bytes
    // kbdclass.sys PAGE:0xd010, 0xd28 bytes
    //
    _q9(sdk::unknown_ptr) keyboard_class_system_control;
    
    // [KeyboardClassWaitWakeComplete]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x4f20, 0xd30 bytes
    // kbdclass.sys .text:0x5bc0, 0xd28 bytes
    // kbdclass.sys .text:0x5cc0, 0xd28 bytes
    // kbdclass.sys .text:0x5bc0, 0xd28 bytes
    //
    _r0(sdk::unknown_ptr) keyboard_class_wait_wake_complete;
    
    // [KeyboardClassWmiGuidList]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .rdata:0x7000, 0xd30 bytes
    // kbdclass.sys .rdata:0x8000, 0xd28 bytes
    // kbdclass.sys .rdata:0x8000, 0xd28 bytes
    // kbdclass.sys .rdata:0x8000, 0xd28 bytes
    //
    _r1(sdk::unknown_ptr) keyboard_class_wmi_guid_list;
    
    // [KeyboardClassWWPowerUpComplete]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x4e10, 0xd30 bytes
    // kbdclass.sys .text:0x5a60, 0xd28 bytes
    // kbdclass.sys .text:0x5b70, 0xd28 bytes
    // kbdclass.sys .text:0x5a60, 0xd28 bytes
    //
    _r2(sdk::unknown_ptr) keyboard_class_ww_power_up_complete;
    
    // [KeyboardPnP]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x1a70, 0xd30 bytes
    // kbdclass.sys .text:0x1f50, 0xd28 bytes
    // kbdclass.sys .text:0x2090, 0xd28 bytes
    // kbdclass.sys .text:0x1f50, 0xd28 bytes
    //
    _r3(sdk::unknown_ptr) keyboard_pn_p;
    
    // [KeyboardPnpStartCompletion]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x28f0, 0xd30 bytes
    // kbdclass.sys .text:0x2da0, 0xd28 bytes
    // kbdclass.sys .text:0x2cf0, 0xd28 bytes
    // kbdclass.sys .text:0x2da0, 0xd28 bytes
    //
    _r4(sdk::unknown_ptr) keyboard_pnp_start_completion;
    
    // [KeyboardSendIrpSynchronously]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys PAGE:0xd2f0, 0xd30 bytes
    // kbdclass.sys PAGE:0xda60, 0xd28 bytes
    // kbdclass.sys PAGE:0xe040, 0xd28 bytes
    // kbdclass.sys PAGE:0xda60, 0xd28 bytes
    //
    _r5(sdk::unknown_ptr) keyboard_send_irp_synchronously;
    
    // [KeyboardStart]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x23c0, 0xd30 bytes
    // kbdclass.sys .text:0x2840, 0xd28 bytes
    // kbdclass.sys .text:0x2af0, 0xd28 bytes
    // kbdclass.sys .text:0x2840, 0xd28 bytes
    //
    _r6(sdk::unknown_ptr) keyboard_start;
    
    // [KeyboardStartWorker]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x2350, 0xd30 bytes
    // kbdclass.sys .text:0x27b0, 0xd28 bytes
    // kbdclass.sys .text:0x2a60, 0xd28 bytes
    // kbdclass.sys .text:0x27b0, 0xd28 bytes
    //
    _r7(sdk::unknown_ptr) keyboard_start_worker;
    
    // [KeyboardToggleWaitWake]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x50dc, 0xd30 bytes
    // kbdclass.sys .text:0x5dd8, 0xd28 bytes
    // kbdclass.sys .text:0x5ed8, 0xd28 bytes
    // kbdclass.sys .text:0x5dd8, 0xd28 bytes
    //
    _r8(sdk::unknown_ptr) keyboard_toggle_wait_wake;
    
    // [KeyboardToggleWaitWakeWorker]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x51f0, 0xd30 bytes
    // kbdclass.sys .text:0x5f20, 0xd28 bytes
    // kbdclass.sys .text:0x6020, 0xd28 bytes
    // kbdclass.sys .text:0x5f20, 0xd28 bytes
    //
    _r9(sdk::unknown_ptr) keyboard_toggle_wait_wake_worker;
    
    // [WPP_RECORDER_SF_qqdL]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .text:0x5e34, 0xd30 bytes
    // kbdclass.sys .text:0x2600, 0xd28 bytes
    // kbdclass.sys .text:0x2540, 0xd28 bytes
    // kbdclass.sys .text:0x2600, 0xd28 bytes
    //
    _s0(sdk::unknown_ptr) wpp_recorder_sf_qqd_l;
    
    // [WPP_ThisDir_CTLGUID_KbdClassTraceGuid]
    // Ldr = [kbdclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // kbdclass.sys .rdata:0x70f0, 0xd30 bytes
    // kbdclass.sys .rdata:0x8350, 0xd28 bytes
    // kbdclass.sys .rdata:0x8340, 0xd28 bytes
    // kbdclass.sys .rdata:0x8350, 0xd28 bytes
    //
    _s1(sdk::unknown_ptr) wpp_this_dir_ctlguid_kbd_class_trace_guid;
};
#include "magic/api.end.hpp"
