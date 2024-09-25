#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::usage_index_property
{
    // [Compare@UsageIndexProperty@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1a90c, 0x17e70 bytes
    // dxgi.dll .text:0x1ac1c, 0x17e70 bytes
    // dxgi.dll .text:0x4f5d4, 0x18b10 bytes
    // dxgi.dll .text:0x1619c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) compare;
    
    // [GetSize@UsageIndexProperty@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17050, 0x17e70 bytes
    // dxgi.dll .text:0x172b0, 0x17e70 bytes
    // dxgi.dll .text:0xc254, 0x18b10 bytes
    // dxgi.dll .text:0x127c0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) get_size;
    
    // [Read@UsageIndexProperty@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17df8, 0x17e70 bytes
    // dxgi.dll .text:0x18058, 0x17e70 bytes
    // dxgi.dll .text:0x9c40, 0x18b10 bytes
    // dxgi.dll .text:0x13568, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) read;
    
    // [UpdateCount@UsageIndexProperty@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3b24, 0x17e70 bytes
    // dxgi.dll .text:0x3b24, 0x17e70 bytes
    // dxgi.dll .text:0xc284, 0x18b10 bytes
    // dxgi.dll .text:0x59a4, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) update_count;
    
    // [Write@UsageIndexProperty@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x180e0, 0x17e70 bytes
    // dxgi.dll .text:0x18340, 0x17e70 bytes
    // dxgi.dll .text:0xc6ac, 0x18b10 bytes
    // dxgi.dll .text:0x13850, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) write;
};
#include "magic/api.end.hpp"
