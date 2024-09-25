#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::sc_env
{
    // [Allocate@SC_ENV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88ac20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8893d0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) allocate;
    
    // [CreateGuid@SC_ENV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88ad40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93ba70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8894f0, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) create_guid;
    
    // [Free@SC_ENV]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) free;
};
#include "magic/api.end.hpp"
