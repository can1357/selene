#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor
{
    // [CreateInstance@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x881a0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create_instance;
    
    // [MouseSpeedHitTest@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2293c, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) mouse_speed_hit_test;
    
    // [SendInputStreamEndedMessage@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23740, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) send_input_stream_ended_message;
    
    // [HandleMITTermination@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc5600, 0x243e0 bytes
    // win32kbase.sys .text:0xbe5f0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) handle_mit_termination;
    
    // [AccessibilityMouseButtonAction@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c816c, 0x243e0 bytes
    // win32kbase.sys .text:0x2112e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c5f4c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) accessibility_mouse_button_action;
    
    // [AccessibilityMouseMove@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8270, 0x243e0 bytes
    // win32kbase.sys .text:0x2113ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6050, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) accessibility_mouse_move;
    
    // [AccessibilityReleaseMouseButton@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8318, 0x243e0 bytes
    // win32kbase.sys .text:0x211494, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c60f8, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) accessibility_release_mouse_button;
    
    // [AnalyzeNewMousePosition@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb3d90, 0x243e0 bytes
    // win32kbase.sys .text:0xc81c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x5e104, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) analyze_new_mouse_position;
    
    // [AppCompatWheelRoutingRequested@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8530, 0x243e0 bytes
    // win32kbase.sys .text:0x211650, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6310, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) app_compat_wheel_routing_requested;
    
    // [ApplyAccelerationToDelta@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eb44, 0x243e0 bytes
    // win32kbase.sys .text:0xc84c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x59008, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) apply_acceleration_to_delta;
    
    // [BufferInputDestinedForContainer@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a148, 0x243e0 bytes
    // win32kbase.sys .text:0x22838, 0x27ef0 bytes
    // win32kbase.sys .text:0x64860, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) buffer_input_destined_for_container;
    
    // [CanContainMoveTransition@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xabbd0, 0x243e0 bytes
    // win32kbase.sys .text:0xba180, 0x27ef0 bytes
    // win32kbase.sys .text:0xa18a0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) can_contain_move_transition;
    
    // [CaptureLogicalCursorPosToQMouseMove@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c13c, 0x243e0 bytes
    // win32kbase.sys .text:0x20d7c, 0x27ef0 bytes
    // win32kbase.sys .text:0x128ec, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) capture_logical_cursor_pos_to_q_mouse_move;
    
    // [CommitMousePosAndMoveCursor@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb2214, 0x243e0 bytes
    // win32kbase.sys .text:0xc3fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5e53c, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) commit_mouse_pos_and_move_cursor;
    
    // [ComputeAndDeliverMouseButtons@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88770, 0x243e0 bytes
    // win32kbase.sys .text:0xd300, 0x27ef0 bytes
    // win32kbase.sys .text:0x6abe0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) compute_and_deliver_mouse_buttons;
    
    // [ComputeAndDeliverMouseMove@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6bc20, 0x243e0 bytes
    // win32kbase.sys .text:0xb5680, 0x27ef0 bytes
    // win32kbase.sys .text:0x606d0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) compute_and_deliver_mouse_move;
    
    // [ComputeAndDeliverMouseWheel@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8930, 0x243e0 bytes
    // win32kbase.sys .text:0x2119f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6710, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) compute_and_deliver_mouse_wheel;
    
    // [ComputeMouseSystemStateForInterceptor@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8a2c, 0x243e0 bytes
    // win32kbase.sys .text:0x211b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c680c, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) compute_mouse_system_state_for_interceptor;
    
    // [ComputeUIPIForMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6be84, 0x243e0 bytes
    // win32kbase.sys .text:0x20aa8, 0x27ef0 bytes
    // win32kbase.sys .text:0x64698, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) compute_uipi_for_mouse_event;
    
    // [??0CMouseProcessor@@IEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x262ac, 0x243e0 bytes
    // win32kbase.sys .text:0x88228, 0x27ef0 bytes
    // win32kbase.sys .text:0x78ed0, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) construct_instance;
    
    // [ContainsButtonTransition@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb0b60, 0x243e0 bytes
    // win32kbase.sys .text:0xbf740, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7100, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) contains_button_transition;
    
    // [ContainsWheelTransition@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb0d50, 0x243e0 bytes
    // win32kbase.sys .text:0xc0d20, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7220, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) contains_wheel_transition;
    
    // [DeliverMouseButtonToInputDest@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89024, 0x243e0 bytes
    // win32kbase.sys .text:0xdcc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5e33c, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) deliver_mouse_button_to_input_dest;
    
    // [DeliverMouseMoveToInputDest@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89888, 0x243e0 bytes
    // win32kbase.sys .text:0x143e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x6526c, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) deliver_mouse_move_to_input_dest;
    
    // [DeliverMouseWheelToInputDest@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8c28, 0x243e0 bytes
    // win32kbase.sys .text:0x212020, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6a08, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) deliver_mouse_wheel_to_input_dest;
    
    // [??1CMouseProcessor@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26e48, 0x243e0 bytes
    // win32kbase.sys .text:0x87710, 0x27ef0 bytes
    // win32kbase.sys .text:0x79a68, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) destroy_instance;
    
    // [DetectAndApplyMouseMovePostStrategy@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89930, 0x243e0 bytes
    // win32kbase.sys .text:0x1465c, 0x27ef0 bytes
    // win32kbase.sys .text:0x64dd0, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) detect_and_apply_mouse_move_post_strategy;
    
    // [Extensibility_SynthesizeMouseInput@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c90ec, 0x243e0 bytes
    // win32kbase.sys .text:0x2122cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6ecc, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) extensibility_synthesize_mouse_input;
    
    // [ForceMouseOwner@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc6d54, 0x243e0 bytes
    // win32kbase.sys .text:0x2128b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf964, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) force_mouse_owner;
    
    // [ForceResetMouseButtonInMakeAccumulator@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc1bf4, 0x243e0 bytes
    // win32kbase.sys .text:0xd4d94, 0x27ef0 bytes
    // win32kbase.sys .text:0xbb344, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) force_reset_mouse_button_in_make_accumulator;
    
    // [ForwardInputToISM@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae10, 0x243e0 bytes
    // win32kbase.sys .text:0x23db4, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f840, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) forward_input_to_ism;
    
    // [GetMouseCoord@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e870, 0x243e0 bytes
    // win32kbase.sys .text:0xc82a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x5a1f0, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) get_mouse_coord;
    
    // [GetMouseCoordinateAbsolute@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e954, 0x243e0 bytes
    // win32kbase.sys .text:0x5d30, 0x27ef0 bytes
    // win32kbase.sys .text:0x5a2d4, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) get_mouse_coordinate_absolute;
    
    // [GetMouseCoordinateRelative@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e760, 0x243e0 bytes
    // win32kbase.sys .text:0xc8388, 0x27ef0 bytes
    // win32kbase.sys .text:0x5a0e0, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) get_mouse_coordinate_relative;
    
    // [GetMouseWheelForegroundThread@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c99d8, 0x243e0 bytes
    // win32kbase.sys .text:0x212b48, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c77b8, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) get_mouse_wheel_foreground_thread;
    
    // [HandleCapture_BreakHasMouseOwner@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88314, 0x243e0 bytes
    // win32kbase.sys .text:0xcca4, 0x27ef0 bytes
    // win32kbase.sys .text:0x5cfb8, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) handle_capture_break_has_mouse_owner;
    
    // [HandleCapture_MakeNoMouseOwner@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87f7c, 0x243e0 bytes
    // win32kbase.sys .text:0xca08, 0x27ef0 bytes
    // win32kbase.sys .text:0xa98b8, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) handle_capture_make_no_mouse_owner;
    
    // [HandleMouseForLegacyTouchpad@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c9c18, 0x243e0 bytes
    // win32kbase.sys .text:0x212d80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c79f8, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) handle_mouse_for_legacy_touchpad;
    
    // [HandleMouseInterceptWorker@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c9c94, 0x243e0 bytes
    // win32kbase.sys .text:0x212dfc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c7a74, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) handle_mouse_intercept_worker;
    
    // [HittestWheelRoutingRequested@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c9e1c, 0x243e0 bytes
    // win32kbase.sys .text:0x212f64, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c7bfc, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) hittest_wheel_routing_requested;
    
    // [InformUMObservers@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88a04, 0x243e0 bytes
    // win32kbase.sys .text:0xd574, 0x27ef0 bytes
    // win32kbase.sys .text:0x6a9f0, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) inform_um_observers;
    
    // [InitiateWaitForInjectionCompletion@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb469c, 0x243e0 bytes
    // win32kbase.sys .text:0xc67cc, 0x27ef0 bytes
    // win32kbase.sys .text:0xadcfc, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) initiate_wait_for_injection_completion;
    
    // [LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb2968, 0x243e0 bytes
    // win32kbase.sys .text:0xc7bbc, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8988, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) logical_cursor_pos_from_dpi_awareness_context;
    
    // [MasterInputThreadDeactivated@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc5560, 0x243e0 bytes
    // win32kbase.sys .text:0xd8ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbe550, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) master_input_thread_deactivated;
    
    // [MouseHitTest@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x70d04, 0x243e0 bytes
    // win32kbase.sys .text:0x22474, 0x27ef0 bytes
    // win32kbase.sys .text:0x108e0, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) mouse_hit_test;
    
    // [MoveMouseWindowManagement@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d954, 0x243e0 bytes
    // win32kbase.sys .text:0x20e5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x14124, 0x243e0 bytes
    //
    _q5(sdk::unknown_ptr) move_mouse_window_management;
    
    // [NotifySetPointerGraphicDevice@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb82ac, 0x243e0 bytes
    // win32kbase.sys .text:0xcd64c, 0x27ef0 bytes
    // win32kbase.sys .text:0xb25ac, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) notify_set_pointer_graphic_device;
    
    // [PostMouseInputMessage@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ca2f0, 0x243e0 bytes
    // win32kbase.sys .text:0x213440, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c80d0, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) post_mouse_input_message;
    
    // [PostMouseMoveToInputDest@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a37c, 0x243e0 bytes
    // win32kbase.sys .text:0xe504, 0x27ef0 bytes
    // win32kbase.sys .text:0x65a28, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) post_mouse_move_to_input_dest;
    
    // [PostMouseMoveToQ@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a8f4, 0x243e0 bytes
    // win32kbase.sys .text:0xeb60, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f5f8, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) post_mouse_move_to_q;
    
    // [PostPendingMouseMove@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a81c, 0x243e0 bytes
    // win32kbase.sys .text:0xea8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f2dc, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) post_pending_mouse_move;
    
    // [PostPendingMouseMoveToInputDest@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ad54, 0x243e0 bytes
    // win32kbase.sys .text:0xefec, 0x27ef0 bytes
    // win32kbase.sys .text:0x5df20, 0x243e0 bytes
    //
    _r1(sdk::unknown_ptr) post_pending_mouse_move_to_input_dest;
    
    // [PrepareDataForIntercept@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ca44c, 0x243e0 bytes
    // win32kbase.sys .text:0x213684, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c822c, 0x243e0 bytes
    //
    _r2(sdk::unknown_ptr) prepare_data_for_intercept;
    
    // [ProcessInput@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ca65c, 0x243e0 bytes
    // win32kbase.sys .text:0x213894, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c843c, 0x243e0 bytes
    //
    _r3(sdk::unknown_ptr) process_input;
    
    // [ProcessMouseButton@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89278, 0x243e0 bytes
    // win32kbase.sys .text:0xdf34, 0x27ef0 bytes
    // win32kbase.sys .text:0x673b8, 0x243e0 bytes
    //
    _r4(sdk::unknown_ptr) process_mouse_button;
    
    // [ProcessMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ae24, 0x243e0 bytes
    // win32kbase.sys .text:0x1e934, 0x27ef0 bytes
    // win32kbase.sys .text:0x63838, 0x243e0 bytes
    //
    _r5(sdk::unknown_ptr) process_mouse_event;
    
    // [ProcessMouseInputData@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a384, 0x243e0 bytes
    // win32kbase.sys .text:0x21680, 0x27ef0 bytes
    // win32kbase.sys .text:0x608c8, 0x243e0 bytes
    //
    _r6(sdk::unknown_ptr) process_mouse_input_data;
    
    // [ProcessMouseMove@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69eb0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e35c, 0x27ef0 bytes
    // win32kbase.sys .text:0x6103c, 0x243e0 bytes
    //
    _r7(sdk::unknown_ptr) process_mouse_move;
    
    // [ProcessMouseWheel@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cabb4, 0x243e0 bytes
    // win32kbase.sys .text:0x213ed8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c8994, 0x243e0 bytes
    //
    _r8(sdk::unknown_ptr) process_mouse_wheel;
    
    // [QueueMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6a520, 0x243e0 bytes
    // win32kbase.sys .text:0x21858, 0x27ef0 bytes
    // win32kbase.sys .text:0x60a64, 0x243e0 bytes
    //
    _r9(sdk::unknown_ptr) queue_mouse_event;
    
    // [RemoveMipOverrideOnMouseOwner@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb2f4, 0x243e0 bytes
    // win32kbase.sys .text:0x21474c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c90d4, 0x243e0 bytes
    //
    _s0(sdk::unknown_ptr) remove_mip_override_on_mouse_owner;
    
    // [ShouldDeliverWheelEventToInputDest@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb5a8, 0x243e0 bytes
    // win32kbase.sys .text:0x21490c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c9388, 0x243e0 bytes
    //
    _s1(sdk::unknown_ptr) should_deliver_wheel_event_to_input_dest;
    
    // [SynthesizeMouse@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6baa0, 0x243e0 bytes
    // win32kbase.sys .text:0x22160, 0x27ef0 bytes
    // win32kbase.sys .text:0x60784, 0x243e0 bytes
    //
    _s2(sdk::unknown_ptr) synthesize_mouse;
    
    // [UpdateForegroundForInput@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8aeb8, 0x243e0 bytes
    // win32kbase.sys .text:0xf0b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x68584, 0x243e0 bytes
    //
    _s3(sdk::unknown_ptr) update_foreground_for_input;
    
    // [UpdateGlobalCursorOwner@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89f1c, 0x243e0 bytes
    // win32kbase.sys .text:0x14160, 0x27ef0 bytes
    // win32kbase.sys .text:0x65314, 0x243e0 bytes
    //
    _s4(sdk::unknown_ptr) update_global_cursor_owner;
};
#include "magic/api.end.hpp"
