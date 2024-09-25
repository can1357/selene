#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kev
{
    // [KevSkipVerification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23d968, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c52ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x663a5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c414c, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) skip_verification;
};
#include "magic/api.end.hpp"
