#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgcopyprotection
{
    // [??1DXGCOPYPROTECTION@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15d8e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24c3f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3540, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24c530, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
