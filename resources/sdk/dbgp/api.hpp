#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dbgp
{
    // [DbgpInsertDebugPrintCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2112f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f7c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5928a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f5f4, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) insert_debug_print_callback;
    
    // [DbgpRemoveDebugPrintCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2113a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x57f91c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x592a08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57f74c, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) remove_debug_print_callback;
};
#include "magic/api.end.hpp"
