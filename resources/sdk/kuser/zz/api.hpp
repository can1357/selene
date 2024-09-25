#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::zz
{
    // [zzzCancelInertiaState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1eff8c, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) cancel_inertia_state;
    
    // [zzzClipCursorEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x33bf0, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) clip_cursor_ex;
    
    // [zzzPostInertiaMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22c668, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) post_inertia_message;
    
    // [zzzSendEndInertia]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1effec, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) send_end_inertia;
    
    // [zzzSetCursorPosByType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x34b48, 0x13864 bytes
    //
    _m4(sdk::unknown_ptr) set_cursor_pos_by_type;
    
    // [zzzSetFMouseMoved]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x225c0, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) set_f_mouse_moved;
    
    // [zzzSetFMouseMovedWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x9de14, 0x13864 bytes
    //
    _m6(sdk::unknown_ptr) set_f_mouse_moved_worker;
    
    // [zzzUpdateUserScreen]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x66884, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) update_user_screen;
    
    // [zzzAttachToQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x21edc, 0x13864 bytes
    // win32kfull.sys .text:0x30320, 0x1596d bytes
    // win32kfull.sys .text:0x30730, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) attach_to_queue;
    
    // [zzzEndDeferWinEventNotify]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80b1c, 0x1596d bytes
    // win32kfull.sys .text:0x3a6f0, 0x1659e bytes
    // win32kfull.sys .text:0x8168c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) end_defer_win_event_notify;
    
    // [zzzFixupGlobalCursorWhenChanged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1f110, 0x1596d bytes
    // win32kfull.sys .text:0x97b68, 0x1659e bytes
    // win32kfull.sys .text:0x1f520, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) fixup_global_cursor_when_changed;
    
    // [zzzHideCursorNoCapture]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x1e0040, 0x13864 bytes
    // win32kfull.sys .text:0x1d4a30, 0x1596d bytes
    // win32kfull.sys .text:0x1d48d0, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) hide_cursor_no_capture;
    
    // [zzzInputFocusLostWindowEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x32044, 0x1596d bytes
    // win32kfull.sys .text:0xc1948, 0x1659e bytes
    // win32kfull.sys .text:0x32454, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) input_focus_lost_window_event;
    
    // [zzzInputFocusReceivedWindowEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x320b4, 0x1596d bytes
    // win32kfull.sys .text:0xc18e4, 0x1659e bytes
    // win32kfull.sys .text:0x324c4, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) input_focus_received_window_event;
    
    // [zzzInternalSetSystemCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e9a4, 0x1596d bytes
    // win32kfull.sys .text:0x97490, 0x1659e bytes
    // win32kfull.sys .text:0x1edb4, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) internal_set_system_cursor;
    
    // [zzzSetSystemCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d4a8c, 0x1596d bytes
    // win32kfull.sys .text:0x1d2180, 0x1659e bytes
    // win32kfull.sys .text:0x1d492c, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) set_system_cursor;
    
    // [zzzUpdateShadowAlpha]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x131e2c, 0x1596d bytes
    // win32kfull.sys .text:0x122e70, 0x1659e bytes
    // win32kfull.sys .text:0x132d6c, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) update_shadow_alpha;
    
    // [zzzActiveCursorTracking]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1db7e0, 0x13864 bytes
    // win32kfull.sys .text:0x1e32a8, 0x1596d bytes
    // win32kfull.sys .text:0x1dfc28, 0x1659e bytes
    // win32kfull.sys .text:0x1e3108, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) active_cursor_tracking;
    
    // [zzzAddAttachment]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21e94, 0x13864 bytes
    // win32kfull.sys .text:0x302d4, 0x1596d bytes
    // win32kfull.sys .text:0xc0010, 0x1659e bytes
    // win32kfull.sys .text:0x306e4, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) add_attachment;
    
    // [zzzAnimateCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3b3c0, 0x13864 bytes
    // win32kfull.sys .text:0x9c5b0, 0x1596d bytes
    // win32kfull.sys .text:0x58d00, 0x1659e bytes
    // win32kfull.sys .text:0x9d120, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) animate_cursor;
    
    // [zzzAnimateFade]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x130bb0, 0x13864 bytes
    // win32kfull.sys .text:0x1e8c7c, 0x1596d bytes
    // win32kfull.sys .text:0x1e5364, 0x1659e bytes
    // win32kfull.sys .text:0x1e8adc, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) animate_fade;
    
    // [zzzApplyShadow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12ac38, 0x13864 bytes
    // win32kfull.sys .text:0x131cdc, 0x1596d bytes
    // win32kfull.sys .text:0x122d1c, 0x1659e bytes
    // win32kfull.sys .text:0x132c1c, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) apply_shadow;
    
    // [zzzAttachThreadInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x213cc, 0x13864 bytes
    // win32kfull.sys .text:0x2fa2c, 0x1596d bytes
    // win32kfull.sys .text:0xbf7e0, 0x1659e bytes
    // win32kfull.sys .text:0x2fe3c, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) attach_thread_input;
    
    // [zzzBltValidBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x94ecc, 0x13864 bytes
    // win32kfull.sys .text:0x80c00, 0x1596d bytes
    // win32kfull.sys .text:0x317b0, 0x1659e bytes
    // win32kfull.sys .text:0x81770, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) blt_valid_bits;
    
    // [zzzCalcStartCursorHide]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa3e30, 0x13864 bytes
    // win32kfull.sys .text:0x9cfe0, 0x1596d bytes
    // win32kfull.sys .text:0x583b0, 0x1659e bytes
    // win32kfull.sys .text:0x9db50, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) calc_start_cursor_hide;
    
    // [zzzCancelJournalling]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3654c, 0x13864 bytes
    // win32kfull.sys .text:0x2d218, 0x1596d bytes
    // win32kfull.sys .text:0x10f52c, 0x1659e bytes
    // win32kfull.sys .text:0x2d628, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) cancel_journalling;
    
    // [zzzChangeStates]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5552c, 0x13864 bytes
    // win32kfull.sys .text:0x7bfc0, 0x1596d bytes
    // win32kfull.sys .text:0x50c1c, 0x1659e bytes
    // win32kfull.sys .text:0x7cb30, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) change_states;
    
    // [zzzCloakShadow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x227110, 0x13864 bytes
    // win32kfull.sys .text:0x23ed60, 0x1596d bytes
    // win32kfull.sys .text:0x23c5f4, 0x1659e bytes
    // win32kfull.sys .text:0x23ec10, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) cloak_shadow;
    
    // [zzzComposeDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xcff0, 0x13864 bytes
    // win32kfull.sys .text:0xbc3d8, 0x1596d bytes
    // win32kfull.sys .text:0x89808, 0x1659e bytes
    // win32kfull.sys .text:0xbcf48, 0x1596d bytes
    //
    _o8(sdk::unknown_ptr) compose_desktop;
    
    // [zzzDecomposeDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xcae8, 0x13864 bytes
    // win32kfull.sys .text:0x36ae4, 0x1596d bytes
    // win32kfull.sys .text:0x82c84, 0x1659e bytes
    // win32kfull.sys .text:0x36ef4, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) decompose_desktop;
    
    // [zzzDestroyCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x38a70, 0x13864 bytes
    // win32kfull.sys .text:0x105ea0, 0x1596d bytes
    // win32kfull.sys .text:0x995c, 0x1659e bytes
    // win32kfull.sys .text:0x106dd0, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) destroy_caret;
    
    // [zzzDestroyQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x37c20, 0x1eb80 bytes
    // win32kbase.sys .text:0x6f4f0, 0x243e0 bytes
    // win32kbase.sys .text:0x205b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12510, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) destroy_queue;
    
    // [zzzDrawInvertScrollArea]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22d78c, 0x13864 bytes
    // win32kfull.sys .text:0x245c84, 0x1596d bytes
    // win32kfull.sys .text:0x243e4c, 0x1659e bytes
    // win32kfull.sys .text:0x245b94, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) draw_invert_scroll_area;
    
    // [zzzDwmStartRedirection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xcc5c, 0x13864 bytes
    // win32kfull.sys .text:0xbbf0c, 0x1596d bytes
    // win32kfull.sys .text:0x8aa58, 0x1659e bytes
    // win32kfull.sys .text:0xbca7c, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) dwm_start_redirection;
    
    // [zzzEnableDwmPointerSupport]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3699c, 0x13864 bytes
    // win32kfull.sys .text:0x2dc8c, 0x1596d bytes
    // win32kfull.sys .text:0xc7430, 0x1659e bytes
    // win32kfull.sys .text:0x2e09c, 0x1596d bytes
    //
    _p4(sdk::unknown_ptr) enable_dwm_pointer_support;
    
    // [zzzHideCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3aff4, 0x13864 bytes
    // win32kfull.sys .text:0x24240c, 0x1596d bytes
    // win32kfull.sys .text:0x23d714, 0x1659e bytes
    // win32kfull.sys .text:0x2422bc, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) hide_caret;
    
    // [zzzImeCanDestroyDefIME]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4a58c, 0x13864 bytes
    // win32kfull.sys .text:0x4d510, 0x1596d bytes
    // win32kfull.sys .text:0xb4080, 0x1659e bytes
    // win32kfull.sys .text:0x4d920, 0x1596d bytes
    //
    _p6(sdk::unknown_ptr) ime_can_destroy_def_ime;
    
    // [zzzImeSetFutureOwner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4c340, 0x13864 bytes
    // win32kfull.sys .text:0x4da14, 0x1596d bytes
    // win32kfull.sys .text:0xe2c5c, 0x1659e bytes
    // win32kfull.sys .text:0x4de34, 0x1596d bytes
    //
    _p7(sdk::unknown_ptr) ime_set_future_owner;
    
    // [zzzImeSetOwnerWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4c924, 0x13864 bytes
    // win32kfull.sys .text:0x4e424, 0x1596d bytes
    // win32kfull.sys .text:0xb1e44, 0x1659e bytes
    // win32kfull.sys .text:0x4e844, 0x1596d bytes
    //
    _p8(sdk::unknown_ptr) ime_set_owner_window;
    
    // [zzzInternalDestroyCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3a8a0, 0x13864 bytes
    // win32kfull.sys .text:0x106120, 0x1596d bytes
    // win32kfull.sys .text:0x9988, 0x1659e bytes
    // win32kfull.sys .text:0x107050, 0x1596d bytes
    //
    _p9(sdk::unknown_ptr) internal_destroy_caret;
    
    // [zzzInternalHideCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3b1e0, 0x13864 bytes
    // win32kfull.sys .text:0x772d4, 0x1596d bytes
    // win32kfull.sys .text:0x9a6c, 0x1659e bytes
    // win32kfull.sys .text:0x77e44, 0x1596d bytes
    //
    _q0(sdk::unknown_ptr) internal_hide_caret;
    
    // [zzzInternalSetCursorPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22b38, 0x13864 bytes
    // win32kfull.sys .text:0xd234c, 0x1596d bytes
    // win32kfull.sys .text:0xbc358, 0x1659e bytes
    // win32kfull.sys .text:0xd300c, 0x1596d bytes
    //
    _q1(sdk::unknown_ptr) internal_set_cursor_pos;
    
    // [zzzInternalShowCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3b134, 0x13864 bytes
    // win32kfull.sys .text:0x77224, 0x1596d bytes
    // win32kfull.sys .text:0x9f44, 0x1659e bytes
    // win32kfull.sys .text:0x77d94, 0x1596d bytes
    //
    _q2(sdk::unknown_ptr) internal_show_caret;
    
    // [zzzJournalAttach]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e0094, 0x13864 bytes
    // win32kfull.sys .text:0x1e6f68, 0x1596d bytes
    // win32kfull.sys .text:0x1e3400, 0x1659e bytes
    // win32kfull.sys .text:0x1e6dc8, 0x1596d bytes
    //
    _q3(sdk::unknown_ptr) journal_attach;
    
    // [zzzLockDisplayAreaAndInvalidateDCCache]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9cc40, 0x13864 bytes
    // win32kfull.sys .text:0x85344, 0x1596d bytes
    // win32kfull.sys .text:0x33664, 0x1659e bytes
    // win32kfull.sys .text:0x85eb4, 0x1596d bytes
    //
    _q4(sdk::unknown_ptr) lock_display_area_and_invalidate_dc_cache;
    
    // [zzzLockWindowUpdate2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4204c, 0x13864 bytes
    // win32kfull.sys .text:0x30a60, 0x1596d bytes
    // win32kfull.sys .text:0xdb06c, 0x1659e bytes
    // win32kfull.sys .text:0x30e70, 0x1596d bytes
    //
    _q5(sdk::unknown_ptr) lock_window_update2;
    
    // [zzzMNFadeSelection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12de74, 0x13864 bytes
    // win32kfull.sys .text:0x237154, 0x1596d bytes
    // win32kfull.sys .text:0x232780, 0x1659e bytes
    // win32kfull.sys .text:0x237014, 0x1596d bytes
    //
    _q6(sdk::unknown_ptr) mn_fade_selection;
    
    // [zzzMoveShadow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x227174, 0x13864 bytes
    // win32kfull.sys .text:0x23ee00, 0x1596d bytes
    // win32kfull.sys .text:0x23c668, 0x1659e bytes
    // win32kfull.sys .text:0x23ecb0, 0x1596d bytes
    //
    _q7(sdk::unknown_ptr) move_shadow;
    
    // [zzzReattachThreads]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21904, 0x13864 bytes
    // win32kfull.sys .text:0x2fd80, 0x1596d bytes
    // win32kfull.sys .text:0xbfb0c, 0x1659e bytes
    // win32kfull.sys .text:0x30190, 0x1596d bytes
    //
    _q8(sdk::unknown_ptr) reattach_threads;
    
    // [zzzRecalc2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21da4, 0x13864 bytes
    // win32kfull.sys .text:0x301c4, 0x1596d bytes
    // win32kfull.sys .text:0xbff00, 0x1659e bytes
    // win32kfull.sys .text:0x305d4, 0x1596d bytes
    //
    _q9(sdk::unknown_ptr) recalc2;
    
    // [zzzRecalcThreadAttachment]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21cf8, 0x13864 bytes
    // win32kfull.sys .text:0x30108, 0x1596d bytes
    // win32kfull.sys .text:0xbfe40, 0x1659e bytes
    // win32kfull.sys .text:0x30518, 0x1596d bytes
    //
    _r0(sdk::unknown_ptr) recalc_thread_attachment;
    
    // [zzzRegisterSystemThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x142730, 0x13864 bytes
    // win32kfull.sys .text:0x150310, 0x1596d bytes
    // win32kfull.sys .text:0x1e3abc, 0x1659e bytes
    // win32kfull.sys .text:0x151250, 0x1596d bytes
    //
    _r1(sdk::unknown_ptr) register_system_thread;
    
    // [zzzResetSharedDesktops]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23410, 0x13864 bytes
    // win32kfull.sys .text:0xf46a0, 0x1596d bytes
    // win32kfull.sys .text:0x5a60, 0x1659e bytes
    // win32kfull.sys .text:0xf5530, 0x1596d bytes
    //
    _r2(sdk::unknown_ptr) reset_shared_desktops;
    
    // [zzzSetCaretPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3ae30, 0x13864 bytes
    // win32kfull.sys .text:0xd9450, 0x1596d bytes
    // win32kfull.sys .text:0x1054cc, 0x1659e bytes
    // win32kfull.sys .text:0xda110, 0x1596d bytes
    //
    _r3(sdk::unknown_ptr) set_caret_pos;
    
    // [zzzSetCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x990c8, 0x13864 bytes
    // win32kfull.sys .text:0xaca58, 0x1596d bytes
    // win32kfull.sys .text:0xad084, 0x1659e bytes
    // win32kfull.sys .text:0xad5c8, 0x1596d bytes
    //
    _r4(sdk::unknown_ptr) set_cursor;
    
    // [zzzSetCursorPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x34b40, 0x13864 bytes
    // win32kfull.sys .text:0xd25c8, 0x1596d bytes
    // win32kfull.sys .text:0x96d28, 0x1659e bytes
    // win32kfull.sys .text:0xd3288, 0x1596d bytes
    //
    _r5(sdk::unknown_ptr) set_cursor_pos;
    
    // [zzzSetDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa1790, 0x13864 bytes
    // win32kfull.sys .text:0xb1a40, 0x1596d bytes
    // win32kfull.sys .text:0x42e00, 0x1659e bytes
    // win32kfull.sys .text:0xb25b0, 0x1596d bytes
    //
    _r6(sdk::unknown_ptr) set_desktop;
    
    // [zzzSetSBCaretPos]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22de08, 0x13864 bytes
    // win32kfull.sys .text:0x245ee0, 0x1596d bytes
    // win32kfull.sys .text:0x2440a0, 0x1659e bytes
    // win32kfull.sys .text:0x245df0, 0x1596d bytes
    //
    _r7(sdk::unknown_ptr) set_sb_caret_pos;
    
    // [zzzSetSystemImage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2f614, 0x13864 bytes
    // win32kfull.sys .text:0x1ed70, 0x1596d bytes
    // win32kfull.sys .text:0x977f0, 0x1659e bytes
    // win32kfull.sys .text:0x1f180, 0x1596d bytes
    //
    _r8(sdk::unknown_ptr) set_system_image;
    
    // [zzzSetWindowCompositionCloak]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5a950, 0x13864 bytes
    // win32kfull.sys .text:0x7769c, 0x1596d bytes
    // win32kfull.sys .text:0x3d58c, 0x1659e bytes
    // win32kfull.sys .text:0x7820c, 0x1596d bytes
    //
    _r9(sdk::unknown_ptr) set_window_composition_cloak;
    
    // [zzzSetWindowsHookEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d914, 0x13864 bytes
    // win32kfull.sys .text:0x1a6c8, 0x1596d bytes
    // win32kfull.sys .text:0x43de4, 0x1659e bytes
    // win32kfull.sys .text:0x1aa78, 0x1596d bytes
    //
    _s0(sdk::unknown_ptr) set_windows_hook_ex;
    
    // [zzzShowCaret]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3b074, 0x13864 bytes
    // win32kfull.sys .text:0x242434, 0x1596d bytes
    // win32kfull.sys .text:0x23d73c, 0x1659e bytes
    // win32kfull.sys .text:0x2422e4, 0x1596d bytes
    //
    _s1(sdk::unknown_ptr) show_caret;
    
    // [zzzShowCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x124a10, 0x13864 bytes
    // win32kfull.sys .text:0x118ec4, 0x1596d bytes
    // win32kfull.sys .text:0x10f0a0, 0x1659e bytes
    // win32kfull.sys .text:0x119df4, 0x1596d bytes
    //
    _s2(sdk::unknown_ptr) show_cursor;
    
    // [zzzShowFade]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x130b50, 0x13864 bytes
    // win32kfull.sys .text:0x1e8da4, 0x1596d bytes
    // win32kfull.sys .text:0x1e548c, 0x1659e bytes
    // win32kfull.sys .text:0x1e8c04, 0x1596d bytes
    //
    _s3(sdk::unknown_ptr) show_fade;
    
    // [zzzShowStartGlass]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1ce000, 0x13864 bytes
    // win32kfull.sys .text:0x1d3e20, 0x1596d bytes
    // win32kfull.sys .text:0x1dc61c, 0x1659e bytes
    // win32kfull.sys .text:0x1d3cc0, 0x1596d bytes
    //
    _s4(sdk::unknown_ptr) show_start_glass;
    
    // [zzzStartFade]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x130a88, 0x13864 bytes
    // win32kfull.sys .text:0x1e8e0c, 0x1596d bytes
    // win32kfull.sys .text:0x1e54f4, 0x1659e bytes
    // win32kfull.sys .text:0x1e8c6c, 0x1596d bytes
    //
    _s5(sdk::unknown_ptr) start_fade;
    
    // [zzzStartSonar]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e1198, 0x13864 bytes
    // win32kfull.sys .text:0x1e8ee8, 0x1596d bytes
    // win32kfull.sys .text:0x1e55d0, 0x1659e bytes
    // win32kfull.sys .text:0x1e8d48, 0x1596d bytes
    //
    _s6(sdk::unknown_ptr) start_sonar;
    
    // [zzzUnhookWindowsHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e06a0, 0x13864 bytes
    // win32kfull.sys .text:0x1e7670, 0x1596d bytes
    // win32kfull.sys .text:0x1e3b48, 0x1659e bytes
    // win32kfull.sys .text:0x1e74d0, 0x1596d bytes
    //
    _s7(sdk::unknown_ptr) unhook_windows_hook;
    
    // [zzzUnhookWindowsHookEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4d750, 0x13864 bytes
    // win32kfull.sys .text:0x1a4d4, 0x1596d bytes
    // win32kfull.sys .text:0x42be8, 0x1659e bytes
    // win32kfull.sys .text:0x1a884, 0x1596d bytes
    //
    _s8(sdk::unknown_ptr) unhook_windows_hook_ex;
    
    // [zzzUpdateCursorImage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa3f20, 0x13864 bytes
    // win32kfull.sys .text:0x9abd0, 0x1596d bytes
    // win32kfull.sys .text:0x58520, 0x1659e bytes
    // win32kfull.sys .text:0x9b740, 0x1596d bytes
    //
    _s9(sdk::unknown_ptr) update_cursor_image;
    
    // [zzzUpdateFade]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x130c90, 0x13864 bytes
    // win32kfull.sys .text:0x1e8164, 0x1596d bytes
    // win32kfull.sys .text:0x1e4914, 0x1659e bytes
    // win32kfull.sys .text:0x1e7fc4, 0x1596d bytes
    //
    _t0(sdk::unknown_ptr) update_fade;
    
    // [zzzUpdateLayeredWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x61144, 0x13864 bytes
    // win32kfull.sys .text:0xf57a4, 0x1596d bytes
    // win32kfull.sys .text:0xb5100, 0x1659e bytes
    // win32kfull.sys .text:0xf6634, 0x1596d bytes
    //
    _t1(sdk::unknown_ptr) update_layered_window;
    
    // [zzzUpdateWindowsAfterModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x24904, 0x13864 bytes
    // win32kfull.sys .text:0xf4b48, 0x1596d bytes
    // win32kfull.sys .text:0x6ac0, 0x1659e bytes
    // win32kfull.sys .text:0xf59d8, 0x1596d bytes
    //
    _t2(sdk::unknown_ptr) update_windows_after_mode_change;
    
    // [zzzWakeInputIdle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xad230, 0x13864 bytes
    // win32kfull.sys .text:0xbfe88, 0x1596d bytes
    // win32kfull.sys .text:0x280a4, 0x1659e bytes
    // win32kfull.sys .text:0xc09f8, 0x1596d bytes
    //
    _t3(sdk::unknown_ptr) wake_input_idle;
};
#include "magic/api.end.hpp"
