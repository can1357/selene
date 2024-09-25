#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidsch_vsync_smoother
{
    // [GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x1cd00, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) get_smoothened_duration_qpc;
    
    // [GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x33c6c, 0x20ba bytes
    //
    _m1(sdk::unknown_ptr) get_smoothened_frame_time_qpc;
    
    // [OnReset@VIDSCH_VSYNC_SMOOTHER]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    //
    _m2(sdk::unknown_ptr) on_reset;
    
    // [ResetSmoother@VIDSCH_VSYNC_SMOOTHER]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x1ce48, 0x20ba bytes
    //
    _m3(sdk::unknown_ptr) reset_smoother;
    
    // [SmoothenFrame@VIDSCH_VSYNC_SMOOTHER]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x63f0, 0x20ba bytes
    //
    _m4(sdk::unknown_ptr) smoothen_frame;
};
#include "magic/api.end.hpp"
