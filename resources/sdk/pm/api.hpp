#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace pm
{
    // [PmAcpiDispatchTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db40, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50870, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50870, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) acpi_dispatch_table;
    
    // [PmRegisters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4aa60, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc48ea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60000, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48e80, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) registers;
    
    // [PMWiFiRekeyOffloadStr]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .data:0x88288, 0x1c8a8 bytes
    // ndis.sys .data:0xe3228, 0x1d2c0 bytes
    // ndis.sys .data:0xea318, 0x1e858 bytes
    // ndis.sys .data:0xe3228, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) wi_fi_rekey_offload_str;
};
#include "magic/api.end.hpp"
