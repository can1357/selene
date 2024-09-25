#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::window_arrangement
{
    // [AreDockTargetActiveForSnapMoveSize@WindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23f6ec, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) are_dock_target_active_for_snap_move_size;
    
    // [DragOperationFromMaximizedAllowed@WindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23f708, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) drag_operation_from_maximized_allowed;
    
    // [IsSupported@WindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23f734, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) is_supported;
    
    // [MoveWithArrangementAllowed@WindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23f778, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) move_with_arrangement_allowed;
    
    // [SizeWithSnapAllowed@WindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23f7a4, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) size_with_snap_allowed;
    
    // [SnapFurtherFromEdge@WindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23f7d0, 0x1659e bytes
    //
    _m5(sdk::unknown_ptr) snap_further_from_edge;
    
    // [xxxSetSnapArrangementPos@WindowArrangement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14ba88, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) xxx_set_snap_arrangement_pos;
};
#include "magic/api.end.hpp"
