#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/api.start.hpp"
namespace mou
{
    // [WPP_d07d70ae1de939905882a75eef030211_Traceguids]
    // Ldr = [mouclass.sys]
    // => Windows 11
    // mouclass.sys .rdata:0x71f8, 0xd20 bytes
    //
    _m0(sdk::unknown_ptr) wpp_d07d70ae1de939905882a75eef030211_traceguids;
    
    // [WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607
    // mouclass.sys .rdata:0x6100, 0xd28 bytes
    //
    _m1(sdk::unknown_ptr) wpp_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_traceguids;
    
    // [MouClassTraceLoggingPrivilegeNotFoundForCreate]
    // Ldr = [mouclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // mouclass.sys .text:0x4240, 0xd20 bytes
    // mouclass.sys .text:0x4240, 0xd20 bytes
    //
    _m2(sdk::unknown_ptr) mou_class_trace_logging_privilege_not_found_for_create;
    
    // [MouseClassHandleRead]
    // Ldr = [mouclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // mouclass.sys .text:0x2230, 0xd20 bytes
    // mouclass.sys .text:0x2230, 0xd20 bytes
    //
    _m3(sdk::unknown_ptr) mouse_class_handle_read;
    
    // [WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids]
    // Ldr = [mouclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // mouclass.sys .rdata:0x71b8, 0xd20 bytes
    // mouclass.sys .rdata:0x71b8, 0xd20 bytes
    //
    _m4(sdk::unknown_ptr) wpp_5c6cc7617d423be8e14292e2367026fe_traceguids;
    
    // [MouClassTraceLoggingDeniedCreateForReadWithSFAC]
    // Ldr = [mouclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x41c8, 0xd20 bytes
    // mouclass.sys .text:0x4a04, 0xd20 bytes
    // mouclass.sys .text:0x41c8, 0xd20 bytes
    //
    _m5(sdk::unknown_ptr) mou_class_trace_logging_denied_create_for_read_with_sfac;
    
    // [WPP_RECORDER_SF_qqDdd]
    // Ldr = [mouclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x5f78, 0xd20 bytes
    // mouclass.sys .text:0x60f4, 0xd20 bytes
    // mouclass.sys .text:0x5f78, 0xd20 bytes
    //
    _m6(sdk::unknown_ptr) wpp_recorder_sf_qq_ddd;
    
    // [WPP_RECORDER_SF_qqdDdd]
    // Ldr = [mouclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1bf0, 0xd20 bytes
    // mouclass.sys .text:0x6814, 0xd20 bytes
    // mouclass.sys .text:0x1bf0, 0xd20 bytes
    //
    _m7(sdk::unknown_ptr) wpp_recorder_sf_qqd_ddd;
    
    // [Globals]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .data:0x80a0, 0xd28 bytes
    // mouclass.sys .data:0x90e0, 0xd20 bytes
    // mouclass.sys .data:0x9140, 0xd20 bytes
    // mouclass.sys .data:0x90e0, 0xd20 bytes
    //
    _m8(sdk::unknown_ptr) globals;
    
    // [GUID_POWER_DEVICE_WAKE_ENABLE]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .rdata:0x6158, 0xd28 bytes
    // mouclass.sys .rdata:0x7418, 0xd20 bytes
    // mouclass.sys .rdata:0x73a0, 0xd20 bytes
    // mouclass.sys .rdata:0x7418, 0xd20 bytes
    //
    _m9(struct nt::guid_t*) guid_power_device_wake_enable;
    
    // [__IMPORT_DESCRIPTOR_WMILIB]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .idata:0xa24c, 0xd28 bytes
    // mouclass.sys .idata:0xb264, 0xd20 bytes
    // mouclass.sys .idata:0xb28c, 0xd20 bytes
    // mouclass.sys .idata:0xb264, 0xd20 bytes
    //
    _n0(sdk::unknown_ptr) import_descriptor_wmilib;
    
    // [MouConfiguration]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys INIT:0xe020, 0xd28 bytes
    // mouclass.sys INIT:0xf080, 0xd20 bytes
    // mouclass.sys INIT:0xf080, 0xd20 bytes
    // mouclass.sys INIT:0xf080, 0xd20 bytes
    //
    _n1(sdk::unknown_ptr) mou_configuration;
    
