#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace vhd
{
    // [VhdInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa70414, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb603f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f758, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
