#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_connection::c_frame_stats
{
    // [FreeTargetPool@CFrameStats@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb1e08, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) free_target_pool;
    
    // [SetCurrentStats@CFrameStats@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9f8d4, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) set_current_stats;
    
    // [TargetStatsCompleted@CFrameStats@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9fbbc, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) target_stats_completed;
};
#include "magic/api.end.hpp"