    // [MouCreateClassObject]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xb850, 0xd28 bytes
    // mouclass.sys PAGE:0xcba0, 0xd20 bytes
    // mouclass.sys PAGE:0xca40, 0xd20 bytes
    // mouclass.sys PAGE:0xcba0, 0xd20 bytes
    //
    _n2(sdk::unknown_ptr) mou_create_class_object;
    
    // [MouDeterminePortsServiced]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xb670, 0xd28 bytes
    // mouclass.sys PAGE:0xc830, 0xd20 bytes
    // mouclass.sys PAGE:0xc910, 0xd20 bytes
    // mouclass.sys PAGE:0xc830, 0xd20 bytes
    //
    _n3(sdk::unknown_ptr) mou_determine_ports_serviced;
    
    // [MouDeviceMapQueryCallback]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xc100, 0xd28 bytes
    // mouclass.sys PAGE:0xc180, 0xd20 bytes
    // mouclass.sys PAGE:0xc180, 0xd20 bytes
    // mouclass.sys PAGE:0xc180, 0xd20 bytes
    //
    _n4(sdk::unknown_ptr) mou_device_map_query_callback;
    
    // [MouEnableDisablePort]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xb000, 0xd28 bytes
    // mouclass.sys PAGE:0xc010, 0xd20 bytes
    // mouclass.sys PAGE:0xc010, 0xd20 bytes
    // mouclass.sys PAGE:0xc010, 0xd20 bytes
    //
    _n5(sdk::unknown_ptr) mou_enable_disable_port;
    
    // [MouInitializeDataQueue]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x2580, 0xd28 bytes
    // mouclass.sys .text:0x24a0, 0xd20 bytes
    // mouclass.sys .text:0x2830, 0xd20 bytes
    // mouclass.sys .text:0x24a0, 0xd20 bytes
    //
    _n6(sdk::unknown_ptr) mou_initialize_data_queue;
    
    // [MouSendConnectRequest]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xb780, 0xd28 bytes
    // mouclass.sys PAGE:0xca70, 0xd20 bytes
    // mouclass.sys PAGE:0xcd90, 0xd20 bytes
    // mouclass.sys PAGE:0xca70, 0xd20 bytes
    //
    _n7(sdk::unknown_ptr) mou_send_connect_request;
    
    // [MouSyncComplete]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1540, 0xd28 bytes
    // mouclass.sys .text:0x1150, 0xd20 bytes
    // mouclass.sys .text:0x1150, 0xd20 bytes
    // mouclass.sys .text:0x1150, 0xd20 bytes
    //
    _n8(sdk::unknown_ptr) mou_sync_complete;
    
    // [MouseAddDevice]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xb2f0, 0xd28 bytes
    // mouclass.sys PAGE:0xc5d0, 0xd20 bytes
    // mouclass.sys PAGE:0xc590, 0xd20 bytes
    // mouclass.sys PAGE:0xc5d0, 0xd20 bytes
    //
    _n9(sdk::unknown_ptr) mouse_add_device;
    
    // [MouseAddDeviceEx]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xb420, 0xd28 bytes
    // mouclass.sys PAGE:0xc720, 0xd20 bytes
    // mouclass.sys PAGE:0xc6e0, 0xd20 bytes
    // mouclass.sys PAGE:0xc720, 0xd20 bytes
    //
    _o0(sdk::unknown_ptr) mouse_add_device_ex;
    
    // [MouseClassCancel]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1cd0, 0xd28 bytes
    // mouclass.sys .text:0x1850, 0xd20 bytes
    // mouclass.sys .text:0x1a00, 0xd20 bytes
    // mouclass.sys .text:0x1850, 0xd20 bytes
    //
    _o1(sdk::unknown_ptr) mouse_class_cancel;
    
    // [MouseClassCheckWaitWakeEnabled]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4220, 0xd28 bytes
    // mouclass.sys .text:0x42e8, 0xd20 bytes
    // mouclass.sys .text:0x4a7c, 0xd20 bytes
    // mouclass.sys .text:0x42e8, 0xd20 bytes
    //
    _o2(sdk::unknown_ptr) mouse_class_check_wait_wake_enabled;
    
