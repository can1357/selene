#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace rtlpx
{
    // [RtlpxVirtualUnwind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x286a20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20e000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32d990, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) _virtual_unwind;
    
    // [RtlpxLookupFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x43ef0, 0x32828 bytes
    // ntoskrnl.exe .text:0x287460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20eb70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32e3d0, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) _lookup_function_table;
};
#include "magic/api.end.hpp"
