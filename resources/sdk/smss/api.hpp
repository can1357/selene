#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace smss
{
    // [SmssEventWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323360, 0x32828 bytes
    // ntoskrnl.exe .data:0xc476a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f2e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47680, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) event_work_item;
};
#include "magic/api.end.hpp"
