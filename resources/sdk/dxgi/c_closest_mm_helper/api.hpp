#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_closest_mm_helper
{
    // [Refine@CClosestMMHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x61178, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) refine;
    
    // [??0CClosestMMHelper@@QEAA@AEBUDXGI_MODE_DESC1@@AEBVCDXGIModeDesc@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4f4c8, 0x17e70 bytes
    // dxgi.dll .text:0x4f5b8, 0x17e70 bytes
    // dxgi.dll .text:0x5a574, 0x18b10 bytes
    // dxgi.dll .text:0x50a48, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
