#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::prediction::tag_expo_smoother
{
    // [Smooth@tagExpoSmoother@Prediction]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c9250, 0x13864 bytes
    // win32kfull.sys .text:0x1edbcc, 0x1596d bytes
    // win32kfull.sys .text:0x1e9ff0, 0x1659e bytes
    // win32kfull.sys .text:0x1eda2c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) smooth;
};
#include "magic/api.end.hpp"
