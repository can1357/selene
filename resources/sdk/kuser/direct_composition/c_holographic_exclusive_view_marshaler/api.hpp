#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_holographic_exclusive_view_marshaler
{
    // [EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5f74, 0x243e0 bytes
    // win32kbase.sys .text:0x244884, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3d34, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_create;
    
    // [EmitSwapChain@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6068, 0x243e0 bytes
    // win32kbase.sys .text:0x244978, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3e28, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_swap_chain;
    
    // [EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f60f0, 0x243e0 bytes
    // win32kbase.sys .text:0x244a00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3eb0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f614c, 0x243e0 bytes
    // win32kbase.sys .text:0x244a5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3f0c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_view_data;
    
    // [Initialize@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd2890, 0x243e0 bytes
    // win32kbase.sys .text:0x243fd0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd1230, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetHandleProperty@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6390, 0x243e0 bytes
    // win32kbase.sys .text:0x244ca0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4150, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_handle_property;
    
    // [SetIntegerProperty@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6410, 0x243e0 bytes
    // win32kbase.sys .text:0x244d20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f41d0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6480, 0x243e0 bytes
    // win32kbase.sys .text:0x244d90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4240, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CHolographicExclusiveViewMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6520, 0x243e0 bytes
    // win32kbase.sys .text:0x244e30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f42e0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