    // [MouseClassCleanup]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x12b0, 0xd28 bytes
    // mouclass.sys .text:0x1010, 0xd20 bytes
    // mouclass.sys .text:0x1010, 0xd20 bytes
    // mouclass.sys .text:0x1010, 0xd20 bytes
    //
    _o3(sdk::unknown_ptr) mouse_class_cleanup;
    
    // [MouseClassCleanupQueue]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4258, 0xd28 bytes
    // mouclass.sys .text:0x4334, 0xd20 bytes
    // mouclass.sys .text:0x4ac8, 0xd20 bytes
    // mouclass.sys .text:0x4334, 0xd20 bytes
    //
    _o4(sdk::unknown_ptr) mouse_class_cleanup_queue;
    
    // [MouseClassClose]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1000, 0xd28 bytes
    // mouclass.sys .text:0x1180, 0xd20 bytes
    // mouclass.sys .text:0x1180, 0xd20 bytes
    // mouclass.sys .text:0x1180, 0xd20 bytes
    //
    _o5(sdk::unknown_ptr) mouse_class_close;
    
    // [MouseClassCreate]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1110, 0xd28 bytes
    // mouclass.sys .text:0x12f0, 0xd20 bytes
    // mouclass.sys .text:0x12f0, 0xd20 bytes
    // mouclass.sys .text:0x12f0, 0xd20 bytes
    //
    _o6(sdk::unknown_ptr) mouse_class_create;
    
    // [MouseClassCreateWaitWakeIrp]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xbcf4, 0xd28 bytes
    // mouclass.sys PAGE:0xdf40, 0xd20 bytes
    // mouclass.sys PAGE:0xcec0, 0xd20 bytes
    // mouclass.sys PAGE:0xdf40, 0xd20 bytes
    //
    _o7(sdk::unknown_ptr) mouse_class_create_wait_wake_irp;
    
    // [MouseClassCreateWaitWakeIrpWorker]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xcf10, 0xd28 bytes
    // mouclass.sys PAGE:0xdfa0, 0xd20 bytes
    // mouclass.sys PAGE:0xe260, 0xd20 bytes
    // mouclass.sys PAGE:0xdfa0, 0xd20 bytes
    //
    _o8(sdk::unknown_ptr) mouse_class_create_wait_wake_irp_worker;
    
    // [MouseClassDequeueRead]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x43ac, 0xd28 bytes
    // mouclass.sys .text:0x449c, 0xd20 bytes
    // mouclass.sys .text:0x4c30, 0xd20 bytes
    // mouclass.sys .text:0x449c, 0xd20 bytes
    //
    _o9(sdk::unknown_ptr) mouse_class_dequeue_read;
    
    // [MouseClassDeviceControl]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xb510, 0xd28 bytes
    // mouclass.sys PAGE:0xc1d0, 0xd20 bytes
    // mouclass.sys PAGE:0xc1d0, 0xd20 bytes
    // mouclass.sys PAGE:0xc1d0, 0xd20 bytes
    //
    _p0(sdk::unknown_ptr) mouse_class_device_control;
    
    // [MouseClassEnableGlobalPort]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xcf54, 0xd28 bytes
    // mouclass.sys PAGE:0xe000, 0xd20 bytes
    // mouclass.sys PAGE:0xe2c0, 0xd20 bytes
    // mouclass.sys PAGE:0xe000, 0xd20 bytes
    //
    _p1(sdk::unknown_ptr) mouse_class_enable_global_port;
    
    // [MouseClassFindMorePorts]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xb120, 0xd28 bytes
    // mouclass.sys PAGE:0xc3f0, 0xd20 bytes
    // mouclass.sys PAGE:0xc3b0, 0xd20 bytes
    // mouclass.sys PAGE:0xc3f0, 0xd20 bytes
    //
    _p2(sdk::unknown_ptr) mouse_class_find_more_ports;
    
    // [MouseClassFlush]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4410, 0xd28 bytes
    // mouclass.sys .text:0x4500, 0xd20 bytes
    // mouclass.sys .text:0x4c90, 0xd20 bytes
    // mouclass.sys .text:0x4500, 0xd20 bytes
    //
    _p3(sdk::unknown_ptr) mouse_class_flush;
    
