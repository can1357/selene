#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_base_input
{
    // [??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x88618, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [IsInputSuppressRequested@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x5c68, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) is_input_suppress_requested;
    
    // [ivInitialSendPnpForChildPartition@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x207108, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) iv_initial_send_pnp_for_child_partition;
    
    // [ivOnChildPartitionConnected@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x207530, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) iv_on_child_partition_connected;
    
    // [ivOnPacketReceived@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x207d30, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) iv_on_packet_received;
    
    // [ivPreReceiveCallback@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x208070, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) iv_pre_receive_callback;
    
    // [OnAsyncPnpWorkNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f3870, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) on_async_pnp_work_notification;
    
    // [??0CBaseInput@@IEAA@K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x26a68, 0x243e0 bytes
    // win32kbase.sys .text:0x79688, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) construct_instance_;
    
    // [ivChildLoop@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c6b14, 0x243e0 bytes
    // win32kbase.sys .text:0x1c48f4, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) iv_child_loop;
    
    // [ivHandleSettingsPacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c2840, 0x243e0 bytes
    // win32kbase.sys .text:0x1c0620, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) iv_handle_settings_packet;
    
    // [_ivHeaderCallback@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c1120, 0x243e0 bytes
    // win32kbase.sys .text:0x1bef00, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) iv_header_callback;
    
    // [_ivOnChildLifetimeNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c1220, 0x243e0 bytes
    // win32kbase.sys .text:0x1bf000, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) iv_on_child_lifetime_notification;
    
    // [ivOnChildLifetimeNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c2f70, 0x243e0 bytes
    // win32kbase.sys .text:0x1c0d50, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) iv_on_child_lifetime_notification_;
    
    // [_ivPacketDispatch@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c1270, 0x243e0 bytes
    // win32kbase.sys .text:0x1bf050, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) iv_packet_dispatch;
    
    // [ivRegisterChildLifetimeNotifications@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c3918, 0x243e0 bytes
    // win32kbase.sys .text:0x1c16f8, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) iv_register_child_lifetime_notifications;
    
    // [ivUnregisterChildLifetimeNotifications@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c3a4c, 0x243e0 bytes
    // win32kbase.sys .text:0x1c182c, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) iv_unregister_child_lifetime_notifications;
    
    // [OnAutoRepeatTimerNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1ad1f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1ab910, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) on_auto_repeat_timer_notification;
    
    // [AcquireUserCritOnRead@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) acquire_user_crit_on_read;
    
    // [ApplyRimDevBackedDeviceSummaryInformation@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca14, 0x243e0 bytes
    // win32kbase.sys .text:0x76404, 0x27ef0 bytes
    // win32kbase.sys .text:0x57794, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) apply_rim_dev_backed_device_summary_information;
    
    // [DoPostDispatchProcessing@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) do_post_dispatch_processing;
    
    // [DoPreDispatchProcessing@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) do_pre_dispatch_processing;
    
    // [EnumDevices@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb2b0, 0x243e0 bytes
    // win32kbase.sys .text:0x7f510, 0x27ef0 bytes
    // win32kbase.sys .text:0x55d20, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) enum_devices;
    
    // [ExecutingInSensorHostingProcess@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbe1c, 0x243e0 bytes
    // win32kbase.sys .text:0x77148, 0x27ef0 bytes
    // win32kbase.sys .text:0x57a58, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) executing_in_sensor_hosting_process;
    
    // [ExecutingOnSensorHostingThread@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe300, 0x243e0 bytes
    // win32kbase.sys .text:0x7ae00, 0x27ef0 bytes
    // win32kbase.sys .text:0x58cb0, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) executing_on_sensor_hosting_thread;
    
    // [FindDeviceInfo@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acf90, 0x243e0 bytes
    // win32kbase.sys .text:0x5630, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab6b0, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) find_device_info;
    
    // [ForwardPnpNotificationToISM@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x29ea8, 0x243e0 bytes
    // win32kbase.sys .text:0x72648, 0x27ef0 bytes
    // win32kbase.sys .text:0x7cb60, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) forward_pnp_notification_to_ism;
    
    // [GatherDeviceInfoSummaryInformation@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc804, 0x243e0 bytes
    // win32kbase.sys .text:0x76688, 0x27ef0 bytes
    // win32kbase.sys .text:0x57418, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) gather_device_info_summary_information;
    
    // [GetProcessor@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) get_processor;
    
    // [GetSensorHostingProcessHandle@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x29730, 0x243e0 bytes
    // win32kbase.sys .text:0xbea3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x7c290, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) get_sensor_hosting_process_handle;
    
    // [HandleInputThreadStateChange@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x29c9c, 0x243e0 bytes
    // win32kbase.sys .text:0x75e50, 0x27ef0 bytes
    // win32kbase.sys .text:0x7c7fc, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) handle_input_thread_state_change;
    
    // [HandleRemoteLocalDeviceDetached@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb6f0, 0x243e0 bytes
    // win32kbase.sys .text:0x77390, 0x27ef0 bytes
    // win32kbase.sys .text:0x57a90, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) handle_remote_local_device_detached;
    
    // [HandleTSRequest@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd360, 0x243e0 bytes
    // win32kbase.sys .text:0x77ae0, 0x27ef0 bytes
    // win32kbase.sys .text:0x57d10, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) handle_ts_request;
    
    // [HandleTSRequestForUserModeRimDevices@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) handle_ts_request_for_user_mode_rim_devices;
    
    // [InitializeSensor@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x284a0, 0x243e0 bytes
    // win32kbase.sys .text:0x76740, 0x27ef0 bytes
    // win32kbase.sys .text:0x7b000, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) initialize_sensor;
    
    // [IsInjectionDeviceFromKernelHandle@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ad158, 0x243e0 bytes
    // win32kbase.sys .text:0x1f37d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab878, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) is_injection_device_from_kernel_handle;
    
    // [ivHandleKeyboardAsyncKeyStatePacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c14b0, 0x243e0 bytes
    // win32kbase.sys .text:0x205760, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bf290, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) iv_handle_keyboard_async_key_state_packet;
    
    // [ivHandleKeyboardInputPacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c1a00, 0x243e0 bytes
    // win32kbase.sys .text:0x205c30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bf7e0, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) iv_handle_keyboard_input_packet;
    
    // [ivHandleKeyboardStatesPacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c1ba0, 0x243e0 bytes
    // win32kbase.sys .text:0x205df0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bf980, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) iv_handle_keyboard_states_packet;
    
    // [ivHandleMouseInputPacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c20f0, 0x243e0 bytes
    // win32kbase.sys .text:0x206240, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bfed0, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) iv_handle_mouse_input_packet;
    
    // [ivHandlePnpCreatePacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c2490, 0x243e0 bytes
    // win32kbase.sys .text:0x206880, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c0270, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) iv_handle_pnp_create_packet;
    
    // [ivHandlePnpOtherPacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c25c0, 0x243e0 bytes
    // win32kbase.sys .text:0x206ad0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c03a0, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) iv_handle_pnp_other_packet;
    
    // [ivHandlePnpSyncPacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c2680, 0x243e0 bytes
    // win32kbase.sys .text:0x206be0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c0460, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) iv_handle_pnp_sync_packet;
    
    // [ivHandlePTPInertiaPacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c22d0, 0x243e0 bytes
    // win32kbase.sys .text:0x206680, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c00b0, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) iv_handle_ptp_inertia_packet;
    
    // [ivHandleTouchInputPacket@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c2d00, 0x243e0 bytes
    // win32kbase.sys .text:0x206de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c0ae0, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) iv_handle_touch_input_packet;
    
    // [OnDelayZonePalmRejectionTimerNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) on_delay_zone_palm_rejection_timer_notification;
    
    // [OnDirectStartDeviceClassNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd1a90, 0x243e0 bytes
    // win32kbase.sys .text:0xe2940, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0430, 0x243e0 bytes
    //
    _q5(sdk::unknown_ptr) on_direct_start_device_class_notification;
    
    // [OnDirectStartStopReadNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) on_direct_start_stop_read_notification;
    
    // [OnDispatcherObjectSignaled@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9e0, 0x243e0 bytes
    // win32kbase.sys .text:0x76db0, 0x27ef0 bytes
    // win32kbase.sys .text:0x64900, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) on_dispatcher_object_signaled;
    
    // [_OnDispatcherObjectSignaled@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9c0, 0x243e0 bytes
    // win32kbase.sys .text:0x76d90, 0x27ef0 bytes
    // win32kbase.sys .text:0x64d40, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) on_dispatcher_object_signaled_;
    
    // [OnFlushDelayZonePalmRejectInputTimerNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) on_flush_delay_zone_palm_reject_input_timer_notification;
    
    // [OnInputSuppressed@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ad210, 0x243e0 bytes
    // win32kbase.sys .text:0x1f388c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab930, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) on_input_suppressed;
    
    // [OnInputSuppressedValueChanged@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ad288, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3904, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab9a8, 0x243e0 bytes
    //
    _r1(sdk::unknown_ptr) on_input_suppressed_value_changed;
    
    // [OnMouseCursorUpdateNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _r2(sdk::unknown_ptr) on_mouse_cursor_update_notification;
    
    // [OnMouseReportRateLimitingTimerNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _r3(sdk::unknown_ptr) on_mouse_report_rate_limiting_timer_notification;
    
    // [OnPnpNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ad3e0, 0x243e0 bytes
    // win32kbase.sys .text:0x9950, 0x27ef0 bytes
    // win32kbase.sys .text:0x1abb00, 0x243e0 bytes
    //
    _r4(sdk::unknown_ptr) on_pnp_notification;
    
    // [OnPTPInertiaHandleEvent@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _r5(sdk::unknown_ptr) on_ptp_inertia_handle_event;
    
    // [OnPTPInertiaTimerNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _r6(sdk::unknown_ptr) on_ptp_inertia_timer_notification;
    
    // [OnPTPMarshalNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _r7(sdk::unknown_ptr) on_ptp_marshal_notification;
    
    // [OnPTPTimerNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _r8(sdk::unknown_ptr) on_ptp_timer_notification;
    
    // [OnReadNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ad400, 0x243e0 bytes
    // win32kbase.sys .text:0x5b10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1abb20, 0x243e0 bytes
    //
    _r9(sdk::unknown_ptr) on_read_notification;
    
    // [OnRemoteCloseNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x29e50, 0x243e0 bytes
    // win32kbase.sys .text:0x77470, 0x27ef0 bytes
    // win32kbase.sys .text:0x7c9b0, 0x243e0 bytes
    //
    _s0(sdk::unknown_ptr) on_remote_close_notification;
    
    // [OnRemoteOpenNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2090, 0x243e0 bytes
    // win32kbase.sys .text:0xe1b60, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0a30, 0x243e0 bytes
    //
    _s1(sdk::unknown_ptr) on_remote_open_notification;
    
    // [OnRIMDeviceClosed@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _s2(sdk::unknown_ptr) on_rim_device_closed;
    
    // [OnRIMDeviceCreated@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _s3(sdk::unknown_ptr) on_rim_device_created;
    
    // [OnRIMDeviceDestroyed@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _s4(sdk::unknown_ptr) on_rim_device_destroyed;
    
    // [OnRIMDeviceOpened@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _s5(sdk::unknown_ptr) on_rim_device_opened;
    
    // [OnTimerNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ada40, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3a60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac160, 0x243e0 bytes
    //
    _s6(sdk::unknown_ptr) on_timer_notification;
    
    // [OnTouchSynthesizeNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _s7(sdk::unknown_ptr) on_touch_synthesize_notification;
    
    // [PerformPnpNotification@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd7e8, 0x243e0 bytes
    // win32kbase.sys .text:0x77f1c, 0x27ef0 bytes
    // win32kbase.sys .text:0x58198, 0x243e0 bytes
    //
    _s8(sdk::unknown_ptr) perform_pnp_notification;
    
    // [PopulateDispatcherObjectWithCustomInputEvents@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1adb00, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3c50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac220, 0x243e0 bytes
    //
    _s9(sdk::unknown_ptr) populate_dispatcher_object_with_custom_input_events;
    
    // [PostInitialize@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _t0(sdk::unknown_ptr) post_initialize;
    
    // [PostProcessInput@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _t1(sdk::unknown_ptr) post_process_input;
    
    // [PreProcessInput@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _t2(sdk::unknown_ptr) pre_process_input;
    
    // [PreUninitialize@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _t3(sdk::unknown_ptr) pre_uninitialize;
    
    // [Read@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x28570, 0x243e0 bytes
    // win32kbase.sys .text:0x78fa0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7b0d0, 0x243e0 bytes
    //
    _t4(sdk::unknown_ptr) read;
    
    // [RegisterDispatcherObject@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb870, 0x243e0 bytes
    // win32kbase.sys .text:0x76c40, 0x27ef0 bytes
    // win32kbase.sys .text:0xae800, 0x243e0 bytes
    //
    _t5(sdk::unknown_ptr) register_dispatcher_object;
    
    // [_RIMCallBack@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd630, 0x243e0 bytes
    // win32kbase.sys .text:0x77d20, 0x27ef0 bytes
    // win32kbase.sys .text:0x57fe0, 0x243e0 bytes
    //
    _t6(sdk::unknown_ptr) rim_call_back;
    
    // [RIMCallBack@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd64c, 0x243e0 bytes
    // win32kbase.sys .text:0x77d3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x57ffc, 0x243e0 bytes
    //
    _t7(sdk::unknown_ptr) rim_call_back_;
    
    // [RIMDeviceCallback_Closed@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x84500, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3d10, 0x27ef0 bytes
    // win32kbase.sys .text:0xbfb50, 0x243e0 bytes
    //
    _t8(sdk::unknown_ptr) rim_device_callback_closed;
    
    // [RIMDeviceCallback_Created@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87760, 0x243e0 bytes
    // win32kbase.sys .text:0x75860, 0x27ef0 bytes
    // win32kbase.sys .text:0x6fed0, 0x243e0 bytes
    //
    _t9(sdk::unknown_ptr) rim_device_callback_created;
    
    // [RIMDeviceCallback_Destroyed@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87bf0, 0x243e0 bytes
    // win32kbase.sys .text:0x72480, 0x27ef0 bytes
    // win32kbase.sys .text:0x6f9a0, 0x243e0 bytes
    //
    _u0(sdk::unknown_ptr) rim_device_callback_destroyed;
    
    // [RIMDeviceCallback_Opened@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87820, 0x243e0 bytes
    // win32kbase.sys .text:0x757e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x6fe50, 0x243e0 bytes
    //
    _u1(sdk::unknown_ptr) rim_device_callback_opened;
    
    // [RIMDeviceCallback_Reset@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1adbc0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3dd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac2e0, 0x243e0 bytes
    //
    _u2(sdk::unknown_ptr) rim_device_callback_reset;
    
    // [_sLock@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25e380, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3160, 0x27ef0 bytes
    // win32kbase.sys .data:0x25b3b0, 0x243e0 bytes
    //
    _u3(sdk::unknown_ptr) s_lock;
    
    // [SecondPassIntialize@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _u4(sdk::unknown_ptr) second_pass_intialize;
    
    // [_sessionInitialized@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25aca8, 0x243e0 bytes
    // win32kbase.sys .data:0x2afab8, 0x27ef0 bytes
    // win32kbase.sys .data:0x257cd0, 0x243e0 bytes
    //
    _u5(sdk::unknown_ptr) session_initialized;
    
    // [_spDevList@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25acb0, 0x243e0 bytes
    // win32kbase.sys .data:0x2afac0, 0x27ef0 bytes
    // win32kbase.sys .data:0x257cd8, 0x243e0 bytes
    //
    _u6(sdk::unknown_ptr) sp_dev_list;
    
    // [TmpGetDeviceList@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba1b0, 0x243e0 bytes
    // win32kbase.sys .text:0xccc20, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3a90, 0x243e0 bytes
    //
    _u7(sdk::unknown_ptr) tmp_get_device_list;
    
    // [TmpGetLock@CBaseInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb280, 0x243e0 bytes
    // win32kbase.sys .text:0xccec0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4ca0, 0x243e0 bytes
    //
    _u8(sdk::unknown_ptr) tmp_get_lock;
};
#include "magic/api.end.hpp"
