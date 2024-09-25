#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ink_device_parser::device_features_report
{
    // [Usages@DeviceFeaturesReport@InkDeviceParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f5830, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f64d0, 0x1659e bytes
    // win32kfull.sys .rdata:0x2f5800, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) usages;
};
#include "magic/api.end.hpp"
