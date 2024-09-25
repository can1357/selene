#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_capture_controller_marshaler
{
    // [Create@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201ea0, 0x243e0 bytes
    // win32kbase.sys .text:0x2521c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffc70, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201f80, 0x243e0 bytes
    // win32kbase.sys .text:0x252390, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffd50, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [EmitUpdateCommands@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [IsOfType@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201fa0, 0x243e0 bytes
    // win32kbase.sys .text:0x2523b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffd70, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
    
    // [OpenSharedHandle@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201fd0, 0x243e0 bytes
    // win32kbase.sys .text:0x2523e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffda0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x202010, 0x243e0 bytes
    // win32kbase.sys .text:0x252420, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffde0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetFloatProperty@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSharedReadCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_reference_property;
};
#include "magic/api.end.hpp"
