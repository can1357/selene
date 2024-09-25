#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_gdi_sprite_bitmap_marshaler
{
    // [EmitSetDirtyFromAccumulationCommand@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23903c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_dirty_from_accumulation_command;
    
    // [EmitSetMarginsCommand@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x239bcc, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_margins_command;
    
    // [EmitSetPixelFormatCommand@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23b184, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_pixel_format_command;
    
    // [EmitSetSurfaceCommand@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23baf4, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_surface_command;
    
    // [EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23c6b0, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23d9d0, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23e030, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23e630, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CGdiSpriteBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x240300, 0x27ef0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
