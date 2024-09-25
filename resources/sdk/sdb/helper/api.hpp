#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace sdb::helper
{
    // [GetDirectXDatabaseFullPath@SdbHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x2aa08, 0x17e70 bytes
    // dxgi.dll .text:0x2ae44, 0x17e70 bytes
    // dxgi.dll .text:0x2c2c4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) get_direct_x_database_full_path;
    
    // [GetSourceType@SdbHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7c59c, 0x17e70 bytes
    // dxgi.dll .text:0x7c718, 0x17e70 bytes
    // dxgi.dll .text:0x7d49c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) get_source_type;
    
    // [InitDatabase@SdbHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7d8d4, 0x17e70 bytes
    // dxgi.dll .text:0x7da54, 0x17e70 bytes
    // dxgi.dll .text:0x7e418, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) init_database;
    
    // [QueryDirectXDatabaseForAppDataImpl@SdbHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7d9c4, 0x17e70 bytes
    // dxgi.dll .text:0x7db44, 0x17e70 bytes
    // dxgi.dll .text:0x7e508, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) query_direct_x_database_for_app_data_impl;
    
    // [QueryDirectXDatabaseForConfigImpl@SdbHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7da48, 0x17e70 bytes
    // dxgi.dll .text:0x7dbc8, 0x17e70 bytes
    // dxgi.dll .text:0x7e58c, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) query_direct_x_database_for_config_impl;
    
    // [QueryDirectXDatabaseImpl@SdbHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7dc14, 0x17e70 bytes
    // dxgi.dll .text:0x7dd94, 0x17e70 bytes
    // dxgi.dll .text:0x7e758, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) query_direct_x_database_impl;
    
    // [ReleaseDatabase@SdbHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0xade8, 0x17e70 bytes
    // dxgi.dll .text:0xae18, 0x17e70 bytes
    // dxgi.dll .text:0x1f628, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) release_database;
};
#include "magic/api.end.hpp"
