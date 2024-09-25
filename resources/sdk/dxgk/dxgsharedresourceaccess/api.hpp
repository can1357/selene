#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsharedresourceaccess
{
    // [??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xca324, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144fec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1f84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147efc, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
