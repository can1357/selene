#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::cumulative_stats
{
    // [Add@CumulativeStats]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c130, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81a28, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c2c0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add;
    
    // [GetStats@CumulativeStats]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c334, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81c54, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c4c4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_stats;
};
#include "magic/api.end.hpp"
