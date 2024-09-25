#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::atl::c_atl_module
{
    // [GetGITPtr@CAtlModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59180, 0x17e70 bytes
    // dxgi.dll .text:0x59270, 0x17e70 bytes
    // dxgi.dll .text:0x64840, 0x18b10 bytes
    // dxgi.dll .text:0x5a720, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) get_git_ptr;
    
    // [GetLockCount@CAtlModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec70, 0x17e70 bytes
    // dxgi.dll .text:0x1ef80, 0x17e70 bytes
    // dxgi.dll .text:0x26730, 0x18b10 bytes
    // dxgi.dll .text:0x1fd50, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) get_lock_count;
    
    // [Lock@CAtlModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec80, 0x17e70 bytes
    // dxgi.dll .text:0x1ef90, 0x17e70 bytes
    // dxgi.dll .text:0x26740, 0x18b10 bytes
    // dxgi.dll .text:0x1fd60, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) lock;
    
    // [Unlock@CAtlModule@ATL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ecb0, 0x17e70 bytes
    // dxgi.dll .text:0x1efc0, 0x17e70 bytes
    // dxgi.dll .text:0x26770, 0x18b10 bytes
    // dxgi.dll .text:0x1fd90, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) unlock;
};
#include "magic/api.end.hpp"
