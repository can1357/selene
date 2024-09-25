#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_cube_map_marshaler
{
    // [EmitSurfaces@CCompositionCubeMapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc9a8, 0x243e0 bytes
    // win32kbase.sys .text:0x24beb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa778, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_surfaces;
    
    // [EmitUpdateCommands@CCompositionCubeMapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fcaf0, 0x243e0 bytes
    // win32kbase.sys .text:0x24bff0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa8c0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CCompositionCubeMapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fcb60, 0x243e0 bytes
    // win32kbase.sys .text:0x24c060, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa930, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CCompositionCubeMapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fcbe0, 0x243e0 bytes
    // win32kbase.sys .text:0x24c0e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa9b0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CCompositionCubeMapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fcd00, 0x243e0 bytes
    // win32kbase.sys .text:0x24c340, 0x27ef0 bytes
    // win32kbase.sys .text:0x1faad0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CCompositionCubeMapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fcd30, 0x243e0 bytes
    // win32kbase.sys .text:0x24c370, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fab00, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCompositionCubeMapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca080, 0x243e0 bytes
    // win32kbase.sys .text:0xdb130, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8a20, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
