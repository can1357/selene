#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_snapshot_marshaler
{
    // [GetType@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f700, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8870, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitTransform@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5380, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2e18, 0x243e0 bytes
    // win32kbase.sys .text:0x241938, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0bd8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_transform;
    
    // [EmitUpdate@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5410, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2eb0, 0x243e0 bytes
    // win32kbase.sys .text:0x2419d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0c70, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update;
    
    // [EmitUpdateCommands@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7c3d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2f70, 0x243e0 bytes
    // win32kbase.sys .text:0x241a90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0d30, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf54c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2fc0, 0x243e0 bytes
    // win32kbase.sys .text:0x241ae0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0d80, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xefee0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2fe0, 0x243e0 bytes
    // win32kbase.sys .text:0x241b00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0da0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf54e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3010, 0x243e0 bytes
    // win32kbase.sys .text:0x241b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0dd0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5580, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f30b0, 0x243e0 bytes
    // win32kbase.sys .text:0x241bd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0e70, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf55f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3130, 0x243e0 bytes
    // win32kbase.sys .text:0x241c50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0ef0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSnapshotMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae80, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9af0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8490, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
