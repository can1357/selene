#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_token_operation
{
    // [??1CFlipTokenOperation@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6928c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ec4c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6941c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Discard@CFlipTokenOperation]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x692c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ec80, 0x84380 bytes
    // dxgkrnl.sys .text:0x69450, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) discard;
    
    // [Pending@CFlipTokenOperation]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a740, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adc0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) pending;
};
#include "magic/api.end.hpp"
