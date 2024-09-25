#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocesssharedaccess
{
    // [??1DXGPROCESSSHAREDACCESS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xca380, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x145064, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1ffc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147f74, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
