#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace xhalp
{
    // [xHalpIsInterruptTypeSecondary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1573c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a9c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1180, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) is_interrupt_type_secondary;
};
#include "magic/api.end.hpp"
