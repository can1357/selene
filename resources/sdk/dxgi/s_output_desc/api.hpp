#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::s_output_desc
{
    // [??0SOutputDesc@@QEAA@PEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@_N1@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x158d0, 0x17e70 bytes
    // dxgi.dll .text:0x15b30, 0x17e70 bytes
    // dxgi.dll .text:0x10c30, 0x18b10 bytes
    // dxgi.dll .text:0x11040, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0SOutputDesc@@QEAA@IAEBU_DISPLAY_DEVICEW@@_N@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x75e20, 0x17e70 bytes
    // dxgi.dll .text:0x75f48, 0x17e70 bytes
    // dxgi.dll .text:0x810a4, 0x18b10 bytes
    // dxgi.dll .text:0x77378, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??0SOutputDesc@@QEAA@IPEBG_N1@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x75ec0, 0x17e70 bytes
    // dxgi.dll .text:0x75fe8, 0x17e70 bytes
    // dxgi.dll .text:0x81144, 0x18b10 bytes
    // dxgi.dll .text:0x77418, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance__;
};
#include "magic/api.end.hpp"
