#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace csrp
{
    // [CsrpLocalSetupForSecureProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0xd0080, 0x67960 bytes
    //
    _m0(sdk::unknown_ptr) local_setup_for_secure_process;
    
    // [CsrpClientConnectToServer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x412c, 0x67960 bytes
    // ntdll.dll .text:0x709f8, 0x6fc38 bytes
    // ntdll.dll .text:0x743ec, 0x74648 bytes
    // ntdll.dll .text:0x70b98, 0x6fc38 bytes
    //
    _m1(sdk::unknown_ptr) client_connect_to_server;
    
    // [CsrpConnectToServer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3d64, 0x67960 bytes
    // ntdll.dll .text:0x70634, 0x6fc38 bytes
    // ntdll.dll .text:0x4b1dc, 0x74648 bytes
    // ntdll.dll .text:0x707d4, 0x6fc38 bytes
    //
    _m2(sdk::unknown_ptr) connect_to_server;
    
    // [CsrpHeapCommitRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0x89150, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _m3(sdk::unknown_ptr) heap_commit_routine;
};
#include "magic/api.end.hpp"
