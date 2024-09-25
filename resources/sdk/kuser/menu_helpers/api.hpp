#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::menu_helpers
{
    // [GetMenuRightAlignHint@MenuHelpers]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x244260, 0x1596d bytes
    // win32kfull.sys .text:0x241c90, 0x1659e bytes
    // win32kfull.sys .text:0x244130, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) get_menu_right_align_hint;
};
#include "magic/api.end.hpp"
