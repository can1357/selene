#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::shell_window_management_property
{
    // [GetShellWndManagementProperty@ShellWindowManagementProperty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x114610, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) get_shell_wnd_management_property;
};
#include "magic/api.end.hpp"
