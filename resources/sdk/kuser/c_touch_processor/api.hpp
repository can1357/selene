#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_touch_processor
{
    // [AddUndispatchedFrameToThreadFrameList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1d4d2c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) add_undispatched_frame_to_thread_frame_list;
    
    // [CheckAndActivateWindowResizeHighlight@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1d6b90, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) check_and_activate_window_resize_highlight;
    
    // [CheckAndDismissWindowResizeHighlight@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1d6c74, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) check_and_dismiss_window_resize_highlight;
    
    // [CheckFreeOnDeparture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1d6dfc, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) check_free_on_departure;
    
    // [ForwardInertiaFrameToManipulationThread@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1dcc90, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) forward_inertia_frame_to_manipulation_thread;
    
    // [ReferenceFrameFromPointerMsgId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1ea5a0, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) reference_frame_from_pointer_msg_id;
    
    // [ReferenceFrameInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1ea714, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) reference_frame_int;
    
    // [SetupQFramePostMT@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1ee95c, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) setup_q_frame_post_mt;
    
    // [ThreadHasPrimaryCaptureExternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1ef1a0, 0x27ef0 bytes
    //
    _m8(sdk::unknown_ptr) thread_has_primary_capture_external;
    
    // [TouchHitTest@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1ef22c, 0x27ef0 bytes
    //
    _m9(sdk::unknown_ptr) touch_hit_test;
    
    // [TransformPointerCoordinates@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1ef574, 0x27ef0 bytes
    //
    _n0(sdk::unknown_ptr) transform_pointer_coordinates;
    
    // [CTouchProcessorLockShared@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6356, 0x27ef0 bytes
    // win32kbase.sys .text:0x1935c0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) c_touch_processor_lock_shared;
    
    // [CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2d20, 0x27ef0 bytes
    // win32kbase.sys .text:0xd4680, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) cleanup_input_dest_hwnd_refs_for_desktop_thread_exit;
    
    // [DispatchFrameAndGetNext@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1998e0, 0x243e0 bytes
    // win32kbase.sys .text:0x197d60, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) dispatch_frame_and_get_next;
    
    // [ForwardPointerInputFrameToManipulationThread@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x19a810, 0x243e0 bytes
    // win32kbase.sys .text:0x198cd0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) forward_pointer_input_frame_to_manipulation_thread;
    
    // [ReferenceMsgDataFromGuard@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eab90, 0x27ef0 bytes
    // win32kbase.sys .text:0xd46f0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) reference_msg_data_from_guard;
    
    // [SetupNewQFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8294, 0x243e0 bytes
    // win32kbase.sys .text:0x1a6970, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) setup_new_q_frame;
    
    // [ThreadHasPrimaryCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8be0, 0x243e0 bytes
    // win32kbase.sys .text:0x1a72d0, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) thread_has_primary_capture;
    
    // [UnreferenceMsgDataFromGuard@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0070, 0x27ef0 bytes
    // win32kbase.sys .text:0xd47c8, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) unreference_msg_data_from_guard;
    
    // [AddRoutedAwayTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1944a4, 0x243e0 bytes
    // win32kbase.sys .text:0x1d46c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19284c, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) add_routed_away_target;
    
    // [AddThreadPointerData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194530, 0x243e0 bytes
    // win32kbase.sys .text:0x1d4840, 0x27ef0 bytes
    // win32kbase.sys .text:0x1928e0, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) add_thread_pointer_data;
    
    // [AddThreadPointerHookData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194840, 0x243e0 bytes
    // win32kbase.sys .text:0x1d4c10, 0x27ef0 bytes
    // win32kbase.sys .text:0x192bf0, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) add_thread_pointer_hook_data;
    
    // [AdjustCaptureOnRetrieval@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194960, 0x243e0 bytes
    // win32kbase.sys .text:0x1d4d70, 0x27ef0 bytes
    // win32kbase.sys .text:0x192d10, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) adjust_capture_on_retrieval;
    
    // [AdjustEdgyFrameInputDest@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194a90, 0x243e0 bytes
    // win32kbase.sys .text:0x1d4eb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x192e50, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) adjust_edgy_frame_input_dest;
    
    // [AllocPointerInfoNodeList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194bf8, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5028, 0x27ef0 bytes
    // win32kbase.sys .text:0x192fc4, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) alloc_pointer_info_node_list;
    
    // [AllocPointerQFrameList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194c4c, 0x243e0 bytes
    // win32kbase.sys .text:0x1d51b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x193018, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) alloc_pointer_q_frame_list;
    
    // [AssignPointerCaptureData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194cf4, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5388, 0x27ef0 bytes
    // win32kbase.sys .text:0x1930c0, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) assign_pointer_capture_data;
    
    // [BreakEditionParentNotifyLoop@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194ee0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5670, 0x27ef0 bytes
    // win32kbase.sys .text:0x1932b0, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) break_edition_parent_notify_loop;
    
    // [BuildManipulationInputInfo@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194f90, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5724, 0x27ef0 bytes
    // win32kbase.sys .text:0x193360, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) build_manipulation_input_info;
    
    // [CTouchProcessorLocked@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1951f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5a1c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1935ec, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) c_touch_processor_locked;
    
    // [CalcManipulationInputInfoSize@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x195218, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5a50, 0x27ef0 bytes
    // win32kbase.sys .text:0x193620, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) calc_manipulation_input_info_size;
    
    // [CanCoalesceIgnoreNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x195268, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5a80, 0x27ef0 bytes
    // win32kbase.sys .text:0x193670, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) can_coalesce_ignore_node;
    
    // [CanCoalesceNodeWithPrevious@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x195334, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5b4c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19373c, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) can_coalesce_node_with_previous;
    
    // [CancelActivePointer@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x195c24, 0x243e0 bytes
    // win32kbase.sys .text:0x1d6a4c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19402c, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) cancel_active_pointer;
    
    // [CancelActivePointers@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc07b0, 0x243e0 bytes
    // win32kbase.sys .text:0xd2ca0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbfbe0, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) cancel_active_pointers;
    
    // [CheckAndSendFindMyPenWnf@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x195d1c, 0x243e0 bytes
    // win32kbase.sys .text:0x1d6d08, 0x27ef0 bytes
    // win32kbase.sys .text:0x194124, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) check_and_send_find_my_pen_wnf;
    
    // [CheckandDeliverContainerInput@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x195df4, 0x243e0 bytes
    // win32kbase.sys .text:0x1d6e48, 0x27ef0 bytes
    // win32kbase.sys .text:0x1941fc, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) checkand_deliver_container_input;
    
    // [CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fc78, 0x243e0 bytes
    // win32kbase.sys .text:0xb8470, 0x27ef0 bytes
    // win32kbase.sys .text:0x11438, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) clean_up_delay_zone_palm_rejection_on_thread_exit;
    
    // [CleanupCoalesceInfo@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24e14, 0x243e0 bytes
    // win32kbase.sys .text:0x865fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x76c54, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) cleanup_coalesce_info;
    
    // [CleanupManipulationThreadData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0700, 0x243e0 bytes
    // win32kbase.sys .text:0xd2bf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0690, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) cleanup_manipulation_thread_data;
    
    // [CoalesceNodeWithPrevious@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x196434, 0x243e0 bytes
    // win32kbase.sys .text:0x1d77d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19483c, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) coalesce_node_with_previous;
    
    // [CoalesceQFrames@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x196698, 0x243e0 bytes
    // win32kbase.sys .text:0x1d7a34, 0x27ef0 bytes
    // win32kbase.sys .text:0x194aa0, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) coalesce_q_frames;
    
    // [CommitInputFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1976b0, 0x243e0 bytes
    // win32kbase.sys .text:0xf6380, 0x27ef0 bytes
    // win32kbase.sys .text:0x195ab8, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) commit_input_frame;
    
    // [CommitRimCompleteFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x197740, 0x243e0 bytes
    // win32kbase.sys .text:0x1d8a70, 0x27ef0 bytes
    // win32kbase.sys .text:0x195b4c, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) commit_rim_complete_frame;
    
    // [??0CTouchProcessor@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24c10, 0x243e0 bytes
    // win32kbase.sys .text:0x864bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x756b0, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) construct_instance;
    
    // [CopyPTPPointerInputFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x197ee8, 0x243e0 bytes
    // win32kbase.sys .text:0x1d9ae0, 0x27ef0 bytes
    // win32kbase.sys .text:0x196308, 0x243e0 bytes
    //
    _q5(sdk::unknown_ptr) copy_ptp_pointer_input_frame;
    
    // [CopyRawDataList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x198184, 0x243e0 bytes
    // win32kbase.sys .text:0x1d9ef8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1965d0, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) copy_raw_data_list;
    
    // [CountMTNodesReadyForRouting@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x198264, 0x243e0 bytes
    // win32kbase.sys .text:0x1da200, 0x27ef0 bytes
    // win32kbase.sys .text:0x1966b0, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) count_mt_nodes_ready_for_routing;
    
    // [CreateAndReferenceMsgData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1982ac, 0x243e0 bytes
    // win32kbase.sys .text:0x1da248, 0x27ef0 bytes
    // win32kbase.sys .text:0x1966f8, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) create_and_reference_msg_data;
    
    // [CreateInputPointerNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1983f8, 0x243e0 bytes
    // win32kbase.sys .text:0x1da46c, 0x27ef0 bytes
    // win32kbase.sys .text:0x196844, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) create_input_pointer_node;
    
    // [CreateInputPointerNodesForFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1985dc, 0x243e0 bytes
    // win32kbase.sys .text:0x1da74c, 0x27ef0 bytes
    // win32kbase.sys .text:0x196a28, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) create_input_pointer_nodes_for_frame;
    
    // [CreateNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1986f4, 0x243e0 bytes
    // win32kbase.sys .text:0x1da938, 0x27ef0 bytes
    // win32kbase.sys .text:0x196b40, 0x243e0 bytes
    //
    _r1(sdk::unknown_ptr) create_node;
    
    // [DelegateCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x198a14, 0x243e0 bytes
    // win32kbase.sys .text:0x1daf48, 0x27ef0 bytes
    // win32kbase.sys .text:0x196e64, 0x243e0 bytes
    //
    _r2(sdk::unknown_ptr) delegate_capture;
    
    // [DelegateCaptureInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x198d28, 0x243e0 bytes
    // win32kbase.sys .text:0x1db278, 0x27ef0 bytes
    // win32kbase.sys .text:0x197184, 0x243e0 bytes
    //
    _r3(sdk::unknown_ptr) delegate_capture_int;
    
    // [DelegateCapturePointerImplicit@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x198e14, 0x243e0 bytes
    // win32kbase.sys .text:0x1db364, 0x27ef0 bytes
    // win32kbase.sys .text:0x197270, 0x243e0 bytes
    //
    _r4(sdk::unknown_ptr) delegate_capture_pointer_implicit;
    
    // [DelegateCoalescePointerMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x198f20, 0x243e0 bytes
    // win32kbase.sys .text:0x1db470, 0x27ef0 bytes
    // win32kbase.sys .text:0x197370, 0x243e0 bytes
    //
    _r5(sdk::unknown_ptr) delegate_coalesce_pointer_message;
    
    // [DelegateCoalesceQFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1990a0, 0x243e0 bytes
    // win32kbase.sys .text:0x1db5ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1974f8, 0x243e0 bytes
    //
    _r6(sdk::unknown_ptr) delegate_coalesce_q_frame;
    
    // [DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1991b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1db700, 0x27ef0 bytes
    // win32kbase.sys .text:0x197600, 0x243e0 bytes
    //
    _r7(sdk::unknown_ptr) delegate_implict_capture_and_release_if_needed;
    
    // [DereferencePointerInputFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x199250, 0x243e0 bytes
    // win32kbase.sys .text:0x1db7a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1976b0, 0x243e0 bytes
    //
    _r8(sdk::unknown_ptr) dereference_pointer_input_frame;
    
    // [DereferencePointerInputFrameAndMessageData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1992a0, 0x243e0 bytes
    // win32kbase.sys .text:0x1db7f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x197710, 0x243e0 bytes
    //
    _r9(sdk::unknown_ptr) dereference_pointer_input_frame_and_message_data;
    
    // [??1CTouchProcessor@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24c90, 0x243e0 bytes
    // win32kbase.sys .text:0x86550, 0x27ef0 bytes
    // win32kbase.sys .text:0x76ad8, 0x243e0 bytes
    //
    _s0(sdk::unknown_ptr) destroy_instance;
    
    // [DeterminePointerTargetWindow@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1992ec, 0x243e0 bytes
    // win32kbase.sys .text:0x1db838, 0x27ef0 bytes
    // win32kbase.sys .text:0x197764, 0x243e0 bytes
    //
    _s1(sdk::unknown_ptr) determine_pointer_target_window;
    
    // [DetermineTouchpadPointerTargetWindow@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1996f4, 0x243e0 bytes
    // win32kbase.sys .text:0x1dbc54, 0x27ef0 bytes
    // win32kbase.sys .text:0x197b74, 0x243e0 bytes
    //
    _s2(sdk::unknown_ptr) determine_touchpad_pointer_target_window;
    
    // [DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x199980, 0x243e0 bytes
    // win32kbase.sys .text:0x1dbe40, 0x27ef0 bytes
    // win32kbase.sys .text:0x197e10, 0x243e0 bytes
    //
    _s3(sdk::unknown_ptr) dispatch_frame_post_delay_zone_processing_and_get_next;
    
    // [DoContactVisualization@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x199a70, 0x243e0 bytes
    // win32kbase.sys .text:0x1dbfc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x197f0c, 0x243e0 bytes
    //
    _s4(sdk::unknown_ptr) do_contact_visualization;
    
    // [DoContactVisualizationAndGenerateMessages@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x199adc, 0x243e0 bytes
    // win32kbase.sys .text:0x1dc02c, 0x27ef0 bytes
    // win32kbase.sys .text:0x197f78, 0x243e0 bytes
    //
    _s5(sdk::unknown_ptr) do_contact_visualization_and_generate_messages;
    
    // [DoDeferredPointerActivate@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x199d80, 0x243e0 bytes
    // win32kbase.sys .text:0x1dc380, 0x27ef0 bytes
    // win32kbase.sys .text:0x198240, 0x243e0 bytes
    //
    _s6(sdk::unknown_ptr) do_deferred_pointer_activate;
    
    // [EndQFrameNodeDeferment@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a060, 0x243e0 bytes
    // win32kbase.sys .text:0x1dc674, 0x27ef0 bytes
    // win32kbase.sys .text:0x19851c, 0x243e0 bytes
    //
    _s7(sdk::unknown_ptr) end_q_frame_node_deferment;
    
    // [FindAndReferenceFrameById@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a1b4, 0x243e0 bytes
    // win32kbase.sys .text:0x1dc7d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x198670, 0x243e0 bytes
    //
    _s8(sdk::unknown_ptr) find_and_reference_frame_by_id;
    
    // [FindFrameById@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a1fc, 0x243e0 bytes
    // win32kbase.sys .text:0x1dc81c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1986b8, 0x243e0 bytes
    //
    _s9(sdk::unknown_ptr) find_frame_by_id;
    
    // [FindNodeById@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a268, 0x243e0 bytes
    // win32kbase.sys .text:0xf6412, 0x27ef0 bytes
    // win32kbase.sys .text:0x198728, 0x243e0 bytes
    //
    _t0(sdk::unknown_ptr) find_node_by_id;
    
    // [FindNodeForPointerPromotion@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a310, 0x243e0 bytes
    // win32kbase.sys .text:0x1dc86c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1987d4, 0x243e0 bytes
    //
    _t1(sdk::unknown_ptr) find_node_for_pointer_promotion;
    
    // [FindNodeInFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a3ec, 0x243e0 bytes
    // win32kbase.sys .text:0x1dc94c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1988b0, 0x243e0 bytes
    //
    _t2(sdk::unknown_ptr) find_node_in_frame;
    
    // [FindNodeQueuedMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a4c8, 0x243e0 bytes
    // win32kbase.sys .text:0x1dca28, 0x27ef0 bytes
    // win32kbase.sys .text:0x19898c, 0x243e0 bytes
    //
    _t3(sdk::unknown_ptr) find_node_queued_message;
    
    // [FindPointerInFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a58c, 0x243e0 bytes
    // win32kbase.sys .text:0x1dcaec, 0x27ef0 bytes
    // win32kbase.sys .text:0x198a50, 0x243e0 bytes
    //
    _t4(sdk::unknown_ptr) find_pointer_in_frame;
    
    // [FindValidNodeInFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a67c, 0x243e0 bytes
    // win32kbase.sys .text:0x1dcbdc, 0x27ef0 bytes
    // win32kbase.sys .text:0x198b44, 0x243e0 bytes
    //
    _t5(sdk::unknown_ptr) find_valid_node_in_frame;
    
    // [ForwardInputToManipulationThread@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a730, 0x243e0 bytes
    // win32kbase.sys .text:0x1dccc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x198bf0, 0x243e0 bytes
    //
    _t6(sdk::unknown_ptr) forward_input_to_manipulation_thread;
    
    // [FreeFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a82c, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd028, 0x27ef0 bytes
    // win32kbase.sys .text:0x198cec, 0x243e0 bytes
    //
    _t7(sdk::unknown_ptr) free_frame;
    
    // [FreeHistory@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19a9fc, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd20c, 0x27ef0 bytes
    // win32kbase.sys .text:0x198ec4, 0x243e0 bytes
    //
    _t8(sdk::unknown_ptr) free_history;
    
    // [FreeMsgData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19ab50, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd360, 0x27ef0 bytes
    // win32kbase.sys .text:0x199018, 0x243e0 bytes
    //
    _t9(sdk::unknown_ptr) free_msg_data;
    
    // [FreeNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19ac74, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd488, 0x27ef0 bytes
    // win32kbase.sys .text:0x19913c, 0x243e0 bytes
    //
    _u0(sdk::unknown_ptr) free_node;
    
    // [FreePointerCaptureData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19ad20, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd548, 0x27ef0 bytes
    // win32kbase.sys .text:0x1991e8, 0x243e0 bytes
    //
    _u1(sdk::unknown_ptr) free_pointer_capture_data;
    
    // [FreePointerInfoList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19add4, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd604, 0x27ef0 bytes
    // win32kbase.sys .text:0x19929c, 0x243e0 bytes
    //
    _u2(sdk::unknown_ptr) free_pointer_info_list;
    
    // [FreePointerInfoNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19ae34, 0x243e0 bytes
    // win32kbase.sys .text:0xf64bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1992fc, 0x243e0 bytes
    //
    _u3(sdk::unknown_ptr) free_pointer_info_node;
    
    // [FreePointerInfoNodeInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19af10, 0x243e0 bytes
    // win32kbase.sys .text:0xf6598, 0x27ef0 bytes
    // win32kbase.sys .text:0x1993d8, 0x243e0 bytes
    //
    _u4(sdk::unknown_ptr) free_pointer_info_node_int;
    
    // [FreePointerQFrameList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19afa8, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd670, 0x27ef0 bytes
    // win32kbase.sys .text:0x199470, 0x243e0 bytes
    //
    _u5(sdk::unknown_ptr) free_pointer_q_frame_list;
    
    // [FreePointerRawDataList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19affc, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd6d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1994c4, 0x243e0 bytes
    //
    _u6(sdk::unknown_ptr) free_pointer_raw_data_list;
    
    // [FreeRoutedAwayTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19b06c, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd750, 0x27ef0 bytes
    // win32kbase.sys .text:0x199534, 0x243e0 bytes
    //
    _u7(sdk::unknown_ptr) free_routed_away_target;
    
    // [GenerateDepartureMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19b0c8, 0x243e0 bytes
    // win32kbase.sys .text:0x1dd7b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x199590, 0x243e0 bytes
    //
    _u8(sdk::unknown_ptr) generate_departure_message;
    
    // [GenerateEnterMessages@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19b284, 0x243e0 bytes
    // win32kbase.sys .text:0x1dda3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19974c, 0x243e0 bytes
    //
    _u9(sdk::unknown_ptr) generate_enter_messages;
    
    // [GenerateMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19b4ac, 0x243e0 bytes
    // win32kbase.sys .text:0x1de038, 0x27ef0 bytes
    // win32kbase.sys .text:0x199974, 0x243e0 bytes
    //
    _v0(sdk::unknown_ptr) generate_message;
    
    // [GenerateMessagesCore@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19b900, 0x243e0 bytes
    // win32kbase.sys .text:0x1de628, 0x27ef0 bytes
    // win32kbase.sys .text:0x199dc8, 0x243e0 bytes
    //
    _v1(sdk::unknown_ptr) generate_messages_core;
    
    // [GeneratePointerInputMessages@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19c26c, 0x243e0 bytes
    // win32kbase.sys .text:0x1df0d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x19a738, 0x243e0 bytes
    //
    _v2(sdk::unknown_ptr) generate_pointer_input_messages;
    
    // [GenerateRoutedAwayMessages@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19c4ac, 0x243e0 bytes
    // win32kbase.sys .text:0x1df3e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19a978, 0x243e0 bytes
    //
    _v3(sdk::unknown_ptr) generate_routed_away_messages;
    
    // [GenerateRoutedReleasedMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19c77c, 0x243e0 bytes
    // win32kbase.sys .text:0x1df854, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ac48, 0x243e0 bytes
    //
    _v4(sdk::unknown_ptr) generate_routed_released_message;
    
    // [GenerateRoutedToMessages@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19c904, 0x243e0 bytes
    // win32kbase.sys .text:0x1dfaac, 0x27ef0 bytes
    // win32kbase.sys .text:0x19add0, 0x243e0 bytes
    //
    _v5(sdk::unknown_ptr) generate_routed_to_messages;
    
    // [GenerateWindowLeaveMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19cabc, 0x243e0 bytes
    // win32kbase.sys .text:0x1dfd30, 0x27ef0 bytes
    // win32kbase.sys .text:0x19af88, 0x243e0 bytes
    //
    _v6(sdk::unknown_ptr) generate_window_leave_message;
    
    // [GetButtonChange@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19cd70, 0x243e0 bytes
    // win32kbase.sys .text:0xf6630, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b23c, 0x243e0 bytes
    //
    _v7(sdk::unknown_ptr) get_button_change;
    
    // [GetCoalesceInfo@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19cde8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e018c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b2b4, 0x243e0 bytes
    //
    _v8(sdk::unknown_ptr) get_coalesce_info;
    
    // [GetContactVisualizationPointerEventInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19ce90, 0x243e0 bytes
    // win32kbase.sys .text:0xf66b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b350, 0x243e0 bytes
    //
    _v9(sdk::unknown_ptr) get_contact_visualization_pointer_event_int;
    
    // [GetFrameIdFromPointerMsgId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19ced0, 0x243e0 bytes
    // win32kbase.sys .text:0xf66f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b390, 0x243e0 bytes
    //
    _w0(sdk::unknown_ptr) get_frame_id_from_pointer_msg_id;
    
    // [GetHwndReference@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19cf20, 0x243e0 bytes
    // win32kbase.sys .text:0x1e03a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b3e0, 0x243e0 bytes
    //
    _w1(sdk::unknown_ptr) get_hwnd_reference;
    
    // [GetInputProcessContext@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d004, 0x243e0 bytes
    // win32kbase.sys .text:0xf66fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b4cc, 0x243e0 bytes
    //
    _w2(sdk::unknown_ptr) get_input_process_context;
    
    // [GetMsgPointerIdFromEdition@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d070, 0x243e0 bytes
    // win32kbase.sys .text:0x1e0490, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b540, 0x243e0 bytes
    //
    _w3(sdk::unknown_ptr) get_msg_pointer_id_from_edition;
    
    // [GetNextChildPointerId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d0b8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e04d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b590, 0x243e0 bytes
    //
    _w4(sdk::unknown_ptr) get_next_child_pointer_id;
    
    // [GetNextFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d12c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e054c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b604, 0x243e0 bytes
    //
    _w5(sdk::unknown_ptr) get_next_frame;
    
    // [GetNextPointerId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d180, 0x243e0 bytes
    // win32kbase.sys .text:0x1e05a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b658, 0x243e0 bytes
    //
    _w6(sdk::unknown_ptr) get_next_pointer_id;
    
    // [GetNextRootPointerId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d1ec, 0x243e0 bytes
    // win32kbase.sys .text:0x1e060c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b6c4, 0x243e0 bytes
    //
    _w7(sdk::unknown_ptr) get_next_root_pointer_id;
    
    // [GetPointerBarrelVisualization@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d260, 0x243e0 bytes
    // win32kbase.sys .text:0x1e0680, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b740, 0x243e0 bytes
    //
    _w8(sdk::unknown_ptr) get_pointer_barrel_visualization;
    
    // [GetPointerCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d370, 0x243e0 bytes
    // win32kbase.sys .text:0xf6800, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b860, 0x243e0 bytes
    //
    _w9(sdk::unknown_ptr) get_pointer_capture;
    
    // [GetPointerCaptureInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d41c, 0x243e0 bytes
    // win32kbase.sys .text:0xf68ae, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b91c, 0x243e0 bytes
    //
    _x0(sdk::unknown_ptr) get_pointer_capture_int;
    
    // [GetPointerCursorId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d4c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e06f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b9c0, 0x243e0 bytes
    //
    _x1(sdk::unknown_ptr) get_pointer_cursor_id;
    
    // [GetPointerCursorIdFromMsgData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d550, 0x243e0 bytes
    // win32kbase.sys .text:0x1e0780, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ba50, 0x243e0 bytes
    //
    _x2(sdk::unknown_ptr) get_pointer_cursor_id_from_msg_data;
    
    // [GetPointerData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d5f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e0820, 0x27ef0 bytes
    // win32kbase.sys .text:0x19baf0, 0x243e0 bytes
    //
    _x3(sdk::unknown_ptr) get_pointer_data;
    
    // [GetPointerDataQPCTimeList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19d7d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e0af0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19bcd0, 0x243e0 bytes
    //
    _x4(sdk::unknown_ptr) get_pointer_data_qpc_time_list;
    
    // [GetPointerDataTimes@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19dac0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e0f50, 0x27ef0 bytes
    // win32kbase.sys .text:0x19bfc0, 0x243e0 bytes
    //
    _x5(sdk::unknown_ptr) get_pointer_data_times;
    
    // [GetPointerDataWithHistory@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19dda0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e13e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19c2b0, 0x243e0 bytes
    //
    _x6(sdk::unknown_ptr) get_pointer_data_with_history;
    
    // [GetPointerDownFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e0a0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e1810, 0x27ef0 bytes
    // win32kbase.sys .text:0x19c5c0, 0x243e0 bytes
    //
    _x7(sdk::unknown_ptr) get_pointer_down_frame;
    
    // [GetPointerEventTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e108, 0x243e0 bytes
    // win32kbase.sys .text:0x1e1874, 0x27ef0 bytes
    // win32kbase.sys .text:0x19c630, 0x243e0 bytes
    //
    _x8(sdk::unknown_ptr) get_pointer_event_target;
    
    // [GetPointerFrameData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e1b8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e1924, 0x27ef0 bytes
    // win32kbase.sys .text:0x19c6e0, 0x243e0 bytes
    //
    _x9(sdk::unknown_ptr) get_pointer_frame_data;
    
    // [GetPointerFrameDataWithHistory@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e2f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e1a60, 0x27ef0 bytes
    // win32kbase.sys .text:0x19c820, 0x243e0 bytes
    //
    _y0(sdk::unknown_ptr) get_pointer_frame_data_with_history;
    
    // [GetPointerFrameInfoInternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e6a0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e1f28, 0x27ef0 bytes
    // win32kbase.sys .text:0x19cbe0, 0x243e0 bytes
    //
    _y1(sdk::unknown_ptr) get_pointer_frame_info_internal;
    
    // [GetPointerFrameTimesInternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e778, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2000, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ccb8, 0x243e0 bytes
    //
    _y2(sdk::unknown_ptr) get_pointer_frame_times_internal;
    
    // [GetPointerHistoryFrameData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19e870, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2194, 0x27ef0 bytes
    // win32kbase.sys .text:0x19cdb0, 0x243e0 bytes
    //
    _y3(sdk::unknown_ptr) get_pointer_history_frame_data;
    
    // [GetPointerInfo@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19eac0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e23f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19d000, 0x243e0 bytes
    //
    _y4(sdk::unknown_ptr) get_pointer_info;
    
    // [GetPointerInfoHistoryInternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19ee24, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2854, 0x27ef0 bytes
    // win32kbase.sys .text:0x19d36c, 0x243e0 bytes
    //
    _y5(sdk::unknown_ptr) get_pointer_info_history_internal;
    
    // [GetPointerInfoInternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19eec8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e28f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x19d410, 0x243e0 bytes
    //
    _y6(sdk::unknown_ptr) get_pointer_info_internal;
    
    // [GetPointerInfoNodeQFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f030, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2b38, 0x27ef0 bytes
    // win32kbase.sys .text:0x19d578, 0x243e0 bytes
    //
    _y7(sdk::unknown_ptr) get_pointer_info_node_q_frame;
    
    // [GetPointerMessageInfo@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f0b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19d600, 0x243e0 bytes
    //
    _y8(sdk::unknown_ptr) get_pointer_message_info;
    
    // [GetPointerMessagePoint@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f300, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2f10, 0x27ef0 bytes
    // win32kbase.sys .text:0x19d870, 0x243e0 bytes
    //
    _y9(sdk::unknown_ptr) get_pointer_message_point;
    
    // [GetPointerOffset@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f438, 0x243e0 bytes
    // win32kbase.sys .text:0x1e30e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19d9bc, 0x243e0 bytes
    //
    _z0(sdk::unknown_ptr) get_pointer_offset;
    
    // [GetPointerProprietaryId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f6c4, 0x243e0 bytes
    // win32kbase.sys .text:0x1e336c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19dc48, 0x243e0 bytes
    //
    _z1(sdk::unknown_ptr) get_pointer_proprietary_id;
    
    // [GetPointerRawData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f75c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3408, 0x27ef0 bytes
    // win32kbase.sys .text:0x19dce8, 0x243e0 bytes
    //
    _z2(sdk::unknown_ptr) get_pointer_raw_data;
    
    // [GetPointerRawDataInternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f81c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e34c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x19dda8, 0x243e0 bytes
    //
    _z3(sdk::unknown_ptr) get_pointer_raw_data_internal;
    
    // [GetPointerRawDataWithHistory@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f8c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3560, 0x27ef0 bytes
    // win32kbase.sys .text:0x19de50, 0x243e0 bytes
    //
    _z4(sdk::unknown_ptr) get_pointer_raw_data_with_history;
    
    // [GetPointerTransform@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0124, 0x243e0 bytes
    // win32kbase.sys .text:0x1e417c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19e6bc, 0x243e0 bytes
    //
    _z5(sdk::unknown_ptr) get_pointer_transform;
    
    // [GetPointerVisualization@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0420, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4720, 0x27ef0 bytes
    // win32kbase.sys .text:0x19e9b0, 0x243e0 bytes
    //
    _z6(sdk::unknown_ptr) get_pointer_visualization;
    
    // [GetPrevMsgId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a05c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e48bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x19eb58, 0x243e0 bytes
    //
    _z7(sdk::unknown_ptr) get_prev_msg_id;
    
    // [GetPrevMTNodeTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a04b8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e47b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ea50, 0x243e0 bytes
    //
    _z8(sdk::unknown_ptr) get_prev_mt_node_target;
    
    // [GetPreviousFrameByDevice@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a05e4, 0x243e0 bytes
    // win32kbase.sys .text:0x1e48e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19eb7c, 0x243e0 bytes
    //
    _z9(sdk::unknown_ptr) get_previous_frame_by_device;
    
    // [GetPreviousFrameByDeviceInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0620, 0x243e0 bytes
    // win32kbase.sys .text:0xf6944, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ebb8, 0x243e0 bytes
    //
    _a0(sdk::unknown_ptr) get_previous_frame_by_device_int;
    
    // [GetQueueForCurrentNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a08ac, 0x243e0 bytes
    // win32kbase.sys .text:0xf69ca, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ee4c, 0x243e0 bytes
    //
    _a1(sdk::unknown_ptr) get_queue_for_current_node;
    
    // [GetThreadPointerData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0970, 0x243e0 bytes
    // win32kbase.sys .text:0xf6a90, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ef10, 0x243e0 bytes
    //
    _a2(sdk::unknown_ptr) get_thread_pointer_data;
    
    // [GetTouchProcessorLock@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0a30, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4a80, 0x27ef0 bytes
    // win32kbase.sys .text:0x19efd0, 0x243e0 bytes
    //
    _a3(sdk::unknown_ptr) get_touch_processor_lock;
    
    // [HandleMTNodeTargetWindow@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0c00, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4b20, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f1a0, 0x243e0 bytes
    //
    _a4(sdk::unknown_ptr) handle_mt_node_target_window;
    
    // [HandlePointerNodeWithTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0de0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4d0c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f390, 0x243e0 bytes
    //
    _a5(sdk::unknown_ptr) handle_pointer_node_with_target;
    
    // [InitializeQFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a11b0, 0x243e0 bytes
    // win32kbase.sys .text:0xf6c5a, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f770, 0x243e0 bytes
    //
    _a6(sdk::unknown_ptr) initialize_q_frame;
    
    // [InitializeQFrameCoalesceState@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1200, 0x243e0 bytes
    // win32kbase.sys .text:0xf6caa, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f7c0, 0x243e0 bytes
    //
    _a7(sdk::unknown_ptr) initialize_q_frame_coalesce_state;
    
    // [IsFrameReferenced@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1418, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5338, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f9d8, 0x243e0 bytes
    //
    _a8(sdk::unknown_ptr) is_frame_referenced;
    
    // [IsLastMsgData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a14f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5410, 0x27ef0 bytes
    // win32kbase.sys .text:0x19fab0, 0x243e0 bytes
    //
    _a9(sdk::unknown_ptr) is_last_msg_data;
    
    // [IsPointerMessageTouchpad@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a16a0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e55d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19fc60, 0x243e0 bytes
    //
    _b0(sdk::unknown_ptr) is_pointer_message_touchpad;
    
    // [IsPointerMsgRedirected@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1780, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5700, 0x27ef0 bytes
    // win32kbase.sys .text:0x19fd90, 0x243e0 bytes
    //
    _b1(sdk::unknown_ptr) is_pointer_msg_redirected;
    
    // [IsPointerPrimary@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1860, 0x243e0 bytes
    // win32kbase.sys .text:0x1e57e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19fe70, 0x243e0 bytes
    //
    _b2(sdk::unknown_ptr) is_pointer_primary;
    
    // [IsPointerWindowFrameMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a18b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5830, 0x27ef0 bytes
    // win32kbase.sys .text:0x19fec0, 0x243e0 bytes
    //
    _b3(sdk::unknown_ptr) is_pointer_window_frame_message;
    
    // [IsTouchDevice@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1a8c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5a34, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a00ac, 0x243e0 bytes
    //
    _b4(sdk::unknown_ptr) is_touch_device;
    
    // [LookupNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1b2c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5ad4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a014c, 0x243e0 bytes
    //
    _b5(sdk::unknown_ptr) lookup_node;
    
    // [MarkPointerMessageGenerated@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1b90, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a01b0, 0x243e0 bytes
    //
    _b6(sdk::unknown_ptr) mark_pointer_message_generated;
    
    // [NodeMatchesMTGeneration@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1c9c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5d9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a02c4, 0x243e0 bytes
    //
    _b7(sdk::unknown_ptr) node_matches_mt_generation;
    
    // [NotifyCaptureChangedIfCaptured@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1cf0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5df0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0320, 0x243e0 bytes
    //
    _b8(sdk::unknown_ptr) notify_capture_changed_if_captured;
    
    // [NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1e20, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5f90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0470, 0x243e0 bytes
    //
    _b9(sdk::unknown_ptr) notify_capture_changed_if_captured_delegate;
    
    // [OnRimDeviceClosed@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1f2c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e60b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0590, 0x243e0 bytes
    //
    _c0(sdk::unknown_ptr) on_rim_device_closed;
    
    // [OnRimDeviceOpened@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a202c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e6208, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a066c, 0x243e0 bytes
    //
    _c1(sdk::unknown_ptr) on_rim_device_opened;
    
    // [PassedHoldTime@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a210c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e633c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0728, 0x243e0 bytes
    //
    _c2(sdk::unknown_ptr) passed_hold_time;
    
    // [PointerFlagsToMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a2214, 0x243e0 bytes
    // win32kbase.sys .text:0x1e6444, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0830, 0x243e0 bytes
    //
    _c3(sdk::unknown_ptr) pointer_flags_to_message;
    
    // [PointerInfoCopyOutHelper@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a2280, 0x243e0 bytes
    // win32kbase.sys .text:0xf6d02, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a089c, 0x243e0 bytes
    //
    _c4(sdk::unknown_ptr) pointer_info_copy_out_helper;
    
    // [PointerParentNotify@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a2318, 0x243e0 bytes
    // win32kbase.sys .text:0x1e64f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0938, 0x243e0 bytes
    //
    _c5(sdk::unknown_ptr) pointer_parent_notify;
    
    // [PopRoutedAwayTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a2418, 0x243e0 bytes
    // win32kbase.sys .text:0x1e6600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0a34, 0x243e0 bytes
    //
    _c6(sdk::unknown_ptr) pop_routed_away_target;
    
    // [PopulatePointerInfoNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a2520, 0x243e0 bytes
    // win32kbase.sys .text:0x1e6708, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0b3c, 0x243e0 bytes
    //
    _c7(sdk::unknown_ptr) populate_pointer_info_node;
    
    // [PopulateReferencedInputFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a2c48, 0x243e0 bytes
    // win32kbase.sys .text:0x1e6f70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a1264, 0x243e0 bytes
    //
    _c8(sdk::unknown_ptr) populate_referenced_input_frame;
    
    // [PostPointerMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a304c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e7370, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a1668, 0x243e0 bytes
    //
    _c9(sdk::unknown_ptr) post_pointer_message;
    
    // [PrepareMakePointerMessage@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a3390, 0x243e0 bytes
    // win32kbase.sys .text:0x1e7800, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a19b0, 0x243e0 bytes
    //
    _d0(sdk::unknown_ptr) prepare_make_pointer_message;
    
    // [ProcessAndUnreferencePreviousInput@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a3478, 0x243e0 bytes
    // win32kbase.sys .text:0x1e78e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a1aa8, 0x243e0 bytes
    //
    _d1(sdk::unknown_ptr) process_and_unreference_previous_input;
    
    // [ProcessDelayZonePalmRejection@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a3860, 0x243e0 bytes
    // win32kbase.sys .text:0x1e7e18, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a1e90, 0x243e0 bytes
    //
    _d2(sdk::unknown_ptr) process_delay_zone_palm_rejection;
    
    // [ProcessEnterLeave@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a397c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e8028, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a1fc4, 0x243e0 bytes
    //
    _d3(sdk::unknown_ptr) process_enter_leave;
    
    // [ProcessInjectedInput@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a3e20, 0x243e0 bytes
    // win32kbase.sys .text:0x1e8758, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a2468, 0x243e0 bytes
    //
    _d4(sdk::unknown_ptr) process_injected_input;
    
    // [ProcessInput@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4048, 0x243e0 bytes
    // win32kbase.sys .text:0x1e8ac4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a2694, 0x243e0 bytes
    //
    _d5(sdk::unknown_ptr) process_input;
    
    // [ProcessInputPostDelayZonePalmRejection@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a42a8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e9128, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a290c, 0x243e0 bytes
    //
    _d6(sdk::unknown_ptr) process_input_post_delay_zone_palm_rejection;
    
    // [ProcessPointerInfoNodeEnterLeave@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4400, 0x243e0 bytes
    // win32kbase.sys .text:0x1e937c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a2a64, 0x243e0 bytes
    //
    _d7(sdk::unknown_ptr) process_pointer_info_node_enter_leave;
    
    // [ProcessPrimaryDown@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a448c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e9408, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a2af0, 0x243e0 bytes
    //
    _d8(sdk::unknown_ptr) process_primary_down;
    
    // [ProcessQFrameNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a48f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e9b5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a2f60, 0x243e0 bytes
    //
    _d9(sdk::unknown_ptr) process_q_frame_node;
    
    // [ProcessRoutedAwayList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4b08, 0x243e0 bytes
    // win32kbase.sys .text:0x1e9df8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3178, 0x243e0 bytes
    //
    _e0(sdk::unknown_ptr) process_routed_away_list;
    
    // [ProcessTouchpadInput@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4c1c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e9f00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a328c, 0x243e0 bytes
    //
    _e1(sdk::unknown_ptr) process_touchpad_input;
    
    // [PromotePointerDataToMouse@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4df0, 0x243e0 bytes
    // win32kbase.sys .text:0x1ea230, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3470, 0x243e0 bytes
    //
    _e2(sdk::unknown_ptr) promote_pointer_data_to_mouse;
    
    // [RecheckPointerCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4eac, 0x243e0 bytes
    // win32kbase.sys .text:0xf6d9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3550, 0x243e0 bytes
    //
    _e3(sdk::unknown_ptr) recheck_pointer_capture;
    
    // [ReevaluateQFrameHasDelegation@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4f08, 0x243e0 bytes
    // win32kbase.sys .text:0x1ea318, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a35ac, 0x243e0 bytes
    //
    _e4(sdk::unknown_ptr) reevaluate_q_frame_has_delegation;
    
    // [ReferenceFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4fbc, 0x243e0 bytes
    // win32kbase.sys .text:0x1ea3c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3660, 0x243e0 bytes
    //
    _e5(sdk::unknown_ptr) reference_frame;
    
    // [ReferenceFrameFromId@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a4ffc, 0x243e0 bytes
    // win32kbase.sys .text:0x1ea400, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a36a0, 0x243e0 bytes
    //
    _e6(sdk::unknown_ptr) reference_frame_from_id;
    
    // [ReferenceInputFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5110, 0x243e0 bytes
    // win32kbase.sys .text:0x1ea73c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a37bc, 0x243e0 bytes
    //
    _e7(sdk::unknown_ptr) reference_input_frame;
    
    // [ReferenceMsgData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a51f4, 0x243e0 bytes
    // win32kbase.sys .text:0x1ea8c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a38a0, 0x243e0 bytes
    //
    _e8(sdk::unknown_ptr) reference_msg_data;
    
    // [ReferenceMsgDataExternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a52d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1eaa30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3980, 0x243e0 bytes
    //
    _e9(sdk::unknown_ptr) reference_msg_data_external;
    
    // [ReferencePreviousFrameByDeviceInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a53ac, 0x243e0 bytes
    // win32kbase.sys .text:0x1eace0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3a64, 0x243e0 bytes
    //
    _f0(sdk::unknown_ptr) reference_previous_frame_by_device_int;
    
    // [ReleasePointerCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5408, 0x243e0 bytes
    // win32kbase.sys .text:0x1ead3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3ac0, 0x243e0 bytes
    //
    _f1(sdk::unknown_ptr) release_pointer_capture;
    
    // [ReleasePointerCaptureInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5474, 0x243e0 bytes
    // win32kbase.sys .text:0x1eade4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3b2c, 0x243e0 bytes
    //
    _f2(sdk::unknown_ptr) release_pointer_capture_int;
    
    // [RemoveRoutedAwayTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a54f4, 0x243e0 bytes
    // win32kbase.sys .text:0x1eae64, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3bac, 0x243e0 bytes
    //
    _f3(sdk::unknown_ptr) remove_routed_away_target;
    
    // [RevalidateFrameProcessing@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5574, 0x243e0 bytes
    // win32kbase.sys .text:0x1eaee4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3c2c, 0x243e0 bytes
    //
    _f4(sdk::unknown_ptr) revalidate_frame_processing;
    
    // [SetDelegateActionInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5bf4, 0x243e0 bytes
    // win32kbase.sys .text:0x1eb748, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a42ac, 0x243e0 bytes
    //
    _f5(sdk::unknown_ptr) set_delegate_action_int;
    
    // [SetManipulationInputTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5d0c, 0x243e0 bytes
    // win32kbase.sys .text:0x1eb8b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a43c4, 0x243e0 bytes
    //
    _f6(sdk::unknown_ptr) set_manipulation_input_target;
    
    // [SetNewValidState@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a649c, 0x243e0 bytes
    // win32kbase.sys .text:0x1ec398, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a4b64, 0x243e0 bytes
    //
    _f7(sdk::unknown_ptr) set_new_valid_state;
    
    // [SetPointerBarrelVisualization@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a66f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1ec710, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a4db0, 0x243e0 bytes
    //
    _f8(sdk::unknown_ptr) set_pointer_barrel_visualization;
    
    // [SetPointerCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a6770, 0x243e0 bytes
    // win32kbase.sys .text:0x1ec78c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a4e38, 0x243e0 bytes
    //
    _f9(sdk::unknown_ptr) set_pointer_capture;
    
    // [SetPointerExplicitCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a6940, 0x243e0 bytes
    // win32kbase.sys .text:0x1ecaac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a5008, 0x243e0 bytes
    //
    _g0(sdk::unknown_ptr) set_pointer_explicit_capture;
    
    // [SetPointerFrameTargetWindows@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a69b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1ecb20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a5070, 0x243e0 bytes
    //
    _g1(sdk::unknown_ptr) set_pointer_frame_target_windows;
    
    // [SetPointerImplicitCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a76c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1edad8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a5d8c, 0x243e0 bytes
    //
    _g2(sdk::unknown_ptr) set_pointer_implicit_capture;
    
    // [SetPointerInfoNodeDelegateAction@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a7728, 0x243e0 bytes
    // win32kbase.sys .text:0x1edb40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a5df4, 0x243e0 bytes
    //
    _g3(sdk::unknown_ptr) set_pointer_info_node_delegate_action;
    
    // [SetPointerInfoNodeFlag@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a7998, 0x243e0 bytes
    // win32kbase.sys .text:0x1eddac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6064, 0x243e0 bytes
    //
    _g4(sdk::unknown_ptr) set_pointer_info_node_flag;
    
    // [SetPointerInfoNodeFlagFromEdition@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a7a50, 0x243e0 bytes
    // win32kbase.sys .text:0x1ede60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6110, 0x243e0 bytes
    //
    _g5(sdk::unknown_ptr) set_pointer_info_node_flag_from_edition;
    
    // [SetPointerInfoNodeMessagePosted@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a7ac0, 0x243e0 bytes
    // win32kbase.sys .text:0x1edecc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6188, 0x243e0 bytes
    //
    _g6(sdk::unknown_ptr) set_pointer_info_node_message_posted;
    
    // [SetPointerInfoNodeTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a7db8, 0x243e0 bytes
    // win32kbase.sys .text:0x1ee2b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6480, 0x243e0 bytes
    //
    _g7(sdk::unknown_ptr) set_pointer_info_node_target;
    
    // [SetPointerInfoNodeTargetInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a7ec0, 0x243e0 bytes
    // win32kbase.sys .text:0x1ee3bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6588, 0x243e0 bytes
    //
    _g8(sdk::unknown_ptr) set_pointer_info_node_target_int;
    
    // [SetPointerInputCapture@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8040, 0x243e0 bytes
    // win32kbase.sys .text:0x1ee53c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6708, 0x243e0 bytes
    //
    _g9(sdk::unknown_ptr) set_pointer_input_capture;
    
    // [SetPointerOffset@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a80e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1ee5dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a67a8, 0x243e0 bytes
    //
    _h0(sdk::unknown_ptr) set_pointer_offset;
    
    // [SetPointerVisualization@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8130, 0x243e0 bytes
    // win32kbase.sys .text:0x1ee630, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6800, 0x243e0 bytes
    //
    _h1(sdk::unknown_ptr) set_pointer_visualization;
    
    // [SetQFrameNonCoalescable@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a81f8, 0x243e0 bytes
    // win32kbase.sys .text:0x1ee6f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a68d4, 0x243e0 bytes
    //
    _h2(sdk::unknown_ptr) set_q_frame_non_coalescable;
    
    // [SetupQFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a843c, 0x243e0 bytes
    // win32kbase.sys .text:0x1ee790, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6b18, 0x243e0 bytes
    //
    _h3(sdk::unknown_ptr) setup_q_frame;
    
    // [ShouldGenerateMessagesForNode@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a85d8, 0x243e0 bytes
    // win32kbase.sys .text:0x1eebc8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6cb4, 0x243e0 bytes
    //
    _h4(sdk::unknown_ptr) should_generate_messages_for_node;
    
    // [StopAndEndInertia@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a88dc, 0x243e0 bytes
    // win32kbase.sys .text:0x1eeecc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6fb8, 0x243e0 bytes
    //
    _h5(sdk::unknown_ptr) stop_and_end_inertia;
    
    // [SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8ac0, 0x243e0 bytes
    // win32kbase.sys .text:0xe8b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a71a0, 0x243e0 bytes
    //
    _h6(sdk::unknown_ptr) suppress_deadzone_contacts_in_frame_and_get_next;
    
    // [TrackCoalesceOnArrival@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8c38, 0x243e0 bytes
    // win32kbase.sys .text:0x1ef404, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a7328, 0x243e0 bytes
    //
    _h7(sdk::unknown_ptr) track_coalesce_on_arrival;
    
    // [TrackCoalesceOnReassign@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8cb4, 0x243e0 bytes
    // win32kbase.sys .text:0x1ef4bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a73a4, 0x243e0 bytes
    //
    _h8(sdk::unknown_ptr) track_coalesce_on_reassign;
    
    // [TryCoalesceQFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8d30, 0x243e0 bytes
    // win32kbase.sys .text:0x1ef714, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a7420, 0x243e0 bytes
    //
    _h9(sdk::unknown_ptr) try_coalesce_q_frame;
    
    // [UnreferenceFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a90b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1efab8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a77a0, 0x243e0 bytes
    //
    _i0(sdk::unknown_ptr) unreference_frame;
    
    // [UnreferenceFrameAndMessageData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a90f4, 0x243e0 bytes
    // win32kbase.sys .text:0x1efafc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a77e4, 0x243e0 bytes
    //
    _i1(sdk::unknown_ptr) unreference_frame_and_message_data;
    
    // [UnreferenceFrameExternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a9310, 0x243e0 bytes
    // win32kbase.sys .text:0x1efce0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a7a00, 0x243e0 bytes
    //
    _i2(sdk::unknown_ptr) unreference_frame_external;
    
    // [UnreferenceFrameInt@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a9360, 0x243e0 bytes
    // win32kbase.sys .text:0x1efd28, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a7a54, 0x243e0 bytes
    //
    _i3(sdk::unknown_ptr) unreference_frame_int;
    
    // [UnreferenceMsgData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a93c4, 0x243e0 bytes
    // win32kbase.sys .text:0x1efd8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a7ab8, 0x243e0 bytes
    //
    _i4(sdk::unknown_ptr) unreference_msg_data;
    
    // [UnreferenceMsgDataExternal@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a94d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1eff10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a7bc0, 0x243e0 bytes
    //
    _i5(sdk::unknown_ptr) unreference_msg_data_external;
    
    // [UnreferenceUndispatchedFrame@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a95b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f01d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a7cb0, 0x243e0 bytes
    //
    _i6(sdk::unknown_ptr) unreference_undispatched_frame;
    
    // [UpdateActivePointer@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a970c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f0328, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a7e14, 0x243e0 bytes
    //
    _i7(sdk::unknown_ptr) update_active_pointer;
    
    // [UpdateHistoryWithTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a9b20, 0x243e0 bytes
    // win32kbase.sys .text:0x1f0960, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a8228, 0x243e0 bytes
    //
    _i8(sdk::unknown_ptr) update_history_with_target;
    
    // [UpdateInputCaptureAndGetTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a9c84, 0x243e0 bytes
    // win32kbase.sys .text:0x1f0ac8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a8390, 0x243e0 bytes
    //
    _i9(sdk::unknown_ptr) update_input_capture_and_get_target;
    
    // [UpdateMsgData@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1aa248, 0x243e0 bytes
    // win32kbase.sys .text:0x1f12b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a895c, 0x243e0 bytes
    //
    _j0(sdk::unknown_ptr) update_msg_data;
    
    // [UpdatePointerInfoTarget@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1aa2f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f1360, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a8a00, 0x243e0 bytes
    //
    _j1(sdk::unknown_ptr) update_pointer_info_target;
    
    // [UpdateStateIndicator@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1aa5ac, 0x243e0 bytes
    // win32kbase.sys .text:0x1f1700, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a8cc8, 0x243e0 bytes
    //
    _j2(sdk::unknown_ptr) update_state_indicator;
    
    // [UpdateThreadPointerList@CTouchProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x99a40, 0x243e0 bytes
    // win32kbase.sys .text:0xa3700, 0x27ef0 bytes
    // win32kbase.sys .text:0x831b0, 0x243e0 bytes
    //
    _j3(sdk::unknown_ptr) update_thread_pointer_list;
};
#include "magic/api.end.hpp"
