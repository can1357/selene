#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::default_multi_screen_config
{
    // [DetermineMultiScreenCapabilities@DefaultMultiScreenConfig]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25ca4, 0x60098 bytes
    // dxgkrnl.sys .text:0x46c30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d3c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x46e88, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) determine_multi_screen_capabilities;
};
#include "magic/api.end.hpp"
