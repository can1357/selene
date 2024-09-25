#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::metro_hash64
{
    // [Hash@MetroHash64]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11e980, 0x32828 bytes
    // ntoskrnl.exe .text:0x24d8d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x665928, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f7410, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) hash;
};
#include "magic/api.end.hpp"
