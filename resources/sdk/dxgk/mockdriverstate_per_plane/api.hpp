#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mockdriverstate_per_plane
{
    // [??0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a710, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fa70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ad50, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
