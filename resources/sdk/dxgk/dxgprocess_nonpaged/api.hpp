#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocess_nonpaged
{
    // [??0DXGPROCESS_NONPAGED@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0xaf18, 0x60098 bytes
    // dxgkrnl.sys .text:0x17b84, 0x762b0 bytes
    // dxgkrnl.sys .text:0x18314, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
