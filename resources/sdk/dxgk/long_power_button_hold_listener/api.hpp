#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::long_power_button_hold_listener
{
    // [Stop@LongPowerButtonHoldListener]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4dca4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4ea68, 0x84380 bytes
    // dxgkrnl.sys .text:0x4def4, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) stop;
    
    // [WnfCallback@LongPowerButtonHoldListener]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4dce0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4eaa0, 0x84380 bytes
    // dxgkrnl.sys .text:0x4df30, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) wnf_callback;
};
#include "magic/api.end.hpp"
