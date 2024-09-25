#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_palm_reject_zone_info
{
    // [Convert3dTo2dMatrix@CPalmRejectZoneInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b67c4, 0x243e0 bytes
    // win32kbase.sys .text:0x1fdcb4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b4570, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) convert3d_to2d_matrix;
    
    // [ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6868, 0x243e0 bytes
    // win32kbase.sys .text:0x1fdd58, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b4614, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) convert_dips_to_screen_space_units;
    
    // [GetDelayZoneRectFromInputRect@CPalmRejectZoneInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b69bc, 0x243e0 bytes
    // win32kbase.sys .text:0x1fdeec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b4768, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_delay_zone_rect_from_input_rect;
    
    // [GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6a74, 0x243e0 bytes
    // win32kbase.sys .text:0x1fdfa8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b4820, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_input_rect_from_input_sink_in_screen_space;
    
    // [HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6b44, 0x243e0 bytes
    // win32kbase.sys .text:0x1fe078, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b48f0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) hit_test_delay_zone_palm_rejection_region;
    
    // [TransformRect@CPalmRejectZoneInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b7944, 0x243e0 bytes
    // win32kbase.sys .text:0x1ff32c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b571c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) transform_rect;
};
#include "magic/api.end.hpp"
