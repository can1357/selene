#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_cursor_clip
{
    // [ApplyAppClip@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x208e4, 0x243e0 bytes
    // win32kbase.sys .text:0x58a60, 0x27ef0 bytes
    // win32kbase.sys .text:0x59634, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) apply_app_clip;
    
    // [ApplySpeedBumpAndCornerLock@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1abf90, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2c0c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aa6b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) apply_speed_bump_and_corner_lock;
    
    // [ApplySystemClips@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x20730, 0x243e0 bytes
    // win32kbase.sys .text:0x58b60, 0x27ef0 bytes
    // win32kbase.sys .text:0x59480, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) apply_system_clips;
    
    // [BoundPoint@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x20680, 0x243e0 bytes
    // win32kbase.sys .text:0x58ab0, 0x27ef0 bytes
    // win32kbase.sys .text:0x593d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) bound_point;
    
    // [BoundPointToRegions@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x207dc, 0x243e0 bytes
    // win32kbase.sys .text:0x58c10, 0x27ef0 bytes
    // win32kbase.sys .text:0x5952c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) bound_point_to_regions;
    
    // [ClearClip@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x20940, 0x243e0 bytes
    // win32kbase.sys .text:0x589d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x59690, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) clear_clip;
    
    // [ClipPointToRect@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac078, 0x243e0 bytes
    // win32kbase.sys .text:0xf6ee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aa798, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) clip_point_to_rect;
    
    // [EnableSpeedBump@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac0b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2d20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aa7d0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) enable_speed_bump;
    
    // [GetClip@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcdca0, 0x243e0 bytes
    // win32kbase.sys .text:0xdf540, 0x27ef0 bytes
    // win32kbase.sys .text:0xcc640, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) get_clip;
    
    // [Initialize@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x264c0, 0x243e0 bytes
    // win32kbase.sys .text:0x8580c, 0x27ef0 bytes
    // win32kbase.sys .text:0x790e4, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) initialize;
    
    // [LockCursor@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac0f4, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2d68, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aa814, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) lock_cursor;
    
    // [OnDisplayStateChange@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x23db0, 0x243e0 bytes
    // win32kbase.sys .text:0x651b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x558f4, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) on_display_state_change;
    
    // [OverrideClip@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac1dc, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2e50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aa8fc, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) override_clip;
    
    // [SetClip@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac230, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2eb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aa950, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_clip;
    
    // [SetShellClip@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac284, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2f04, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aa9a4, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) set_shell_clip;
    
    // [TraceCurrentState@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac468, 0x243e0 bytes
    // win32kbase.sys .text:0x1f30f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aab88, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) trace_current_state;
    
    // [UpdateClipRect@CCursorClip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x23c84, 0x243e0 bytes
    // win32kbase.sys .text:0x652ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x55968, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) update_clip_rect;
};
#include "magic/api.end.hpp"
