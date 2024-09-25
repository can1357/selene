#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace alpci
{
    // [AlpciSendDeferredMessageBeforeWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x292e10, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) send_deferred_message_before_wait;
    
    // [AlpciDestroyDeferredMessageContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d4840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x644a00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ad580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62d0e0, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) destroy_deferred_message_context;
};
#include "magic/api.end.hpp"
