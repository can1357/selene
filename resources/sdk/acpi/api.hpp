#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace acpi
{
    // [AcpiRootPdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d858, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a598, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507f0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) root_pdo;
};
#include "magic/api.end.hpp"
