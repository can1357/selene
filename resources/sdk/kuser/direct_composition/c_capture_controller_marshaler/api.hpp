#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_capture_controller_marshaler
{
    // [EmitCaptureState@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe364, 0x243e0 bytes
    // win32kbase.sys .text:0x24d9a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc134, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_capture_state;
    
    // [EmitContentSize@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe3d4, 0x243e0 bytes
    // win32kbase.sys .text:0x24da14, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc1a4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_content_size;
    
    // [EmitIsConstrainedBySize@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe448, 0x243e0 bytes
    // win32kbase.sys .text:0x24da88, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc218, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_is_constrained_by_size;
    
    // [EmitTransform@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe4b8, 0x243e0 bytes
    // win32kbase.sys .text:0x24daf8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc288, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_transform;
    
    // [EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe540, 0x243e0 bytes
    // win32kbase.sys .text:0x24db80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc310, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe610, 0x243e0 bytes
    // win32kbase.sys .text:0x24dc50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc3e0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe660, 0x243e0 bytes
    // win32kbase.sys .text:0x24dca0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc430, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe6a0, 0x243e0 bytes
    // win32kbase.sys .text:0x24dce0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc470, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe710, 0x243e0 bytes
    // win32kbase.sys .text:0x24dd50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc4e0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe790, 0x243e0 bytes
    // win32kbase.sys .text:0x24ddd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc560, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe8a0, 0x243e0 bytes
    // win32kbase.sys .text:0x24dee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc670, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe8f4, 0x243e0 bytes
    // win32kbase.sys .text:0x24df34, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc6c4, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_transform_matrix_helper;
};
#include "magic/api.end.hpp"
