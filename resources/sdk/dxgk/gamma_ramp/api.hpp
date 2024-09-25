#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::gamma_ramp
{
    // [??1DXGK_GAMMA_RAMP@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x3d44, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGK_GAMMA_RAMP@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9dc4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3d94, 0x84380 bytes
    // dxgkrnl.sys .text:0xa5e8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [Initialize@DXGK_GAMMA_RAMP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa858, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3e08, 0x84380 bytes
    // dxgkrnl.sys .text:0xab34, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [IsDefaultGammaRamp@DXGK_GAMMA_RAMP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147160, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1ce4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12b858, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) is_default_gamma_ramp;
};
#include "magic/api.end.hpp"
