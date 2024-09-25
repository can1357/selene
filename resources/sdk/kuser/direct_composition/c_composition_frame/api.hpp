#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_frame
{
    // [Discard@CCompositionFrame@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3f9fc, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) discard;
    
    // [GetSurfaceUpdates@CCompositionFrame@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3fb18, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_surface_updates;
    
    // [Release@CCompositionFrame@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3f968, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) release;
    
    // [Retire@CCompositionFrame@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3f994, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) retire;
    
    // [ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3fd40, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) return_legacy_token_buffer;
    
    // [s_frameIdCounter@CCompositionFrame@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .data:0x11f9c8, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) s_frame_id_counter;
};
#include "magic/api.end.hpp"
