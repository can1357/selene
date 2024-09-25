#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_section_wrapper_marshaler
{
    // [EmitSetSharedSection@CSharedSectionWrapperMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2008f8, 0x243e0 bytes
    // win32kbase.sys .text:0x24fe38, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe6c8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_shared_section;
    
    // [EmitUpdateCommands@CSharedSectionWrapperMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200990, 0x243e0 bytes
    // win32kbase.sys .text:0x24fed0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe760, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CSharedSectionWrapperMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e40, 0x243e0 bytes
    // win32kbase.sys .text:0xdaeb0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc87e0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CSharedSectionWrapperMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de590, 0x243e0 bytes
    // win32kbase.sys .text:0x22cc60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dc350, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
    
    // [ReleaseAllReferences@CSharedSectionWrapperMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5c00, 0x243e0 bytes
    // win32kbase.sys .text:0x23dd20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e39c0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CSharedSectionWrapperMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2009b0, 0x243e0 bytes
    // win32kbase.sys .text:0x24fef0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe780, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSharedSectionWrapperMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2009f0, 0x243e0 bytes
    // win32kbase.sys .text:0x24ff30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe7c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSharedSectionWrapperMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca0c0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb170, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8a60, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
