#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_container_shape_marshaler
{
    // [ClearShapes@CContainerShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f14b0, 0x243e0 bytes
    // win32kbase.sys .text:0x236a50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef270, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) clear_shapes;
    
    // [EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1520, 0x243e0 bytes
    // win32kbase.sys .text:0x236ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef2e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CContainerShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f15b0, 0x243e0 bytes
    // win32kbase.sys .text:0x236b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef370, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceArrayProperty@CContainerShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f15f0, 0x243e0 bytes
    // win32kbase.sys .text:0x236b90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef3b0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetRemarshalingFlags@CContainerShapeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f16e0, 0x243e0 bytes
    // win32kbase.sys .text:0x236c70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef4a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
