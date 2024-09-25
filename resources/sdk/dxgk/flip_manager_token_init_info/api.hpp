#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::flip_manager_token_init_info
{
    // [??1FlipManagerTokenInitInfo@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x60304, 0x762b0 bytes
    // dxgkrnl.sys .text:0x74e24, 0x84380 bytes
    // dxgkrnl.sys .text:0x60494, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
