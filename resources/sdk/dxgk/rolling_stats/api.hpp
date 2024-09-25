#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::rolling_stats
{
    // [Add@RollingStats]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c174, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81a6c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c304, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add;
    
    // [Scale@RollingStats]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c590, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81ec8, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c720, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) scale;
    
    // [Update@RollingStats]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6c770, 0x762b0 bytes
    // dxgkrnl.sys .text:0x820a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c900, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) update;
};
#include "magic/api.end.hpp"
