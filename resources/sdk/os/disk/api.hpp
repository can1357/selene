#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace os::disk
{
    // [Control@NT_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88ac50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889400, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) control;
    
    // [GetPnpProperty@NT_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711930, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) get_pnp_property;
    
    // [Initialize@NT_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88ad58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93ba88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889508, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [Read@NT_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88ad90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93bac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x889540, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) read;
    
    // [Write@NT_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x88ae30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93bb60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8895e0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) write;
};
#include "magic/api.end.hpp"
