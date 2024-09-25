#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace iopf
{
    // [IopfCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3da4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c114, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3224, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36d384, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) _call_driver;
    
    // [IopfCompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x486c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c7710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x23dd00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x248740, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) _complete_request;
};
#include "magic/api.end.hpp"
