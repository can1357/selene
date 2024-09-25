#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_blurred_wallpaper_backdrop_brush_marshaler
{
    // [EmitUpdateCommands@CBlurredWallpaperBackdropBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CBlurredWallpaperBackdropBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [TryGetBrushSourceNoRef@CBlurredWallpaperBackdropBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdaef0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) try_get_brush_source_no_ref;
};
#include "magic/api.end.hpp"
