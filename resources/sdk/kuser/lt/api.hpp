#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::lt
{
    // [xxxActivateApp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x40f60, 0x13864 bytes
    //
    _m00(sdk::unknown_ptr) activate_app;
    
    // [xxxActivateThisWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x400ec, 0x13864 bytes
    //
    _m01(sdk::unknown_ptr) activate_this_window;
    
    // [xxxApplyNativeOrientation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cc8f0, 0x13864 bytes
    //
    _m02(sdk::unknown_ptr) apply_native_orientation;
    
    // [xxxApplyOrientationPreference]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x36f38, 0x13864 bytes
    //
    _m03(sdk::unknown_ptr) apply_orientation_preference;
    
    // [xxxAutoRotateScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cd094, 0x13864 bytes
    //
    _m04(sdk::unknown_ptr) auto_rotate_screen;
    
    // [xxxButtonEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f420, 0x13864 bytes
    //
    _m05(sdk::unknown_ptr) button_event;
    
    // [xxxCallIAMGetArrangementRectangleHandler]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d13c8, 0x13864 bytes
    //
    _m06(sdk::unknown_ptr) call_iam_get_arrangement_rectangle_handler;
    
    // [xxxCallIAMShowWindowPolicyHandler]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d1498, 0x13864 bytes
    //
    _m07(sdk::unknown_ptr) call_iam_show_window_policy_handler;
    
    // [xxxCallIAMWindowManagementHandler]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d0820, 0x13864 bytes
    //
    _m08(sdk::unknown_ptr) call_iam_window_management_handler;
    
    // [xxxCallShellWindowSizeStartingHandler]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d1528, 0x13864 bytes
    //
    _m09(sdk::unknown_ptr) call_shell_window_size_starting_handler;
    
    // [xxxCancelMouseUpTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ebfb0, 0x13864 bytes
    //
    _m10(sdk::unknown_ptr) cancel_mouse_up_timer;
    
    // [xxxCheckFocus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xa0708, 0x13864 bytes
    //
    _m11(sdk::unknown_ptr) check_focus;
    
    // [xxxCleanupManipulationThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xf13b0, 0x13864 bytes
    //
    _m12(sdk::unknown_ptr) cleanup_manipulation_thread;
    
    // [xxxClientCallManipulationThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x20ea74, 0x13864 bytes
    //
    _m13(sdk::unknown_ptr) client_call_manipulation_thread;
    
    // [xxxCloseApplication]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x242078, 0x1659e bytes
    //
    _m14(sdk::unknown_ptr) close_application;
    
    // [xxxCompositionInputSinkLuidFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x225a00, 0x13864 bytes
    //
    _m15(sdk::unknown_ptr) composition_input_sink_luid_from_point;
    
    // [xxxConsiderPreferredDpiChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xfcbf4, 0x1659e bytes
    //
    _m16(sdk::unknown_ptr) consider_preferred_dpi_change;
    
    // [xxxDeterminePointerTargetWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f3398, 0x13864 bytes
    //
    _m17(sdk::unknown_ptr) determine_pointer_target_window;
    
    // [xxxDetermineTouchpadPointerTargetWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f3648, 0x13864 bytes
    //
    _m18(sdk::unknown_ptr) determine_touchpad_pointer_target_window;
    
    // [xxxDitCompositionInputSinkLuidFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x225b84, 0x13864 bytes
    //
    _m19(sdk::unknown_ptr) dit_composition_input_sink_luid_from_point;
    
    // [xxxDoButtonEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ece8, 0x13864 bytes
    //
    _m20(sdk::unknown_ptr) do_button_event;
    
    // [xxxDoSysExpungeIfNeeded]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14d9c0, 0x1659e bytes
    //
    _m21(sdk::unknown_ptr) do_sys_expunge_if_needed;
    
    // [xxxDoTouchpadProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ee2c8, 0x13864 bytes
    //
    _m22(sdk::unknown_ptr) do_touchpad_processing;
    
    // [xxxDoTPButtonProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ec008, 0x13864 bytes
    //
    _m23(sdk::unknown_ptr) do_tp_button_processing;
    
    // [xxxDoTPDiscreteButtonProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ecce8, 0x13864 bytes
    //
    _m24(sdk::unknown_ptr) do_tp_discrete_button_processing;
    
    // [xxxDoTPGestureProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ed480, 0x13864 bytes
    //
    _m25(sdk::unknown_ptr) do_tp_gesture_processing;
    
    // [xxxDoTPMouseProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ed7a4, 0x13864 bytes
    //
    _m26(sdk::unknown_ptr) do_tp_mouse_processing;
    
    // [xxxDoTPShellProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ee090, 0x13864 bytes
    //
    _m27(sdk::unknown_ptr) do_tp_shell_processing;
    
    // [xxxDwmCheckProcessSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7d220, 0x1eb80 bytes
    //
    _m28(sdk::unknown_ptr) dwm_check_process_session;
    
    // [xxxDWP_ProcessVirtKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x141c2c, 0x13864 bytes
    //
    _m29(sdk::unknown_ptr) dwp_process_virt_key;
    
    // [xxxEnsureMonitorCursors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1dfdfc, 0x13864 bytes
    //
    _m30(sdk::unknown_ptr) ensure_monitor_cursors;
    
    // [xxxFreeImeKeyboardLayouts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x13fd8, 0x13864 bytes
    //
    _m31(sdk::unknown_ptr) free_ime_keyboard_layouts;
    
    // [xxxGeneratePointerInputMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f57fc, 0x13864 bytes
    //
    _m32(sdk::unknown_ptr) generate_pointer_input_messages;
    
    // [xxxGeneratePointerInputMessagesCore]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f3a24, 0x13864 bytes
    //
    _m33(sdk::unknown_ptr) generate_pointer_input_messages_core;
    
    // [xxxGetArrangeRectFromHitTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x20f6c4, 0x1659e bytes
    //
    _m34(sdk::unknown_ptr) get_arrange_rect_from_hit_target;
    
    // [xxxGetArrangeRectFromShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x20f99c, 0x1659e bytes
    //
    _m35(sdk::unknown_ptr) get_arrange_rect_from_shell;
    
    // [xxxGetShellShowWindowCommand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xac798, 0x1659e bytes
    //
    _m36(sdk::unknown_ptr) get_shell_show_window_command;
    
    // [xxxGetSysMenuHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x58730, 0x13864 bytes
    //
    _m37(sdk::unknown_ptr) get_sys_menu_handle;
    
    // [xxxGetWorkAreasFromShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14be10, 0x1659e bytes
    //
    _m38(sdk::unknown_ptr) get_work_areas_from_shell;
    
    // [xxxHandleMTNodeTargetWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f418c, 0x13864 bytes
    //
    _m39(sdk::unknown_ptr) handle_mt_node_target_window;
    
    // [xxxHandleNewDockTargetOrMonitorMove]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x20fd54, 0x1659e bytes
    //
    _m40(sdk::unknown_ptr) handle_new_dock_target_or_monitor_move;
    
    // [xxxHandleNoDockTargetToDockTargetMove]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x20ffbc, 0x1659e bytes
    //
    _m41(sdk::unknown_ptr) handle_no_dock_target_to_dock_target_move;
    
    // [xxxHandleWindowPosChanged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xfcf88, 0x13864 bytes
    //
    _m42(sdk::unknown_ptr) handle_window_pos_changed;
    
    // [xxxHungAppDaemon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xa44a0, 0x1659e bytes
    //
    _m43(sdk::unknown_ptr) hung_app_daemon;
    
    // [xxxInertiaTimerProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ee580, 0x13864 bytes
    //
    _m44(sdk::unknown_ptr) inertia_timer_proc;
    
    // [xxxInternalTPProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ee5e8, 0x13864 bytes
    //
    _m45(sdk::unknown_ptr) internal_tp_processing;
    
    // [xxxIsDCompSpeedHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x9ea10, 0x13864 bytes
    //
    _m46(sdk::unknown_ptr) is_d_comp_speed_hit_test;
    
    // [xxxMB_FindLongestString]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x37c44, 0x13864 bytes
    //
    _m47(sdk::unknown_ptr) mb_find_longest_string;
    
    // [xxxMinMaximize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xce070, 0x1659e bytes
    //
    _m48(sdk::unknown_ptr) min_maximize;
    
    // [xxxMinimizeWindowViaMinMax]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xce010, 0x1659e bytes
    //
    _m49(sdk::unknown_ptr) minimize_window_via_min_max;
    
    // [xxxMoveEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x110e70, 0x13864 bytes
    //
    _m50(sdk::unknown_ptr) move_event;
    
    // [xxxNotifyIAMWindowManagementEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x42abc, 0x13864 bytes
    //
    _m51(sdk::unknown_ptr) notify_iam_window_management_event;
    
    // [xxxNotifyShellPositioningChanged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x4de08, 0x13864 bytes
    //
    _m52(sdk::unknown_ptr) notify_shell_positioning_changed;
    
    // [xxxNotifyShellTrackedWindowPosChanged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d1994, 0x13864 bytes
    //
    _m53(sdk::unknown_ptr) notify_shell_tracked_window_pos_changed;
    
    // [xxxNotifyShellTrackedWindowTrackingInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x116b80, 0x13864 bytes
    //
    _m54(sdk::unknown_ptr) notify_shell_tracked_window_tracking_info;
    
    // [xxxNotifyShellWindowBorderEnter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d19cc, 0x13864 bytes
    //
    _m55(sdk::unknown_ptr) notify_shell_window_border_enter;
    
    // [xxxNotifyShellWindowBorderExitIfEntered]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1145d4, 0x13864 bytes
    //
    _m56(sdk::unknown_ptr) notify_shell_window_border_exit_if_entered;
    
    // [xxxNotifyShellWindowPosChangedCommon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d08f8, 0x13864 bytes
    //
    _m57(sdk::unknown_ptr) notify_shell_window_pos_changed_common;
    
    // [xxxOnPTPMouseOperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f00c4, 0x13864 bytes
    //
    _m58(sdk::unknown_ptr) on_ptp_mouse_operation;
    
    // [xxxPointerActivate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f4370, 0x13864 bytes
    //
    _m59(sdk::unknown_ptr) pointer_activate;
    
    // [xxxPointerParentNotify]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f45a4, 0x13864 bytes
    //
    _m60(sdk::unknown_ptr) pointer_parent_notify;
    
    // [xxxProcess2FingerTap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ef64c, 0x13864 bytes
    //
    _m61(sdk::unknown_ptr) process2_finger_tap;
    
    // [xxxProcessEdgyAndGeneratePointerMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f4668, 0x13864 bytes
    //
    _m62(sdk::unknown_ptr) process_edgy_and_generate_pointer_messages;
    
    // [xxxProcessHidInputApiExt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xbb0f0, 0x1eb80 bytes
    //
    _m63(sdk::unknown_ptr) process_hid_input_api_ext;
    
    // [xxxProcessPointerPrimaryDown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f481c, 0x13864 bytes
    //
    _m64(sdk::unknown_ptr) process_pointer_primary_down;
    
    // [xxxProcessPreemptiveDpiChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x37250, 0x1659e bytes
    //
    _m65(sdk::unknown_ptr) process_preemptive_dpi_change;
    
    // [xxxProcessTapsFor3orMoreContacts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ef82c, 0x13864 bytes
    //
    _m66(sdk::unknown_ptr) process_taps_for3or_more_contacts;
    
    // [xxxPromotePointerDataToMouse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f58a8, 0x13864 bytes
    //
    _m67(sdk::unknown_ptr) promote_pointer_data_to_mouse;
    
    // [xxxRedrawHungWindowFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x142760, 0x13864 bytes
    //
    _m68(sdk::unknown_ptr) redraw_hung_window_frame;
    
    // [xxxRenderCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d5b3c, 0x13864 bytes
    //
    _m69(sdk::unknown_ptr) render_cursor;
    
    // [xxxResolvePendingUp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1efac0, 0x13864 bytes
    //
    _m70(sdk::unknown_ptr) resolve_pending_up;
    
    // [xxxRestoreSlateAutorotationPreferences]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cd190, 0x13864 bytes
    //
    _m71(sdk::unknown_ptr) restore_slate_autorotation_preferences;
    
    // [xxxRetrieveInteractiveControlInputMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23d4b0, 0x1659e bytes
    //
    _m72(sdk::unknown_ptr) retrieve_interactive_control_input_message;
    
    // [xxxRotateScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cc9b8, 0x13864 bytes
    //
    _m73(sdk::unknown_ptr) rotate_screen;
    
    // [xxxRouteSyntheticTouchpadToMT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22bfb0, 0x13864 bytes
    //
    _m74(sdk::unknown_ptr) route_synthetic_touchpad_to_mt;
    
    // [xxxRouteTouchpadInertiaToMT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22c634, 0x13864 bytes
    //
    _m75(sdk::unknown_ptr) route_touchpad_inertia_to_mt;
    
    // [xxxSend2FingerTap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1efad8, 0x13864 bytes
    //
    _m76(sdk::unknown_ptr) send2_finger_tap;
    
    // [xxxSendFocusMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x42f10, 0x13864 bytes
    //
    _m77(sdk::unknown_ptr) send_focus_messages;
    
    // [xxxSendInteractiveControlDeviceFeedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b9d4, 0x13864 bytes
    //
    _m78(sdk::unknown_ptr) send_interactive_control_device_feedback;
    
    // [xxxSendMouseDownAtPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1efe48, 0x13864 bytes
    //
    _m79(sdk::unknown_ptr) send_mouse_down_at_point;
    
    // [xxxSendMouseUpIfPending]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1efefc, 0x13864 bytes
    //
    _m80(sdk::unknown_ptr) send_mouse_up_if_pending;
    
    // [xxxSendPosMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14adc0, 0x1659e bytes
    //
    _m81(sdk::unknown_ptr) send_pos_message;
    
    // [xxxSendPostedMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1defec, 0x1659e bytes
    //
    _m82(sdk::unknown_ptr) send_posted_message;
    
    // [xxxSendTPAsMouse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1eff7c, 0x13864 bytes
    //
    _m83(sdk::unknown_ptr) send_tp_as_mouse;
    
    // [xxxSendTransformableMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x29300, 0x1659e bytes
    //
    _m84(sdk::unknown_ptr) send_transformable_message;
    
    // [xxxSetAutoRotationConvertible]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x144814, 0x13864 bytes
    //
    _m85(sdk::unknown_ptr) set_auto_rotation_convertible;
    
    // [xxxSetAutoRotationDocked]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x144794, 0x13864 bytes
    //
    _m86(sdk::unknown_ptr) set_auto_rotation_docked;
    
    // [xxxSetAutoRotationState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cd1c8, 0x13864 bytes
    //
    _m87(sdk::unknown_ptr) set_auto_rotation_state;
    
    // [xxxSetForegroundCheckNoActivate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cd9d8, 0x13864 bytes
    //
    _m88(sdk::unknown_ptr) set_foreground_check_no_activate;
    
    // [xxxSetForegroundWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x426bc, 0x13864 bytes
    //
    _m89(sdk::unknown_ptr) set_foreground_window;
    
    // [xxxSetManipulationInputTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c5344, 0x13864 bytes
    //
    _m90(sdk::unknown_ptr) set_manipulation_input_target;
    
    // [xxxSetMonitorIcoCurIndex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2f294, 0x13864 bytes
    //
    _m91(sdk::unknown_ptr) set_monitor_ico_cur_index;
    
    // [xxxSetPointerFrameTargetWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1f4a88, 0x13864 bytes
    //
    _m92(sdk::unknown_ptr) set_pointer_frame_target_windows;
    
    // [xxxSetSensorPresence]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cd2b8, 0x13864 bytes
    //
    _m93(sdk::unknown_ptr) set_sensor_presence;
    
    // [xxxSetSlateAutoRotationState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cd380, 0x13864 bytes
    //
    _m94(sdk::unknown_ptr) set_slate_auto_rotation_state;
    
    // [xxxSetSystemCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22af98, 0x13864 bytes
    //
    _m95(sdk::unknown_ptr) set_system_cursor;
    
    // [xxxShowWindowViaStartupInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x240ac8, 0x1659e bytes
    //
    _m96(sdk::unknown_ptr) show_window_via_startup_info;
    
    // [xxxSkipSysMsg]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xa1c70, 0x13864 bytes
    //
    _m97(sdk::unknown_ptr) skip_sys_msg;
    
    // [xxxSmoothRotateScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1ccd08, 0x13864 bytes
    //
    _m98(sdk::unknown_ptr) smooth_rotate_screen;
    
    // [xxxCloneWindowPosAndArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1d0e8c, 0x1596d bytes
    // win32kfull.sys .text:0x1d0d2c, 0x1596d bytes
    //
    _m99(sdk::unknown_ptr) clone_window_pos_and_arrangement;
    
    // [xxxComputeInputSinkInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x583c, 0x1596d bytes
    // win32kfull.sys .text:0x5bec, 0x1596d bytes
    //
    _n00(sdk::unknown_ptr) compute_input_sink_info;
    
    // [xxxComputeProposedPerMonRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x4a9d4, 0x1596d bytes
    // win32kfull.sys .text:0x4ade4, 0x1596d bytes
    //
    _n01(sdk::unknown_ptr) compute_proposed_per_mon_rect;
    
    // [xxxDCompSpeedHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xaf4bc, 0x1596d bytes
    // win32kfull.sys .text:0xb002c, 0x1596d bytes
    //
    _n02(sdk::unknown_ptr) d_comp_speed_hit_test;
    
    // [xxxGetNextSysMsg]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x154754, 0x1596d bytes
    // win32kfull.sys .text:0x1556d4, 0x1596d bytes
    //
    _n03(sdk::unknown_ptr) get_next_sys_msg;
    
    // [xxxGetShellShowWindowAction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xad0f8, 0x1596d bytes
    // win32kfull.sys .text:0xadc68, 0x1596d bytes
    //
    _n04(sdk::unknown_ptr) get_shell_show_window_action;
    
    // [xxxGetSysMenuOffset]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2400f0, 0x1596d bytes
    // win32kfull.sys .text:0x23ffa0, 0x1596d bytes
    //
    _n05(sdk::unknown_ptr) get_sys_menu_offset;
    
    // [xxxNormalizeRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x4afe8, 0x1596d bytes
    // win32kfull.sys .text:0x4b3f8, 0x1596d bytes
    //
    _n06(sdk::unknown_ptr) normalize_rect;
    
    // [xxxPointerSpeedHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2184cc, 0x1596d bytes
    // win32kfull.sys .text:0x21833c, 0x1596d bytes
    //
    _n07(sdk::unknown_ptr) pointer_speed_hit_test;
    
    // [xxxProcessAsyncSendMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x9a95c, 0x13864 bytes
    // win32kfull.sys .text:0x30c18, 0x1659e bytes
    //
    _n08(sdk::unknown_ptr) process_async_send_message;
    
    // [xxxProcessMinimizeHungThreadEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1d3584, 0x1596d bytes
    // win32kfull.sys .text:0x1d3424, 0x1596d bytes
    //
    _n09(sdk::unknown_ptr) process_minimize_hung_thread_event;
    
    // [xxxProcessUpdateFrameMargins]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1191b4, 0x1596d bytes
    // win32kfull.sys .text:0x11a0e4, 0x1596d bytes
    //
    _n10(sdk::unknown_ptr) process_update_frame_margins;
    
    // [xxxSpeedHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xaf324, 0x1596d bytes
    // win32kfull.sys .text:0xafe94, 0x1596d bytes
    //
    _n11(sdk::unknown_ptr) speed_hit_test;
    
    // [xxxActivateWindowWithOptions]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4ef68, 0x1596d bytes
    // win32kfull.sys .text:0xa0594, 0x1659e bytes
    // win32kfull.sys .text:0x4f388, 0x1596d bytes
    //
    _n12(sdk::unknown_ptr) activate_window_with_options;
    
    // [xxxAppAdjustDpiCandidateRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6a28, 0x1596d bytes
    // win32kfull.sys .text:0x1e307c, 0x1659e bytes
    // win32kfull.sys .text:0x1e6888, 0x1596d bytes
    //
    _n13(sdk::unknown_ptr) app_adjust_dpi_candidate_rect;
    
    // [xxxBMPtoDIBV5]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21f914, 0x1596d bytes
    // win32kfull.sys .text:0x21c508, 0x1659e bytes
    // win32kfull.sys .text:0x21f7a4, 0x1596d bytes
    //
    _n14(sdk::unknown_ptr) bm_pto_dibv5;
    
    // [xxxBroadcastImeShowStatusChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1dc750, 0x13864 bytes
    // win32kfull.sys .text:0x1e3bd0, 0x1596d bytes
    // win32kfull.sys .text:0x1e3a30, 0x1596d bytes
    //
    _n15(sdk::unknown_ptr) broadcast_ime_show_status_change;
    
    // [xxxCallTSFNotifyHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x624c, 0x1596d bytes
    // win32kfull.sys .text:0x1e7874, 0x1659e bytes
    // win32kfull.sys .text:0x65fc, 0x1596d bytes
    //
    _n16(sdk::unknown_ptr) call_tsf_notify_hook;
    
    // [xxxCheckImeShowStatusInThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x41de0, 0x13864 bytes
    // win32kfull.sys .text:0xe8200, 0x1596d bytes
    // win32kfull.sys .text:0xe8f40, 0x1596d bytes
    //
    _n17(sdk::unknown_ptr) check_ime_show_status_in_thread;
    
    // [xxxClientAllocWindowClassExtraBytes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x56a6c, 0x1596d bytes
    // win32kfull.sys .text:0xecb40, 0x1659e bytes
    // win32kfull.sys .text:0x56e8c, 0x1596d bytes
    //
    _n18(sdk::unknown_ptr) client_alloc_window_class_extra_bytes;
    
    // [xxxClientCallDefWindowProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x232190, 0x1596d bytes
    // win32kfull.sys .text:0x22dc64, 0x1659e bytes
    // win32kfull.sys .text:0x232050, 0x1596d bytes
    //
    _n19(sdk::unknown_ptr) client_call_def_window_proc;
    
    // [xxxClientCallDevCallbackSimple]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2325fc, 0x1596d bytes
    // win32kfull.sys .text:0x22dfd0, 0x1659e bytes
    // win32kfull.sys .text:0x2324bc, 0x1596d bytes
    //
    _n20(sdk::unknown_ptr) client_call_dev_callback_simple;
    
    // [xxxClientCallLocalMouseHooks]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2327c4, 0x1596d bytes
    // win32kfull.sys .text:0x22e198, 0x1659e bytes
    // win32kfull.sys .text:0x232684, 0x1596d bytes
    //
    _n21(sdk::unknown_ptr) client_call_local_mouse_hooks;
    
    // [xxxClientFreeWindowClassExtraBytes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x566b4, 0x1596d bytes
    // win32kfull.sys .text:0x3e178, 0x1659e bytes
    // win32kfull.sys .text:0x56ad4, 0x1596d bytes
    //
    _n22(sdk::unknown_ptr) client_free_window_class_extra_bytes;
    
    // [xxxClientRimDevCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11f844, 0x1596d bytes
    // win32kfull.sys .text:0x22f89c, 0x1659e bytes
    // win32kfull.sys .text:0x120744, 0x1596d bytes
    //
    _n23(sdk::unknown_ptr) client_rim_dev_callback;
    
    // [xxxCopyDDEOut]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21c63c, 0x1596d bytes
    // win32kfull.sys .text:0x218c78, 0x1659e bytes
    // win32kfull.sys .text:0x21c4ac, 0x1596d bytes
    //
    _n24(sdk::unknown_ptr) copy_dde_out;
    
    // [xxxDCEWindowHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xaf184, 0x1596d bytes
    // win32kfull.sys .text:0xa8588, 0x1659e bytes
    // win32kfull.sys .text:0xafcf4, 0x1596d bytes
    //
    _n25(sdk::unknown_ptr) dce_window_hit_test;
    
    // [xxxDCEWindowHitTest2Internal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x982d0, 0x13864 bytes
    // win32kfull.sys .text:0xb0820, 0x1596d bytes
    // win32kfull.sys .text:0xb1390, 0x1596d bytes
    //
    _n26(sdk::unknown_ptr) dce_window_hit_test2_internal;
    
    // [xxxDeferWindowPosAndCheckPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x3bfb4, 0x13864 bytes
    // win32kfull.sys .text:0x4ad08, 0x1596d bytes
    // win32kfull.sys .text:0x4b118, 0x1596d bytes
    //
    _n27(sdk::unknown_ptr) defer_window_pos_and_check_point;
    
    // [xxxDeliverRestoreFocusMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2f2cc, 0x1596d bytes
    // win32kfull.sys .text:0x1066cc, 0x1659e bytes
    // win32kfull.sys .text:0x2f6dc, 0x1596d bytes
    //
    _n28(sdk::unknown_ptr) deliver_restore_focus_message;
    
    // [xxxDesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1006e8, 0x13864 bytes
    // win32kfull.sys .text:0x36698, 0x1596d bytes
    // win32kfull.sys .text:0x36aa8, 0x1596d bytes
    //
    _n29(sdk::unknown_ptr) desktop_recalc;
    
    // [xxxDesktopsRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x100688, 0x13864 bytes
    // win32kfull.sys .text:0x3661c, 0x1596d bytes
    // win32kfull.sys .text:0x36a2c, 0x1596d bytes
    //
    _n30(sdk::unknown_ptr) desktops_recalc;
    
    // [xxxDirectedYield]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x127910, 0x13864 bytes
    // win32kfull.sys .text:0x128e40, 0x1596d bytes
    // win32kfull.sys .text:0x129d80, 0x1596d bytes
    //
    _n31(sdk::unknown_ptr) directed_yield;
    
    // [xxxDisableImmersiveOwner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1fdbe4, 0x13864 bytes
    // win32kfull.sys .text:0x209c30, 0x1596d bytes
    // win32kfull.sys .text:0x209aa0, 0x1596d bytes
    //
    _n32(sdk::unknown_ptr) disable_immersive_owner;
    
    // [xxxDispBrokerChangeDisplaySettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12b358, 0x243e0 bytes
    // win32kbase.sys .text:0x15df6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x128bd8, 0x243e0 bytes
    //
    _n33(sdk::unknown_ptr) disp_broker_change_display_settings;
    
    // [xxxDispBrokerSetDisplayConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12b45c, 0x243e0 bytes
    // win32kbase.sys .text:0x15e070, 0x27ef0 bytes
    // win32kbase.sys .text:0x128cdc, 0x243e0 bytes
    //
    _n34(sdk::unknown_ptr) disp_broker_set_display_config;
    
    // [xxxDoLocalTSFWork]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5f78, 0x1596d bytes
    // win32kfull.sys .text:0x1e7988, 0x1659e bytes
    // win32kfull.sys .text:0x6328, 0x1596d bytes
    //
    _n35(sdk::unknown_ptr) do_local_tsf_work;
    
    // [xxxDrainQueueCompletions]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe43e4, 0x1596d bytes
    // win32kfull.sys .text:0x9e1a0, 0x1659e bytes
    // win32kfull.sys .text:0xe50a4, 0x1596d bytes
    //
    _n36(sdk::unknown_ptr) drain_queue_completions;
    
    // [xxxDrawDragRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x211fc8, 0x1596d bytes
    // win32kfull.sys .text:0x20ee68, 0x1659e bytes
    // win32kfull.sys .text:0x211e38, 0x1596d bytes
    //
    _n37(sdk::unknown_ptr) draw_drag_rect;
    
    // [xxxDrawMenuBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x141fb0, 0x13864 bytes
    // win32kfull.sys .text:0x14a650, 0x1596d bytes
    // win32kfull.sys .text:0x14b590, 0x1596d bytes
    //
    _n38(sdk::unknown_ptr) draw_menu_bar;
    
    // [xxxEnableWindowGDIScaledDpiMessageX]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14ec24, 0x1596d bytes
    // win32kfull.sys .text:0x142504, 0x1659e bytes
    // win32kfull.sys .text:0x14fb64, 0x1596d bytes
    //
    _n39(sdk::unknown_ptr) enable_window_gdi_scaled_dpi_message_x;
    
    // [xxxEndSetWindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x205a70, 0x13864 bytes
    // win32kfull.sys .text:0x20ea10, 0x1596d bytes
    // win32kfull.sys .text:0x20e880, 0x1596d bytes
    //
    _n40(sdk::unknown_ptr) end_set_window_arrangement;
    
    // [xxxEnsureAllDpiCursors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119fb4, 0x1596d bytes
    // win32kfull.sys .text:0x901b8, 0x1659e bytes
    // win32kfull.sys .text:0x11aee4, 0x1596d bytes
    //
    _n41(sdk::unknown_ptr) ensure_all_dpi_cursors;
    
    // [xxxEnsureDpiCursors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1ebf0, 0x1596d bytes
    // win32kfull.sys .text:0x976dc, 0x1659e bytes
    // win32kfull.sys .text:0x1f000, 0x1596d bytes
    //
    _n42(sdk::unknown_ptr) ensure_dpi_cursors;
    
    // [xxxEnsureDpiCursorsForSysCur]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1eba0, 0x1596d bytes
    // win32kfull.sys .text:0x9768c, 0x1659e bytes
    // win32kfull.sys .text:0x1efb0, 0x1596d bytes
    //
    _n43(sdk::unknown_ptr) ensure_dpi_cursors_for_sys_cur;
    
    // [xxxEstablishWebviewHostComponentRelationship]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x209afc, 0x1596d bytes
    // win32kfull.sys .text:0x213044, 0x1659e bytes
    // win32kfull.sys .text:0x20996c, 0x1596d bytes
    //
    _n44(sdk::unknown_ptr) establish_webview_host_component_relationship;
    
    // [xxxEvaluateDestRectForMonitorMigration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x205ffc, 0x13864 bytes
    // win32kfull.sys .text:0x20f0ac, 0x1596d bytes
    // win32kfull.sys .text:0x20ef1c, 0x1596d bytes
    //
    _n45(sdk::unknown_ptr) evaluate_dest_rect_for_monitor_migration;
    
    // [xxxForceForegroundWindowNoRestoreFocus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d084, 0x1596d bytes
    // win32kfull.sys .text:0x1148ac, 0x1659e bytes
    // win32kfull.sys .text:0x2d494, 0x1596d bytes
    //
    _n46(sdk::unknown_ptr) force_foreground_window_no_restore_focus;
    
    // [xxxForceSizeRecToDockTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x201188, 0x13864 bytes
    // win32kfull.sys .text:0x20f410, 0x1596d bytes
    // win32kfull.sys .text:0x20f280, 0x1596d bytes
    //
    _n47(sdk::unknown_ptr) force_size_rec_to_dock_target;
    
    // [xxxForceWindowToDpiForTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6d64, 0x1596d bytes
    // win32kfull.sys .text:0x1e3120, 0x1659e bytes
    // win32kfull.sys .text:0x1e6bc4, 0x1596d bytes
    //
    _n48(sdk::unknown_ptr) force_window_to_dpi_for_test;
    
    // [xxxFreeDDEHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21cbb8, 0x1596d bytes
    // win32kfull.sys .text:0x2194c8, 0x1659e bytes
    // win32kfull.sys .text:0x21ca28, 0x1596d bytes
    //
    _n49(sdk::unknown_ptr) free_dde_handle;
    
    // [xxxFullScreenCleanup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x10aae0, 0x13864 bytes
    // win32kfull.sys .text:0x10c570, 0x1596d bytes
    // win32kfull.sys .text:0x10d4a0, 0x1596d bytes
    //
    _n50(sdk::unknown_ptr) full_screen_cleanup;
    
    // [xxxGenerateIAMKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe058, 0x1596d bytes
    // win32kfull.sys .text:0x8b7d0, 0x1659e bytes
    // win32kfull.sys .text:0xbebc8, 0x1596d bytes
    //
    _n51(sdk::unknown_ptr) generate_iam_key;
    
    // [xxxGetEventProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x54fd8, 0x1596d bytes
    // win32kfull.sys .text:0x58a64, 0x1659e bytes
    // win32kfull.sys .text:0x553f8, 0x1596d bytes
    //
    _n52(sdk::unknown_ptr) get_event_proc;
    
    // [xxxGetSizeRectFromShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2013a8, 0x13864 bytes
    // win32kfull.sys .text:0x20f5f8, 0x1596d bytes
    // win32kfull.sys .text:0x20f468, 0x1596d bytes
    //
    _n53(sdk::unknown_ptr) get_size_rect_from_shell;
    
    // [xxxGetSysMenuPtr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x659fc, 0x1596d bytes
    // win32kfull.sys .text:0x49930, 0x1659e bytes
    // win32kfull.sys .text:0x6656c, 0x1596d bytes
    //
    _n54(sdk::unknown_ptr) get_sys_menu_ptr;
    
    // [xxxHandleCoreMessagingQueueCompletion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x58bd0, 0x1596d bytes
    // win32kfull.sys .text:0x9eea8, 0x1659e bytes
    // win32kfull.sys .text:0x58ff0, 0x1596d bytes
    //
    _n55(sdk::unknown_ptr) handle_core_messaging_queue_completion;
    
    // [xxxHandleQueueCompletion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbfe54, 0x1596d bytes
    // win32kfull.sys .text:0x9ee50, 0x1659e bytes
    // win32kfull.sys .text:0xc09c4, 0x1596d bytes
    //
    _n56(sdk::unknown_ptr) handle_queue_completion;
    
    // [xxxHotTrack]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd979c, 0x1596d bytes
    // win32kfull.sys .text:0x1153ec, 0x1659e bytes
    // win32kfull.sys .text:0xda45c, 0x1596d bytes
    //
    _n57(sdk::unknown_ptr) hot_track;
    
    // [xxxHungAppDemon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xa3860, 0x13864 bytes
    // win32kfull.sys .text:0xe0390, 0x1596d bytes
    // win32kfull.sys .text:0xe1050, 0x1596d bytes
    //
    _n58(sdk::unknown_ptr) hung_app_demon;
    
    // [xxxInitializeMoveSizeDataProgrammaticArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x20154c, 0x13864 bytes
    // win32kfull.sys .text:0x20f7c4, 0x1596d bytes
    // win32kfull.sys .text:0x20f634, 0x1596d bytes
    //
    _n59(sdk::unknown_ptr) initialize_move_size_data_programmatic_arrangement;
    
    // [xxxKENLSProcs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb4620, 0x243e0 bytes
    // win32kbase.sys .text:0x10480, 0x27ef0 bytes
    // win32kbase.sys .text:0xadc80, 0x243e0 bytes
    //
    _n60(sdk::unknown_ptr) kenls_procs;
    
    // [xxxKeyEventEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8b0d0, 0x243e0 bytes
    // win32kbase.sys .text:0x10a10, 0x27ef0 bytes
    // win32kbase.sys .text:0x687a0, 0x243e0 bytes
    //
    _n61(sdk::unknown_ptr) key_event_ex;
    
    // [xxxKeyboardCorrectionCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1174a4, 0x13864 bytes
    // win32kfull.sys .text:0x1122f8, 0x1596d bytes
    // win32kfull.sys .text:0x113228, 0x1596d bytes
    //
    _n62(sdk::unknown_ptr) keyboard_correction_callout;
    
    // [xxxLoadPermanentFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117ad0, 0x1596d bytes
    // win32kfull.sys .text:0x66e1c, 0x1659e bytes
    // win32kfull.sys .text:0x118a00, 0x1596d bytes
    //
    _n63(sdk::unknown_ptr) load_permanent_fonts;
    
    // [xxxLoadUserAndNetworkFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117c70, 0x1596d bytes
    // win32kfull.sys .text:0x6703c, 0x1659e bytes
    // win32kfull.sys .text:0x118ba0, 0x1596d bytes
    //
    _n64(sdk::unknown_ptr) load_user_and_network_fonts;
    
    // [xxxMakeWindowForegroundWithState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x40ac0, 0x13864 bytes
    // win32kfull.sys .text:0x50b6c, 0x1596d bytes
    // win32kfull.sys .text:0x50f8c, 0x1596d bytes
    //
    _n65(sdk::unknown_ptr) make_window_foreground_with_state;
    
    // [xxxMoveFocusAway]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9db30, 0x1596d bytes
    // win32kfull.sys .text:0xadd9c, 0x1659e bytes
    // win32kfull.sys .text:0x9e6a0, 0x1596d bytes
    //
    _n66(sdk::unknown_ptr) move_focus_away;
    
    // [xxxMsgWaitForMultipleObjectsEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x154414, 0x1596d bytes
    // win32kfull.sys .text:0x14b0f4, 0x1659e bytes
    // win32kfull.sys .text:0x155354, 0x1596d bytes
    //
    _n67(sdk::unknown_ptr) msg_wait_for_multiple_objects_ex;
    
    // [xxxPlayEventSound]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10fde0, 0x1596d bytes
    // win32kfull.sys .text:0x103c30, 0x1659e bytes
    // win32kfull.sys .text:0x110d10, 0x1596d bytes
    //
    _n68(sdk::unknown_ptr) play_event_sound;
    
    // [xxxPointerActivateInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f2240, 0x1596d bytes
    // win32kfull.sys .text:0x1ee9e0, 0x1659e bytes
    // win32kfull.sys .text:0x1f20a0, 0x1596d bytes
    //
    _n69(sdk::unknown_ptr) pointer_activate_internal;
    
    // [xxxProcessActivationEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x111584, 0x1596d bytes
    // win32kfull.sys .text:0xdaed0, 0x1659e bytes
    // win32kfull.sys .text:0x1124b4, 0x1596d bytes
    //
    _n70(sdk::unknown_ptr) process_activation_event;
    
    // [xxxProcessDesktopRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x3bcb4, 0x13864 bytes
    // win32kfull.sys .text:0x4a680, 0x1596d bytes
    // win32kfull.sys .text:0x4aa90, 0x1596d bytes
    //
    _n71(sdk::unknown_ptr) process_desktop_recalc;
    
    // [xxxProcessShowWindowEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x226e40, 0x13864 bytes
    // win32kfull.sys .text:0x1273d4, 0x1596d bytes
    // win32kfull.sys .text:0x128314, 0x1596d bytes
    //
    _n72(sdk::unknown_ptr) process_show_window_event;
    
    // [xxxProcessTSFEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6114, 0x1596d bytes
    // win32kfull.sys .text:0x1e7b68, 0x1659e bytes
    // win32kfull.sys .text:0x64c4, 0x1596d bytes
    //
    _n73(sdk::unknown_ptr) process_tsf_event;
    
    // [xxxProgrammaticSemiMaximize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2032d0, 0x13864 bytes
    // win32kfull.sys .text:0x21045c, 0x1596d bytes
    // win32kfull.sys .text:0x2102cc, 0x1596d bytes
    //
    _n74(sdk::unknown_ptr) programmatic_semi_maximize;
    
    // [xxxRedrawFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1424a0, 0x13864 bytes
    // win32kfull.sys .text:0x150200, 0x1596d bytes
    // win32kfull.sys .text:0x151140, 0x1596d bytes
    //
    _n75(sdk::unknown_ptr) redraw_frame;
    
    // [xxxRemoveQueueCompletion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbfd80, 0x1596d bytes
    // win32kfull.sys .text:0x9ded8, 0x1659e bytes
    // win32kfull.sys .text:0xc08f0, 0x1596d bytes
    //
    _n76(sdk::unknown_ptr) remove_queue_completion;
    
    // [xxxReportMoveSizeCompletionToShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x203438, 0x13864 bytes
    // win32kfull.sys .text:0x210644, 0x1596d bytes
    // win32kfull.sys .text:0x2104b4, 0x1596d bytes
    //
    _n77(sdk::unknown_ptr) report_move_size_completion_to_shell;
    
    // [xxxRequestOutOfFullScreenMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7ddc, 0x13864 bytes
    // win32kfull.sys .text:0x21f264, 0x1596d bytes
    // win32kfull.sys .text:0x21f0f4, 0x1596d bytes
    //
    _n78(sdk::unknown_ptr) request_out_of_full_screen_mode;
    
    // [xxxRestoreDesktopsMonitorsAndWindowsRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x143a88, 0x13864 bytes
    // win32kfull.sys .text:0x151640, 0x1596d bytes
    // win32kfull.sys .text:0x152580, 0x1596d bytes
    //
    _n79(sdk::unknown_ptr) restore_desktops_monitors_and_windows_rects;
    
    // [xxxRestoreMonitorsAndWindowsRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1a5c, 0x13864 bytes
    // win32kfull.sys .text:0x1d87ac, 0x1596d bytes
    // win32kfull.sys .text:0x1d864c, 0x1596d bytes
    //
    _n80(sdk::unknown_ptr) restore_monitors_and_windows_rects;
    
    // [xxxRestoreWindowFromDeferredStateIfNeeded]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc8c50, 0x1596d bytes
    // win32kfull.sys .text:0x3d54, 0x1659e bytes
    // win32kfull.sys .text:0xc9910, 0x1596d bytes
    //
    _n81(sdk::unknown_ptr) restore_window_from_deferred_state_if_needed;
    
    // [xxxSendActivateAppMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4dc38, 0x1596d bytes
    // win32kfull.sys .text:0x9d2c4, 0x1659e bytes
    // win32kfull.sys .text:0x4e058, 0x1596d bytes
    //
    _n82(sdk::unknown_ptr) send_activate_app_message;
    
    // [xxxSendGDIScaledDpiChangedMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4f3c, 0x1596d bytes
    // win32kfull.sys .text:0x1e16e8, 0x1659e bytes
    // win32kfull.sys .text:0x1e4d9c, 0x1596d bytes
    //
    _n83(sdk::unknown_ptr) send_gdi_scaled_dpi_changed_message;
    
    // [xxxSendGDIScaledDpiChangedMsgs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4ffc, 0x1596d bytes
    // win32kfull.sys .text:0x1e17a4, 0x1659e bytes
    // win32kfull.sys .text:0x1e4e5c, 0x1596d bytes
    //
    _n84(sdk::unknown_ptr) send_gdi_scaled_dpi_changed_msgs;
    
    // [xxxSetBridgeWindowChild]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x209c80, 0x1596d bytes
    // win32kfull.sys .text:0x213148, 0x1659e bytes
    // win32kfull.sys .text:0x209af0, 0x1596d bytes
    //
    _n85(sdk::unknown_ptr) set_bridge_window_child;
    
    // [xxxSetForegroundWindowWithOptions]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x50180, 0x1596d bytes
    // win32kfull.sys .text:0xa0c5c, 0x1659e bytes
    // win32kfull.sys .text:0x505a0, 0x1596d bytes
    //
    _n86(sdk::unknown_ptr) set_foreground_window_with_options;
    
    // [xxxSetWindowBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd293c, 0x1596d bytes
    // win32kfull.sys .text:0x95c94, 0x1659e bytes
    // win32kfull.sys .text:0xd35fc, 0x1596d bytes
    //
    _n87(sdk::unknown_ptr) set_window_band;
    
    // [xxxSetWindowWord]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14a77c, 0x1596d bytes
    // win32kfull.sys .text:0x13f49c, 0x1659e bytes
    // win32kfull.sys .text:0x14b6bc, 0x1596d bytes
    //
    _n88(sdk::unknown_ptr) set_window_word;
    
    // [xxxShowOwnedPopups]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x142220, 0x13864 bytes
    // win32kfull.sys .text:0x150280, 0x1596d bytes
    // win32kfull.sys .text:0x1511c0, 0x1596d bytes
    //
    _n89(sdk::unknown_ptr) show_owned_popups;
    
    // [xxxSizeRectFromHitTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x203f48, 0x13864 bytes
    // win32kfull.sys .text:0x21118c, 0x1596d bytes
    // win32kfull.sys .text:0x210ffc, 0x1596d bytes
    //
    _n90(sdk::unknown_ptr) size_rect_from_hit_target;
    
    // [xxxSkipSysMsgEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb179c, 0x1596d bytes
    // win32kfull.sys .text:0x43248, 0x1659e bytes
    // win32kfull.sys .text:0xb230c, 0x1596d bytes
    //
    _n91(sdk::unknown_ptr) skip_sys_msg_ex;
    
    // [xxxSleepTask]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _n92(sdk::unknown_ptr) sleep_task;
    
    // [xxxSPISetMinMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x123984, 0x1596d bytes
    // win32kfull.sys .text:0x91094, 0x1659e bytes
    // win32kfull.sys .text:0x1248c4, 0x1596d bytes
    //
    _n93(sdk::unknown_ptr) spi_set_min_metrics;
    
    // [xxxStubSetForegroundWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x41f90, 0x13864 bytes
    // win32kfull.sys .text:0x119940, 0x1596d bytes
    // win32kfull.sys .text:0x11a870, 0x1596d bytes
    //
    _n94(sdk::unknown_ptr) stub_set_foreground_window;
    
    // [xxxSynchronizeDWMWindowChanges]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd4a54, 0x1596d bytes
    // win32kfull.sys .text:0xcff90, 0x1659e bytes
    // win32kfull.sys .text:0xd5714, 0x1596d bytes
    //
    _n95(sdk::unknown_ptr) synchronize_dwm_window_changes;
    
    // [xxxTabletButtonExecuteAction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1d4578, 0x13864 bytes
    // win32kfull.sys .text:0x1d9d4c, 0x1596d bytes
    // win32kfull.sys .text:0x1d9bec, 0x1596d bytes
    //
    _n96(sdk::unknown_ptr) tablet_button_execute_action;
    
    // [xxxTabletButtonTimerCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1d4610, 0x13864 bytes
    // win32kfull.sys .text:0x1d9df0, 0x1596d bytes
    // win32kfull.sys .text:0x1d9c90, 0x1596d bytes
    //
    _n97(sdk::unknown_ptr) tablet_button_timer_callback;
    
    // [xxxTabletSetDisplayOrientation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1d46b0, 0x13864 bytes
    // win32kfull.sys .text:0x1d9ebc, 0x1596d bytes
    // win32kfull.sys .text:0x1d9d5c, 0x1596d bytes
    //
    _n98(sdk::unknown_ptr) tablet_set_display_orientation;
    
    // [xxxTouchTargetWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x218c58, 0x1596d bytes
    // win32kfull.sys .text:0x20a25c, 0x1659e bytes
    // win32kfull.sys .text:0x218ac8, 0x1596d bytes
    //
    _n99(sdk::unknown_ptr) touch_target_window;
    
    // [xxxTrackingActivateWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d31d0, 0x1596d bytes
    // win32kfull.sys .text:0x1d13c8, 0x1659e bytes
    // win32kfull.sys .text:0x1d3070, 0x1596d bytes
    //
    _o00(sdk::unknown_ptr) tracking_activate_window;
    
    // [xxxUnloadKeyboardLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b4ef0, 0x243e0 bytes
    // win32kbase.sys .text:0x1fca00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b2ca0, 0x243e0 bytes
    //
    _o01(sdk::unknown_ptr) unload_keyboard_layout;
    
    // [xxxUpdateClientRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2275b0, 0x13864 bytes
    // win32kfull.sys .text:0x23ff80, 0x1596d bytes
    // win32kfull.sys .text:0x23fe30, 0x1596d bytes
    //
    _o02(sdk::unknown_ptr) update_client_rect;
    
    // [xxxUpdateGlobalsAndSendKeyEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8b2f0, 0x243e0 bytes
    // win32kbase.sys .text:0x10c20, 0x27ef0 bytes
    // win32kbase.sys .text:0x689c0, 0x243e0 bytes
    //
    _o03(sdk::unknown_ptr) update_globals_and_send_key_event;
    
    // [xxxUpdateWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x41a00, 0x13864 bytes
    // win32kfull.sys .text:0x354d0, 0x1596d bytes
    // win32kfull.sys .text:0x358e0, 0x1596d bytes
    //
    _o04(sdk::unknown_ptr) update_window;
    
    // [xxxUpdateWindowPositionsForDpiBoundaryChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6eec, 0x1596d bytes
    // win32kfull.sys .text:0x23b57c, 0x1659e bytes
    // win32kfull.sys .text:0x1e6d4c, 0x1596d bytes
    //
    _o05(sdk::unknown_ptr) update_window_positions_for_dpi_boundary_change;
    
    // [xxxValidateRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x38410, 0x13864 bytes
    // win32kfull.sys .text:0x119ac0, 0x1596d bytes
    // win32kfull.sys .text:0x11a9f0, 0x1596d bytes
    //
    _o06(sdk::unknown_ptr) validate_rgn;
    
    // [xxxAccessTimeOutTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6ad0, 0x13864 bytes
    // win32kbase.sys .text:0x190860, 0x243e0 bytes
    // win32kbase.sys .text:0x1d09a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x18ec50, 0x243e0 bytes
    //
    _o07(sdk::unknown_ptr) access_time_out_timer;
    
    // [xxxActivateDebugger]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23378c, 0x13864 bytes
    // win32kfull.sys .text:0x248d98, 0x1596d bytes
    // win32kfull.sys .text:0x246b20, 0x1659e bytes
    // win32kfull.sys .text:0x248ca8, 0x1596d bytes
    //
    _o08(sdk::unknown_ptr) activate_debugger;
    
    // [xxxActivateEnabledPopup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22c748, 0x13864 bytes
    // win32kfull.sys .text:0x6a8c, 0x1596d bytes
    // win32kfull.sys .text:0x2421c4, 0x1659e bytes
    // win32kfull.sys .text:0x6e3c, 0x1596d bytes
    //
    _o09(sdk::unknown_ptr) activate_enabled_popup;
    
    // [xxxActivateKeyboardLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d7eb0, 0x13864 bytes
    // win32kbase.sys .text:0x85ee0, 0x243e0 bytes
    // win32kbase.sys .text:0xc7a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x87ce0, 0x243e0 bytes
    //
    _o10(sdk::unknown_ptr) activate_keyboard_layout;
    
    // [xxxActivateOnMinimize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25c80, 0x13864 bytes
    // win32kfull.sys .text:0xeb53c, 0x1596d bytes
    // win32kfull.sys .text:0xd10e0, 0x1659e bytes
    // win32kfull.sys .text:0xec27c, 0x1596d bytes
    //
    _o11(sdk::unknown_ptr) activate_on_minimize;
    
    // [xxxActivateWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x415f4, 0x13864 bytes
    // win32kfull.sys .text:0x104d7c, 0x1596d bytes
    // win32kfull.sys .text:0xfcab0, 0x1659e bytes
    // win32kfull.sys .text:0x105cac, 0x1596d bytes
    //
    _o12(sdk::unknown_ptr) activate_window;
    
    // [xxxActiveWindowTracking]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1db69c, 0x13864 bytes
    // win32kfull.sys .text:0x1e313c, 0x1596d bytes
    // win32kfull.sys .text:0x1dfabc, 0x1659e bytes
    // win32kfull.sys .text:0x1e2f9c, 0x1596d bytes
    //
    _o13(sdk::unknown_ptr) active_window_tracking;
    
    // [xxxAddFontResourceW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118dc, 0x13864 bytes
    // win32kfull.sys .text:0x1c4d8, 0x1596d bytes
    // win32kfull.sys .text:0x675cc, 0x1659e bytes
    // win32kfull.sys .text:0x1c8e8, 0x1596d bytes
    //
    _o14(sdk::unknown_ptr) add_font_resource_w;
    
    // [xxxAddFullScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11bf8c, 0x13864 bytes
    // win32kfull.sys .text:0x1146d8, 0x1596d bytes
    // win32kfull.sys .text:0xcd804, 0x1659e bytes
    // win32kfull.sys .text:0x115608, 0x1596d bytes
    //
    _o15(sdk::unknown_ptr) add_full_screen;
    
    // [xxxAddShadow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12a93c, 0x13864 bytes
    // win32kfull.sys .text:0x1315ac, 0x1596d bytes
    // win32kfull.sys .text:0x122a00, 0x1659e bytes
    // win32kfull.sys .text:0x1324ec, 0x1596d bytes
    //
    _o16(sdk::unknown_ptr) add_shadow;
    
    // [xxxAdjustPushState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d7acc, 0x13864 bytes
    // win32kbase.sys .text:0x1b4aec, 0x243e0 bytes
    // win32kbase.sys .text:0x1fc60c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b289c, 0x243e0 bytes
    //
    _o17(sdk::unknown_ptr) adjust_push_state;
    
    // [xxxAdjustPushStateForKL]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d7ca0, 0x13864 bytes
    // win32kbase.sys .text:0x1b4cb8, 0x243e0 bytes
    // win32kbase.sys .text:0x1fc7d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b2a68, 0x243e0 bytes
    //
    _o18(sdk::unknown_ptr) adjust_push_state_for_kl;
    
    // [xxxAdjustSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7f90, 0x13864 bytes
    // win32kfull.sys .text:0xac6e8, 0x1596d bytes
    // win32kfull.sys .text:0x484c8, 0x1659e bytes
    // win32kfull.sys .text:0xad258, 0x1596d bytes
    //
    _o19(sdk::unknown_ptr) adjust_size;
    
    // [xxxAdvise]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4004, 0x13864 bytes
    // win32kfull.sys .text:0x21bd48, 0x1596d bytes
    // win32kfull.sys .text:0x218050, 0x1659e bytes
    // win32kfull.sys .text:0x21bbb8, 0x1596d bytes
    //
    _o20(sdk::unknown_ptr) advise;
    
    // [xxxAdviseAck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e40d0, 0x13864 bytes
    // win32kfull.sys .text:0x21be60, 0x1596d bytes
    // win32kfull.sys .text:0x2181a0, 0x1659e bytes
    // win32kfull.sys .text:0x21bcd0, 0x1596d bytes
    //
    _o21(sdk::unknown_ptr) advise_ack;
    
    // [xxxAdviseData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4170, 0x13864 bytes
    // win32kfull.sys .text:0x21bfa8, 0x1596d bytes
    // win32kfull.sys .text:0x2183b0, 0x1659e bytes
    // win32kfull.sys .text:0x21be18, 0x1596d bytes
    //
    _o22(sdk::unknown_ptr) advise_data;
    
    // [xxxAdviseDataAck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4350, 0x13864 bytes
    // win32kfull.sys .text:0x21c220, 0x1596d bytes
    // win32kfull.sys .text:0x2186f0, 0x1659e bytes
    // win32kfull.sys .text:0x21c090, 0x1596d bytes
    //
    _o23(sdk::unknown_ptr) advise_data_ack;
    
    // [xxxAltGr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22ba38, 0x13864 bytes
    // win32kbase.sys .text:0x1bb144, 0x243e0 bytes
    // win32kbase.sys .text:0x202964, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b8f24, 0x243e0 bytes
    //
    _o24(sdk::unknown_ptr) alt_gr;
    
    // [xxxAnimateCaption]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x228d98, 0x13864 bytes
    // win32kfull.sys .text:0x23f4bc, 0x1596d bytes
    // win32kfull.sys .text:0x2400c4, 0x1659e bytes
    // win32kfull.sys .text:0x23f36c, 0x1596d bytes
    //
    _o25(sdk::unknown_ptr) animate_caption;
    
    // [xxxApplyArrangeAction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2004a0, 0x13864 bytes
    // win32kfull.sys .text:0x20d9a0, 0x1596d bytes
    // win32kfull.sys .text:0x20e538, 0x1659e bytes
    // win32kfull.sys .text:0x20d810, 0x1596d bytes
    //
    _o26(sdk::unknown_ptr) apply_arrange_action;
    
    // [xxxApplyGlobalInputSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x43324, 0x13864 bytes
    // win32kfull.sys .text:0x31b9c, 0x1596d bytes
    // win32kfull.sys .text:0xc13dc, 0x1659e bytes
    // win32kfull.sys .text:0x31fac, 0x1596d bytes
    //
    _o27(sdk::unknown_ptr) apply_global_input_settings;
    
    // [xxxArrangeIconicWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13e480, 0x13864 bytes
    // win32kfull.sys .text:0x14cae0, 0x1596d bytes
    // win32kfull.sys .text:0x140534, 0x1659e bytes
    // win32kfull.sys .text:0x14da20, 0x1596d bytes
    //
    _o28(sdk::unknown_ptr) arrange_iconic_windows;
    
    // [xxxArrangeWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2050a4, 0x13864 bytes
    // win32kfull.sys .text:0x20e10c, 0x1596d bytes
    // win32kfull.sys .text:0x20e8e4, 0x1659e bytes
    // win32kfull.sys .text:0x20df7c, 0x1596d bytes
    //
    _o29(sdk::unknown_ptr) arrange_window;
    
    // [xxxBeginPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5edc0, 0x13864 bytes
    // win32kfull.sys .text:0x9e798, 0x1596d bytes
    // win32kfull.sys .text:0x3fc9c, 0x1659e bytes
    // win32kfull.sys .text:0x9f308, 0x1596d bytes
    //
    _o30(sdk::unknown_ptr) begin_paint;
    
    // [xxxBMPtoDIB]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1403e0, 0x13864 bytes
    // win32kfull.sys .text:0x14b770, 0x1596d bytes
    // win32kfull.sys .text:0x21c240, 0x1659e bytes
    // win32kfull.sys .text:0x14c6b0, 0x1596d bytes
    //
    _o31(sdk::unknown_ptr) bm_pto_dib;
    
    // [xxxBroadcastDisplaySettingsChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x100470, 0x13864 bytes
    // win32kfull.sys .text:0x35a50, 0x1596d bytes
    // win32kfull.sys .text:0x10f2b0, 0x1659e bytes
    // win32kfull.sys .text:0x35e60, 0x1596d bytes
    //
    _o32(sdk::unknown_ptr) broadcast_display_settings_change;
    
    // [xxxBroadcastMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x126034, 0x13864 bytes
    // win32kfull.sys .text:0x36560, 0x1596d bytes
    // win32kfull.sys .text:0x11614c, 0x1659e bytes
    // win32kfull.sys .text:0x36970, 0x1596d bytes
    //
    _o33(sdk::unknown_ptr) broadcast_message;
    
    // [xxxBroadcastMessageEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x594e8, 0x13864 bytes
    // win32kfull.sys .text:0x32a70, 0x1596d bytes
    // win32kfull.sys .text:0xa4e90, 0x1659e bytes
    // win32kfull.sys .text:0x32e80, 0x1596d bytes
    //
    _o34(sdk::unknown_ptr) broadcast_message_ex;
    
    // [xxxBroadcastModernAppRedraw]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7cd0, 0x13864 bytes
    // win32kfull.sys .text:0x21f130, 0x1596d bytes
    // win32kfull.sys .text:0x214690, 0x1659e bytes
    // win32kfull.sys .text:0x21efc0, 0x1596d bytes
    //
    _o35(sdk::unknown_ptr) broadcast_modern_app_redraw;
    
    // [xxxBroadcastPaletteChanged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2104a8, 0x13864 bytes
    // win32kfull.sys .text:0x235bc0, 0x1596d bytes
    // win32kfull.sys .text:0x231110, 0x1659e bytes
    // win32kfull.sys .text:0x235a80, 0x1596d bytes
    //
    _o36(sdk::unknown_ptr) broadcast_palette_changed;
    
    // [xxxCalcCaptionButton]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x231454, 0x13864 bytes
    // win32kfull.sys .text:0x248218, 0x1596d bytes
    // win32kfull.sys .text:0x245f88, 0x1659e bytes
    // win32kfull.sys .text:0x248128, 0x1596d bytes
    //
    _o37(sdk::unknown_ptr) calc_caption_button;
    
    // [xxxCalcClientRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x56b50, 0x13864 bytes
    // win32kfull.sys .text:0xaae80, 0x1596d bytes
    // win32kfull.sys .text:0x48c50, 0x1659e bytes
    // win32kfull.sys .text:0xab9f0, 0x1596d bytes
    //
    _o38(sdk::unknown_ptr) calc_client_rect;
    
    // [xxxCalcMenuBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28cbc, 0x13864 bytes
    // win32kfull.sys .text:0x20954, 0x1596d bytes
    // win32kfull.sys .text:0x986d0, 0x1659e bytes
    // win32kfull.sys .text:0x20d64, 0x1596d bytes
    //
    _o39(sdk::unknown_ptr) calc_menu_bar;
    
    // [xxxCalcValidRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9748c, 0x13864 bytes
    // win32kfull.sys .text:0x833ac, 0x1596d bytes
    // win32kfull.sys .text:0x3397c, 0x1659e bytes
    // win32kfull.sys .text:0x83f1c, 0x1596d bytes
    //
    _o40(sdk::unknown_ptr) calc_valid_rects;
    
    // [xxxCallCtfHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa93cc, 0x13864 bytes
    // win32kfull.sys .text:0x574b4, 0x1596d bytes
    // win32kfull.sys .text:0xdfe8c, 0x1659e bytes
    // win32kfull.sys .text:0x578d4, 0x1596d bytes
    //
    _o41(sdk::unknown_ptr) call_ctf_hook;
    
    // [xxxCallGenerateIAMKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1cd714, 0x13864 bytes
    // win32kfull.sys .text:0x1d2efc, 0x1596d bytes
    // win32kfull.sys .text:0x1d0f38, 0x1659e bytes
    // win32kfull.sys .text:0x1d2d9c, 0x1596d bytes
    //
    _o42(sdk::unknown_ptr) call_generate_iam_key;
    
    // [xxxCallHandleMenuMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x211310, 0x13864 bytes
    // win32kfull.sys .text:0x237aa0, 0x1596d bytes
    // win32kfull.sys .text:0x232d40, 0x1659e bytes
    // win32kfull.sys .text:0x237960, 0x1596d bytes
    //
    _o43(sdk::unknown_ptr) call_handle_menu_messages;
    
    // [xxxCallHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4fb40, 0x13864 bytes
    // win32kfull.sys .text:0x5fa70, 0x1596d bytes
    // win32kfull.sys .text:0x435bc, 0x1659e bytes
    // win32kfull.sys .text:0x5fe90, 0x1596d bytes
    //
    _o44(sdk::unknown_ptr) call_hook;
    
    // [xxxCallHook2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xadd50, 0x13864 bytes
    // win32kfull.sys .text:0x5ff20, 0x1596d bytes
    // win32kfull.sys .text:0x28150, 0x1659e bytes
    // win32kfull.sys .text:0x60340, 0x1596d bytes
    //
    _o45(sdk::unknown_ptr) call_hook2;
    
    // [xxxCallJournalPlaybackHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e0108, 0x13864 bytes
    // win32kfull.sys .text:0x1e7064, 0x1596d bytes
    // win32kfull.sys .text:0x1e3560, 0x1659e bytes
    // win32kfull.sys .text:0x1e6ec4, 0x1596d bytes
    //
    _o46(sdk::unknown_ptr) call_journal_playback_hook;
    
    // [xxxCallJournalRecordHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e04b8, 0x13864 bytes
    // win32kfull.sys .text:0x1e7484, 0x1596d bytes
    // win32kfull.sys .text:0x1e3984, 0x1659e bytes
    // win32kfull.sys .text:0x1e72e4, 0x1596d bytes
    //
    _o47(sdk::unknown_ptr) call_journal_record_hook;
    
    // [xxxCallMouseHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11c0e8, 0x13864 bytes
    // win32kfull.sys .text:0x11e46c, 0x1596d bytes
    // win32kfull.sys .text:0x2cd4, 0x1659e bytes
    // win32kfull.sys .text:0x11f36c, 0x1596d bytes
    //
    _o48(sdk::unknown_ptr) call_mouse_hook;
    
    // [xxxCallMsgFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e05ec, 0x13864 bytes
    // win32kfull.sys .text:0x1e75bc, 0x1596d bytes
    // win32kfull.sys .text:0x132450, 0x1659e bytes
    // win32kfull.sys .text:0x1e741c, 0x1596d bytes
    //
    _o49(sdk::unknown_ptr) call_msg_filter;
    
    // [xxxCallNextHookEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d17c, 0x13864 bytes
    // win32kfull.sys .text:0x1acf4, 0x1596d bytes
    // win32kfull.sys .text:0xfb44c, 0x1659e bytes
    // win32kfull.sys .text:0x1b0a4, 0x1596d bytes
    //
    _o50(sdk::unknown_ptr) call_next_hook_ex;
    
    // [xxxCancelCoolSwitch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fabc0, 0x13864 bytes
    // win32kfull.sys .text:0x119234, 0x1596d bytes
    // win32kfull.sys .text:0x10a454, 0x1659e bytes
    // win32kfull.sys .text:0x11a164, 0x1596d bytes
    //
    _o51(sdk::unknown_ptr) cancel_cool_switch;
    
    // [xxxCancelMouseMoveTracking]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28840, 0x13864 bytes
    // win32kfull.sys .text:0xd837c, 0x1596d bytes
    // win32kfull.sys .text:0x91ef4, 0x1659e bytes
    // win32kfull.sys .text:0xd903c, 0x1596d bytes
    //
    _o52(sdk::unknown_ptr) cancel_mouse_move_tracking;
    
    // [xxxCancelTracking]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x41f9c, 0x13864 bytes
    // win32kfull.sys .text:0x30998, 0x1596d bytes
    // win32kfull.sys .text:0xdc2e8, 0x1659e bytes
    // win32kfull.sys .text:0x30da8, 0x1596d bytes
    //
    _o53(sdk::unknown_ptr) cancel_tracking;
    
    // [xxxCancelTrackingForThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2051e0, 0x13864 bytes
    // win32kfull.sys .text:0x211ed0, 0x1596d bytes
    // win32kfull.sys .text:0x212e70, 0x1659e bytes
    // win32kfull.sys .text:0x211d40, 0x1596d bytes
    //
    _o54(sdk::unknown_ptr) cancel_tracking_for_thread;
    
    // [xxxCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22320, 0x13864 bytes
    // win32kfull.sys .text:0x32f08, 0x1596d bytes
    // win32kfull.sys .text:0xa8068, 0x1659e bytes
    // win32kfull.sys .text:0x33318, 0x1596d bytes
    //
    _o55(sdk::unknown_ptr) capture;
    
    // [xxxChangeClipboardChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141a8c, 0x13864 bytes
    // win32kfull.sys .text:0x14d6a0, 0x1596d bytes
    // win32kfull.sys .text:0x141b30, 0x1659e bytes
    // win32kfull.sys .text:0x14e5e0, 0x1596d bytes
    //
    _o56(sdk::unknown_ptr) change_clipboard_chain;
    
    // [xxxChangeForegroundKeyboardTable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x450f8, 0x13864 bytes
    // win32kbase.sys .text:0x84330, 0x243e0 bytes
    // win32kbase.sys .text:0xa0a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x86ce0, 0x243e0 bytes
    //
    _o57(sdk::unknown_ptr) change_foreground_keyboard_table;
    
    // [xxxChangeMonitorFlags]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11d2d8, 0x13864 bytes
    // win32kfull.sys .text:0x11b870, 0x1596d bytes
    // win32kfull.sys .text:0x10711c, 0x1659e bytes
    // win32kfull.sys .text:0x11c7a0, 0x1596d bytes
    //
    _o58(sdk::unknown_ptr) change_monitor_flags;
    
    // [xxxCheckFullScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6049c, 0x13864 bytes
    // win32kfull.sys .text:0x9ece8, 0x1596d bytes
    // win32kfull.sys .text:0x3f0d4, 0x1659e bytes
    // win32kfull.sys .text:0x9f858, 0x1596d bytes
    //
    _o59(sdk::unknown_ptr) check_full_screen;
    
    // [xxxCheckImeShowStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x41e10, 0x13864 bytes
    // win32kfull.sys .text:0xe8238, 0x1596d bytes
    // win32kfull.sys .text:0xe1224, 0x1659e bytes
    // win32kfull.sys .text:0xe8f78, 0x1596d bytes
    //
    _o60(sdk::unknown_ptr) check_ime_show_status;
    
    // [xxxCleanupAndFreeDdeConv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e50a0, 0x13864 bytes
    // win32kfull.sys .text:0x21d760, 0x1596d bytes
    // win32kfull.sys .text:0x21a3b0, 0x1659e bytes
    // win32kfull.sys .text:0x21d5d0, 0x1596d bytes
    //
    _o61(sdk::unknown_ptr) cleanup_and_free_dde_conv;
    
    // [xxxCleanupAndFreeDdeConvIfSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0150, 0x1eb80 bytes
    // win32kbase.sys .text:0x129cc0, 0x243e0 bytes
    // win32kbase.sys .text:0x15b950, 0x27ef0 bytes
    // win32kbase.sys .text:0x1274f0, 0x243e0 bytes
    //
    _o62(sdk::unknown_ptr) cleanup_and_free_dde_conv_if_supported;
    
    // [xxxCleanupDdeConv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4410, 0x13864 bytes
    // win32kfull.sys .text:0x21c3dc, 0x1596d bytes
    // win32kfull.sys .text:0x218a10, 0x1659e bytes
    // win32kfull.sys .text:0x21c24c, 0x1596d bytes
    //
    _o63(sdk::unknown_ptr) cleanup_dde_conv;
    
    // [xxxCleanupMotherDesktopWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11e314, 0x13864 bytes
    // win32kfull.sys .text:0x128840, 0x1596d bytes
    // win32kfull.sys .text:0x1180f8, 0x1659e bytes
    // win32kfull.sys .text:0x129780, 0x1596d bytes
    //
    _o64(sdk::unknown_ptr) cleanup_mother_desktop_window;
    
    // [xxxCleanupThreadPointerInputInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xedba0, 0x13864 bytes
    // win32kfull.sys .text:0xfaf20, 0x1596d bytes
    // win32kfull.sys .text:0xefc70, 0x1659e bytes
    // win32kfull.sys .text:0xfbe50, 0x1596d bytes
    //
    _o65(sdk::unknown_ptr) cleanup_thread_pointer_input_info;
    
    // [xxxClearWakeMask]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa83f0, 0x13864 bytes
    // win32kfull.sys .text:0x1d3d80, 0x1596d bytes
    // win32kfull.sys .text:0x1dc584, 0x1659e bytes
    // win32kfull.sys .text:0x1d3c20, 0x1596d bytes
    //
    _o66(sdk::unknown_ptr) clear_wake_mask;
    
    // [xxxClientAddFontResourceW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11914, 0x13864 bytes
    // win32kfull.sys .text:0x1c2a0, 0x1596d bytes
    // win32kfull.sys .text:0x67618, 0x1659e bytes
    // win32kfull.sys .text:0x1c6b0, 0x1596d bytes
    //
    _o67(sdk::unknown_ptr) client_add_font_resource_w;
    
    // [xxxClientBroadcastThemeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11bdd8, 0x13864 bytes
    // win32kfull.sys .text:0x11ec80, 0x1596d bytes
    // win32kfull.sys .text:0x10e78c, 0x1659e bytes
    // win32kfull.sys .text:0x11fb80, 0x1596d bytes
    //
    _o68(sdk::unknown_ptr) client_broadcast_theme_change;
    
    // [xxxClientCallDefaultInputHandler]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20e940, 0x13864 bytes
    // win32kfull.sys .text:0x232300, 0x1596d bytes
    // win32kfull.sys .text:0x22dd80, 0x1659e bytes
    // win32kfull.sys .text:0x2321c0, 0x1596d bytes
    //
    _o69(sdk::unknown_ptr) client_call_default_input_handler;
    
    // [xxxClientCallDelegateThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13a5bc, 0x13864 bytes
    // win32kfull.sys .text:0x23247c, 0x1596d bytes
    // win32kfull.sys .text:0x22dea8, 0x1659e bytes
    // win32kfull.sys .text:0x23233c, 0x1596d bytes
    //
    _o70(sdk::unknown_ptr) client_call_delegate_thread;
    
    // [xxxClientCallDitThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9738, 0x13864 bytes
    // win32kfull.sys .text:0x55968, 0x1596d bytes
    // win32kfull.sys .text:0xe9958, 0x1659e bytes
    // win32kfull.sys .text:0x55d88, 0x1596d bytes
    //
    _o71(sdk::unknown_ptr) client_call_dit_thread;
    
    // [xxxClientCallWinEventProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb263c, 0x13864 bytes
    // win32kfull.sys .text:0x55fc4, 0x1596d bytes
    // win32kfull.sys .text:0x53f30, 0x1659e bytes
    // win32kfull.sys .text:0x563e4, 0x1596d bytes
    //
    _o72(sdk::unknown_ptr) client_call_win_event_proc;
    
    // [xxxClientCharToWchar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141e04, 0x13864 bytes
    // win32kfull.sys .text:0x232928, 0x1596d bytes
    // win32kfull.sys .text:0x22e2c0, 0x1659e bytes
    // win32kfull.sys .text:0x2327e8, 0x1596d bytes
    //
    _o73(sdk::unknown_ptr) client_char_to_wchar;
    
    // [xxxClientCopyDDEIn1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20ecac, 0x13864 bytes
    // win32kfull.sys .text:0x232a50, 0x1596d bytes
    // win32kfull.sys .text:0x22e39c, 0x1659e bytes
    // win32kfull.sys .text:0x232910, 0x1596d bytes
    //
    _o74(sdk::unknown_ptr) client_copy_dde_in1;
    
    // [xxxClientCopyDDEIn2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20f0c4, 0x13864 bytes
    // win32kfull.sys .text:0x228fc8, 0x1596d bytes
    // win32kfull.sys .text:0x224be8, 0x1659e bytes
    // win32kfull.sys .text:0x228e88, 0x1596d bytes
    //
    _o75(sdk::unknown_ptr) client_copy_dde_in2;
    
    // [xxxClientCopyDDEOut1]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20f1fc, 0x13864 bytes
    // win32kfull.sys .text:0x232f14, 0x1596d bytes
    // win32kfull.sys .text:0x22e828, 0x1659e bytes
    // win32kfull.sys .text:0x232dd4, 0x1596d bytes
    //
    _o76(sdk::unknown_ptr) client_copy_dde_out1;
    
    // [xxxClientCopyDDEOut2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20f524, 0x13864 bytes
    // win32kfull.sys .text:0x22913c, 0x1596d bytes
    // win32kfull.sys .text:0x224d10, 0x1659e bytes
    // win32kfull.sys .text:0x228ffc, 0x1596d bytes
    //
    _o77(sdk::unknown_ptr) client_copy_dde_out2;
    
    // [xxxClientCopyImage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44e7c, 0x13864 bytes
    // win32kfull.sys .text:0x4c1ec, 0x1596d bytes
    // win32kfull.sys .text:0x9b3ec, 0x1659e bytes
    // win32kfull.sys .text:0x4c5fc, 0x1596d bytes
    //
    _o78(sdk::unknown_ptr) client_copy_image;
    
    // [xxxClientEnableMMCSS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11d9a8, 0x13864 bytes
    // win32kfull.sys .text:0xb9b88, 0x1596d bytes
    // win32kfull.sys .text:0x8e3a8, 0x1659e bytes
    // win32kfull.sys .text:0xba6f8, 0x1596d bytes
    //
    _o79(sdk::unknown_ptr) client_enable_mmcss;
    
    // [xxxClientExpandStringW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2e214, 0x13864 bytes
    // win32kfull.sys .text:0x1f420, 0x1596d bytes
    // win32kfull.sys .text:0xcb378, 0x1659e bytes
    // win32kfull.sys .text:0x1f830, 0x1596d bytes
    //
    _o80(sdk::unknown_ptr) client_expand_string_w;
    
    // [xxxClientExtTextOutW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140ffc, 0x13864 bytes
    // win32kfull.sys .text:0x148080, 0x1596d bytes
    // win32kfull.sys .text:0x646f4, 0x1659e bytes
    // win32kfull.sys .text:0x148fc0, 0x1596d bytes
    //
    _o81(sdk::unknown_ptr) client_ext_text_out_w;
    
    // [xxxClientFindMnemChar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20f674, 0x13864 bytes
    // win32kfull.sys .text:0x2332d0, 0x1596d bytes
    // win32kfull.sys .text:0x22eba4, 0x1659e bytes
    // win32kfull.sys .text:0x233190, 0x1596d bytes
    //
    _o82(sdk::unknown_ptr) client_find_mnem_char;
    
    // [xxxClientFreeDDEHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20f88c, 0x13864 bytes
    // win32kfull.sys .text:0x233568, 0x1596d bytes
    // win32kfull.sys .text:0x22ede8, 0x1659e bytes
    // win32kfull.sys .text:0x233428, 0x1596d bytes
    //
    _o83(sdk::unknown_ptr) client_free_dde_handle;
    
    // [xxxClientGetCharsetInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x120cdc, 0x13864 bytes
    // win32kfull.sys .text:0x121e98, 0x1596d bytes
    // win32kfull.sys .text:0x111c28, 0x1659e bytes
    // win32kfull.sys .text:0x122dd8, 0x1596d bytes
    //
    _o84(sdk::unknown_ptr) client_get_charset_info;
    
    // [xxxClientGetDDEFlags]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20f97c, 0x13864 bytes
    // win32kfull.sys .text:0x233690, 0x1596d bytes
    // win32kfull.sys .text:0x22eec4, 0x1659e bytes
    // win32kfull.sys .text:0x233550, 0x1596d bytes
    //
    _o85(sdk::unknown_ptr) client_get_dde_flags;
    
    // [xxxClientGetDDEHookData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20fa6c, 0x13864 bytes
    // win32kfull.sys .text:0x2337b8, 0x1596d bytes
    // win32kfull.sys .text:0x22efa0, 0x1659e bytes
    // win32kfull.sys .text:0x233678, 0x1596d bytes
    //
    _o86(sdk::unknown_ptr) client_get_dde_hook_data;
    
    // [xxxClientGetTextExtentPointW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x38118, 0x13864 bytes
    // win32kfull.sys .text:0x1483a8, 0x1596d bytes
    // win32kfull.sys .text:0x649f8, 0x1659e bytes
    // win32kfull.sys .text:0x1492e8, 0x1596d bytes
    //
    _o87(sdk::unknown_ptr) client_get_text_extent_point_w;
    
    // [xxxClientLoadImage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2fd44, 0x13864 bytes
    // win32kfull.sys .text:0x1cfe0, 0x1596d bytes
    // win32kfull.sys .text:0x9ab34, 0x1659e bytes
    // win32kfull.sys .text:0x1d3f0, 0x1596d bytes
    //
    _o88(sdk::unknown_ptr) client_load_image;
    
    // [xxxClientLoadMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44c60, 0x13864 bytes
    // win32kfull.sys .text:0x4bf60, 0x1596d bytes
    // win32kfull.sys .text:0x9ae74, 0x1659e bytes
    // win32kfull.sys .text:0x4c370, 0x1596d bytes
    //
    _o89(sdk::unknown_ptr) client_load_menu;
    
    // [xxxClientLoadStringW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2e540, 0x13864 bytes
    // win32kfull.sys .text:0x1e2ac, 0x1596d bytes
    // win32kfull.sys .text:0xcb72c, 0x1659e bytes
    // win32kfull.sys .text:0x1e6bc, 0x1596d bytes
    //
    _o90(sdk::unknown_ptr) client_load_string_w;
    
    // [xxxClientLpkDrawTextEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20fc08, 0x13864 bytes
    // win32kfull.sys .text:0x2339bc, 0x1596d bytes
    // win32kfull.sys .text:0x22f15c, 0x1659e bytes
    // win32kfull.sys .text:0x23387c, 0x1596d bytes
    //
    _o91(sdk::unknown_ptr) client_lpk_draw_text_ex;
    
    // [xxxClientMonitorEnumProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106f40, 0x13864 bytes
    // win32kfull.sys .text:0x10e030, 0x1596d bytes
    // win32kfull.sys .text:0x103200, 0x1659e bytes
    // win32kfull.sys .text:0x10ef60, 0x1596d bytes
    //
    _o92(sdk::unknown_ptr) client_monitor_enum_proc;
    
    // [xxxClientPSMTextOut]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20ffb4, 0x13864 bytes
    // win32kfull.sys .text:0x233e24, 0x1596d bytes
    // win32kfull.sys .text:0x22f564, 0x1659e bytes
    // win32kfull.sys .text:0x233ce4, 0x1596d bytes
    //
    _o93(sdk::unknown_ptr) client_psm_text_out;
    
    // [xxxClientShutdown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1142c8, 0x13864 bytes
    // win32kfull.sys .text:0xc1e6c, 0x1596d bytes
    // win32kfull.sys .text:0x104470, 0x1659e bytes
    // win32kfull.sys .text:0xc2b2c, 0x1596d bytes
    //
    _o94(sdk::unknown_ptr) client_shutdown;
    
    // [xxxClientShutdown2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114348, 0x13864 bytes
    // win32kfull.sys .text:0xc1ef4, 0x1596d bytes
    // win32kfull.sys .text:0x1044fc, 0x1659e bytes
    // win32kfull.sys .text:0xc2bb4, 0x1596d bytes
    //
    _o95(sdk::unknown_ptr) client_shutdown2;
    
    // [xxxClientThreadSetup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xff370, 0x13864 bytes
    // win32kfull.sys .text:0xfe240, 0x1596d bytes
    // win32kfull.sys .text:0x67b40, 0x1659e bytes
    // win32kfull.sys .text:0xff170, 0x1596d bytes
    //
    _o96(sdk::unknown_ptr) client_thread_setup;
    
    // [xxxClientUpdateDpi]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21029c, 0x13864 bytes
    // win32kfull.sys .text:0x2341b4, 0x1596d bytes
    // win32kfull.sys .text:0x22f9e0, 0x1659e bytes
    // win32kfull.sys .text:0x234074, 0x1596d bytes
    //
    _o97(sdk::unknown_ptr) client_update_dpi;
    
    // [xxxClientWOWGetProcModule]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x52748, 0x13864 bytes
    // win32kfull.sys .text:0x5457c, 0x1596d bytes
    // win32kfull.sys .text:0xa95dc, 0x1659e bytes
    // win32kfull.sys .text:0x5499c, 0x1596d bytes
    //
    _o98(sdk::unknown_ptr) client_wow_get_proc_module;
    
    // [xxxCloseClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xec330, 0x13864 bytes
    // win32kfull.sys .text:0xd7580, 0x1596d bytes
    // win32kfull.sys .text:0xd0680, 0x1659e bytes
    // win32kfull.sys .text:0xd8240, 0x1596d bytes
    //
    _o99(sdk::unknown_ptr) close_clipboard;
    
    // [xxxCommitMoveSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x200bbc, 0x13864 bytes
    // win32kfull.sys .text:0x20e310, 0x1596d bytes
    // win32kfull.sys .text:0x20e9e8, 0x1659e bytes
    // win32kfull.sys .text:0x20e180, 0x1596d bytes
    //
    _p00(sdk::unknown_ptr) commit_move_size;
    
    // [xxxCommonGetTitleBarInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x580b0, 0x13864 bytes
    // win32kfull.sys .text:0x650a0, 0x1596d bytes
    // win32kfull.sys .text:0x49458, 0x1659e bytes
    // win32kfull.sys .text:0x65c10, 0x1596d bytes
    //
    _p01(sdk::unknown_ptr) common_get_title_bar_info;
    
    // [xxxCompositedPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x227308, 0x13864 bytes
    // win32kfull.sys .text:0x23f100, 0x1596d bytes
    // win32kfull.sys .text:0x23c964, 0x1659e bytes
    // win32kfull.sys .text:0x23efb0, 0x1596d bytes
    //
    _p02(sdk::unknown_ptr) composited_paint;
    
    // [xxxCompositedTraverse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22720c, 0x13864 bytes
    // win32kfull.sys .text:0x23eed8, 0x1596d bytes
    // win32kfull.sys .text:0x15d3c6, 0x1659e bytes
    // win32kfull.sys .text:0x23ed88, 0x1596d bytes
    //
    _p03(sdk::unknown_ptr) composited_traverse;
    
    // [xxxConnectService]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11e20, 0x13864 bytes
    // win32kfull.sys .text:0x1213e4, 0x1596d bytes
    // win32kfull.sys .text:0xd4968, 0x1659e bytes
    // win32kfull.sys .text:0x122324, 0x1596d bytes
    //
    _p04(sdk::unknown_ptr) connect_service;
    
    // [xxxConsoleControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x54eb8, 0x13864 bytes
    // win32kfull.sys .text:0x515f8, 0x1596d bytes
    // win32kfull.sys .text:0xa1b68, 0x1659e bytes
    // win32kfull.sys .text:0x51a18, 0x1596d bytes
    //
    _p05(sdk::unknown_ptr) console_control;
    
    // [xxxContScroll]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22d010, 0x13864 bytes
    // win32kfull.sys .text:0x245400, 0x1596d bytes
    // win32kfull.sys .text:0x2435f0, 0x1659e bytes
    // win32kfull.sys .text:0x245310, 0x1596d bytes
    //
    _p06(sdk::unknown_ptr) cont_scroll;
    
    // [xxxCopyAckIn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e44f8, 0x13864 bytes
    // win32kfull.sys .text:0x21c4ec, 0x1596d bytes
    // win32kfull.sys .text:0x218b20, 0x1659e bytes
    // win32kfull.sys .text:0x21c35c, 0x1596d bytes
    //
    _p07(sdk::unknown_ptr) copy_ack_in;
    
    // [xxxCopyDdeIn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4644, 0x13864 bytes
    // win32kfull.sys .text:0x21c72c, 0x1596d bytes
    // win32kfull.sys .text:0x218e2c, 0x1659e bytes
    // win32kfull.sys .text:0x21c59c, 0x1596d bytes
    //
    _p08(sdk::unknown_ptr) copy_dde_in;
    
    // [xxxCreateCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x37084, 0x13864 bytes
    // win32kfull.sys .text:0x105fb4, 0x1596d bytes
    // win32kfull.sys .text:0x6784, 0x1659e bytes
    // win32kfull.sys .text:0x106ee4, 0x1596d bytes
    //
    _p09(sdk::unknown_ptr) create_caret;
    
    // [xxxCreateClassSmIcon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x41504, 0x13864 bytes
    // win32kfull.sys .text:0x4be48, 0x1596d bytes
    // win32kfull.sys .text:0x9aa2c, 0x1659e bytes
    // win32kfull.sys .text:0x4c258, 0x1596d bytes
    //
    _p10(sdk::unknown_ptr) create_class_sm_icon;
    
    // [xxxCreateDefaultImeWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4a2d4, 0x13864 bytes
    // win32kfull.sys .text:0x4d0b0, 0x1596d bytes
    // win32kfull.sys .text:0xb7178, 0x1659e bytes
    // win32kfull.sys .text:0x4d4c0, 0x1596d bytes
    //
    _p11(sdk::unknown_ptr) create_default_ime_window;
    
    // [xxxCreateDesktopEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x15520, 0x13864 bytes
    // win32kfull.sys .text:0xc6f24, 0x1596d bytes
    // win32kfull.sys .text:0xd3394, 0x1659e bytes
    // win32kfull.sys .text:0xc7be4, 0x1596d bytes
    //
    _p12(sdk::unknown_ptr) create_desktop_ex;
    
    // [xxxCreateDesktopEx2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x119524, 0x13864 bytes
    // win32kfull.sys .text:0x113fa4, 0x1596d bytes
    // win32kfull.sys .text:0x84ac4, 0x1659e bytes
    // win32kfull.sys .text:0x114ed4, 0x1596d bytes
    //
    _p13(sdk::unknown_ptr) create_desktop_ex2;
    
    // [xxxCreateDisconnectDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121e4, 0x13864 bytes
    // win32kfull.sys .text:0xc4aa8, 0x1596d bytes
    // win32kfull.sys .text:0xd65c8, 0x1659e bytes
    // win32kfull.sys .text:0xc5768, 0x1596d bytes
    //
    _p14(sdk::unknown_ptr) create_disconnect_desktop;
    
    // [xxxCreateSystemThreads]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149260, 0x13864 bytes
    // win32kfull.sys .text:0x153ea0, 0x1596d bytes
    // win32kbase.sys .text:0x8b630, 0x27ef0 bytes
    // win32kfull.sys .text:0x154de0, 0x1596d bytes
    //
    _p15(sdk::unknown_ptr) create_system_threads;
    
    // [xxxCreateThreadInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x38218, 0x1eb80 bytes
    // win32kbase.sys .text:0x68710, 0x243e0 bytes
    // win32kbase.sys .text:0x16488, 0x27ef0 bytes
    // win32kbase.sys .text:0x6226c, 0x243e0 bytes
    //
    _p16(sdk::unknown_ptr) create_thread_info;
    
    // [xxxCreateWindowEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9aa94, 0x13864 bytes
    // win32kfull.sys .text:0xa7570, 0x1596d bytes
    // win32kfull.sys .text:0x4ccc0, 0x1659e bytes
    // win32kfull.sys .text:0xa80e0, 0x1596d bytes
    //
    _p17(sdk::unknown_ptr) create_window_ex;
    
    // [xxxCreateWindowSmIcon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x111134, 0x13864 bytes
    // win32kfull.sys .text:0x117404, 0x1596d bytes
    // win32kfull.sys .text:0x108f48, 0x1659e bytes
    // win32kfull.sys .text:0x118334, 0x1596d bytes
    //
    _p18(sdk::unknown_ptr) create_window_sm_icon;
    
    // [xxxCreateWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10b14, 0x13864 bytes
    // win32kfull.sys .text:0xc363c, 0x1596d bytes
    // win32kfull.sys .text:0xd56c8, 0x1659e bytes
    // win32kfull.sys .text:0xc42fc, 0x1596d bytes
    //
    _p19(sdk::unknown_ptr) create_window_station;
    
    // [xxxCsDdeInitialize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11d098, 0x13864 bytes
    // win32kfull.sys .text:0x11b5e0, 0x1596d bytes
    // win32kfull.sys .text:0x106e8c, 0x1659e bytes
    // win32kfull.sys .text:0x11c510, 0x1596d bytes
    //
    _p20(sdk::unknown_ptr) cs_dde_initialize;
    
    // [xxxCsEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb600, 0x13864 bytes
    // win32kfull.sys .text:0x247878, 0x1596d bytes
    // win32kfull.sys .text:0x3004, 0x1659e bytes
    // win32kfull.sys .text:0x247788, 0x1596d bytes
    //
    _p21(sdk::unknown_ptr) cs_event;
    
    // [xxxDCETrackCaptionButton]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x281b8, 0x13864 bytes
    // win32kfull.sys .text:0xbe46c, 0x1596d bytes
    // win32kfull.sys .text:0xcd208, 0x1659e bytes
    // win32kfull.sys .text:0xbefdc, 0x1596d bytes
    //
    _p22(sdk::unknown_ptr) dce_track_caption_button;
    
    // [xxxDCEWindowHitTestIndirect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x98160, 0x13864 bytes
    // win32kfull.sys .text:0xb0590, 0x1596d bytes
    // win32kfull.sys .text:0x55620, 0x1659e bytes
    // win32kfull.sys .text:0xb1100, 0x1596d bytes
    //
    _p23(sdk::unknown_ptr) dce_window_hit_test_indirect;
    
    // [xxxDDETrackGetMessageHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e50cc, 0x13864 bytes
    // win32kfull.sys .text:0x21d7c4, 0x1596d bytes
    // win32kfull.sys .text:0x21a458, 0x1659e bytes
    // win32kfull.sys .text:0x21d634, 0x1596d bytes
    //
    _p24(sdk::unknown_ptr) dde_track_get_message_hook;
    
    // [xxxDDETrackPostHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e52c4, 0x13864 bytes
    // win32kfull.sys .text:0x21db5c, 0x1596d bytes
    // win32kfull.sys .text:0x21a9a8, 0x1659e bytes
    // win32kfull.sys .text:0x21d9cc, 0x1596d bytes
    //
    _p25(sdk::unknown_ptr) dde_track_post_hook;
    
    // [xxxDDETrackSendHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e5584, 0x13864 bytes
    // win32kfull.sys .text:0x21de8c, 0x1596d bytes
    // win32kfull.sys .text:0x21ad28, 0x1659e bytes
    // win32kfull.sys .text:0x21dcfc, 0x1596d bytes
    //
    _p26(sdk::unknown_ptr) dde_track_send_hook;
    
    // [xxxDDETrackWindowDying]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e56a8, 0x13864 bytes
    // win32kfull.sys .text:0x21e008, 0x1596d bytes
    // win32kfull.sys .text:0x21aef4, 0x1659e bytes
    // win32kfull.sys .text:0x21de78, 0x1596d bytes
    //
    _p27(sdk::unknown_ptr) dde_track_window_dying;
    
    // [xxxDeactivate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3fde8, 0x13864 bytes
    // win32kfull.sys .text:0x2f738, 0x1596d bytes
    // win32kfull.sys .text:0xc1bbc, 0x1659e bytes
    // win32kfull.sys .text:0x2fb48, 0x1596d bytes
    //
    _p28(sdk::unknown_ptr) deactivate;
    
    // [xxxDefPointerProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22c7e4, 0x13864 bytes
    // win32kfull.sys .text:0x2446b0, 0x1596d bytes
    // win32kfull.sys .text:0x242284, 0x1659e bytes
    // win32kfull.sys .text:0x244580, 0x1596d bytes
    //
    _p29(sdk::unknown_ptr) def_pointer_proc;
    
    // [xxxDefWindowProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa7a20, 0x13864 bytes
    // win32kfull.sys .text:0xae170, 0x1596d bytes
    // win32kfull.sys .text:0x9bd40, 0x1659e bytes
    // win32kfull.sys .text:0xaece0, 0x1596d bytes
    //
    _p30(sdk::unknown_ptr) def_window_proc;
    
    // [xxxDeferredDesktopRotation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7d10, 0x13864 bytes
    // win32kfull.sys .text:0x21f170, 0x1596d bytes
    // win32kfull.sys .text:0x2146cc, 0x1659e bytes
    // win32kfull.sys .text:0x21f000, 0x1596d bytes
    //
    _p31(sdk::unknown_ptr) deferred_desktop_rotation;
    
    // [xxxDesktopPaintCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11f900, 0x13864 bytes
    // win32kfull.sys .text:0x1224c0, 0x1596d bytes
    // win32kfull.sys .text:0x10bf40, 0x1659e bytes
    // win32kfull.sys .text:0x123400, 0x1596d bytes
    //
    _p32(sdk::unknown_ptr) desktop_paint_callback;
    
    // [xxxDesktopThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1caf0, 0x13864 bytes
    // win32kfull.sys .text:0xbf2c0, 0x1596d bytes
    // win32kfull.sys .text:0x9d4f0, 0x1659e bytes
    // win32kfull.sys .text:0xbfe30, 0x1596d bytes
    //
    _p33(sdk::unknown_ptr) desktop_thread;
    
    // [xxxDesktopThreadWaiter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa924c, 0x13864 bytes
    // win32kfull.sys .text:0xbfb08, 0x1596d bytes
    // win32kfull.sys .text:0x9d9d4, 0x1659e bytes
    // win32kfull.sys .text:0xc0678, 0x1596d bytes
    //
    _p34(sdk::unknown_ptr) desktop_thread_waiter;
    
    // [xxxDesktopWndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa3b20, 0x13864 bytes
    // win32kfull.sys .text:0xdb070, 0x1596d bytes
    // win32kfull.sys .text:0x9b6d0, 0x1659e bytes
    // win32kfull.sys .text:0xdbd30, 0x1596d bytes
    //
    _p35(sdk::unknown_ptr) desktop_wnd_proc;
    
    // [xxxDesktopWndProcWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa3b8c, 0x13864 bytes
    // win32kfull.sys .text:0xdb0dc, 0x1596d bytes
    // win32kfull.sys .text:0x9b73c, 0x1659e bytes
    // win32kfull.sys .text:0xdbd9c, 0x1596d bytes
    //
    _p36(sdk::unknown_ptr) desktop_wnd_proc_worker;
    
    // [xxxDesktopsRecalcAndBroadcastDisplayChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x100410, 0x13864 bytes
    // win32kfull.sys .text:0x365a0, 0x1596d bytes
    // win32kfull.sys .text:0x10f150, 0x1659e bytes
    // win32kfull.sys .text:0x369b0, 0x1596d bytes
    //
    _p37(sdk::unknown_ptr) desktops_recalc_and_broadcast_display_change;
    
    // [xxxDestroyCorrespondingGhostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138838, 0x13864 bytes
    // win32kfull.sys .text:0x3378, 0x1596d bytes
    // win32kfull.sys .text:0x137c98, 0x1659e bytes
    // win32kfull.sys .text:0x3378, 0x1596d bytes
    //
    _p38(sdk::unknown_ptr) destroy_corresponding_ghost_window;
    
    // [xxxDestroyThreadDDEObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124530, 0x13864 bytes
    // win32kfull.sys .text:0x126ea0, 0x1596d bytes
    // win32kfull.sys .text:0x110670, 0x1659e bytes
    // win32kfull.sys .text:0x127de0, 0x1596d bytes
    //
    _p39(sdk::unknown_ptr) destroy_thread_dde_object;
    
    // [xxxDestroyThreadInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x370dc, 0x1eb80 bytes
    // win32kbase.sys .text:0x6dbc4, 0x243e0 bytes
    // win32kbase.sys .text:0x1f4a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x14394, 0x243e0 bytes
    //
    _p40(sdk::unknown_ptr) destroy_thread_info;
    
    // [xxxDestroyWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9f1a0, 0x13864 bytes
    // win32kfull.sys .text:0x9dbf0, 0x1596d bytes
    // win32kfull.sys .text:0x59a20, 0x1659e bytes
    // win32kfull.sys .text:0x9e760, 0x1596d bytes
    //
    _p41(sdk::unknown_ptr) destroy_window;
    
    // [xxxDestroyWindowIfSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7a620, 0x1eb80 bytes
    // win32kbase.sys .text:0xb28a0, 0x243e0 bytes
    // win32kbase.sys .text:0xc66c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa88c0, 0x243e0 bytes
    //
    _p42(sdk::unknown_ptr) destroy_window_if_supported;
    
    // [xxxDIBtoBMP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e826c, 0x13864 bytes
    // win32kfull.sys .text:0x21f968, 0x1596d bytes
    // win32kfull.sys .text:0x21c55c, 0x1659e bytes
    // win32kfull.sys .text:0x21f7f8, 0x1596d bytes
    //
    _p43(sdk::unknown_ptr) di_bto_bmp;
    
    // [xxxDiscardPointerFrameMessagesInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1da3fc, 0x13864 bytes
    // win32kfull.sys .text:0x1f0c7c, 0x1596d bytes
    // win32kfull.sys .text:0x1ed47c, 0x1659e bytes
    // win32kfull.sys .text:0x1f0adc, 0x1596d bytes
    //
    _p44(sdk::unknown_ptr) discard_pointer_frame_messages_internal;
    
    // [xxxDiscardPointerWindowFrameMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f37c0, 0x13864 bytes
    // win32kfull.sys .text:0x1f1ef4, 0x1596d bytes
    // win32kfull.sys .text:0x1ee6d0, 0x1659e bytes
    // win32kfull.sys .text:0x1f1d54, 0x1596d bytes
    //
    _p45(sdk::unknown_ptr) discard_pointer_window_frame_messages;
    
    // [xxxDisownClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e8c9c, 0x13864 bytes
    // win32kfull.sys .text:0xdbe94, 0x1596d bytes
    // win32kfull.sys .text:0x13906c, 0x1659e bytes
    // win32kfull.sys .text:0xdcb54, 0x1596d bytes
    //
    _p46(sdk::unknown_ptr) disown_clipboard;
    
    // [xxxDispatchMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x96c30, 0x13864 bytes
    // win32kfull.sys .text:0xa3f7c, 0x1596d bytes
    // win32kfull.sys .text:0x4fb4c, 0x1659e bytes
    // win32kfull.sys .text:0xa4aec, 0x1596d bytes
    //
    _p47(sdk::unknown_ptr) dispatch_message;
    
    // [xxxDisplayDiagBlackScreenDetected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba6d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x132600, 0x243e0 bytes
    // win32kbase.sys .text:0x163fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12ffb0, 0x243e0 bytes
    //
    _p48(sdk::unknown_ptr) display_diag_black_screen_detected;
    
    // [xxxDoDeferredPointerActivate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f5734, 0x13864 bytes
    // win32kfull.sys .text:0x1f320c, 0x1596d bytes
    // win32kfull.sys .text:0x1ef7e0, 0x1659e bytes
    // win32kfull.sys .text:0x1f306c, 0x1596d bytes
    //
    _p49(sdk::unknown_ptr) do_deferred_pointer_activate;
    
    // [xxxDoHotKeyStuff]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4f530, 0x13864 bytes
    // win32kfull.sys .text:0xda3d0, 0x1596d bytes
    // win32kfull.sys .text:0xef140, 0x1659e bytes
    // win32kfull.sys .text:0xdb090, 0x1596d bytes
    //
    _p50(sdk::unknown_ptr) do_hot_key_stuff;
    
    // [xxxDoPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa7c30, 0x13864 bytes
    // win32kfull.sys .text:0x57f58, 0x1596d bytes
    // win32kfull.sys .text:0x87b08, 0x1659e bytes
    // win32kfull.sys .text:0x58378, 0x1596d bytes
    //
    _p51(sdk::unknown_ptr) do_paint;
    
    // [xxxDoScroll]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22d10c, 0x13864 bytes
    // win32kfull.sys .text:0x2454f0, 0x1596d bytes
    // win32kfull.sys .text:0x2436e0, 0x1659e bytes
    // win32kfull.sys .text:0x245400, 0x1596d bytes
    //
    _p52(sdk::unknown_ptr) do_scroll;
    
    // [xxxDoScrollMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22e69c, 0x13864 bytes
    // win32kfull.sys .text:0x24613c, 0x1596d bytes
    // win32kfull.sys .text:0x2442f8, 0x1659e bytes
    // win32kfull.sys .text:0x24604c, 0x1596d bytes
    //
    _p53(sdk::unknown_ptr) do_scroll_menu;
    
    // [xxxDoSyncPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xecd2c, 0x13864 bytes
    // win32kfull.sys .text:0x352c8, 0x1596d bytes
    // win32kfull.sys .text:0x895e0, 0x1659e bytes
    // win32kfull.sys .text:0x356d8, 0x1596d bytes
    //
    _p54(sdk::unknown_ptr) do_sync_paint;
    
    // [xxxDoSysExpunge]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x101efc, 0x13864 bytes
    // win32kfull.sys .text:0x1f188, 0x1596d bytes
    // win32kfull.sys .text:0x43804, 0x1659e bytes
    // win32kfull.sys .text:0x1f598, 0x1596d bytes
    //
    _p55(sdk::unknown_ptr) do_sys_expunge;
    
    // [xxxDragObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x236614, 0x13864 bytes
    // win32kfull.sys .text:0x249164, 0x1596d bytes
    // win32kfull.sys .text:0x247274, 0x1659e bytes
    // win32kfull.sys .text:0x249074, 0x1596d bytes
    //
    _p56(sdk::unknown_ptr) drag_object;
    
    // [xxxDrawAnimatedRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2296b4, 0x13864 bytes
    // win32kfull.sys .text:0x23fb54, 0x1596d bytes
    // win32kfull.sys .text:0x240708, 0x1659e bytes
    // win32kfull.sys .text:0x23fa04, 0x1596d bytes
    //
    _p57(sdk::unknown_ptr) draw_animated_rects;
    
    // [xxxDrawCaptionBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3d470, 0x13864 bytes
    // win32kfull.sys .text:0x22284, 0x1596d bytes
    // win32kfull.sys .text:0x97e44, 0x1659e bytes
    // win32kfull.sys .text:0x22694, 0x1596d bytes
    //
    _p58(sdk::unknown_ptr) draw_caption_bar;
    
    // [xxxDrawCaptionTemp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x232160, 0x13864 bytes
    // win32kfull.sys .text:0x147c6c, 0x1596d bytes
    // win32kfull.sys .text:0x6429c, 0x1659e bytes
    // win32kfull.sys .text:0x148bac, 0x1596d bytes
    //
    _p59(sdk::unknown_ptr) draw_caption_temp;
    
    // [xxxDrawClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x141474, 0x13864 bytes
    // win32kfull.sys .text:0xd7e30, 0x1596d bytes
    // win32kfull.sys .text:0x139cfc, 0x1659e bytes
    // win32kfull.sys .text:0xd8af0, 0x1596d bytes
    //
    _p60(sdk::unknown_ptr) draw_clipboard;
    
    // [xxxDrawDragRectEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2052c8, 0x13864 bytes
    // win32kfull.sys .text:0x211fe4, 0x1596d bytes
    // win32kfull.sys .text:0x20ee84, 0x1659e bytes
    // win32kfull.sys .text:0x211e54, 0x1596d bytes
    //
    _p61(sdk::unknown_ptr) draw_drag_rect_ex;
    
    // [xxxDrawItemUnderline]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2386f4, 0x13864 bytes
    // win32kfull.sys .text:0x24cb0c, 0x1596d bytes
    // win32kfull.sys .text:0x24a430, 0x1659e bytes
    // win32kfull.sys .text:0x24ca1c, 0x1596d bytes
    //
    _p62(sdk::unknown_ptr) draw_item_underline;
    
    // [xxxDrawMenuBarUnderlines]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x123958, 0x13864 bytes
    // win32kfull.sys .text:0x273b0, 0x1596d bytes
    // win32kfull.sys .text:0x1133dc, 0x1659e bytes
    // win32kfull.sys .text:0x277c0, 0x1596d bytes
    //
    _p63(sdk::unknown_ptr) draw_menu_bar_underlines;
    
    // [xxxDrawMenuItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29464, 0x13864 bytes
    // win32kfull.sys .text:0x48a14, 0x1596d bytes
    // win32kfull.sys .text:0xb0e98, 0x1659e bytes
    // win32kfull.sys .text:0x48e24, 0x1596d bytes
    //
    _p64(sdk::unknown_ptr) draw_menu_item;
    
    // [xxxDrawMenuItemText]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x238990, 0x13864 bytes
    // win32kfull.sys .text:0x24ccd4, 0x1596d bytes
    // win32kfull.sys .text:0x24a5f8, 0x1659e bytes
    // win32kfull.sys .text:0x24cbe4, 0x1596d bytes
    //
    _p65(sdk::unknown_ptr) draw_menu_item_text;
    
    // [xxxDrawSB2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13e85c, 0x13864 bytes
    // win32kfull.sys .text:0x146b44, 0x1596d bytes
    // win32kfull.sys .text:0x6f0c, 0x1659e bytes
    // win32kfull.sys .text:0x147a84, 0x1596d bytes
    //
    _p66(sdk::unknown_ptr) draw_sb2;
    
    // [xxxDrawScrollBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13e7d0, 0x13864 bytes
    // win32kfull.sys .text:0x146ab0, 0x1596d bytes
    // win32kfull.sys .text:0x6d88, 0x1659e bytes
    // win32kfull.sys .text:0x1479f0, 0x1596d bytes
    //
    _p67(sdk::unknown_ptr) draw_scroll_bar;
    
    // [xxxDrawState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x237908, 0x13864 bytes
    // win32kfull.sys .text:0x251874, 0x1596d bytes
    // win32kfull.sys .text:0x250cfc, 0x1659e bytes
    // win32kfull.sys .text:0x251784, 0x1596d bytes
    //
    _p68(sdk::unknown_ptr) draw_state;
    
    // [xxxDrawThumb]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22d1b8, 0x13864 bytes
    // win32kfull.sys .text:0x2455e4, 0x1596d bytes
    // win32kfull.sys .text:0x24379c, 0x1659e bytes
    // win32kfull.sys .text:0x2454f4, 0x1596d bytes
    //
    _p69(sdk::unknown_ptr) draw_thumb;
    
    // [xxxDrawWindowFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3df2c, 0x13864 bytes
    // win32kfull.sys .text:0xae724, 0x1596d bytes
    // win32kfull.sys .text:0x3c364, 0x1659e bytes
    // win32kfull.sys .text:0xaf294, 0x1596d bytes
    //
    _p70(sdk::unknown_ptr) draw_window_frame;
    
    // [xxxDupConvTerminate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4690, 0x13864 bytes
    // win32kfull.sys .text:0x21c840, 0x1596d bytes
    // win32kfull.sys .text:0x218fe0, 0x1659e bytes
    // win32kfull.sys .text:0x21c6b0, 0x1596d bytes
    //
    _p71(sdk::unknown_ptr) dup_conv_terminate;
    
    // [xxxDW_DestroyOwnedWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf2fa0, 0x13864 bytes
    // win32kfull.sys .text:0xdff10, 0x1596d bytes
    // win32kfull.sys .text:0xe5848, 0x1659e bytes
    // win32kfull.sys .text:0xe0bd0, 0x1596d bytes
    //
    _p72(sdk::unknown_ptr) dw_destroy_owned_windows;
    
    // [xxxDW_SendDestroyMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa05d8, 0x13864 bytes
    // win32kfull.sys .text:0x9d98c, 0x1596d bytes
    // win32kfull.sys .text:0xadc28, 0x1659e bytes
    // win32kfull.sys .text:0x9e4fc, 0x1596d bytes
    //
    _p73(sdk::unknown_ptr) dw_send_destroy_messages;
    
    // [xxxDwmControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x84310, 0x1eb80 bytes
    // win32kbase.sys .text:0x2bc00, 0x243e0 bytes
    // win32kbase.sys .text:0x6e370, 0x27ef0 bytes
    // win32kbase.sys .text:0xc1f90, 0x243e0 bytes
    //
    _p74(sdk::unknown_ptr) dwm_control;
    
    // [xxxDwmProcessShutdown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e4, 0x1eb80 bytes
    // win32kbase.sys .text:0x2b87c, 0x243e0 bytes
    // win32kbase.sys .text:0x6dcc8, 0x27ef0 bytes
    // win32kbase.sys .text:0xc1c0c, 0x243e0 bytes
    //
    _p75(sdk::unknown_ptr) dwm_process_shutdown;
    
    // [xxxDwmProcessStartup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83d9c, 0x1eb80 bytes
    // win32kbase.sys .text:0x2b67c, 0x243e0 bytes
    // win32kbase.sys .text:0x6e150, 0x27ef0 bytes
    // win32kbase.sys .text:0xc1a0c, 0x243e0 bytes
    //
    _p76(sdk::unknown_ptr) dwm_process_startup;
    
    // [xxxDwmStopRedirection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc840, 0x13864 bytes
    // win32kfull.sys .text:0xbd260, 0x1596d bytes
    // win32kfull.sys .text:0x81540, 0x1659e bytes
    // win32kfull.sys .text:0xbddd0, 0x1596d bytes
    //
    _p77(sdk::unknown_ptr) dwm_stop_redirection;
    
    // [xxxDWP_DoCancelMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11d430, 0x13864 bytes
    // win32kfull.sys .text:0x10e3a0, 0x1596d bytes
    // win32kfull.sys .text:0x102c28, 0x1659e bytes
    // win32kfull.sys .text:0x10f2d0, 0x1596d bytes
    //
    _p78(sdk::unknown_ptr) dwp_do_cancel_mode;
    
    // [xxxDWP_DoNCActivate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3d268, 0x13864 bytes
    // win32kfull.sys .text:0x22010, 0x1596d bytes
    // win32kfull.sys .text:0x97bcc, 0x1659e bytes
    // win32kfull.sys .text:0x22420, 0x1596d bytes
    //
    _p79(sdk::unknown_ptr) dwp_do_nc_activate;
    
    // [xxxDWP_EraseBkgnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106a18, 0x13864 bytes
    // win32kfull.sys .text:0x4b92c, 0x1596d bytes
    // win32kfull.sys .text:0x1023c8, 0x1659e bytes
    // win32kfull.sys .text:0x4bd3c, 0x1596d bytes
    //
    _p80(sdk::unknown_ptr) dwp_erase_bkgnd;
    
    // [xxxDWP_NCMouse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28444, 0x13864 bytes
    // win32kfull.sys .text:0xbe310, 0x1596d bytes
    // win32kfull.sys .text:0xcd0ac, 0x1659e bytes
    // win32kfull.sys .text:0xbee80, 0x1596d bytes
    //
    _p81(sdk::unknown_ptr) dwp_nc_mouse;
    
    // [xxxDWP_Paint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x38420, 0x13864 bytes
    // win32kfull.sys .text:0xdb8e8, 0x1596d bytes
    // win32kfull.sys .text:0x7a68, 0x1659e bytes
    // win32kfull.sys .text:0xdc5a8, 0x1596d bytes
    //
    _p82(sdk::unknown_ptr) dwp_paint;
    
    // [xxxDWPPrint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x135244, 0x13864 bytes
    // win32kfull.sys .text:0xff7dc, 0x1596d bytes
    // win32kfull.sys .text:0x132b68, 0x1659e bytes
    // win32kfull.sys .text:0x10070c, 0x1596d bytes
    //
    _p83(sdk::unknown_ptr) dwp_print;
    
    // [xxxDWP_SetCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x96458, 0x13864 bytes
    // win32kfull.sys .text:0xac7cc, 0x1596d bytes
    // win32kfull.sys .text:0xac0dc, 0x1659e bytes
    // win32kfull.sys .text:0xad33c, 0x1596d bytes
    //
    _p84(sdk::unknown_ptr) dwp_set_cursor;
    
    // [xxxDWP_SetIcon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x43930, 0x13864 bytes
    // win32kfull.sys .text:0x4bd04, 0x1596d bytes
    // win32kfull.sys .text:0x9b254, 0x1659e bytes
    // win32kfull.sys .text:0x4c114, 0x1596d bytes
    //
    _p85(sdk::unknown_ptr) dwp_set_icon;
    
    // [xxxDWP_SetRedraw]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118530, 0x13864 bytes
    // win32kfull.sys .text:0xcc5a0, 0x1596d bytes
    // win32kfull.sys .text:0x8393c, 0x1659e bytes
    // win32kfull.sys .text:0xcd260, 0x1596d bytes
    //
    _p86(sdk::unknown_ptr) dwp_set_redraw;
    
    // [xxxDWP_UpdateUIState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x107898, 0x13864 bytes
    // win32kfull.sys .text:0x26364, 0x1596d bytes
    // win32kfull.sys .text:0xf9d84, 0x1659e bytes
    // win32kfull.sys .text:0x26774, 0x1596d bytes
    //
    _p87(sdk::unknown_ptr) dwp_update_ui_state;
    
    // [xxxEmptyClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xeca30, 0x13864 bytes
    // win32kfull.sys .text:0xd9d30, 0x1596d bytes
    // win32kfull.sys .text:0xcd48c, 0x1659e bytes
    // win32kfull.sys .text:0xda9f0, 0x1596d bytes
    //
    _p88(sdk::unknown_ptr) empty_clipboard;
    
    // [xxxEnableChildWindowDpiMessageX]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3a7f0, 0x13864 bytes
    // win32kfull.sys .text:0xf4a64, 0x1596d bytes
    // win32kfull.sys .text:0x106a24, 0x1659e bytes
    // win32kfull.sys .text:0xf58f4, 0x1596d bytes
    //
    _p89(sdk::unknown_ptr) enable_child_window_dpi_message_x;
    
    // [xxxEnableMenuItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4ade4, 0x13864 bytes
    // win32kfull.sys .text:0x1fe88, 0x1596d bytes
    // win32kfull.sys .text:0x9a080, 0x1659e bytes
    // win32kfull.sys .text:0x20298, 0x1596d bytes
    //
    _p90(sdk::unknown_ptr) enable_menu_item;
    
    // [xxxEnableNonClientDpiScaling]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dfb14, 0x13864 bytes
    // win32kfull.sys .text:0x1e6acc, 0x1596d bytes
    // win32kfull.sys .text:0x4914, 0x1659e bytes
    // win32kfull.sys .text:0x1e692c, 0x1596d bytes
    //
    _p91(sdk::unknown_ptr) enable_non_client_dpi_scaling;
    
    // [xxxEnableSBCtlArrows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22d290, 0x13864 bytes
    // win32kfull.sys .text:0x2456cc, 0x1596d bytes
    // win32kfull.sys .text:0x243898, 0x1659e bytes
    // win32kfull.sys .text:0x2455dc, 0x1596d bytes
    //
    _p92(sdk::unknown_ptr) enable_sb_ctl_arrows;
    
    // [xxxEnableScrollBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf61ec, 0x13864 bytes
    // win32kfull.sys .text:0xe6db0, 0x1596d bytes
    // win32kfull.sys .text:0x6440, 0x1659e bytes
    // win32kfull.sys .text:0xe7af0, 0x1596d bytes
    //
    _p93(sdk::unknown_ptr) enable_scroll_bar;
    
    // [xxxEnableWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3ac70, 0x13864 bytes
    // win32kfull.sys .text:0x77370, 0x1596d bytes
    // win32kfull.sys .text:0xc487c, 0x1659e bytes
    // win32kfull.sys .text:0x77ee0, 0x1596d bytes
    //
    _p94(sdk::unknown_ptr) enable_window;
    
    // [xxxEnableWindowWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3acb8, 0x13864 bytes
    // win32kfull.sys .text:0x773dc, 0x1596d bytes
    // win32kfull.sys .text:0xc48e8, 0x1659e bytes
    // win32kfull.sys .text:0x77f4c, 0x1596d bytes
    //
    _p95(sdk::unknown_ptr) enable_window_worker;
    
    // [xxxEnableWndSBArrows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf620c, 0x13864 bytes
    // win32kfull.sys .text:0xe6de4, 0x1596d bytes
    // win32kfull.sys .text:0x6474, 0x1659e bytes
    // win32kfull.sys .text:0xe7b24, 0x1596d bytes
    //
    _p96(sdk::unknown_ptr) enable_wnd_sb_arrows;
    
    // [xxxEndDeferWindowPosEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9588c, 0x13864 bytes
    // win32kfull.sys .text:0x81860, 0x1596d bytes
    // win32kfull.sys .text:0x32320, 0x1659e bytes
    // win32kfull.sys .text:0x823d0, 0x1596d bytes
    //
    _p97(sdk::unknown_ptr) end_defer_window_pos_ex;
    
    // [xxxEndGetWidnowTrackInfoAsync]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x116b38, 0x13864 bytes
    // win32kfull.sys .text:0x2ecc0, 0x1596d bytes
    // win32kfull.sys .text:0xc23e8, 0x1659e bytes
    // win32kfull.sys .text:0x2f0d0, 0x1596d bytes
    //
    _p98(sdk::unknown_ptr) end_get_widnow_track_info_async;
    
    // [xxxEndMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23634c, 0x13864 bytes
    // win32kfull.sys .text:0x24af1c, 0x1596d bytes
    // win32kfull.sys .text:0x248a90, 0x1659e bytes
    // win32kfull.sys .text:0x24ae2c, 0x1596d bytes
    //
    _p99(sdk::unknown_ptr) end_menu;
    
    // [xxxEndMenuLoop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x133870, 0x13864 bytes
    // win32kfull.sys .text:0x234720, 0x1596d bytes
    // win32kfull.sys .text:0x22ff00, 0x1659e bytes
    // win32kfull.sys .text:0x2345e0, 0x1596d bytes
    //
    _q00(sdk::unknown_ptr) end_menu_loop;
    
    // [xxxEndPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3855c, 0x13864 bytes
    // win32kfull.sys .text:0xdba90, 0x1596d bytes
    // win32kfull.sys .text:0x7c0c, 0x1659e bytes
    // win32kfull.sys .text:0xdc750, 0x1596d bytes
    //
    _q01(sdk::unknown_ptr) end_paint;
    
    // [xxxEndScroll]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22e854, 0x13864 bytes
    // win32kfull.sys .text:0x246374, 0x1596d bytes
    // win32kfull.sys .text:0x244544, 0x1659e bytes
    // win32kfull.sys .text:0x246284, 0x1596d bytes
    //
    _q02(sdk::unknown_ptr) end_scroll;
    
    // [xxxEnumDisplayMonitors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24140, 0x1eb80 bytes
    // win32kbase.sys .text:0x20ac0, 0x243e0 bytes
    // win32kbase.sys .text:0x57d50, 0x27ef0 bytes
    // win32kbase.sys .text:0x59790, 0x243e0 bytes
    //
    _q03(sdk::unknown_ptr) enum_display_monitors;
    
    // [xxxEnumTurnOffCompositing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e0a40, 0x13864 bytes
    // win32kfull.sys .text:0x1e8130, 0x1596d bytes
    // win32kfull.sys .text:0x1e48e0, 0x1659e bytes
    // win32kfull.sys .text:0x1e7f90, 0x1596d bytes
    //
    _q04(sdk::unknown_ptr) enum_turn_off_compositing;
    
    // [xxxEventWndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44f80, 0x13864 bytes
    // win32kfull.sys .text:0x4c320, 0x1596d bytes
    // win32kfull.sys .text:0x9b4f0, 0x1659e bytes
    // win32kfull.sys .text:0x4c730, 0x1596d bytes
    //
    _q05(sdk::unknown_ptr) event_wnd_proc;
    
    // [xxxExecute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e46b8, 0x13864 bytes
    // win32kfull.sys .text:0x21c8c4, 0x1596d bytes
    // win32kfull.sys .text:0x2190a8, 0x1659e bytes
    // win32kfull.sys .text:0x21c734, 0x1596d bytes
    //
    _q06(sdk::unknown_ptr) execute;
    
    // [xxxExecuteAck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e47c0, 0x13864 bytes
    // win32kfull.sys .text:0x21ca80, 0x1596d bytes
    // win32kfull.sys .text:0x219340, 0x1659e bytes
    // win32kfull.sys .text:0x21c8f0, 0x1596d bytes
    //
    _q07(sdk::unknown_ptr) execute_ack;
    
    // [xxxFillWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106a74, 0x13864 bytes
    // win32kfull.sys .text:0x48378, 0x1596d bytes
    // win32kfull.sys .text:0x3dfa0, 0x1659e bytes
    // win32kfull.sys .text:0x48788, 0x1596d bytes
    //
    _q08(sdk::unknown_ptr) fill_window;
    
    // [xxxFKAcceptanceDelayTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6ca0, 0x13864 bytes
    // win32kbase.sys .text:0x190940, 0x243e0 bytes
    // win32kbase.sys .text:0x1d0a80, 0x27ef0 bytes
    // win32kbase.sys .text:0x18ed30, 0x243e0 bytes
    //
    _q09(sdk::unknown_ptr) fk_acceptance_delay_timer;
    
    // [xxxFKRepeatRateTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6d80, 0x13864 bytes
    // win32kbase.sys .text:0x190a00, 0x243e0 bytes
    // win32kbase.sys .text:0x1d0b40, 0x27ef0 bytes
    // win32kbase.sys .text:0x18edf0, 0x243e0 bytes
    //
    _q10(sdk::unknown_ptr) fk_repeat_rate_timer;
    
    // [xxxFlashEnabledPopup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22c82c, 0x13864 bytes
    // win32kfull.sys .text:0x244714, 0x1596d bytes
    // win32kfull.sys .text:0x2422e8, 0x1659e bytes
    // win32kfull.sys .text:0x2445e4, 0x1596d bytes
    //
    _q11(sdk::unknown_ptr) flash_enabled_popup;
    
    // [xxxFlashWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xffdd8, 0x13864 bytes
    // win32kfull.sys .text:0x35d28, 0x1596d bytes
    // win32kfull.sys .text:0x86c88, 0x1659e bytes
    // win32kfull.sys .text:0x36138, 0x1596d bytes
    //
    _q12(sdk::unknown_ptr) flash_window;
    
    // [xxxFlushDeferredWindowEvents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4c648, 0x13864 bytes
    // win32kfull.sys .text:0x104f60, 0x1596d bytes
    // win32kfull.sys .text:0x57d78, 0x1659e bytes
    // win32kfull.sys .text:0x105e90, 0x1596d bytes
    //
    _q13(sdk::unknown_ptr) flush_deferred_window_events;
    
    // [xxxFlushPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x210520, 0x13864 bytes
    // win32kfull.sys .text:0x235c70, 0x1596d bytes
    // win32kfull.sys .text:0x2311c0, 0x1659e bytes
    // win32kfull.sys .text:0x235b30, 0x1596d bytes
    //
    _q14(sdk::unknown_ptr) flush_palette;
    
    // [xxxFocusSetInputContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x43264, 0x13864 bytes
    // win32kfull.sys .text:0x31aac, 0x1596d bytes
    // win32kfull.sys .text:0xc12ec, 0x1659e bytes
    // win32kfull.sys .text:0x31ebc, 0x1596d bytes
    //
    _q15(sdk::unknown_ptr) focus_set_input_context;
    
    // [xxxForceUpdateProcessDpiAwarenessContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dfba0, 0x13864 bytes
    // win32kfull.sys .text:0x1e6b7c, 0x1596d bytes
    // win32kfull.sys .text:0x23b198, 0x1659e bytes
    // win32kfull.sys .text:0x1e69dc, 0x1596d bytes
    //
    _q16(sdk::unknown_ptr) force_update_process_dpi_awareness_context;
    
    // [xxxForceUpdateWindowTreeDpiAwarenessContext]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dd904, 0x13864 bytes
    // win32kfull.sys .text:0x1e4b9c, 0x1596d bytes
    // win32kfull.sys .text:0x23b358, 0x1659e bytes
    // win32kfull.sys .text:0x1e49fc, 0x1596d bytes
    //
    _q17(sdk::unknown_ptr) force_update_window_tree_dpi_awareness_context;
    
    // [xxxFreeDdeConv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e57f8, 0x13864 bytes
    // win32kfull.sys .text:0x21e200, 0x1596d bytes
    // win32kfull.sys .text:0x21b138, 0x1659e bytes
    // win32kfull.sys .text:0x21e088, 0x1596d bytes
    //
    _q18(sdk::unknown_ptr) free_dde_conv;
    
    // [xxxFreeListFree]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e48bc, 0x13864 bytes
    // win32kfull.sys .text:0x21cc18, 0x1596d bytes
    // win32kfull.sys .text:0x21956c, 0x1659e bytes
    // win32kfull.sys .text:0x21ca88, 0x1596d bytes
    //
    _q19(sdk::unknown_ptr) free_list_free;
    
    // [xxxFreeWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5de6c, 0x13864 bytes
    // win32kfull.sys .text:0x9f518, 0x1596d bytes
    // win32kfull.sys .text:0x3fec8, 0x1659e bytes
    // win32kfull.sys .text:0xa0088, 0x1596d bytes
    //
    _q20(sdk::unknown_ptr) free_window;
    
    // [xxxFrostCrashedWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f0a84, 0x13864 bytes
    // win32kfull.sys .text:0x20ac94, 0x1596d bytes
    // win32kfull.sys .text:0x214108, 0x1659e bytes
    // win32kfull.sys .text:0x20ab04, 0x1596d bytes
    //
    _q21(sdk::unknown_ptr) frost_crashed_window;
    
    // [xxxFW_DestroyAllChildren]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5f114, 0x13864 bytes
    // win32kfull.sys .text:0xa0768, 0x1596d bytes
    // win32kfull.sys .text:0x414d4, 0x1659e bytes
    // win32kfull.sys .text:0xa12d8, 0x1596d bytes
    //
    _q22(sdk::unknown_ptr) fw_destroy_all_children;
    
    // [xxxGetClipboardData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140608, 0x13864 bytes
    // win32kfull.sys .text:0xd85fc, 0x1596d bytes
    // win32kfull.sys .text:0x13d870, 0x1659e bytes
    // win32kfull.sys .text:0xd92bc, 0x1596d bytes
    //
    _q23(sdk::unknown_ptr) get_clipboard_data;
    
    // [xxxGetColorObjects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13ed58, 0x13864 bytes
    // win32kfull.sys .text:0x146f4c, 0x1596d bytes
    // win32kfull.sys .text:0x6ecc, 0x1659e bytes
    // win32kfull.sys .text:0x147e8c, 0x1596d bytes
    //
    _q24(sdk::unknown_ptr) get_color_objects;
    
    // [xxxGetComboBoxInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x136a64, 0x13864 bytes
    // win32kfull.sys .text:0x1426b4, 0x1596d bytes
    // win32kfull.sys .text:0x13554c, 0x1659e bytes
    // win32kfull.sys .text:0x1435f4, 0x1596d bytes
    //
    _q25(sdk::unknown_ptr) get_combo_box_info;
    
    // [xxxGetControlBrush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106d24, 0x13864 bytes
    // win32kfull.sys .text:0x1404d4, 0x1596d bytes
    // win32kfull.sys .text:0x13e5d4, 0x1659e bytes
    // win32kfull.sys .text:0x141414, 0x1596d bytes
    //
    _q26(sdk::unknown_ptr) get_control_brush;
    
    // [xxxGetControlColor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106d9c, 0x13864 bytes
    // win32kfull.sys .text:0x14059c, 0x1596d bytes
    // win32kfull.sys .text:0x143fe4, 0x1659e bytes
    // win32kfull.sys .text:0x1414dc, 0x1596d bytes
    //
    _q27(sdk::unknown_ptr) get_control_color;
    
    // [xxxGetCursorPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa85a0, 0x13864 bytes
    // win32kfull.sys .text:0xd3890, 0x1596d bytes
    // win32kfull.sys .text:0x96aec, 0x1659e bytes
    // win32kfull.sys .text:0xd4550, 0x1596d bytes
    //
    _q28(sdk::unknown_ptr) get_cursor_pos;
    
    // [xxxGetDeviceChangeInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d9870, 0x13864 bytes
    // win32kfull.sys .text:0x1dedc0, 0x1596d bytes
    // win32kfull.sys .text:0x1dba5c, 0x1659e bytes
    // win32kfull.sys .text:0x1dec60, 0x1596d bytes
    //
    _q29(sdk::unknown_ptr) get_device_change_info;
    
    // [xxxGetDummyBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e83fc, 0x13864 bytes
    // win32kfull.sys .text:0x21faec, 0x1596d bytes
    // win32kfull.sys .text:0x21c6e0, 0x1659e bytes
    // win32kfull.sys .text:0x21f97c, 0x1596d bytes
    //
    _q30(sdk::unknown_ptr) get_dummy_bitmap;
    
    // [xxxGetDummyDib]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140174, 0x13864 bytes
    // win32kfull.sys .text:0x14b52c, 0x1596d bytes
    // win32kfull.sys .text:0x21c868, 0x1659e bytes
    // win32kfull.sys .text:0x14c46c, 0x1596d bytes
    //
    _q31(sdk::unknown_ptr) get_dummy_dib;
    
    // [xxxGetDummyDibV5]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e8574, 0x13864 bytes
    // win32kfull.sys .text:0x21fc94, 0x1596d bytes
    // win32kfull.sys .text:0x21ca00, 0x1659e bytes
    // win32kfull.sys .text:0x21fb24, 0x1596d bytes
    //
    _q32(sdk::unknown_ptr) get_dummy_dib_v5;
    
    // [xxxGetDummyPalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e8730, 0x13864 bytes
    // win32kfull.sys .text:0x21fe44, 0x1596d bytes
    // win32kfull.sys .text:0x21cbb0, 0x1659e bytes
    // win32kfull.sys .text:0x21fcd4, 0x1596d bytes
    //
    _q33(sdk::unknown_ptr) get_dummy_palette;
    
    // [xxxGetDummyText]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e8800, 0x13864 bytes
    // win32kfull.sys .text:0x21ff20, 0x1596d bytes
    // win32kfull.sys .text:0x21cc8c, 0x1659e bytes
    // win32kfull.sys .text:0x21fdb0, 0x1596d bytes
    //
    _q34(sdk::unknown_ptr) get_dummy_text;
    
    // [xxxGetInitMenuParam]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f6a28, 0x13864 bytes
    // win32kfull.sys .text:0x222200, 0x1596d bytes
    // win32kfull.sys .text:0x21e278, 0x1659e bytes
    // win32kfull.sys .text:0x2220c8, 0x1596d bytes
    //
    _q35(sdk::unknown_ptr) get_init_menu_param;
    
    // [xxxGetInputEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa8110, 0x13864 bytes
    // win32kfull.sys .text:0x57ba0, 0x1596d bytes
    // win32kfull.sys .text:0x9e990, 0x1659e bytes
    // win32kfull.sys .text:0x57fc0, 0x1596d bytes
    //
    _q36(sdk::unknown_ptr) get_input_event;
    
    // [xxxGetListBoxInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x235e8c, 0x13864 bytes
    // win32kfull.sys .text:0x24a040, 0x1596d bytes
    // win32kfull.sys .text:0x247f70, 0x1659e bytes
    // win32kfull.sys .text:0x249f50, 0x1596d bytes
    //
    _q37(sdk::unknown_ptr) get_list_box_info;
    
    // [xxxGetMenuBarInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b400, 0x13864 bytes
    // win32kfull.sys .text:0xa6030, 0x1596d bytes
    // win32kfull.sys .text:0x99048, 0x1659e bytes
    // win32kfull.sys .text:0xa6ba0, 0x1596d bytes
    //
    _q38(sdk::unknown_ptr) get_menu_bar_info;
    
    // [xxxGetMenuItemRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13a998, 0x13864 bytes
    // win32kfull.sys .text:0x24f710, 0x1596d bytes
    // win32kfull.sys .text:0x24ceec, 0x1659e bytes
    // win32kfull.sys .text:0x24f620, 0x1596d bytes
    //
    _q39(sdk::unknown_ptr) get_menu_item_rect;
    
    // [xxxGetMinMaxTrackInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20133c, 0x13864 bytes
    // win32kfull.sys .text:0x20f58c, 0x1596d bytes
    // win32kfull.sys .text:0x20fce8, 0x1659e bytes
    // win32kfull.sys .text:0x20f3fc, 0x1596d bytes
    //
    _q40(sdk::unknown_ptr) get_min_max_track_info;
    
    // [xxxGetRenderData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e8904, 0x13864 bytes
    // win32kfull.sys .text:0x22002c, 0x1596d bytes
    // win32kfull.sys .text:0x21cd98, 0x1659e bytes
    // win32kfull.sys .text:0x21febc, 0x1596d bytes
    //
    _q41(sdk::unknown_ptr) get_render_data;
    
    // [xxxGetScrollBarInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3f02c, 0x13864 bytes
    // win32kfull.sys .text:0x68374, 0x1596d bytes
    // win32kfull.sys .text:0x454b0, 0x1659e bytes
    // win32kfull.sys .text:0x68ee4, 0x1596d bytes
    //
    _q42(sdk::unknown_ptr) get_scroll_bar_info;
    
    // [xxxGetScrollMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22d35c, 0x13864 bytes
    // win32kfull.sys .text:0x2457a8, 0x1596d bytes
    // win32kfull.sys .text:0x243970, 0x1659e bytes
    // win32kfull.sys .text:0x2456b8, 0x1596d bytes
    //
    _q43(sdk::unknown_ptr) get_scroll_menu;
    
    // [xxxGetSysMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b840, 0x13864 bytes
    // win32kfull.sys .text:0x1fb9c, 0x1596d bytes
    // win32kfull.sys .text:0x99af4, 0x1659e bytes
    // win32kfull.sys .text:0x1ffac, 0x1596d bytes
    //
    _q44(sdk::unknown_ptr) get_sys_menu;
    
    // [xxxGetSystemMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3aa5c, 0x13864 bytes
    // win32kfull.sys .text:0x1f964, 0x1596d bytes
    // win32kfull.sys .text:0x99c78, 0x1659e bytes
    // win32kfull.sys .text:0x1fd74, 0x1596d bytes
    //
    _q45(sdk::unknown_ptr) get_system_menu;
    
    // [xxxGetTitleBarInfoEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x26134, 0x13864 bytes
    // win32kfull.sys .text:0xd5970, 0x1596d bytes
    // win32kfull.sys .text:0xcfcb0, 0x1659e bytes
    // win32kfull.sys .text:0xd6630, 0x1596d bytes
    //
    _q46(sdk::unknown_ptr) get_title_bar_info_ex;
    
    // [xxxGetUpdateRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10a444, 0x13864 bytes
    // win32kfull.sys .text:0x4b564, 0x1596d bytes
    // win32kfull.sys .text:0x87930, 0x1659e bytes
    // win32kfull.sys .text:0x4b974, 0x1596d bytes
    //
    _q47(sdk::unknown_ptr) get_update_rect;
    
    // [xxxGetUpdateRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2105e4, 0x13864 bytes
    // win32kfull.sys .text:0x4bb70, 0x1596d bytes
    // win32kfull.sys .text:0x13c3c0, 0x1659e bytes
    // win32kfull.sys .text:0x4bf80, 0x1596d bytes
    //
    _q48(sdk::unknown_ptr) get_update_rgn;
    
    // [xxxGetWindowSmIcon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4c2b8, 0x13864 bytes
    // win32kfull.sys .text:0xd06f4, 0x1596d bytes
    // win32kfull.sys .text:0xb460c, 0x1659e bytes
    // win32kfull.sys .text:0xd13b4, 0x1596d bytes
    //
    _q49(sdk::unknown_ptr) get_window_sm_icon;
    
    // [xxxGetWindowText]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fdc30, 0x13864 bytes
    // win32kfull.sys .text:0x14887c, 0x1596d bytes
    // win32kfull.sys .text:0x64da0, 0x1659e bytes
    // win32kfull.sys .text:0x1497bc, 0x1596d bytes
    //
    _q50(sdk::unknown_ptr) get_window_text;
    
    // [xxxHandleDesktopMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d470, 0x13864 bytes
    // win32kfull.sys .text:0xbf9d8, 0x1596d bytes
    // win32kfull.sys .text:0x9dba4, 0x1659e bytes
    // win32kfull.sys .text:0xc0548, 0x1596d bytes
    //
    _q51(sdk::unknown_ptr) handle_desktop_messages;
    
    // [xxxHandleDestroyGhostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x142430, 0x13864 bytes
    // win32kfull.sys .text:0x8644, 0x1596d bytes
    // win32kfull.sys .text:0x143a44, 0x1659e bytes
    // win32kfull.sys .text:0x89f4, 0x1596d bytes
    //
    _q52(sdk::unknown_ptr) handle_destroy_ghost_window;
    
    // [xxxHandleHealthyThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138720, 0x13864 bytes
    // win32kfull.sys .text:0x3220, 0x1596d bytes
    // win32kfull.sys .text:0x137b40, 0x1659e bytes
    // win32kfull.sys .text:0x3220, 0x1596d bytes
    //
    _q53(sdk::unknown_ptr) handle_healthy_thread;
    
    // [xxxHandleHealthyWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1387c8, 0x13864 bytes
    // win32kfull.sys .text:0x32e0, 0x1596d bytes
    // win32kfull.sys .text:0x137c00, 0x1659e bytes
    // win32kfull.sys .text:0x32e0, 0x1596d bytes
    //
    _q54(sdk::unknown_ptr) handle_healthy_window;
    
    // [xxxHandleMenuMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13291c, 0x13864 bytes
    // win32kfull.sys .text:0x234998, 0x1596d bytes
    // win32kfull.sys .text:0x230080, 0x1659e bytes
    // win32kfull.sys .text:0x234858, 0x1596d bytes
    //
    _q55(sdk::unknown_ptr) handle_menu_messages;
    
    // [xxxHandleMenuPainting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x210898, 0x13864 bytes
    // win32kfull.sys .text:0x2365ec, 0x1596d bytes
    // win32kfull.sys .text:0x231d30, 0x1659e bytes
    // win32kfull.sys .text:0x2364ac, 0x1596d bytes
    //
    _q56(sdk::unknown_ptr) handle_menu_painting;
    
    // [xxxHandleNCMouseGuys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fbf54, 0x13864 bytes
    // win32kfull.sys .text:0x224724, 0x1596d bytes
    // win32kfull.sys .text:0x21fca4, 0x1659e bytes
    // win32kfull.sys .text:0x2245e4, 0x1596d bytes
    //
    _q57(sdk::unknown_ptr) handle_nc_mouse_guys;
    
    // [xxxHandleOwnerSwitch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23034, 0x13864 bytes
    // win32kfull.sys .text:0x116f14, 0x1596d bytes
    // win32kfull.sys .text:0x9b0cc, 0x1659e bytes
    // win32kfull.sys .text:0x117e44, 0x1596d bytes
    //
    _q58(sdk::unknown_ptr) handle_owner_switch;
    
    // [xxxHandleVolumeUpDownCombo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e32bc, 0x13864 bytes
    // win32kfull.sys .text:0x1eb43c, 0x1596d bytes
    // win32kfull.sys .text:0x1e8088, 0x1659e bytes
    // win32kfull.sys .text:0x1eb29c, 0x1596d bytes
    //
    _q59(sdk::unknown_ptr) handle_volume_up_down_combo;
    
    // [xxxHardErrorControl]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x228808, 0x13864 bytes
    // win32kfull.sys .text:0x2429bc, 0x1596d bytes
    // win32kfull.sys .text:0x23fa4c, 0x1659e bytes
    // win32kfull.sys .text:0x24286c, 0x1596d bytes
    //
    _q60(sdk::unknown_ptr) hard_error_control;
    
    // [xxxHelpLoop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x236c94, 0x13864 bytes
    // win32kfull.sys .text:0x250ccc, 0x1596d bytes
    // win32kfull.sys .text:0x24d380, 0x1659e bytes
    // win32kfull.sys .text:0x250bdc, 0x1596d bytes
    //
    _q61(sdk::unknown_ptr) help_loop;
    
    // [xxxHideGhostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138fd4, 0x13864 bytes
    // win32kfull.sys .text:0x3d04, 0x1596d bytes
    // win32kfull.sys .text:0x1385fc, 0x1659e bytes
    // win32kfull.sys .text:0x3d04, 0x1596d bytes
    //
    _q62(sdk::unknown_ptr) hide_ghost_window;
    
    // [xxxHiliteMenuItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23c8c8, 0x13864 bytes
    // win32kfull.sys .text:0x249ba4, 0x1596d bytes
    // win32kfull.sys .text:0x247c74, 0x1659e bytes
    // win32kfull.sys .text:0x249ab4, 0x1596d bytes
    //
    _q63(sdk::unknown_ptr) hilite_menu_item;
    
    // [xxxHkCallHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xae580, 0x13864 bytes
    // win32kfull.sys .text:0x604d0, 0x1596d bytes
    // win32kfull.sys .text:0x2880c, 0x1659e bytes
    // win32kfull.sys .text:0x61040, 0x1596d bytes
    //
    _q64(sdk::unknown_ptr) hk_call_hook;
    
    // [xxxHotTrackMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x229b3c, 0x13864 bytes
    // win32kfull.sys .text:0x243418, 0x1596d bytes
    // win32kfull.sys .text:0x241144, 0x1659e bytes
    // win32kfull.sys .text:0x2432c8, 0x1596d bytes
    //
    _q65(sdk::unknown_ptr) hot_track_menu;
    
    // [xxxICO_00]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4fe20, 0x13864 bytes
    // win32kbase.sys .text:0xb58d0, 0x243e0 bytes
    // win32kbase.sys .text:0xca950, 0x27ef0 bytes
    // win32kbase.sys .text:0xaef50, 0x243e0 bytes
    //
    _q66(sdk::unknown_ptr) ico_00;
    
    // [xxxImeWindowPosChanged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x99154, 0x13864 bytes
    // win32kfull.sys .text:0x8079c, 0x1596d bytes
    // win32kfull.sys .text:0x31430, 0x1659e bytes
    // win32kfull.sys .text:0x8130c, 0x1596d bytes
    //
    _q67(sdk::unknown_ptr) ime_window_pos_changed;
    
    // [xxxImmActivateAndUnloadThreadsLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dc780, 0x13864 bytes
    // win32kfull.sys .text:0x1e3c10, 0x1596d bytes
    // win32kfull.sys .text:0x1e0078, 0x1659e bytes
    // win32kfull.sys .text:0x1e3a70, 0x1596d bytes
    //
    _q68(sdk::unknown_ptr) imm_activate_and_unload_threads_layout;
    
    // [xxxImmActivateLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x127054, 0x13864 bytes
    // win32kfull.sys .text:0x1281b8, 0x1596d bytes
    // win32kfull.sys .text:0x1178e8, 0x1659e bytes
    // win32kfull.sys .text:0x1290f8, 0x1596d bytes
    //
    _q69(sdk::unknown_ptr) imm_activate_layout;
    
    // [xxxImmActivateThreadsLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dcb60, 0x13864 bytes
    // win32kfull.sys .text:0x1e3ff0, 0x1596d bytes
    // win32kfull.sys .text:0x1e045c, 0x1659e bytes
    // win32kfull.sys .text:0x1e3e50, 0x1596d bytes
    //
    _q70(sdk::unknown_ptr) imm_activate_threads_layout;
    
    // [xxxImmLoadLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121064, 0x13864 bytes
    // win32kfull.sys .text:0x120fdc, 0x1596d bytes
    // win32kfull.sys .text:0x1112cc, 0x1659e bytes
    // win32kfull.sys .text:0x121f1c, 0x1596d bytes
    //
    _q71(sdk::unknown_ptr) imm_load_layout;
    
    // [xxxImmProcessKey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4ca34, 0x13864 bytes
    // win32kfull.sys .text:0xfbf04, 0x1596d bytes
    // win32kfull.sys .text:0xf0f58, 0x1659e bytes
    // win32kfull.sys .text:0xfce34, 0x1596d bytes
    //
    _q72(sdk::unknown_ptr) imm_process_key;
    
    // [xxxImmUnloadLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dce18, 0x13864 bytes
    // win32kfull.sys .text:0x1e42c0, 0x1596d bytes
    // win32kfull.sys .text:0x1e0730, 0x1659e bytes
    // win32kfull.sys .text:0x1e4120, 0x1596d bytes
    //
    _q73(sdk::unknown_ptr) imm_unload_layout;
    
    // [xxxImmUnloadThreadsLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14020, 0x13864 bytes
    // win32kfull.sys .text:0x11d978, 0x1596d bytes
    // win32kfull.sys .text:0x10b728, 0x1659e bytes
    // win32kfull.sys .text:0x11e878, 0x1596d bytes
    //
    _q74(sdk::unknown_ptr) imm_unload_threads_layout;
    
    // [xxxInheritWindowMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa0798, 0x13864 bytes
    // win32kfull.sys .text:0x7ebb8, 0x1596d bytes
    // win32kfull.sys .text:0x59784, 0x1659e bytes
    // win32kfull.sys .text:0x7f728, 0x1596d bytes
    //
    _q75(sdk::unknown_ptr) inherit_window_monitor;
    
    // [xxxInitInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11574, 0x13864 bytes
    // win32kfull.sys .text:0xc28fc, 0x1596d bytes
    // win32kfull.sys .text:0xd6ab4, 0x1659e bytes
    // win32kfull.sys .text:0xc35bc, 0x1596d bytes
    //
    _q76(sdk::unknown_ptr) init_input;
    
    // [xxxInitProcessInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x35f88, 0x1eb80 bytes
    // win32kbase.sys .text:0xc87e4, 0x243e0 bytes
    // win32kbase.sys .text:0xda55c, 0x27ef0 bytes
    // win32kbase.sys .text:0x5ee6c, 0x243e0 bytes
    //
    _q77(sdk::unknown_ptr) init_process_info;
    
    // [xxxInitSendValidateMinMaxInfoEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x56fc8, 0x13864 bytes
    // win32kfull.sys .text:0x75804, 0x1596d bytes
    // win32kfull.sys .text:0xa2ed0, 0x1659e bytes
    // win32kfull.sys .text:0x76374, 0x1596d bytes
    //
    _q78(sdk::unknown_ptr) init_send_validate_min_max_info_ex;
    
    // [xxxInitTerminal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11318, 0x13864 bytes
    // win32kfull.sys .text:0xc2600, 0x1596d bytes
    // win32kfull.sys .text:0xd5d18, 0x1659e bytes
    // win32kfull.sys .text:0xc32c0, 0x1596d bytes
    //
    _q79(sdk::unknown_ptr) init_terminal;
    
    // [xxxInitWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2becc, 0x13864 bytes
    // win32kfull.sys .text:0xc2a6c, 0x1596d bytes
    // win32kfull.sys .text:0x9098c, 0x1659e bytes
    // win32kfull.sys .text:0xc372c, 0x1596d bytes
    //
    _q80(sdk::unknown_ptr) init_window_station;
    
    // [xxxInitializeMoveSizeData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20633c, 0x13864 bytes
    // win32kfull.sys .text:0x2128ec, 0x1596d bytes
    // win32kfull.sys .text:0x2100cc, 0x1659e bytes
    // win32kfull.sys .text:0x21275c, 0x1596d bytes
    //
    _q81(sdk::unknown_ptr) initialize_move_size_data;
    
    // [xxxInjectTouchInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d72d4, 0x13864 bytes
    // win32kfull.sys .text:0x1dd48c, 0x1596d bytes
    // win32kfull.sys .text:0x1d9a2c, 0x1659e bytes
    // win32kfull.sys .text:0x1dd32c, 0x1596d bytes
    //
    _q82(sdk::unknown_ptr) inject_touch_input;
    
    // [xxxInsertMenuItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4b2bc, 0x13864 bytes
    // win32kfull.sys .text:0xa17d8, 0x1596d bytes
    // win32kfull.sys .text:0x48650, 0x1659e bytes
    // win32kfull.sys .text:0xa2348, 0x1596d bytes
    //
    _q83(sdk::unknown_ptr) insert_menu_item;
    
    // [xxxInterSendMsgEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xafa30, 0x13864 bytes
    // win32kfull.sys .text:0x5e460, 0x1596d bytes
    // win32kfull.sys .text:0x26220, 0x1659e bytes
    // win32kfull.sys .text:0x5e880, 0x1596d bytes
    //
    _q84(sdk::unknown_ptr) inter_send_msg_ex;
    
    // [xxxInternalActivateKeyboardLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x17158, 0x13864 bytes
    // win32kbase.sys .text:0x85fa0, 0x243e0 bytes
    // win32kbase.sys .text:0xc850, 0x27ef0 bytes
    // win32kbase.sys .text:0x87da0, 0x243e0 bytes
    //
    _q85(sdk::unknown_ptr) internal_activate_keyboard_layout;
    
    // [xxxInternalDoPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa7e60, 0x13864 bytes
    // win32kfull.sys .text:0x582a0, 0x1596d bytes
    // win32kfull.sys .text:0x87d80, 0x1659e bytes
    // win32kfull.sys .text:0x586c0, 0x1596d bytes
    //
    _q86(sdk::unknown_ptr) internal_do_paint;
    
    // [xxxInternalDoSyncPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x99cb0, 0x13864 bytes
    // win32kfull.sys .text:0x801b0, 0x1596d bytes
    // win32kfull.sys .text:0x30d90, 0x1659e bytes
    // win32kfull.sys .text:0x80d20, 0x1596d bytes
    //
    _q87(sdk::unknown_ptr) internal_do_sync_paint;
    
    // [xxxInternalEnumWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x40e1c, 0x13864 bytes
    // win32kfull.sys .text:0x1d2c88, 0x1596d bytes
    // win32kfull.sys .text:0x1d0c64, 0x1659e bytes
    // win32kfull.sys .text:0x1d2b28, 0x1596d bytes
    //
    _q88(sdk::unknown_ptr) internal_enum_window;
    
    // [xxxInternalGetMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1ca78, 0x13864 bytes
    // win32kfull.sys .text:0xbfac4, 0x1596d bytes
    // win32kfull.sys .text:0x9dcdc, 0x1659e bytes
    // win32kfull.sys .text:0xc0634, 0x1596d bytes
    //
    _q89(sdk::unknown_ptr) internal_get_message;
    
    // [xxxInternalInvalidate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfacf0, 0x13864 bytes
    // win32kfull.sys .text:0x85160, 0x1596d bytes
    // win32kfull.sys .text:0x34a10, 0x1659e bytes
    // win32kfull.sys .text:0x85cd0, 0x1596d bytes
    //
    _q90(sdk::unknown_ptr) internal_invalidate;
    
    // [xxxInternalKeyEventDirect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4e544, 0x13864 bytes
    // win32kfull.sys .text:0xd4350, 0x1596d bytes
    // win32kfull.sys .text:0xa7c30, 0x1659e bytes
    // win32kfull.sys .text:0xd5010, 0x1596d bytes
    //
    _q91(sdk::unknown_ptr) internal_key_event_direct;
    
    // [xxxInternalPaintDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11ebcc, 0x13864 bytes
    // win32kfull.sys .text:0xdbc80, 0x1596d bytes
    // win32kfull.sys .text:0x109e6c, 0x1659e bytes
    // win32kfull.sys .text:0xdc940, 0x1596d bytes
    //
    _q92(sdk::unknown_ptr) internal_paint_desktop;
    
    // [xxxInternalToUnicode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x135d8, 0x13864 bytes
    // win32kbase.sys .text:0x86810, 0x243e0 bytes
    // win32kbase.sys .text:0xfbd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x88610, 0x243e0 bytes
    //
    _q93(sdk::unknown_ptr) internal_to_unicode;
    
    // [xxxInternalUnloadKeyboardLayout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13e20, 0x13864 bytes
    // win32kbase.sys .text:0x86cf0, 0x243e0 bytes
    // win32kbase.sys .text:0xb26c, 0x27ef0 bytes
    // win32kbase.sys .text:0x86d5c, 0x243e0 bytes
    //
    _q94(sdk::unknown_ptr) internal_unload_keyboard_layout;
    
    // [xxxInternalUpdateWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x41a18, 0x13864 bytes
    // win32kfull.sys .text:0x354f0, 0x1596d bytes
    // win32kfull.sys .text:0xfc3e8, 0x1659e bytes
    // win32kfull.sys .text:0x35900, 0x1596d bytes
    //
    _q95(sdk::unknown_ptr) internal_update_window;
    
    // [xxxInvalidateRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21073c, 0x13864 bytes
    // win32kfull.sys .text:0x235d5c, 0x1596d bytes
    // win32kfull.sys .text:0x231460, 0x1659e bytes
    // win32kfull.sys .text:0x235c1c, 0x1596d bytes
    //
    _q96(sdk::unknown_ptr) invalidate_rect;
    
    // [xxxInvalidateWallpaperWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfa9b0, 0x13864 bytes
    // win32kfull.sys .text:0x12849c, 0x1596d bytes
    // win32kfull.sys .text:0x904e8, 0x1659e bytes
    // win32kfull.sys .text:0x1293dc, 0x1596d bytes
    //
    _q97(sdk::unknown_ptr) invalidate_wallpaper_window;
    
    // [xxxIsDragging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140afc, 0x13864 bytes
    // win32kfull.sys .text:0x249868, 0x1596d bytes
    // win32kfull.sys .text:0x24793c, 0x1659e bytes
    // win32kfull.sys .text:0x249778, 0x1596d bytes
    //
    _q98(sdk::unknown_ptr) is_dragging;
    
    // [xxxKELocaleProcs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4fcec, 0x13864 bytes
    // win32kbase.sys .text:0xb26f4, 0x243e0 bytes
    // win32kbase.sys .text:0x10418, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8710, 0x243e0 bytes
    //
    _q99(sdk::unknown_ptr) ke_locale_procs;
    
    // [xxxKeyEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4eb60, 0x13864 bytes
    // win32kbase.sys .text:0x1bad80, 0x243e0 bytes
    // win32kbase.sys .text:0x202900, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b8b60, 0x243e0 bytes
    //
    _r00(sdk::unknown_ptr) key_event;
    
    // [xxxLoadHmodIndex]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x509fc, 0x13864 bytes
    // win32kfull.sys .text:0x1b034, 0x1596d bytes
    // win32kfull.sys .text:0x28dd4, 0x1659e bytes
    // win32kfull.sys .text:0x1b3e4, 0x1596d bytes
    //
    _r01(sdk::unknown_ptr) load_hmod_index;
    
    // [xxxLoadKeyboardLayoutEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x16894, 0x13864 bytes
    // win32kbase.sys .text:0x85178, 0x243e0 bytes
    // win32kbase.sys .text:0xb8c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x86f78, 0x243e0 bytes
    //
    _r02(sdk::unknown_ptr) load_keyboard_layout_ex;
    
    // [xxxLoadSomeStrings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2e458, 0x13864 bytes
    // win32kfull.sys .text:0x1e660, 0x1596d bytes
    // win32kfull.sys .text:0xcb63c, 0x1659e bytes
    // win32kfull.sys .text:0x1ea70, 0x1596d bytes
    //
    _r03(sdk::unknown_ptr) load_some_strings;
    
    // [xxxLoadSysDesktopMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1220d0, 0x13864 bytes
    // win32kfull.sys .text:0x11c874, 0x1596d bytes
    // win32kfull.sys .text:0x10c628, 0x1659e bytes
    // win32kfull.sys .text:0x11d7a4, 0x1596d bytes
    //
    _r04(sdk::unknown_ptr) load_sys_desktop_menu;
    
    // [xxxLoadSysMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4a9c4, 0x13864 bytes
    // win32kfull.sys .text:0x20cd0, 0x1596d bytes
    // win32kfull.sys .text:0x9880c, 0x1659e bytes
    // win32kfull.sys .text:0x210e0, 0x1596d bytes
    //
    _r05(sdk::unknown_ptr) load_sys_menu;
    
    // [xxxLoadUserApiHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa3da0, 0x13864 bytes
    // win32kfull.sys .text:0x1a3d0, 0x1596d bytes
    // win32kfull.sys .text:0x9bee4, 0x1659e bytes
    // win32kfull.sys .text:0x1a780, 0x1596d bytes
    //
    _r06(sdk::unknown_ptr) load_user_api_hook;
    
    // [xxxLW_LoadFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11660, 0x13864 bytes
    // win32kfull.sys .text:0x117a00, 0x1596d bytes
    // win32kfull.sys .text:0x66d40, 0x1659e bytes
    // win32kfull.sys .text:0x118930, 0x1596d bytes
    //
    _r07(sdk::unknown_ptr) lw_load_fonts;
    
    // [xxxManageKeyboardModifiers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d7d90, 0x13864 bytes
    // win32kbase.sys .text:0x1b4db8, 0x243e0 bytes
    // win32kbase.sys .text:0x1fc8d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b2b68, 0x243e0 bytes
    //
    _r08(sdk::unknown_ptr) manage_keyboard_modifiers;
    
    // [xxxMenuBarCompute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28d88, 0x13864 bytes
    // win32kfull.sys .text:0x20f0c, 0x1596d bytes
    // win32kfull.sys .text:0x98a48, 0x1659e bytes
    // win32kfull.sys .text:0x2131c, 0x1596d bytes
    //
    _r09(sdk::unknown_ptr) menu_bar_compute;
    
    // [xxxMenuBarDraw]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23a3c4, 0x13864 bytes
    // win32kfull.sys .text:0x24e03c, 0x1596d bytes
    // win32kfull.sys .text:0x24b918, 0x1659e bytes
    // win32kfull.sys .text:0x24df4c, 0x1596d bytes
    //
    _r10(sdk::unknown_ptr) menu_bar_draw;
    
    // [xxxMenuDraw]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x291ac, 0x13864 bytes
    // win32kfull.sys .text:0x4873c, 0x1596d bytes
    // win32kfull.sys .text:0xa7140, 0x1659e bytes
    // win32kfull.sys .text:0x48b4c, 0x1596d bytes
    //
    _r11(sdk::unknown_ptr) menu_draw;
    
    // [xxxMenuItemFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23539c, 0x13864 bytes
    // win32kfull.sys .text:0x24f9bc, 0x1596d bytes
    // win32kfull.sys .text:0x24d198, 0x1659e bytes
    // win32kfull.sys .text:0x24f8cc, 0x1596d bytes
    //
    _r12(sdk::unknown_ptr) menu_item_from_point;
    
    // [xxxMenuWindowProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12e280, 0x13864 bytes
    // win32kfull.sys .text:0x23c5c0, 0x1596d bytes
    // win32kfull.sys .text:0x236b80, 0x1659e bytes
    // win32kfull.sys .text:0x23c470, 0x1596d bytes
    //
    _r13(sdk::unknown_ptr) menu_window_proc;
    
    // [xxxMessageBeep]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x142680, 0x13864 bytes
    // win32kfull.sys .text:0x14bf70, 0x1596d bytes
    // win32kfull.sys .text:0x13ee04, 0x1659e bytes
    // win32kfull.sys .text:0x14ceb0, 0x1596d bytes
    //
    _r14(sdk::unknown_ptr) message_beep;
    
    // [xxxMessageEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x233934, 0x13864 bytes
    // win32kfull.sys .text:0x247b08, 0x1596d bytes
    // win32kfull.sys .text:0x245c48, 0x1659e bytes
    // win32kfull.sys .text:0x247a18, 0x1596d bytes
    //
    _r15(sdk::unknown_ptr) message_event;
    
    // [xxxMetricsRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d15c8, 0x13864 bytes
    // win32kfull.sys .text:0x1d8384, 0x1596d bytes
    // win32kfull.sys .text:0x1494d8, 0x1659e bytes
    // win32kfull.sys .text:0x1d8224, 0x1596d bytes
    //
    _r16(sdk::unknown_ptr) metrics_recalc;
    
    // [xxxMinMaximizeEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x264ec, 0x13864 bytes
    // win32kfull.sys .text:0xc8ca0, 0x1596d bytes
    // win32kfull.sys .text:0xce0c4, 0x1659e bytes
    // win32kfull.sys .text:0xc9960, 0x1596d bytes
    //
    _r17(sdk::unknown_ptr) min_maximize_ex;
    
    // [xxxMinimizeHungWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x229810, 0x13864 bytes
    // win32kfull.sys .text:0x23fce0, 0x1596d bytes
    // win32kfull.sys .text:0x240888, 0x1659e bytes
    // win32kfull.sys .text:0x23fb90, 0x1596d bytes
    //
    _r18(sdk::unknown_ptr) minimize_hung_window;
    
    // [xxxMKButtonClick]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6e40, 0x13864 bytes
    // win32kbase.sys .text:0x190a90, 0x243e0 bytes
    // win32kbase.sys .text:0x1d0bd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x18ee80, 0x243e0 bytes
    //
    _r19(sdk::unknown_ptr) mk_button_click;
    
    // [xxxMKButtonDoubleClick]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6e80, 0x13864 bytes
    // win32kbase.sys .text:0x190ad0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d0c10, 0x27ef0 bytes
    // win32kbase.sys .text:0x18eec0, 0x243e0 bytes
    //
    _r20(sdk::unknown_ptr) mk_button_double_click;
    
    // [xxxMKButtonSetState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e6ea0, 0x13864 bytes
    // win32kbase.sys .text:0x190af0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d0c30, 0x27ef0 bytes
    // win32kbase.sys .text:0x18eee0, 0x243e0 bytes
    //
    _r21(sdk::unknown_ptr) mk_button_set_state;
    
    // [xxxMKMouseMove]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7060, 0x13864 bytes
    // win32kbase.sys .text:0x190b80, 0x243e0 bytes
    // win32kbase.sys .text:0x1d0cc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x18ef70, 0x243e0 bytes
    //
    _r22(sdk::unknown_ptr) mk_mouse_move;
    
    // [xxxMKMoveAccelCursorTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7240, 0x13864 bytes
    // win32kbase.sys .text:0x1910f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d1110, 0x27ef0 bytes
    // win32kbase.sys .text:0x18f4e0, 0x243e0 bytes
    //
    _r23(sdk::unknown_ptr) mk_move_accel_cursor_timer;
    
    // [xxxMKMoveConstCursorTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7400, 0x13864 bytes
    // win32kbase.sys .text:0x191660, 0x243e0 bytes
    // win32kbase.sys .text:0x1d1540, 0x27ef0 bytes
    // win32kbase.sys .text:0x18fa50, 0x243e0 bytes
    //
    _r24(sdk::unknown_ptr) mk_move_const_cursor_timer;
    
    // [xxxMKToggleMouseKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7590, 0x13864 bytes
    // win32kbase.sys .text:0x191ba0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d1940, 0x27ef0 bytes
    // win32kbase.sys .text:0x18ff90, 0x243e0 bytes
    //
    _r25(sdk::unknown_ptr) mk_toggle_mouse_keys;
    
    // [xxxMNButtonDown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x130160, 0x13864 bytes
    // win32kfull.sys .text:0x237c8c, 0x1596d bytes
    // win32kfull.sys .text:0x232e6c, 0x1659e bytes
    // win32kfull.sys .text:0x237b4c, 0x1596d bytes
    //
    _r26(sdk::unknown_ptr) mn_button_down;
    
    // [xxxMNButtonUp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1300d8, 0x13864 bytes
    // win32kfull.sys .text:0x237d8c, 0x1596d bytes
    // win32kfull.sys .text:0x232f70, 0x1659e bytes
    // win32kfull.sys .text:0x237c4c, 0x1596d bytes
    //
    _r27(sdk::unknown_ptr) mn_button_up;
    
    // [xxxMNCanClose]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3e2e0, 0x13864 bytes
    // win32kfull.sys .text:0x655b0, 0x1596d bytes
    // win32kfull.sys .text:0x4a7b4, 0x1659e bytes
    // win32kfull.sys .text:0x66120, 0x1596d bytes
    //
    _r28(sdk::unknown_ptr) mn_can_close;
    
    // [xxxMNCancel]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12dbd8, 0x13864 bytes
    // win32kfull.sys .text:0x237ea4, 0x1596d bytes
    // win32kfull.sys .text:0x233088, 0x1659e bytes
    // win32kfull.sys .text:0x237d64, 0x1596d bytes
    //
    _r29(sdk::unknown_ptr) mn_cancel;
    
    // [xxxMNChar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x211414, 0x13864 bytes
    // win32kfull.sys .text:0x2382b4, 0x1596d bytes
    // win32kfull.sys .text:0x233378, 0x1659e bytes
    // win32kfull.sys .text:0x238174, 0x1596d bytes
    //
    _r30(sdk::unknown_ptr) mn_char;
    
    // [xxxMNCloseHierarchy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12dff0, 0x13864 bytes
    // win32kfull.sys .text:0x238730, 0x1596d bytes
    // win32kfull.sys .text:0x233780, 0x1659e bytes
    // win32kfull.sys .text:0x2385f0, 0x1596d bytes
    //
    _r31(sdk::unknown_ptr) mn_close_hierarchy;
    
    // [xxxMNCompute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aa10, 0x13864 bytes
    // win32kfull.sys .text:0x75fb8, 0x1596d bytes
    // win32kfull.sys .text:0xaa44c, 0x1659e bytes
    // win32kfull.sys .text:0x76b28, 0x1596d bytes
    //
    _r32(sdk::unknown_ptr) mn_compute;
    
    // [xxxMNDestroyHandler]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1312bc, 0x13864 bytes
    // win32kfull.sys .text:0x2366e8, 0x1596d bytes
    // win32kfull.sys .text:0x231df8, 0x1659e bytes
    // win32kfull.sys .text:0x2365a8, 0x1596d bytes
    //
    _r33(sdk::unknown_ptr) mn_destroy_handler;
    
    // [xxxMNDismissIfOffMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x211738, 0x13864 bytes
    // win32kfull.sys .text:0x238af4, 0x1596d bytes
    // win32kfull.sys .text:0x233b10, 0x1659e bytes
    // win32kfull.sys .text:0x2389b4, 0x1596d bytes
    //
    _r34(sdk::unknown_ptr) mn_dismiss_if_off_menu;
    
    // [xxxMNDismissWithNotify]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12db24, 0x13864 bytes
    // win32kfull.sys .text:0x236abc, 0x1596d bytes
    // win32kfull.sys .text:0x2320f4, 0x1659e bytes
    // win32kfull.sys .text:0x23697c, 0x1596d bytes
    //
    _r35(sdk::unknown_ptr) mn_dismiss_with_notify;
    
    // [xxxMNDoScroll]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1316c4, 0x13864 bytes
    // win32kfull.sys .text:0x236bc0, 0x1596d bytes
    // win32kfull.sys .text:0x2321f8, 0x1659e bytes
    // win32kfull.sys .text:0x236a80, 0x1596d bytes
    //
    _r36(sdk::unknown_ptr) mn_do_scroll;
    
    // [xxxMNDoubleClick]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21181c, 0x13864 bytes
    // win32kfull.sys .text:0x238d88, 0x1596d bytes
    // win32kfull.sys .text:0x233cd0, 0x1659e bytes
    // win32kfull.sys .text:0x238c48, 0x1596d bytes
    //
    _r37(sdk::unknown_ptr) mn_double_click;
    
    // [xxxMNDragOver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x235420, 0x13864 bytes
    // win32kfull.sys .text:0x24a704, 0x1596d bytes
    // win32kfull.sys .text:0x248508, 0x1659e bytes
    // win32kfull.sys .text:0x24a614, 0x1596d bytes
    //
    _r38(sdk::unknown_ptr) mn_drag_over;
    
    // [xxxMNDrawFullNC]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x239ec8, 0x13864 bytes
    // win32kfull.sys .text:0x24d56c, 0x1596d bytes
    // win32kfull.sys .text:0x24ae9c, 0x1659e bytes
    // win32kfull.sys .text:0x24d47c, 0x1596d bytes
    //
    _r39(sdk::unknown_ptr) mn_draw_full_nc;
    
    // [xxxMNEndMenuState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1338c0, 0x13864 bytes
    // win32kfull.sys .text:0x222c30, 0x1596d bytes
    // win32kfull.sys .text:0x21e8b0, 0x1659e bytes
    // win32kfull.sys .text:0x222af0, 0x1596d bytes
    //
    _r40(sdk::unknown_ptr) mn_end_menu_state;
    
    // [xxxMNEndMenuStateInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1324a0, 0x13864 bytes
    // win32kfull.sys .text:0x222e20, 0x1596d bytes
    // win32kfull.sys .text:0x21e9d0, 0x1659e bytes
    // win32kfull.sys .text:0x222ce0, 0x1596d bytes
    //
    _r41(sdk::unknown_ptr) mn_end_menu_state_internal;
    
    // [xxxMNFindChar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x237574, 0x13864 bytes
    // win32kfull.sys .text:0x251408, 0x1596d bytes
    // win32kfull.sys .text:0x250888, 0x1659e bytes
    // win32kfull.sys .text:0x251318, 0x1596d bytes
    //
    _r42(sdk::unknown_ptr) mn_find_char;
    
    // [xxxMNFindWindowFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1333c8, 0x13864 bytes
    // win32kfull.sys .text:0x2390e0, 0x1596d bytes
    // win32kfull.sys .text:0x233fd4, 0x1659e bytes
    // win32kfull.sys .text:0x238fa0, 0x1596d bytes
    //
    _r43(sdk::unknown_ptr) mn_find_window_from_point;
    
    // [xxxMNGetBitmapSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b0a8, 0x13864 bytes
    // win32kfull.sys .text:0x75680, 0x1596d bytes
    // win32kfull.sys .text:0xad994, 0x1659e bytes
    // win32kfull.sys .text:0x761f0, 0x1596d bytes
    //
    _r44(sdk::unknown_ptr) mn_get_bitmap_size;
    
    // [xxxMNHideNextHierarchy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x132480, 0x13864 bytes
    // win32kfull.sys .text:0x236c80, 0x1596d bytes
    // win32kfull.sys .text:0x2322b8, 0x1659e bytes
    // win32kfull.sys .text:0x236b40, 0x1596d bytes
    //
    _r45(sdk::unknown_ptr) mn_hide_next_hierarchy;
    
    // [xxxMNInvertItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x130710, 0x13864 bytes
    // win32kfull.sys .text:0x24d8a8, 0x1596d bytes
    // win32kfull.sys .text:0x24b1a8, 0x1659e bytes
    // win32kfull.sys .text:0x24d7b8, 0x1596d bytes
    //
    _r46(sdk::unknown_ptr) mn_invert_item;
    
    // [xxxMNItemSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2aefc, 0x13864 bytes
    // win32kfull.sys .text:0x754ac, 0x1596d bytes
    // win32kfull.sys .text:0xad818, 0x1659e bytes
    // win32kfull.sys .text:0x7601c, 0x1596d bytes
    //
    _r47(sdk::unknown_ptr) mn_item_size;
    
    // [xxxMNKeyDown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x211a24, 0x13864 bytes
    // win32kfull.sys .text:0x2394a8, 0x1596d bytes
    // win32kfull.sys .text:0x2343a0, 0x1659e bytes
    // win32kfull.sys .text:0x239368, 0x1596d bytes
    //
    _r48(sdk::unknown_ptr) mn_key_down;
    
    // [xxxMNKeyFilter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23767c, 0x13864 bytes
    // win32kfull.sys .text:0x25155c, 0x1596d bytes
    // win32kfull.sys .text:0x2509dc, 0x1659e bytes
    // win32kfull.sys .text:0x25146c, 0x1596d bytes
    //
    _r49(sdk::unknown_ptr) mn_key_filter;
    
    // [xxxMNLoop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1325a0, 0x13864 bytes
    // win32kfull.sys .text:0x235468, 0x1596d bytes
    // win32kfull.sys .text:0x2309b8, 0x1659e bytes
    // win32kfull.sys .text:0x235328, 0x1596d bytes
    //
    _r50(sdk::unknown_ptr) mn_loop;
    
    // [xxxMNMouseMove]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1336a8, 0x13864 bytes
    // win32kfull.sys .text:0x23a10c, 0x1596d bytes
    // win32kfull.sys .text:0x234cc0, 0x1659e bytes
    // win32kfull.sys .text:0x239fcc, 0x1596d bytes
    //
    _r51(sdk::unknown_ptr) mn_mouse_move;
    
    // [xxxMNOpenHierarchy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13170c, 0x13864 bytes
    // win32kfull.sys .text:0x23a4c4, 0x1596d bytes
    // win32kfull.sys .text:0x234f4c, 0x1659e bytes
    // win32kfull.sys .text:0x23a384, 0x1596d bytes
    //
    _r52(sdk::unknown_ptr) mn_open_hierarchy;
    
    // [xxxMNPositionHierarchy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x210940, 0x13864 bytes
    // win32kfull.sys .text:0x236d44, 0x1596d bytes
    // win32kfull.sys .text:0x23237c, 0x1659e bytes
    // win32kfull.sys .text:0x236c04, 0x1596d bytes
    //
    _r53(sdk::unknown_ptr) mn_position_hierarchy;
    
    // [xxxMNRecalcTabStrings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13e2fc, 0x13864 bytes
    // win32kfull.sys .text:0x24f3e8, 0x1596d bytes
    // win32kfull.sys .text:0x24cbcc, 0x1659e bytes
    // win32kfull.sys .text:0x24f2f8, 0x1596d bytes
    //
    _r54(sdk::unknown_ptr) mn_recalc_tab_strings;
    
    // [xxxMNRecomputeBarIfNeeded]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x235084, 0x13864 bytes
    // win32kfull.sys .text:0x24f89c, 0x1596d bytes
    // win32kfull.sys .text:0x24d078, 0x1659e bytes
    // win32kfull.sys .text:0x24f7ac, 0x1596d bytes
    //
    _r55(sdk::unknown_ptr) mn_recompute_bar_if_needed;
    
    // [xxxMNReleaseCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x131688, 0x13864 bytes
    // win32kfull.sys .text:0x23b51c, 0x1596d bytes
    // win32kfull.sys .text:0x235dec, 0x1659e bytes
    // win32kfull.sys .text:0x23b3cc, 0x1596d bytes
    //
    _r56(sdk::unknown_ptr) mn_release_capture;
    
    // [xxxMNRemoveMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1337e4, 0x13864 bytes
    // win32kfull.sys .text:0x234694, 0x1596d bytes
    // win32kfull.sys .text:0x22fe7c, 0x1659e bytes
    // win32kfull.sys .text:0x234554, 0x1596d bytes
    //
    _r57(sdk::unknown_ptr) mn_remove_message;
    
    // [xxxMNSelectItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1302c8, 0x13864 bytes
    // win32kfull.sys .text:0x23b59c, 0x1596d bytes
    // win32kfull.sys .text:0x235e6c, 0x1659e bytes
    // win32kfull.sys .text:0x23b44c, 0x1596d bytes
    //
    _r58(sdk::unknown_ptr) mn_select_item;
    
    // [xxxMNSetCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12cda0, 0x13864 bytes
    // win32kfull.sys .text:0x23be94, 0x1596d bytes
    // win32kfull.sys .text:0x2364c0, 0x1659e bytes
    // win32kfull.sys .text:0x23bd44, 0x1596d bytes
    //
    _r59(sdk::unknown_ptr) mn_set_capture;
    
    // [xxxMNSetGapState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23554c, 0x13864 bytes
    // win32kfull.sys .text:0x24a974, 0x1596d bytes
    // win32kfull.sys .text:0x2486b0, 0x1659e bytes
    // win32kfull.sys .text:0x24a884, 0x1596d bytes
    //
    _r60(sdk::unknown_ptr) mn_set_gap_state;
    
    // [xxxMNSetTop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212108, 0x13864 bytes
    // win32kfull.sys .text:0x23bf98, 0x1596d bytes
    // win32kfull.sys .text:0x23658c, 0x1659e bytes
    // win32kfull.sys .text:0x23be48, 0x1596d bytes
    //
    _r61(sdk::unknown_ptr) mn_set_top;
    
    // [xxxMNStartMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12cb7c, 0x13864 bytes
    // win32kfull.sys .text:0x22306c, 0x1596d bytes
    // win32kfull.sys .text:0x21eb4c, 0x1659e bytes
    // win32kfull.sys .text:0x222f2c, 0x1596d bytes
    //
    _r62(sdk::unknown_ptr) mn_start_menu;
    
    // [xxxMNStartMenuState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f6e94, 0x13864 bytes
    // win32kfull.sys .text:0x2234bc, 0x1596d bytes
    // win32kfull.sys .text:0x21ef74, 0x1659e bytes
    // win32kfull.sys .text:0x22337c, 0x1596d bytes
    //
    _r63(sdk::unknown_ptr) mn_start_menu_state;
    
    // [xxxMNSwitchToAlternateMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x212334, 0x13864 bytes
    // win32kfull.sys .text:0x23c314, 0x1596d bytes
    // win32kfull.sys .text:0x2368a0, 0x1659e bytes
    // win32kfull.sys .text:0x23c1c4, 0x1596d bytes
    //
    _r64(sdk::unknown_ptr) mn_switch_to_alternate_menu;
    
    // [xxxMNUpdateDraggingInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x235910, 0x13864 bytes
    // win32kfull.sys .text:0x24ac60, 0x1596d bytes
    // win32kfull.sys .text:0x2488cc, 0x1659e bytes
    // win32kfull.sys .text:0x24ab70, 0x1596d bytes
    //
    _r65(sdk::unknown_ptr) mn_update_dragging_info;
    
    // [xxxMNUpdateShownMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2360b0, 0x13864 bytes
    // win32kfull.sys .text:0x24a37c, 0x1596d bytes
    // win32kfull.sys .text:0x2481d4, 0x1659e bytes
    // win32kfull.sys .text:0x24a28c, 0x1596d bytes
    //
    _r66(sdk::unknown_ptr) mn_update_shown_menu;
    
    // [xxxMouseActivate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfb9d0, 0x13864 bytes
    // win32kfull.sys .text:0x77bb4, 0x1596d bytes
    // win32kfull.sys .text:0xbdf64, 0x1659e bytes
    // win32kfull.sys .text:0x78724, 0x1596d bytes
    //
    _r67(sdk::unknown_ptr) mouse_activate;
    
    // [xxxMouseEventDirect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d3cb8, 0x13864 bytes
    // win32kfull.sys .text:0xd3b28, 0x1596d bytes
    // win32kfull.sys .text:0xf14c4, 0x1659e bytes
    // win32kfull.sys .text:0xd47e8, 0x1596d bytes
    //
    _r68(sdk::unknown_ptr) mouse_event_direct;
    
    // [xxxMoveEventAbsolute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d4194, 0x13864 bytes
    // win32kfull.sys .text:0xd4d90, 0x1596d bytes
    // win32kfull.sys .text:0x8f830, 0x1659e bytes
    // win32kfull.sys .text:0xd5a50, 0x1596d bytes
    //
    _r69(sdk::unknown_ptr) move_event_absolute;
    
    // [xxxMoveSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x207110, 0x13864 bytes
    // win32kfull.sys .text:0x213354, 0x1596d bytes
    // win32kfull.sys .text:0x2115e4, 0x1659e bytes
    // win32kfull.sys .text:0x2131c4, 0x1596d bytes
    //
    _r70(sdk::unknown_ptr) move_size;
    
    // [xxxMoveSwitchWndHilite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f9e6c, 0x13864 bytes
    // win32kfull.sys .text:0x1f3d5c, 0x1596d bytes
    // win32kfull.sys .text:0x1f02fc, 0x1659e bytes
    // win32kfull.sys .text:0x1f3bbc, 0x1596d bytes
    //
    _r71(sdk::unknown_ptr) move_switch_wnd_hilite;
    
    // [xxxMoveThumb]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22d3e0, 0x13864 bytes
    // win32kfull.sys .text:0x2458a4, 0x1596d bytes
    // win32kfull.sys .text:0x243a6c, 0x1659e bytes
    // win32kfull.sys .text:0x2457b4, 0x1596d bytes
    //
    _r72(sdk::unknown_ptr) move_thumb;
    
    // [xxxMoveWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x105148, 0x13864 bytes
    // win32kfull.sys .text:0x100bfc, 0x1596d bytes
    // win32kfull.sys .text:0xae58c, 0x1659e bytes
    // win32kfull.sys .text:0x101b2c, 0x1596d bytes
    //
    _r73(sdk::unknown_ptr) move_window;
    
    // [xxxMS_FlushWigglies]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x201a94, 0x13864 bytes
    // win32kfull.sys .text:0x20f990, 0x1596d bytes
    // win32kfull.sys .text:0x210b10, 0x1659e bytes
    // win32kfull.sys .text:0x20f800, 0x1596d bytes
    //
    _r74(sdk::unknown_ptr) ms_flush_wigglies;
    
    // [xxxMS_TrackMove]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x201ad4, 0x13864 bytes
    // win32kfull.sys .text:0x20fa08, 0x1596d bytes
    // win32kfull.sys .text:0x210bc8, 0x1659e bytes
    // win32kfull.sys .text:0x20f878, 0x1596d bytes
    //
    _r75(sdk::unknown_ptr) ms_track_move;
    
    // [xxxNextWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fac18, 0x13864 bytes
    // win32kfull.sys .text:0x1f4bd0, 0x1596d bytes
    // win32kfull.sys .text:0x1f1140, 0x1659e bytes
    // win32kfull.sys .text:0x1f4a30, 0x1596d bytes
    //
    _r76(sdk::unknown_ptr) next_window;
    
    // [xxxNotifyCaptureChangeIfCaptured]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f428c, 0x13864 bytes
    // win32kfull.sys .text:0x1f2130, 0x1596d bytes
    // win32kfull.sys .text:0x1ee8f8, 0x1659e bytes
    // win32kfull.sys .text:0x1f1f90, 0x1596d bytes
    //
    _r77(sdk::unknown_ptr) notify_capture_change_if_captured;
    
    // [xxxNotifyImeShowStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dbfb8, 0x13864 bytes
    // win32kfull.sys .text:0x1e3474, 0x1596d bytes
    // win32kfull.sys .text:0x1e0844, 0x1659e bytes
    // win32kfull.sys .text:0x1e32d4, 0x1596d bytes
    //
    _r78(sdk::unknown_ptr) notify_ime_show_status;
    
    // [xxxNotifyIMEStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x107be8, 0x13864 bytes
    // win32kfull.sys .text:0x105a48, 0x1596d bytes
    // win32kfull.sys .text:0xfcd08, 0x1659e bytes
    // win32kfull.sys .text:0x106978, 0x1596d bytes
    //
    _r79(sdk::unknown_ptr) notify_ime_status;
    
    // [xxxNotifyMonitorChanged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3e338, 0x13864 bytes
    // win32kfull.sys .text:0x7e994, 0x1596d bytes
    // win32kfull.sys .text:0x5958c, 0x1659e bytes
    // win32kfull.sys .text:0x7f504, 0x1596d bytes
    //
    _r80(sdk::unknown_ptr) notify_monitor_changed;
    
    // [xxxNotifyShellOfWallpaperChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1206e4, 0x13864 bytes
    // win32kfull.sys .text:0x120bb0, 0x1596d bytes
    // win32kfull.sys .text:0x906a8, 0x1659e bytes
    // win32kfull.sys .text:0x121af0, 0x1596d bytes
    //
    _r81(sdk::unknown_ptr) notify_shell_of_wallpaper_change;
    
    // [xxxNotifyShellOfWindowSwap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x139350, 0x13864 bytes
    // win32kfull.sys .text:0x4190, 0x1596d bytes
    // win32kfull.sys .text:0x138a30, 0x1659e bytes
    // win32kfull.sys .text:0x4548, 0x1596d bytes
    //
    _r82(sdk::unknown_ptr) notify_shell_of_window_swap;
    
    // [xxxNumpadCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4fda0, 0x13864 bytes
    // win32kbase.sys .text:0xb3cf0, 0x243e0 bytes
    // win32kbase.sys .text:0xc7ad0, 0x27ef0 bytes
    // win32kbase.sys .text:0xac1f0, 0x243e0 bytes
    //
    _r83(sdk::unknown_ptr) numpad_cursor;
    
    // [xxxODI_ColorInit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x22710, 0x1eb80 bytes
    // win32kbase.sys .text:0x20350, 0x243e0 bytes
    // win32kbase.sys .text:0x81100, 0x27ef0 bytes
    // win32kbase.sys .text:0x68100, 0x243e0 bytes
    //
    _r84(sdk::unknown_ptr) odi_color_init;
    
    // [xxxOldMessageBeep]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f8ac4, 0x13864 bytes
    // win32kfull.sys .text:0x214c08, 0x1596d bytes
    // win32kfull.sys .text:0x2152a8, 0x1659e bytes
    // win32kfull.sys .text:0x214a78, 0x1596d bytes
    //
    _r85(sdk::unknown_ptr) old_message_beep;
    
    // [xxxOldNextWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fb250, 0x13864 bytes
    // win32kfull.sys .text:0x1f53fc, 0x1596d bytes
    // win32kfull.sys .text:0x1f18d0, 0x1659e bytes
    // win32kfull.sys .text:0x1f525c, 0x1596d bytes
    //
    _r86(sdk::unknown_ptr) old_next_window;
    
    // [xxxPaintIconsInSwitchWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fa044, 0x13864 bytes
    // win32kfull.sys .text:0x1f3f40, 0x1596d bytes
    // win32kfull.sys .text:0x1f04e0, 0x1659e bytes
    // win32kfull.sys .text:0x1f3da0, 0x1596d bytes
    //
    _r87(sdk::unknown_ptr) paint_icons_in_switch_window;
    
    // [xxxPaintMenuBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ba78, 0x13864 bytes
    // win32kfull.sys .text:0x205a0, 0x1596d bytes
    // win32kfull.sys .text:0xffffc, 0x1659e bytes
    // win32kfull.sys .text:0x209b0, 0x1596d bytes
    //
    _r88(sdk::unknown_ptr) paint_menu_bar;
    
    // [xxxPaintRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x106af4, 0x13864 bytes
    // win32kfull.sys .text:0x48400, 0x1596d bytes
    // win32kfull.sys .text:0xc564, 0x1659e bytes
    // win32kfull.sys .text:0x48810, 0x1596d bytes
    //
    _r89(sdk::unknown_ptr) paint_rect;
    
    // [xxxPaintSwitchWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fa438, 0x13864 bytes
    // win32kfull.sys .text:0x1f4384, 0x1596d bytes
    // win32kfull.sys .text:0x1f08fc, 0x1659e bytes
    // win32kfull.sys .text:0x1f41e4, 0x1596d bytes
    //
    _r90(sdk::unknown_ptr) paint_switch_window;
    
    // [xxxPerformTargetingWithinPwnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x225cbc, 0x13864 bytes
    // win32kfull.sys .text:0x21829c, 0x1596d bytes
    // win32kfull.sys .text:0x20a02c, 0x1659e bytes
    // win32kfull.sys .text:0x21810c, 0x1596d bytes
    //
    _r91(sdk::unknown_ptr) perform_targeting_within_pwnd;
    
    // [xxxPointerCallHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb18c, 0x13864 bytes
    // win32kfull.sys .text:0x1f0cec, 0x1596d bytes
    // win32kfull.sys .text:0x1ed4e8, 0x1659e bytes
    // win32kfull.sys .text:0x1f0b4c, 0x1596d bytes
    //
    _r92(sdk::unknown_ptr) pointer_call_hook;
    
    // [xxxPointerInsideNCTargeting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x224130, 0x13864 bytes
    // win32kfull.sys .text:0x2165b0, 0x1596d bytes
    // win32kfull.sys .text:0x207dc4, 0x1659e bytes
    // win32kfull.sys .text:0x216420, 0x1596d bytes
    //
    _r93(sdk::unknown_ptr) pointer_inside_nc_targeting;
    
    // [xxxPointerWindowHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x225ea8, 0x13864 bytes
    // win32kfull.sys .text:0x2187e4, 0x1596d bytes
    // win32kfull.sys .text:0x208194, 0x1659e bytes
    // win32kfull.sys .text:0x218654, 0x1596d bytes
    //
    _r94(sdk::unknown_ptr) pointer_window_hit_test;
    
    // [xxxPoke]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e492c, 0x13864 bytes
    // win32kfull.sys .text:0x21ccec, 0x1596d bytes
    // win32kfull.sys .text:0x219690, 0x1659e bytes
    // win32kfull.sys .text:0x21cb5c, 0x1596d bytes
    //
    _r95(sdk::unknown_ptr) poke;
    
    // [xxxPokeAck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4a90, 0x13864 bytes
    // win32kfull.sys .text:0x21ce90, 0x1596d bytes
    // win32kfull.sys .text:0x219870, 0x1659e bytes
    // win32kfull.sys .text:0x21cd00, 0x1596d bytes
    //
    _r96(sdk::unknown_ptr) poke_ack;
    
    // [xxxPollAndWaitForSingleObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf7bec, 0x13864 bytes
    // win32kfull.sys .text:0x11f154, 0x1596d bytes
    // win32kfull.sys .text:0x107cf0, 0x1659e bytes
    // win32kfull.sys .text:0x120054, 0x1596d bytes
    //
    _r97(sdk::unknown_ptr) poll_and_wait_for_single_object;
    
    // [xxxPrintWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e0e84, 0x13864 bytes
    // win32kfull.sys .text:0x1e88f0, 0x1596d bytes
    // win32kfull.sys .text:0x1e4fbc, 0x1659e bytes
    // win32kfull.sys .text:0x1e8750, 0x1596d bytes
    //
    _r98(sdk::unknown_ptr) print_window;
    
    // [xxxProcessEventMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb2828, 0x13864 bytes
    // win32kfull.sys .text:0xb1eb8, 0x1596d bytes
    // win32kfull.sys .text:0x30770, 0x1659e bytes
    // win32kfull.sys .text:0xb2a28, 0x1596d bytes
    //
    _r99(sdk::unknown_ptr) process_event_message;
    
    // [xxxProcessHidInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1cf7a0, 0x13864 bytes
    // win32kfull.sys .text:0x1d6790, 0x1596d bytes
    // win32kfull.sys .text:0x1d41a0, 0x1659e bytes
    // win32kfull.sys .text:0x1d6630, 0x1596d bytes
    //
    _s00(sdk::unknown_ptr) process_hid_input;
    
    // [xxxProcessKeyEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4e7f4, 0x13864 bytes
    // win32kbase.sys .text:0x1badd0, 0x243e0 bytes
    // win32kbase.sys .text:0x105b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b8bb0, 0x243e0 bytes
    //
    _s01(sdk::unknown_ptr) process_key_event;
    
    // [xxxProcessMousePromotionQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23481c, 0x13864 bytes
    // win32kfull.sys .text:0x219ebc, 0x1596d bytes
    // win32kfull.sys .text:0x216a48, 0x1659e bytes
    // win32kfull.sys .text:0x219d2c, 0x1596d bytes
    //
    _s02(sdk::unknown_ptr) process_mouse_promotion_queue;
    
    // [xxxProcessNotifyWinEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xaf1a0, 0x13864 bytes
    // win32kfull.sys .text:0x55bf0, 0x1596d bytes
    // win32kfull.sys .text:0x53ab0, 0x1659e bytes
    // win32kfull.sys .text:0x56010, 0x1596d bytes
    //
    _s03(sdk::unknown_ptr) process_notify_win_event;
    
    // [xxxProcessSetWindowPosEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117088, 0x13864 bytes
    // win32kfull.sys .text:0x116210, 0x1596d bytes
    // win32kfull.sys .text:0xc24c4, 0x1659e bytes
    // win32kfull.sys .text:0x117140, 0x1596d bytes
    //
    _s04(sdk::unknown_ptr) process_set_window_pos_event;
    
    // [xxxPromotePointerToMouse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1da464, 0x13864 bytes
    // win32kfull.sys .text:0x1f0ec4, 0x1596d bytes
    // win32kfull.sys .text:0x1ed6c8, 0x1659e bytes
    // win32kfull.sys .text:0x1f0d24, 0x1596d bytes
    //
    _s05(sdk::unknown_ptr) promote_pointer_to_mouse;
    
    // [xxxPSMGetTextExtent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x37df4, 0x13864 bytes
    // win32kfull.sys .text:0x2612f4, 0x1596d bytes
    // win32kfull.sys .text:0x260414, 0x1659e bytes
    // win32kfull.sys .text:0x261204, 0x1596d bytes
    //
    _s06(sdk::unknown_ptr) psm_get_text_extent;
    
    // [xxxPSMTextOut]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e634, 0x13864 bytes
    // win32kfull.sys .text:0x253b9c, 0x1596d bytes
    // win32kfull.sys .text:0x253038, 0x1659e bytes
    // win32kfull.sys .text:0x253aac, 0x1596d bytes
    //
    _s07(sdk::unknown_ptr) psm_text_out;
    
    // [xxxQueryDropObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x236474, 0x13864 bytes
    // win32kfull.sys .text:0x248f98, 0x1596d bytes
    // win32kfull.sys .text:0x2470ec, 0x1659e bytes
    // win32kfull.sys .text:0x248ea8, 0x1596d bytes
    //
    _s08(sdk::unknown_ptr) query_drop_object;
    
    // [xxxQueryInformationThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x18d28, 0x13864 bytes
    // win32kfull.sys .text:0xbe8e8, 0x1596d bytes
    // win32kfull.sys .text:0xfb7d4, 0x1659e bytes
    // win32kfull.sys .text:0xbf458, 0x1596d bytes
    //
    _s09(sdk::unknown_ptr) query_information_thread;
    
    // [xxxQueryLegacyActivation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f4964, 0x13864 bytes
    // win32kfull.sys .text:0x1f2604, 0x1596d bytes
    // win32kfull.sys .text:0x1eecc4, 0x1659e bytes
    // win32kfull.sys .text:0x1f2464, 0x1596d bytes
    //
    _s10(sdk::unknown_ptr) query_legacy_activation;
    
    // [xxxQueryShellForSizeCooperation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2033e8, 0x13864 bytes
    // win32kfull.sys .text:0x2105b4, 0x1596d bytes
    // win32kfull.sys .text:0x211eb8, 0x1659e bytes
    // win32kfull.sys .text:0x210424, 0x1596d bytes
    //
    _s11(sdk::unknown_ptr) query_shell_for_size_cooperation;
    
    // [xxxReadPostMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xad2e0, 0x13864 bytes
    // win32kfull.sys .text:0x5baf0, 0x1596d bytes
    // win32kfull.sys .text:0x2bcd0, 0x1659e bytes
    // win32kfull.sys .text:0x5bf10, 0x1596d bytes
    //
    _s12(sdk::unknown_ptr) read_post_message;
    
    // [xxxRealDefWindowProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa88f4, 0x13864 bytes
    // win32kfull.sys .text:0xab8c8, 0x1596d bytes
    // win32kfull.sys .text:0x49c48, 0x1659e bytes
    // win32kfull.sys .text:0xac438, 0x1596d bytes
    //
    _s13(sdk::unknown_ptr) real_def_window_proc;
    
    // [xxxRealDrawMenuItem]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23a998, 0x13864 bytes
    // win32kfull.sys .text:0x24e3cc, 0x1596d bytes
    // win32kfull.sys .text:0x24bccc, 0x1659e bytes
    // win32kfull.sys .text:0x24e2dc, 0x1596d bytes
    //
    _s14(sdk::unknown_ptr) real_draw_menu_item;
    
    // [xxxRealInternalGetMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xab030, 0x13864 bytes
    // win32kfull.sys .text:0x59ee0, 0x1596d bytes
    // win32kfull.sys .text:0x2a1a0, 0x1659e bytes
    // win32kfull.sys .text:0x5a300, 0x1596d bytes
    //
    _s15(sdk::unknown_ptr) real_internal_get_message;
    
    // [xxxRealSleepThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xacbf0, 0x13864 bytes
    // win32kfull.sys .text:0x5c720, 0x1596d bytes
    // win32kfull.sys .text:0x27a80, 0x1659e bytes
    // win32kfull.sys .text:0x5cb40, 0x1596d bytes
    //
    _s16(sdk::unknown_ptr) real_sleep_thread;
    
    // [xxxRealizeDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e1e54, 0x13864 bytes
    // win32kfull.sys .text:0x1ea1d8, 0x1596d bytes
    // win32kfull.sys .text:0x1e6968, 0x1659e bytes
    // win32kfull.sys .text:0x1ea038, 0x1596d bytes
    //
    _s17(sdk::unknown_ptr) realize_desktop;
    
    // [xxxRealizePalette]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1364d0, 0x13864 bytes
    // win32kfull.sys .text:0xd22f0, 0x1596d bytes
    // win32kfull.sys .text:0x13a410, 0x1659e bytes
    // win32kfull.sys .text:0xd2fb0, 0x1596d bytes
    //
    _s18(sdk::unknown_ptr) realize_palette;
    
    // [xxxReceiveMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa97e0, 0x13864 bytes
    // win32kfull.sys .text:0x5ce40, 0x1596d bytes
    // win32kfull.sys .text:0x2cd80, 0x1659e bytes
    // win32kfull.sys .text:0x5d260, 0x1596d bytes
    //
    _s19(sdk::unknown_ptr) receive_message;
    
    // [xxxReceiverDied]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf9218, 0x13864 bytes
    // win32kfull.sys .text:0xc0ecc, 0x1596d bytes
    // win32kfull.sys .text:0x86890, 0x1659e bytes
    // win32kfull.sys .text:0xc1a3c, 0x1596d bytes
    //
    _s20(sdk::unknown_ptr) receiver_died;
    
    // [xxxRecreateSmallIcons]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22b924, 0x13864 bytes
    // win32kfull.sys .text:0x243eec, 0x1596d bytes
    // win32kfull.sys .text:0x149cc8, 0x1659e bytes
    // win32kfull.sys .text:0x243dbc, 0x1596d bytes
    //
    _s21(sdk::unknown_ptr) recreate_small_icons;
    
    // [xxxRedrawForSetLPITEMInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4bbc4, 0x13864 bytes
    // win32kfull.sys .text:0x21984, 0x1596d bytes
    // win32kfull.sys .text:0x99770, 0x1659e bytes
    // win32kfull.sys .text:0x21d94, 0x1596d bytes
    //
    _s22(sdk::unknown_ptr) redraw_for_set_lpitem_info;
    
    // [xxxRedrawFrameAndHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140a90, 0x13864 bytes
    // win32kfull.sys .text:0x14fe30, 0x1596d bytes
    // win32kfull.sys .text:0x142c04, 0x1659e bytes
    // win32kfull.sys .text:0x150d70, 0x1596d bytes
    //
    _s23(sdk::unknown_ptr) redraw_frame_and_hook;
    
    // [xxxRedrawHungWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xde4f8, 0x13864 bytes
    // win32kfull.sys .text:0x241e24, 0x1596d bytes
    // win32kfull.sys .text:0x143b90, 0x1659e bytes
    // win32kfull.sys .text:0x241cd4, 0x1596d bytes
    //
    _s24(sdk::unknown_ptr) redraw_hung_window;
    
    // [xxxRedrawTitle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x50600, 0x13864 bytes
    // win32kfull.sys .text:0x4cac0, 0x1596d bytes
    // win32kfull.sys .text:0x9c9d0, 0x1659e bytes
    // win32kfull.sys .text:0x4ced0, 0x1596d bytes
    //
    _s25(sdk::unknown_ptr) redraw_title;
    
    // [xxxRedrawWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa6100, 0x13864 bytes
    // win32kfull.sys .text:0x84ec4, 0x1596d bytes
    // win32kfull.sys .text:0x347dc, 0x1659e bytes
    // win32kfull.sys .text:0x85a34, 0x1596d bytes
    //
    _s26(sdk::unknown_ptr) redraw_window;
    
    // [xxxRefreshDisplayOrientation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x144710, 0x13864 bytes
    // win32kfull.sys .text:0x152500, 0x1596d bytes
    // win32kfull.sys .text:0x146950, 0x1659e bytes
    // win32kfull.sys .text:0x153440, 0x1596d bytes
    //
    _s27(sdk::unknown_ptr) refresh_display_orientation;
    
    // [xxxRegisterForDeviceClassNotifications]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11ed8c, 0x13864 bytes
    // win32kfull.sys .text:0x83f0, 0x1596d bytes
    // win32kfull.sys .text:0x4660, 0x1659e bytes
    // win32kfull.sys .text:0x87a0, 0x1596d bytes
    //
    _s28(sdk::unknown_ptr) register_for_device_class_notifications;
    
    // [xxxRegisterGhostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138b10, 0x13864 bytes
    // win32kfull.sys .text:0x3770, 0x1596d bytes
    // win32kfull.sys .text:0x1380b4, 0x1659e bytes
    // win32kfull.sys .text:0x3770, 0x1596d bytes
    //
    _s29(sdk::unknown_ptr) register_ghost_window;
    
    // [xxxRegisterSiblingFrostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f0ba0, 0x13864 bytes
    // win32kfull.sys .text:0x20adc0, 0x1596d bytes
    // win32kfull.sys .text:0x214230, 0x1659e bytes
    // win32kfull.sys .text:0x20ac30, 0x1596d bytes
    //
    _s30(sdk::unknown_ptr) register_sibling_frost_window;
    
    // [xxxRegisterUserHungAppHandlers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x229d60, 0x13864 bytes
    // win32kfull.sys .text:0x243ca0, 0x1596d bytes
    // win32kfull.sys .text:0x241968, 0x1659e bytes
    // win32kfull.sys .text:0x243b70, 0x1596d bytes
    //
    _s31(sdk::unknown_ptr) register_user_hung_app_handlers;
    
    // [xxxReleaseCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x222d0, 0x13864 bytes
    // win32kfull.sys .text:0x32940, 0x1596d bytes
    // win32kfull.sys .text:0xa665c, 0x1659e bytes
    // win32kfull.sys .text:0x32d50, 0x1596d bytes
    //
    _s32(sdk::unknown_ptr) release_capture;
    
    // [xxxRemoteConnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb8a20, 0x1eb80 bytes
    // win32kbase.sys .text:0x2a5e0, 0x243e0 bytes
    // win32kbase.sys .text:0x6d160, 0x27ef0 bytes
    // win32kbase.sys .text:0x89a40, 0x243e0 bytes
    //
    _s33(sdk::unknown_ptr) remote_connect;
    
    // [xxxRemoteConsoleShadowStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fc9f0, 0x13864 bytes
    // win32kfull.sys .text:0x227430, 0x1596d bytes
    // win32kfull.sys .text:0x222cd0, 0x1659e bytes
    // win32kfull.sys .text:0x2272f0, 0x1596d bytes
    //
    _s34(sdk::unknown_ptr) remote_console_shadow_start;
    
    // [xxxRemoteConsoleShadowStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fce50, 0x13864 bytes
    // win32kfull.sys .text:0x227950, 0x1596d bytes
    // win32kfull.sys .text:0x223264, 0x1659e bytes
    // win32kfull.sys .text:0x227810, 0x1596d bytes
    //
    _s35(sdk::unknown_ptr) remote_console_shadow_stop;
    
    // [xxxRemoteDisconnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x112530, 0x13864 bytes
    // win32kfull.sys .text:0x11ba10, 0x1596d bytes
    // win32kfull.sys .text:0x118b88, 0x1659e bytes
    // win32kfull.sys .text:0x11c940, 0x1596d bytes
    //
    _s36(sdk::unknown_ptr) remote_disconnect;
    
    // [xxxRemoteNotify]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124ce0, 0x13864 bytes
    // win32kfull.sys .text:0x1259e0, 0x1596d bytes
    // win32kfull.sys .text:0x113720, 0x1659e bytes
    // win32kfull.sys .text:0x126920, 0x1596d bytes
    //
    _s37(sdk::unknown_ptr) remote_notify;
    
    // [xxxRemotePassthruEnable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fd070, 0x13864 bytes
    // win32kfull.sys .text:0x227c40, 0x1596d bytes
    // win32kfull.sys .text:0x2235d0, 0x1659e bytes
    // win32kfull.sys .text:0x227b00, 0x1596d bytes
    //
    _s38(sdk::unknown_ptr) remote_passthru_enable;
    
    // [xxxRemoteReconnect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x143080, 0x13864 bytes
    // win32kfull.sys .text:0x1506a0, 0x1596d bytes
    // win32kfull.sys .text:0x1444a0, 0x1659e bytes
    // win32kfull.sys .text:0x1515e0, 0x1596d bytes
    //
    _s39(sdk::unknown_ptr) remote_reconnect;
    
    // [xxxRemoteSetDisconnectDisplayMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x112fc0, 0x13864 bytes
    // win32kfull.sys .text:0x11c2d4, 0x1596d bytes
    // win32kfull.sys .text:0x11966c, 0x1659e bytes
    // win32kfull.sys .text:0x11d204, 0x1596d bytes
    //
    _s40(sdk::unknown_ptr) remote_set_disconnect_display_mode;
    
    // [xxxRemoteShadowSetup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fd180, 0x13864 bytes
    // win32kfull.sys .text:0x227db0, 0x1596d bytes
    // win32kfull.sys .text:0x223780, 0x1659e bytes
    // win32kfull.sys .text:0x227c70, 0x1596d bytes
    //
    _s41(sdk::unknown_ptr) remote_shadow_setup;
    
    // [xxxRemoteShadowStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fd1d0, 0x13864 bytes
    // win32kfull.sys .text:0x227e30, 0x1596d bytes
    // win32kfull.sys .text:0x223844, 0x1659e bytes
    // win32kfull.sys .text:0x227cf0, 0x1596d bytes
    //
    _s42(sdk::unknown_ptr) remote_shadow_stop;
    
    // [xxxRemoteStopScreenUpdates]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x112ac8, 0x13864 bytes
    // win32kfull.sys .text:0x11bde0, 0x1596d bytes
    // win32kfull.sys .text:0x118f50, 0x1659e bytes
    // win32kfull.sys .text:0x11cd10, 0x1596d bytes
    //
    _s43(sdk::unknown_ptr) remote_stop_screen_updates;
    
    // [xxxRemoveDeleteMenuHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x115068, 0x13864 bytes
    // win32kfull.sys .text:0x21584, 0x1596d bytes
    // win32kfull.sys .text:0x993e0, 0x1659e bytes
    // win32kfull.sys .text:0x21994, 0x1596d bytes
    //
    _s44(sdk::unknown_ptr) remove_delete_menu_helper;
    
    // [xxxRemoveFullScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x6079c, 0x13864 bytes
    // win32kfull.sys .text:0x9f10c, 0x1596d bytes
    // win32kfull.sys .text:0x3f698, 0x1659e bytes
    // win32kfull.sys .text:0x9fc7c, 0x1596d bytes
    //
    _s45(sdk::unknown_ptr) remove_full_screen;
    
    // [xxxRemoveShadow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x608a0, 0x13864 bytes
    // win32kfull.sys .text:0x9ec48, 0x1596d bytes
    // win32kfull.sys .text:0x3f5f8, 0x1659e bytes
    // win32kfull.sys .text:0x9f7b8, 0x1596d bytes
    //
    _s46(sdk::unknown_ptr) remove_shadow;
    
    // [xxxRequestAck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4b60, 0x13864 bytes
    // win32kfull.sys .text:0x21d000, 0x1596d bytes
    // win32kfull.sys .text:0x219aa0, 0x1659e bytes
    // win32kfull.sys .text:0x21ce70, 0x1596d bytes
    //
    _s47(sdk::unknown_ptr) request_ack;
    
    // [xxxResetDisplayDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe340, 0x1eb80 bytes
    // win32kbase.sys .text:0x870b0, 0x243e0 bytes
    // win32kbase.sys .text:0x67f00, 0x27ef0 bytes
    // win32kbase.sys .text:0x53180, 0x243e0 bytes
    //
    _s48(sdk::unknown_ptr) reset_display_device;
    
    // [xxxResetTooltip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28984, 0x13864 bytes
    // win32kfull.sys .text:0xd97b8, 0x1596d bytes
    // win32kfull.sys .text:0x9206c, 0x1659e bytes
    // win32kfull.sys .text:0xda478, 0x1596d bytes
    //
    _s49(sdk::unknown_ptr) reset_tooltip;
    
    // [xxxResolveDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149a0, 0x13864 bytes
    // win32kfull.sys .text:0xc6240, 0x1596d bytes
    // win32kfull.sys .text:0xd26d0, 0x1659e bytes
    // win32kfull.sys .text:0xc6f00, 0x1596d bytes
    //
    _s50(sdk::unknown_ptr) resolve_desktop;
    
    // [xxxResolveDesktopForWOW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e1e8c, 0x13864 bytes
    // win32kfull.sys .text:0x1ea224, 0x1596d bytes
    // win32kfull.sys .text:0x1e69b4, 0x1659e bytes
    // win32kfull.sys .text:0x1ea084, 0x1596d bytes
    //
    _s51(sdk::unknown_ptr) resolve_desktop_for_wow;
    
    // [xxxRestoreCsrssThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c060, 0x13864 bytes
    // win32kfull.sys .text:0xbf030, 0x1596d bytes
    // win32kfull.sys .text:0x9c210, 0x1659e bytes
    // win32kfull.sys .text:0xbfba0, 0x1596d bytes
    //
    _s52(sdk::unknown_ptr) restore_csrss_thread_desktop;
    
    // [xxxRetrievePointerInputMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1da4b8, 0x13864 bytes
    // win32kfull.sys .text:0x1f0f28, 0x1596d bytes
    // win32kfull.sys .text:0x1ed728, 0x1659e bytes
    // win32kfull.sys .text:0x1f0d88, 0x1596d bytes
    //
    _s53(sdk::unknown_ptr) retrieve_pointer_input_message;
    
    // [xxxSafeLoadKeyboardLayoutEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x167bc, 0x13864 bytes
    // win32kbase.sys .text:0x85090, 0x243e0 bytes
    // win32kbase.sys .text:0xb7e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x86e90, 0x243e0 bytes
    //
    _s54(sdk::unknown_ptr) safe_load_keyboard_layout_ex;
    
    // [xxxSBTrackInit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22eb50, 0x13864 bytes
    // win32kfull.sys .text:0x246670, 0x1596d bytes
    // win32kfull.sys .text:0x244840, 0x1659e bytes
    // win32kfull.sys .text:0x246580, 0x1596d bytes
    //
    _s55(sdk::unknown_ptr) sb_track_init;
    
    // [xxxSBTrackLoop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22d59c, 0x13864 bytes
    // win32kfull.sys .text:0x245a94, 0x1596d bytes
    // win32kfull.sys .text:0x243c5c, 0x1659e bytes
    // win32kfull.sys .text:0x2459a4, 0x1596d bytes
    //
    _s56(sdk::unknown_ptr) sb_track_loop;
    
    // [xxxSBWndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22efc0, 0x13864 bytes
    // win32kfull.sys .text:0x246b50, 0x1596d bytes
    // win32kfull.sys .text:0x244d80, 0x1659e bytes
    // win32kfull.sys .text:0x246a60, 0x1596d bytes
    //
    _s57(sdk::unknown_ptr) sb_wnd_proc;
    
    // [xxxScanSysQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb2de0, 0x13864 bytes
    // win32kfull.sys .text:0xb26c0, 0x1596d bytes
    // win32kfull.sys .text:0x2d630, 0x1659e bytes
    // win32kfull.sys .text:0xb3230, 0x1596d bytes
    //
    _s58(sdk::unknown_ptr) scan_sys_queue;
    
    // [xxxScrollWindowEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3d9d8, 0x13864 bytes
    // win32kfull.sys .text:0x7d28c, 0x1596d bytes
    // win32kfull.sys .text:0x3a17c, 0x1659e bytes
    // win32kfull.sys .text:0x7ddfc, 0x1596d bytes
    //
    _s59(sdk::unknown_ptr) scroll_window_ex;
    
    // [xxxSend3FingerTapHotkey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1efbc8, 0x13864 bytes
    // win32kfull.sys .text:0x21435c, 0x1596d bytes
    // win32kfull.sys .text:0x214c10, 0x1659e bytes
    // win32kfull.sys .text:0x2141cc, 0x1596d bytes
    //
    _s60(sdk::unknown_ptr) send3_finger_tap_hotkey;
    
    // [xxxSend4FingerTapHotkey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1efd08, 0x13864 bytes
    // win32kfull.sys .text:0x2144c4, 0x1596d bytes
    // win32kfull.sys .text:0x214d78, 0x1659e bytes
    // win32kfull.sys .text:0x214334, 0x1596d bytes
    //
    _s61(sdk::unknown_ptr) send4_finger_tap_hotkey;
    
    // [xxxSendBSMtoDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x455e8, 0x13864 bytes
    // win32kfull.sys .text:0x33c98, 0x1596d bytes
    // win32kfull.sys .text:0x88398, 0x1659e bytes
    // win32kfull.sys .text:0x340a8, 0x1596d bytes
    //
    _s62(sdk::unknown_ptr) send_bs_mto_desktop;
    
    // [xxxSendChangedMsgs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x97094, 0x13864 bytes
    // win32kfull.sys .text:0x82e0c, 0x1596d bytes
    // win32kfull.sys .text:0x32bb4, 0x1659e bytes
    // win32kfull.sys .text:0x8397c, 0x1596d bytes
    //
    _s63(sdk::unknown_ptr) send_changed_msgs;
    
    // [xxxSendChildNCPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5f014, 0x13864 bytes
    // win32kfull.sys .text:0x9e70c, 0x1596d bytes
    // win32kfull.sys .text:0x413b8, 0x1659e bytes
    // win32kfull.sys .text:0x9f27c, 0x1596d bytes
    //
    _s64(sdk::unknown_ptr) send_child_nc_paint;
    
    // [xxxSendClipboardMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x142780, 0x13864 bytes
    // win32kfull.sys .text:0xd9ec4, 0x1596d bytes
    // win32kfull.sys .text:0x1391c0, 0x1659e bytes
    // win32kfull.sys .text:0xdab84, 0x1596d bytes
    //
    _s65(sdk::unknown_ptr) send_clipboard_message;
    
    // [xxxSendDpiChangedMessageToChildWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1204ec, 0x13864 bytes
    // win32kfull.sys .text:0x1e4e48, 0x1596d bytes
    // win32kfull.sys .text:0x1e15f0, 0x1659e bytes
    // win32kfull.sys .text:0x1e4ca8, 0x1596d bytes
    //
    _s66(sdk::unknown_ptr) send_dpi_changed_message_to_child_window;
    
    // [xxxSendDpiChangedMessageToTopLevelWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3fc74, 0x13864 bytes
    // win32kfull.sys .text:0x11afb0, 0x1596d bytes
    // win32kfull.sys .text:0x143970, 0x1659e bytes
    // win32kfull.sys .text:0x11bee0, 0x1596d bytes
    //
    _s67(sdk::unknown_ptr) send_dpi_changed_message_to_top_level_window;
    
    // [xxxSendDpiChangedMsgs]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3fb30, 0x13864 bytes
    // win32kfull.sys .text:0x7db54, 0x1596d bytes
    // win32kfull.sys .text:0x3dc98, 0x1659e bytes
    // win32kfull.sys .text:0x7e6c4, 0x1596d bytes
    //
    _s68(sdk::unknown_ptr) send_dpi_changed_msgs;
    
    // [xxxSendEraseBkgnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5d8ac, 0x13864 bytes
    // win32kfull.sys .text:0xfa654, 0x1596d bytes
    // win32kfull.sys .text:0x3e788, 0x1659e bytes
    // win32kfull.sys .text:0xfb584, 0x1596d bytes
    //
    _s69(sdk::unknown_ptr) send_erase_bkgnd;
    
    // [xxxSendHelpMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x237344, 0x13864 bytes
    // win32kfull.sys .text:0x2511ac, 0x1596d bytes
    // win32kfull.sys .text:0x24d830, 0x1659e bytes
    // win32kfull.sys .text:0x2510bc, 0x1596d bytes
    //
    _s70(sdk::unknown_ptr) send_help_message;
    
    // [xxxSendInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x50854, 0x13864 bytes
    // win32kfull.sys .text:0xd40bc, 0x1596d bytes
    // win32kfull.sys .text:0xa88d4, 0x1659e bytes
    // win32kfull.sys .text:0xd4d7c, 0x1596d bytes
    //
    _s71(sdk::unknown_ptr) send_input;
    
    // [xxxSendLastFrameTouchUp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d6bd8, 0x13864 bytes
    // win32kfull.sys .text:0x1dc9fc, 0x1596d bytes
    // win32kfull.sys .text:0x1d9088, 0x1659e bytes
    // win32kfull.sys .text:0x1dc89c, 0x1596d bytes
    //
    _s72(sdk::unknown_ptr) send_last_frame_touch_up;
    
    // [xxxSendMenuDrawItemMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x296dc, 0x13864 bytes
    // win32kfull.sys .text:0x48c44, 0x1596d bytes
    // win32kfull.sys .text:0xb0aa8, 0x1659e bytes
    // win32kfull.sys .text:0x49054, 0x1596d bytes
    //
    _s73(sdk::unknown_ptr) send_menu_draw_item_message;
    
    // [xxxSendMenuSelect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13150c, 0x13864 bytes
    // win32kfull.sys .text:0x251f3c, 0x1596d bytes
    // win32kfull.sys .text:0x2513d8, 0x1659e bytes
    // win32kfull.sys .text:0x251e4c, 0x1596d bytes
    //
    _s74(sdk::unknown_ptr) send_menu_select;
    
    // [xxxSendMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9cc0c, 0x13864 bytes
    // win32kfull.sys .text:0x61054, 0x1596d bytes
    // win32kfull.sys .text:0x258a0, 0x1659e bytes
    // win32kfull.sys .text:0x61bc4, 0x1596d bytes
    //
    _s75(sdk::unknown_ptr) send_message;
    
    // [xxxSendMessageBSM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x45490, 0x13864 bytes
    // win32kfull.sys .text:0x33b20, 0x1596d bytes
    // win32kfull.sys .text:0x88220, 0x1659e bytes
    // win32kfull.sys .text:0x33f30, 0x1596d bytes
    //
    _s76(sdk::unknown_ptr) send_message_bsm;
    
    // [xxxSendMessageCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44950, 0x13864 bytes
    // win32kfull.sys .text:0x336e4, 0x1596d bytes
    // win32kfull.sys .text:0xa6b94, 0x1659e bytes
    // win32kfull.sys .text:0x33af4, 0x1596d bytes
    //
    _s77(sdk::unknown_ptr) send_message_callback;
    
    // [xxxSendMessageEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb1c80, 0x13864 bytes
    // win32kfull.sys .text:0x60f00, 0x1596d bytes
    // win32kfull.sys .text:0x277b0, 0x1659e bytes
    // win32kfull.sys .text:0x61a70, 0x1596d bytes
    //
    _s78(sdk::unknown_ptr) send_message_ex;
    
    // [xxxSendMessageFF]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1480d0, 0x13864 bytes
    // win32kfull.sys .text:0x1502b0, 0x1596d bytes
    // win32kfull.sys .text:0x143de0, 0x1659e bytes
    // win32kfull.sys .text:0x1511f0, 0x1596d bytes
    //
    _s79(sdk::unknown_ptr) send_message_ff;
    
    // [xxxSendMessageToClient]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xaeff0, 0x13864 bytes
    // win32kfull.sys .text:0x5e080, 0x1596d bytes
    // win32kfull.sys .text:0x25f40, 0x1659e bytes
    // win32kfull.sys .text:0x5e4a0, 0x1596d bytes
    //
    _s80(sdk::unknown_ptr) send_message_to_client;
    
    // [xxxSendMessageToUI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dc138, 0x13864 bytes
    // win32kfull.sys .text:0x1e3610, 0x1596d bytes
    // win32kfull.sys .text:0x1e09e0, 0x1659e bytes
    // win32kfull.sys .text:0x1e3470, 0x1596d bytes
    //
    _s81(sdk::unknown_ptr) send_message_to_ui;
    
    // [xxxSendMinRectMessages]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11416c, 0x13864 bytes
    // win32kfull.sys .text:0x116478, 0x1596d bytes
    // win32kfull.sys .text:0x107624, 0x1659e bytes
    // win32kfull.sys .text:0x1173a8, 0x1596d bytes
    //
    _s82(sdk::unknown_ptr) send_min_rect_messages;
    
    // [xxxSendMousePromotion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x234cf0, 0x13864 bytes
    // win32kfull.sys .text:0x21a448, 0x1596d bytes
    // win32kfull.sys .text:0x216f50, 0x1659e bytes
    // win32kfull.sys .text:0x21a2b8, 0x1596d bytes
    //
    _s83(sdk::unknown_ptr) send_mouse_promotion;
    
    // [xxxSendNCHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x224520, 0x13864 bytes
    // win32kfull.sys .text:0x216980, 0x1596d bytes
    // win32kfull.sys .text:0x208608, 0x1659e bytes
    // win32kfull.sys .text:0x2167f0, 0x1596d bytes
    //
    _s84(sdk::unknown_ptr) send_nc_hit_test;
    
    // [xxxSendNCPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1051a8, 0x13864 bytes
    // win32kfull.sys .text:0x102f30, 0x1596d bytes
    // win32kfull.sys .text:0xf6d68, 0x1659e bytes
    // win32kfull.sys .text:0x103e60, 0x1596d bytes
    //
    _s85(sdk::unknown_ptr) send_nc_paint;
    
    // [xxxSendNotifyMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44730, 0x13864 bytes
    // win32kfull.sys .text:0x33470, 0x1596d bytes
    // win32kfull.sys .text:0xa6920, 0x1659e bytes
    // win32kfull.sys .text:0x33880, 0x1596d bytes
    //
    _s86(sdk::unknown_ptr) send_notify_message;
    
    // [xxxSendOpenStatusNotify]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dc33c, 0x13864 bytes
    // win32kfull.sys .text:0x1e3860, 0x1596d bytes
    // win32kfull.sys .text:0x1e0c30, 0x1659e bytes
    // win32kfull.sys .text:0x1e36c0, 0x1596d bytes
    //
    _s87(sdk::unknown_ptr) send_open_status_notify;
    
    // [xxxSendPointerMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1da8e4, 0x13864 bytes
    // win32kfull.sys .text:0x1f14bc, 0x1596d bytes
    // win32kfull.sys .text:0x1edd30, 0x1659e bytes
    // win32kfull.sys .text:0x1f131c, 0x1596d bytes
    //
    _s88(sdk::unknown_ptr) send_pointer_message;
    
    // [xxxSendPointerMessageWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1da960, 0x13864 bytes
    // win32kfull.sys .text:0x1f1538, 0x1596d bytes
    // win32kfull.sys .text:0x1edda4, 0x1659e bytes
    // win32kfull.sys .text:0x1f1398, 0x1596d bytes
    //
    _s89(sdk::unknown_ptr) send_pointer_message_worker;
    
    // [xxxSendShutdownData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x143f40, 0x13864 bytes
    // win32kfull.sys .text:0x2342d8, 0x1596d bytes
    // win32kfull.sys .text:0x22fab4, 0x1659e bytes
    // win32kfull.sys .text:0x234198, 0x1596d bytes
    //
    _s90(sdk::unknown_ptr) send_shutdown_data;
    
    // [xxxSendSizeMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfd04c, 0x13864 bytes
    // win32kfull.sys .text:0x3638c, 0x1596d bytes
    // win32kfull.sys .text:0xa4d9c, 0x1659e bytes
    // win32kfull.sys .text:0x3679c, 0x1596d bytes
    //
    _s91(sdk::unknown_ptr) send_size_message;
    
    // [xxxSendSyncGHOSTINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f09ac, 0x13864 bytes
    // win32kfull.sys .text:0x20ab94, 0x1596d bytes
    // win32kfull.sys .text:0x214054, 0x1659e bytes
    // win32kfull.sys .text:0x20aa04, 0x1596d bytes
    //
    _s92(sdk::unknown_ptr) send_sync_ghostinfo;
    
    // [xxxSendToTouchStack]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d6d0c, 0x13864 bytes
    // win32kfull.sys .text:0x1dcb64, 0x1596d bytes
    // win32kfull.sys .text:0x1d91f0, 0x1659e bytes
    // win32kfull.sys .text:0x1dca04, 0x1596d bytes
    //
    _s93(sdk::unknown_ptr) send_to_touch_stack;
    
    // [xxxSendTransformableMessageTimeout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb1790, 0x13864 bytes
    // win32kfull.sys .text:0x5db00, 0x1596d bytes
    // win32kfull.sys .text:0x258e0, 0x1659e bytes
    // win32kfull.sys .text:0x5df20, 0x1596d bytes
    //
    _s94(sdk::unknown_ptr) send_transformable_message_timeout;
    
    // [xxxSendUAHInitMenuMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29158, 0x13864 bytes
    // win32kfull.sys .text:0x486c0, 0x1596d bytes
    // win32kfull.sys .text:0xb2350, 0x1659e bytes
    // win32kfull.sys .text:0x48ad0, 0x1596d bytes
    //
    _s95(sdk::unknown_ptr) send_uah_init_menu_message;
    
    // [xxxSendUAHMenuMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28d50, 0x13864 bytes
    // win32kfull.sys .text:0x207c0, 0x1596d bytes
    // win32kfull.sys .text:0x1001f4, 0x1659e bytes
    // win32kfull.sys .text:0x20bd0, 0x1596d bytes
    //
    _s96(sdk::unknown_ptr) send_uah_menu_message;
    
    // [xxxSendWinlogonPowerMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87ef0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcfd20, 0x243e0 bytes
    // win32kbase.sys .text:0xe1210, 0x27ef0 bytes
    // win32kbase.sys .text:0xcebe0, 0x243e0 bytes
    //
    _s97(sdk::unknown_ptr) send_winlogon_power_message;
    
    // [xxxSetActiveWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x121f30, 0x13864 bytes
    // win32kfull.sys .text:0x1167a4, 0x1596d bytes
    // win32kfull.sys .text:0x108ccc, 0x1659e bytes
    // win32kfull.sys .text:0x1176d4, 0x1596d bytes
    //
    _s98(sdk::unknown_ptr) set_active_window;
    
    // [xxxSetAndDrawMinMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfaa48, 0x13864 bytes
    // win32kfull.sys .text:0x123a1c, 0x1596d bytes
    // win32kfull.sys .text:0x91120, 0x1659e bytes
    // win32kfull.sys .text:0x12495c, 0x1596d bytes
    //
    _s99(sdk::unknown_ptr) set_and_draw_min_metrics;
    
    // [xxxSetAndDrawNCMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d0c50, 0x13864 bytes
    // win32kfull.sys .text:0x1d7c18, 0x1596d bytes
    // win32kfull.sys .text:0x149344, 0x1659e bytes
    // win32kfull.sys .text:0x1d7ab8, 0x1596d bytes
    //
    _t00(sdk::unknown_ptr) set_and_draw_nc_metrics;
    
    // [xxxSetCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22240, 0x13864 bytes
    // win32kfull.sys .text:0x32e80, 0x1596d bytes
    // win32kfull.sys .text:0xa674c, 0x1659e bytes
    // win32kfull.sys .text:0x33290, 0x1596d bytes
    //
    _t01(sdk::unknown_ptr) set_capture;
    
    // [xxxSetClassCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e1558, 0x13864 bytes
    // win32kfull.sys .text:0x1e941c, 0x1596d bytes
    // win32kfull.sys .text:0x1e5aa8, 0x1659e bytes
    // win32kfull.sys .text:0x1e927c, 0x1596d bytes
    //
    _t02(sdk::unknown_ptr) set_class_cursor;
    
    // [xxxSetClassData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1172f4, 0x13864 bytes
    // win32kfull.sys .text:0xf1c3c, 0x1596d bytes
    // win32kfull.sys .text:0x10cc68, 0x1659e bytes
    // win32kfull.sys .text:0xf2a5c, 0x1596d bytes
    //
    _t03(sdk::unknown_ptr) set_class_data;
    
    // [xxxSetClassIcon]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22683c, 0x13864 bytes
    // win32kfull.sys .text:0x23e848, 0x1596d bytes
    // win32kfull.sys .text:0x23bd30, 0x1659e bytes
    // win32kfull.sys .text:0x23e6f8, 0x1596d bytes
    //
    _t04(sdk::unknown_ptr) set_class_icon;
    
    // [xxxSetClassIconEnum]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2267d0, 0x13864 bytes
    // win32kfull.sys .text:0x23e7e0, 0x1596d bytes
    // win32kfull.sys .text:0x15d360, 0x1659e bytes
    // win32kfull.sys .text:0x23e690, 0x1596d bytes
    //
    _t05(sdk::unknown_ptr) set_class_icon_enum;
    
    // [xxxSetClassLong]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e18cc, 0x13864 bytes
    // win32kfull.sys .text:0x14ffdc, 0x1596d bytes
    // win32kfull.sys .text:0x1e61fc, 0x1659e bytes
    // win32kfull.sys .text:0x150f1c, 0x1596d bytes
    //
    _t06(sdk::unknown_ptr) set_class_long;
    
    // [xxxSetClassLongPtr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117290, 0x13864 bytes
    // win32kfull.sys .text:0xf1b7c, 0x1596d bytes
    // win32kfull.sys .text:0x10cbcc, 0x1659e bytes
    // win32kfull.sys .text:0xf299c, 0x1596d bytes
    //
    _t07(sdk::unknown_ptr) set_class_long_ptr;
    
    // [xxxSetClipboardViewer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1413c4, 0x13864 bytes
    // win32kfull.sys .text:0xda038, 0x1596d bytes
    // win32kfull.sys .text:0x139c0c, 0x1659e bytes
    // win32kfull.sys .text:0xdacf8, 0x1596d bytes
    //
    _t08(sdk::unknown_ptr) set_clipboard_viewer;
    
    // [xxxSetConsoleCaretInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10e520, 0x13864 bytes
    // win32kfull.sys .text:0x50aa0, 0x1596d bytes
    // win32kfull.sys .text:0x9f994, 0x1659e bytes
    // win32kfull.sys .text:0x50ec0, 0x1596d bytes
    //
    _t09(sdk::unknown_ptr) set_console_caret_info;
    
    // [xxxSetCsrssThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1b480, 0x13864 bytes
    // win32kfull.sys .text:0xbff30, 0x1596d bytes
    // win32kfull.sys .text:0x9c330, 0x1659e bytes
    // win32kfull.sys .text:0xc0aa0, 0x1596d bytes
    //
    _t10(sdk::unknown_ptr) set_csrss_thread_desktop;
    
    // [xxxSetDeskWallpaper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x120590, 0x13864 bytes
    // win32kfull.sys .text:0x120a3c, 0x1596d bytes
    // win32kfull.sys .text:0x90534, 0x1659e bytes
    // win32kfull.sys .text:0x12197c, 0x1596d bytes
    //
    _t11(sdk::unknown_ptr) set_desk_wallpaper;
    
    // [xxxSetDialogSystemMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1423d0, 0x13864 bytes
    // win32kfull.sys .text:0x11c7d0, 0x1596d bytes
    // win32kfull.sys .text:0x10c584, 0x1659e bytes
    // win32kfull.sys .text:0x11d700, 0x1596d bytes
    //
    _t12(sdk::unknown_ptr) set_dialog_system_menu;
    
    // [xxxSetFocus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x42c44, 0x13864 bytes
    // win32kfull.sys .text:0x31440, 0x1596d bytes
    // win32kfull.sys .text:0xc0bac, 0x1659e bytes
    // win32kfull.sys .text:0x31850, 0x1596d bytes
    //
    _t13(sdk::unknown_ptr) set_focus;
    
    // [xxxSetForegroundThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2b0, 0x13864 bytes
    // win32kfull.sys .text:0x1d34b0, 0x1596d bytes
    // win32kfull.sys .text:0x51f0, 0x1659e bytes
    // win32kfull.sys .text:0x1d3350, 0x1596d bytes
    //
    _t14(sdk::unknown_ptr) set_foreground_thread;
    
    // [xxxSetForegroundThreadWithWindowHint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x433ac, 0x13864 bytes
    // win32kfull.sys .text:0x31c24, 0x1596d bytes
    // win32kfull.sys .text:0xc1468, 0x1659e bytes
    // win32kfull.sys .text:0x32034, 0x1596d bytes
    //
    _t15(sdk::unknown_ptr) set_foreground_thread_with_window_hint;
    
    // [xxxSetForegroundWindow2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x45c20, 0x13864 bytes
    // win32kfull.sys .text:0x30b4c, 0x1596d bytes
    // win32kfull.sys .text:0xa5354, 0x1659e bytes
    // win32kfull.sys .text:0x30f5c, 0x1596d bytes
    //
    _t16(sdk::unknown_ptr) set_foreground_window2;
    
    // [xxxSetIMEShowStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dbe0, 0x13864 bytes
    // win32kfull.sys .text:0x1274b4, 0x1596d bytes
    // win32kfull.sys .text:0x9221c, 0x1659e bytes
    // win32kfull.sys .text:0x1283f4, 0x1596d bytes
    //
    _t17(sdk::unknown_ptr) set_ime_show_status;
    
    // [xxxSetInformationThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1bdb0, 0x13864 bytes
    // win32kfull.sys .text:0xbeeb0, 0x1596d bytes
    // win32kfull.sys .text:0x9c090, 0x1659e bytes
    // win32kfull.sys .text:0xbfa20, 0x1596d bytes
    //
    _t18(sdk::unknown_ptr) set_information_thread;
    
    // [xxxSetInternalWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fdccc, 0x13864 bytes
    // win32kfull.sys .text:0x209df0, 0x1596d bytes
    // win32kfull.sys .text:0x2132a0, 0x1659e bytes
    // win32kfull.sys .text:0x209c60, 0x1596d bytes
    //
    _t19(sdk::unknown_ptr) set_internal_window_pos;
    
    // [xxxSetLayeredWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x49410, 0x13864 bytes
    // win32kfull.sys .text:0xce780, 0x1596d bytes
    // win32kfull.sys .text:0xb2450, 0x1659e bytes
    // win32kfull.sys .text:0xcf440, 0x1596d bytes
    //
    _t20(sdk::unknown_ptr) set_layered_window;
    
    // [xxxSetMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13bff0, 0x13864 bytes
    // win32kfull.sys .text:0x146164, 0x1596d bytes
    // win32kfull.sys .text:0x13af20, 0x1659e bytes
    // win32kfull.sys .text:0x1470a4, 0x1596d bytes
    //
    _t21(sdk::unknown_ptr) set_menu;
    
    // [xxxSetMenuInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4836c, 0x13864 bytes
    // win32kfull.sys .text:0x20a74, 0x1596d bytes
    // win32kfull.sys .text:0xaa0ac, 0x1659e bytes
    // win32kfull.sys .text:0x20e84, 0x1596d bytes
    //
    _t22(sdk::unknown_ptr) set_menu_info;
    
    // [xxxSetMenuItemInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4ab28, 0x13864 bytes
    // win32kfull.sys .text:0x21418, 0x1596d bytes
    // win32kfull.sys .text:0x98d04, 0x1659e bytes
    // win32kfull.sys .text:0x21828, 0x1596d bytes
    //
    _t23(sdk::unknown_ptr) set_menu_item_info;
    
    // [xxxSetModernAppWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8290, 0x13864 bytes
    // win32kfull.sys .text:0x5230, 0x1596d bytes
    // win32kfull.sys .text:0x2004, 0x1659e bytes
    // win32kfull.sys .text:0x55e0, 0x1596d bytes
    //
    _t24(sdk::unknown_ptr) set_modern_app_window;
    
    // [xxxSetNCFonts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3724c, 0x13864 bytes
    // win32kfull.sys .text:0x28644, 0x1596d bytes
    // win32kfull.sys .text:0xc8d28, 0x1659e bytes
    // win32kfull.sys .text:0x28a54, 0x1596d bytes
    //
    _t25(sdk::unknown_ptr) set_nc_fonts;
    
    // [xxxSetParentWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20d88, 0x13864 bytes
    // win32kfull.sys .text:0xc95ac, 0x1596d bytes
    // win32kfull.sys .text:0xbe524, 0x1659e bytes
    // win32kfull.sys .text:0xca26c, 0x1596d bytes
    //
    _t26(sdk::unknown_ptr) set_parent_worker;
    
    // [xxxSetPKLinThreads]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13f2c, 0x13864 bytes
    // win32kbase.sys .text:0x84e18, 0x243e0 bytes
    // win32kbase.sys .text:0xafbc, 0x27ef0 bytes
    // win32kbase.sys .text:0x88af0, 0x243e0 bytes
    //
    _t27(sdk::unknown_ptr) set_pk_lin_threads;
    
    // [xxxSetProcessInitState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x35d80, 0x1eb80 bytes
    // win32kbase.sys .text:0x125a0, 0x243e0 bytes
    // win32kbase.sys .text:0x24990, 0x27ef0 bytes
    // win32kbase.sys .text:0xac80, 0x243e0 bytes
    //
    _t28(sdk::unknown_ptr) set_process_init_state;
    
    // [xxxSetProcessWindowStation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf8290, 0x13864 bytes
    // win32kfull.sys .text:0xf6490, 0x1596d bytes
    // win32kfull.sys .text:0xeb040, 0x1659e bytes
    // win32kfull.sys .text:0xf7320, 0x1596d bytes
    //
    _t29(sdk::unknown_ptr) set_process_window_station;
    
    // [xxxSetScrollBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3ce44, 0x13864 bytes
    // win32kfull.sys .text:0xe6708, 0x1596d bytes
    // win32kfull.sys .text:0x5ec8, 0x1659e bytes
    // win32kfull.sys .text:0xe7448, 0x1596d bytes
    //
    _t30(sdk::unknown_ptr) set_scroll_bar;
    
    // [xxxSetShellWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc6ac, 0x13864 bytes
    // win32kfull.sys .text:0xbbd60, 0x1596d bytes
    // win32kfull.sys .text:0x8b604, 0x1659e bytes
    // win32kfull.sys .text:0xbc8d0, 0x1596d bytes
    //
    _t31(sdk::unknown_ptr) set_shell_window;
    
    // [xxxSetSPIMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfa9f4, 0x13864 bytes
    // win32kfull.sys .text:0x123920, 0x1596d bytes
    // win32kfull.sys .text:0x92484, 0x1659e bytes
    // win32kfull.sys .text:0x124860, 0x1596d bytes
    //
    _t32(sdk::unknown_ptr) set_spi_metrics;
    
    // [xxxSetSysColors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dae4, 0x1eb80 bytes
    // win32kbase.sys .text:0x38e8c, 0x243e0 bytes
    // win32kbase.sys .text:0x57620, 0x27ef0 bytes
    // win32kbase.sys .text:0x3fea0, 0x243e0 bytes
    //
    _t33(sdk::unknown_ptr) set_sys_colors;
    
    // [xxxSetSysMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4ac20, 0x13864 bytes
    // win32kfull.sys .text:0x1fc50, 0x1596d bytes
    // win32kfull.sys .text:0x99e48, 0x1659e bytes
    // win32kfull.sys .text:0x20060, 0x1596d bytes
    //
    _t34(sdk::unknown_ptr) set_sys_menu;
    
    // [xxxSetSystemMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23640c, 0x13864 bytes
    // win32kfull.sys .text:0x144f68, 0x1596d bytes
    // win32kfull.sys .text:0x139f78, 0x1659e bytes
    // win32kfull.sys .text:0x145ea8, 0x1596d bytes
    //
    _t35(sdk::unknown_ptr) set_system_menu;
    
    // [xxxSetThreadDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x46f40, 0x13864 bytes
    // win32kfull.sys .text:0x50754, 0x1596d bytes
    // win32kfull.sys .text:0x9c3fc, 0x1659e bytes
    // win32kfull.sys .text:0x50b74, 0x1596d bytes
    //
    _t36(sdk::unknown_ptr) set_thread_desktop;
    
    // [xxxSetTrayWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x40fc0, 0x13864 bytes
    // win32kfull.sys .text:0x4c9e0, 0x1596d bytes
    // win32kfull.sys .text:0x9c8fc, 0x1659e bytes
    // win32kfull.sys .text:0x4cdf0, 0x1596d bytes
    //
    _t37(sdk::unknown_ptr) set_tray_window;
    
    // [xxxSetWindowData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x51a7c, 0x13864 bytes
    // win32kfull.sys .text:0xa57c0, 0x1596d bytes
    // win32kfull.sys .text:0xa8fbc, 0x1659e bytes
    // win32kfull.sys .text:0xa6330, 0x1596d bytes
    //
    _t38(sdk::unknown_ptr) set_window_data;
    
    // [xxxSetWindowLong]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf32e0, 0x13864 bytes
    // win32kfull.sys .text:0xebda8, 0x1596d bytes
    // win32kfull.sys .text:0xa5db4, 0x1659e bytes
    // win32kfull.sys .text:0xecae8, 0x1596d bytes
    //
    _t39(sdk::unknown_ptr) set_window_long;
    
    // [xxxSetWindowLongPtr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x51894, 0x13864 bytes
    // win32kfull.sys .text:0xa53f8, 0x1596d bytes
    // win32kfull.sys .text:0xa8bd8, 0x1659e bytes
    // win32kfull.sys .text:0xa5f68, 0x1596d bytes
    //
    _t40(sdk::unknown_ptr) set_window_long_ptr;
    
    // [xxxSetWindowNCMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x359e0, 0x13864 bytes
    // win32kfull.sys .text:0x27f00, 0x1596d bytes
    // win32kfull.sys .text:0xc856c, 0x1659e bytes
    // win32kfull.sys .text:0x28310, 0x1596d bytes
    //
    _t41(sdk::unknown_ptr) set_window_nc_metrics;
    
    // [xxxSetWindowPlacement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10b710, 0x13864 bytes
    // win32kfull.sys .text:0xc80e8, 0x1596d bytes
    // win32kfull.sys .text:0x100728, 0x1659e bytes
    // win32kfull.sys .text:0xc8da8, 0x1596d bytes
    //
    _t42(sdk::unknown_ptr) set_window_placement;
    
    // [xxxSetWindowPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5a414, 0x13864 bytes
    // win32kfull.sys .text:0x7dfd4, 0x1596d bytes
    // win32kfull.sys .text:0xaf7ec, 0x1659e bytes
    // win32kfull.sys .text:0x7eb44, 0x1596d bytes
    //
    _t43(sdk::unknown_ptr) set_window_pos;
    
    // [xxxSetWindowPosAndBand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5aec0, 0x13864 bytes
    // win32kfull.sys .text:0x7e150, 0x1596d bytes
    // win32kfull.sys .text:0xaf89c, 0x1659e bytes
    // win32kfull.sys .text:0x7ecc0, 0x1596d bytes
    //
    _t44(sdk::unknown_ptr) set_window_pos_and_band;
    
    // [xxxSetWindowRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5a4fc, 0x13864 bytes
    // win32kfull.sys .text:0x102020, 0x1596d bytes
    // win32kfull.sys .text:0xae95c, 0x1659e bytes
    // win32kfull.sys .text:0x102f50, 0x1596d bytes
    //
    _t45(sdk::unknown_ptr) set_window_rgn;
    
    // [xxxSetWindowShowState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226e9c, 0x13864 bytes
    // win32kfull.sys .text:0x242f0c, 0x1596d bytes
    // win32kfull.sys .text:0x2409d0, 0x1659e bytes
    // win32kfull.sys .text:0x242dbc, 0x1596d bytes
    //
    _t46(sdk::unknown_ptr) set_window_show_state;
    
    // [xxxSetWindowStyle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x51efc, 0x13864 bytes
    // win32kfull.sys .text:0x61c00, 0x1596d bytes
    // win32kfull.sys .text:0x24c30, 0x1659e bytes
    // win32kfull.sys .text:0x62770, 0x1596d bytes
    //
    _t47(sdk::unknown_ptr) set_window_style;
    
    // [xxxShiftLock]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22bab8, 0x13864 bytes
    // win32kbase.sys .text:0x1bb1dc, 0x243e0 bytes
    // win32kbase.sys .text:0x202a04, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b8fbc, 0x243e0 bytes
    //
    _t48(sdk::unknown_ptr) shift_lock;
    
    // [xxxShowGhostWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138d80, 0x13864 bytes
    // win32kfull.sys .text:0x3a5c, 0x1596d bytes
    // win32kfull.sys .text:0x13834c, 0x1659e bytes
    // win32kfull.sys .text:0x3a5c, 0x1596d bytes
    //
    _t49(sdk::unknown_ptr) show_ghost_window;
    
    // [xxxShowOwnedWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x275b4, 0x13864 bytes
    // win32kfull.sys .text:0xc8608, 0x1596d bytes
    // win32kfull.sys .text:0xcf078, 0x1659e bytes
    // win32kfull.sys .text:0xc92c8, 0x1596d bytes
    //
    _t50(sdk::unknown_ptr) show_owned_windows;
    
    // [xxxShowScrollBar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x104a30, 0x13864 bytes
    // win32kfull.sys .text:0x107ce4, 0x1596d bytes
    // win32kfull.sys .text:0x135b84, 0x1659e bytes
    // win32kfull.sys .text:0x108c14, 0x1596d bytes
    //
    _t51(sdk::unknown_ptr) show_scroll_bar;
    
    // [xxxShowSwitchWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fa66c, 0x13864 bytes
    // win32kfull.sys .text:0x1f45f0, 0x1596d bytes
    // win32kfull.sys .text:0x1f0b68, 0x1659e bytes
    // win32kfull.sys .text:0x1f4450, 0x1596d bytes
    //
    _t52(sdk::unknown_ptr) show_switch_window;
    
    // [xxxShowTooltip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13f7b0, 0x13864 bytes
    // win32kfull.sys .text:0x24370c, 0x1596d bytes
    // win32kfull.sys .text:0x241408, 0x1659e bytes
    // win32kfull.sys .text:0x2435bc, 0x1596d bytes
    //
    _t53(sdk::unknown_ptr) show_tooltip;
    
    // [xxxShowWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226fc8, 0x13864 bytes
    // win32kfull.sys .text:0x10f6e4, 0x1596d bytes
    // win32kfull.sys .text:0xaa27c, 0x1659e bytes
    // win32kfull.sys .text:0x110614, 0x1596d bytes
    //
    _t54(sdk::unknown_ptr) show_window;
    
    // [xxxShowWindowEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4dfb4, 0x13864 bytes
    // win32kfull.sys .text:0xad1f8, 0x1596d bytes
    // win32kfull.sys .text:0xac2fc, 0x1659e bytes
    // win32kfull.sys .text:0xadd68, 0x1596d bytes
    //
    _t55(sdk::unknown_ptr) show_window_ex;
    
    // [xxxShowWindowViaMinMax]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11e3b8, 0x13864 bytes
    // win32kfull.sys .text:0xc8af4, 0x1596d bytes
    // win32kfull.sys .text:0xcdf48, 0x1659e bytes
    // win32kfull.sys .text:0xc97b4, 0x1596d bytes
    //
    _t56(sdk::unknown_ptr) show_window_via_min_max;
    
    // [xxxSimpleDoSyncPaint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xffad0, 0x13864 bytes
    // win32kfull.sys .text:0x80490, 0x1596d bytes
    // win32kfull.sys .text:0x31060, 0x1659e bytes
    // win32kfull.sys .text:0x81000, 0x1596d bytes
    //
    _t57(sdk::unknown_ptr) simple_do_sync_paint;
    
    // [xxxSimulateShiftF10]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1c7c, 0x13864 bytes
    // win32kfull.sys .text:0x1d8a64, 0x1596d bytes
    // win32kfull.sys .text:0x1d6158, 0x1659e bytes
    // win32kfull.sys .text:0x1d8904, 0x1596d bytes
    //
    _t58(sdk::unknown_ptr) simulate_shift_f10;
    
    // [xxxSizeOrMoveRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2035e4, 0x13864 bytes
    // win32kfull.sys .text:0x2107a4, 0x1596d bytes
    // win32kfull.sys .text:0x212110, 0x1659e bytes
    // win32kfull.sys .text:0x210614, 0x1596d bytes
    //
    _t59(sdk::unknown_ptr) size_or_move_rect;
    
    // [xxxSleepThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1cdfe8, 0x13864 bytes
    // win32kfull.sys .text:0x1d3e00, 0x1596d bytes
    // win32kfull.sys .text:0x1dc600, 0x1659e bytes
    // win32kfull.sys .text:0x1d3ca0, 0x1596d bytes
    //
    _t60(sdk::unknown_ptr) sleep_thread;
    
    // [xxxSleepThread2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xacab0, 0x13864 bytes
    // win32kfull.sys .text:0x5c5a0, 0x1596d bytes
    // win32kfull.sys .text:0x278fc, 0x1659e bytes
    // win32kfull.sys .text:0x5c9c0, 0x1596d bytes
    //
    _t61(sdk::unknown_ptr) sleep_thread2;
    
    // [xxxSnapWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13f020, 0x13864 bytes
    // win32kfull.sys .text:0x14ee3c, 0x1596d bytes
    // win32kfull.sys .text:0x242518, 0x1659e bytes
    // win32kfull.sys .text:0x14fd7c, 0x1596d bytes
    //
    _t62(sdk::unknown_ptr) snap_window;
    
    // [xxxSoundSentry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1273b0, 0x13864 bytes
    // win32kfull.sys .text:0x14c000, 0x1596d bytes
    // win32kfull.sys .text:0x1118ac, 0x1659e bytes
    // win32kfull.sys .text:0x14cf40, 0x1596d bytes
    //
    _t63(sdk::unknown_ptr) sound_sentry;
    
    // [xxxSPISetNCMetrics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d09b4, 0x13864 bytes
    // win32kfull.sys .text:0x1d79a4, 0x1596d bytes
    // win32kfull.sys .text:0x148f7c, 0x1659e bytes
    // win32kfull.sys .text:0x1d7844, 0x1596d bytes
    //
    _t64(sdk::unknown_ptr) spi_set_nc_metrics;
    
    // [xxxStickyKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x128e0, 0x13864 bytes
    // win32kbase.sys .text:0x191ca0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d1a40, 0x27ef0 bytes
    // win32kbase.sys .text:0x190090, 0x243e0 bytes
    //
    _t65(sdk::unknown_ptr) sticky_keys;
    
    // [xxxSwitchCursors]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d5f2c, 0x13864 bytes
    // win32kfull.sys .text:0x1db688, 0x1596d bytes
    // win32kfull.sys .text:0x1d79f0, 0x1659e bytes
    // win32kfull.sys .text:0x1db528, 0x1596d bytes
    //
    _t66(sdk::unknown_ptr) switch_cursors;
    
    // [xxxSwitchDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x396e4, 0x13864 bytes
    // win32kfull.sys .text:0x2e10c, 0x1596d bytes
    // win32kfull.sys .text:0xc3520, 0x1659e bytes
    // win32kfull.sys .text:0x2e51c, 0x1596d bytes
    //
    _t67(sdk::unknown_ptr) switch_desktop;
    
    // [xxxSwitchDesktopWithFade]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf9830, 0x13864 bytes
    // win32kfull.sys .text:0x10ef90, 0x1596d bytes
    // win32kfull.sys .text:0x10ba7c, 0x1659e bytes
    // win32kfull.sys .text:0x10fec0, 0x1596d bytes
    //
    _t68(sdk::unknown_ptr) switch_desktop_with_fade;
    
    // [xxxSwitchToThisWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb130, 0x13864 bytes
    // win32kfull.sys .text:0x79c0, 0x1596d bytes
    // win32kfull.sys .text:0x38e4, 0x1659e bytes
    // win32kfull.sys .text:0x7d70, 0x1596d bytes
    //
    _t69(sdk::unknown_ptr) switch_to_this_window;
    
    // [xxxSwitchWndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1fba30, 0x13864 bytes
    // win32kfull.sys .text:0x1f5cf0, 0x1596d bytes
    // win32kfull.sys .text:0x1f2190, 0x1659e bytes
    // win32kfull.sys .text:0x1f5b50, 0x1596d bytes
    //
    _t70(sdk::unknown_ptr) switch_wnd_proc;
    
    // [xxxSwpActivate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x41460, 0x13864 bytes
    // win32kfull.sys .text:0x104ccc, 0x1596d bytes
    // win32kfull.sys .text:0xfca00, 0x1659e bytes
    // win32kfull.sys .text:0x105bfc, 0x1596d bytes
    //
    _t71(sdk::unknown_ptr) swp_activate;
    
    // [xxxSysCommand]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11ccf4, 0x13864 bytes
    // win32kfull.sys .text:0xdc0a4, 0x1596d bytes
    // win32kfull.sys .text:0x111e70, 0x1659e bytes
    // win32kfull.sys .text:0xdcd64, 0x1596d bytes
    //
    _t72(sdk::unknown_ptr) sys_command;
    
    // [xxxSystemBroadcastMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x45304, 0x13864 bytes
    // win32kfull.sys .text:0x36048, 0x1596d bytes
    // win32kfull.sys .text:0x87f54, 0x1659e bytes
    // win32kfull.sys .text:0x36458, 0x1596d bytes
    //
    _t73(sdk::unknown_ptr) system_broadcast_message;
    
    // [xxxSystemParametersInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x31040, 0x13864 bytes
    // win32kbase.sys .text:0x9140, 0x243e0 bytes
    // win32kbase.sys .text:0x1c070, 0x27ef0 bytes
    // win32kbase.sys .text:0x8afd0, 0x243e0 bytes
    //
    _t74(sdk::unknown_ptr) system_parameters_info;
    
    // [xxxSystemTimerProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xffc90, 0x13864 bytes
    // win32kfull.sys .text:0x35bd0, 0x1596d bytes
    // win32kfull.sys .text:0x86b30, 0x1659e bytes
    // win32kfull.sys .text:0x35fe0, 0x1596d bytes
    //
    _t75(sdk::unknown_ptr) system_timer_proc;
    
    // [xxxTA_AccelerateMenu]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140a08, 0x13864 bytes
    // win32kfull.sys .text:0x14ae0c, 0x1596d bytes
    // win32kfull.sys .text:0x1418bc, 0x1659e bytes
    // win32kfull.sys .text:0x14bd4c, 0x1596d bytes
    //
    _t76(sdk::unknown_ptr) ta_accelerate_menu;
    
    // [xxxTargetingHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x224738, 0x13864 bytes
    // win32kfull.sys .text:0x216bc8, 0x1596d bytes
    // win32kfull.sys .text:0x20884c, 0x1659e bytes
    // win32kfull.sys .text:0x216a38, 0x1596d bytes
    //
    _t77(sdk::unknown_ptr) targeting_hit_test;
    
    // [xxxTM_MoveDragRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2041cc, 0x13864 bytes
    // win32kfull.sys .text:0x21130c, 0x1596d bytes
    // win32kfull.sys .text:0x212360, 0x1659e bytes
    // win32kfull.sys .text:0x21117c, 0x1596d bytes
    //
    _t78(sdk::unknown_ptr) tm_move_drag_rect;
    
    // [xxxToUnicodeEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13158, 0x13864 bytes
    // win32kbase.sys .text:0x86700, 0x243e0 bytes
    // win32kbase.sys .text:0xfac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x88500, 0x243e0 bytes
    //
    _t79(sdk::unknown_ptr) to_unicode_ex;
    
    // [xxxToggleKeysTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7720, 0x13864 bytes
    // win32kbase.sys .text:0x192040, 0x243e0 bytes
    // win32kbase.sys .text:0x1d1de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x190430, 0x243e0 bytes
    //
    _t80(sdk::unknown_ptr) toggle_keys_timer;
    
    // [xxxTooltipGetSizeAndPosition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13f878, 0x13864 bytes
    // win32kfull.sys .text:0x24383c, 0x1596d bytes
    // win32kfull.sys .text:0x241538, 0x1659e bytes
    // win32kfull.sys .text:0x2436ec, 0x1596d bytes
    //
    _t81(sdk::unknown_ptr) tooltip_get_size_and_position;
    
    // [xxxTooltipHandleTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13f728, 0x13864 bytes
    // win32kfull.sys .text:0x243a20, 0x1596d bytes
    // win32kfull.sys .text:0x2416f4, 0x1659e bytes
    // win32kfull.sys .text:0x2438d0, 0x1596d bytes
    //
    _t82(sdk::unknown_ptr) tooltip_handle_timer;
    
    // [xxxTooltipRender]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x140e0c, 0x13864 bytes
    // win32kfull.sys .text:0x243afc, 0x1596d bytes
    // win32kfull.sys .text:0x2417d0, 0x1659e bytes
    // win32kfull.sys .text:0x2439ac, 0x1596d bytes
    //
    _t83(sdk::unknown_ptr) tooltip_render;
    
    // [xxxTooltipWndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x28580, 0x13864 bytes
    // win32kfull.sys .text:0xdac60, 0x1596d bytes
    // win32kfull.sys .text:0x911f0, 0x1659e bytes
    // win32kfull.sys .text:0xdb920, 0x1596d bytes
    //
    _t84(sdk::unknown_ptr) tooltip_wnd_proc;
    
    // [xxxTrackBox]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x230380, 0x13864 bytes
    // win32kfull.sys .text:0x247610, 0x1596d bytes
    // win32kfull.sys .text:0x2459e0, 0x1659e bytes
    // win32kfull.sys .text:0x247520, 0x1596d bytes
    //
    _t85(sdk::unknown_ptr) track_box;
    
    // [xxxTrackCaptionButton]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x232df0, 0x13864 bytes
    // win32kfull.sys .text:0x2484e0, 0x1596d bytes
    // win32kfull.sys .text:0x246250, 0x1659e bytes
    // win32kfull.sys .text:0x2483f0, 0x1596d bytes
    //
    _t86(sdk::unknown_ptr) track_caption_button;
    
    // [xxxTrackInitSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x204538, 0x13864 bytes
    // win32kfull.sys .text:0x211774, 0x1596d bytes
    // win32kfull.sys .text:0x212780, 0x1659e bytes
    // win32kfull.sys .text:0x2115e4, 0x1596d bytes
    //
    _t87(sdk::unknown_ptr) track_init_size;
    
    // [xxxTrackMouseMove]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d214, 0x13864 bytes
    // win32kfull.sys .text:0xd7f40, 0x1596d bytes
    // win32kfull.sys .text:0xa60d0, 0x1659e bytes
    // win32kfull.sys .text:0xd8c00, 0x1596d bytes
    //
    _t88(sdk::unknown_ptr) track_mouse_move;
    
    // [xxxTrackPopupMenuEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12d274, 0x13864 bytes
    // win32kfull.sys .text:0x24b6d8, 0x1596d bytes
    // win32kfull.sys .text:0x249170, 0x1659e bytes
    // win32kfull.sys .text:0x24b5e8, 0x1596d bytes
    //
    _t89(sdk::unknown_ptr) track_popup_menu_ex;
    
    // [xxxTrackThumb]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2304e0, 0x13864 bytes
    // win32kfull.sys .text:0x247780, 0x1596d bytes
    // win32kfull.sys .text:0x245b50, 0x1659e bytes
    // win32kfull.sys .text:0x247690, 0x1596d bytes
    //
    _t90(sdk::unknown_ptr) track_thumb;
    
    // [xxxTranslateAccelerator]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x38f34, 0x13864 bytes
    // win32kfull.sys .text:0xfec58, 0x1596d bytes
    // win32kfull.sys .text:0xfad84, 0x1659e bytes
    // win32kfull.sys .text:0xffb88, 0x1596d bytes
    //
    _t91(sdk::unknown_ptr) translate_accelerator;
    
    // [xxxTranslateMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13394, 0x13864 bytes
    // win32kfull.sys .text:0x1040e0, 0x1596d bytes
    // win32kfull.sys .text:0xfdebc, 0x1659e bytes
    // win32kfull.sys .text:0x105010, 0x1596d bytes
    //
    _t92(sdk::unknown_ptr) translate_message;
    
    // [xxxTurnOffCompositing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e112c, 0x13864 bytes
    // win32kfull.sys .text:0x1e8bd0, 0x1596d bytes
    // win32kfull.sys .text:0x1e52b8, 0x1659e bytes
    // win32kfull.sys .text:0x1e8a30, 0x1596d bytes
    //
    _t93(sdk::unknown_ptr) turn_off_compositing;
    
    // [xxxTurnOffStickyKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e787c, 0x13864 bytes
    // win32kbase.sys .text:0x192160, 0x243e0 bytes
    // win32kbase.sys .text:0x1d1f00, 0x27ef0 bytes
    // win32kbase.sys .text:0x190550, 0x243e0 bytes
    //
    _t94(sdk::unknown_ptr) turn_off_sticky_keys;
    
    // [xxxTwoKeysDown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7914, 0x13864 bytes
    // win32kbase.sys .text:0x1921c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d1f60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1905b0, 0x243e0 bytes
    //
    _t95(sdk::unknown_ptr) two_keys_down;
    
    // [xxxUnadviseAck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4df0, 0x13864 bytes
    // win32kfull.sys .text:0x21d2f0, 0x1596d bytes
    // win32kfull.sys .text:0x219e40, 0x1659e bytes
    // win32kfull.sys .text:0x21d160, 0x1596d bytes
    //
    _t96(sdk::unknown_ptr) unadvise_ack;
    
    // [xxxUnexpectedClientPost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4e50, 0x13864 bytes
    // win32kfull.sys .text:0x21d3ac, 0x1596d bytes
    // win32kfull.sys .text:0x219f44, 0x1659e bytes
    // win32kfull.sys .text:0x21d21c, 0x1596d bytes
    //
    _t97(sdk::unknown_ptr) unexpected_client_post;
    
    // [xxxUnexpectedServerPost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e4f24, 0x13864 bytes
    // win32kfull.sys .text:0x21d490, 0x1596d bytes
    // win32kfull.sys .text:0x21a078, 0x1659e bytes
    // win32kfull.sys .text:0x21d300, 0x1596d bytes
    //
    _t98(sdk::unknown_ptr) unexpected_server_post;
    
    // [xxxUnlatchStickyKeys]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e79f8, 0x13864 bytes
    // win32kbase.sys .text:0x192240, 0x243e0 bytes
    // win32kbase.sys .text:0x1d1fe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x190630, 0x243e0 bytes
    //
    _t99(sdk::unknown_ptr) unlatch_sticky_keys;
    
    // [xxxUnlockMenuState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11f160, 0x13864 bytes
    // win32kfull.sys .text:0x223980, 0x1596d bytes
    // win32kfull.sys .text:0x21f2d0, 0x1659e bytes
    // win32kfull.sys .text:0x223840, 0x1596d bytes
    //
    _u00(sdk::unknown_ptr) unlock_menu_state;
    
    // [xxxUnlockMenuStateInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x133b04, 0x13864 bytes
    // win32kfull.sys .text:0x22226c, 0x1596d bytes
    // win32kfull.sys .text:0x21e2e4, 0x1659e bytes
    // win32kfull.sys .text:0x222134, 0x1596d bytes
    //
    _u01(sdk::unknown_ptr) unlock_menu_state_internal;
    
    // [xxxUnusedFunctionId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _u02(sdk::unknown_ptr) unused_function_id;
    
    // [xxxUpdateInputHangInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xac990, 0x13864 bytes
    // win32kfull.sys .text:0x5b9b0, 0x1596d bytes
    // win32kfull.sys .text:0x2bb90, 0x1659e bytes
    // win32kfull.sys .text:0x5bdd0, 0x1596d bytes
    //
    _u03(sdk::unknown_ptr) update_input_hang_info;
    
    // [xxxUpdateModifierState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e7a98, 0x13864 bytes
    // win32kbase.sys .text:0x1922b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1d2050, 0x27ef0 bytes
    // win32kbase.sys .text:0x1906a0, 0x243e0 bytes
    //
    _u04(sdk::unknown_ptr) update_modifier_state;
    
    // [xxxUpdateOtherThreadsWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2047f8, 0x13864 bytes
    // win32kfull.sys .text:0x211aac, 0x1596d bytes
    // win32kfull.sys .text:0x212ab8, 0x1659e bytes
    // win32kfull.sys .text:0x21191c, 0x1596d bytes
    //
    _u05(sdk::unknown_ptr) update_other_threads_windows;
    
    // [xxxUpdatePerUserAccessPackSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c984, 0x13864 bytes
    // win32kbase.sys .text:0x1f510, 0x243e0 bytes
    // win32kbase.sys .text:0x804b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5c80, 0x243e0 bytes
    //
    _u06(sdk::unknown_ptr) update_per_user_access_pack_settings;
    
    // [xxxUpdatePerUserSystemParameters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x30120, 0x13864 bytes
    // win32kfull.sys .text:0x2b0ec, 0x1596d bytes
    // win32kfull.sys .text:0xc9c0c, 0x1659e bytes
    // win32kfull.sys .text:0x2b4fc, 0x1596d bytes
    //
    _u07(sdk::unknown_ptr) update_per_user_system_parameters;
    
    // [xxxUpdateShadowZorder]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x227040, 0x13864 bytes
    // win32kfull.sys .text:0x23ec58, 0x1596d bytes
    // win32kfull.sys .text:0x23c518, 0x1659e bytes
    // win32kfull.sys .text:0x23eb08, 0x1596d bytes
    //
    _u08(sdk::unknown_ptr) update_shadow_zorder;
    
    // [xxxUpdateSystemCursorFromRegistry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2f024, 0x13864 bytes
    // win32kfull.sys .text:0x1e750, 0x1596d bytes
    // win32kfull.sys .text:0x9723c, 0x1659e bytes
    // win32kfull.sys .text:0x1eb60, 0x1596d bytes
    //
    _u09(sdk::unknown_ptr) update_system_cursor_from_registry;
    
    // [xxxUpdateSystemCursorsFromRegistry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2eff8, 0x13864 bytes
    // win32kfull.sys .text:0x1f144, 0x1596d bytes
    // win32kfull.sys .text:0x971f8, 0x1659e bytes
    // win32kfull.sys .text:0x1f554, 0x1596d bytes
    //
    _u10(sdk::unknown_ptr) update_system_cursors_from_registry;
    
    // [xxxUpdateSystemIconsFromRegistry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2e00c, 0x13864 bytes
    // win32kfull.sys .text:0x2ad34, 0x1596d bytes
    // win32kfull.sys .text:0xcaef4, 0x1659e bytes
    // win32kfull.sys .text:0x2b144, 0x1596d bytes
    //
    _u11(sdk::unknown_ptr) update_system_icons_from_registry;
    
    // [xxxUpdateThreadsWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20778c, 0x13864 bytes
    // win32kfull.sys .text:0x213b5c, 0x1596d bytes
    // win32kfull.sys .text:0x212f68, 0x1659e bytes
    // win32kfull.sys .text:0x2139cc, 0x1596d bytes
    //
    _u12(sdk::unknown_ptr) update_threads_windows;
    
    // [xxxUpdateTray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x40910, 0x13864 bytes
    // win32kfull.sys .text:0x4fe30, 0x1596d bytes
    // win32kfull.sys .text:0x9f71c, 0x1659e bytes
    // win32kfull.sys .text:0x50250, 0x1596d bytes
    //
    _u13(sdk::unknown_ptr) update_tray;
    
    // [xxxUpdateWindow2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x41a5c, 0x13864 bytes
    // win32kfull.sys .text:0x35540, 0x1596d bytes
    // win32kfull.sys .text:0x33434, 0x1659e bytes
    // win32kfull.sys .text:0x35950, 0x1596d bytes
    //
    _u14(sdk::unknown_ptr) update_window2;
    
    // [xxxUpdateWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x228bf0, 0x13864 bytes
    // win32kfull.sys .text:0x242ee0, 0x1596d bytes
    // win32kfull.sys .text:0x23ffb8, 0x1659e bytes
    // win32kfull.sys .text:0x242d90, 0x1596d bytes
    //
    _u15(sdk::unknown_ptr) update_windows;
    
    // [xxxUserChangeDisplaySettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12910, 0x1eb80 bytes
    // win32kbase.sys .text:0x92e30, 0x243e0 bytes
    // win32kbase.sys .text:0x61020, 0x27ef0 bytes
    // win32kbase.sys .text:0x49180, 0x243e0 bytes
    //
    _u16(sdk::unknown_ptr) user_change_display_settings;
    
    // [xxxUserChangeDisplaySettingsInternal]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12df8, 0x1eb80 bytes
    // win32kbase.sys .text:0x151e8, 0x243e0 bytes
    // win32kbase.sys .text:0x617f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x48bb8, 0x243e0 bytes
    //
    _u17(sdk::unknown_ptr) user_change_display_settings_internal;
    
    // [xxxUserModeCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x210380, 0x13864 bytes
    // win32kfull.sys .text:0x2344c8, 0x1596d bytes
    // win32kfull.sys .text:0x22fca0, 0x1659e bytes
    // win32kfull.sys .text:0x234388, 0x1596d bytes
    //
    _u18(sdk::unknown_ptr) user_mode_callback;
    
    // [xxxUserNotifyConsoleApplication]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x55070, 0x13864 bytes
    // win32kfull.sys .text:0x51948, 0x1596d bytes
    // win32kfull.sys .text:0xa1e80, 0x1659e bytes
    // win32kfull.sys .text:0x51d68, 0x1596d bytes
    //
    _u19(sdk::unknown_ptr) user_notify_console_application;
    
    // [xxxUserNotifyProcessCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xfd714, 0x13864 bytes
    // win32kfull.sys .text:0x50f74, 0x1596d bytes
    // win32kfull.sys .text:0xa182c, 0x1659e bytes
    // win32kfull.sys .text:0x51394, 0x1596d bytes
    //
    _u20(sdk::unknown_ptr) user_notify_process_create;
    
    // [xxxUserPowerCalloutWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149280, 0x13864 bytes
    // win32kfull.sys .text:0x153ee0, 0x1596d bytes
    // win32kbase.sys .text:0x69c40, 0x27ef0 bytes
    // win32kfull.sys .text:0x154e20, 0x1596d bytes
    //
    _u21(sdk::unknown_ptr) user_power_callout_worker;
    
    // [xxxUserPowerEventCalloutWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd18c, 0x1eb80 bytes
    // win32kbase.sys .text:0x91240, 0x243e0 bytes
    // win32kbase.sys .text:0x69eb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x6e5a0, 0x243e0 bytes
    //
    _u22(sdk::unknown_ptr) user_power_event_callout_worker;
    
    // [xxxUserPowerStateCalloutWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87148, 0x1eb80 bytes
    // win32kbase.sys .text:0xce798, 0x243e0 bytes
    // win32kbase.sys .text:0xdfce8, 0x27ef0 bytes
    // win32kbase.sys .text:0xcd65c, 0x243e0 bytes
    //
    _u23(sdk::unknown_ptr) user_power_state_callout_worker;
    
    // [xxxUserProcessCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x365f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x66c90, 0x243e0 bytes
    // win32kbase.sys .text:0x1d590, 0x27ef0 bytes
    // win32kbase.sys .text:0x61430, 0x243e0 bytes
    //
    _u24(sdk::unknown_ptr) user_process_callout;
    
    // [xxxUserReinitializeAutoRotation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11f170, 0x13864 bytes
    // win32kfull.sys .text:0x128c40, 0x1596d bytes
    // win32kfull.sys .text:0x118510, 0x1659e bytes
    // win32kfull.sys .text:0x129b80, 0x1596d bytes
    //
    _u25(sdk::unknown_ptr) user_reinitialize_auto_rotation;
    
    // [xxxUserResetDisplayDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x144560, 0x13864 bytes
    // win32kfull.sys .text:0x151f50, 0x1596d bytes
    // win32kfull.sys .text:0x146590, 0x1659e bytes
    // win32kfull.sys .text:0x152e90, 0x1596d bytes
    //
    _u26(sdk::unknown_ptr) user_reset_display_device;
    
    // [xxxUserResetDisplayDeviceBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x1091a0, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22bc90, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f7f0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229cd0, 0x243e0 bytes
    //
    _u27(sdk::unknown_ptr) user_reset_display_device_begin;
    
    // [xxxUserResetDisplayDeviceEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109190, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22bc40, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f7a0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229c80, 0x243e0 bytes
    //
    _u28(sdk::unknown_ptr) user_reset_display_device_end;
    
    // [xxxUserSetDisplayConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe010, 0x1eb80 bytes
    // win32kbase.sys .text:0x846b0, 0x243e0 bytes
    // win32kbase.sys .text:0x6b8d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc23e0, 0x243e0 bytes
    //
    _u29(sdk::unknown_ptr) user_set_display_config;
    
    // [xxxUserYield]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e313c, 0x13864 bytes
    // win32kfull.sys .text:0x1eb13c, 0x1596d bytes
    // win32kfull.sys .text:0x1e7dac, 0x1659e bytes
    // win32kfull.sys .text:0x1eaf9c, 0x1596d bytes
    //
    _u30(sdk::unknown_ptr) user_yield;
    
    // [xxxValidateRect]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118850, 0x13864 bytes
    // win32kfull.sys .text:0x115238, 0x1596d bytes
    // win32kfull.sys .text:0x10dc7c, 0x1659e bytes
    // win32kfull.sys .text:0x116168, 0x1596d bytes
    //
    _u31(sdk::unknown_ptr) validate_rect;
    
    // [xxxVolumeUpDownComboSupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e3380, 0x13864 bytes
    // win32kfull.sys .text:0x1eb4d8, 0x1596d bytes
    // win32kfull.sys .text:0x1e8124, 0x1659e bytes
    // win32kfull.sys .text:0x1eb338, 0x1596d bytes
    //
    _u32(sdk::unknown_ptr) volume_up_down_combo_supported;
    
    // [xxxWaitForDITMouseInjectionFlush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d930, 0x13864 bytes
    // win32kfull.sys .text:0xd4840, 0x1596d bytes
    // win32kfull.sys .text:0x102790, 0x1659e bytes
    // win32kfull.sys .text:0xd5500, 0x1596d bytes
    //
    _u33(sdk::unknown_ptr) wait_for_dit_mouse_injection_flush;
    
    // [xxxWaitForInputIdle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xf77bc, 0x13864 bytes
    // win32kfull.sys .text:0x11efe0, 0x1596d bytes
    // win32kfull.sys .text:0x107b7c, 0x1659e bytes
    // win32kfull.sys .text:0x11fee0, 0x1596d bytes
    //
    _u34(sdk::unknown_ptr) wait_for_input_idle;
    
    // [xxxWaitForVideoPortCalloutReady]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9d14, 0x1eb80 bytes
    // win32kbase.sys .text:0x12e760, 0x243e0 bytes
    // win32kbase.sys .text:0xe2158, 0x27ef0 bytes
    // win32kbase.sys .text:0x12bfe0, 0x243e0 bytes
    //
    _u35(sdk::unknown_ptr) wait_for_video_port_callout_ready;
    
    // [xxxWaitMessageEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1cab4, 0x13864 bytes
    // win32kfull.sys .text:0x1e3268, 0x1596d bytes
    // win32kfull.sys .text:0x1dfbe8, 0x1659e bytes
    // win32kfull.sys .text:0x1e30c8, 0x1596d bytes
    //
    _u36(sdk::unknown_ptr) wait_message_ex;
    
    // [xxxWindowEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb1de0, 0x13864 bytes
    // win32kfull.sys .text:0x9b160, 0x1596d bytes
    // win32kfull.sys .text:0x57630, 0x1659e bytes
    // win32kfull.sys .text:0x9bcd0, 0x1596d bytes
    //
    _u37(sdk::unknown_ptr) window_event;
    
    // [xxxWindowFromPoint]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x94cd4, 0x13864 bytes
    // win32kfull.sys .text:0xaf04c, 0x1596d bytes
    // win32kfull.sys .text:0xa8428, 0x1659e bytes
    // win32kfull.sys .text:0xafbbc, 0x1596d bytes
    //
    _u38(sdk::unknown_ptr) window_from_point;
    
    // [xxxWindowHitTest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x411cc, 0x13864 bytes
    // win32kfull.sys .text:0x107ec4, 0x1596d bytes
    // win32kfull.sys .text:0xbc580, 0x1659e bytes
    // win32kfull.sys .text:0x108df4, 0x1596d bytes
    //
    _u39(sdk::unknown_ptr) window_hit_test;
    
    // [xxxWindowHitTest2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x41278, 0x13864 bytes
    // win32kfull.sys .text:0x107f7c, 0x1596d bytes
    // win32kfull.sys .text:0xbc638, 0x1659e bytes
    // win32kfull.sys .text:0x108eac, 0x1596d bytes
    //
    _u40(sdk::unknown_ptr) window_hit_test2;
    
    // [xxxWindowHitTestFromTargetingProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x224ec0, 0x13864 bytes
    // win32kfull.sys .text:0x2173d4, 0x1596d bytes
    // win32kfull.sys .text:0x208fb0, 0x1659e bytes
    // win32kfull.sys .text:0x217244, 0x1596d bytes
    //
    _u41(sdk::unknown_ptr) window_hit_test_from_targeting_property;
    
    // [xxxWindowHitTestWithTargeting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2251dc, 0x13864 bytes
    // win32kfull.sys .text:0x217784, 0x1596d bytes
    // win32kfull.sys .text:0x20930c, 0x1659e bytes
    // win32kfull.sys .text:0x2175f4, 0x1596d bytes
    //
    _u42(sdk::unknown_ptr) window_hit_test_with_targeting;
    
    // [xxxWindowHitTestWithoutTargeting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22555c, 0x13864 bytes
    // win32kfull.sys .text:0x217afc, 0x1596d bytes
    // win32kfull.sys .text:0x209684, 0x1659e bytes
    // win32kfull.sys .text:0x21796c, 0x1596d bytes
    //
    _u43(sdk::unknown_ptr) window_hit_test_without_targeting;
    
    // [xxxWrapCallWindowProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1188f0, 0x13864 bytes
    // win32kfull.sys .text:0x14d840, 0x1596d bytes
    // win32kfull.sys .text:0x141fd0, 0x1659e bytes
    // win32kfull.sys .text:0x14e780, 0x1596d bytes
    //
    _u44(sdk::unknown_ptr) wrap_call_window_proc;
    
    // [xxxWrapDesktopWndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118890, 0x13864 bytes
    // win32kfull.sys .text:0xdac00, 0x1596d bytes
    // win32kfull.sys .text:0x10fc70, 0x1659e bytes
    // win32kfull.sys .text:0xdb8c0, 0x1596d bytes
    //
    _u45(sdk::unknown_ptr) wrap_desktop_wnd_proc;
    
    // [xxxWrapMenuWindowProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12dad0, 0x13864 bytes
    // win32kfull.sys .text:0x1e43e0, 0x1596d bytes
    // win32kfull.sys .text:0x15a920, 0x1659e bytes
    // win32kfull.sys .text:0x1e4240, 0x1596d bytes
    //
    _u46(sdk::unknown_ptr) wrap_menu_window_proc;
    
    // [xxxWrapRealDefWindowProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa8790, 0x13864 bytes
    // win32kfull.sys .text:0xab750, 0x1596d bytes
    // win32kfull.sys .text:0x49ae0, 0x1659e bytes
    // win32kfull.sys .text:0xac2c0, 0x1596d bytes
    //
    _u47(sdk::unknown_ptr) wrap_real_def_window_proc;
    
    // [xxxWrapSBWndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dcf10, 0x13864 bytes
    // win32kfull.sys .text:0x1e4440, 0x1596d bytes
    // win32kfull.sys .text:0x1e0d20, 0x1659e bytes
    // win32kfull.sys .text:0x1e42a0, 0x1596d bytes
    //
    _u48(sdk::unknown_ptr) wrap_sb_wnd_proc;
    
    // [xxxWrapSendMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb2610, 0x13864 bytes
    // win32kfull.sys .text:0x5dad0, 0x1596d bytes
    // win32kfull.sys .text:0xf1410, 0x1659e bytes
    // win32kfull.sys .text:0x5def0, 0x1596d bytes
    //
    _u49(sdk::unknown_ptr) wrap_send_message;
    
    // [xxxWrapSendMessageBSM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1045d0, 0x13864 bytes
    // win32kfull.sys .text:0x34d80, 0x1596d bytes
    // win32kfull.sys .text:0x880e0, 0x1659e bytes
    // win32kfull.sys .text:0x35190, 0x1596d bytes
    //
    _u50(sdk::unknown_ptr) wrap_send_message_bsm;
    
    // [xxxWrapSendMessageCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44820, 0x13864 bytes
    // win32kfull.sys .text:0x33580, 0x1596d bytes
    // win32kfull.sys .text:0xa6a30, 0x1659e bytes
    // win32kfull.sys .text:0x33990, 0x1596d bytes
    //
    _u51(sdk::unknown_ptr) wrap_send_message_callback;
    
    // [xxxWrapSendNotifyMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x446b0, 0x13864 bytes
    // win32kfull.sys .text:0x333a0, 0x1596d bytes
    // win32kfull.sys .text:0xa6850, 0x1659e bytes
    // win32kfull.sys .text:0x337b0, 0x1596d bytes
    //
    _u52(sdk::unknown_ptr) wrap_send_notify_message;
    
    // [xxxWrapSwitchWndProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dcf70, 0x13864 bytes
    // win32kfull.sys .text:0x1e44a0, 0x1596d bytes
    // win32kfull.sys .text:0x1e0d80, 0x1659e bytes
    // win32kfull.sys .text:0x1e4300, 0x1596d bytes
    //
    _u53(sdk::unknown_ptr) wrap_switch_wnd_proc;
};
#include "magic/api.end.hpp"
