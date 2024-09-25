#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::feedback
{
    // [MoveCursor@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d593c, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) move_cursor;
    
    // [Save@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x44620, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) save;
    
    // [xxxReplaceArrowWithNullCursor@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1d5c48, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) xxx_replace_arrow_with_null_cursor;
    
    // [ForceHidePenCursor@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1daf6c, 0x1596d bytes
    // win32kfull.sys .text:0x1d741c, 0x1659e bytes
    // win32kfull.sys .text:0x1dae0c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) force_hide_pen_cursor;
    
    // [GetStore@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xcedb0, 0x1596d bytes
    // win32kfull.sys .text:0xfdb3c, 0x1659e bytes
    // win32kfull.sys .text:0xcfa70, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) get_store;
    
    // [gfForceHidePenCursor@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3417f0, 0x1596d bytes
    // win32kfull.sys .data:0x33eb70, 0x1659e bytes
    // win32kfull.sys .data:0x3417b0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) gf_force_hide_pen_cursor;
    
    // [gdwPointerCursorOps@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32ceb8, 0x13864 bytes
    // win32kfull.sys .data:0x33c618, 0x1596d bytes
    // win32kfull.sys .data:0x33a9c8, 0x1659e bytes
    // win32kfull.sys .data:0x33c5f8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) gdw_pointer_cursor_ops;
    
    // [GetWindowBarrelVisualizationSetting@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d5764, 0x13864 bytes
    // win32kfull.sys .text:0x1dafa0, 0x1596d bytes
    // win32kfull.sys .text:0x1d7450, 0x1659e bytes
    // win32kfull.sys .text:0x1dae40, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) get_window_barrel_visualization_setting;
    
    // [GetWindowVisualizationSetting@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d5838, 0x13864 bytes
    // win32kfull.sys .text:0x1db060, 0x1596d bytes
    // win32kfull.sys .text:0x1d7510, 0x1659e bytes
    // win32kfull.sys .text:0x1daf00, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) get_window_visualization_setting;
    
    // [gfInRange@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33459c, 0x13864 bytes
    // win32kfull.sys .data:0x3417f8, 0x1596d bytes
    // win32kfull.sys .data:0x33eb78, 0x1659e bytes
    // win32kfull.sys .data:0x3417b8, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) gf_in_range;
    
    // [gfIntegratedPenActive@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x334598, 0x13864 bytes
    // win32kfull.sys .data:0x3417f4, 0x1596d bytes
    // win32kfull.sys .data:0x33eb74, 0x1659e bytes
    // win32kfull.sys .data:0x3417b4, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) gf_integrated_pen_active;
    
    // [gfUsingPenCursors@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x331004, 0x13864 bytes
    // win32kfull.sys .data:0x33c850, 0x1596d bytes
    // win32kfull.sys .data:0x33ab08, 0x1659e bytes
    // win32kfull.sys .data:0x33c810, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) gf_using_pen_cursors;
    
    // [gfUsingTouchCursors@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x331000, 0x13864 bytes
    // win32kfull.sys .data:0x33c84c, 0x1596d bytes
    // win32kfull.sys .data:0x33ab04, 0x1659e bytes
    // win32kfull.sys .data:0x33c80c, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) gf_using_touch_cursors;
    
    // [gpcd@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x331640, 0x13864 bytes
    // win32kfull.sys .data:0x33ce98, 0x1596d bytes
    // win32kfull.sys .data:0x33ad18, 0x1659e bytes
    // win32kfull.sys .data:0x33ce58, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) gpcd;
    
    // [gpevtPointerCursorOperation@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x328ee8, 0x13864 bytes
    // win32kfull.sys .data:0x33ae80, 0x1596d bytes
    // win32kfull.sys .data:0x3391a0, 0x1659e bytes
    // win32kfull.sys .data:0x33aeb0, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) gpevt_pointer_cursor_operation;
    
    // [gppcdFree@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3216c0, 0x13864 bytes
    // win32kfull.sys .data:0x330b08, 0x1596d bytes
    // win32kfull.sys .data:0x32edf8, 0x1659e bytes
    // win32kfull.sys .data:0x330b08, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) gppcd_free;
    
    // [gppcdLatest@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32cec0, 0x13864 bytes
    // win32kfull.sys .data:0x33c620, 0x1596d bytes
    // win32kfull.sys .data:0x33a9d0, 0x1659e bytes
    // win32kfull.sys .data:0x33c600, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) gppcd_latest;
    
    // [PointerEventIntToDigitizerContactInfo@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d59e4, 0x13864 bytes
    // win32kfull.sys .text:0x1db204, 0x1596d bytes
    // win32kfull.sys .text:0x1d76b8, 0x1659e bytes
    // win32kfull.sys .text:0x1db0a4, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) pointer_event_int_to_digitizer_contact_info;
    
    // [xxxReplaceMouseCursorsWithPenCursors@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d5cc4, 0x13864 bytes
    // win32kfull.sys .text:0x1db530, 0x1596d bytes
    // win32kfull.sys .text:0x1d789c, 0x1659e bytes
    // win32kfull.sys .text:0x1db3d0, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) xxx_replace_mouse_cursors_with_pen_cursors;
    
    // [xxxRestoreMouseCursors@Feedback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d5e9c, 0x13864 bytes
    // win32kfull.sys .text:0x1db5e4, 0x1596d bytes
    // win32kfull.sys .text:0x1d794c, 0x1659e bytes
    // win32kfull.sys .text:0x1db484, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) xxx_restore_mouse_cursors;
};
#include "magic/api.end.hpp"
