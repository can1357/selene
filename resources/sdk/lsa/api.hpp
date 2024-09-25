#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace lsa
{
    // [LsaCallAuthenticationPackage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691574, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bcd30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x917c90, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) call_authentication_package;
    
    // [LsaDeregisterLogonProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69160c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bcde0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x917d40, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) deregister_logon_process;
    
    // [LsaFreeReturnBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41fafc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x810930, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed500, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) free_return_buffer;
    
    // [LsaLogonUser]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x691650, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x919590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9bce40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x917da0, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) logon_user;
    
    // [LsaLookupAuthenticationPackage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51efc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f8b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bde00, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) lookup_authentication_package;
    
    // [LsaRegisterLogonProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51f028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b61f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdd80, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) register_logon_process;
};
#include "magic/api.end.hpp"
