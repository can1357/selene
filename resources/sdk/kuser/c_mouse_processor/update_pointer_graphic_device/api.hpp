#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::update_pointer_graphic_device
{
    // [OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8acc8, 0x243e0 bytes
    // win32kbase.sys .text:0xcc86c, 0x27ef0 bytes
    // win32kbase.sys .text:0x67f40, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) on_global_cursor_owner_computed;
};
#include "magic/api.end.hpp"
