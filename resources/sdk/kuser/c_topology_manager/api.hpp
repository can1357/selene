#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_topology_manager
{
    // [GetCurrent@CTopologyManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd9b60, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_current;
    
    // [OnDriverUnload@CTopologyManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x8b3c0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) on_driver_unload;
    
    // [UpdateCurrent@CTopologyManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x66f40, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) update_current;
};
#include "magic/api.end.hpp"
