#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::st_eta_helper
{
    // [StartHelper@StEtaHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x74730, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a1ac4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3284ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cadb0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) start_helper;
};
#include "magic/api.end.hpp"
