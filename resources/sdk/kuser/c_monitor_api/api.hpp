#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_monitor_api
{
    // [??1CMonitorAPI@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x116864, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0CMonitorAPI@@QEAA@PEAJ@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x127118, 0x1596d bytes
    // win32kfull.sys .text:0x116b68, 0x1659e bytes
    // win32kfull.sys .text:0x128058, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [DdcciSetVCPFeature@CMonitorAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2721e4, 0x1596d bytes
    // win32kfull.sys .text:0x272290, 0x1659e bytes
    // win32kfull.sys .text:0x272134, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) ddcci_set_vcp_feature;
    
    // [CreatePhysicalMonitor@CMonitorAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a5ac, 0x13864 bytes
    // win32kfull.sys .text:0x271364, 0x1596d bytes
    // win32kfull.sys .text:0x271414, 0x1659e bytes
    // win32kfull.sys .text:0x2712b4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) create_physical_monitor;
    
    // [DdcciGetCapabilitiesString@CMonitorAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a6a8, 0x13864 bytes
    // win32kfull.sys .text:0x271468, 0x1596d bytes
    // win32kfull.sys .text:0x271514, 0x1659e bytes
    // win32kfull.sys .text:0x2713b8, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) ddcci_get_capabilities_string;
    
    // [DdcciGetCapabilitiesStringLength@CMonitorAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25abc4, 0x13864 bytes
    // win32kfull.sys .text:0x271b7c, 0x1596d bytes
    // win32kfull.sys .text:0x271c28, 0x1659e bytes
    // win32kfull.sys .text:0x271acc, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) ddcci_get_capabilities_string_length;
    
    // [DdcciGetTimingReport@CMonitorAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25aca8, 0x13864 bytes
    // win32kfull.sys .text:0x271c9c, 0x1596d bytes
    // win32kfull.sys .text:0x271d48, 0x1659e bytes
    // win32kfull.sys .text:0x271bec, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) ddcci_get_timing_report;
    
    // [DdcciGetVCPFeature@CMonitorAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25ae24, 0x13864 bytes
    // win32kfull.sys .text:0x271e04, 0x1596d bytes
    // win32kfull.sys .text:0x271eb0, 0x1659e bytes
    // win32kfull.sys .text:0x271d54, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) ddcci_get_vcp_feature;
    
    // [DestroyPhysicalMonitor@CMonitorAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b368, 0x13864 bytes
    // win32kfull.sys .text:0x27241c, 0x1596d bytes
    // win32kfull.sys .text:0x2724cc, 0x1659e bytes
    // win32kfull.sys .text:0x27236c, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) destroy_physical_monitor;
    
    // [GetMonitorDescription@CMonitorAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b474, 0x13864 bytes
    // win32kfull.sys .text:0x272550, 0x1596d bytes
    // win32kfull.sys .text:0x272600, 0x1659e bytes
    // win32kfull.sys .text:0x2724a0, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) get_monitor_description;
};
#include "magic/api.end.hpp"
