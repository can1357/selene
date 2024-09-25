#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::cptp_processor
{
    // [??1CPTPProcessor@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f5800, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [GetHitTestState@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f6680, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_hit_test_state;
    
    // [ProcessMouseQueue@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xf72c0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) process_mouse_queue;
    
    // [QueuePTPMouseEvent@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f79dc, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) queue_ptp_mouse_event;
    
    // [s_dwPTPMouseEvents@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2b74bc, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) s_dw_ptp_mouse_events;
    
    // [s_dwPTPQueueHead@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2b74b8, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) s_dw_ptp_queue_head;
    
    // [s_PTPMouseEventQueue@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2b74c0, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) s_ptp_mouse_event_queue;
    
    // [s_queueLock@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2b3170, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) s_queue_lock;
    
    // [UnqueuePTPMouseEvent@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xf741e, 0x27ef0 bytes
    //
    _m8(sdk::unknown_ptr) unqueue_ptp_mouse_event;
    
    // [CleanupGestureState@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1af61c, 0x243e0 bytes
    // win32kbase.sys .text:0x1ad3cc, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) cleanup_gesture_state;
    
    // [ShellEndpointExists@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1b1534, 0x243e0 bytes
    // win32kbase.sys .text:0x1af2dc, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) shell_endpoint_exists;
    
    // [TraceEnvironment@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1b1604, 0x243e0 bytes
    // win32kbase.sys .text:0x1af3ac, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) trace_environment;
    
    // [BuildEnvironment@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af230, 0x243e0 bytes
    // win32kbase.sys .text:0x1f59d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1acfe0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) build_environment;
    
    // [CacheInertia@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af4d4, 0x243e0 bytes
    // win32kbase.sys .text:0x1f5cd8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad284, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) cache_inertia;
    
    // [??0CPTPProcessor@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af0c4, 0x243e0 bytes
    // win32kbase.sys .text:0x1f5754, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ace74, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) construct_instance;
    
    // [CopyPointersIntoFrame@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af650, 0x243e0 bytes
    // win32kbase.sys .text:0x1f5e18, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad400, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) copy_pointers_into_frame;
    
    // [CreateGestureCache@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af754, 0x243e0 bytes
    // win32kbase.sys .text:0x1f5f20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad504, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) create_gesture_cache;
    
    // [EndInertia@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af974, 0x243e0 bytes
    // win32kbase.sys .text:0x1f630c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad724, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) end_inertia;
    
    // [EndInertiaForContainer@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af9e8, 0x243e0 bytes
    // win32kbase.sys .text:0x1f6378, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad798, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) end_inertia_for_container;
    
    // [EnvironmentChanged@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb270, 0x243e0 bytes
    // win32kbase.sys .text:0x7f5a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x55ce0, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) environment_changed;
    
    // [HandleInertiaTimer@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1afe20, 0x243e0 bytes
    // win32kbase.sys .text:0x1f67c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1adbd0, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) handle_inertia_timer;
    
    // [InitState@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1afe7c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f6814, 0x27ef0 bytes
    // win32kbase.sys .text:0x1adc2c, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) init_state;
    
    // [IsOurKey@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1aff58, 0x243e0 bytes
    // win32kbase.sys .text:0xf70b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1add08, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) is_our_key;
    
    // [OnEngineOutput@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b01a0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f6940, 0x27ef0 bytes
    // win32kbase.sys .text:0x1adf50, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) on_engine_output;
    
    // [OnKeyEvent@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b055c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f6d5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ae30c, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) on_key_event;
    
    // [OnKeyPress@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b061c, 0x243e0 bytes
    // win32kbase.sys .text:0xf7266, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ae3cc, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) on_key_press;
    
    // [OnTelemetryOutput@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b06e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f6e70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ae490, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) on_telemetry_output;
    
    // [ProcessInput@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b0d04, 0x243e0 bytes
    // win32kbase.sys .text:0x1f74dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aeab4, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) process_input;
    
    // [s_aapState@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ed00, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3b80, 0x27ef0 bytes
    // win32kbase.sys .data:0x25bd30, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) s_aap_state;
    
    // [SendPTPInertiaEndToContainer@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b118c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f7bf4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aef34, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) send_ptp_inertia_end_to_container;
    
    // [TransformTPScreenToHimetric@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b1b18, 0x243e0 bytes
    // win32kbase.sys .text:0x1f856c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1af8c0, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) transform_tp_screen_to_himetric;
    
    // [UpdateEnvironment@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b1bac, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1af954, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) update_environment;
    
    // [xxxDownlevelInput@CPTPProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b1be4, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8638, 0x27ef0 bytes
    // win32kbase.sys .text:0x1af98c, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) xxx_downlevel_input;
};
#include "magic/api.end.hpp"
