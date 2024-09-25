#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace sk
{
    // [SkIsSecureKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab60, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe40, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) is_secure_kernel;
};
#include "magic/api.end.hpp"
