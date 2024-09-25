#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_hid_input
{
    // [CreateInstance@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x87e14, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create_instance;
    
    // [PostProcessInput@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1fac20, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) post_process_input;
    
    // [AcquireUserCritOnRead@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_user_crit_on_read;
    
    // [DoPostDispatchProcessing@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) do_post_dispatch_processing;
    
    // [DoPreDispatchProcessing@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) do_pre_dispatch_processing;
    
    // [GetDispatchersName@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b10, 0x243e0 bytes
    // win32kbase.sys .text:0xdab20, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84b0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_dispatchers_name;
    
    // [GetKernelHandleToRimObj@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaca0, 0x243e0 bytes
    // win32kbase.sys .text:0x75ff0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5500, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_kernel_handle_to_rim_obj;
    
    // [HandleDelayZonePalmRejectionTimer@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b33d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9e94, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1180, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) handle_delay_zone_palm_rejection_timer;
    
    // [HandleDirectStartStopDeviceReadRequest@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb7d0, 0x243e0 bytes
    // win32kbase.sys .text:0x76b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x579c0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) handle_direct_start_stop_device_read_request;
    
    // [HandleFlushDelayZonePalmRejectInputTimer@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3458, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9f1c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1208, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) handle_flush_delay_zone_palm_reject_input_timer;
    
    // [HandlePTPInertiaTimer@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b34b4, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9f78, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1264, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) handle_ptp_inertia_timer;
    
    // [HandlePTPTimer@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b355c, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa020, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b130c, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) handle_ptp_timer;
    
    // [HandleTSRequestForUserModeRimDevices@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb69d0, 0x243e0 bytes
    // win32kbase.sys .text:0xca100, 0x27ef0 bytes
    // win32kbase.sys .text:0xb08c0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) handle_ts_request_for_user_mode_rim_devices;
    
    // [IsTouchpadDevice@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3604, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa0c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b13b4, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) is_touchpad_device;
    
    // [OnDelayZonePalmRejectionTimerNotification@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3630, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa0f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b13e0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) on_delay_zone_palm_rejection_timer_notification;
    
    // [OnDirectStartStopReadNotification@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x134c0, 0x243e0 bytes
    // win32kbase.sys .text:0x7e810, 0x27ef0 bytes
    // win32kbase.sys .text:0x5d9a0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) on_direct_start_stop_read_notification;
    
    // [OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3670, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa130, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1420, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) on_flush_delay_zone_palm_reject_input_timer_notification;
    
    // [OnPTPInertiaHandleEvent@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b36e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa150, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1490, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) on_ptp_inertia_handle_event;
    
    // [OnPTPInertiaTimerNotification@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3710, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa180, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b14c0, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) on_ptp_inertia_timer_notification;
    
    // [OnPTPMarshalNotification@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3bf0, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa560, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b19a0, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) on_ptp_marshal_notification;
    
    // [OnPTPTimerNotification@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3c50, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa5c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1a00, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) on_ptp_timer_notification;
    
    // [OnRIMDeviceClosed@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc45c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1fa9b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd7c0, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) on_rim_device_closed;
    
    // [OnRIMDeviceCreated@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7f30, 0x243e0 bytes
    // win32kbase.sys .text:0x1faa50, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0b30, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) on_rim_device_created;
    
    // [OnRIMDeviceDestroyed@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc80e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1fab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0cc0, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) on_rim_device_destroyed;
    
    // [OnRIMDeviceOpened@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc4570, 0x243e0 bytes
    // win32kbase.sys .text:0x1fab90, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd770, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) on_rim_device_opened;
    
    // [OnTouchSynthesizeNotification@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b4140, 0x243e0 bytes
    // win32kbase.sys .text:0x1fac00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1ef0, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) on_touch_synthesize_notification;
    
    // [PostInitialize@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7b80, 0x243e0 bytes
    // win32kbase.sys .text:0xd9810, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0790, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) post_initialize;
    
    // [PreProcessInput@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b4160, 0x243e0 bytes
    // win32kbase.sys .text:0x1fac60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1f10, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) pre_process_input;
    
    // [PreUninitialize@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc240, 0x243e0 bytes
    // win32kbase.sys .text:0xd3390, 0x27ef0 bytes
    // win32kbase.sys .text:0x74b10, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) pre_uninitialize;
    
    // [ProcessInput@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b4210, 0x243e0 bytes
    // win32kbase.sys .text:0x1facd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b1fc0, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) process_input;
    
    // [ProcessPTPInertiaActions@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b43e8, 0x243e0 bytes
    // win32kbase.sys .text:0x1faef4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b2198, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) process_ptp_inertia_actions;
    
    // [ProcessPTPMouseInput@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b4890, 0x243e0 bytes
    // win32kbase.sys .text:0x1fb2b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b2640, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) process_ptp_mouse_input;
    
    // [UpdatePointerDeviceCount@CHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b48e8, 0x243e0 bytes
    // win32kbase.sys .text:0x1fb308, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b2698, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) update_pointer_device_count;
};
#include "magic/api.end.hpp"
