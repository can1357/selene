#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::microsoft::wrl::ftm_base
{
    // [CanCastTo@FtmBase@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x5838c, 0x17e70 bytes
    // dxgi.dll .text:0x5847c, 0x17e70 bytes
    // dxgi.dll .text:0x59920, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) can_cast_to;
    
    // [DisconnectObject@FtmBase@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x589f0, 0x17e70 bytes
    // dxgi.dll .text:0x58ae0, 0x17e70 bytes
    // dxgi.dll .text:0x63dd0, 0x18b10 bytes
    // dxgi.dll .text:0x59f90, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) disconnect_object;
    
    // [GetMarshalSizeMax@FtmBase@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x591e0, 0x17e70 bytes
    // dxgi.dll .text:0x592d0, 0x17e70 bytes
    // dxgi.dll .text:0x648a0, 0x18b10 bytes
    // dxgi.dll .text:0x5a780, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) get_marshal_size_max;
    
    // [GetUnmarshalClass@FtmBase@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59300, 0x17e70 bytes
    // dxgi.dll .text:0x593f0, 0x17e70 bytes
    // dxgi.dll .text:0x64c10, 0x18b10 bytes
    // dxgi.dll .text:0x5a8a0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) get_unmarshal_class;
    
    // [MarshalInterface@FtmBase@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59610, 0x17e70 bytes
    // dxgi.dll .text:0x59700, 0x17e70 bytes
    // dxgi.dll .text:0x64fb0, 0x18b10 bytes
    // dxgi.dll .text:0x5abc0, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) marshal_interface;
    
    // [ReleaseMarshalData@FtmBase@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59860, 0x17e70 bytes
    // dxgi.dll .text:0x59950, 0x17e70 bytes
    // dxgi.dll .text:0x651d0, 0x18b10 bytes
    // dxgi.dll .text:0x5ae20, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) release_marshal_data;
    
    // [UnmarshalInterface@FtmBase@WRL@Microsoft]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5a1a0, 0x17e70 bytes
    // dxgi.dll .text:0x5a290, 0x17e70 bytes
    // dxgi.dll .text:0x65c90, 0x18b10 bytes
    // dxgi.dll .text:0x5b760, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) unmarshal_interface;
};
#include "magic/api.end.hpp"
