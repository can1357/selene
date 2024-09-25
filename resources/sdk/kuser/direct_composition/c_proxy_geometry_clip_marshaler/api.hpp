#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_proxy_geometry_clip_marshaler
{
    // [EmitUpdateCommands@CProxyGeometryClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fef10, 0x243e0 bytes
    // win32kbase.sys .text:0x24e5d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fcce0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CProxyGeometryClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fefa0, 0x243e0 bytes
    // win32kbase.sys .text:0x24e660, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fcd70, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CProxyGeometryClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1feff0, 0x243e0 bytes
    // win32kbase.sys .text:0x24e6b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fcdc0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ff0e0, 0x243e0 bytes
    // win32kbase.sys .text:0x24e7a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fceb0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
