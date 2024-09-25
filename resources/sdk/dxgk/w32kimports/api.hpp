#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::w32kimports
{
    // [??0W32KIMPORTS@@QEAA@PEAX@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x228d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x28f6c, 0x84380 bytes
    // dxgkrnl.sys .text:0x23264, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
