#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::mbr_entry
{
    // [IsRecognized@MBR_ENTRY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23b29c, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) is_recognized;
    
    // [ComputeChs@MBR_ENTRY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23b12c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c2420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65fdf4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1290, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) compute_chs;
    
    // [Validate@MBR_ENTRY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1459b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5c29e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6603cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c1850, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) validate;
};
#include "magic/api.end.hpp"
