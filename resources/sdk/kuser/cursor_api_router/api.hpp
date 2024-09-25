#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::cursor_api_router
{
    // [DwmSetPointer@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23cdb4, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) dwm_set_pointer;
    
    // [ForceSetCurrentCursorShape@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x8e60c, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) force_set_current_cursor_shape;
    
    // [GetCursorColorPixels@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23cdfc, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) get_cursor_color_pixels;
    
    // [GetCursorMaskAndXorBits@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23ced8, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) get_cursor_mask_and_xor_bits;
    
    // [HidePointer@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xa3ba0, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) hide_pointer;
    
    // [MovePointer@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xbb908, 0x1659e bytes
    //
    _m5(sdk::unknown_ptr) move_pointer;
    
    // [SendMITCursorShape@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23d0b8, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) send_mit_cursor_shape;
    
    // [SetPointerShape@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x45d9c, 0x1659e bytes
    //
    _m7(sdk::unknown_ptr) set_pointer_shape;
    
    // [UpdateStateWorker@CursorApiRouter]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x4613c, 0x1659e bytes
    //
    _m8(sdk::unknown_ptr) update_state_worker;
};
#include "magic/api.end.hpp"
