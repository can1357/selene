#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dmar
{
    // [DmarCommonPageTableBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x30298, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11b70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x305d8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) common_page_table_bits;
};
#include "magic/api.end.hpp"
