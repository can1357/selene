#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_rapid_hpd_info
{
    // [Delete@CRapidHpdInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1185a0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) _delete;
    
    // [??0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x246dd8, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [ResetTimer@CRapidHpdInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x247034, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) reset_timer;
    
    // [s_pRapidHpdInfo@CRapidHpdInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .data:0x33abd0, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) s_p_rapid_hpd_info;
    
    // [s_timeoutMs@CRapidHpdInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .data:0x32ff60, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) s_timeout_ms;
};
#include "magic/api.end.hpp"
