#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::cptp_engine
{
    // [SendTimedMouseClick@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x21c140, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) send_timed_mouse_click;
    
    // [TPAAPGetLevel@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x21c538, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) tpaap_get_level;
    
    // [ApplyElasticDragModeDeltas@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ccb80, 0x243e0 bytes
    // win32kbase.sys .text:0x216ef8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ca960, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) apply_elastic_drag_mode_deltas;
    
    // [AreTheseTwoContactsAPan@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cccd0, 0x243e0 bytes
    // win32kbase.sys .text:0x217048, 0x27ef0 bytes
    // win32kbase.sys .text:0x1caab0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) are_these_two_contacts_a_pan;
    
    // [AreTheseTwoContactsAZoom@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ccda4, 0x243e0 bytes
    // win32kbase.sys .text:0x21711c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cab84, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) are_these_two_contacts_a_zoom;
    
    // [CancelMouseUpTimer@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ccf54, 0x243e0 bytes
    // win32kbase.sys .text:0x2171c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cad34, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) cancel_mouse_up_timer;
    
    // [CrossedTPButtonWarpBackThreshold@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ccfb8, 0x243e0 bytes
    // win32kbase.sys .text:0x21722c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cad98, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) crossed_tp_button_warp_back_threshold;
    
    // [CrossedTPDragThreshold@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cd044, 0x243e0 bytes
    // win32kbase.sys .text:0x2172a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cae24, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) crossed_tp_drag_threshold;
    
    // [CrossedTPMoveFilteringThreshold@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cd210, 0x243e0 bytes
    // win32kbase.sys .text:0x217470, 0x27ef0 bytes
    // win32kbase.sys .text:0x1caff0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) crossed_tp_move_filtering_threshold;
    
    // [CrossedTPTapWarpBackThreshold@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cd288, 0x243e0 bytes
    // win32kbase.sys .text:0x2174d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cb068, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) crossed_tp_tap_warp_back_threshold;
    
    // [??1CPTPEngine@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ccab0, 0x243e0 bytes
    // win32kbase.sys .text:0x216e18, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ca890, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) destroy_instance;
    
    // [DoGestureProcessing@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cd314, 0x243e0 bytes
    // win32kbase.sys .text:0x217554, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cb0f4, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) do_gesture_processing;
    
    // [DoTPButtonProcessing@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cd540, 0x243e0 bytes
    // win32kbase.sys .text:0x217758, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cb320, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) do_tp_button_processing;
    
    // [DoTPButtonWarpBack@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ce11c, 0x243e0 bytes
    // win32kbase.sys .text:0x218394, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cbefc, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) do_tp_button_warp_back;
    
    // [DoTPDiscreteButtonProcessing@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ce220, 0x243e0 bytes
    // win32kbase.sys .text:0x2184a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cc000, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) do_tp_discrete_button_processing;
    
    // [DoTPMouseProcessing@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ce724, 0x243e0 bytes
    // win32kbase.sys .text:0x2189a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cc504, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) do_tp_mouse_processing;
    
    // [FilterMoveForStableContact@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ceff4, 0x243e0 bytes
    // win32kbase.sys .text:0x219320, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ccdd4, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) filter_move_for_stable_contact;
    
    // [FindContactToBreakSuperCurtains@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf190, 0x243e0 bytes
    // win32kbase.sys .text:0x2194ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ccf70, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) find_contact_to_break_super_curtains;
    
    // [FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf2ec, 0x243e0 bytes
    // win32kbase.sys .text:0x2195f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd0cc, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) find_gesture_and_mark_gesturing_contacts_as_non_resting;
    
    // [FindNearbyContact@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf478, 0x243e0 bytes
    // win32kbase.sys .text:0x21978c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd258, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) find_nearby_contact;
    
    // [FindOrAssignPrimary@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf51c, 0x243e0 bytes
    // win32kbase.sys .text:0x219830, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd2fc, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) find_or_assign_primary;
    
    // [FixupGestureContact@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf5b4, 0x243e0 bytes
    // win32kbase.sys .text:0xf837c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd394, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) fixup_gesture_contact;
    
    // [HandleButtonSuppressionAndPendingUps@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf604, 0x243e0 bytes
    // win32kbase.sys .text:0x2198cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd3e4, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) handle_button_suppression_and_pending_ups;
    
    // [IsRCZClick@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf6fc, 0x243e0 bytes
    // win32kbase.sys .text:0x2199c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd4dc, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) is_rcz_click;
    
    // [IsTouchpadActive@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf824, 0x243e0 bytes
    // win32kbase.sys .text:0x219aec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd604, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) is_touchpad_active;
    
    // [MarkRecentlyTrackedContactsAsNonResting@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf88c, 0x243e0 bytes
    // win32kbase.sys .text:0x219b40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd66c, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) mark_recently_tracked_contacts_as_non_resting;
    
    // [PassedCurtainMoveThresholds@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cf980, 0x243e0 bytes
    // win32kbase.sys .text:0x219c40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd760, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) passed_curtain_move_thresholds;
    
    // [Process2FingerTap@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cfa08, 0x243e0 bytes
    // win32kbase.sys .text:0x219cc8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cd7e8, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) process2_finger_tap;
    
    // [ProcessEnvironment@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cfd20, 0x243e0 bytes
    // win32kbase.sys .text:0x219fe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cdb00, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) process_environment;
    
    // [ProcessGestureFrame@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cfe90, 0x243e0 bytes
    // win32kbase.sys .text:0x21a1e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cdc70, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) process_gesture_frame;
    
    // [ProcessInitialization@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d01e0, 0x243e0 bytes
    // win32kbase.sys .text:0x21a510, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cdfc0, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) process_initialization;
    
    // [ProcessInput@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d0210, 0x243e0 bytes
    // win32kbase.sys .text:0x21a540, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cdff0, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) process_input;
    
    // [ProcessTapsFor3orMoreContacts@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d0228, 0x243e0 bytes
    // win32kbase.sys .text:0x21a558, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ce008, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) process_taps_for3or_more_contacts;
    
    // [ProcessTimer@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d0510, 0x243e0 bytes
    // win32kbase.sys .text:0x21a830, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ce2f0, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) process_timer;
    
    // [ResetDragThresholds@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d057c, 0x243e0 bytes
    // win32kbase.sys .text:0x21a89c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ce35c, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) reset_drag_thresholds;
    
    // [RunStateMachine@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d061c, 0x243e0 bytes
    // win32kbase.sys .text:0x21a93c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ce3fc, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) run_state_machine;
    
    // [Send2FingerTap@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1630, 0x243e0 bytes
    // win32kbase.sys .text:0x21b998, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf410, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) send2_finger_tap;
    
    // [SendInitialGestureFrame@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d17d4, 0x243e0 bytes
    // win32kbase.sys .text:0x21bab4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf5b4, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) send_initial_gesture_frame;
    
    // [SendLeftDownFromPhysical@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1a0c, 0x243e0 bytes
    // win32kbase.sys .text:0x21bd20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf7ec, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) send_left_down_from_physical;
    
    // [SendMouseDownAtPoint@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1b00, 0x243e0 bytes
    // win32kbase.sys .text:0x21be14, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf8e0, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) send_mouse_down_at_point;
    
    // [SendMouseUpIfPending@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1bf0, 0x243e0 bytes
    // win32kbase.sys .text:0x21bf04, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cf9d0, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) send_mouse_up_if_pending;
    
    // [SendRightDownFromPhysical@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1c44, 0x243e0 bytes
    // win32kbase.sys .text:0x21bf58, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfa24, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) send_right_down_from_physical;
    
    // [SetContactRestingState@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d1f28, 0x243e0 bytes
    // win32kbase.sys .text:0x21c2f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfd08, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) set_contact_resting_state;
    
    // [SetupDragRectsForContact@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d2058, 0x243e0 bytes
    // win32kbase.sys .text:0x21c3ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfe38, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) setup_drag_rects_for_contact;
    
    // [SuppressContactForMultiFingerTap@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d2178, 0x243e0 bytes
    // win32kbase.sys .text:0x21c50c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cff58, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) suppress_contact_for_multi_finger_tap;
    
    // [TPAAPSetCurtainState@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d21a4, 0x243e0 bytes
    // win32kbase.sys .text:0x21c550, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cff84, 0x243e0 bytes
    //
    _q5(sdk::unknown_ptr) tpaap_set_curtain_state;
    
    // [TPAAPShouldAllowMoveNow@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d221c, 0x243e0 bytes
    // win32kbase.sys .text:0xf8450, 0x27ef0 bytes
    // win32kbase.sys .text:0x1cfffc, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) tpaap_should_allow_move_now;
    
    // [TPAAPShouldAllowNow@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d2358, 0x243e0 bytes
    // win32kbase.sys .text:0x21c5c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d0138, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) tpaap_should_allow_now;
    
    // [UpdateContactRestingState@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d2504, 0x243e0 bytes
    // win32kbase.sys .text:0x21c770, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d02e4, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) update_contact_resting_state;
    
    // [UpdatePTPRightClickZone@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d29a4, 0x243e0 bytes
    // win32kbase.sys .text:0x21cbd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d0784, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) update_ptp_right_click_zone;
    
    // [UpdateTPStateIndicator@CPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1d29f4, 0x243e0 bytes
    // win32kbase.sys .text:0x21cc20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d07d4, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) update_tp_state_indicator;
};
#include "magic/api.end.hpp"
