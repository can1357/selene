#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_desktop_target_marshaler
{
    // [EmitCreate@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c030, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_create;
    
    // [EmitDcompTargetGroup@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7bf20, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_dcomp_target_group;
    
    // [EmitRoot@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7bf00, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_root;
    
    // [EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7be80, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c140, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) get_type;
    
    // [ReleaseAllReferences@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c0d0, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7c110, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7bf90, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xeb4a0, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