    // [MouseClassGetWaitWakeEnableState]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xbd40, 0xd28 bytes
    // mouclass.sys PAGE:0xe100, 0xd20 bytes
    // mouclass.sys PAGE:0xcf10, 0xd20 bytes
    // mouclass.sys PAGE:0xe100, 0xd20 bytes
    //
    _p4(sdk::unknown_ptr) mouse_class_get_wait_wake_enable_state;
    
    // [MouseClassGuid]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .data:0x8010, 0xd28 bytes
    // mouclass.sys .data:0x9060, 0xd20 bytes
    // mouclass.sys .data:0x90c8, 0xd20 bytes
    // mouclass.sys .data:0x9060, 0xd20 bytes
    //
    _p5(sdk::unknown_ptr) mouse_class_guid;
    
    // [MouseClassLogError]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x44d4, 0xd28 bytes
    // mouclass.sys .text:0x45f8, 0xd20 bytes
    // mouclass.sys .text:0x4d88, 0xd20 bytes
    // mouclass.sys .text:0x45f8, 0xd20 bytes
    //
    _p6(sdk::unknown_ptr) mouse_class_log_error;
    
    // [MouseClassPassThrough]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xc0e0, 0xd28 bytes
    // mouclass.sys PAGE:0xe290, 0xd20 bytes
    // mouclass.sys PAGE:0xd4b0, 0xd20 bytes
    // mouclass.sys PAGE:0xe290, 0xd20 bytes
    //
    _p7(sdk::unknown_ptr) mouse_class_pass_through;
    
    // [MouseClassPlugPlayNotification]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xd040, 0xd28 bytes
    // mouclass.sys PAGE:0xe2c0, 0xd20 bytes
    // mouclass.sys PAGE:0xe3c0, 0xd20 bytes
    // mouclass.sys PAGE:0xe2c0, 0xd20 bytes
    //
    _p8(sdk::unknown_ptr) mouse_class_plug_play_notification;
    
    // [MouseClassPoRequestComplete]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1bf0, 0xd28 bytes
    // mouclass.sys .text:0x1910, 0xd20 bytes
    // mouclass.sys .text:0x1900, 0xd20 bytes
    // mouclass.sys .text:0x1910, 0xd20 bytes
    //
    _p9(sdk::unknown_ptr) mouse_class_po_request_complete;
    
    // [MouseClassPower]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1e50, 0xd28 bytes
    // mouclass.sys .text:0x1cf0, 0xd20 bytes
    // mouclass.sys .text:0x20f0, 0xd20 bytes
    // mouclass.sys .text:0x1cf0, 0xd20 bytes
    //
    _q0(sdk::unknown_ptr) mouse_class_power;
    
    // [MouseClassPowerComplete]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1b10, 0xd28 bytes
    // mouclass.sys .text:0x19c0, 0xd20 bytes
    // mouclass.sys .text:0x17e0, 0xd20 bytes
    // mouclass.sys .text:0x19c0, 0xd20 bytes
    //
    _q1(sdk::unknown_ptr) mouse_class_power_complete;
    
    // [MouseClassQueryWmiDataBlock]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4570, 0xd28 bytes
    // mouclass.sys .text:0x46b0, 0xd20 bytes
    // mouclass.sys .text:0x4e40, 0xd20 bytes
    // mouclass.sys .text:0x46b0, 0xd20 bytes
    //
    _q2(sdk::unknown_ptr) mouse_class_query_wmi_data_block;
    
    // [MouseClassQueryWmiRegInfo]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xc110, 0xd28 bytes
    // mouclass.sys PAGE:0xc1a0, 0xd20 bytes
    // mouclass.sys PAGE:0xc1a0, 0xd20 bytes
    // mouclass.sys PAGE:0xc1a0, 0xd20 bytes
    //
    _q3(sdk::unknown_ptr) mouse_class_query_wmi_reg_info;
    
