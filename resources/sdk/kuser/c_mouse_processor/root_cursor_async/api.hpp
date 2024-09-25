#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::root_cursor_async
{
    // [SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb698, 0x243e0 bytes
    // win32kbase.sys .text:0x214c08, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c9478, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) synchronize_cursor_position;
};
#include "magic/api.end.hpp"
