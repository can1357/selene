#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_monitor_topology
{
    // [CompareToCurrent@CMonitorTopology]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x676c0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) compare_to_current;
    
    // [CreateTopologySnapshot@CMonitorTopology]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x67038, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) create_topology_snapshot;
    
    // [GetMonitorFromId@CMonitorTopology]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x677c0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) get_monitor_from_id;
    
    // [GetMonitorId@CMonitorTopology]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x67474, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) get_monitor_id;
    
    // [IdenticalToCurrent@CMonitorTopology]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15d450, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) identical_to_current;
    
    // [UnlockAndRelease@CMonitorTopology]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x6b61c, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) unlock_and_release;
};
#include "magic/api.end.hpp"
