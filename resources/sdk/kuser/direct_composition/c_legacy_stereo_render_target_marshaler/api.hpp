#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_legacy_stereo_render_target_marshaler
{
    // [GetType@CLegacyStereoRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e00, 0x243e0 bytes
    // win32kbase.sys .text:0xdae90, 0x27ef0 bytes
    // win32kbase.sys .text:0xc87a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CLegacyStereoRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de560, 0x243e0 bytes
    // win32kbase.sys .text:0x22cc30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc320, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [SetIntegerProperty@CLegacyStereoRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de8a0, 0x243e0 bytes
    // win32kbase.sys .text:0x22ce30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc660, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_integer_property;
};
#include "magic/api.end.hpp"