    // [MouseClassRead]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x13c0, 0xd28 bytes
    // mouclass.sys .text:0x1ad0, 0xd20 bytes
    // mouclass.sys .text:0x1f40, 0xd20 bytes
    // mouclass.sys .text:0x1ad0, 0xd20 bytes
    //
    _q4(sdk::unknown_ptr) mouse_class_read;
    
    // [MouseClassReadCopyData]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4670, 0xd28 bytes
    // mouclass.sys .text:0x47c8, 0xd20 bytes
    // mouclass.sys .text:0x4f58, 0xd20 bytes
    // mouclass.sys .text:0x47c8, 0xd20 bytes
    //
    _q5(sdk::unknown_ptr) mouse_class_read_copy_data;
    
    // [MouseClassRemoveDevice]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4890, 0xd28 bytes
    // mouclass.sys .text:0x4a3c, 0xd20 bytes
    // mouclass.sys .text:0x51d4, 0xd20 bytes
    // mouclass.sys .text:0x4a3c, 0xd20 bytes
    //
    _q6(sdk::unknown_ptr) mouse_class_remove_device;
    
    // [MouseClassServiceCallback]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1560, 0xd28 bytes
    // mouclass.sys .text:0x4be0, 0xd20 bytes
    // mouclass.sys .text:0x1ac0, 0xd20 bytes
    // mouclass.sys .text:0x4be0, 0xd20 bytes
    //
    _q7(sdk::unknown_ptr) mouse_class_service_callback;
    
    // [MouseClassSetWmiDataBlock]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xd0f0, 0xd28 bytes
    // mouclass.sys PAGE:0xe380, 0xd20 bytes
    // mouclass.sys PAGE:0xe480, 0xd20 bytes
    // mouclass.sys PAGE:0xe380, 0xd20 bytes
    //
    _q8(sdk::unknown_ptr) mouse_class_set_wmi_data_block;
    
    // [MouseClassSetWmiDataItem]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xd180, 0xd28 bytes
    // mouclass.sys PAGE:0xe420, 0xd20 bytes
    // mouclass.sys PAGE:0xe520, 0xd20 bytes
    // mouclass.sys PAGE:0xe420, 0xd20 bytes
    //
    _q9(sdk::unknown_ptr) mouse_class_set_wmi_data_item;
    
    // [MouseClassSystemControl]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xc010, 0xd28 bytes
    // mouclass.sys PAGE:0xc970, 0xd20 bytes
    // mouclass.sys PAGE:0xc800, 0xd20 bytes
    // mouclass.sys PAGE:0xc970, 0xd20 bytes
    //
    _r0(sdk::unknown_ptr) mouse_class_system_control;
    
    // [MouseClassWaitWakeComplete]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4af0, 0xd28 bytes
    // mouclass.sys .text:0x5230, 0xd20 bytes
    // mouclass.sys .text:0x54d0, 0xd20 bytes
    // mouclass.sys .text:0x5230, 0xd20 bytes
    //
    _r1(sdk::unknown_ptr) mouse_class_wait_wake_complete;
    
    // [MouseClassWmiGuidList]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .rdata:0x6000, 0xd28 bytes
    // mouclass.sys .rdata:0x7000, 0xd20 bytes
    // mouclass.sys .rdata:0x7000, 0xd20 bytes
    // mouclass.sys .rdata:0x7000, 0xd20 bytes
    //
    _r2(sdk::unknown_ptr) mouse_class_wmi_guid_list;
    
    // [MouseClassWWPowerUpComplete]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x49e0, 0xd28 bytes
    // mouclass.sys .text:0x50d0, 0xd20 bytes
    // mouclass.sys .text:0x5370, 0xd20 bytes
    // mouclass.sys .text:0x50d0, 0xd20 bytes
    //
    _r3(sdk::unknown_ptr) mouse_class_ww_power_up_complete;
    
    // [MousePnP]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1880, 0xd28 bytes
    // mouclass.sys .text:0x1570, 0xd20 bytes
    // mouclass.sys .text:0x1510, 0xd20 bytes
    // mouclass.sys .text:0x1570, 0xd20 bytes
    //
    _r4(sdk::unknown_ptr) mouse_pn_p;
    
