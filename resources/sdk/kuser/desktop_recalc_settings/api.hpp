#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::desktop_recalc_settings
{
    // [ValidateDesktopRecalcSetting@DesktopRecalcSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23dd70, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) validate_desktop_recalc_setting;
};
#include "magic/api.end.hpp"
