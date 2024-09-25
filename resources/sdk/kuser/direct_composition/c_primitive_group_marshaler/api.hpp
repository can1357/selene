#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_primitive_group_marshaler
{
    // [EmitAppendColorResources@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x61a90, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_append_color_resources;
    
    // [EmitClearColorResourcesCommand@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x61b50, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_clear_color_resources_command;
    
    // [EmitClearSurfaceResourcesCommand@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x61ae0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_clear_surface_resources_command;
    
    // [GetType@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x61f10, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x61ed0, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) is_of_type;
    
    // [EmitAddPrimitivesCommand@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61c70, 0x1eb80 bytes
    // win32kbase.sys .text:0x76ce0, 0x243e0 bytes
    // win32kbase.sys .text:0x28320, 0x27ef0 bytes
    // win32kbase.sys .text:0x85d0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_add_primitives_command;
    
    // [EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61990, 0x1eb80 bytes
    // win32kbase.sys .text:0x7871c, 0x243e0 bytes
    // win32kbase.sys .text:0x29718, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f88, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_append_surface_resources;
    
    // [EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61880, 0x1eb80 bytes
    // win32kbase.sys .text:0x76f70, 0x243e0 bytes
    // win32kbase.sys .text:0x283b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x8860, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_dirty_and_bounds_rect_command;
    
    // [EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61750, 0x1eb80 bytes
    // win32kbase.sys .text:0x76c00, 0x243e0 bytes
    // win32kbase.sys .text:0x28240, 0x27ef0 bytes
    // win32kbase.sys .text:0x84f0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_update_commands;
    
    // [IsEarlyDestroyNotificationSupported@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f790, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) is_early_destroy_notification_supported;
    
    // [ReleaseAllReferences@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61e60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa5100, 0x243e0 bytes
    // win32kbase.sys .text:0xc6710, 0x27ef0 bytes
    // win32kbase.sys .text:0x945a0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) release_all_references;
    
    // [ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6181c, 0x1eb80 bytes
    // win32kbase.sys .text:0x4910, 0x243e0 bytes
    // win32kbase.sys .text:0x64b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x4910, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) release_resource_marshalers;
    
    // [SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61d00, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa2a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb9970, 0x27ef0 bytes
    // win32kbase.sys .text:0x9fab0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61e20, 0x1eb80 bytes
    // win32kbase.sys .text:0xab310, 0x243e0 bytes
    // win32kbase.sys .text:0xbbb90, 0x27ef0 bytes
    // win32kbase.sys .text:0xa0e20, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61b80, 0x1eb80 bytes
    // win32kbase.sys .text:0xa5180, 0x243e0 bytes
    // win32kbase.sys .text:0x2b250, 0x27ef0 bytes
    // win32kbase.sys .text:0x94620, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x61d80, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa170, 0x243e0 bytes
    // win32kbase.sys .text:0xb98c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f980, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CPrimitiveGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeaa10, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2b40, 0x243e0 bytes
    // win32kbase.sys .text:0x241660, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0900, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
