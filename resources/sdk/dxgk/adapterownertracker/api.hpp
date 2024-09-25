#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::adapterownertracker
{
    // [??1ADAPTEROWNERTRACKER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xcfc8, 0x60098 bytes
    // dxgkrnl.sys .text:0x1b24, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2dc8, 0x84380 bytes
    // dxgkrnl.sys .text:0xb5ac, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
