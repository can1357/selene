#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::com_error
{
    // [??0_com_error@@QEAA@AEBV0@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5d634, 0x17e70 bytes
    // dxgi.dll .text:0x5d724, 0x17e70 bytes
    // dxgi.dll .text:0x693d4, 0x18b10 bytes
    // dxgi.dll .text:0x5eb58, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1_com_error@@UEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x49ccc, 0x17e70 bytes
    // dxgi.dll .text:0x49dbc, 0x17e70 bytes
    // dxgi.dll .text:0x54fb8, 0x18b10 bytes
    // dxgi.dll .text:0x4b24c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Error@_com_error]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x47ca4, 0x17e70 bytes
    // dxgi.dll .text:0x47d94, 0x17e70 bytes
    // dxgi.dll .text:0x53048, 0x18b10 bytes
    // dxgi.dll .text:0x49224, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) error;
};
#include "magic/api.end.hpp"
