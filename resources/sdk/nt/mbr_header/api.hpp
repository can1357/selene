#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::mbr_header
{
    // [CheckSum@MBR_HEADER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c23dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fdb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c124c, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) check_sum;
};
#include "magic/api.end.hpp"