    // [MousePnpStartCompletion]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x2950, 0xd28 bytes
    // mouclass.sys .text:0x2910, 0xd20 bytes
    // mouclass.sys .text:0x2d20, 0xd20 bytes
    // mouclass.sys .text:0x2910, 0xd20 bytes
    //
    _r5(sdk::unknown_ptr) mouse_pnp_start_completion;
    
    // [MouseQueryDeviceKey]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xbec0, 0xd28 bytes
    // mouclass.sys PAGE:0xe4ac, 0xd20 bytes
    // mouclass.sys PAGE:0xd080, 0xd20 bytes
    // mouclass.sys PAGE:0xe4ac, 0xd20 bytes
    //
    _r6(sdk::unknown_ptr) mouse_query_device_key;
    
    // [MouseSendIrpSynchronously]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys PAGE:0xbf80, 0xd28 bytes
    // mouclass.sys PAGE:0xd1a0, 0xd20 bytes
    // mouclass.sys PAGE:0xd170, 0xd20 bytes
    // mouclass.sys PAGE:0xd1a0, 0xd20 bytes
    //
    _r7(sdk::unknown_ptr) mouse_send_irp_synchronously;
    
    // [MouseStart]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x2710, 0xd28 bytes
    // mouclass.sys .text:0x2730, 0xd20 bytes
    // mouclass.sys .text:0x2ab0, 0xd20 bytes
    // mouclass.sys .text:0x2730, 0xd20 bytes
    //
    _r8(sdk::unknown_ptr) mouse_start;
    
    // [MouseStartWorker]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x26a0, 0xd28 bytes
    // mouclass.sys .text:0x26a0, 0xd20 bytes
    // mouclass.sys .text:0x2a20, 0xd20 bytes
    // mouclass.sys .text:0x26a0, 0xd20 bytes
    //
    _r9(sdk::unknown_ptr) mouse_start_worker;
    
    // [MouseToggleWaitWake]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4ca4, 0xd28 bytes
    // mouclass.sys .text:0x543c, 0xd20 bytes
    // mouclass.sys .text:0x56dc, 0xd20 bytes
    // mouclass.sys .text:0x543c, 0xd20 bytes
    //
    _s0(sdk::unknown_ptr) mouse_toggle_wait_wake;
    
    // [MouseToggleWaitWakeWorker]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x4db0, 0xd28 bytes
    // mouclass.sys .text:0x5580, 0xd20 bytes
    // mouclass.sys .text:0x5820, 0xd20 bytes
    // mouclass.sys .text:0x5580, 0xd20 bytes
    //
    _s1(sdk::unknown_ptr) mouse_toggle_wait_wake_worker;
    
    // [WPP_RECORDER_SF_qLL]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x51cc, 0xd28 bytes
    // mouclass.sys .text:0x5a30, 0xd20 bytes
    // mouclass.sys .text:0x5cd0, 0xd20 bytes
    // mouclass.sys .text:0x5a30, 0xd20 bytes
    //
    _s2(sdk::unknown_ptr) wpp_recorder_sf_q_ll;
    
    // [WPP_RECORDER_SF_qLqq]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x52b8, 0xd28 bytes
    // mouclass.sys .text:0x5b28, 0xd20 bytes
    // mouclass.sys .text:0x5dc8, 0xd20 bytes
    // mouclass.sys .text:0x5b28, 0xd20 bytes
    //
    _s3(sdk::unknown_ptr) wpp_recorder_sf_q_lqq;
    
    // [WPP_RECORDER_SF_qlqqd]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x548c, 0xd28 bytes
    // mouclass.sys .text:0x5d14, 0xd20 bytes
    // mouclass.sys .text:0x5fb4, 0xd20 bytes
    // mouclass.sys .text:0x5d14, 0xd20 bytes
    //
    _s4(sdk::unknown_ptr) wpp_recorder_sf_qlqqd;
    
    // [WPP_RECORDER_SF_qqL]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x22a0, 0xd28 bytes
    // mouclass.sys .text:0x2040, 0xd20 bytes
    // mouclass.sys .text:0x24d0, 0xd20 bytes
    // mouclass.sys .text:0x2040, 0xd20 bytes
    //
    _s5(sdk::unknown_ptr) wpp_recorder_sf_qq_l;
    
