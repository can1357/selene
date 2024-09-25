#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::atl::c_com_object_root_base
{
    // [_Cache@CComObjectRootBase@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x224ec, 0x17e70 bytes
    // dxgi.dll .text:0x227cc, 0x17e70 bytes
    // dxgi.dll .text:0x2346c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) cache;
    
    // [_Break@CComObjectRootBase@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x73020, 0x17e70 bytes
    // dxgi.dll .text:0x73130, 0x17e70 bytes
    // dxgi.dll .text:0x7e6b0, 0x18b10 bytes
    // dxgi.dll .text:0x74560, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) _break;
    
    // [_Chain@CComObjectRootBase@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6fc0, 0x17e70 bytes
    // dxgi.dll .text:0x6fc0, 0x17e70 bytes
    // dxgi.dll .text:0x20d60, 0x18b10 bytes
    // dxgi.dll .text:0x1bb70, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) chain;
    
    // [_Delegate@CComObjectRootBase@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6e770, 0x17e70 bytes
    // dxgi.dll .text:0x6e880, 0x17e70 bytes
    // dxgi.dll .text:0x7a480, 0x18b10 bytes
    // dxgi.dll .text:0x6fcb0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) delegate;
};
#include "magic/api.end.hpp"
