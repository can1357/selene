#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_write_capture_controller_marshaler
{
    // [Create@CSharedWriteCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2020f0, 0x243e0 bytes
    // win32kbase.sys .text:0x252508, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffec0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedWriteCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201f80, 0x243e0 bytes
    // win32kbase.sys .text:0x252390, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffd50, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [IsOfType@CSharedWriteCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2021d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2526d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fffa0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201fd0, 0x243e0 bytes
    // win32kbase.sys .text:0x2523e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffda0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedWriteCaptureControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x202200, 0x243e0 bytes
    // win32kbase.sys .text:0x252700, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fffd0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
