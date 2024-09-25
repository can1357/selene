#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_driver_block_list
{
    // [??0CDriverBlockList@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0xdac8, 0x17e70 bytes
    // dxgi.dll .text:0xdaf8, 0x17e70 bytes
    // dxgi.dll .text:0x8fb0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CDriverBlockList@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x57ed8, 0x17e70 bytes
    // dxgi.dll .text:0x57fc8, 0x17e70 bytes
    // dxgi.dll .text:0x62ff4, 0x18b10 bytes
    // dxgi.dll .text:0x59458, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [GenerateBlockListAdapterString@CDriverBlockList]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9968, 0x17e70 bytes
    // dxgi.dll .text:0x9968, 0x17e70 bytes
    // dxgi.dll .text:0x7a40, 0x18b10 bytes
    // dxgi.dll .text:0x1e1e8, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) generate_block_list_adapter_string;
    
    // [IsAdapterBlocked@CDriverBlockList]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x15288, 0x17e70 bytes
    // dxgi.dll .text:0x154e8, 0x17e70 bytes
    // dxgi.dll .text:0x105f8, 0x18b10 bytes
    // dxgi.dll .text:0x109f8, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) is_adapter_blocked;
    
    // [IsAdapterDriverVersionBlocked@CDriverBlockList]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9724, 0x17e70 bytes
    // dxgi.dll .text:0x9724, 0x17e70 bytes
    // dxgi.dll .text:0x77d8, 0x18b10 bytes
    // dxgi.dll .text:0x1dfa4, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) is_adapter_driver_version_blocked;
    
    // [IsDriverVersionInBlockListVersionString@CDriverBlockList]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x593c4, 0x17e70 bytes
    // dxgi.dll .text:0x594b4, 0x17e70 bytes
    // dxgi.dll .text:0x64d6c, 0x18b10 bytes
    // dxgi.dll .text:0x5a974, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) is_driver_version_in_block_list_version_string;
    
    // [QueryBlockListDatabase@CDriverBlockList]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x981c, 0x17e70 bytes
    // dxgi.dll .text:0x981c, 0x17e70 bytes
    // dxgi.dll .text:0x78cc, 0x18b10 bytes
    // dxgi.dll .text:0x1e09c, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) query_block_list_database;
};
#include "magic/api.end.hpp"
