#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdiagnosticswithmutex
{
    // [??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x26798, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x2690c, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) read_diagnostics;
    
    // [WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x26978, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) write_diagnostic_entry;
};
#include "magic/api.end.hpp"
