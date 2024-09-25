#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace lpcp
{
    // [LpcpReplyWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6594e8, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) reply_wait_reply_port;
    
    // [LpcpCopyRequestData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bec1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c1ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd3cc, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) copy_request_data;
    
    // [LpcpRequestWaitReplyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473c98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8beeec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c4b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bd69c, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) request_wait_reply_port;
};
#include "magic/api.end.hpp"