    // [WPP_RECORDER_SF_qqLLqq]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x56d0, 0xd28 bytes
    // mouclass.sys .text:0x61d4, 0xd20 bytes
    // mouclass.sys .text:0x6350, 0xd20 bytes
    // mouclass.sys .text:0x61d4, 0xd20 bytes
    //
    _s6(sdk::unknown_ptr) wpp_recorder_sf_qq_l_lqq;
    
    // [WPP_RECORDER_SF_qqLd]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x581c, 0xd28 bytes
    // mouclass.sys .text:0x632c, 0xd20 bytes
    // mouclass.sys .text:0x64a8, 0xd20 bytes
    // mouclass.sys .text:0x632c, 0xd20 bytes
    //
    _s7(sdk::unknown_ptr) wpp_recorder_sf_qq_ld;
    
    // [WPP_RECORDER_SF_qqLL]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x55c0, 0xd28 bytes
    // mouclass.sys .text:0x60b8, 0xd20 bytes
    // mouclass.sys .text:0x6234, 0xd20 bytes
    // mouclass.sys .text:0x60b8, 0xd20 bytes
    //
    _s8(sdk::unknown_ptr) wpp_recorder_sf_qq_ll;
    
    // [WPP_RECORDER_SF_qqLqq]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x5938, 0xd28 bytes
    // mouclass.sys .text:0x6458, 0xd20 bytes
    // mouclass.sys .text:0x65d4, 0xd20 bytes
    // mouclass.sys .text:0x6458, 0xd20 bytes
    //
    _s9(sdk::unknown_ptr) wpp_recorder_sf_qq_lqq;
    
    // [WPP_RECORDER_SF_qqc]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1a70, 0xd28 bytes
    // mouclass.sys .text:0x17a0, 0xd20 bytes
    // mouclass.sys .text:0x1730, 0xd20 bytes
    // mouclass.sys .text:0x17a0, 0xd20 bytes
    //
    _t0(sdk::unknown_ptr) wpp_recorder_sf_qqc;
    
    // [WPP_RECORDER_SF_qqdq]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x5b60, 0xd28 bytes
    // mouclass.sys .text:0x6698, 0xd20 bytes
    // mouclass.sys .text:0x6974, 0xd20 bytes
    // mouclass.sys .text:0x6698, 0xd20 bytes
    //
    _t1(sdk::unknown_ptr) wpp_recorder_sf_qqdq;
    
    // [WPP_RECORDER_SF_qqiL]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x17c0, 0xd28 bytes
    // mouclass.sys .text:0x67b4, 0xd20 bytes
    // mouclass.sys .text:0x1d80, 0xd20 bytes
    // mouclass.sys .text:0x67b4, 0xd20 bytes
    //
    _t2(sdk::unknown_ptr) wpp_recorder_sf_qqi_l;
    
    // [WPP_RECORDER_SF_qqqql]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x5d50, 0xd28 bytes
    // mouclass.sys .text:0x69c0, 0xd20 bytes
    // mouclass.sys .text:0x6b80, 0xd20 bytes
    // mouclass.sys .text:0x69c0, 0xd20 bytes
    //
    _t3(sdk::unknown_ptr) wpp_recorder_sf_qqqql;
    
    // [WPP_RECORDER_SF_qqsd]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x1d70, 0xd28 bytes
    // mouclass.sys .text:0x2130, 0xd20 bytes
    // mouclass.sys .text:0x1e40, 0xd20 bytes
    // mouclass.sys .text:0x2130, 0xd20 bytes
    //
    _t4(sdk::unknown_ptr) wpp_recorder_sf_qqsd;
    
    // [WPP_ThisDir_CTLGUID_MouClassTraceGuid]
    // Ldr = [mouclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .rdata:0x6110, 0xd28 bytes
    // mouclass.sys .rdata:0x72e0, 0xd20 bytes
    // mouclass.sys .rdata:0x7250, 0xd20 bytes
    // mouclass.sys .rdata:0x72e0, 0xd20 bytes
    //
    _t5(sdk::unknown_ptr) wpp_this_dir_ctlguid_mou_class_trace_guid;
};
#include "magic/api.end.hpp"
