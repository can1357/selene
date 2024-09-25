#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::mbr
{
    // [CheckSum@MBR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1459f4, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) check_sum;
};
#include "magic/api.end.hpp"
