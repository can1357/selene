#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::raw_input_manager_object
{
    // [bTouchInputAllowed@RawInputManagerObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11efd4, 0x1eb80 bytes
    // win32kbase.sys .data:0x25a68c, 0x243e0 bytes
    // win32kbase.sys .data:0x2af4b4, 0x27ef0 bytes
    // win32kbase.sys .data:0x2576ac, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) b_touch_input_allowed;
    
    // [gHidRequestTable@RawInputManagerObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x122400, 0x1eb80 bytes
    // win32kbase.sys .data:0x25e350, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3130, 0x27ef0 bytes
    // win32kbase.sys .data:0x25b380, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) g_hid_request_table;
};
#include "magic/api.end.hpp"
