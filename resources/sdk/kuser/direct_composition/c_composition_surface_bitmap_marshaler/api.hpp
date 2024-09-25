#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_surface_bitmap_marshaler
{
    // [GetType@CCompositionSurfaceBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6ce80, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCompositionSurfaceBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6cec0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [SetHandleProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb10c0, 0x243e0 bytes
    // win32kbase.sys .text:0xc2250, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7550, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_handle_property;
    
    // [EmitUpdateCommands@CCompositionSurfaceBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6cdf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x79bc0, 0x243e0 bytes
    // win32kbase.sys .text:0xc19d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa220, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CCompositionSurfaceBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ce90, 0x1eb80 bytes
    // win32kbase.sys .text:0xb8490, 0x243e0 bytes
    // win32kbase.sys .text:0xcdad0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2ad0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ced0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1660, 0x243e0 bytes
    // win32kbase.sys .text:0xc3460, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7af0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CCompositionSurfaceBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4fa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2330, 0x243e0 bytes
    // win32kbase.sys .text:0x2379c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f00f0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
