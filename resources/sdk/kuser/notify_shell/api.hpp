#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::notify_shell
{
    // [ArrangementHotKey@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x239074, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) arrangement_hot_key;
    
    // [DragSizeInfo@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2390e0, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) drag_size_info;
    
    // [HitTestPartUpdate@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xa64ec, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) hit_test_part_update;
    
    // [ResetArrangement@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x239900, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) reset_arrangement;
    
    // [TrackedWindowMoveSizeIntercept@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x239bc4, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) tracked_window_move_size_intercept;
    
    // [WindowPosAndStateApplied@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x239cc8, 0x1659e bytes
    //
    _m5(sdk::unknown_ptr) window_pos_and_state_applied;
    
    // [WindowBorderEnter@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x23e25c, 0x1596d bytes
    // win32kfull.sys .text:0x23e10c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) window_border_enter;
    
    // [WindowBorderExitIfEntered@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xd84a4, 0x1596d bytes
    // win32kfull.sys .text:0xd9164, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) window_border_exit_if_entered;
    
    // [ArrangementCompleted@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e0bc, 0x1596d bytes
    // win32kfull.sys .text:0x14cca4, 0x1659e bytes
    // win32kfull.sys .text:0x23df6c, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) arrangement_completed;
    
    // [CuratedWindowHidden@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3515c, 0x1596d bytes
    // win32kfull.sys .text:0xa7090, 0x1659e bytes
    // win32kfull.sys .text:0x3556c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) curated_window_hidden;
    
    // [PositioningChanged@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xae948, 0x1596d bytes
    // win32kfull.sys .text:0xaab04, 0x1659e bytes
    // win32kfull.sys .text:0xaf4b8, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) positioning_changed;
    
    // [TrackedWindowPosChanged@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e218, 0x1596d bytes
    // win32kfull.sys .text:0x239c84, 0x1659e bytes
    // win32kfull.sys .text:0x23e0c8, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) tracked_window_pos_changed;
    
    // [TrackedWindowTrackingInfo@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2ede4, 0x1596d bytes
    // win32kfull.sys .text:0xc2264, 0x1659e bytes
    // win32kfull.sys .text:0x2f1f4, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) tracked_window_tracking_info;
    
    // [WindowSizingCompleted@NotifyShell]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e2fc, 0x1596d bytes
    // win32kfull.sys .text:0x239d70, 0x1659e bytes
    // win32kfull.sys .text:0x23e1ac, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) window_sizing_completed;
};
#include "magic/api.end.hpp"
