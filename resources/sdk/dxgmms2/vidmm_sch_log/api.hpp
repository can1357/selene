#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_sch_log
{
    // [CreateSchLog@VIDMM_SCH_LOG]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3e6f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x46eb0, 0x20ba bytes
    // dxgmms2.sys .text:0x3e674, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) create_sch_log;
    
    // [??1VIDMM_SCH_LOG@@AEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3e5c4, 0x1c52 bytes
    // dxgmms2.sys .text:0x46d44, 0x20ba bytes
    // dxgmms2.sys .text:0x3e544, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [GetCpuVa@VIDMM_SCH_LOG]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3ea58, 0x1c52 bytes
    // dxgmms2.sys .text:0x47440, 0x20ba bytes
    // dxgmms2.sys .text:0x3e9d8, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) get_cpu_va;
};
#include "magic/api.end.hpp"
