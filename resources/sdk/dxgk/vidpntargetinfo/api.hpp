#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpntargetinfo
{
    // [??0VIDPNTARGETINFO@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a810, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fae0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae90, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Initialize@VIDPNTARGETINFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b6340, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2eff84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b63e0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
