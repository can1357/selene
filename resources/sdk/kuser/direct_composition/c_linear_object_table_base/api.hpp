#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_linear_object_table_base
{
    // [EnumerateObjects@CLinearObjectTableBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62be0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa4d48, 0x243e0 bytes
    // win32kbase.sys .text:0xb1e34, 0x27ef0 bytes
    // win32kbase.sys .text:0x94428, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) enumerate_objects;
    
    // [InsertObject@CLinearObjectTableBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62b44, 0x1eb80 bytes
    // win32kbase.sys .text:0x45930, 0x243e0 bytes
    // win32kbase.sys .text:0x2bdcc, 0x27ef0 bytes
    // win32kbase.sys .text:0x35590, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) insert_object;
    
    // [ReleaseHandle@CLinearObjectTableBase@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x62c30, 0x1eb80 bytes
    // win32kbase.sys .text:0x47b08, 0x243e0 bytes
    // win32kbase.sys .text:0x2db84, 0x27ef0 bytes
    // win32kbase.sys .text:0x37768, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_handle;
};
#include "magic/api.end.hpp"
