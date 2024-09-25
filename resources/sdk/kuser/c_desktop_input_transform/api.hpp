#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_desktop_input_transform
{
    // [GetInstance@CDesktopInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc7d54, 0x243e0 bytes
    // win32kbase.sys .text:0xc0950, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_instance;
    
    // [GetTransform@CDesktopInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4500, 0x243e0 bytes
    // win32kbase.sys .text:0x1c22e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_transform;
    
    // [IsDesktopVisualInputSink@CDesktopInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4528, 0x243e0 bytes
    // win32kbase.sys .text:0x1c2308, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_desktop_visual_input_sink;
    
    // [IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c45b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1c2390, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_desktop_visual_input_sink_map_identity;
    
    // [SetDesktopVisualInputSink@CDesktopInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4614, 0x243e0 bytes
    // win32kbase.sys .text:0x1c23f4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_desktop_visual_input_sink;
    
    // [TransformMouseCoordinates@CDesktopInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4720, 0x243e0 bytes
    // win32kbase.sys .text:0x1c2500, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) transform_mouse_coordinates;
    
    // [TransformPointerCoordinates@CDesktopInputTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4804, 0x243e0 bytes
    // win32kbase.sys .text:0x1c25e4, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) transform_pointer_coordinates;
};
#include "magic/api.end.hpp"
